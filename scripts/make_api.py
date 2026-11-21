# make_api.py: build recomp/data/api_table.json for the imports of the Hoyle exe.
# stdcall argument counts come from the MinGW import libraries (nm); cdecl functions have no @N and the caller pops.
import json
import os
import re
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cfg

MINGW = os.environ.get("MINGW32", r"D:\msys64\mingw32")
MINGW_LIB = os.path.join(MINGW, "lib")
NM = os.path.join(MINGW, "bin", "nm.exe")
IMPORTS = os.path.join(cfg.ida_dump(), "imports.txt")
OUT = os.path.join(cfg.DATA, "api_table.json")
LIBS = ("libkernel32.a", "libuser32.a", "libgdi32.a", "libshell32.a", "libole32.a",
        "libwinmm.a", "libcomdlg32.a", "libadvapi32.a", "libwinspool.a", "libdbghelp.a")
CDECL_MODULES = ("openal32", "freetype6", "msvcr80", "msvcp80")
AL_NARGS = {"alGenBuffers": 2, "alGenSources": 2, "alGetError": 0, "alDeleteSources": 2, "alDeleteBuffers": 2,
            "alSourcei": 3, "alListenerfv": 2, "alGetListenerfv": 2, "alSourcef": 3, "alSourcefv": 3,
            "alGetSourcei": 3, "alSourceRewind": 1, "alSourceStop": 1, "alSourcePlay": 1, "alGetBufferi": 3,
            "alBufferData": 5, "alSourcePause": 1, "alSource3f": 5, "alSourceQueueBuffers": 3,
            "alcGetCurrentContext": 0, "alcGetContextsDevice": 1, "alcDestroyContext": 1, "alcCloseDevice": 1,
            "alcOpenDevice": 1, "alcCreateContext": 2, "alcMakeContextCurrent": 1, "alGetSourcef": 3,
            "alGetString": 1, "alSourceUnqueueBuffers": 3}

syms = {}
env = dict(os.environ)
env["PATH"] = os.path.join(MINGW, "bin") + os.pathsep + env.get("PATH", "")
for lib in LIBS:
    path = os.path.join(MINGW_LIB, lib)
    if not os.path.exists(path):
        continue
    out = subprocess.run([NM, "-A", path], capture_output=True, text=True, env=env).stdout
    for line in out.splitlines():
        parts = line.split()
        if len(parts) < 3:
            continue
        kind, sym = parts[-2], parts[-1]
        if sym.startswith("__imp__"):
            sym = sym[len("__imp__"):]
        if sym.startswith("_"):
            sym = sym[1:]
        m = re.match(r"^(.+)@(\d+)$", sym)
        if m and int(m.group(2)) % 4 == 0:
            syms.setdefault(m.group(1), ("stdcall", int(m.group(2)) // 4))
        elif kind in ("T", "I") and "@" not in sym:
            syms.setdefault(sym, ("cdecl", None))

rows = []
for line in open(IMPORTS, encoding="utf-8"):
    parts = line.rstrip("\n").split("\t")
    if len(parts) < 3:
        continue
    module, ea, name = parts[0], parts[1], parts[2]
    ordinal = parts[3] if len(parts) > 3 else ""
    if name.startswith("__imp_"):
        name = name[6:]
    if (name.startswith("ord") or name.startswith(module.lower() + "_")) and ordinal.isdigit():
        name = "#" + ordinal
    conv, nargs = syms.get(name, (None, None))
    if module.lower() in CDECL_MODULES:
        conv = "cdecl"
    if module == "MSVCP80" and "@@Q" in name:
        conv = "thiscall"
        nargs = 0 if name.endswith("XZ") else 1
    if conv is None:
        conv = "stdcall"
    if nargs is None and conv == "cdecl":
        nargs = AL_NARGS.get(name, 4)
    rows.append({"module": module, "name": name, "ea": "0x" + ea, "nargs": nargs,
                 "conv": conv, "source": "nm", "confidence": "high" if nargs is not None else "low"})

with open(OUT, "w", encoding="utf-8") as f:
    json.dump(rows, f, indent=1)
known = sum(1 for r in rows if r["nargs"] is not None)
print("imports %d, nargs known %d -> %s" % (len(rows), known, OUT))
