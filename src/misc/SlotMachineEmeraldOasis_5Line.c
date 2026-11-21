#include "protos.h"

void f_00538e60(void) /* SlotMachineEmeraldOasis_5Line::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538e60);
    /* 00538e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00538e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538e67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538e6a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538e6d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538e70: mov eax, dword ptr [eax + ecx*4 + 0x730748] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x730748u));
    /* 00538e77: mov esp, ebp */ r_esp = r_ebp;
    /* 00538e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538e7a: ret 8 */ FN_RET(0x00538e60); r_esp += 12; return;
}

void f_00538e80(void) /* SlotMachineEmeraldOasis_5Line::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538e80);
    /* 00538e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00538e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538e87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538e8a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538e8d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538e90: mov eax, dword ptr [eax + ecx*4 + 0x730850] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x730850u));
    /* 00538e97: mov esp, ebp */ r_esp = r_ebp;
    /* 00538e99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538e9a: ret 8 */ FN_RET(0x00538e80); r_esp += 12; return;
}

void f_00538ea0(void) /* SlotMachineEmeraldOasis_5Line::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538ea0);
    /* 00538ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538ea7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538eaa: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00538ead: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538eb0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538eb3: mov eax, dword ptr [eax + ecx*4 + 0x72ec40] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72ec40u));
    /* 00538eba: mov esp, ebp */ r_esp = r_ebp;
    /* 00538ebc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538ebd: ret 8 */ FN_RET(0x00538ea0); r_esp += 12; return;
}

void f_00538ec0(void) /* SlotMachineEmeraldOasis_5Line::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538ec0);
    /* 00538ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538ec4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538ec7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538eca: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538ecd: mov eax, dword ptr [eax + 0x72f420] */ r_eax = R32((u32)(r_eax+0x72f420u));
    /* 00538ed3: mov esp, ebp */ r_esp = r_ebp;
    /* 00538ed5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538ed6: ret 4 */ FN_RET(0x00538ec0); r_esp += 8; return;
}

void f_00538ee0(void) /* SlotMachineEmeraldOasis_5Line::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538ee0);
    /* 00538ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538ee7: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00538eec: mov esp, ebp */ r_esp = r_ebp;
    /* 00538eee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538eef: ret  */ FN_RET(0x00538ee0); r_esp += 4; return;
}

void f_00538ef0(void) /* SlotMachineEmeraldOasis_5Line::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538ef0);
    /* 00538ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538ef7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538efa: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538efd: add eax, 0x72f400 */ {  u32 a = r_eax; u32 b = 0x72f400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538f02: mov esp, ebp */ r_esp = r_ebp;
    /* 00538f04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538f05: ret 4 */ FN_RET(0x00538ef0); r_esp += 8; return;
}

