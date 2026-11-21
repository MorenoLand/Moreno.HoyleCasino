#include "protos.h"

void f_006398c0(void) /* GameSelectDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006398c0);
    /* 006398c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006398c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006398c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006398c5: push 0x6aba9c */ { u32 v = 0x6aba9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006398ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006398d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006398d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006398d2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006398d7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006398d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006398da: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006398dd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006398e3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006398e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006398e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006398ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006398ed: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x6398f2u); f_005f71f0();
    /* 006398f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006398f9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006398fc: mov dword ptr [eax], 0x6db6ec */ W32((u32)(r_eax), 0x6db6ecu);
    /* 00639902: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639904: push 0x30d4f3 */ { u32 v = 0x30d4f3u; r_esp -= 4; W32(r_esp, v); }
    /* 00639909: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063990c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x639911u); f_005f83d0();
    /* 00639911: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00639918: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063991b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063991e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00639925: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639926: mov esp, ebp */ r_esp = r_ebp;
    /* 00639928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639929: ret  */ FN_RET(0x006398c0); r_esp += 4; return;
}

void f_00639d40(void) /* GameSelectDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639d40);
    /* 00639d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00639d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639d47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00639d4a: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x639d4fu); f_005f8990();
    /* 00639d4f: mov esp, ebp */ r_esp = r_ebp;
    /* 00639d51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639d52: ret 4 */ FN_RET(0x00639d40); r_esp += 8; return;
}

