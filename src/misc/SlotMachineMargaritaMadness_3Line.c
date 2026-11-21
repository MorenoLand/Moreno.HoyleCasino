#include "protos.h"

void f_00539490(void) /* SlotMachineMargaritaMadness_3Line::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539490);
    /* 00539490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539491: mov ebp, esp */ r_ebp = r_esp;
    /* 00539493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539497: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053949a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053949d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005394a0: mov eax, dword ptr [eax + ecx*4 + 0x734950] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x734950u));
    /* 005394a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005394a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005394aa: ret 8 */ FN_RET(0x00539490); r_esp += 12; return;
}

void f_005394b0(void) /* SlotMachineMargaritaMadness_3Line::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005394b0);
    /* 005394b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005394b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005394b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005394b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005394b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005394ba: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005394bd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005394c0: mov eax, dword ptr [eax + ecx*4 + 0x734848] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x734848u));
    /* 005394c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005394c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005394ca: ret 8 */ FN_RET(0x005394b0); r_esp += 12; return;
}

void f_005394d0(void) /* SlotMachineMargaritaMadness_3Line::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005394d0);
    /* 005394d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005394d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005394d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005394d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005394d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005394da: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005394dd: mov eax, dword ptr [eax + 0x733e00] */ r_eax = R32((u32)(r_eax+0x733e00u));
    /* 005394e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005394e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005394e6: ret 4 */ FN_RET(0x005394d0); r_esp += 8; return;
}

void f_005394f0(void) /* SlotMachineMargaritaMadness_3Line::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005394f0);
    /* 005394f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005394f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005394f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005394f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005394f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005394fa: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005394fd: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539500: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539503: mov eax, dword ptr [eax + ecx*4 + 0x7339e0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x7339e0u));
    /* 0053950a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053950c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053950d: ret 8 */ FN_RET(0x005394f0); r_esp += 12; return;
}

void f_00539510(void) /* SlotMachineMargaritaMadness_3Line::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539510);
    /* 00539510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539511: mov ebp, esp */ r_ebp = r_esp;
    /* 00539513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539517: mov eax, 0xf */ r_eax = 0xfu;
    /* 0053951c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053951e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053951f: ret  */ FN_RET(0x00539510); r_esp += 4; return;
}

void f_00539520(void) /* SlotMachineMargaritaMadness_3Line::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539520);
    /* 00539520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539521: mov ebp, esp */ r_ebp = r_esp;
    /* 00539523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539527: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053952a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053952d: add eax, 0x733de0 */ {  u32 a = r_eax; u32 b = 0x733de0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539532: mov esp, ebp */ r_esp = r_ebp;
    /* 00539534: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539535: ret 4 */ FN_RET(0x00539520); r_esp += 8; return;
}

