/* windows_wasm.h: the tiny Win32 surface the lifted window procedure needs. */
#ifndef WINDOWS_WASM_H
#define WINDOWS_WASM_H
#include <stdint.h>

typedef void *HWND;
typedef struct { int32_t left, top, right, bottom; } RECT;

int32_t GetWindowLongA(HWND h, int32_t index);
int32_t GetClientRect(HWND h, RECT *rect);

#endif
