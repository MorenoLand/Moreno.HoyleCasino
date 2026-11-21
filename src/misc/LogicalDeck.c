#include "protos.h"

void f_00642e10(void) /* LogicalDeck::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00642e10);
    /* 00642e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00642e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00642e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00642e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00642e17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642e1a: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x642e1fu); f_005e9e20();
    /* 00642e1f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642e22: mov dword ptr [eax], 0x6dc400 */ W32((u32)(r_eax), 0x6dc400u);
    /* 00642e28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642e2b: mov dword ptr [ecx + 0x80c], 0 */ W32((u32)(r_ecx+0x80cu), 0x0u);
    /* 00642e35: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642e38: mov dword ptr [edx + 0x808], 0 */ W32((u32)(r_edx+0x808u), 0x0u);
    /* 00642e42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00642e45: mov esp, ebp */ r_esp = r_ebp;
    /* 00642e47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00642e48: ret  */ FN_RET(0x00642e10); r_esp += 4; return;
}

