#include "protos.h"

void f_00596d90(void) /* FourCardPokerRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00596d90);
    /* 00596d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00596d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00596d93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00596d95: push 0x6a73a9 */ { u32 v = 0x6a73a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00596d9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00596da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596da1: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00596da4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00596da9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00596dab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00596dae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00596daf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596db0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00596db3: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00596db9: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00596dbc: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00596dbf: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00596dc2: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00596dc5: cmp dword ptr [ebp - 0x48], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596dc9: je 0x596de3 */ if (fZ) goto L_00596de3;
L_00596dcb:; BB(0x00596dcb);
    /* 00596dcb: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596dcf: je 0x596df3 */ if (fZ) goto L_00596df3;
L_00596dd1:; BB(0x00596dd1);
    /* 00596dd1: cmp dword ptr [ebp - 0x48], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596dd8: je 0x597017 */ if (fZ) goto L_00597017;
L_00596dde:; BB(0x00596dde);
    /* 00596dde: jmp 0x597042 */ goto L_00597042;
L_00596de3:; BB(0x00596de3);
    /* 00596de3: mov ecx, dword ptr [0x7935a0] */ r_ecx = R32((u32)(0x7935a0u));
    /* 00596de9: call 0x595790 */ r_esp -= 4; W32(r_esp, 0x596deeu); f_00595790();
    /* 00596dee: jmp 0x59705d */ goto L_0059705d;
L_00596df3:; BB(0x00596df3);
    /* 00596df3: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596df9: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x596dfeu); f_00597d30();
    /* 00596dfe: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00596e01: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00596e07: add edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00596e0a: movzx eax, byte ptr [edx + 0x112] */ r_eax = (u32)R8((u32)(r_edx+0x112u));
    /* 00596e11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596e13: jne 0x596ff8 */ if (!fZ) goto L_00596ff8;
L_00596e19:; BB(0x00596e19);
    /* 00596e19: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00596e1c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596e1d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x596e22u); f_005dcb00();
    /* 00596e22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596e25: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00596e28: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00596e2b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x596e30u); f_0063aac0();
    /* 00596e30: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00596e32: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00596e35: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596e39: je 0x596e57 */ if (fZ) goto L_00596e57;
L_00596e3b:; BB(0x00596e3b);
    /* 00596e3b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00596e3e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x596e43u); f_0063aac0();
    /* 00596e43: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00596e45: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00596e48: cmp dword ptr [ebp - 0x3c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596e4c: je 0x596e57 */ if (fZ) goto L_00596e57;
L_00596e4e:; BB(0x00596e4e);
    /* 00596e4e: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00596e55: jmp 0x596e5e */ goto L_00596e5e;
L_00596e57:; BB(0x00596e57);
    /* 00596e57: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
L_00596e5e:; BB(0x00596e5e);
    /* 00596e5e: movzx ecx, byte ptr [ebp - 0x4c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffb4u));
    /* 00596e62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596e64: je 0x596ef5 */ if (fZ) goto L_00596ef5;
L_00596e6a:; BB(0x00596e6a);
    /* 00596e6a: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00596e70: cmp dword ptr [edx + 0x80], 0 */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596e77: jne 0x596eeb */ if (!fZ) goto L_00596eeb;
L_00596e79:; BB(0x00596e79);
    /* 00596e79: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00596e7e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x596e83u); f_00686d82();
    /* 00596e83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596e86: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00596e89: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00596e90: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596e94: je 0x596ea3 */ if (fZ) goto L_00596ea3;
L_00596e96:; BB(0x00596e96);
    /* 00596e96: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00596e99: call 0x593530 */ r_esp -= 4; W32(r_esp, 0x596e9eu); f_00593530();
    /* 00596e9e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00596ea1: jmp 0x596eaa */ goto L_00596eaa;
L_00596ea3:; BB(0x00596ea3);
    /* 00596ea3: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00596eaa:; BB(0x00596eaa);
    /* 00596eaa: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00596ead: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00596eb0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00596eb7: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00596ebd: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00596ec0: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 00596ec6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00596ec8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00596eca: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00596ecf: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00596ed5: call 0x593910 */ r_esp -= 4; W32(r_esp, 0x596edau); f_00593910();
    /* 00596eda: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00596ee0: mov ecx, dword ptr [ecx + 0x80] */ r_ecx = R32((u32)(r_ecx+0x80u));
    /* 00596ee6: call 0x593f00 */ r_esp -= 4; W32(r_esp, 0x596eebu); f_00593f00();
L_00596eeb:; BB(0x00596eeb);
    /* 00596eeb: jmp 0x59705d */ goto L_0059705d;
L_00596ef5:; BB(0x00596ef5);
    /* 00596ef5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00596efc: jmp 0x596f07 */ goto L_00596f07;
L_00596efe:; BB(0x00596efe);
    /* 00596efe: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00596f01: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00596f04: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00596f07:; BB(0x00596f07);
    /* 00596f07: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00596f0b: jge 0x596f19 */ if ((fS==fO)) goto L_00596f19;
L_00596f0d:; BB(0x00596f0d);
    /* 00596f0d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00596f10: mov word ptr [ebp + eax*2 - 0x1c], 0 */ W16((u32)(r_ebp+r_eax*2+0xffffffe4u), 0x0u);
    /* 00596f17: jmp 0x596efe */ goto L_00596efe;
L_00596f19:; BB(0x00596f19);
    /* 00596f19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00596f1b: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596f1f: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00596f22: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00596f25: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00596f28: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00596f2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596f2c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00596f2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596f30: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00596f33: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00596f36: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 00596f3c: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 00596f43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00596f44: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00596f46: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x596f4bu); f_00462a40();
    /* 00596f4b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596f4e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00596f50: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00596f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00596f54: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00596f57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596f58: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00596f5b: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00596f5e: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596f64: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00596f6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00596f6c: call 0x4629c0 */ r_esp -= 4; W32(r_esp, 0x596f71u); f_004629c0();
    /* 00596f71: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00596f74: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00596f77: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00596f7b: jne 0x596f94 */ if (!fZ) goto L_00596f94;
L_00596f7d:; BB(0x00596f7d);
    /* 00596f7d: push 0x19c */ { u32 v = 0x19cu; r_esp -= 4; W32(r_esp, v); }
    /* 00596f82: push 0x6ce770 */ { u32 v = 0x6ce770u; r_esp -= 4; W32(r_esp, v); }
    /* 00596f87: push 0x6ce880 */ { u32 v = 0x6ce880u; r_esp -= 4; W32(r_esp, v); }
    /* 00596f8c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x596f91u); f_005e9f20();
    /* 00596f91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00596f94:; BB(0x00596f94);
    /* 00596f94: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00596f97: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00596f9a: jmp 0x596fa5 */ goto L_00596fa5;
L_00596f9c:; BB(0x00596f9c);
    /* 00596f9c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00596f9f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00596fa2: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_00596fa5:; BB(0x00596fa5);
    /* 00596fa5: cmp dword ptr [ebp - 0x2c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00596fa9: jge 0x596fe2 */ if ((fS==fO)) goto L_00596fe2;
L_00596fab:; BB(0x00596fab);
    /* 00596fab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00596fae: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00596fb1: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596fb7: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00596fbe: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00596fc1: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00596fc4: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596fca: lea eax, [ecx + eax + 0xc8] */ r_eax = (u32)(r_ecx+r_eax+0xc8u);
    /* 00596fd1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00596fd4: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00596fd7: mov dx, word ptr [edx + esi*2 + 2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx+r_esi*2+0x2u))) & 0xffffu);
    /* 00596fdc: mov word ptr [eax + ecx*2], dx */ W16((u32)(r_eax+r_ecx*2), (u16)r_edx);
    /* 00596fe0: jmp 0x596f9c */ goto L_00596f9c;
L_00596fe2:; BB(0x00596fe2);
    /* 00596fe2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00596fe5: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00596fe8: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00596fee: mov word ptr [ecx + eax + 0xd2], 0 */ W16((u32)(r_ecx+r_eax+0xd2u), 0x0u);
L_00596ff8:; BB(0x00596ff8);
    /* 00596ff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00596ffa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00596ffc: mov edx, dword ptr [0x7935a4] */ r_edx = R32((u32)(0x7935a4u));
    /* 00597002: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00597005: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0059700b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0059700e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00597010: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00597013: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x597015u); call_ind(t); }
    /* 00597015: jmp 0x59705d */ goto L_0059705d;
L_00597017:; BB(0x00597017);
    /* 00597017: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059701d: call 0x599210 */ r_esp -= 4; W32(r_esp, 0x597022u); f_00599210();
    /* 00597022: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597024: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00597027: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00597029: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059702c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059702f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x597031u); call_ind(t); }
    /* 00597031: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00597033: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00597036: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00597038: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0059703b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059703e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x597040u); call_ind(t); }
    /* 00597040: jmp 0x59705d */ goto L_0059705d;
L_00597042:; BB(0x00597042);
    /* 00597042: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00597044: jne 0x59705d */ if (!fZ) goto L_0059705d;
L_00597046:; BB(0x00597046);
    /* 00597046: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 0059704b: push 0x6ce770 */ { u32 v = 0x6ce770u; r_esp -= 4; W32(r_esp, v); }
    /* 00597050: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00597055: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x59705au); f_005e9f20();
    /* 0059705a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059705d:; BB(0x0059705d);
    /* 0059705d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00597060: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00597067: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00597068: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597069: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059706c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059706e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x597073u); f_00686d72();
    /* 00597073: mov esp, ebp */ r_esp = r_ebp;
    /* 00597075: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597076: ret  */ FN_RET(0x00596d90); r_esp += 4; return;
}

