#include "protos.h"

void f_004cffe0(void) /* sub_4CFFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004cffe0);
    /* 004cffe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cffe1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cffe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cffe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004cffe7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004cffea: mov ax, word ptr [eax + 0x122] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x122u))) & 0xffffu);
    /* 004cfff1: mov esp, ebp */ r_esp = r_ebp;
    /* 004cfff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cfff4: ret  */ FN_RET(0x004cffe0); r_esp += 4; return;
}

