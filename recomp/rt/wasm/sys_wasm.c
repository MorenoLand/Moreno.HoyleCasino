/* sys_wasm.c: memory and image services for the WebAssembly host.
 *
 * The link reserves the low linear-memory range for the guest by starting the module's static
 * data at WASM_GLOBAL_BASE. Everything below it is zero-filled linear memory, so the image data
 * can be copied to its original addresses and guest allocations come from the normal heap above.
 */
#include "sys.h"
#include "wasm_config.h"
#include <emscripten.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static u32 heap_size(void)
{
    return (u32)__builtin_wasm_memory_size(0) * 65536u;
}

int rt_sys_map_fixed(u32 addr, u32 size)
{
    if (addr < WASM_GLOBAL_BASE && addr + size <= WASM_GLOBAL_BASE) return 1;   /* already linear memory */
    if (addr + size <= heap_size()) return 1;
    return 0;
}

u32 rt_sys_alloc(u32 size)
{
    return (u32)(uintptr_t)malloc(size);
}

void rt_sys_free(u32 addr, u32 size)
{
    (void)size;
    free((void *)(uintptr_t)addr);
}

void rt_sys_noaccess(u32 addr, u32 size)
{
    (void)addr;
    (void)size;
}

int rt_readable(u32 addr, u32 n)
{
    return addr < (u32)heap_size() && n <= (u32)heap_size() - addr;
}

int rt_load_image(const char *path){
    (void)path;
    FILE *f = fopen("/image.bin", "rb");
    if (!f) {
        fprintf(stderr, "wasm: cannot open /image.bin\n");
        return 0;
    }
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    unsigned char *d = (unsigned char *)malloc((size_t)n);
    if (!d || fread(d, 1, (size_t)n, f) != (size_t)n) {
        fprintf(stderr, "wasm: cannot read /image.bin\n");
        return 0;
    }
    fclose(f);
    if (n < 4) return 0;
    u32 count;
    memcpy(&count, d, 4);
    for (u32 i = 0; i < count; ++i) {
        u32 va, len, off;
        memcpy(&va, d + 4 + 12 * i, 4);
        memcpy(&len, d + 8 + 12 * i, 4);
        memcpy(&off, d + 12 + 12 * i, 4);
        if (va + len <= (u32)heap_size()) memcpy((void *)(uintptr_t)va, d + off, len);
    }
    free(d);
    W8(0x15e55d3u, 1);   /* the window starts active: mouse messages are gated on this flag */
    return 1;
}

