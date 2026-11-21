// web.js: browser input for the wasm build. The C side exposes wasm_input(type, x, y, key).
// type: 0 mousemove, 1 left down, 2 left up, 3 key down, 4 key up.
(function () {
  'use strict';
  var canvas = document.getElementById('canvas');
  var pending = [];
  var lastX = 320, lastY = 240;

  var previousReady = Module.onRuntimeInitialized;
  Module.onRuntimeInitialized = function () {
    window.__hoyleReady = true;
    if (typeof previousReady === 'function') previousReady.apply(this, arguments);
  };

  function send(type, x, y, key) {
    if (window.__hoyleReady) {
      Module._wasm_input(type, x | 0, y | 0, key | 0);
    } else {
      pending.push([type, x | 0, y | 0, key | 0]);
    }
  }
  function flush() {
    if (!window.__hoyleReady) return;
    while (pending.length) {
      var e = pending.shift();
      Module._wasm_input(e[0], e[1], e[2], e[3]);
    }
  }
  function point(ev) {
    var r = canvas.getBoundingClientRect();
    var x = (ev.clientX - r.left) * 640 / Math.max(1, r.width);
    var y = (ev.clientY - r.top) * 480 / Math.max(1, r.height);
    return [Math.max(0, Math.min(639, x)), Math.max(0, Math.min(479, y))];
  }
  canvas.addEventListener('mousemove', function (ev) {
    var p = point(ev); lastX = p[0]; lastY = p[1]; send(0, p[0], p[1], 0);
  });
  canvas.addEventListener('mousedown', function (ev) {
    if (ev.button !== 0) return;
    var p = point(ev); lastX = p[0]; lastY = p[1];
    canvas.focus(); send(1, p[0], p[1], 0); ev.preventDefault();
  });
  canvas.addEventListener('mouseup', function (ev) {
    if (ev.button !== 0) return;
    var p = point(ev); send(2, p[0], p[1], 0); ev.preventDefault();
  });
  canvas.addEventListener('contextmenu', function (ev) { ev.preventDefault(); });
  window.addEventListener('keydown', function (ev) {
    send(3, lastX, lastY, ev.keyCode);
    var ch = 0;
    if (ev.key && ev.key.length === 1) ch = ev.key.charCodeAt(0);
    else if (ev.key === 'Enter') ch = 13;
    else if (ev.key === 'Backspace') ch = 8;
    else if (ev.key === 'Escape') ch = 27;
    else if (ev.key === 'Tab') ch = 9;
    if (ch) send(5, lastX, lastY, ch);
    if (['ArrowUp', 'ArrowDown', 'ArrowLeft', 'ArrowRight', ' ', 'Tab'].indexOf(ev.key) >= 0) ev.preventDefault();
  });
  window.addEventListener('keyup', function (ev) {
    send(4, lastX, lastY, ev.keyCode);
  });
  window.addEventListener('blur', function () {
    for (var k = 8; k < 256; k++) send(4, lastX, lastY, k);
  });
  var timer = setInterval(function () {
    flush();
    if (window.__hoyleReady) clearInterval(timer);
  }, 100);
})();
