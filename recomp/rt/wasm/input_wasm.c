/* input_wasm.c: browser input queue. web.js calls wasm_input(); PeekMessageA drains it. */
#include <emscripten.h>
#include <stdint.h>

int wasm_al(int op, int a0, int a1, int a2, int a3, int a4);

typedef struct { uint16_t type, key; int16_t x, y; } WasmEvent;
static WasmEvent queue[256];
static volatile unsigned head, tail;

EMSCRIPTEN_KEEPALIVE void wasm_input(int type, int x, int y, int key)
{
    unsigned next = (head + 1) & 255;
    if (next == tail) return;                 /* drop when full; the page cannot outrun the loop */
    queue[head].type = (uint16_t)type;
    queue[head].x = (int16_t)x;
    queue[head].y = (int16_t)y;
    queue[head].key = (uint16_t)key;
    head = next;
}

EMSCRIPTEN_KEEPALIVE void wasm_start(void) { wasm_al(19, 0, 0, 0, 0, 0); }

int wasm_peek_event_ex(int *type, int *x, int *y, int *key, int consume)
{
    if (tail == head) return 0;
    *type = queue[tail].type;
    *x = queue[tail].x;
    *y = queue[tail].y;
    *key = queue[tail].key;
    if (consume) tail = (tail + 1) & 255;
    return 1;
}

int wasm_peek_event(int *type, int *x, int *y, int *key)
{
    return wasm_peek_event_ex(type, x, y, key, 1);
}
