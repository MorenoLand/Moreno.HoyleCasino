#include "protos.h"

void f_00539120(void) /* SlotMachineShootingStars::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539120);
    /* 00539120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539121: mov ebp, esp */ r_ebp = r_esp;
    /* 00539123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539127: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053912a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053912d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539130: mov eax, dword ptr [eax + ecx*4 + 0x731758] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x731758u));
    /* 00539137: mov esp, ebp */ r_esp = r_ebp;
    /* 00539139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053913a: ret 8 */ FN_RET(0x00539120); r_esp += 12; return;
}

void f_00539140(void) /* SlotMachineShootingStars::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539140);
    /* 00539140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539141: mov ebp, esp */ r_ebp = r_esp;
    /* 00539143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539147: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053914a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053914d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539150: mov eax, dword ptr [eax + ecx*4 + 0x731650] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x731650u));
    /* 00539157: mov esp, ebp */ r_esp = r_ebp;
    /* 00539159: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053915a: ret 8 */ FN_RET(0x00539140); r_esp += 12; return;
}

void f_00539160(void) /* SlotMachineShootingStars::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539160);
    /* 00539160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539161: mov ebp, esp */ r_ebp = r_esp;
    /* 00539163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539167: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053916a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053916d: mov eax, dword ptr [eax + 0x731378] */ r_eax = R32((u32)(r_eax+0x731378u));
    /* 00539173: mov esp, ebp */ r_esp = r_ebp;
    /* 00539175: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539176: ret 4 */ FN_RET(0x00539160); r_esp += 8; return;
}

void f_00539180(void) /* SlotMachineShootingStars::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539180);
    /* 00539180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539181: mov ebp, esp */ r_ebp = r_esp;
    /* 00539183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539187: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053918a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053918d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539190: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539193: mov eax, dword ptr [eax + ecx*4 + 0x731300] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x731300u));
    /* 0053919a: mov esp, ebp */ r_esp = r_ebp;
    /* 0053919c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053919d: ret 8 */ FN_RET(0x00539180); r_esp += 12; return;
}

void f_005391a0(void) /* SlotMachineShootingStars::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005391a0);
    /* 005391a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005391a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005391a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005391a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005391a7: mov eax, 0x13 */ r_eax = 0x13u;
    /* 005391ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005391ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005391af: ret  */ FN_RET(0x005391a0); r_esp += 4; return;
}

void f_005391b0(void) /* SlotMachineShootingStars::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005391b0);
    /* 005391b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005391b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005391b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005391b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005391b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005391ba: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005391bd: add eax, 0x731358 */ {  u32 a = r_eax; u32 b = 0x731358u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005391c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005391c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005391c5: ret 4 */ FN_RET(0x005391b0); r_esp += 8; return;
}

