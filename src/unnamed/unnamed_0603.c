#include "protos.h"

void f_00603190(void) /* sub_603190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603190);
    /* 00603190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603191: mov ebp, esp */ r_ebp = r_esp;
    /* 00603193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603197: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060319a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060319d: mov dword ptr [eax + 0x1dc], ecx */ W32((u32)(r_eax+0x1dcu), r_ecx);
    /* 006031a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006031a6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006031a9: mov dword ptr [edx + 0x1e0], eax */ W32((u32)(r_edx+0x1e0u), r_eax);
    /* 006031af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006031b2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006031b5: mov dword ptr [ecx + 0x1e4], edx */ W32((u32)(r_ecx+0x1e4u), r_edx);
    /* 006031bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006031bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006031be: ret 0xc */ FN_RET(0x00603190); r_esp += 16; return;
}

