#include "protos.h"

void f_004d02f0(void) /* sub_4D02F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004d02f0);
    /* 004d02f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d02f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d02f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d02f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004d02f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004d02fa: mov ax, word ptr [eax + 0x12a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+0x12au))) & 0xffffu);
    /* 004d0301: mov esp, ebp */ r_esp = r_ebp;
    /* 004d0303: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0304: ret  */ FN_RET(0x004d02f0); r_esp += 4; return;
}

