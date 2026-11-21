#include "protos.h"

void f_006546f0(void) /* StatisticsPlayersListBox::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006546f0);
    /* 006546f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006546f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006546f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006546f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006546f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006546fc: call 0x5e4390 */ r_esp -= 4; W32(r_esp, 0x654701u); f_005e4390();
    /* 00654701: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00654704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654705: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 0065470b: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00654711: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x654716u); f_0063ab10();
    /* 00654716: mov eax, dword ptr [0x163069c] */ r_eax = R32((u32)(0x163069cu));
    /* 0065471b: mov ecx, dword ptr [eax + 0x570] */ r_ecx = R32((u32)(r_eax+0x570u));
    /* 00654721: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654722: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 00654728: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x65472du); f_00653bd0();
    /* 0065472d: mov esp, ebp */ r_esp = r_ebp;
    /* 0065472f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654730: ret  */ FN_RET(0x006546f0); r_esp += 4; return;
}

