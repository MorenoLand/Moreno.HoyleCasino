/* imports_wasm.c: the Win32/CRT imports of the lifted program, implemented for the browser.
 *
 * Every import goes through wasm_import(); wasm_current names the entry being called. Unknown
 * imports print their name and abort: a missing implementation is a porting task, not a no-op.
 */
#include "api.h"
#include "sys.h"
#include "wasm_config.h"
#include "windows_wasm.h"
#include <emscripten.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <unistd.h>

extern ApiEnt *wasm_current;
extern u32 wasm_current_ecx;
int wasm_peek_event(int *type, int *x, int *y, int *key);

static u32 *args;

u64 wasm_import(u32 *a);

/* ---------- presentation ---------- */
EM_JS(void, wasm_present, (int bits, int fw, int fh, int bpp, int stride, int flip, int xs, int ys, int w, int h, int xd, int yd), {
    if (!Module['canvas'] || !bits || fw <= 0 || fh <= 0 || w <= 0 || h <= 0) return;
    if (!Module.__praw) { Module.__praw = 1; document.title = "P:" + bits + "," + fw + "," + fh + "," + bpp + "," + stride + "," + flip + "," + xs + "," + ys + "," + w + "," + h + "," + xd + "," + yd; }
    var c = Module['canvas'];
    if (c.width !== fw) c.width = fw;
    if (c.height !== fh) c.height = fh;
    var ctx = c.getContext('2d');
    if (!ctx) return;
    if (!Module.__screen || Module.__screen.width !== fw || Module.__screen.height !== fh) Module.__screen = ctx.createImageData(fw, fh);
    var src = HEAPU8, dst = Module.__screen.data;
    var bytes = bpp === 32 ? 4 : (bpp === 24 ? 3 : 2);
    for (var y = 0; y < h; y++) {
        var sy = flip ? (ys + (h - 1 - y)) : (ys + y);
        var dy = yd + y;
        if (sy < 0 || sy >= fh || dy < 0 || dy >= fh) continue;
        var so = bits + sy * stride + xs * bytes;
        var dofs = (dy * fw + xd) * 4;
        for (var x = 0; x < w; x++) {
            if (xd + x < 0 || xd + x >= fw) continue;
            var r, g, b;
            if (bpp === 32) { b = src[so]; g = src[so+1]; r = src[so+2]; so += 4; }
            else if (bpp === 24) { b = src[so]; g = src[so+1]; r = src[so+2]; so += 3; }
            else { var v = src[so] | (src[so+1] << 8); so += 2; r = ((v >> 11) & 31) * 255 / 31; g = ((v >> 5) & 63) * 255 / 63; b = (v & 31) * 255 / 31; }
            dst[dofs++] = r; dst[dofs++] = g; dst[dofs++] = b; dst[dofs++] = 255;
        }
    }
    ctx.putImageData(Module.__screen, 0, 0);
});

/* ---------- window state ---------- */
static u32 g_wndproc;
static u32 g_hwnd = 0x1000;
static int g_painted;
static int g_cursor_x = 320, g_cursor_y = 240;
static u32 g_dd_w = 640, g_dd_h = 480, g_dd_bpp = 32;
static u32 g_wl[32];
static unsigned char g_keys[256];

static void write_u32(u32 p, u32 v) { if (p) W32(p, v); }
static void write_rect(u32 p, int l, int t, int r, int b)
{
    if (!p) return;
    W32(p + 0, (u32)l); W32(p + 4, (u32)t); W32(p + 8, (u32)r); W32(p + 12, (u32)b);
}

static int wasm_vscanf(u32 *a, int from_file)
{
    unsigned char *buf = (unsigned char *)malloc(72);
    if (!buf) abort();
    unsigned char *va = buf + ((r_esp + 12u) & 7u);
    memcpy(va, a + 2, 56);
    int r = from_file ? vfscanf((FILE *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], (va_list)va)
                      : vsscanf((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], (va_list)va);
    free(buf);
    return r;
}

/* ---------- formatting ---------- */
static int wasm_vformat(char *dst, const char *fmt, const u32 *v, int nv)
{
    int o = 0, vi = 0;
    for (const char *p = fmt; *p; ) {
        if (*p != '%') { dst[o++] = *p++; continue; }
        if (p[1] == '%') { dst[o++] = '%'; p += 2; continue; }
        char spec[40]; int si = 0; spec[si++] = '%'; ++p;
        while (*p && strchr("-+ #0", *p) && si < 32) spec[si++] = *p++;
        while (*p >= '0' && *p <= '9' && si < 32) spec[si++] = *p++;
        if (*p == '.') { spec[si++] = *p++; while (*p >= '0' && *p <= '9' && si < 32) spec[si++] = *p++; }
        int l = 0;
        if (p[0] == 'I' && p[1] == '6' && p[2] == '4') { p += 3; l = 2; }
        else while (*p == 'l' && si < 32) { spec[si++] = *p++; ++l; }
        if (*p == 'h' && si < 32) { spec[si++] = *p++; if (*p == 'h' && si < 32) spec[si++] = *p++; }
        char conv = *p; if (conv) ++p;
        spec[si++] = conv; spec[si] = 0;
        if (!conv) { dst[o++] = '%'; break; }
        char tmp[512]; int n = 0;
        switch (conv) {
        case 'd': case 'i':
            if (l >= 2) { long long x = (long long)((u64)v[vi] | ((u64)v[vi + 1] << 32)); vi += 2; n = snprintf(tmp, sizeof tmp, spec, x); }
            else { int x = vi < nv ? (int)v[vi] : 0; ++vi; n = snprintf(tmp, sizeof tmp, spec, x); }
            break;
        case 'u': case 'o': case 'x': case 'X':
            if (l >= 2) { unsigned long long x = (u64)v[vi] | ((u64)v[vi + 1] << 32); vi += 2; n = snprintf(tmp, sizeof tmp, spec, x); }
            else { unsigned x = vi < nv ? v[vi] : 0; ++vi; n = snprintf(tmp, sizeof tmp, spec, x); }
            break;
        case 'c': n = snprintf(tmp, sizeof tmp, spec, (int)(vi < nv ? v[vi] : 0)); ++vi; break;
        case 's': {
            const char *s = vi < nv ? (const char *)(uintptr_t)v[vi] : "";
            ++vi; n = snprintf(tmp, sizeof tmp, spec, s ? s : "(null)");
            break;
        }
        case 'f': case 'F': case 'e': case 'E': case 'g': case 'G': case 'a': case 'A': {
            double d; memcpy(&d, &v[vi], 8); vi += 2;
            n = snprintf(tmp, sizeof tmp, spec, d);
            break;
        }
        case 'p': n = snprintf(tmp, sizeof tmp, spec, (void *)(uintptr_t)(vi < nv ? v[vi] : 0)); ++vi; break;
        default: n = snprintf(tmp, sizeof tmp, "%%%c", conv); break;
        }
        if (n < 0) n = 0;
        if (n > (int)sizeof tmp - 1) n = (int)sizeof tmp - 1;
        memcpy(dst + o, tmp, n); o += n;
    }
    dst[o] = 0;
    return o;
}

static const char *wasm_path(const char *p)
{
    static char raw[1024], buf[1024];
    if (!p) return "";
    int rooted = 0;
    if (!strncmp(p, "C:/game", 7) || !strncmp(p, "c:/game", 7) ||
        !strncmp(p, "C:\\game", 7) || !strncmp(p, "c:\\game", 7)) { p += 7; rooted = 1; }
    if (rooted) while (*p == '/' || *p == '\\') ++p;
    if (!rooted && (p[0] == '/' || p[0] == '\\')) snprintf(raw, sizeof raw, "%s", p);
    else if (!rooted && p[0] && p[1] == ':') snprintf(raw, sizeof raw, "%s", p);
    else snprintf(raw, sizeof raw, "/data/%s", p);
    size_t o = 0;
    for (size_t i = 0; raw[i] && o + 1 < sizeof buf; ++i) buf[o++] = raw[i] == '\\' ? '/' : raw[i];
    buf[o] = 0;
    o = 0;
    for (size_t i = 0; buf[i]; ) {
        if (buf[i] == '/' && buf[i + 1] == '/') ++i;
        else if (buf[i] == '/' && buf[i + 1] == '.' && (buf[i + 2] == '/' || buf[i + 2] == 0)) i += 2;
        else raw[o++] = buf[i++];
    }
    raw[o] = 0;
    return raw;
}

/* ---------- KERNEL32 ---------- */
static int g_last_error;

static u64 kernel32(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "GetSystemTimeAsFileTime")) { write_u32(a[0], (u32)time(NULL)); write_u32(a[0] + 4, 0); return 0; }
    if (!strcmp(n, "GetCurrentThread")) return 0xFFFFFFFEu;
    if (!strcmp(n, "GetCurrentProcessId") || !strcmp(n, "GetCurrentThreadId")) return 0x1234;
    if (!strcmp(n, "GetTickCount")) return (u32)(emscripten_get_now());
    if (!strcmp(n, "QueryPerformanceCounter")) { write_u32(a[0], (u32)(emscripten_get_now() * 1000)); write_u32(a[0] + 4, 0); return 1; }
    if (!strcmp(n, "GetStartupInfoA")) { if (a[0]) memset((void *)(uintptr_t)a[0], 0, 68); return 0; }
    if (!strcmp(n, "GetCommandLineA")) return (u32)(uintptr_t)"hoyle.exe";
    if (!strcmp(n, "GetModuleFileNameA")) {
        const char *s = "C:\\game\\Hoyle Casino Classic.exe";
        size_t l = strlen(s); if (a[2] && l >= a[2]) l = a[2] - 1;
        memcpy((void *)(uintptr_t)a[1], s, l); ((char *)(uintptr_t)a[1])[l] = 0; return (u32)l;
    }
    if (!strcmp(n, "GetLastError")) return (u32)g_last_error;
    if (!strcmp(n, "SetErrorMode")) return 0;
    if (!strcmp(n, "IsDebuggerPresent")) return 0;
    if (!strcmp(n, "SetUnhandledExceptionFilter") || !strcmp(n, "UnhandledExceptionFilter")) return 0;
    if (!strcmp(n, "OutputDebugStringA")) { if (a[0]) fprintf(stderr, "%s", (const char *)(uintptr_t)a[0]); return 0; }
    if (!strcmp(n, "Sleep")) { return 0; }
    if (!strcmp(n, "InterlockedCompareExchange")) { u32 *p = (u32 *)(uintptr_t)a[0]; u32 old = *p; if (old == a[1]) *p = a[2]; return old; }
    if (!strcmp(n, "InterlockedExchange")) { u32 *p = (u32 *)(uintptr_t)a[0]; u32 old = *p; *p = a[1]; return old; }
    if (!strcmp(n, "CloseHandle")) { if (a[0] && a[0] != 0xFFFFFFFFu) fclose((FILE *)(uintptr_t)a[0]); return 1; }
    if (!strcmp(n, "CreateMutexA")) return 0x5000;
    if (!strcmp(n, "GetDriveTypeA")) return 3; /* DRIVE_FIXED */
    if (!strcmp(n, "GlobalMemoryStatus")) { if (a[0]) { memset((void *)(uintptr_t)a[0], 0, 32); W32(a[0], 32); W32(a[0] + 4, 50); W32(a[0] + 8, 0x10000000); } return 0; }
    if (!strcmp(n, "GetSystemInfo")) { if (a[0]) { memset((void *)(uintptr_t)a[0], 0, 36); } return 0; }
    if (!strcmp(n, "IsBadReadPtr")) return rt_readable(a[0], a[1]) ? 0 : 1;
    if (!strcmp(n, "VirtualQuery")) return 0;
    if (!strcmp(n, "GetCurrentProcess")) return 0xFFFFFFFFu;
    if (!strcmp(n, "TerminateProcess")) { exit((int)a[1]); }
    if (!strcmp(n, "CreateProcessA")) { g_last_error = 2; return 0; }
    if (!strcmp(n, "CopyFileA")) {
        FILE *s = fopen(wasm_path((const char *)(uintptr_t)a[0]), "rb");
        FILE *d = s ? fopen(wasm_path((const char *)(uintptr_t)a[1]), "wb") : NULL;
        if (!s || !d) { if (s) fclose(s); if (d) fclose(d); return 0; }
        char buf[65536]; size_t k;
        while ((k = fread(buf, 1, sizeof buf, s)) > 0) fwrite(buf, 1, k, d);
        fclose(s); fclose(d); return 1;
    }
    if (!strcmp(n, "GetFileAttributesA")) {
        FILE *f = fopen(wasm_path((const char *)(uintptr_t)a[0]), "rb");
        if (!f) { g_last_error = 2; return 0xFFFFFFFFu; }
        fclose(f); return 0x20; /* FILE_ATTRIBUTE_ARCHIVE */
    }
    if (!strcmp(n, "CreateFileA")) {
        const char *p = wasm_path((const char *)(uintptr_t)a[0]);
        const char *mode = (a[1] & 0x40000000u) ? "wb" : ((a[1] & 0x80000000u) ? "rb" : "rb");
        FILE *f = fopen(p, mode);
        if (!f) { g_last_error = 2; return 0xFFFFFFFFu; }
        return (u32)(uintptr_t)f;
    }
    if (!strcmp(n, "ReadFile")) {
        size_t k = fread((void *)(uintptr_t)a[1], 1, a[2], (FILE *)(uintptr_t)a[0]);
        if (a[3]) W32(a[3], (u32)k);
        return k == a[2] || k > 0;
    }
    if (!strcmp(n, "WriteFile")) {
        size_t k = fwrite((const void *)(uintptr_t)a[1], 1, a[2], (FILE *)(uintptr_t)a[0]);
        if (a[3]) W32(a[3], (u32)k);
        return k == a[2] || k > 0;
    }
    if (!strcmp(n, "SetFilePointer")) {
        FILE *f = (FILE *)(uintptr_t)a[0];
        int whence = a[3] == 1 ? SEEK_CUR : (a[3] == 2 ? SEEK_END : SEEK_SET);
        fseek(f, (long)(int)a[1], whence);
        return (u32)ftell(f);
    }
    if (!strcmp(n, "GetFileSize")) {
        FILE *f = (FILE *)(uintptr_t)a[0]; long cur = ftell(f);
        fseek(f, 0, SEEK_END); long end = ftell(f); fseek(f, cur, SEEK_SET);
        if (a[1]) W32(a[1], 0);
        return (u32)end;
    }
    if (!strcmp(n, "GetFileTime")) { if (a[1]) W32(a[1], 0); if (a[2]) W32(a[2], 0); if (a[3]) W32(a[3], 0); return 1; }
    if (!strcmp(n, "FileTimeToLocalFileTime")) { if (a[1]) memcpy((void *)(uintptr_t)a[1], (void *)(uintptr_t)a[0], 8); return 1; }
    if (!strcmp(n, "FileTimeToDosDateTime")) { if (a[2]) W32(a[2], 0); return 1; }
    if (!strcmp(n, "GlobalFree") || !strcmp(n, "GlobalUnlock")) return 0;
    if (!strcmp(n, "GlobalLock")) return a[0];
    if (!strcmp(n, "LocalFree")) return 0;
    if (!strcmp(n, "FormatMessageA")) return 0;
    if (!strcmp(n, "lstrlenA")) return a[0] ? (u32)strlen((const char *)(uintptr_t)a[0]) : 0;
    if (!strcmp(n, "lstrcpyA")) { strcpy((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]); return a[0]; }
    fprintf(stderr, "wasm: unimplemented KERNEL32!%s\n", n);
    abort();
}

/* ---------- USER32 ---------- */
typedef struct { u32 hwnd, proc, wl[32]; } WasmWnd;
static WasmWnd g_wnds[16];
static int g_wndn;
static struct { char name[64]; u32 proc; } g_classes[16];
static int g_classn;
static u32 g_hwnd_next = 0x1000;
static int g_have_main;

static WasmWnd *wnd_find(u32 h) { for (int i = 0; i < g_wndn; ++i) if (g_wnds[i].hwnd == h) return &g_wnds[i]; return NULL; }
static u32 class_proc(const char *name) { for (int i = 0; i < g_classn; ++i) if (!strcmp(g_classes[i].name, name)) return g_classes[i].proc; return 0; }

static u64 user32(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "RegisterClassA")) {
        if (a[0]) {
            u32 proc = R32(a[0] + 4);
            const char *cn = (const char *)(uintptr_t)R32(a[0] + 36);
            if (cn && g_classn < 16) { snprintf(g_classes[g_classn].name, 64, "%s", cn); g_classes[g_classn].proc = proc; ++g_classn; }
            if (!g_wndproc) g_wndproc = proc;
        }
        return 1;
    }
    if (!strcmp(n, "CreateWindowExA")) {
        const char *cn = (const char *)(uintptr_t)a[1];
        u32 proc = cn ? class_proc(cn) : 0;
        u32 hwnd = g_hwnd_next++;
        if (g_wndn < 16) { WasmWnd *w = &g_wnds[g_wndn++]; w->hwnd = hwnd; w->proc = proc; memset(w->wl, 0, sizeof w->wl); }
        if (!g_have_main) { g_have_main = 1; g_hwnd = hwnd; }
        return hwnd;
    }
    if (!strcmp(n, "DestroyWindow")) { WasmWnd *w = wnd_find(a[0]); if (w) w->hwnd = 0; return 1; }
    if (!strcmp(n, "ShowWindow")) return 1;
    if (!strcmp(n, "GetClientRect") || !strcmp(n, "GetWindowRect")) { write_rect(a[1] ? a[1] : a[0], 0, 0, (int)g_dd_w, (int)g_dd_h); return 1; }
    if (!strcmp(n, "MoveWindow") || !strcmp(n, "SetWindowTextA") || !strcmp(n, "InvalidateRect")) return 1;
    if (!strcmp(n, "GetWindowPlacement")) { if (a[1]) memset((void *)(uintptr_t)a[1], 0, 44); return 1; }
    if (!strcmp(n, "GetDC")) return 0x2000;
    if (!strcmp(n, "ReleaseDC")) return 1;
    if (!strcmp(n, "BeginPaint")) { if (a[1]) memset((void *)(uintptr_t)a[1], 0, 64); W32(a[1], 0x2000); return 0x2000; }
    if (!strcmp(n, "EndPaint")) return 1;
    if (!strcmp(n, "GetDesktopWindow") || !strcmp(n, "GetForegroundWindow")) return g_hwnd;
    if (!strcmp(n, "SetForegroundWindow") || !strcmp(n, "SetCapture") || !strcmp(n, "ReleaseCapture")) return 1;
    if (!strcmp(n, "GetSystemMetrics")) { if (a[0] == 0) return g_dd_w; if (a[0] == 1) return g_dd_h; return 0; }
    if (!strcmp(n, "LoadIconA") || !strcmp(n, "LoadCursorA")) return 0x3000;
    if (!strcmp(n, "SetWindowLongA")) { WasmWnd *w = wnd_find(a[0]); u32 *wl = w ? w->wl : g_wl; int idx = (int)a[1] / 4; if (idx >= 0 && idx < 32) { u32 old = wl[idx]; wl[idx] = a[2]; return old; } return 0; }
    if (!strcmp(n, "GetWindowLongA")) { WasmWnd *w = wnd_find(a[0]); u32 *wl = w ? w->wl : g_wl; int idx = (int)a[1] / 4; return (idx >= 0 && idx < 32) ? wl[idx] : 0; }
    if (!strcmp(n, "GetAsyncKeyState")) return g_keys[a[0] & 0xff] ? 0x8001u : 0;
    if (!strcmp(n, "GetCursorPos")) { if (a[0]) { W32(a[0], (u32)g_cursor_x); W32(a[0] + 4, (u32)g_cursor_y); } return 1; }
    if (!strcmp(n, "SetCursorPos")) { g_cursor_x = (int)a[0]; g_cursor_y = (int)a[1]; return 1; }
    if (!strcmp(n, "ScreenToClient") || !strcmp(n, "ClientToScreen")) return 1;
    if (!strcmp(n, "GetDoubleClickTime")) return 500;
    if (!strcmp(n, "ShowCursor")) return 0;
    if (!strcmp(n, "GetMenu") || !strcmp(n, "CheckMenuItem") || !strcmp(n, "DestroyMenu")) return 0;
    if (!strcmp(n, "WinHelpA")) return 1;
    if (!strcmp(n, "SystemParametersInfoA")) return 1;
    if (!strcmp(n, "MessageBoxA")) { if (a[1]) fprintf(stderr, "wasm MessageBox: %s\n", (const char *)(uintptr_t)a[1]); return 1; }
    if (!strcmp(n, "wsprintfA") || !strcmp(n, "wvsprintfA")) {
        const u32 *v = (const u32 *)(uintptr_t)a[2];
        wasm_vformat((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], v, 16);
        return (u32)strlen((char *)(uintptr_t)a[0]);
    }
    if (!strcmp(n, "PeekMessageA")) {
        u32 msg = a[0];
        if (msg) memset((void *)(uintptr_t)msg, 0, 28);
        int type, x, y, key;
        if (wasm_peek_event(&type, &x, &y, &key)) {
            g_cursor_x = x; g_cursor_y = y;
            if (type == 1) g_keys[1] = 1;
            else if (type == 2) g_keys[1] = 0;
            else if (type == 3) g_keys[key & 0xff] = 1;
            else if (type == 4) g_keys[key & 0xff] = 0;
            if (msg) {
                u32 m = 0x0200, wp = 0;
                if (type == 1) { m = 0x0201; wp = 1; }
                else if (type == 2) m = 0x0202;
                else if (type == 3) { m = 0x0100; wp = (u32)key; }
                else if (type == 4) { m = 0x0101; wp = (u32)key; }
                else if (type == 5) { m = 0x0102; wp = (u32)key; }
                W32(msg + 0, g_hwnd);
                W32(msg + 4, m);
                W32(msg + 8, wp);
                W32(msg + 12, type >= 3 ? 1u : (((u32)(y & 0xffff) << 16) | (u32)(x & 0xffff)));            }
            return 1;
        }
        if (!g_painted) {
            g_painted = 1;
            if (msg) { W32(msg + 0, g_hwnd); W32(msg + 4, 0x000F); }
            return 1;
        }
        emscripten_sleep(16);
        return 0;
    }
    if (!strcmp(n, "TranslateMessage")) return 0;
    if (!strcmp(n, "DispatchMessageA") || !strcmp(n, "SendMessageA")) {
        u32 msg = a[0];
        if (!strcmp(n, "SendMessageA")) {
            u32 cargs[4] = { a[0], a[1], a[2], a[3] };
            WasmWnd *w = wnd_find(a[0]);
            u32 proc = w ? w->proc : g_wndproc;
            return proc ? rt_guest_callback(proc, 4, cargs) : 0;
        }
        if (!msg) return 0;
        u32 cargs[4] = { R32(msg), R32(msg + 4), R32(msg + 8), R32(msg + 12) };
        WasmWnd *w = wnd_find(cargs[0]);
        u32 proc = w ? w->proc : g_wndproc;
        return proc ? rt_guest_callback(proc, 4, cargs) : 0;
    }
    if (!strcmp(n, "DefWindowProcA")) return 0;
    if (!strcmp(n, "OffsetRect")) { if (a[0]) { W32(a[0], R32(a[0]) + a[1]); W32(a[0] + 4, R32(a[0] + 4) + a[2]); W32(a[0] + 8, R32(a[0] + 8) + a[1]); W32(a[0] + 12, R32(a[0] + 12) + a[2]); } return 0; }
    fprintf(stderr, "wasm: unimplemented USER32!%s\n", n);
    abort();
}

/* ---------- GDI32 ---------- */
static u64 gdi32(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "SetDIBitsToDevice")) {
        u32 bmi = a[10], bits = a[9];
        int fw = bmi ? (int)R32(bmi + 4) : 640;
        int fh = bmi ? (int)R32(bmi + 8) : 480;
        int bpp = bmi ? (u16)R16(bmi + 14) : 32;
        int flip = fh > 0;
        if (fh < 0) fh = -fh;
        u32 stride = (u32)(((fw * bpp + 31) / 32) * 4);
        int xd = (int)a[1], yd = (int)a[2];
        int bw = a[3] ? (int)a[3] : fw, bh = a[4] ? (int)a[4] : fh;
        int xs = (int)a[5], ys = (int)a[6];
        if (a[7]) ys += (int)a[7];
        wasm_present(bits, fw, fh, bpp, stride, flip, xs, ys, bw, bh, xd, yd);
        return 1;
    }
    if (!strcmp(n, "StretchDIBits")) {
        u32 bmi = a[10], bits = a[9];
        int fw = bmi ? (int)R32(bmi + 4) : 640;
        int fh = bmi ? (int)R32(bmi + 8) : 480;
        int bpp = bmi ? (u16)R16(bmi + 14) : 32;
        int flip = fh > 0;
        if (fh < 0) fh = -fh;
        u32 stride = (u32)(((fw * bpp + 31) / 32) * 4);
        int xd = (int)a[1], yd = (int)a[2];
        int xs = (int)a[5], ys = (int)a[6];
        int bw = a[7] ? (int)a[7] : fw, bh = a[8] ? (int)a[8] : fh;
        wasm_present(bits, fw, fh, bpp, stride, flip, xs, ys, bw, bh, xd, yd);
        return 1;
    }
    if (!strcmp(n, "GetStockObject")) return 0x4000;
    if (!strcmp(n, "CreateDCA")) return 0x2000;
    if (!strcmp(n, "DeleteDC") || !strcmp(n, "DeleteObject") || !strcmp(n, "SelectPalette")) return 1;
    if (!strcmp(n, "GetDeviceCaps")) { if (a[1] == 8) return g_dd_w; if (a[1] == 10) return g_dd_h; if (a[1] == 12) return g_dd_bpp; return 1; }
    if (!strcmp(n, "PatBlt") || !strcmp(n, "StartPage") || !strcmp(n, "EndPage")) return 1;
    if (!strcmp(n, "StartDocA") || !strcmp(n, "AbortDoc") || !strcmp(n, "EndDoc")) return 1;
    fprintf(stderr, "wasm: unimplemented GDI32!%s\n", n);
    abort();
}

/* ---------- MSVCP80 basic_string (MSVC 8 layout: 16-byte buffer, size, capacity) ---------- */
static u32 str_data(u32 s) { return R32(s + 20) >= 16 ? R32(s) : s; }
static void str_init(u32 s) { if (!s) return; W8(s, 0); W32(s + 16, 0); W32(s + 20, 15); }
static void str_assign(u32 s, const char *p)
{
    size_t n = p ? strlen(p) : 0;
    if (n > 15) {
        char *d = (char *)malloc(n + 1);
        if (!d) abort();
        memcpy(d, p, n + 1);
        if (R32(s + 20) >= 16 && R32(s)) free((void *)(uintptr_t)R32(s));
        W32(s, (u32)(uintptr_t)d);
        W32(s + 20, (u32)n);
    } else {
        if (R32(s + 20) >= 16 && R32(s)) free((void *)(uintptr_t)R32(s));
        W32(s + 20, 15);
        if (n) memcpy((void *)(uintptr_t)s, p, n);
        W8(s + n, 0);
    }
    W32(s + 16, (u32)n);
}

static void str_append(u32 self, const char *p)
{
    size_t n = p ? strlen(p) : 0, old = R32(self + 16);
    if (!n) return;
    char *tmp = (char *)malloc(old + n + 1);
    if (!tmp) abort();
    memcpy(tmp, (const void *)(uintptr_t)str_data(self), old);
    memcpy(tmp + old, p, n + 1);
    str_assign(self, tmp);
    free(tmp);
}

static u64 msvcp80(u32 *a)
{
    const char *n = wasm_current->name;
    u32 self = wasm_current_ecx;
    if (strstr(n, "??$?M") && strstr(n, "basic_string")) {
        return strcmp((const char *)(uintptr_t)str_data(a[0]), (const char *)(uintptr_t)str_data(a[1])) < 0;
    }
    if (strstr(n, "??0") && strstr(n, "basic_string")) {
        str_init(self);
        if (strstr(n, "PBD")) str_assign(self, (const char *)(uintptr_t)a[0]);
        else if (strstr(n, "ABV01")) str_assign(self, (const char *)(uintptr_t)str_data(a[0]));
        return self;
    }
    if (strstr(n, "??1") && strstr(n, "basic_string")) {
        if (R32(self + 20) >= 16 && R32(self)) free((void *)(uintptr_t)R32(self));
        return 0;
    }
    if (strstr(n, "??4") && strstr(n, "basic_string")) {
        if (strstr(n, "PBD")) str_assign(self, (const char *)(uintptr_t)a[0]);
        else str_assign(self, (const char *)(uintptr_t)str_data(a[0]));
        return self;
    }
    if (strstr(n, "?append@") && strstr(n, "basic_string")) {
        str_append(self, (const char *)(uintptr_t)str_data(a[0]));
        return self;
    }
    if (strstr(n, "?c_str@")) return str_data(self);
    if (strstr(n, "??A") && strstr(n, "basic_string")) return str_data(self) + a[0];
    if (strstr(n, "?size@") || strstr(n, "?length@")) return R32(self + 16);
    if (strstr(n, "?empty@")) return R32(self + 16) == 0;
    fprintf(stderr, "wasm: unimplemented MSVCP80!%s\n", n);
    abort();
}

/* ---------- OpenAL / WINMM / SHELL32 / OLE32 / FreeType ---------- */
static u64 openal(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "alGetError")) return 0;
    if (!strcmp(n, "alGenBuffers") || !strcmp(n, "alGenSources")) {
        for (u32 i = 0; i < a[0]; ++i) W32(a[1] + i * 4, 1 + i);
        return 0;
    }
    if (!strcmp(n, "alDeleteBuffers") || !strcmp(n, "alDeleteSources") || !strcmp(n, "alBufferData") ||
        !strncmp(n, "alSource", 8) || !strncmp(n, "alListener", 10) || !strncmp(n, "alc", 3)) return 0;
    if (!strcmp(n, "alGetString")) return (u32)(uintptr_t)"wasm";
    if (!strcmp(n, "alGetSourcei") || !strcmp(n, "alGetBufferi") || !strcmp(n, "alGetListenerfv") || !strcmp(n, "alGetSourcef")) return 0;
    fprintf(stderr, "wasm: unimplemented OpenAL32!%s\n", n);
    abort();
}

static u64 winmm(u32 *a)
{
    (void)a;
    const char *n = wasm_current->name;
    if (!strcmp(n, "joyGetNumDevs")) return 0;
    if (!strcmp(n, "joyGetPos") || !strcmp(n, "joyGetPosEx") || !strcmp(n, "joyGetDevCapsA")) return 1;
    if (!strcmp(n, "joySetCapture") || !strcmp(n, "joySetThreshold") || !strcmp(n, "joyReleaseCapture")) return 1;
    if (!strcmp(n, "waveOutGetNumDevs")) return 0;
    if (!strcmp(n, "waveOutGetDevCapsA")) return 1;
    if (!strcmp(n, "timeGetDevCaps")) {
        if (a[0]) { W32(a[0], 1); W32(a[0] + 4, 1000); }
        return 0;
    }
    if (!strcmp(n, "timeGetTime")) return (u32)(emscripten_get_now());
    if (!strcmp(n, "timeBeginPeriod") || !strcmp(n, "timeEndPeriod")) return 0;
    if (!strcmp(n, "PlaySoundA")) return 1;
    fprintf(stderr, "wasm: unimplemented WINMM!%s\n", n);
    abort();
}

/* ---------- DirectDraw ---------- */
static u64 dd_ok(u32 *a) { (void)a; return 0; }
static u64 dd_mode(u32 *a)
{
    g_dd_w = a[1]; g_dd_h = a[2]; g_dd_bpp = a[3];
    fprintf(stderr, "wasm: DirectDraw display mode %ux%ux%u\n", a[1], a[2], a[3]);
    return 0;
}
static u64 dd_unsupported(u32 *a)
{
    (void)a;
    fprintf(stderr, "wasm: unimplemented IDirectDraw2 method\n");
    abort();
}
static u32 ddraw_object(void)
{
    static u32 obj, vt;
    if (!obj) {
        vt = (u32)(uintptr_t)malloc(22 * 4);
        for (u32 i = 0; i < 22; ++i) W32(vt + i * 4, api_add_emu("ddraw", "method", dd_unsupported, 1, 0));
        W32(vt + 0x08, api_add_emu("ddraw", "Release", dd_ok, 1, 0));
        W32(vt + 0x48, api_add_emu("ddraw", "Initialize", dd_ok, 1, 0));
        W32(vt + 0x4c, api_add_emu("ddraw", "RestoreDisplayMode", dd_ok, 1, 0));
        W32(vt + 0x50, api_add_emu("ddraw", "SetCooperativeLevel", dd_ok, 3, 0));
        W32(vt + 0x54, api_add_emu("ddraw", "SetDisplayMode", dd_mode, 6, 0));
        obj = (u32)(uintptr_t)malloc(4);
        W32(obj, vt);
    }
    return obj;
}

static u64 wasm_cocreate(u32 *a)
{
    static const unsigned char clsid_dd[16] = {0xe0,0x0e,0xb7,0xd7,0x40,0x43,0xcf,0x11,0xb0,0x63,0x00,0x20,0xaf,0xc2,0xcd,0x35};
    static const unsigned char iid_dd2[16] = {0xe0,0xf3,0xa6,0xb3,0x43,0x2b,0xcf,0x11,0xa2,0xde,0x00,0xaa,0x00,0xb9,0x33,0x56};
    if (a[0] && a[3] && !memcmp((const void *)(uintptr_t)a[0], clsid_dd, 16) &&
        !memcmp((const void *)(uintptr_t)a[3], iid_dd2, 16)) {
        if (a[4]) W32(a[4], ddraw_object());
        return 0;
    }
    return 0x80040111u;   /* CLASS_E_CLASSNOTAVAILABLE */
}

static u64 other(u32 *a)
{
    const char *n = wasm_current->name;
    if (!strcmp(n, "SHGetMalloc") || !strcmp(n, "SHGetFileInfoA") || !strcmp(n, "Shell_NotifyIconA")) return 0;
    if (!strcmp(n, "SHGetSpecialFolderLocation")) {
        u32 pidl = (u32)(uintptr_t)calloc(1, 8);
        if (a[2]) W32(a[2], pidl);
        return 0;
    }
    if (!strcmp(n, "SHGetPathFromIDListA")) {
        if (a[1]) strcpy((char *)(uintptr_t)a[1], "/data");
        return 1;
    }
    if (!strcmp(n, "ShellExecuteA")) return 33;
    if (!strcmp(n, "DragAcceptFiles") || !strcmp(n, "DragFinish")) return 0;
    if (!strcmp(n, "DragQueryFileA")) return 0;
    if (!strcmp(n, "OleInitialize") || !strcmp(n, "OleUninitialize")) return 0;
    if (!strcmp(n, "CoInitialize") || !strcmp(n, "CoUninitialize")) return 0;
    if (!strcmp(n, "CoCreateInstance")) return wasm_cocreate(a);
    if (!strcmp(n, "FT_Init_FreeType")) { if (a[0]) W32(a[0], 0x7000); return 0; }
    if (!strncmp(n, "FT_", 3)) return 1;
    if (!strncmp(n, "Sym", 3) || !strncmp(n, "Image", 5)) return 0;
    if (!strcmp(n, "DocumentPropertiesA") || !strcmp(n, "ClosePrinter") || !strcmp(n, "OpenPrinterA")) return 0;
    if (!strcmp(n, "GetOpenFileNameA")) return 0;
    if (!strcmp(n, "PrintDlgA")) return 0;
    if (!strcmp(n, "StackWalk")) return 0;
    fprintf(stderr, "wasm: unimplemented %s!%s\n", wasm_current->module, n);
    abort();
}

/* ---------- MSVCR80 ---------- */
static u32 wasm_rtdynamiccast(void *inptr, u32 vfdelta, u32 S, u32 T, int is_ref)
{
    (void)vfdelta; (void)S;
    if (!inptr) return 0;
    u32 vt = R32((u32)(uintptr_t)inptr);
    u32 col = vt ? R32(vt - 4) : 0;
    if (!col || R32(col) != 0) return is_ref ? (abort(), 0) : 0;
    u32 chd = R32(col + 16);
    u32 n = chd ? R32(chd + 8) : 0, arr = chd ? R32(chd + 12) : 0;
    for (u32 i = 0; i < n; ++i) {
        u32 bcd = R32(arr + i * 4);
        if (!bcd || R32(bcd) != T) continue;
        i32 pdisp = (i32)R32(bcd + 12);
        u32 adj = (u32)(uintptr_t)inptr - R32(col + 4) + R32(bcd + 8);
        if (pdisp >= 0) adj = R32(adj + (u32)pdisp) + R32(bcd + 16);
        return adj;
    }
    if (is_ref) { fprintf(stderr, "wasm: __RTDynamicCast failed for %s\n", (const char *)(uintptr_t)(T + 8)); abort(); }
    return 0;
}

static u64 msvcr80(u32 *a)
{
    const char *n = wasm_current->name;
#define S(x) (!strcmp(n, x))
    if (S("memset")) return (u64)(uintptr_t)memset((void *)(uintptr_t)a[0], (int)a[1], a[2]);
    if (S("memcpy")) return (u64)(uintptr_t)memcpy((void *)(uintptr_t)a[0], (void *)(uintptr_t)a[1], a[2]);
    if (S("memmove")) return (u64)(uintptr_t)memmove((void *)(uintptr_t)a[0], (void *)(uintptr_t)a[1], a[2]);
    if (S("memmove_s")) {
        if (!a[0] || (!a[2] && a[3]) || a[1] < a[3]) { if (a[0] && a[1]) memset((void *)(uintptr_t)a[0], 0, a[1]); return 22; }
        memmove((void *)(uintptr_t)a[0], (void *)(uintptr_t)a[2], a[3]);
        return 0;
    }
    if (S("memcmp")) return (u32)memcmp((void *)(uintptr_t)a[0], (void *)(uintptr_t)a[1], a[2]);
    if (S("memchr")) return (u32)(uintptr_t)memchr((void *)(uintptr_t)a[0], (int)a[1], a[2]);
    if (S("strlen")) return (u32)strlen((const char *)(uintptr_t)a[0]);
    if (S("strcpy")) { strcpy((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]); return a[0]; }
    if (S("strncpy")) { strncpy((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], a[2]); return a[0]; }
    if (S("strcat")) { strcat((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]); return a[0]; }
    if (S("strcmp")) return (u32)(int)strcmp((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]);
    if (S("strncmp")) return (u32)(int)strncmp((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], a[2]);
    if (S("_stricmp")) return (u32)(int)strcasecmp((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]);
    if (S("_strupr")) { char *p = (char *)(uintptr_t)a[0]; for (char *q = p; q && *q; ++q) *q = (char)toupper((unsigned char)*q); return a[0]; }
    if (S("strchr")) return (u32)(uintptr_t)strchr((const char *)(uintptr_t)a[0], (int)a[1]);
    if (S("strrchr")) return (u32)(uintptr_t)strrchr((const char *)(uintptr_t)a[0], (int)a[1]);
    if (S("strstr")) return (u32)(uintptr_t)strstr((const char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1]);
    if (S("strdup") || S("_strdup")) { char *d = strdup((const char *)(uintptr_t)a[0]); return (u32)(uintptr_t)d; }
    if (S("toupper")) return (u32)toupper((int)a[0]);
    if (S("tolower")) return (u32)tolower((int)a[0]);
    if (S("isdigit")) return (u32)isdigit((int)a[0]);
    if (S("islower")) return (u32)islower((int)a[0]);
    if (S("isspace")) return (u32)isspace((int)a[0]);
    if (S("malloc") || S("??2@YAPAXI@Z")) return (u32)(uintptr_t)malloc(a[0]);
    if (S("calloc")) return (u32)(uintptr_t)calloc(a[0], a[1]);
    if (S("realloc")) return (u32)(uintptr_t)realloc((void *)(uintptr_t)a[0], a[1]);
    if (S("free") || S("??3@YAXPAX@Z")) { free((void *)(uintptr_t)a[0]); return 0; }
    if (S("abs")) return (u32)abs((int)a[0]);
    if (S("atoi")) return (u32)atoi((const char *)(uintptr_t)a[0]);
    if (S("atol")) return (u32)atol((const char *)(uintptr_t)a[0]);
    if (S("_itoa")) {
        snprintf((char *)(uintptr_t)a[0], 32, "%d", (int)a[1]);
        if (a[2]) W8(a[2], 10);
        return a[0];
    }
    if (S("sprintf")) { wasm_vformat((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], a + 2, 16); return (u32)strlen((char *)(uintptr_t)a[0]); }
    if (S("vsprintf")) { wasm_vformat((char *)(uintptr_t)a[0], (const char *)(uintptr_t)a[1], (const u32 *)(uintptr_t)a[2], 16); return (u32)strlen((char *)(uintptr_t)a[0]); }
    if (S("fopen")) { const char *path = wasm_path((const char *)(uintptr_t)a[0]); FILE *f = fopen(path, (const char *)(uintptr_t)a[1]); return (u32)(uintptr_t)f; }
    if (S("fclose")) return (u32)fclose((FILE *)(uintptr_t)a[0]);
    if (S("fread")) return (u32)fread((void *)(uintptr_t)a[0], a[1], a[2], (FILE *)(uintptr_t)a[3]);    if (S("fwrite")) return (u32)fwrite((const void *)(uintptr_t)a[0], a[1], a[2], (FILE *)(uintptr_t)a[3]);
    if (S("fseek")) return (u32)fseek((FILE *)(uintptr_t)a[0], (long)(int)a[1], (int)a[2]);
    if (S("fgetpos")) {
        long p = ftell((FILE *)(uintptr_t)a[0]);
        if (a[1]) { W32(a[1], (u32)p); W32(a[1] + 4, (u32)((u64)p >> 32)); }
        return p < 0 ? 0xFFFFFFFFu : 0;
    }
    if (S("fsetpos")) {
        u64 p = (u64)R32(a[1]) | ((u64)R32(a[1] + 4) << 32);
        return (u32)fseek((FILE *)(uintptr_t)a[0], (long)p, SEEK_SET);
    }
    if (S("ftell")) return (u32)ftell((FILE *)(uintptr_t)a[0]);
    if (S("feof")) return (u32)feof((FILE *)(uintptr_t)a[0]);
    if (S("fgetc")) return (u32)fgetc((FILE *)(uintptr_t)a[0]);
    if (S("fputc") || S("putc")) return (u32)fputc((int)a[0], (FILE *)(uintptr_t)a[1]);
    if (S("fputs")) return (u32)fputs((const char *)(uintptr_t)a[0], (FILE *)(uintptr_t)a[1]);
    if (S("fprintf")) { char buf[4096]; wasm_vformat(buf, (const char *)(uintptr_t)a[1], a + 2, 12); return (u32)fprintf((FILE *)(uintptr_t)a[0], "%s", buf); }
    if (S("fscanf")) return (u32)wasm_vscanf(a, 1);
    if (S("sscanf")) return (u32)wasm_vscanf(a, 0);
    if (S("fflush")) return (u32)fflush((FILE *)(uintptr_t)a[0]);
    if (S("_mkdir")) return (u32)mkdir(wasm_path((const char *)(uintptr_t)a[0]), 0777);
    if (S("_rmdir")) return (u32)rmdir(wasm_path((const char *)(uintptr_t)a[0]));
    if (S("_chdir")) return (u32)chdir(wasm_path((const char *)(uintptr_t)a[0]));
    if (S("remove")) return (u32)remove(wasm_path((const char *)(uintptr_t)a[0]));
    if (S("rename")) return (u32)rename(wasm_path((const char *)(uintptr_t)a[0]), wasm_path((const char *)(uintptr_t)a[1]));
    if (S("_lock") || S("_unlock")) return 0;
    if (S("_strdate")) { strcpy((char *)(uintptr_t)a[0], "01/01/00"); return 0; }
    if (S("_findfirst64i32")) return 0xFFFFFFFFu;
    if (S("_findnext64i32")) return 0xFFFFFFFFu;
    if (S("_findclose")) return 0;
    if (S("_time64")) {
        uint64_t t = (uint64_t)time(NULL);
        if (a[0]) { W32(a[0], (u32)t); W32(a[0] + 4, (u32)(t >> 32)); }
        return t;
    }
    if (S("_localtime64")) {
        time_t t = (time_t)(uint64_t)R32(a[0]) | ((time_t)(uint64_t)R32(a[0]+4) << 32);
        return (u32)(uintptr_t)localtime(&t);
    }
    if (S("_filelength")) { FILE *f = (FILE *)(uintptr_t)a[0]; long c = ftell(f); fseek(f, 0, SEEK_END); long e = ftell(f); fseek(f, c, SEEK_SET); return (u32)e; }
    if (S("_fileno")) return (u32)fileno((FILE *)(uintptr_t)a[0]);
    if (S("__iob_func")) {
        static u32 iob[3];
        iob[0] = (u32)(uintptr_t)stdin; iob[1] = (u32)(uintptr_t)stdout; iob[2] = (u32)(uintptr_t)stderr;
        return (u32)(uintptr_t)iob;
    }
    if (S("_errno")) { static int cell; cell = errno; return (u32)(uintptr_t)&cell; }
    if (S("__dllonexit")) return a[0];
    if (S("_adjust_fdiv")) return 0;
    if (S("strftime")) return (u32)strftime((char *)(uintptr_t)a[0], a[1], (const char *)(uintptr_t)a[2], (const struct tm *)(uintptr_t)a[3]);
    if (S("_stat64i32")) {
        struct stat st;
        if (!a[1] || stat(wasm_path((const char *)(uintptr_t)a[0]), &st) != 0) return 0xFFFFFFFFu;
        u32 out = a[1];
        memset((void *)(uintptr_t)out, 0, 56);
        W16(out + 6, st.st_mode); W16(out + 8, 1); W32(out + 16, 0);
        W64(out + 24, (u64)st.st_size);
        W64(out + 32, (u64)st.st_atime); W64(out + 40, (u64)st.st_mtime); W64(out + 48, (u64)st.st_ctime);
        return 0;
    }
    if (S("??0exception@std@@QAE@XZ")) { u32 t = wasm_current_ecx; W32(t, 0); W32(t + 4, 0); W32(t + 8, 0); return t; }
    if (S("??0exception@std@@QAE@ABQBD@Z")) { u32 t = wasm_current_ecx; W32(t, 0); W32(t + 4, a[0] ? R32(a[0]) : 0); W32(t + 8, 0); return t; }
    if (S("??0exception@std@@QAE@ABV01@@Z")) { memcpy((void *)(uintptr_t)wasm_current_ecx, (void *)(uintptr_t)a[0], 12); return wasm_current_ecx; }
    if (S("??1exception@std@@UAE@XZ") || S("?_type_info_dtor_internal_method@type_info@@QAEXXZ")) return 0;
    if (S("?what@exception@std@@UBEPBDXZ")) { u32 m = wasm_current_ecx ? R32(wasm_current_ecx + 4) : 0; return m ? m : (u32)(uintptr_t)""; }
    if (S("??_V@YAXPAX@Z")) { free((void *)(uintptr_t)a[0]); return 0; }
    if (S("?terminate@@YAXXZ") || S("_purecall") || S("_invoke_watson")) {
        fprintf(stderr, "wasm: %s called\n", n);
        abort();
    }
    if (S("_controlfp_s") || S("__set_app_type") || S("__setusermatherr") || S("_configthreadlocale") ||
        S("_crt_debugger_hook") || S("_invalid_parameter_noinfo") || S("_initterm") || S("_initterm_e")) return 0;
    if (S("_encode_pointer") || S("_decode_pointer")) return a[0];
    if (S("_onexit")) return a[0];
    if (S("__getmainargs")) {
        if (a[0]) W32(a[0], 1);
        if (a[1]) { u32 argv = (u32)(uintptr_t)malloc(8); W32(argv, (u32)(uintptr_t)"hoyle.exe"); W32(argv + 4, 0); W32(a[1], argv); }
        if (a[2]) W32(a[2], 0);
        return 0;
    }
    if (S("__p__fmode") || S("__p__commode")) { static u32 v = 0; return (u32)(uintptr_t)&v; }
    if (S("_exit") || S("exit")) { exit((int)a[0]); }
    if (S("_cexit")) return 0;
    if (S("__RTDynamicCast")) return (u32)wasm_rtdynamiccast((void *)(uintptr_t)a[0], a[1], a[2], a[3], (int)a[4]);
    if (S("_CxxThrowException")) { fprintf(stderr, "wasm: C++ exception\n"); abort(); }
    if (S("_XcptFilter") || S("__CxxFrameHandler3") || S("_except_handler4_common")) return 0;
    if (S("_amsg_exit")) { fprintf(stderr, "wasm: _amsg_exit(%d)\n", (int)a[0]); abort(); }
    if (S("_ismbblead")) return 0;
    if (S("_mbsinc")) return a[0] + 1;
    if (S("_mbsdec")) return a[1] > a[0] ? a[1] - 1 : a[0];
    if (S("_mbsnextc")) return (u32)(u8)R8(a[0]);
    if (S("_splitpath")) {
        const char *path = (const char *)(uintptr_t)a[0];
        char *drive = (char *)(uintptr_t)a[1], *dir = (char *)(uintptr_t)a[2];
        char *fname = (char *)(uintptr_t)a[3], *ext = (char *)(uintptr_t)a[4];
        const char *p = path, *fs = path;
        if (p[0] && p[1] == ':') { if (drive) { drive[0] = p[0]; drive[1] = ':'; drive[2] = 0; p += 2; } fs = p; }
        const char *sep = NULL, *dot = NULL;
        for (const char *q = fs; *q; ++q) {
            if (*q == '\\' || *q == '/') sep = q;
            else if (*q == '.') dot = q;
        }
        if (sep) { size_t n = (size_t)(sep - fs) + 1; if (dir) { memcpy(dir, fs, n); dir[n] = 0; } }
        else if (dir) dir[0] = 0;
        const char *base = sep ? sep + 1 : fs;
        if (dot && dot >= base) {
            if (fname) { size_t n = (size_t)(dot - base); memcpy(fname, base, n); fname[n] = 0; }
            if (ext) { strcpy(ext, dot); }
        } else {
            if (fname) strcpy(fname, base);
            if (ext) ext[0] = 0;
        }
        return 0;
    }
    if (S("_makepath")) {
        char *out = (char *)(uintptr_t)a[0];
        const char *drive = (const char *)(uintptr_t)a[1], *dir = (const char *)(uintptr_t)a[2];
        const char *fname = (const char *)(uintptr_t)a[3], *ext = (const char *)(uintptr_t)a[4];
        out[0] = 0;
        if (drive) strcat(out, drive);
        if (dir) strcat(out, dir);
        if (fname) strcat(out, fname);
        if (ext) strcat(out, ext);
        return 0;
    }
    if (S("qsort") || S("bsearch")) { fprintf(stderr, "wasm: special not routed: %s\n", n); abort(); }
    fprintf(stderr, "wasm: unimplemented MSVCR80!%s\n", n);
    abort();
#undef S
}

ApiEmu wasm_lookup(const char *module, const char *name)
{
    (void)module;
    (void)name;
    return wasm_import;
}

u64 wasm_import(u32 *a)
{
    args = a;
    const char *m = wasm_current->module;
    const char *n2 = wasm_current->name;
    (void)n2;
    if (!strcmp(m, "KERNEL32")) return kernel32(a);
    if (!strcmp(m, "USER32")) return user32(a);
    if (!strcmp(m, "GDI32")) return gdi32(a);
    if (!strcmp(m, "MSVCR80")) return msvcr80(a);
    if (!strcmp(m, "MSVCP80")) return msvcp80(a);
    if (!strcmp(m, "OpenAL32")) return openal(a);
    if (!strcmp(m, "WINMM")) return winmm(a);
    if (!strcmp(m, "SHELL32") || !strcmp(m, "ole32") || !strcmp(m, "OLE32") ||
        !strcmp(m, "freetype6") || !strcmp(m, "dbghelp") || !strcmp(m, "WINSPOOL") ||
        !strcmp(m, "comdlg32") || !strcmp(m, "shim")) return other(a);
    fprintf(stderr, "wasm: unimplemented module %s!%s\n", m, wasm_current->name);
    abort();
}

/* direct helpers used by the platform-specific part of the lifted window procedure */
int32_t GetWindowLongA(HWND h, int32_t index)
{
    (void)h;
    (void)index;
    return 0;   /* no client-to-canvas offset: the wasm window is already 640x480 */
}

int32_t GetClientRect(HWND h, RECT *rect)
{
    (void)h;
    if (rect) { rect->left = 0; rect->top = 0; rect->right = 640; rect->bottom = 480; }
    return 1;
}
