# Static lift of the Hoyle Casino 2008 x86 binary to C and WebAssembly

Pipeline: headless IDA export -> function table -> `gen.py`/`lift.py` instruction-by-instruction lift to C -> runtime in
`recomp/rt` -> MinGW i686 / Emscripten wasm32.

Target binary: `Hoyle Casino Classic.exe` (Encore, 2008, MSVC 8.0, x86, 3,768,320 bytes, 13,571 functions,
SHA-256 `1a856ab1d74f826915d72f56fbd3cd936c3e18694712cda87f714ed0313d2f83`).

## Layout

| Path | Content |
|---|---|
| `scripts/` | `ida_export.py`, `make_functions.py`, `classify` inputs, `gen.py`, `lift.py`, `pe_image.py`, `gen_api*.py` |
| `recomp/data/` | `functions.tsv` (ea, name, size, category) |
| `recomp/rt/` | runtime (guest registers/memory, API dispatch, boot, Win32 emulation) |
| `src/` | generated C, then hand-edited source |
| `orig/` | original binary is not tracked; pass it with `--exe` or `HOYLE_EXE` |

## Build order

```sh
set HOYLE_EXE=<install>\Hoyle Casino Classic.exe
idat -A -S"scripts\ida_export.py" "Hoyle Casino Classic.exe"     # -> ida/
python scripts\make_functions.py                                  # -> recomp/data/functions.tsv
python -I scripts\gen.py                                          # -> src/*.c
```
