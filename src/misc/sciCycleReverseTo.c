#include "protos.h"

void f_00600f90(void) /* sciCycleReverseTo::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600f90);
    /* 00600f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00600f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600f97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600f9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600f9e: call 0x600de0 */ r_esp -= 4; W32(r_esp, 0x600fa3u); f_00600de0();
    /* 00600fa3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600fa6: mov dword ptr [ecx], 0x6d7500 */ W32((u32)(r_ecx), 0x6d7500u);
    /* 00600fac: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600faf: mov dword ptr [edx + 0xc], 0xffffffff */ W32((u32)(r_edx+0xcu), 0xffffffffu);
    /* 00600fb6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600fb9: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 00600fc0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600fc3: mov esp, ebp */ r_esp = r_ebp;
    /* 00600fc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600fc6: ret 4 */ FN_RET(0x00600f90); r_esp += 8; return;
}

