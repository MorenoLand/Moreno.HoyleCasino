#include "protos.h"

void f_00667b90(void) /* GameSaver::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667b90);
    /* 00667b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00667b93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667b94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00667b97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667b9a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x667b9fu); f_005e9e20();
    /* 00667b9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667ba2: mov dword ptr [eax], 0x6dfbe0 */ W32((u32)(r_eax), 0x6dfbe0u);
    /* 00667ba8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667bab: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 00667bb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667bb5: mov esp, ebp */ r_esp = r_ebp;
    /* 00667bb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667bb8: ret  */ FN_RET(0x00667b90); r_esp += 4; return;
}

