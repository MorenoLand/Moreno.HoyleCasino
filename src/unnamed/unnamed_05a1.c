#include "protos.h"

void f_005a1e00(void) /* sub_5A1E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1e00);
    /* 005a1e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e01: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1e03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1e06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a1e09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a1e10: jmp 0x5a1e1b */ goto L_005a1e1b;
L_005a1e12:; BB(0x005a1e12);
    /* 005a1e12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1e15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1e18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a1e1b:; BB(0x005a1e1b);
    /* 005a1e1b: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1e1f: jge 0x5a1e3c */ if ((fS==fO)) goto L_005a1e3c;
L_005a1e21:; BB(0x005a1e21);
    /* 005a1e21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1e24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e25: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a1e28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a1e2c: call 0x5a26f0 */ r_esp -= 4; W32(r_esp, 0x5a1e31u); f_005a26f0();
    /* 005a1e31: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005a1e34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1e36: jne 0x5a1e3a */ if (!fZ) goto L_005a1e3a;
L_005a1e38:; BB(0x005a1e38);
    /* 005a1e38: jmp 0x5a1e3c */ goto L_005a1e3c;
L_005a1e3a:; BB(0x005a1e3a);
    /* 005a1e3a: jmp 0x5a1e12 */ goto L_005a1e12;
L_005a1e3c:; BB(0x005a1e3c);
    /* 005a1e3c: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 005a1e40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e41: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1e44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e45: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1e48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a1e4c: call 0x5a3b70 */ r_esp -= 4; W32(r_esp, 0x5a1e51u); f_005a3b70();
    /* 005a1e51: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1e53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1e54: ret 8 */ FN_RET(0x005a1e00); r_esp += 12; return;
}

void f_005a1e60(void) /* sub_5A1E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1e60);
    /* 005a1e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e61: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1e63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1e66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a1e69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a1e70: jmp 0x5a1e7b */ goto L_005a1e7b;
L_005a1e72:; BB(0x005a1e72);
    /* 005a1e72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1e75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1e78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005a1e7b:; BB(0x005a1e7b);
    /* 005a1e7b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1e7f: jge 0x5a1e90 */ if ((fS==fO)) goto L_005a1e90;
L_005a1e81:; BB(0x005a1e81);
    /* 005a1e81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a1e84: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1e87: mov byte ptr [ecx + 0xf7], 0 */ W8((u32)(r_ecx+0xf7u), 0x0u);
    /* 005a1e8e: jmp 0x5a1e72 */ goto L_005a1e72;
L_005a1e90:; BB(0x005a1e90);
    /* 005a1e90: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1e92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1e93: ret  */ FN_RET(0x005a1e60); r_esp += 4; return;
}

void f_005a1ea0(void) /* sub_5A1EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1ea0);
    /* 005a1ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1ea3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1ea6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a1ea9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1eac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1ead: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a1eb2u); f_005dcb00();
    /* 005a1eb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1eb5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005a1eb8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a1ebb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a1ec0u); f_0063aac0();
    /* 005a1ec0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005a1ec2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005a1ec5: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1ec9: je 0x5a1ee7 */ if (fZ) goto L_005a1ee7;
L_005a1ecb:; BB(0x005a1ecb);
    /* 005a1ecb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a1ece: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5a1ed3u); f_0063aac0();
    /* 005a1ed3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a1ed5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005a1ed8: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1edc: je 0x5a1ee7 */ if (fZ) goto L_005a1ee7;
L_005a1ede:; BB(0x005a1ede);
    /* 005a1ede: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005a1ee5: jmp 0x5a1eee */ goto L_005a1eee;
L_005a1ee7:; BB(0x005a1ee7);
    /* 005a1ee7: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_005a1eee:; BB(0x005a1eee);
    /* 005a1eee: movzx eax, byte ptr [ebp - 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 005a1ef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1ef4: je 0x5a1f18 */ if (fZ) goto L_005a1f18;
L_005a1ef6:; BB(0x005a1ef6);
    /* 005a1ef6: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005a1ef9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1efa: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005a1efd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1efe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1f01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f02: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1f05: call 0x5a2a40 */ r_esp -= 4; W32(r_esp, 0x5a1f0au); f_005a2a40();
    /* 005a1f0a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a1f0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f0f: je 0x5a1f18 */ if (fZ) goto L_005a1f18;
L_005a1f11:; BB(0x005a1f11);
    /* 005a1f11: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005a1f13: jmp 0x5a1fe1 */ goto L_005a1fe1;
L_005a1f18:; BB(0x005a1f18);
    /* 005a1f18: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1f1b: mov byte ptr [edx + 0xf0], 0 */ W8((u32)(r_edx+0xf0u), 0x0u);
    /* 005a1f22: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1f25: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a1f28: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a1f2b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1f2e: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1f31: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005a1f34: mov byte ptr [ecx + 0xfb], dl */ W8((u32)(r_ecx+0xfbu), (u8)r_edx);
    /* 005a1f3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1f3d: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f40: movzx ecx, byte ptr [eax + 0xfb] */ r_ecx = (u32)R8((u32)(r_eax+0xfbu));
    /* 005a1f47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f49: jne 0x5a1f77 */ if (!fZ) goto L_005a1f77;
L_005a1f4b:; BB(0x005a1f4b);
    /* 005a1f4b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a1f4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1f52: call 0x5a3690 */ r_esp -= 4; W32(r_esp, 0x5a1f57u); f_005a3690();
    /* 005a1f57: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a1f5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f5c: je 0x5a1f77 */ if (fZ) goto L_005a1f77;
L_005a1f5e:; BB(0x005a1f5e);
    /* 005a1f5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f62: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f64: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1f67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1f6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1f6e: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 005a1f72: call 0x5a4390 */ r_esp -= 4; W32(r_esp, 0x5a1f77u); f_005a4390();
L_005a1f77:; BB(0x005a1f77);
    /* 005a1f77: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1f7a: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1f7d: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005a1f80: mov byte ptr [ecx + 0xff], dl */ W8((u32)(r_ecx+0xffu), (u8)r_edx);
    /* 005a1f86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1f89: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f8c: movzx ecx, byte ptr [eax + 0xff] */ r_ecx = (u32)R8((u32)(r_eax+0xffu));
    /* 005a1f93: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f95: jne 0x5a1fc3 */ if (!fZ) goto L_005a1fc3;
L_005a1f97:; BB(0x005a1f97);
    /* 005a1f97: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a1f9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1f9e: call 0x5a3630 */ r_esp -= 4; W32(r_esp, 0x5a1fa3u); f_005a3630();
    /* 005a1fa3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005a1fa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1fa8: je 0x5a1fc3 */ if (fZ) goto L_005a1fc3;
L_005a1faa:; BB(0x005a1faa);
    /* 005a1faa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fae: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fb0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fb4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1fb7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1fba: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005a1fbe: call 0x5a4390 */ r_esp -= 4; W32(r_esp, 0x5a1fc3u); f_005a4390();
L_005a1fc3:; BB(0x005a1fc3);
    /* 005a1fc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fc5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a1fc8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fc9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1fcc: call 0x5a3c20 */ r_esp -= 4; W32(r_esp, 0x5a1fd1u); f_005a3c20();
    /* 005a1fd1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fd3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a1fd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fd7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1fda: call 0x5a3b20 */ r_esp -= 4; W32(r_esp, 0x5a1fdfu); f_005a3b20();
    /* 005a1fdf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005a1fe1:; BB(0x005a1fe1);
    /* 005a1fe1: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1fe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1fe4: ret 0xc */ FN_RET(0x005a1ea0); r_esp += 16; return;
}

void f_005a1ff0(void) /* sub_5A1FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a1ff0);
    /* 005a1ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1ff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005a1ff7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a1ffa: cmp dword ptr [eax + 0xec], -1 */ {  u32 a = R32((u32)(r_eax+0xecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a2001: jne 0x5a2007 */ if (!fZ) goto L_005a2007;
L_005a2003:; BB(0x005a2003);
    /* 005a2003: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a2005: jmp 0x5a2019 */ goto L_005a2019;
L_005a2007:; BB(0x005a2007);
    /* 005a2007: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a200a: mov edx, dword ptr [ecx + 0xec] */ r_edx = R32((u32)(r_ecx+0xecu));
    /* 005a2010: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2011: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5a2016u); f_005dcb00();
    /* 005a2016: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a2019:; BB(0x005a2019);
    /* 005a2019: mov esp, ebp */ r_esp = r_ebp;
    /* 005a201b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a201c: ret  */ FN_RET(0x005a1ff0); r_esp += 4; return;
}

