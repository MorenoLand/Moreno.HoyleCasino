/* boot_wasm.c: WebAssembly entry point. Maps the data image, binds the import sentinels and runs
 * the original entry point (the CRT start-up, which calls WinMain). */
#include "api.h"
#include "sys.h"
#include "wasm_config.h"
#include <emscripten.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rt_load_image(const char *path);
extern const ApiStatic api_static[];
extern const int api_static_n;
char rt_guest_exe[MAX_PATH];

ApiEmu wasm_lookup(const char *module, const char *name);

static u64 unimplemented(u32 *a)
{
    (void)a;
    return 0;
}

int main(void)
{
    rt_trace = getenv("RECOMP_TRACE") != NULL;
    if (!rt_load_image(NULL)) {
        fprintf(stderr, "wasm: image load failed\n");
        return 77;
    }
    gil_init();
    snprintf(rt_guest_exe, sizeof rt_guest_exe, "C:\\game\\Hoyle Casino Classic.exe");

    for (int i = 0; i < api_static_n; ++i) {
        const ApiStatic *s = &api_static[i];
        if (!strcmp(s->name, "_acmdln")) {
            char *text = (char *)malloc(32);
            u32 cell = (u32)(uintptr_t)malloc(4);
            strcpy(text, "hoyle.exe");
            W32(cell, (u32)(uintptr_t)text);
            W32(s->ea, cell);
            continue;
        }
        ApiEmu fn = wasm_lookup(s->module, s->name);
        if (!fn) {
            fprintf(stderr, "wasm: import %s!%s is not implemented\n", s->module, s->name);
            fn = unimplemented;
        }
        u32 sentinel = api_add_emu(s->module, s->name, fn, s->nargs, s->cdecl_);
        api_tab[(sentinel - 0xFE000000u) >> 4].special = api_special_id(s->name);
        W32(s->ea, sentinel);
    }

    u32 stack = rt_sys_alloc(0x800000);
    if (!stack) {
        fprintf(stderr, "wasm: cannot allocate the guest stack\n");
        return 77;
    }
    rt_main_thread(stack, stack + 0x800000 - 0x1000);

    fprintf(stderr, "wasm: image mapped, %d imports bound, entering %08x\n", api_static_n, WASM_OEP);
    r_esp -= 4;
    W32(r_esp, 0xDEAD0000u);
    call_ind(WASM_OEP);
    fprintf(stderr, "wasm: guest returned eax=%08x\n", r_eax);
    return (int)r_eax;
}
