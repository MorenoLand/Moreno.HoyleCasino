/* preentry.c: reserve the guest address range before the C runtime starts.
 * The process stack and the CRT's locale mappings are created before main and can land on 0x400000;
 * reserving the range first keeps them out. mainCRTStartup then runs the normal startup. */
#include <windows.h>

void mainCRTStartup(void);

__attribute__((noinline)) void rt_preentry(void)
{
    HANDLE h = GetStdHandle(STD_ERROR_HANDLE);
    DWORD w;
    char buf[192];
    unsigned long a = 0x400000;
    while (a < 0x1640000) {
        MEMORY_BASIC_INFORMATION m;
        if (!VirtualQuery((void *)(uintptr_t)a, &m, sizeof m)) break;
        int n = wsprintfA(buf, "pre %08lx st=%lx sz=%lx\n", (unsigned long)a, (unsigned long)m.State, (unsigned long)m.RegionSize);
        WriteFile(h, buf, n, &w, NULL);
        a = (unsigned long)m.BaseAddress + (unsigned long)m.RegionSize;
        if (!m.RegionSize) break;
    }
    void *p = VirtualAlloc((void *)(uintptr_t)0x400000, 0x1240000, MEM_RESERVE, PAGE_NOACCESS);
    DWORD err = GetLastError();
    int n = wsprintfA(buf, "preentry: alloc=%p err=%lu\n", p, (unsigned long)err);
    WriteFile(h, buf, n, &w, NULL);
    mainCRTStartup();
}
