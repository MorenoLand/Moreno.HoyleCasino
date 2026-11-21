#include "protos.h"

void f_00538af0(void) /* SlotMachineSweetSuccess::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538af0);
    /* 00538af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538af4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538af7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538afa: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538afd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538b00: mov eax, dword ptr [eax + ecx*4 + 0x72d478] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72d478u));
    /* 00538b07: mov esp, ebp */ r_esp = r_ebp;
    /* 00538b09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538b0a: ret 8 */ FN_RET(0x00538af0); r_esp += 12; return;
}

void f_00538b10(void) /* SlotMachineSweetSuccess::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538b10);
    /* 00538b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00538b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538b17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538b1a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538b1d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538b20: mov eax, dword ptr [eax + ecx*4 + 0x72d580] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72d580u));
    /* 00538b27: mov esp, ebp */ r_esp = r_ebp;
    /* 00538b29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538b2a: ret 8 */ FN_RET(0x00538b10); r_esp += 12; return;
}

void f_00538b30(void) /* SlotMachineSweetSuccess::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538b30);
    /* 00538b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00538b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538b37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538b3a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00538b3d: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538b40: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538b43: mov eax, dword ptr [eax + ecx*4 + 0x72d418] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72d418u));
    /* 00538b4a: mov esp, ebp */ r_esp = r_ebp;
    /* 00538b4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538b4d: ret 8 */ FN_RET(0x00538b30); r_esp += 12; return;
}

void f_00538b50(void) /* SlotMachineSweetSuccess::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538b50);
    /* 00538b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00538b53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538b54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538b57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538b5a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538b5d: mov eax, dword ptr [eax + 0x72d8a0] */ r_eax = R32((u32)(r_eax+0x72d8a0u));
    /* 00538b63: mov esp, ebp */ r_esp = r_ebp;
    /* 00538b65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538b66: ret 4 */ FN_RET(0x00538b50); r_esp += 8; return;
}

void f_00538b70(void) /* SlotMachineSweetSuccess::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538b70);
    /* 00538b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00538b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538b77: mov eax, 8 */ r_eax = 0x8u;
    /* 00538b7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00538b7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538b7f: ret  */ FN_RET(0x00538b70); r_esp += 4; return;
}

void f_00538b80(void) /* SlotMachineSweetSuccess::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538b80);
    /* 00538b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00538b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538b87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538b8a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538b8d: add eax, 0x72d880 */ {  u32 a = r_eax; u32 b = 0x72d880u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538b92: mov esp, ebp */ r_esp = r_ebp;
    /* 00538b94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538b95: ret 4 */ FN_RET(0x00538b80); r_esp += 8; return;
}

