# Status and estimate

Target: `Hoyle Casino Classic.exe` — 13,571 functions, 3,768,320 bytes, MSVC 8.0, x86.
Pipeline: headless IDA export -> `gen.py`/`lift.py` instruction-by-instruction lift to C -> runtime in `recomp/rt`.

## Estimate

| # | Work | Bound | Time |
|---|---|---|---|
| 0 | Headless IDA pass, signatures, function table | 13,571 functions, 14 signatures | 20–40 min |
| 1 | `make_functions.py` + `gen.py` lift to C | mechanical, proven on 12,800 functions | 5–15 min |
| 2 | Compile lifted C, fix unsupported instructions | MinGW i686 or Emscripten wasm32 | 4–10 h |
| 3 | CRT boundary: `msvcr80` 127 + `msvcp80` 10 imports, SEH, TLS | MSVC 8.0 ABI | 1–2 d |
| 4 | Win32: `user32` 45, `kernel32` 44, `gdi32` 14, `shell32` 7, `winmm` 12 | reuse `recomp/rt/win32` | 1-2 d |
| 5 | `ole32` DirectDraw7 vtable, `openal32` 29, `freetype6` 8, print/dbghelp stubs | DirectDraw only sets the display mode | 0.5–1 d |
| 6 | First native frame (640×480 DIB) | one present call | +0.5 d |
| 7 | WebAssembly: Emscripten, image at 0x400000, GDI → canvas, input | wasm32, 4 GB guest space | 1–2 d |
| 8 | Audio, asset filesystem, full game flow | `.pod`/`.tex`/`.prf` readers lift with the image | 2–5 d |

- Playable wasm build: **5–10 focused days**.
- First wasm frame: **2–4 days**.
- Lift itself (steps 0–1): **under one hour**.

## Risks

- SEH is not delivered (the fake TEB chain exists, faults are host crashes).
- x87 precision control not modelled; `fnsave`/`frstor`/`fnstenv`/`fldenv` unsupported.
- `lock`-prefixed instructions non-atomic (global guest lock).
- Guest threads serialized by the global lock.
- C++ `std::string` ABI crosses the `msvcp80` boundary.

## Immediate next step

`idat -A -S"scripts\ida_export.py" "<install>\Hoyle Casino Classic.exe"` with `HOYLE_IDA_OUT=ida`.
