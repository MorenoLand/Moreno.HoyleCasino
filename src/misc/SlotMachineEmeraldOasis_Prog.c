#include "protos.h"

void f_00538f10(void) /* SlotMachineEmeraldOasis_Prog::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538f10);
    /* 00538f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538f11: mov ebp, esp */ r_ebp = r_esp;
    /* 00538f13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538f14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538f17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538f1a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538f1d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538f20: mov eax, dword ptr [eax + ecx*4 + 0x730340] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x730340u));
    /* 00538f27: mov esp, ebp */ r_esp = r_ebp;
    /* 00538f29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538f2a: ret 8 */ FN_RET(0x00538f10); r_esp += 12; return;
}

void f_00538f30(void) /* SlotMachineEmeraldOasis_Prog::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538f30);
    /* 00538f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00538f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538f37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538f3a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538f3d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538f40: mov eax, dword ptr [eax + ecx*4 + 0x730448] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x730448u));
    /* 00538f47: mov esp, ebp */ r_esp = r_ebp;
    /* 00538f49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538f4a: ret 8 */ FN_RET(0x00538f30); r_esp += 12; return;
}

void f_00538f50(void) /* SlotMachineEmeraldOasis_Prog::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538f50);
    /* 00538f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00538f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538f57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538f5a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00538f5d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538f60: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538f63: mov eax, dword ptr [eax + ecx*4 + 0x72ebe8] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72ebe8u));
    /* 00538f6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00538f6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538f6d: ret 8 */ FN_RET(0x00538f50); r_esp += 12; return;
}

void f_00538f70(void) /* SlotMachineEmeraldOasis_Prog::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538f70);
    /* 00538f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00538f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538f74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538f77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538f7a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538f7d: mov eax, dword ptr [eax + 0x72f7b8] */ r_eax = R32((u32)(r_eax+0x72f7b8u));
    /* 00538f83: mov esp, ebp */ r_esp = r_ebp;
    /* 00538f85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538f86: ret 4 */ FN_RET(0x00538f70); r_esp += 8; return;
}

void f_00538f90(void) /* SlotMachineEmeraldOasis_Prog::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538f90);
    /* 00538f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00538f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538f97: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00538f9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00538f9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538f9f: ret  */ FN_RET(0x00538f90); r_esp += 4; return;
}

void f_00538fa0(void) /* SlotMachineEmeraldOasis_Prog::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538fa0);
    /* 00538fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538fa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538fa7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538faa: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538fad: add eax, 0x72f798 */ {  u32 a = r_eax; u32 b = 0x72f798u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538fb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00538fb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538fb5: ret 4 */ FN_RET(0x00538fa0); r_esp += 8; return;
}

