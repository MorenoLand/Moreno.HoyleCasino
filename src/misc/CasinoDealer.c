#include "protos.h"

void f_005cd6a0(void) /* CasinoDealer::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd6a0);
    /* 005cd6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd6a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd6a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd6a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd6aa: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x5cd6afu); f_005f5f50();
    /* 005cd6af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd6b2: mov dword ptr [eax], 0x6d2a3c */ W32((u32)(r_eax), 0x6d2a3cu);
    /* 005cd6b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd6bb: mov dword ptr [ecx + 0x194], 0 */ W32((u32)(r_ecx+0x194u), 0x0u);
    /* 005cd6c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd6c8: mov byte ptr [edx + 0x190], 0 */ W8((u32)(r_edx+0x190u), 0x0u);
    /* 005cd6cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd6d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd6d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd6d5: ret  */ FN_RET(0x005cd6a0); r_esp += 4; return;
}

