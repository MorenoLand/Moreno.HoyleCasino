#include "protos.h"

void f_005348e0(void) /* SlotMachineEmeraldOasis::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005348e0);
    /* 005348e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005348e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005348e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005348e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005348e7: mov eax, 0x30f07f */ r_eax = 0x30f07fu;
    /* 005348ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005348ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005348ef: ret  */ FN_RET(0x005348e0); r_esp += 4; return;
}

void f_005348f0(void) /* SlotMachineEmeraldOasis::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005348f0);
    /* 005348f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005348f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005348f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005348f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005348f7: mov eax, 0x30f05a */ r_eax = 0x30f05au;
    /* 005348fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005348fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005348ff: ret  */ FN_RET(0x005348f0); r_esp += 4; return;
}

void f_00538d00(void) /* SlotMachineEmeraldOasis::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538d00);
    /* 00538d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00538d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538d04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538d07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538d0a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538d0d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538d10: mov eax, dword ptr [eax + ecx*4 + 0x72fb30] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72fb30u));
    /* 00538d17: mov esp, ebp */ r_esp = r_ebp;
    /* 00538d19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538d1a: ret 8 */ FN_RET(0x00538d00); r_esp += 12; return;
}

void f_00538d20(void) /* SlotMachineEmeraldOasis::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538d20);
    /* 00538d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00538d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538d27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538d2a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538d2d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538d30: mov eax, dword ptr [eax + ecx*4 + 0x72fc38] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72fc38u));
    /* 00538d37: mov esp, ebp */ r_esp = r_ebp;
    /* 00538d39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538d3a: ret 8 */ FN_RET(0x00538d20); r_esp += 12; return;
}

void f_00538d40(void) /* SlotMachineEmeraldOasis::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538d40);
    /* 00538d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00538d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538d44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538d47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538d4a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00538d4d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538d50: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538d53: mov eax, dword ptr [eax + ecx*4 + 0x72eb90] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72eb90u));
    /* 00538d5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00538d5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538d5d: ret 8 */ FN_RET(0x00538d40); r_esp += 12; return;
}

void f_00538d60(void) /* SlotMachineEmeraldOasis::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538d60);
    /* 00538d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00538d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538d67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538d6a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538d6d: mov eax, dword ptr [eax + 0x72ecf0] */ r_eax = R32((u32)(r_eax+0x72ecf0u));
    /* 00538d73: mov esp, ebp */ r_esp = r_ebp;
    /* 00538d75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538d76: ret 4 */ FN_RET(0x00538d60); r_esp += 8; return;
}

void f_00538d80(void) /* SlotMachineEmeraldOasis::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538d80);
    /* 00538d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00538d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538d87: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00538d8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00538d8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538d8f: ret  */ FN_RET(0x00538d80); r_esp += 4; return;
}

void f_00538d90(void) /* SlotMachineEmeraldOasis::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538d90);
    /* 00538d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00538d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538d97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538d9a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538d9d: add eax, 0x72ecd0 */ {  u32 a = r_eax; u32 b = 0x72ecd0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538da2: mov esp, ebp */ r_esp = r_ebp;
    /* 00538da4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538da5: ret 4 */ FN_RET(0x00538d90); r_esp += 8; return;
}

