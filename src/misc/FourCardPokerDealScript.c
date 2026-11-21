#include "protos.h"

void f_00592c60(void) /* FourCardPokerDealScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592c60);
    /* 00592c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00592c63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00592c65: push 0x6a7197 */ { u32 v = 0x6a7197u; r_esp -= 4; W32(r_esp, v); }
    /* 00592c6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00592c70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592c71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592c72: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00592c77: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00592c79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592c7a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00592c7d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00592c83: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00592c86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592c88: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00592c8b: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x592c90u); f_005fc0d0();
    /* 00592c90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00592c97: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00592c9a: mov dword ptr [eax], 0x6ce364 */ W32((u32)(r_eax), 0x6ce364u);
    /* 00592ca0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00592ca2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00592ca8: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x592cadu); f_00637810();
    /* 00592cad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00592caf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00592cb2: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00592cb5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00592cb8: mov byte ptr [edx + 0x24], cl */ W8((u32)(r_edx+0x24u), (u8)r_ecx);
    /* 00592cbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00592cc2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00592cc5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00592cc8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00592ccf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00592cd0: mov esp, ebp */ r_esp = r_ebp;
    /* 00592cd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00592cd3: ret  */ FN_RET(0x00592c60); r_esp += 4; return;
}

void f_00592d00(void) /* FourCardPokerDealScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00592d00);
    /* 00592d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00592d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00592d03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00592d05: push 0x6a71c8 */ { u32 v = 0x6a71c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00592d0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00592d10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592d11: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00592d14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00592d19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00592d1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592d1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00592d1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00592d25: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00592d28: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592d2b: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x592d30u); f_005fc360();
    /* 00592d30: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00592d33: cmp dword ptr [ebp - 0x28], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00592d37: ja 0x59305a */ if ((!fC&&!fZ)) goto L_0059305a;
L_00592d3d:; BB(0x00592d3d);
    /* 00592d3d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00592d40: jmp dword ptr [eax*4 + 0x59306c] */ { u32 t = R32((u32)(r_eax*4+0x59306cu)); switch (t) { case 0x592d47u: goto L_00592d47; case 0x592dcbu: goto L_00592dcb; case 0x592eaeu: goto L_00592eae; case 0x592fc3u: goto L_00592fc3; case 0x592fe6u: goto L_00592fe6; default: UNSUP(0x00592d40, "jump table entry is not a known target"); } }
L_00592d47:; BB(0x00592d47);
    /* 00592d47: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00592d4d: call 0x5980c0 */ r_esp -= 4; W32(r_esp, 0x592d52u); f_005980c0();
    /* 00592d52: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592d55: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00592d58: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592d5b: cmp dword ptr [edx + 0x20], -1 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592d5f: jne 0x592d77 */ if (!fZ) goto L_00592d77;
L_00592d61:; BB(0x00592d61);
    /* 00592d61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592d63: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00592d65: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592d68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00592d6a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592d6d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00592d70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592d72u); call_ind(t); }
    /* 00592d72: jmp 0x59305a */ goto L_0059305a;
L_00592d77:; BB(0x00592d77);
    /* 00592d77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00592d79: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592d7c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00592d7e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592d81: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00592d84: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592d86u); call_ind(t); }
    /* 00592d86: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592d89: call 0x593080 */ r_esp -= 4; W32(r_esp, 0x592d8eu); f_00593080();
    /* 00592d8e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00592d91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592d93: je 0x592db7 */ if (fZ) goto L_00592db7;
L_00592d95:; BB(0x00592d95);
    /* 00592d95: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00592d9b: call 0x598370 */ r_esp -= 4; W32(r_esp, 0x592da0u); f_00598370();
    /* 00592da0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592da2: jne 0x592db7 */ if (!fZ) goto L_00592db7;
L_00592da4:; BB(0x00592da4);
    /* 00592da4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592da7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592da8: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592dad: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00592db0: call 0x592aa0 */ r_esp -= 4; W32(r_esp, 0x592db5u); f_00592aa0();
    /* 00592db5: jmp 0x592dc6 */ goto L_00592dc6;
L_00592db7:; BB(0x00592db7);
    /* 00592db7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592db9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592dbc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00592dbe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592dc1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00592dc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592dc6u); call_ind(t); }
L_00592dc6:; BB(0x00592dc6);
    /* 00592dc6: jmp 0x59305a */ goto L_0059305a;
L_00592dcb:; BB(0x00592dcb);
    /* 00592dcb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00592dcd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592dd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00592dd2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592dd5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00592dd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592ddau); call_ind(t); }
    /* 00592dda: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00592de0: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x592de5u); f_00637630();
    /* 00592de5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00592de8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592dea: je 0x592e9a */ if (fZ) goto L_00592e9a;
L_00592df0:; BB(0x00592df0);
    /* 00592df0: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 00592df6: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00592dfc: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592e02: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00592e08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00592e0a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00592e0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592e0fu); call_ind(t); }
    /* 00592e0f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e11: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x592e16u); f_00686d82();
    /* 00592e16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592e19: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00592e1c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00592e23: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592e27: je 0x592e3a */ if (fZ) goto L_00592e3a;
L_00592e29:; BB(0x00592e29);
    /* 00592e29: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592e2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592e2d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00592e30: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x592e35u); f_006010a0();
    /* 00592e35: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00592e38: jmp 0x592e41 */ goto L_00592e41;
L_00592e3a:; BB(0x00592e3a);
    /* 00592e3a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00592e41:; BB(0x00592e41);
    /* 00592e41: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00592e44: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00592e47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00592e4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00592e51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592e52: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592e58: mov ecx, dword ptr [ecx + 0x9c] */ r_ecx = R32((u32)(r_ecx+0x9cu));
    /* 00592e5e: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x592e63u); f_005f5d50();
    /* 00592e63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592e66: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00592e6c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00592e6f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592e70: fld1  */ FPUSH(1.0);
    /* 00592e72: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00592e75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e77: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e7d: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e82: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00592e88: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00592e8a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00592e90: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00592e96: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x592e98u); call_ind(t); }
    /* 00592e98: jmp 0x592ea9 */ goto L_00592ea9;
L_00592e9a:; BB(0x00592e9a);
    /* 00592e9a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00592e9c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592e9f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00592ea1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592ea4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00592ea7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592ea9u); call_ind(t); }
L_00592ea9:; BB(0x00592ea9);
    /* 00592ea9: jmp 0x59305a */ goto L_0059305a;
L_00592eae:; BB(0x00592eae);
    /* 00592eae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592eb0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592eb3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00592eb5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592eb8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00592ebb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592ebdu); call_ind(t); }
    /* 00592ebd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592ec0: call 0x593080 */ r_esp -= 4; W32(r_esp, 0x592ec5u); f_00593080();
    /* 00592ec5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00592ec8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592eca: je 0x592f23 */ if (fZ) goto L_00592f23;
L_00592ecc:; BB(0x00592ecc);
    /* 00592ecc: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00592ece: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x592ed3u); f_00686d82();
    /* 00592ed3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00592ed6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00592ed9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00592ee0: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592ee4: je 0x592efe */ if (fZ) goto L_00592efe;
L_00592ee6:; BB(0x00592ee6);
    /* 00592ee6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592ee9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00592eea: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592eed: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00592ef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592ef1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00592ef4: call 0x5930e0 */ r_esp -= 4; W32(r_esp, 0x592ef9u); f_005930e0();
    /* 00592ef9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00592efc: jmp 0x592f05 */ goto L_00592f05;
L_00592efe:; BB(0x00592efe);
    /* 00592efe: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00592f05:; BB(0x00592f05);
    /* 00592f05: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00592f08: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00592f0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00592f12: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00592f15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592f16: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592f19: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x592f1eu); f_005fc420();
    /* 00592f1e: jmp 0x592fbe */ goto L_00592fbe;
L_00592f23:; BB(0x00592f23);
    /* 00592f23: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592f29: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 00592f2f: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592f34: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00592f3a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00592f3c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00592f3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592f41u); call_ind(t); }
    /* 00592f41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00592f43: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592f49: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 00592f4f: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00592f54: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 00592f5a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00592f5c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00592f62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592f64u); call_ind(t); }
    /* 00592f64: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592f67: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00592f69: cmp dword ptr [ecx + 0x20], 4 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00592f6d: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00592f70: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00592f73: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00592f76:; BB(0x00592f76);
    /* 00592f76: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00592f79: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 00592f7c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00592f7f: js 0x592fa4 */ if (fS) goto L_00592fa4;
L_00592f81:; BB(0x00592f81);
    /* 00592f81: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00592f87: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00592f8a: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x592f8fu); f_006436c0();
    /* 00592f8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592f90: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592f93: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00592f96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00592f97: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 00592f9d: call 0x597c00 */ r_esp -= 4; W32(r_esp, 0x592fa2u); f_00597c00();
    /* 00592fa2: jmp 0x592f76 */ goto L_00592f76;
L_00592fa4:; BB(0x00592fa4);
    /* 00592fa4: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592faa: call 0x591a70 */ r_esp -= 4; W32(r_esp, 0x592fafu); f_00591a70();
    /* 00592faf: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00592fb1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592fb4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00592fb6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592fb9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00592fbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592fbeu); call_ind(t); }
L_00592fbe:; BB(0x00592fbe);
    /* 00592fbe: jmp 0x59305a */ goto L_0059305a;
L_00592fc3:; BB(0x00592fc3);
    /* 00592fc3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00592fc5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592fc8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00592fca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592fcd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00592fd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x592fd2u); call_ind(t); }
    /* 00592fd2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00592fd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00592fd6: mov edx, dword ptr [0x79359c] */ r_edx = R32((u32)(0x79359cu));
    /* 00592fdc: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 00592fdf: call 0x592920 */ r_esp -= 4; W32(r_esp, 0x592fe4u); f_00592920();
    /* 00592fe4: jmp 0x59305a */ goto L_0059305a;
L_00592fe6:; BB(0x00592fe6);
    /* 00592fe6: mov eax, dword ptr [0x7935a8] */ r_eax = R32((u32)(0x7935a8u));
    /* 00592feb: mov byte ptr [eax + 0x116], 0 */ W8((u32)(r_eax+0x116u), 0x0u);
    /* 00592ff2: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00592ff8: mov edx, dword ptr [ecx + 0x94] */ r_edx = R32((u32)(r_ecx+0x94u));
    /* 00592ffe: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00593003: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 00593009: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059300b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0059300e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x593010u); call_ind(t); }
    /* 00593010: mov ecx, dword ptr [0x79359c] */ r_ecx = R32((u32)(0x79359cu));
    /* 00593016: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0059301c: mov eax, dword ptr [0x79359c] */ r_eax = R32((u32)(0x79359cu));
    /* 00593021: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 00593027: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00593029: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0059302c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59302eu); call_ind(t); }
    /* 0059302e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00593030: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00593032: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00593038: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0059303b: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00593040: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00593043: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00593045: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00593048: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59304au); call_ind(t); }
    /* 0059304a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059304c: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00593052: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00593055: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59305au); f_005fc420();
L_0059305a:; BB(0x0059305a);
    /* 0059305a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059305d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00593064: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00593065: mov esp, ebp */ r_esp = r_ebp;
    /* 00593067: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00593068: ret  */ FN_RET(0x00592d00); r_esp += 4; return;
}

