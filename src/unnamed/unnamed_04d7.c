#include "protos.h"

void f_004d7ad0(void) /* sub_4D7AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d7ad0);
    /* 004d7ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d7ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d7ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d7ad7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d7ada: mov ax, word ptr [eax + 0x1c6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1c6u))) & 0xffffu);
    /* 004d7ae1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d7ae3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7ae4: ret  */ FN_RET(0x004d7ad0); r_esp += 4; return;
}

void f_004d7de0(void) /* sub_4D7DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d7de0);
    /* 004d7de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d7de1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d7de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d7de4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d7de7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d7dea: mov ax, word ptr [eax + 0x1ce] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x1ceu))) & 0xffffu);
    /* 004d7df1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d7df3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d7df4: ret  */ FN_RET(0x004d7de0); r_esp += 4; return;
}

