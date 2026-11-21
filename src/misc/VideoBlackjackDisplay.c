#include "protos.h"

void f_00542d90(void) /* VideoBlackjackDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542d90);
    /* 00542d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00542d93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542d96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00542d99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542d9c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x542da1u); f_005e9e20();
    /* 00542da1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542da4: mov dword ptr [eax], 0x6c65cc */ W32((u32)(r_eax), 0x6c65ccu);
    /* 00542daa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542db1: jmp 0x542dbc */ goto L_00542dbc;
L_00542db3:; BB(0x00542db3);
    /* 00542db3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542db6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00542db9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00542dbc:; BB(0x00542dbc);
    /* 00542dbc: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542dc0: jge 0x542df5 */ if ((fS==fO)) goto L_00542df5;
L_00542dc2:; BB(0x00542dc2);
    /* 00542dc2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00542dc9: jmp 0x542dd4 */ goto L_00542dd4;
L_00542dcb:; BB(0x00542dcb);
    /* 00542dcb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00542dce: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00542dd1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00542dd4:; BB(0x00542dd4);
    /* 00542dd4: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542dd8: jge 0x542df3 */ if ((fS==fO)) goto L_00542df3;
L_00542dda:; BB(0x00542dda);
    /* 00542dda: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542ddd: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00542de0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542de3: lea edx, [ecx + eax + 0x44] */ r_edx = (u32)(r_ecx+r_eax+0x44u);
    /* 00542de7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00542dea: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 00542df1: jmp 0x542dcb */ goto L_00542dcb;
L_00542df3:; BB(0x00542df3);
    /* 00542df3: jmp 0x542db3 */ goto L_00542db3;
L_00542df5:; BB(0x00542df5);
    /* 00542df5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542dfc: jmp 0x542e07 */ goto L_00542e07;
L_00542dfe:; BB(0x00542dfe);
    /* 00542dfe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542e01: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00542e04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00542e07:; BB(0x00542e07);
    /* 00542e07: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542e0b: jge 0x542e1d */ if ((fS==fO)) goto L_00542e1d;
L_00542e0d:; BB(0x00542e0d);
    /* 00542e0d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542e10: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542e13: mov dword ptr [eax + edx*4 + 0x10], 0 */ W32((u32)(r_eax+r_edx*4+0x10u), 0x0u);
    /* 00542e1b: jmp 0x542dfe */ goto L_00542dfe;
L_00542e1d:; BB(0x00542e1d);
    /* 00542e1d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542e24: jmp 0x542e2f */ goto L_00542e2f;
L_00542e26:; BB(0x00542e26);
    /* 00542e26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542e29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00542e2c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00542e2f:; BB(0x00542e2f);
    /* 00542e2f: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542e33: jge 0x542e48 */ if ((fS==fO)) goto L_00542e48;
L_00542e35:; BB(0x00542e35);
    /* 00542e35: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542e38: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542e3b: mov dword ptr [eax + edx*4 + 0x8c], 0 */ W32((u32)(r_eax+r_edx*4+0x8cu), 0x0u);
    /* 00542e46: jmp 0x542e26 */ goto L_00542e26;
L_00542e48:; BB(0x00542e48);
    /* 00542e48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542e4f: jmp 0x542e5a */ goto L_00542e5a;
L_00542e51:; BB(0x00542e51);
    /* 00542e51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542e54: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00542e57: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00542e5a:; BB(0x00542e5a);
    /* 00542e5a: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542e5e: jge 0x542e70 */ if ((fS==fO)) goto L_00542e70;
L_00542e60:; BB(0x00542e60);
    /* 00542e60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542e63: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542e66: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 00542e6e: jmp 0x542e51 */ goto L_00542e51;
L_00542e70:; BB(0x00542e70);
    /* 00542e70: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542e77: jmp 0x542e82 */ goto L_00542e82;
L_00542e79:; BB(0x00542e79);
    /* 00542e79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542e7c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00542e7f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00542e82:; BB(0x00542e82);
    /* 00542e82: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542e86: jge 0x542e98 */ if ((fS==fO)) goto L_00542e98;
L_00542e88:; BB(0x00542e88);
    /* 00542e88: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00542e8b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542e8e: mov dword ptr [eax + edx*4 + 0x38], 0 */ W32((u32)(r_eax+r_edx*4+0x38u), 0x0u);
    /* 00542e96: jmp 0x542e79 */ goto L_00542e79;
L_00542e98:; BB(0x00542e98);
    /* 00542e98: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542e9b: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00542ea5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542ea8: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
    /* 00542eb2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542eb5: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 00542ebc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542ebf: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00542ec6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542ec9: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 00542ed0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542ed3: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00542eda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542edd: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 00542ee4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542ee7: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 00542eee: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542ef1: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 00542ef8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542efb: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
    /* 00542f05: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542f08: mov dword ptr [edx + 0xbc], 0 */ W32((u32)(r_edx+0xbcu), 0x0u);
    /* 00542f12: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542f15: mov esp, ebp */ r_esp = r_ebp;
    /* 00542f17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00542f18: ret  */ FN_RET(0x00542d90); r_esp += 4; return;
}

void f_00542f20(void) /* VideoBlackjackDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00542f20);
    /* 00542f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00542f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00542f23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00542f25: push 0x6a4e7b */ { u32 v = 0x6a4e7bu; r_esp -= 4; W32(r_esp, v); }
    /* 00542f2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00542f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542f31: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00542f37: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00542f3c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00542f3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542f3f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00542f42: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00542f48: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 00542f4e: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00542f54: mov dword ptr [eax], 0x6c65cc */ W32((u32)(r_eax), 0x6c65ccu);
    /* 00542f5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00542f61: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00542f68: jmp 0x542f73 */ goto L_00542f73;
L_00542f6a:; BB(0x00542f6a);
    /* 00542f6a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00542f6d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00542f70: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00542f73:; BB(0x00542f73);
    /* 00542f73: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542f77: jge 0x543017 */ if ((fS==fO)) goto L_00543017;
L_00542f7d:; BB(0x00542f7d);
    /* 00542f7d: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00542f84: jmp 0x542f8f */ goto L_00542f8f;
L_00542f86:; BB(0x00542f86);
    /* 00542f86: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542f89: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00542f8c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00542f8f:; BB(0x00542f8f);
    /* 00542f8f: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00542f93: jge 0x543012 */ if ((fS==fO)) goto L_00543012;
L_00542f95:; BB(0x00542f95);
    /* 00542f95: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00542f98: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00542f9b: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00542fa1: lea edx, [ecx + eax + 0x44] */ r_edx = (u32)(r_ecx+r_eax+0x44u);
    /* 00542fa5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00542fa8: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542fac: je 0x54300d */ if (fZ) goto L_0054300d;
L_00542fae:; BB(0x00542fae);
    /* 00542fae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00542fb1: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00542fb4: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00542fba: lea eax, [edx + ecx + 0x44] */ r_eax = (u32)(r_edx+r_ecx+0x44u);
    /* 00542fbe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542fc1: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00542fc4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00542fc7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00542fca: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00542fcd: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00542fd1: je 0x542fe9 */ if (fZ) goto L_00542fe9;
L_00542fd3:; BB(0x00542fd3);
    /* 00542fd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00542fd5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542fd8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00542fda: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00542fdd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00542fdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x542fe1u); call_ind(t); }
    /* 00542fe1: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00542fe7: jmp 0x542ff3 */ goto L_00542ff3;
L_00542fe9:; BB(0x00542fe9);
    /* 00542fe9: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00542ff3:; BB(0x00542ff3);
    /* 00542ff3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00542ff6: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00542ff9: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00542fff: lea eax, [edx + ecx + 0x44] */ r_eax = (u32)(r_edx+r_ecx+0x44u);
    /* 00543003: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543006: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
L_0054300d:; BB(0x0054300d);
    /* 0054300d: jmp 0x542f86 */ goto L_00542f86;
L_00543012:; BB(0x00543012);
    /* 00543012: jmp 0x542f6a */ goto L_00542f6a;
L_00543017:; BB(0x00543017);
    /* 00543017: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0054301e: jmp 0x543029 */ goto L_00543029;
L_00543020:; BB(0x00543020);
    /* 00543020: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543023: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00543026: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00543029:; BB(0x00543029);
    /* 00543029: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054302d: jge 0x54308e */ if ((fS==fO)) goto L_0054308e;
L_0054302f:; BB(0x0054302f);
    /* 0054302f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543032: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00543038: cmp dword ptr [ecx + eax*4 + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054303d: je 0x54308c */ if (fZ) goto L_0054308c;
L_0054303f:; BB(0x0054303f);
    /* 0054303f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543042: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00543048: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0054304c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0054304f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00543052: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00543055: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543059: je 0x543071 */ if (fZ) goto L_00543071;
L_0054305b:; BB(0x0054305b);
    /* 0054305b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054305d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543060: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00543062: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543065: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00543067: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543069u); call_ind(t); }
    /* 00543069: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0054306f: jmp 0x54307b */ goto L_0054307b;
L_00543071:; BB(0x00543071);
    /* 00543071: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_0054307b:; BB(0x0054307b);
    /* 0054307b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054307e: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00543084: mov dword ptr [edx + ecx*4 + 0x10], 0 */ W32((u32)(r_edx+r_ecx*4+0x10u), 0x0u);
L_0054308c:; BB(0x0054308c);
    /* 0054308c: jmp 0x543020 */ goto L_00543020;
L_0054308e:; BB(0x0054308e);
    /* 0054308e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00543095: jmp 0x5430a0 */ goto L_005430a0;
L_00543097:; BB(0x00543097);
    /* 00543097: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054309a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054309d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005430a0:; BB(0x005430a0);
    /* 005430a0: cmp dword ptr [ebp - 0x10], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005430a4: jge 0x54310e */ if ((fS==fO)) goto L_0054310e;
L_005430a6:; BB(0x005430a6);
    /* 005430a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005430a9: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005430af: cmp dword ptr [edx + ecx*4 + 0x8c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005430b7: je 0x54310c */ if (fZ) goto L_0054310c;
L_005430b9:; BB(0x005430b9);
    /* 005430b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005430bc: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005430c2: mov edx, dword ptr [ecx + eax*4 + 0x8c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8cu));
    /* 005430c9: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005430cc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005430cf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005430d2: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005430d6: je 0x5430ee */ if (fZ) goto L_005430ee;
L_005430d8:; BB(0x005430d8);
    /* 005430d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005430da: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005430dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005430df: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005430e2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005430e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5430e6u); call_ind(t); }
    /* 005430e6: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005430ec: jmp 0x5430f8 */ goto L_005430f8;
L_005430ee:; BB(0x005430ee);
    /* 005430ee: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_005430f8:; BB(0x005430f8);
    /* 005430f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005430fb: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00543101: mov dword ptr [edx + ecx*4 + 0x8c], 0 */ W32((u32)(r_edx+r_ecx*4+0x8cu), 0x0u);
L_0054310c:; BB(0x0054310c);
    /* 0054310c: jmp 0x543097 */ goto L_00543097;
L_0054310e:; BB(0x0054310e);
    /* 0054310e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00543115: jmp 0x543120 */ goto L_00543120;
L_00543117:; BB(0x00543117);
    /* 00543117: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054311a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054311d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00543120:; BB(0x00543120);
    /* 00543120: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00543124: jge 0x543185 */ if ((fS==fO)) goto L_00543185;
L_00543126:; BB(0x00543126);
    /* 00543126: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543129: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0054312f: cmp dword ptr [edx + ecx*4 + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543134: je 0x543183 */ if (fZ) goto L_00543183;
L_00543136:; BB(0x00543136);
    /* 00543136: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543139: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0054313f: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00543143: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00543146: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00543149: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0054314c: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543150: je 0x543168 */ if (fZ) goto L_00543168;
L_00543152:; BB(0x00543152);
    /* 00543152: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00543154: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00543157: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00543159: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054315c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054315e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543160u); call_ind(t); }
    /* 00543160: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00543166: jmp 0x543172 */ goto L_00543172;
L_00543168:; BB(0x00543168);
    /* 00543168: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_00543172:; BB(0x00543172);
    /* 00543172: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543175: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0054317b: mov dword ptr [edx + ecx*4 + 4], 0 */ W32((u32)(r_edx+r_ecx*4+0x4u), 0x0u);
L_00543183:; BB(0x00543183);
    /* 00543183: jmp 0x543117 */ goto L_00543117;
L_00543185:; BB(0x00543185);
    /* 00543185: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0054318c: jmp 0x543197 */ goto L_00543197;
L_0054318e:; BB(0x0054318e);
    /* 0054318e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00543191: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00543194: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00543197:; BB(0x00543197);
    /* 00543197: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054319b: jge 0x543212 */ if ((fS==fO)) goto L_00543212;
L_0054319d:; BB(0x0054319d);
    /* 0054319d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005431a0: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005431a6: cmp dword ptr [edx + ecx*4 + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005431ab: je 0x54320d */ if (fZ) goto L_0054320d;
L_005431ad:; BB(0x005431ad);
    /* 005431ad: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005431b0: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005431b6: mov edx, dword ptr [ecx + eax*4 + 0x38] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 005431ba: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005431bd: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005431c0: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005431c3: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005431c7: je 0x5431f2 */ if (fZ) goto L_005431f2;
L_005431c9:; BB(0x005431c9);
    /* 005431c9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005431cc: call 0x5465f0 */ r_esp -= 4; W32(r_esp, 0x5431d1u); f_005465f0();
    /* 005431d1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005431d6: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005431d9: je 0x5431e7 */ if (fZ) goto L_005431e7;
L_005431db:; BB(0x005431db);
    /* 005431db: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005431de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005431df: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5431e4u); f_00686cae();
    /* 005431e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005431e7:; BB(0x005431e7);
    /* 005431e7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005431ea: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005431f0: jmp 0x5431fc */ goto L_005431fc;
L_005431f2:; BB(0x005431f2);
    /* 005431f2: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_005431fc:; BB(0x005431fc);
    /* 005431fc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005431ff: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00543205: mov dword ptr [edx + ecx*4 + 0x38], 0 */ W32((u32)(r_edx+r_ecx*4+0x38u), 0x0u);
L_0054320d:; BB(0x0054320d);
    /* 0054320d: jmp 0x54318e */ goto L_0054318e;
L_00543212:; BB(0x00543212);
    /* 00543212: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00543218: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0054321b: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0054321e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00543221: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00543224: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543228: je 0x543240 */ if (fZ) goto L_00543240;
L_0054322a:; BB(0x0054322a);
    /* 0054322a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054322c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0054322f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00543231: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00543234: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00543236: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543238u); call_ind(t); }
    /* 00543238: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0054323e: jmp 0x54324a */ goto L_0054324a;
L_00543240:; BB(0x00543240);
    /* 00543240: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_0054324a:; BB(0x0054324a);
    /* 0054324a: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00543250: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00543253: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00543256: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00543259: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0054325c: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543260: je 0x543278 */ if (fZ) goto L_00543278;
L_00543262:; BB(0x00543262);
    /* 00543262: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00543264: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00543267: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00543269: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0054326c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054326e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543270u); call_ind(t); }
    /* 00543270: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00543276: jmp 0x543282 */ goto L_00543282;
L_00543278:; BB(0x00543278);
    /* 00543278: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00543282:; BB(0x00543282);
    /* 00543282: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00543288: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0054328b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0054328e: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00543291: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00543294: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543298: je 0x5432b0 */ if (fZ) goto L_005432b0;
L_0054329a:; BB(0x0054329a);
    /* 0054329a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054329c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0054329f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005432a1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005432a4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005432a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5432a8u); call_ind(t); }
    /* 005432a8: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005432ae: jmp 0x5432ba */ goto L_005432ba;
L_005432b0:; BB(0x005432b0);
    /* 005432b0: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_005432ba:; BB(0x005432ba);
    /* 005432ba: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005432c0: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005432c3: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005432c6: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005432c9: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005432cc: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005432d0: je 0x5432e8 */ if (fZ) goto L_005432e8;
L_005432d2:; BB(0x005432d2);
    /* 005432d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005432d4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005432d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005432d9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005432dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005432de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5432e0u); call_ind(t); }
    /* 005432e0: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005432e6: jmp 0x5432f2 */ goto L_005432f2;
L_005432e8:; BB(0x005432e8);
    /* 005432e8: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_005432f2:; BB(0x005432f2);
    /* 005432f2: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005432f8: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005432fb: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005432fe: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00543301: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00543304: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543308: je 0x543320 */ if (fZ) goto L_00543320;
L_0054330a:; BB(0x0054330a);
    /* 0054330a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054330c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0054330f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00543311: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00543314: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00543316: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543318u); call_ind(t); }
    /* 00543318: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0054331e: jmp 0x54332a */ goto L_0054332a;
L_00543320:; BB(0x00543320);
    /* 00543320: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0054332a:; BB(0x0054332a);
    /* 0054332a: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00543330: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00543333: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00543336: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00543339: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0054333c: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543340: je 0x543358 */ if (fZ) goto L_00543358;
L_00543342:; BB(0x00543342);
    /* 00543342: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00543344: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00543347: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00543349: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0054334c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0054334e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543350u); call_ind(t); }
    /* 00543350: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00543356: jmp 0x543362 */ goto L_00543362;
L_00543358:; BB(0x00543358);
    /* 00543358: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_00543362:; BB(0x00543362);
    /* 00543362: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00543368: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0054336b: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0054336e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00543371: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00543374: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543378: je 0x543390 */ if (fZ) goto L_00543390;
L_0054337a:; BB(0x0054337a);
    /* 0054337a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054337c: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0054337f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00543381: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00543384: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00543386: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543388u); call_ind(t); }
    /* 00543388: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0054338e: jmp 0x54339a */ goto L_0054339a;
L_00543390:; BB(0x00543390);
    /* 00543390: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_0054339a:; BB(0x0054339a);
    /* 0054339a: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005433a0: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005433a6: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005433a9: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005433ac: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005433af: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005433b3: je 0x5433de */ if (fZ) goto L_005433de;
L_005433b5:; BB(0x005433b5);
    /* 005433b5: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005433b8: call 0x546160 */ r_esp -= 4; W32(r_esp, 0x5433bdu); f_00546160();
    /* 005433bd: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005433c2: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005433c5: je 0x5433d3 */ if (fZ) goto L_005433d3;
L_005433c7:; BB(0x005433c7);
    /* 005433c7: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005433ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005433cb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5433d0u); f_00686cae();
    /* 005433d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005433d3:; BB(0x005433d3);
    /* 005433d3: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005433d6: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005433dc: jmp 0x5433e8 */ goto L_005433e8;
L_005433de:; BB(0x005433de);
    /* 005433de: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_005433e8:; BB(0x005433e8);
    /* 005433e8: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005433ee: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 005433f4: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 005433fa: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00543400: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00543403: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543407: je 0x543432 */ if (fZ) goto L_00543432;
L_00543409:; BB(0x00543409);
    /* 00543409: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0054340c: call 0x546160 */ r_esp -= 4; W32(r_esp, 0x543411u); f_00546160();
    /* 00543411: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00543416: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00543419: je 0x543427 */ if (fZ) goto L_00543427;
L_0054341b:; BB(0x0054341b);
    /* 0054341b: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0054341e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054341f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x543424u); f_00686cae();
    /* 00543424: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00543427:; BB(0x00543427);
    /* 00543427: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0054342a: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00543430: jmp 0x54343c */ goto L_0054343c;
L_00543432:; BB(0x00543432);
    /* 00543432: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_0054343c:; BB(0x0054343c);
    /* 0054343c: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00543442: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00543448: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0054344e: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00543454: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0054345a: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543461: je 0x54347f */ if (fZ) goto L_0054347f;
L_00543463:; BB(0x00543463);
    /* 00543463: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00543465: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0054346b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0054346d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00543473: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00543475: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x543477u); call_ind(t); }
    /* 00543477: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0054347d: jmp 0x543489 */ goto L_00543489;
L_0054347f:; BB(0x0054347f);
    /* 0054347f: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_00543489:; BB(0x00543489);
    /* 00543489: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0054348f: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 00543495: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0054349b: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005434a1: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005434a7: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005434ae: je 0x5434cc */ if (fZ) goto L_005434cc;
L_005434b0:; BB(0x005434b0);
    /* 005434b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005434b2: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005434b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005434ba: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005434c0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005434c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5434c4u); call_ind(t); }
    /* 005434c4: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 005434ca: jmp 0x5434d6 */ goto L_005434d6;
L_005434cc:; BB(0x005434cc);
    /* 005434cc: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_005434d6:; BB(0x005434d6);
    /* 005434d6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005434dd: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005434e3: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5434e8u); f_005e9e40();
    /* 005434e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005434eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005434f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005434f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005434f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005434f6: ret  */ FN_RET(0x00542f20); r_esp += 4; return;
}

void f_005456a0(void) /* videoblackjackdisplay::func_005456a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005456a0);
    /* 005456a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005456a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005456a3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005456a6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005456a9: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005456b0: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005456b7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005456be: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005456c5: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 005456c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005456cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005456cd: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005456d3: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x5456d8u); f_00548f80();
    /* 005456d8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005456db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005456de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005456df: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005456e5: call 0x54a180 */ r_esp -= 4; W32(r_esp, 0x5456eau); f_0054a180();
    /* 005456ea: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005456ed: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005456f0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005456f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005456f6: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005456f9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005456fc: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00545700: ja 0x5457c8 */ if ((!fC&&!fZ)) goto L_005457c8;
L_00545706:; BB(0x00545706);
    /* 00545706: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00545709: jmp dword ptr [ecx*4 + 0x545904] */ { u32 t = R32((u32)(r_ecx*4+0x545904u)); switch (t) { case 0x545737u: goto L_00545737; case 0x545710u: goto L_00545710; case 0x545762u: goto L_00545762; case 0x545778u: goto L_00545778; case 0x54578eu: goto L_0054578e; case 0x5457a4u: goto L_005457a4; default: UNSUP(0x00545709, "jump table entry is not a known target"); } }
L_00545710:; BB(0x00545710);
    /* 00545710: push 0x3116cf */ { u32 v = 0x3116cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00545715: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00545718: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054571b: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0054571f: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x545724u); f_005eaf00();
    /* 00545724: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00545726: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00545729: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054572a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054572d: call 0x545560 */ r_esp -= 4; W32(r_esp, 0x545732u); f_00545560();
    /* 00545732: jmp 0x5457e3 */ goto L_005457e3;
L_00545737:; BB(0x00545737);
    /* 00545737: push 0x3116d4 */ { u32 v = 0x3116d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054573c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054573f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00545742: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00545746: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x54574bu); f_005eaf00();
    /* 0054574b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054574d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00545750: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545751: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00545754: call 0x545560 */ r_esp -= 4; W32(r_esp, 0x545759u); f_00545560();
    /* 00545759: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 0054575d: jmp 0x5457e3 */ goto L_005457e3;
L_00545762:; BB(0x00545762);
    /* 00545762: push 0x3116d0 */ { u32 v = 0x3116d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545767: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054576a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054576d: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00545771: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x545776u); f_005eaf00();
    /* 00545776: jmp 0x5457e3 */ goto L_005457e3;
L_00545778:; BB(0x00545778);
    /* 00545778: push 0x3116d1 */ { u32 v = 0x3116d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054577d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00545780: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00545783: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00545787: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x54578cu); f_005eaf00();
    /* 0054578c: jmp 0x5457e3 */ goto L_005457e3;
L_0054578e:; BB(0x0054578e);
    /* 0054578e: push 0x3116d2 */ { u32 v = 0x3116d2u; r_esp -= 4; W32(r_esp, v); }
    /* 00545793: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00545796: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00545799: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 0054579d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5457a2u); f_005eaf00();
    /* 005457a2: jmp 0x5457e3 */ goto L_005457e3;
L_005457a4:; BB(0x005457a4);
    /* 005457a4: push 0x3116d3 */ { u32 v = 0x3116d3u; r_esp -= 4; W32(r_esp, v); }
    /* 005457a9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005457ac: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457af: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 005457b3: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5457b8u); f_005eaf00();
    /* 005457b8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005457ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005457bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005457be: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005457c1: call 0x545560 */ r_esp -= 4; W32(r_esp, 0x5457c6u); f_00545560();
    /* 005457c6: jmp 0x5457e3 */ goto L_005457e3;
L_005457c8:; BB(0x005457c8);
    /* 005457c8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005457ca: jne 0x5457e3 */ if (!fZ) goto L_005457e3;
L_005457cc:; BB(0x005457cc);
    /* 005457cc: push 0x368 */ { u32 v = 0x368u; r_esp -= 4; W32(r_esp, v); }
    /* 005457d1: push 0x6c66dc */ { u32 v = 0x6c66dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005457d6: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005457db: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5457e0u); f_005e9f20();
    /* 005457e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005457e3:; BB(0x005457e3);
    /* 005457e3: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005457e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005457e9: jne 0x545837 */ if (!fZ) goto L_00545837;
L_005457eb:; BB(0x005457eb);
    /* 005457eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005457ee: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005457f1: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005457f5: je 0x5457ff */ if (fZ) goto L_005457ff;
L_005457f7:; BB(0x005457f7);
    /* 005457f7: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005457fb: je 0x54581b */ if (fZ) goto L_0054581b;
L_005457fd:; BB(0x005457fd);
    /* 005457fd: jmp 0x545835 */ goto L_00545835;
L_005457ff:; BB(0x005457ff);
    /* 005457ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00545802: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00545805: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00545807: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00545809: and eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054580c: add eax, 0x6b */ {  u32 a = r_eax; u32 b = 0x6bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054580f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00545812: mov dword ptr [ebp - 8], 0x60 */ W32((u32)(r_ebp+0xfffffff8u), 0x60u);
    /* 00545819: jmp 0x545835 */ goto L_00545835;
L_0054581b:; BB(0x0054581b);
    /* 0054581b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054581e: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00545821: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00545823: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00545825: and ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00545828: add ecx, 0x67 */ {  u32 a = r_ecx; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054582b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054582e: mov dword ptr [ebp - 8], 0xf1 */ W32((u32)(r_ebp+0xfffffff8u), 0xf1u);
L_00545835:; BB(0x00545835);
    /* 00545835: jmp 0x545869 */ goto L_00545869;
L_00545837:; BB(0x00545837);
    /* 00545837: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054583a: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0054583d: cmp dword ptr [ebp - 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545841: je 0x54584b */ if (fZ) goto L_0054584b;
L_00545843:; BB(0x00545843);
    /* 00545843: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545847: je 0x54585b */ if (fZ) goto L_0054585b;
L_00545849:; BB(0x00545849);
    /* 00545849: jmp 0x545869 */ goto L_00545869;
L_0054584b:; BB(0x0054584b);
    /* 0054584b: mov dword ptr [ebp - 0xc], 0x6d */ W32((u32)(r_ebp+0xfffffff4u), 0x6du);
    /* 00545852: mov dword ptr [ebp - 8], 0x60 */ W32((u32)(r_ebp+0xfffffff8u), 0x60u);
    /* 00545859: jmp 0x545869 */ goto L_00545869;
L_0054585b:; BB(0x0054585b);
    /* 0054585b: mov dword ptr [ebp - 0xc], 0x69 */ W32((u32)(r_ebp+0xfffffff4u), 0x69u);
    /* 00545862: mov dword ptr [ebp - 8], 0xf1 */ W32((u32)(r_ebp+0xfffffff8u), 0xf1u);
L_00545869:; BB(0x00545869);
    /* 00545869: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054586c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054586d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545870: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545871: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00545874: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00545877: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 0054587b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054587e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00545881: mov edx, dword ptr [eax + edx*4 + 0x10] */ r_edx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00545885: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00545887: mov ecx, edx */ r_ecx = r_edx;
    /* 00545889: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0054588c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x54588eu); call_ind(t); }
    /* 0054588e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00545891: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00545894: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 00545898: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054589b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054589e: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005458a2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005458a4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005458a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5458a9u); call_ind(t); }
    /* 005458a9: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005458af: movzx edx, byte ptr [ecx + 0x1c] */ r_edx = (u32)R8((u32)(r_ecx+0x1cu));
    /* 005458b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005458b5: jne 0x5458fd */ if (!fZ) goto L_005458fd;
L_005458b7:; BB(0x005458b7);
    /* 005458b7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005458ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005458bb: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005458c1: call 0x54a110 */ r_esp -= 4; W32(r_esp, 0x5458c6u); f_0054a110();
    /* 005458c6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005458c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005458cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005458cc: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005458d2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005458d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005458d6: fld1  */ FPUSH(1.0);
    /* 005458d8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005458db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005458dd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005458df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005458e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005458e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005458e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005458e7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005458ed: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005458ef: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005458f5: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005458fb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5458fdu); call_ind(t); }
L_005458fd:; BB(0x005458fd);
    /* 005458fd: mov esp, ebp */ r_esp = r_ebp;
    /* 005458ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545900: ret 4 */ FN_RET(0x005456a0); r_esp += 8; return;
}

void f_00546360(void) /* videoblackjackdisplay::func_00546360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00546360);
    /* 00546360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00546361: mov ebp, esp */ r_ebp = r_esp;
    /* 00546363: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00546366: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0054636b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054636d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00546370: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00546373: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0054637a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0054637d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00546380: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00546383: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00546386: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00546389: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054638c: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00546393: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00546396: movzx edx, byte ptr [ecx + 0x38] */ r_edx = (u32)R8((u32)(r_ecx+0x38u));
    /* 0054639a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054639c: je 0x5463a7 */ if (fZ) goto L_005463a7;
L_0054639e:; BB(0x0054639e);
    /* 0054639e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005463a1: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005463a4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005463a7:; BB(0x005463a7);
    /* 005463a7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005463aa: cmp dword ptr [ecx + 0x2c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005463b1: jle 0x5463ca */ if ((fZ||fS!=fO)) goto L_005463ca;
L_005463b3:; BB(0x005463b3);
    /* 005463b3: push 0x4be */ { u32 v = 0x4beu; r_esp -= 4; W32(r_esp, v); }
    /* 005463b8: push 0x6c66dc */ { u32 v = 0x6c66dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005463bd: push 0x6c6874 */ { u32 v = 0x6c6874u; r_esp -= 4; W32(r_esp, v); }
    /* 005463c2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5463c7u); f_005e9f20();
    /* 005463c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005463ca:; BB(0x005463ca);
    /* 005463ca: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005463cd: cmp dword ptr [eax + 0x2c], 0x3b9aca00 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005463d4: jle 0x5463e0 */ if ((fZ||fS!=fO)) goto L_005463e0;
L_005463d6:; BB(0x005463d6);
    /* 005463d6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005463d9: mov dword ptr [ecx + 0x2c], 0x3b9aca00 */ W32((u32)(r_ecx+0x2cu), 0x3b9aca00u);
L_005463e0:; BB(0x005463e0);
    /* 005463e0: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005463e3: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005463e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005463e7: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 005463ec: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005463ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005463f0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5463f6u); call_ind(t); }
    /* 005463f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005463f9: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 005463fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005463fd: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x546402u); f_00686ecc();
    /* 00546402: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00546405: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00546408: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0054640b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0054640e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00546411: jmp 0x54641c */ goto L_0054641c;
L_00546413:; BB(0x00546413);
    /* 00546413: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546416: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00546419: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0054641c:; BB(0x0054641c);
    /* 0054641c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00546420: jl 0x5464bd */ if ((fS!=fO)) goto L_005464bd;
L_00546426:; BB(0x00546426);
    /* 00546426: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00546429: mov al, byte ptr [ebp + edx - 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xffffffe4u))) & 0xffu);
    /* 0054642d: mov byte ptr [ebp - 0x2d], al */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_eax);
    /* 00546430: movsx ecx, byte ptr [ebp - 0x2d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd3u));
    /* 00546434: sub ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00546437: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054643a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054643d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054643e: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 00546444: call 0x545a80 */ r_esp -= 4; W32(r_esp, 0x546449u); f_00545a80();
    /* 00546449: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054644a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054644d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00546450: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00546454: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00546457: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054645a: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0054645e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00546460: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00546466: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546468u); call_ind(t); }
    /* 00546468: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054646b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054646c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054646f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546470: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00546473: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00546476: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0054647a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054647d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00546480: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00546484: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00546486: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00546489: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54648bu); call_ind(t); }
    /* 0054648b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054648e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00546491: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00546495: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00546498: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054649b: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0054649f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005464a1: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005464a4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5464a6u); call_ind(t); }
    /* 005464a6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005464a9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005464ac: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005464af: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005464b2: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005464b5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005464b8: jmp 0x546413 */ goto L_00546413;
L_005464bd:; BB(0x005464bd);
    /* 005464bd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005464c0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005464c3: jmp 0x5464ce */ goto L_005464ce;
L_005464c5:; BB(0x005464c5);
    /* 005464c5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005464c8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005464cb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_005464ce:; BB(0x005464ce);
    /* 005464ce: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005464d2: jge 0x5464f1 */ if ((fS==fO)) goto L_005464f1;
L_005464d4:; BB(0x005464d4);
    /* 005464d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005464d7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005464da: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005464de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005464e1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005464e4: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005464e8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005464ea: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005464ed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5464efu); call_ind(t); }
    /* 005464ef: jmp 0x5464c5 */ goto L_005464c5;
L_005464f1:; BB(0x005464f1);
    /* 005464f1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005464f4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005464f6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005464f9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005464fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005464fd: mov ecx, eax */ r_ecx = r_eax;
    /* 005464ff: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00546502: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x546504u); call_ind(t); }
    /* 00546504: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00546507: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00546509: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x54650eu); f_00686d72();
    /* 0054650e: mov esp, ebp */ r_esp = r_ebp;
    /* 00546510: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546511: ret  */ FN_RET(0x00546360); r_esp += 4; return;
}

