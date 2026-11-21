#include "protos.h"

void f_00538a40(void) /* SlotMachineShoes::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538a40);
    /* 00538a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00538a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538a44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538a47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538a4a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538a4d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538a50: mov eax, dword ptr [eax + ecx*4 + 0x72cef8] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72cef8u));
    /* 00538a57: mov esp, ebp */ r_esp = r_ebp;
    /* 00538a59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538a5a: ret 8 */ FN_RET(0x00538a40); r_esp += 12; return;
}

void f_00538a60(void) /* SlotMachineShoes::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538a60);
    /* 00538a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00538a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538a67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538a6a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538a6d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538a70: mov eax, dword ptr [eax + ecx*4 + 0x72d000] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72d000u));
    /* 00538a77: mov esp, ebp */ r_esp = r_ebp;
    /* 00538a79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538a7a: ret 8 */ FN_RET(0x00538a60); r_esp += 12; return;
}

void f_00538a80(void) /* SlotMachineShoes::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538a80);
    /* 00538a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00538a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538a87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538a8a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00538a8d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538a90: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538a93: mov eax, dword ptr [eax + ecx*4 + 0x72cea0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72cea0u));
    /* 00538a9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00538a9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538a9d: ret 8 */ FN_RET(0x00538a80); r_esp += 12; return;
}

void f_00538aa0(void) /* SlotMachineShoes::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538aa0);
    /* 00538aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538aa7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538aaa: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538aad: mov eax, dword ptr [eax + 0x72d320] */ r_eax = R32((u32)(r_eax+0x72d320u));
    /* 00538ab3: mov esp, ebp */ r_esp = r_ebp;
    /* 00538ab5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538ab6: ret 4 */ FN_RET(0x00538aa0); r_esp += 8; return;
}

void f_00538ac0(void) /* SlotMachineShoes::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538ac0);
    /* 00538ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538ac7: mov eax, 7 */ r_eax = 0x7u;
    /* 00538acc: mov esp, ebp */ r_esp = r_ebp;
    /* 00538ace: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538acf: ret  */ FN_RET(0x00538ac0); r_esp += 4; return;
}

void f_00538ad0(void) /* SlotMachineShoes::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538ad0);
    /* 00538ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538ad7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538ada: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538add: add eax, 0x72d300 */ {  u32 a = r_eax; u32 b = 0x72d300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538ae2: mov esp, ebp */ r_esp = r_ebp;
    /* 00538ae4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538ae5: ret 4 */ FN_RET(0x00538ad0); r_esp += 8; return;
}

