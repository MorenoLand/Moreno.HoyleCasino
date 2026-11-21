# Web template

`index.html` and `web.js` are the browser shell for the wasm build. They expect the generated
`hoyle.js`, `hoyle.wasm` and `hoyle.data` to sit next to them.

## Build

```sh
python build_wasm.py --jobs 8 --web
```

The build copies `index.html` and `web.js` into `bin/wasm/`. Output:

```
bin/wasm/index.html
bin/wasm/web.js
bin/wasm/hoyle.js
bin/wasm/hoyle.wasm
bin/wasm/hoyle.data
```

## Serve

Do not open `index.html` from `file://`; the module and the data package are fetched over HTTP.

```sh
python web/serve.py bin/wasm 8080
```

Then open `http://127.0.0.1:8080/`.

`serve.py` sets `application/wasm` and the cross-origin isolation headers, which are required if
you later enable threads or shared memory.

## Input

`web.js` maps mouse movement and buttons to canvas coordinates (640x480) and calls
`Module._wasm_input(type, x, y, key)`. The C side must export that function (see
`recomp/rt/wasm/imports_wasm.c`). Keyboard events use Windows virtual-key codes.

## Data

The game data is not part of this template. Build a data package from a copy you legally own; the
build script preloads `src/image.bin` and expects the game files to be placed under `/data` (the
`--preload-file` argument in `build_wasm.py`). Never publish the package.
