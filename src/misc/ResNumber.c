#include "protos.h"

void f_00676340(void) /* ResNumber::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676340);
    /* 00676340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676341: mov ebp, esp */ r_ebp = r_esp;
    /* 00676343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676345: push 0x6ad561 */ { u32 v = 0x6ad561u; r_esp -= 4; W32(r_esp, v); }
    /* 0067634a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00676350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676351: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676352: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00676357: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00676359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067635a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067635d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00676363: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00676366: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676369: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x67636eu); f_005e9e20();
    /* 0067636e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676375: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676378: mov dword ptr [eax], 0x6e1a10 */ W32((u32)(r_eax), 0x6e1a10u);
    /* 0067637e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676381: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00676384: call 0x676410 */ r_esp -= 4; W32(r_esp, 0x676389u); f_00676410();
    /* 00676389: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067638c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0067638f: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00676392: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00676399: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067639c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067639f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006763a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006763a7: mov esp, ebp */ r_esp = r_ebp;
    /* 006763a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006763aa: ret 4 */ FN_RET(0x00676340); r_esp += 8; return;
}

