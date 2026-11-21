#include "protos.h"

void f_00538db0(void) /* SlotMachineEmeraldOasis_3Line::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538db0);
    /* 00538db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538db7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538dba: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538dbd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538dc0: mov eax, dword ptr [eax + ecx*4 + 0x72ff38] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72ff38u));
    /* 00538dc7: mov esp, ebp */ r_esp = r_ebp;
    /* 00538dc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538dca: ret 8 */ FN_RET(0x00538db0); r_esp += 12; return;
}

void f_00538dd0(void) /* SlotMachineEmeraldOasis_3Line::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538dd0);
    /* 00538dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538dd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538dd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538dda: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538ddd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538de0: mov eax, dword ptr [eax + ecx*4 + 0x730040] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x730040u));
    /* 00538de7: mov esp, ebp */ r_esp = r_ebp;
    /* 00538de9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538dea: ret 8 */ FN_RET(0x00538dd0); r_esp += 12; return;
}

void f_00538df0(void) /* SlotMachineEmeraldOasis_3Line::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538df0);
    /* 00538df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538df4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538df7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538dfa: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00538dfd: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538e00: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538e03: mov eax, dword ptr [eax + ecx*4 + 0x72ebe8] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72ebe8u));
    /* 00538e0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00538e0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538e0d: ret 8 */ FN_RET(0x00538df0); r_esp += 12; return;
}

void f_00538e10(void) /* SlotMachineEmeraldOasis_3Line::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538e10);
    /* 00538e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00538e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538e17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538e1a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538e1d: mov eax, dword ptr [eax + 0x72f088] */ r_eax = R32((u32)(r_eax+0x72f088u));
    /* 00538e23: mov esp, ebp */ r_esp = r_ebp;
    /* 00538e25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538e26: ret 4 */ FN_RET(0x00538e10); r_esp += 8; return;
}

void f_00538e30(void) /* SlotMachineEmeraldOasis_3Line::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538e30);
    /* 00538e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00538e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538e37: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00538e3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00538e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538e3f: ret  */ FN_RET(0x00538e30); r_esp += 4; return;
}

void f_00538e40(void) /* SlotMachineEmeraldOasis_3Line::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538e40);
    /* 00538e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00538e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538e47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538e4a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538e4d: add eax, 0x72f068 */ {  u32 a = r_eax; u32 b = 0x72f068u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538e52: mov esp, ebp */ r_esp = r_ebp;
    /* 00538e54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538e55: ret 4 */ FN_RET(0x00538e40); r_esp += 8; return;
}

