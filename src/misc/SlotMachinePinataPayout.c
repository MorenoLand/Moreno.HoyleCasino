#include "protos.h"

void f_00534cc0(void) /* SlotMachinePinataPayout::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534cc0);
    /* 00534cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534cc7: mov eax, 0x30f092 */ r_eax = 0x30f092u;
    /* 00534ccc: mov esp, ebp */ r_esp = r_ebp;
    /* 00534cce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534ccf: ret  */ FN_RET(0x00534cc0); r_esp += 4; return;
}

void f_00539280(void) /* SlotMachinePinataPayout::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539280);
    /* 00539280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539281: mov ebp, esp */ r_ebp = r_esp;
    /* 00539283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539287: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053928a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053928d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539290: mov eax, dword ptr [eax + ecx*4 + 0x732e80] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x732e80u));
    /* 00539297: mov esp, ebp */ r_esp = r_ebp;
    /* 00539299: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053929a: ret 8 */ FN_RET(0x00539280); r_esp += 12; return;
}

void f_005392a0(void) /* SlotMachinePinataPayout::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005392a0);
    /* 005392a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005392a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005392a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005392a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005392a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005392aa: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005392ad: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005392b0: mov eax, dword ptr [eax + ecx*4 + 0x732d78] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x732d78u));
    /* 005392b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005392b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005392ba: ret 8 */ FN_RET(0x005392a0); r_esp += 12; return;
}

void f_005392c0(void) /* SlotMachinePinataPayout::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005392c0);
    /* 005392c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005392c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005392c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005392c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005392c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005392ca: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005392cd: mov eax, dword ptr [eax + 0x732460] */ r_eax = R32((u32)(r_eax+0x732460u));
    /* 005392d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005392d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005392d6: ret 4 */ FN_RET(0x005392c0); r_esp += 8; return;
}

void f_005392e0(void) /* SlotMachinePinataPayout::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005392e0);
    /* 005392e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005392e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005392e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005392e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005392e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005392ea: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005392ed: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005392f0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005392f3: mov eax, dword ptr [eax + ecx*4 + 0x7323b0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x7323b0u));
    /* 005392fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005392fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005392fd: ret 8 */ FN_RET(0x005392e0); r_esp += 12; return;
}

void f_00539300(void) /* SlotMachinePinataPayout::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539300);
    /* 00539300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539301: mov ebp, esp */ r_ebp = r_esp;
    /* 00539303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539307: mov eax, 0x3b */ r_eax = 0x3bu;
    /* 0053930c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053930e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053930f: ret  */ FN_RET(0x00539300); r_esp += 4; return;
}

void f_00539310(void) /* SlotMachinePinataPayout::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539310);
    /* 00539310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539311: mov ebp, esp */ r_ebp = r_esp;
    /* 00539313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539317: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053931a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053931d: add eax, 0x732440 */ {  u32 a = r_eax; u32 b = 0x732440u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539322: mov esp, ebp */ r_esp = r_ebp;
    /* 00539324: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539325: ret 4 */ FN_RET(0x00539310); r_esp += 8; return;
}

