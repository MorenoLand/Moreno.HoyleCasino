# WebAssembly target

The wasm port keeps the same lifted C and the same guest model: a guest address is an offset in
the module's linear memory. The host layer is replaced; the instruction lift is unchanged.

## Memory

- The guest image lives at `0x400000..0x1640000`, exactly as in the original.
- The module's static data and heap start at `GLOBAL_BASE = 0x1640000`, so they cannot overlap the
  guest image. The normal `malloc` heap is above that.
- `INITIAL_MEMORY` is 256 MiB; `STACK_SIZE` is 16 MiB. The guest stack is allocated from the host
  heap and is separate from the wasm call stack.

## Runtime files

| File | Purpose |
|---|---|
| `recomp/rt/wasm/sys_wasm.c` | Fixed-range checks, host allocation, image blob loader. |
| `recomp/rt/wasm/boot_wasm.c` | `main`: maps the image, binds the 309 imports, runs the OEP. |
| `recomp/rt/wasm/api_wasm.c` | Sentinel dispatch, guest callbacks, TLS/TEB. |
| `recomp/rt/wasm/api_special_wasm.c` | `_initterm`, qsort/bsearch callbacks, FP returns. |
| `recomp/rt/wasm/imports_wasm.c` | kernel32/user32/gdi32/msvcr80/msvcp80/OpenAL emulation. |
| `recomp/rt/wasm/input_wasm.c` | Browser input queue. |
| `recomp/rt/wasm/wasm_config.h` | Image base/end, OEP, global base. |

The Windows runtime files (`api.c`, `api_special.c`, `boot.c`, `preentry.c`, `guest_pad.c`,
`driver.c`) are not linked on wasm.

## Build

Emscripten 7.0.0 is installed under `build/emsdk` (ignored). The build uses `-sASYNCIFY=1` so the
guest's blocking message loop yields to the browser.

```sh
python build_wasm.py --web --jobs 8
python web/serve.py bin/wasm 8080
```

`--preload-data` additionally packages `bin/data` as `/data`; the full game data is large, so use
it only when you need it. The original image data (`src/image.bin`) is always preloaded as
`/image.bin`.

## Current state

The module builds and boots: it maps the image, binds every import and enters the original entry
point. Work continues on the CRT start-up and the first window frame. Missing imports abort with
their `module!name` instead of silently returning zero.

## Legal

The wasm package contains the original program's data. Build it only from a copy you legally own
and do not publish the package.
