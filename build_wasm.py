#!/usr/bin/env python3
"""Build the WebAssembly target.

The guest image is copied into low linear memory; the module's static data and heap start at
WASM_GLOBAL_BASE (the image end), so guest addresses stay absolute and the normal heap cannot
overlap them. Asyncify lets the guest's blocking message loop yield to the browser.
"""
import argparse
import os
import shutil
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent
EMCC = ROOT / "build" / "emsdk" / "upstream" / "emscripten" / "emcc.exe"
OUT = ROOT / "bin" / "wasm"
OBJ = ROOT / "build" / "wasm_obj"

# Hoyle Casino: image base 0x400000, image end 0xA40000.
GLOBAL_BASE = 0x1640000
INITIAL_MEMORY = 268435456
STACK_SIZE = 16777216


def sources():
    files = sorted((ROOT / "src").rglob("*.c"))
    files += [ROOT / "recomp" / "rt" / "rt.c", ROOT / "recomp" / "rt" / "api_gen.c"]
    files += sorted((ROOT / "recomp" / "rt" / "wasm").glob("*.c"))
    return files


def obj_path(src):
    rel = src.relative_to(ROOT)
    return OBJ / (str(rel).replace("\\", "_").replace("/", "_") + ".o")


def needs_compile(src):
    obj = obj_path(src)
    return not obj.exists() or obj.stat().st_mtime < src.stat().st_mtime


def compile_one(src):
    obj = obj_path(src)
    obj.parent.mkdir(parents=True, exist_ok=True)
    if not needs_compile(src):
        return src, obj, 0, ""
    cmd = [str(EMCC), "-c", "-O1", "-g", "-w",
           "-I" + str(ROOT / "recomp" / "rt"),
           "-I" + str(ROOT / "recomp" / "rt" / "wasm"),
           "-I" + str(ROOT / "recomp" / "data"),
           "-I" + str(ROOT / "src"),
           str(src), "-o", str(obj)]
    r = subprocess.run(cmd, capture_output=True, text=True)
    return src, obj, r.returncode, (r.stdout + r.stderr)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--jobs", type=int, default=max(1, (os.cpu_count() or 2) // 2))
    ap.add_argument("--environment", default="node")
    ap.add_argument("--web", action="store_true", help="build the browser target and copy the web shell")
    ap.add_argument("--preload-data", action="store_true", help="also preload bin/data as /data (large)")
    ap.add_argument("--data-dir", default="", help="preload this directory as /data instead of bin/data")
    ap.add_argument("--shell", default="")
    ap.add_argument("--name", default="hoyle")
    ap.add_argument("--no-stack-check", action="store_true")
    args = ap.parse_args()
    if not EMCC.exists():
        sys.exit("Emscripten not found at %s (run build/emsdk/emsdk.bat install latest)" % EMCC)

    environment = "web,worker" if args.web else args.environment
    exports = "_main,_wasm_input,_wasm_start" if args.web else "_main"
    out = ROOT / "bin" / ("wasm" if args.web else "wasm-node")
    if args.web:
        out = ROOT / "build" / "wasm_web"

    OBJ.mkdir(parents=True, exist_ok=True)
    out.mkdir(parents=True, exist_ok=True)
    files = sources()
    changed = sum(1 for f in files if needs_compile(f))
    print("compiling %d of %d files with %d jobs" % (changed, len(files), args.jobs))
    objects = []
    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        for src, obj, code, output in pool.map(compile_one, files):
            if code:
                print("FAILED %s" % src)
                print(output[:4000])
                return 1
            objects.append(obj)

    rsp = ROOT / "build" / "wasm_objects.rsp"
    rsp.write_text("\n".join('"%s"' % o for o in objects) + "\n", encoding="utf-8")
    cmd = [str(EMCC), "@" + str(rsp), "-O1", "-g",
           "-sGLOBAL_BASE=%d" % GLOBAL_BASE,
           "-sINITIAL_MEMORY=%d" % INITIAL_MEMORY,
           "-sSTACK_SIZE=%d" % STACK_SIZE,
           "-sALLOW_MEMORY_GROWTH=1",
           "-sASYNCIFY=1",
           "-sASSERTIONS=1",
           "-sSTACK_OVERFLOW_CHECK=0",
           "-sNO_EXIT_RUNTIME=1",
           "-sFORCE_FILESYSTEM=1",
           "-sMIN_FIREFOX_VERSION=115",
           "-sENVIRONMENT=" + environment,
           "-sEXPORTED_FUNCTIONS=[" + exports + "]",
           "--preload-file=" + str(ROOT / "src" / "image.bin") + "@/image.bin"]
    if args.data_dir:
        cmd.append("--preload-file=" + str((ROOT / args.data_dir).resolve()) + "@/data")
    elif args.preload_data:
        cmd.append("--preload-file=" + str(ROOT / "bin" / "data") + "@/data")
    if args.no_stack_check:
        cmd.append("-sSTACK_OVERFLOW_CHECK=0")
    cmd += ["-o", str(out / (args.name + ".js"))]
    if args.shell:
        cmd += ["--shell-file", args.shell]
    print("linking %s" % (out / "hoyle.js"))
    r = subprocess.run(cmd)
    if r.returncode:
        return r.returncode
    if args.web:
        for name in ("index.html", "web.js"):
            shutil.copy2(ROOT / "web" / name, out / name)
        final = ROOT / "bin" / "wasm"
        final.mkdir(parents=True, exist_ok=True)
        for f in out.iterdir():
            if f.is_file():
                try:
                    os.replace(str(f), str(final / f.name))
                except OSError as e:
                    print("publish skip %s: %s" % (f.name, e))
    print("built %s" % ((final if args.web else out) / "hoyle.js"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
