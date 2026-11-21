#include "protos.h"

void f_004eab40(void) /* sub_4EAB40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004eab40);
    /* 004eab40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eab41: mov ebp, esp */ r_ebp = r_esp;
    /* 004eab43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004eab44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004eab47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eab4a: mov ax, word ptr [eax + 0x29e] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x29eu))) & 0xffffu);
    /* 004eab51: mov esp, ebp */ r_esp = r_ebp;
    /* 004eab53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eab54: ret  */ FN_RET(0x004eab40); r_esp += 4; return;
}

void f_004eae50(void) /* sub_4EAE50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004eae50);
    /* 004eae50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eae51: mov ebp, esp */ r_ebp = r_esp;
    /* 004eae53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004eae54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004eae57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004eae5a: mov ax, word ptr [eax + 0x2a6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x2a6u))) & 0xffffu);
    /* 004eae61: mov esp, ebp */ r_esp = r_ebp;
    /* 004eae63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eae64: ret  */ FN_RET(0x004eae50); r_esp += 4; return;
}

