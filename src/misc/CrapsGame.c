#include "protos.h"

void f_0042f090(void) /* CrapsGame::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042f090);
    /* 0042f090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042f091: mov ebp, esp */ r_ebp = r_esp;
    /* 0042f093: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042f095: push 0x69e698 */ { u32 v = 0x69e698u; r_esp -= 4; W32(r_esp, v); }
    /* 0042f09a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042f0a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0a2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042f0a7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042f0a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042f0aa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042f0ad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042f0b3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042f0b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042f0b9: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x42f0beu); f_005e9e20();
    /* 0042f0be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042f0c5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042f0c8: mov dword ptr [eax], 0x6b7350 */ W32((u32)(r_eax), 0x6b7350u);
    /* 0042f0ce: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0042f0d4: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x42f0d9u); f_0057ae30();
    /* 0042f0d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042f0e0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042f0e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042f0e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042f0ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042f0ee: mov esp, ebp */ r_esp = r_ebp;
    /* 0042f0f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042f0f1: ret  */ FN_RET(0x0042f090); r_esp += 4; return;
}

