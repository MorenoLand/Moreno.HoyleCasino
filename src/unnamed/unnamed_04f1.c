#include "protos.h"

void f_004f18e0(void) /* sub_4F18E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f18e0);
    /* 004f18e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f18e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f18e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f18e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f18e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f18ea: mov ax, word ptr [eax + 0x3ae] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x3aeu))) & 0xffffu);
    /* 004f18f1: mov esp, ebp */ r_esp = r_ebp;
    /* 004f18f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f18f4: ret  */ FN_RET(0x004f18e0); r_esp += 4; return;
}

void f_004f1bf0(void) /* sub_4F1BF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f1bf0);
    /* 004f1bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f1bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f1bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f1bf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f1bf7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f1bfa: mov ax, word ptr [eax + 0x3b6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x3b6u))) & 0xffffu);
    /* 004f1c01: mov esp, ebp */ r_esp = r_ebp;
    /* 004f1c03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f1c04: ret  */ FN_RET(0x004f1bf0); r_esp += 4; return;
}

