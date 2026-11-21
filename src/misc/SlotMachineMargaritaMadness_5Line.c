#include "protos.h"

void f_00539540(void) /* SlotMachineMargaritaMadness_5Line::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539540);
    /* 00539540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539541: mov ebp, esp */ r_ebp = r_esp;
    /* 00539543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539547: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053954a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053954d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539550: mov eax, dword ptr [eax + ecx*4 + 0x734d58] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x734d58u));
    /* 00539557: mov esp, ebp */ r_esp = r_ebp;
    /* 00539559: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053955a: ret 8 */ FN_RET(0x00539540); r_esp += 12; return;
}

void f_00539560(void) /* SlotMachineMargaritaMadness_5Line::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539560);
    /* 00539560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539561: mov ebp, esp */ r_ebp = r_esp;
    /* 00539563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539567: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053956a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053956d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539570: mov eax, dword ptr [eax + ecx*4 + 0x734c50] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x734c50u));
    /* 00539577: mov esp, ebp */ r_esp = r_ebp;
    /* 00539579: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053957a: ret 8 */ FN_RET(0x00539560); r_esp += 12; return;
}

void f_00539580(void) /* SlotMachineMargaritaMadness_5Line::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539580);
    /* 00539580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539581: mov ebp, esp */ r_ebp = r_esp;
    /* 00539583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539587: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053958a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053958d: mov eax, dword ptr [eax + 0x733e00] */ r_eax = R32((u32)(r_eax+0x733e00u));
    /* 00539593: mov esp, ebp */ r_esp = r_ebp;
    /* 00539595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539596: ret 4 */ FN_RET(0x00539580); r_esp += 8; return;
}

void f_005395a0(void) /* SlotMachineMargaritaMadness_5Line::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005395a0);
    /* 005395a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005395a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005395a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005395a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005395a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005395aa: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005395ad: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005395b0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005395b3: mov eax, dword ptr [eax + ecx*4 + 0x733a80] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x733a80u));
    /* 005395ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005395bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005395bd: ret 8 */ FN_RET(0x005395a0); r_esp += 12; return;
}

void f_005395c0(void) /* SlotMachineMargaritaMadness_5Line::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005395c0);
    /* 005395c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005395c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005395c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005395c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005395c7: mov eax, 0xf */ r_eax = 0xfu;
    /* 005395cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005395ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005395cf: ret  */ FN_RET(0x005395c0); r_esp += 4; return;
}

void f_005395d0(void) /* SlotMachineMargaritaMadness_5Line::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005395d0);
    /* 005395d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005395d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005395d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005395d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005395d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005395da: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005395dd: add eax, 0x733de0 */ {  u32 a = r_eax; u32 b = 0x733de0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005395e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005395e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005395e5: ret 4 */ FN_RET(0x005395d0); r_esp += 8; return;
}

