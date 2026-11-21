#include "protos.h"

void f_0066e9e0(void) /* sub_66E9E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066e9e0);
    /* 0066e9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066e9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066e9e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e9e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066e9e7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0066e9eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e9ed: je 0x66e9f5 */ if (fZ) goto L_0066e9f5;
L_0066e9ef:; BB(0x0066e9ef);
    /* 0066e9ef: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066e9f3: jne 0x66e9fd */ if (!fZ) goto L_0066e9fd;
L_0066e9f5:; BB(0x0066e9f5);
    /* 0066e9f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066e9f8: call 0x66f1a0 */ r_esp -= 4; W32(r_esp, 0x66e9fdu); f_0066f1a0();
L_0066e9fd:; BB(0x0066e9fd);
    /* 0066e9fd: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0066ea01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ea03: je 0x66ea0b */ if (fZ) goto L_0066ea0b;
L_0066ea05:; BB(0x0066ea05);
    /* 0066ea05: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ea09: jne 0x66ea15 */ if (!fZ) goto L_0066ea15;
L_0066ea0b:; BB(0x0066ea0b);
    /* 0066ea0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ea0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ea10: call 0x66ea40 */ r_esp -= 4; W32(r_esp, 0x66ea15u); f_0066ea40();
L_0066ea15:; BB(0x0066ea15);
    /* 0066ea15: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0066ea19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ea1b: je 0x66ea23 */ if (fZ) goto L_0066ea23;
L_0066ea1d:; BB(0x0066ea1d);
    /* 0066ea1d: cmp dword ptr [ebp + 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ea21: jne 0x66ea2d */ if (!fZ) goto L_0066ea2d;
L_0066ea23:; BB(0x0066ea23);
    /* 0066ea23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ea25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ea28: call 0x66ea40 */ r_esp -= 4; W32(r_esp, 0x66ea2du); f_0066ea40();
L_0066ea2d:; BB(0x0066ea2d);
    /* 0066ea2d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ea2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ea30: ret 8 */ FN_RET(0x0066e9e0); r_esp += 12; return;
}

void f_0066ea40(void) /* sub_66EA40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ea40);
    /* 0066ea40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ea41: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ea43: sub esp, 0x17c */ {  u32 a = r_esp; u32 b = 0x17cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066ea49: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066ea4e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ea50: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066ea53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066ea54: mov dword ptr [ebp - 0x178], ecx */ W32((u32)(r_ebp+0xfffffe88u), r_ecx);
    /* 0066ea5a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ea5c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066ea61: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066ea63: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ea69: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0066ea6f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ea71u); call_ind(t); }
    /* 0066ea71: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066ea74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ea76: jne 0x66ea7d */ if (!fZ) goto L_0066ea7d;
L_0066ea78:; BB(0x0066ea78);
    /* 0066ea78: jmp 0x66f04e */ goto L_0066f04e;
L_0066ea7d:; BB(0x0066ea7d);
    /* 0066ea7d: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ea83: mov ecx, dword ptr [edx + 0x1f0] */ r_ecx = R32((u32)(r_edx+0x1f0u));
    /* 0066ea89: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x66ea8eu); f_005f54c0();
    /* 0066ea8e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0066ea91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ea93: je 0x66eb01 */ if (fZ) goto L_0066eb01;
L_0066ea95:; BB(0x0066ea95);
    /* 0066ea95: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ea9b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ea9d: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eaa3: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066eaa6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eaa8u); call_ind(t); }
    /* 0066eaa8: add eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066eaab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eaac: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eab2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066eab4: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eaba: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066eabd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eabfu); call_ind(t); }
    /* 0066eabf: add eax, 0x67 */ {  u32 a = r_eax; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066eac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eac3: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eac9: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0066eacf: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ead5: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0066eadb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066eadd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066eae0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eae2u); call_ind(t); }
    /* 0066eae2: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eae8: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0066eaee: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eaf4: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0066eafa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066eafc: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066eaff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eb01u); call_ind(t); }
L_0066eb01:; BB(0x0066eb01);
    /* 0066eb01: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb07: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 0066eb0d: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x66eb12u); f_005f54c0();
    /* 0066eb12: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0066eb15: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066eb17: je 0x66eb85 */ if (fZ) goto L_0066eb85;
L_0066eb19:; BB(0x0066eb19);
    /* 0066eb19: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066eb21: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb27: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066eb2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eb2cu); call_ind(t); }
    /* 0066eb2c: add eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066eb2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb30: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb36: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066eb38: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb3e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066eb41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eb43u); call_ind(t); }
    /* 0066eb43: add eax, 0x77 */ {  u32 a = r_eax; u32 b = 0x77u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066eb46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb47: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb4d: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 0066eb53: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb59: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 0066eb5f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066eb61: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066eb64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eb66u); call_ind(t); }
    /* 0066eb66: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb6c: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 0066eb72: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb78: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 0066eb7e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066eb80: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066eb83: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eb85u); call_ind(t); }
L_0066eb85:; BB(0x0066eb85);
    /* 0066eb85: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb8b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066eb8d: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eb93: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066eb96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eb98u); call_ind(t); }
    /* 0066eb98: add eax, 0x17c */ {  u32 a = r_eax; u32 b = 0x17cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066eb9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eb9e: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eba4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066eba6: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ebac: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066ebaf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ebb1u); call_ind(t); }
    /* 0066ebb1: add eax, 0x186 */ {  u32 a = r_eax; u32 b = 0x186u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ebb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ebb7: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ebbd: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0066ebc3: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ebc9: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0066ebcf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066ebd1: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066ebd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ebd6u); call_ind(t); }
    /* 0066ebd6: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ebdc: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 0066ebe2: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ebe8: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0066ebee: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066ebf0: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0066ebf3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ebf5u); call_ind(t); }
    /* 0066ebf5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066ebf8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066ebfb: jmp 0x66ec06 */ goto L_0066ec06;
L_0066ebfd:; BB(0x0066ebfd);
    /* 0066ebfd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ec00: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066ec03: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0066ec06:; BB(0x0066ec06);
    /* 0066ec06: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066ec0a: jge 0x66efb2 */ if ((fS==fO)) goto L_0066efb2;
L_0066ec10:; BB(0x0066ec10);
    /* 0066ec10: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ec13: imul eax, eax, 0x98 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x98u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066ec19: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ec1f: lea edx, [ecx + eax + 0x210] */ r_edx = (u32)(r_ecx+r_eax+0x210u);
    /* 0066ec26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec27: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec2c: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0066ec2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec30: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66ec36u); call_ind(t); }
    /* 0066ec36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066ec39: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0066ec3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ec40: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ec46: mov ecx, dword ptr [eax + edx*4 + 0x178] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x178u));
    /* 0066ec4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ec50: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ec56: mov edx, dword ptr [eax + edx*4 + 0x178] */ r_edx = R32((u32)(r_eax+r_edx*4+0x178u));
    /* 0066ec5d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066ec5f: mov ecx, edx */ r_ecx = r_edx;
    /* 0066ec61: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0066ec67: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66ec69u); call_ind(t); }
    /* 0066ec69: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ec6d: jne 0x66ecc8 */ if (!fZ) goto L_0066ecc8;
L_0066ec6f:; BB(0x0066ec6f);
    /* 0066ec6f: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ec75: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066ec77: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ec7d: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066ec80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ec82u); call_ind(t); }
    /* 0066ec82: add eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ec85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec86: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ec8c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ec8e: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ec94: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066ec97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ec99u); call_ind(t); }
    /* 0066ec99: add eax, 0xe2 */ {  u32 a = r_eax; u32 b = 0xe2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ec9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ec9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066eca2: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eca8: mov eax, dword ptr [edx + ecx*4 + 0x178] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0066ecaf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ecb2: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ecb8: mov ecx, dword ptr [edx + ecx*4 + 0x178] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0066ecbf: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066ecc1: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0066ecc4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66ecc6u); call_ind(t); }
    /* 0066ecc6: jmp 0x66ed2c */ goto L_0066ed2c;
L_0066ecc8:; BB(0x0066ecc8);
    /* 0066ecc8: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066eccb: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0066ecce: imul esi, esi, 0x18 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x18u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066ecd1: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ecd7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066ecd9: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ecdf: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066ece2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ece4u); call_ind(t); }
    /* 0066ece4: lea ecx, [esi + eax + 0xa2] */ r_ecx = (u32)(r_esi+r_eax+0xa2u);
    /* 0066eceb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ecec: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ecf2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066ecf4: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ecfa: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0066ecfd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66ecffu); call_ind(t); }
    /* 0066ecff: add eax, 0xa6 */ {  u32 a = r_eax; u32 b = 0xa6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ed04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ed05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ed08: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ed0e: mov edx, dword ptr [ecx + eax*4 + 0x178] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0066ed15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ed18: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ed1e: mov ecx, dword ptr [ecx + eax*4 + 0x178] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x178u));
    /* 0066ed25: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066ed27: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066ed2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ed2cu); call_ind(t); }
L_0066ed2c:; BB(0x0066ed2c);
    /* 0066ed2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ed2f: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ed35: mov eax, dword ptr [edx + ecx*4 + 0x178] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0066ed3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ed3f: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ed45: mov ecx, dword ptr [edx + ecx*4 + 0x178] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0066ed4c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066ed4e: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0066ed51: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66ed53u); call_ind(t); }
    /* 0066ed53: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ed59: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x66ed5eu); f_005f3bf0();
    /* 0066ed5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ed5f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066ed64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066ed66: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ed6c: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0066ed72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ed74u); call_ind(t); }
    /* 0066ed74: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 0066ed7a: lea ecx, [ebp - 0x170] */ r_ecx = (u32)(r_ebp+0xfffffe90u);
    /* 0066ed80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ed81: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ed84: imul edx, edx, 0x98 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066ed8a: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ed90: mov ecx, dword ptr [eax + edx + 0x244] */ r_ecx = R32((u32)(r_eax+r_edx+0x244u));
    /* 0066ed97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ed98: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 0066ed9e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066eda0: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 0066eda6: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0066edac: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66edaeu); call_ind(t); }
    /* 0066edae: lea eax, [ebp - 0x170] */ r_eax = (u32)(r_ebp+0xfffffe90u);
    /* 0066edb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066edb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066edb8: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066edbe: mov eax, dword ptr [edx + ecx*4 + 0x1a0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1a0u));
    /* 0066edc5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066edc8: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066edce: mov ecx, dword ptr [edx + ecx*4 + 0x1a0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1a0u));
    /* 0066edd5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066edd7: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0066eddd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66eddfu); call_ind(t); }
    /* 0066eddf: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ede3: jne 0x66ee3e */ if (!fZ) goto L_0066ee3e;
L_0066ede5:; BB(0x0066ede5);
    /* 0066ede5: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066edeb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066eded: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066edf3: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066edf6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66edf8u); call_ind(t); }
    /* 0066edf8: add eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066edfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066edfc: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee02: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ee04: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee0a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066ee0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ee0fu); call_ind(t); }
    /* 0066ee0f: add eax, 0xe2 */ {  u32 a = r_eax; u32 b = 0xe2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ee14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ee18: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee1e: mov eax, dword ptr [edx + ecx*4 + 0x1a0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1a0u));
    /* 0066ee25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ee28: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee2e: mov ecx, dword ptr [edx + ecx*4 + 0x1a0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1a0u));
    /* 0066ee35: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066ee37: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0066ee3a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66ee3cu); call_ind(t); }
    /* 0066ee3c: jmp 0x66eea2 */ goto L_0066eea2;
L_0066ee3e:; BB(0x0066ee3e);
    /* 0066ee3e: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ee41: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0066ee44: imul esi, esi, 0x18 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x18u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066ee47: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066ee4f: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee55: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066ee58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ee5au); call_ind(t); }
    /* 0066ee5a: lea ecx, [esi + eax + 0xa2] */ r_ecx = (u32)(r_esi+r_eax+0xa2u);
    /* 0066ee61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee62: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee68: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066ee6a: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee70: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0066ee73: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66ee75u); call_ind(t); }
    /* 0066ee75: add eax, 0xa6 */ {  u32 a = r_eax; u32 b = 0xa6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ee7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ee7b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ee7e: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee84: mov edx, dword ptr [ecx + eax*4 + 0x1a0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1a0u));
    /* 0066ee8b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ee8e: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ee94: mov ecx, dword ptr [ecx + eax*4 + 0x1a0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1a0u));
    /* 0066ee9b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066ee9d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066eea0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66eea2u); call_ind(t); }
L_0066eea2:; BB(0x0066eea2);
    /* 0066eea2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066eea5: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eeab: mov eax, dword ptr [edx + ecx*4 + 0x1a0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1a0u));
    /* 0066eeb2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066eeb5: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eebb: mov ecx, dword ptr [edx + ecx*4 + 0x1a0] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1a0u));
    /* 0066eec2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066eec4: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0066eec7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66eec9u); call_ind(t); }
    /* 0066eec9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066eecc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066eecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066eed0: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0066eed5: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 0066eed8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066eed9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66eedfu); call_ind(t); }
    /* 0066eedf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066eee2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066eee6: jle 0x66efa5 */ if ((fZ||fS!=fO)) goto L_0066efa5;
L_0066eeec:; BB(0x0066eeec);
    /* 0066eeec: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 0066eeef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066eef0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066eef3: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066eef9: mov edx, dword ptr [ecx + eax*4 + 0x1c8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 0066ef00: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ef03: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ef09: mov ecx, dword ptr [ecx + eax*4 + 0x1c8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 0066ef10: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066ef12: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0066ef18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ef1au); call_ind(t); }
    /* 0066ef1a: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ef1d: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0066ef20: imul esi, esi, 0x18 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x18u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0066ef23: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ef29: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ef2b: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ef31: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0066ef34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ef36u); call_ind(t); }
    /* 0066ef36: lea ecx, [esi + eax + 0xa2] */ r_ecx = (u32)(r_esi+r_eax+0xa2u);
    /* 0066ef3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ef3e: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ef44: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066ef46: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ef4c: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0066ef4f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66ef51u); call_ind(t); }
    /* 0066ef51: add eax, 0x82 */ {  u32 a = r_eax; u32 b = 0x82u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ef56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ef57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ef5a: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ef60: mov edx, dword ptr [ecx + eax*4 + 0x1c8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 0066ef67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ef6a: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ef70: mov ecx, dword ptr [ecx + eax*4 + 0x1c8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 0066ef77: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0066ef79: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0066ef7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ef7eu); call_ind(t); }
    /* 0066ef7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ef81: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ef87: mov eax, dword ptr [edx + ecx*4 + 0x1c8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0066ef8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ef91: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066ef97: mov ecx, dword ptr [edx + ecx*4 + 0x1c8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0066ef9e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0066efa0: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0066efa3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66efa5u); call_ind(t); }
L_0066efa5:; BB(0x0066efa5);
    /* 0066efa5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066efa9: jne 0x66efad */ if (!fZ) goto L_0066efad;
L_0066efab:; BB(0x0066efab);
    /* 0066efab: jmp 0x66efb2 */ goto L_0066efb2;
L_0066efad:; BB(0x0066efad);
    /* 0066efad: jmp 0x66ebfd */ goto L_0066ebfd;
L_0066efb2:; BB(0x0066efb2);
    /* 0066efb2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066efb6: jne 0x66f04e */ if (!fZ) goto L_0066f04e;
L_0066efbc:; BB(0x0066efbc);
    /* 0066efbc: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066efc2: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0066efc8: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0066efcb: mov dword ptr [ebp - 0x174], edx */ W32((u32)(r_ebp+0xfffffe8cu), r_edx);
    /* 0066efd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066efd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066efd5: mov ecx, dword ptr [ebp - 0x174] */ r_ecx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0066efdb: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x66efe0u); f_006464d0();
    /* 0066efe0: mov eax, dword ptr [ebp - 0x174] */ r_eax = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0066efe6: mov byte ptr [eax + 0x28], 0 */ W8((u32)(r_eax+0x28u), 0x0u);
    /* 0066efea: mov ecx, dword ptr [ebp - 0x174] */ r_ecx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0066eff0: mov byte ptr [ecx + 0x29], 0 */ W8((u32)(r_ecx+0x29u), 0x0u);
    /* 0066eff4: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066effa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066effc: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066f002: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0066f005: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66f007u); call_ind(t); }
    /* 0066f007: add eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f00a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f00b: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066f011: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066f013: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066f019: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0066f01c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66f01eu); call_ind(t); }
    /* 0066f01e: add eax, 0x77 */ {  u32 a = r_eax; u32 b = 0x77u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066f021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066f022: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066f028: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 0066f02e: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0066f031: call 0x646150 */ r_esp -= 4; W32(r_esp, 0x66f036u); f_00646150();
    /* 0066f036: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f038: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066f03a: mov eax, dword ptr [ebp - 0x178] */ r_eax = R32((u32)(r_ebp+0xfffffe88u));
    /* 0066f040: mov ecx, dword ptr [eax + 0x20c] */ r_ecx = R32((u32)(r_eax+0x20cu));
    /* 0066f046: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0066f049: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x66f04eu); f_006464d0();
L_0066f04e:; BB(0x0066f04e);
    /* 0066f04e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066f04f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066f052: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066f054: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66f059u); f_00686d72();
    /* 0066f059: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f05b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f05c: ret 4 */ FN_RET(0x0066ea40); r_esp += 8; return;
}

