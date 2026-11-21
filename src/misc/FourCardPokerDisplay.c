#include "protos.h"

void f_00590cb0(void) /* FourCardPokerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590cb0);
    /* 00590cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00590cb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590cb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00590cb9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590cbc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x590cc1u); f_005e9e20();
    /* 00590cc1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590cc4: mov dword ptr [eax], 0x6ce0e8 */ W32((u32)(r_eax), 0x6ce0e8u);
    /* 00590cca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00590cd1: jmp 0x590cdc */ goto L_00590cdc;
L_00590cd3:; BB(0x00590cd3);
    /* 00590cd3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590cd6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00590cd9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00590cdc:; BB(0x00590cdc);
    /* 00590cdc: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590ce0: jge 0x590d03 */ if ((fS==fO)) goto L_00590d03;
L_00590ce2:; BB(0x00590ce2);
    /* 00590ce2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590ce5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590ce8: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 00590cf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590cf3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590cf6: mov dword ptr [edx + ecx*4 + 0x80], 0 */ W32((u32)(r_edx+r_ecx*4+0x80u), 0x0u);
    /* 00590d01: jmp 0x590cd3 */ goto L_00590cd3;
L_00590d03:; BB(0x00590d03);
    /* 00590d03: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00590d0a: jmp 0x590d15 */ goto L_00590d15;
L_00590d0c:; BB(0x00590d0c);
    /* 00590d0c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00590d0f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590d12: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00590d15:; BB(0x00590d15);
    /* 00590d15: cmp dword ptr [ebp - 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590d19: jge 0x590d39 */ if ((fS==fO)) goto L_00590d39;
L_00590d1b:; BB(0x00590d1b);
    /* 00590d1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00590d1e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590d21: mov dword ptr [edx + ecx*4 + 0x18], 0 */ W32((u32)(r_edx+r_ecx*4+0x18u), 0x0u);
    /* 00590d29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00590d2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590d2f: mov dword ptr [ecx + eax*4 + 0x50], 0 */ W32((u32)(r_ecx+r_eax*4+0x50u), 0x0u);
    /* 00590d37: jmp 0x590d0c */ goto L_00590d0c;
L_00590d39:; BB(0x00590d39);
    /* 00590d39: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590d3c: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 00590d43: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590d46: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 00590d50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590d53: mov dword ptr [ecx + 0x98], 0 */ W32((u32)(r_ecx+0x98u), 0x0u);
    /* 00590d5d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590d60: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 00590d6a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590d6d: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 00590d74: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590d77: mov esp, ebp */ r_esp = r_ebp;
    /* 00590d79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590d7a: ret  */ FN_RET(0x00590cb0); r_esp += 4; return;
}

void f_00590d80(void) /* FourCardPokerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590d80);
    /* 00590d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00590d83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00590d85: push 0x6a7038 */ { u32 v = 0x6a7038u; r_esp -= 4; W32(r_esp, v); }
    /* 00590d8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00590d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590d91: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590d94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00590d99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590d9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590d9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00590d9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00590da5: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00590da8: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590dab: mov dword ptr [eax], 0x6ce0e8 */ W32((u32)(r_eax), 0x6ce0e8u);
    /* 00590db1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00590db8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00590dbf: jmp 0x590dca */ goto L_00590dca;
L_00590dc1:; BB(0x00590dc1);
    /* 00590dc1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00590dc4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00590dc7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00590dca:; BB(0x00590dca);
    /* 00590dca: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590dce: jge 0x590e3b */ if ((fS==fO)) goto L_00590e3b;
L_00590dd0:; BB(0x00590dd0);
    /* 00590dd0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00590dd3: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590dd6: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00590dda: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00590ddd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590de0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00590de3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590de7: je 0x590dfc */ if (fZ) goto L_00590dfc;
L_00590de9:; BB(0x00590de9);
    /* 00590de9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590deb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00590dee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00590df0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00590df3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00590df5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590df7u); call_ind(t); }
    /* 00590df7: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00590dfa: jmp 0x590e03 */ goto L_00590e03;
L_00590dfc:; BB(0x00590dfc);
    /* 00590dfc: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00590e03:; BB(0x00590e03);
    /* 00590e03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00590e06: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590e09: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00590e10: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00590e13: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00590e16: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00590e19: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590e1d: je 0x590e32 */ if (fZ) goto L_00590e32;
L_00590e1f:; BB(0x00590e1f);
    /* 00590e1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590e21: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590e24: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00590e26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590e29: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00590e2b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x590e2du); call_ind(t); }
    /* 00590e2d: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00590e30: jmp 0x590e39 */ goto L_00590e39;
L_00590e32:; BB(0x00590e32);
    /* 00590e32: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00590e39:; BB(0x00590e39);
    /* 00590e39: jmp 0x590dc1 */ goto L_00590dc1;
L_00590e3b:; BB(0x00590e3b);
    /* 00590e3b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00590e42: jmp 0x590e4d */ goto L_00590e4d;
L_00590e44:; BB(0x00590e44);
    /* 00590e44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00590e47: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590e4a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00590e4d:; BB(0x00590e4d);
    /* 00590e4d: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590e51: jge 0x590ebb */ if ((fS==fO)) goto L_00590ebb;
L_00590e53:; BB(0x00590e53);
    /* 00590e53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00590e56: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590e59: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00590e5d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00590e60: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00590e63: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00590e66: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590e6a: je 0x590e7f */ if (fZ) goto L_00590e7f;
L_00590e6c:; BB(0x00590e6c);
    /* 00590e6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590e6e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00590e71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00590e73: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00590e76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00590e78: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x590e7au); call_ind(t); }
    /* 00590e7a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00590e7d: jmp 0x590e86 */ goto L_00590e86;
L_00590e7f:; BB(0x00590e7f);
    /* 00590e7f: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00590e86:; BB(0x00590e86);
    /* 00590e86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00590e89: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590e8c: mov edx, dword ptr [ecx + eax*4 + 0x50] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x50u));
    /* 00590e90: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00590e93: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00590e96: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00590e99: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590e9d: je 0x590eb2 */ if (fZ) goto L_00590eb2;
L_00590e9f:; BB(0x00590e9f);
    /* 00590e9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590ea1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00590ea4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00590ea6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00590ea9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00590eab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590eadu); call_ind(t); }
    /* 00590ead: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00590eb0: jmp 0x590eb9 */ goto L_00590eb9;
L_00590eb2:; BB(0x00590eb2);
    /* 00590eb2: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00590eb9:; BB(0x00590eb9);
    /* 00590eb9: jmp 0x590e44 */ goto L_00590e44;
L_00590ebb:; BB(0x00590ebb);
    /* 00590ebb: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590ebe: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00590ec1: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00590ec4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00590ec7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00590eca: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590ece: je 0x590ee3 */ if (fZ) goto L_00590ee3;
L_00590ed0:; BB(0x00590ed0);
    /* 00590ed0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590ed2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00590ed5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00590ed7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00590eda: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00590edc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590edeu); call_ind(t); }
    /* 00590ede: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00590ee1: jmp 0x590eea */ goto L_00590eea;
L_00590ee3:; BB(0x00590ee3);
    /* 00590ee3: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00590eea:; BB(0x00590eea);
    /* 00590eea: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590eed: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 00590ef3: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00590ef6: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00590ef9: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00590efc: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590f00: je 0x590f15 */ if (fZ) goto L_00590f15;
L_00590f02:; BB(0x00590f02);
    /* 00590f02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590f04: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00590f07: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00590f09: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00590f0c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00590f0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590f10u); call_ind(t); }
    /* 00590f10: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00590f13: jmp 0x590f1c */ goto L_00590f1c;
L_00590f15:; BB(0x00590f15);
    /* 00590f15: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00590f1c:; BB(0x00590f1c);
    /* 00590f1c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590f1f: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 00590f25: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00590f28: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590f2b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00590f2e: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590f32: je 0x590f47 */ if (fZ) goto L_00590f47;
L_00590f34:; BB(0x00590f34);
    /* 00590f34: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590f36: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00590f39: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00590f3b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00590f3e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00590f40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590f42u); call_ind(t); }
    /* 00590f42: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00590f45: jmp 0x590f4e */ goto L_00590f4e;
L_00590f47:; BB(0x00590f47);
    /* 00590f47: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00590f4e:; BB(0x00590f4e);
    /* 00590f4e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590f51: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 00590f57: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00590f5a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00590f5d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00590f60: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590f64: je 0x590f79 */ if (fZ) goto L_00590f79;
L_00590f66:; BB(0x00590f66);
    /* 00590f66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590f68: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00590f6b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00590f6d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00590f70: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00590f72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590f74u); call_ind(t); }
    /* 00590f74: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00590f77: jmp 0x590f80 */ goto L_00590f80;
L_00590f79:; BB(0x00590f79);
    /* 00590f79: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00590f80:; BB(0x00590f80);
    /* 00590f80: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590f83: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00590f86: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00590f89: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00590f8c: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00590f8f: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590f93: je 0x590fab */ if (fZ) goto L_00590fab;
L_00590f95:; BB(0x00590f95);
    /* 00590f95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00590f97: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00590f9a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00590f9c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00590f9f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00590fa1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590fa3u); call_ind(t); }
    /* 00590fa3: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00590fa9: jmp 0x590fb5 */ goto L_00590fb5;
L_00590fab:; BB(0x00590fab);
    /* 00590fab: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00590fb5:; BB(0x00590fb5);
    /* 00590fb5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590fbc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00590fbf: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x590fc4u); f_005e9e40();
    /* 00590fc4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590fc7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00590fce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590fcf: mov esp, ebp */ r_esp = r_ebp;
    /* 00590fd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590fd2: ret  */ FN_RET(0x00590d80); r_esp += 4; return;
}

