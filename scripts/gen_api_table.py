# gen_api_table.py: build api_table.json for the DLL imports of the 32-bit exe.
# stdcall/cdecl arg counts come from mingw import libs (nm) or, for fmod, from disassembly of fmod.dll.
import json, os, re, struct, subprocess
from collections import Counter
from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_OP_IMM

import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cfg

MINGW = cfg.mingw32()
IMPORTS = os.path.join(cfg.ida_dump(), "imports.json")
OUT = os.path.join(cfg.DATA, "api_table.json")
MINGW_LIB = os.path.join(MINGW, "lib")
NM = os.path.join(MINGW, "bin", "nm.exe")
FMOD_CANDIDATES = [cfg.fmod_dll()]


def load_lib_syms(lib_file):
    """Return dict name -> set of (conv, nargs_or_None) from a mingw import lib."""
    path = os.path.join(MINGW_LIB, lib_file)
    if not os.path.exists(path):
        return None
    env = dict(os.environ)
    env["PATH"] = os.path.join(MINGW, "bin") + os.pathsep + env.get("PATH", "")
    out = subprocess.run([NM, "-A", path], capture_output=True, text=True, env=env).stdout
    syms = {}
    for line in out.splitlines():
        parts = line.split()
        if len(parts) < 3:
            continue
        kind, sym = parts[-2], parts[-1]
        if sym.startswith("__imp__"):
            s = sym[len("__imp__"):]
        elif sym.startswith("_"):
            s = sym[1:]
        else:
            continue
        m = re.match(r"^(.+)@(\d+)$", s)
        if m:
            name, n = m.group(1), int(m.group(2))
            if n % 4 != 0:
                continue
            syms.setdefault(name, set()).add(("stdcall", n // 4))
        elif kind == "T" and not sym.startswith("__imp"):
            # undecorated text symbol: cdecl
            syms.setdefault(s, set()).add(("cdecl", None))
    return syms


def read_pe(path):
    data = open(path, "rb").read()
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    assert data[e_lfanew:e_lfanew + 4] == b"PE\0\0"
    nsec = struct.unpack_from("<H", data, e_lfanew + 6)[0]
    opt_size = struct.unpack_from("<H", data, e_lfanew + 20)[0]
    opt = e_lfanew + 24
    assert struct.unpack_from("<H", data, opt)[0] == 0x10B, "expected PE32"
    exp_rva, exp_size = struct.unpack_from("<II", data, opt + 96)
    secs = []
    sec_off = opt + opt_size
    for i in range(nsec):
        o = sec_off + i * 40
        vsize, va, rawsz, rawptr = struct.unpack_from("<IIII", data, o + 8)
        secs.append((va, max(vsize, rawsz), rawptr))
    return data, secs, exp_rva, exp_size


def rva_to_off(secs, rva):
    for va, size, raw in secs:
        if va <= rva < va + size:
            return raw + (rva - va)
    raise ValueError("rva outside sections: 0x%x" % rva)


def read_exports(data, secs, exp_rva, exp_size):
    off = rva_to_off(secs, exp_rva)
    nfuncs, nnames = struct.unpack_from("<II", data, off + 20)
    aof, aon, aono = struct.unpack_from("<III", data, off + 28)
    funcs = {}
    for i in range(nnames):
        name_rva = struct.unpack_from("<I", data, rva_to_off(secs, aon) + 4 * i)[0]
        idx = struct.unpack_from("<H", data, rva_to_off(secs, aono) + 2 * i)[0]
        no = rva_to_off(secs, name_rva)
        name = data[no:data.index(b"\0", no)].decode("ascii")
        frva = struct.unpack_from("<I", data, rva_to_off(secs, aof) + 4 * idx)[0]
        kind = "forwarder" if exp_rva <= frva < exp_rva + exp_size else "rva"
        funcs[name] = (kind, frva)
    return funcs


md = Cs(CS_ARCH_X86, CS_MODE_32)
md.detail = True


def analyze_fmod(data, secs, rva):
    """Return (main-path ret imm or None, set of all reachable ret imms, notes)."""
    def sect_of(r):
        for va, size, raw in secs:
            if va <= r < va + size:
                return (va, size)
        return None

    def one(r):
        ins = list(md.disasm(data[rva_to_off(secs, r):rva_to_off(secs, r) + 16], r, 1))
        return ins[0] if ins else None

    notes = []
    # follow pure jmp thunks (direct jmp as first instruction)
    for _ in range(4):
        i = one(rva)
        if i is None:
            return None, set(), ["cannot decode entry"]
        if i.mnemonic == "jmp" and i.operands and i.operands[0].type == CS_OP_IMM \
                and sect_of(i.operands[0].imm):
            notes.append("thunk 0x%x -> 0x%x" % (rva, i.operands[0].imm))
            rva = i.operands[0].imm
        else:
            break
    entry = rva
    sec = sect_of(entry)

    # main path: fall through conditional branches, follow direct jmps, stop at first ret
    main = None
    cur, seen = entry, set()
    for _ in range(4000):
        if cur in seen:
            break
        seen.add(cur)
        i = one(cur)
        if i is None:
            notes.append("undecodable at 0x%x" % cur)
            break
        if i.mnemonic == "ret":
            main = i.operands[0].imm if i.op_str else 0
            break
        if i.mnemonic == "jmp":
            if i.operands and i.operands[0].type == CS_OP_IMM:
                cur = i.operands[0].imm
                continue
            notes.append("indirect jmp on main path at 0x%x" % cur)
            break
        cur += i.size

    # all rets reachable (DFS over all branches, bounded to the entry's section)
    rets = set()
    work, seen2, n = [entry], set(), 0
    while work and n < 20000:
        a = work.pop()
        while sec and sec[0] <= a < sec[0] + sec[1] and a not in seen2 and n < 20000:
            seen2.add(a)
            n += 1
            i = one(a)
            if i is None:
                break
            if i.mnemonic == "ret":
                rets.add(i.operands[0].imm if i.op_str else 0)
                break
            if i.mnemonic == "jmp":
                if i.operands and i.operands[0].type == CS_OP_IMM:
                    work.append(i.operands[0].imm)
                break
            if i.mnemonic.startswith("j") and i.operands and i.operands[0].type == CS_OP_IMM:
                work.append(i.operands[0].imm)
            a += i.size
    return main, rets, notes


def main():
    imports = json.load(open(IMPORTS))
    lib_cache = {}

    def lib_syms(mod):
        if mod not in lib_cache:
            lib_cache[mod] = load_lib_syms("lib%s.a" % mod)
        return lib_cache[mod]

    fmod_path = next((p for p in FMOD_CANDIDATES if os.path.exists(p)), None)
    fmod_data = fmod_secs = fmod_exports = None
    if fmod_path:
        fmod_data, fmod_secs, fer, fes = read_pe(fmod_path)
        fmod_exports = read_exports(fmod_data, fmod_secs, fer, fes)

    result = []
    for imp in imports:
        mod, name = imp["module"], imp["name"]
        e = {"module": mod, "name": name, "ea": imp["ea"], "nargs": None,
             "conv": "stdcall", "source": None, "confidence": None, "notes": []}
        if mod == "fmod":
            e["source"] = "fmod_disasm"
            if not fmod_exports or name not in fmod_exports or fmod_exports[name][0] != "rva":
                e["notes"].append("no direct export in fmod.dll")
            else:
                main_ret, rets, notes = analyze_fmod(fmod_data, fmod_secs, fmod_exports[name][1])
                e["notes"] += notes
                tail_only = main_ret is None and len(rets) == 1 and \
                    any(n.startswith("indirect jmp") for n in notes)
                if tail_only:
                    # main path ends in an indirect tail jump; the only plain rets reachable agree
                    main_ret = next(iter(rets))
                    e["notes"].append("nargs from the only reachable ret (path ends in indirect tail jmp)")
                if main_ret is None:
                    e["notes"].append("no main-path ret")
                elif main_ret % 4 != 0:
                    e["notes"].append("ret imm %d not multiple of 4" % main_ret)
                else:
                    e["nargs"] = main_ret // 4
                    e["confidence"] = "high" if rets == {main_ret} and not tail_only else "low"
                    if rets != {main_ret}:
                        e["notes"].append("all rets: %s" % sorted(rets))
        else:
            e["source"] = "nm"
            found = (lib_syms("%s" % mod) or {}).get(name) if mod != "wsock32" else None
            if mod == "wsock32":
                found = (lib_syms("wsock32") or {}).get(name)
                if not found:
                    found = (lib_syms("ws2_32") or {}).get(name)
                    if found:
                        e["notes"].append("taken from libws2_32.a")
            if not found:
                e["notes"].append("not found in mingw lib")
            elif len(found) > 1:
                e["notes"].append("ambiguous: %s" % sorted(found, key=str))
            else:
                conv, n = next(iter(found))
                e["conv"], e["nargs"], e["confidence"] = conv, n, "high"
        result.append(e)

    out = [{k: e[k] for k in ("module", "name", "ea", "nargs", "conv", "source", "confidence")}
           for e in result]
    with open(OUT, "w", encoding="utf-8", newline="\n") as f:
        json.dump(out, f, indent=1)
        f.write("\n")

    for e in result:
        if e["notes"] or e["source"] == "fmod_disasm":
            print(e["module"], e["name"], "nargs=", e["nargs"], e["conv"], e["confidence"], e["notes"])
    res, unres = Counter(), Counter()
    for e in result:
        (res if e["nargs"] is not None or e["conv"] == "cdecl" else unres)[e["module"]] += 1
    print("resolved:", dict(res))
    print("unresolved:", dict(unres))
    print("fmod path:", fmod_path)


main()
