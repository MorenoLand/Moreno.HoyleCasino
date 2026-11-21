#include "protos.h"

void f_00425d20(void) /* sub_425D20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425d20);
    /* 00425d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00425d23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425d24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425d27: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425d2b: jne 0x425d43 */ if (!fZ) goto L_00425d43;
L_00425d2d:; BB(0x00425d2d);
    /* 00425d2d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425d2f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00425d35: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x425d3au); f_006375b0();
    /* 00425d3a: mov ecx, eax */ r_ecx = r_eax;
    /* 00425d3c: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x425d41u); f_0063aae0();
    /* 00425d41: jmp 0x425d58 */ goto L_00425d58;
L_00425d43:; BB(0x00425d43);
    /* 00425d43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425d45: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00425d4a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00425d4d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00425d50: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00425d53: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x425d58u); f_0063aae0();
L_00425d58:; BB(0x00425d58);
    /* 00425d58: mov esp, ebp */ r_esp = r_ebp;
    /* 00425d5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425d5b: ret 4 */ FN_RET(0x00425d20); r_esp += 8; return;
}

void f_00425d60(void) /* sub_425D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425d60);
    /* 00425d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00425d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425d67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425d69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425d6c: call 0x425d20 */ r_esp -= 4; W32(r_esp, 0x425d71u); f_00425d20();
    /* 00425d71: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00425d73: mov esp, ebp */ r_esp = r_ebp;
    /* 00425d75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425d76: ret  */ FN_RET(0x00425d60); r_esp += 4; return;
}

void f_00425d80(void) /* sub_425D80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425d80);
    /* 00425d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00425d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425d87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425d89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425d8c: call 0x425d20 */ r_esp -= 4; W32(r_esp, 0x425d91u); f_00425d20();
    /* 00425d91: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00425d94: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00425d96: mov esp, ebp */ r_esp = r_ebp;
    /* 00425d98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425d99: ret 4 */ FN_RET(0x00425d80); r_esp += 8; return;
}

void f_00425da0(void) /* sub_425DA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425da0);
    /* 00425da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00425da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425da7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425da9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425dac: call 0x425d20 */ r_esp -= 4; W32(r_esp, 0x425db1u); f_00425d20();
    /* 00425db1: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 00425db4: mov esp, ebp */ r_esp = r_ebp;
    /* 00425db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425db7: ret  */ FN_RET(0x00425da0); r_esp += 4; return;
}

void f_00425dc0(void) /* sub_425DC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425dc0);
    /* 00425dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00425dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00425dc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425dc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00425dcc: call 0x425d20 */ r_esp -= 4; W32(r_esp, 0x425dd1u); f_00425d20();
    /* 00425dd1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00425dd4: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 00425dd7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00425ddd: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x425de2u); f_006375b0();
    /* 00425de2: mov ecx, eax */ r_ecx = r_eax;
    /* 00425de4: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x425de9u); f_0063b0a0();
    /* 00425de9: mov esp, ebp */ r_esp = r_ebp;
    /* 00425deb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425dec: ret 4 */ FN_RET(0x00425dc0); r_esp += 8; return;
}

void f_00425df0(void) /* sub_425DF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425df0);
    /* 00425df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00425df3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425df5: push 0x69e3d9 */ { u32 v = 0x69e3d9u; r_esp -= 4; W32(r_esp, v); }
    /* 00425dfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00425e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425e01: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425e04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00425e09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00425e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425e0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00425e0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00425e15: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00425e18: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00425e1b: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425e1f: jne 0x425e68 */ if (!fZ) goto L_00425e68;
L_00425e21:; BB(0x00425e21);
    /* 00425e21: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 00425e26: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x425e2bu); f_00686d82();
    /* 00425e2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425e2e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00425e31: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00425e38: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425e3c: je 0x425e4b */ if (fZ) goto L_00425e4b;
L_00425e3e:; BB(0x00425e3e);
    /* 00425e3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425e41: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x425e46u); f_00642e10();
    /* 00425e46: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00425e49: jmp 0x425e52 */ goto L_00425e52;
L_00425e4b:; BB(0x00425e4b);
    /* 00425e4b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00425e52:; BB(0x00425e52);
    /* 00425e52: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00425e55: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00425e58: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00425e5f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00425e62: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00425e65: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_00425e68:; BB(0x00425e68);
    /* 00425e68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425e6a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00425e6d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00425e70: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x425e75u); f_00642e70();
    /* 00425e75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425e77: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00425e79: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00425e7c: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00425e7f: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x425e84u); f_006437d0();
    /* 00425e84: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00425e8b: jmp 0x425e96 */ goto L_00425e96;
L_00425e8d:; BB(0x00425e8d);
    /* 00425e8d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425e90: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00425e93: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00425e96:; BB(0x00425e96);
    /* 00425e96: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425e9a: jge 0x425f29 */ if ((fS==fO)) goto L_00425f29;
L_00425ea0:; BB(0x00425ea0);
    /* 00425ea0: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425ea5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x425eaau); f_00686d82();
    /* 00425eaa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425ead: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00425eb0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00425eb7: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00425ebb: je 0x425eca */ if (fZ) goto L_00425eca;
L_00425ebd:; BB(0x00425ebd);
    /* 00425ebd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00425ec0: call 0x427890 */ r_esp -= 4; W32(r_esp, 0x425ec5u); f_00427890();
    /* 00425ec5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00425ec8: jmp 0x425ed1 */ goto L_00425ed1;
L_00425eca:; BB(0x00425eca);
    /* 00425eca: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00425ed1:; BB(0x00425ed1);
    /* 00425ed1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00425ed4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00425ed7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00425ede: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425ee1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00425ee4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00425ee7: mov dword ptr [eax + edx*4 + 8], ecx */ W32((u32)(r_eax+r_edx*4+0x8u), r_ecx);
    /* 00425eeb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425eee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425eef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425ef2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00425ef5: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00425ef9: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x425efeu); f_005f53e0();
    /* 00425efe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425f00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425f02: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x425f07u); f_0064c8a0();
    /* 00425f07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425f0a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00425f0d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00425f10: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425f13: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00425f16: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00425f19: mov dword ptr [eax + edx*8 + 0x28], ecx */ W32((u32)(r_eax+r_edx*8+0x28u), r_ecx);
    /* 00425f1d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00425f20: mov dword ptr [eax + edx*8 + 0x2c], ecx */ W32((u32)(r_eax+r_edx*8+0x2cu), r_ecx);
    /* 00425f24: jmp 0x425e8d */ goto L_00425e8d;
L_00425f29:; BB(0x00425f29);
    /* 00425f29: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00425f30: jmp 0x425f3b */ goto L_00425f3b;
L_00425f32:; BB(0x00425f32);
    /* 00425f32: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425f35: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00425f38: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00425f3b:; BB(0x00425f3b);
    /* 00425f3b: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425f3f: jge 0x425f4d */ if ((fS==fO)) goto L_00425f4d;
L_00425f41:; BB(0x00425f41);
    /* 00425f41: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00425f44: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00425f47: mov byte ptr [eax + 0x68], 0 */ W8((u32)(r_eax+0x68u), 0x0u);
    /* 00425f4b: jmp 0x425f32 */ goto L_00425f32;
L_00425f4d:; BB(0x00425f4d);
    /* 00425f4d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00425f54: jmp 0x425f5f */ goto L_00425f5f;
L_00425f56:; BB(0x00425f56);
    /* 00425f56: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425f59: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00425f5c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00425f5f:; BB(0x00425f5f);
    /* 00425f5f: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00425f63: jge 0x425f94 */ if ((fS==fO)) goto L_00425f94;
L_00425f65:; BB(0x00425f65);
    /* 00425f65: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425f67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425f69: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x425f6eu); f_0064c8a0();
    /* 00425f6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425f71: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00425f74: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00425f77: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00425f7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00425f7b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00425f7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00425f7f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00425f82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00425f83: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x425f88u); f_005dcb00();
    /* 00425f88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00425f8b: mov ecx, eax */ r_ecx = r_eax;
    /* 00425f8d: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x425f92u); f_005d6050();
    /* 00425f92: jmp 0x425f56 */ goto L_00425f56;
L_00425f94:; BB(0x00425f94);
    /* 00425f94: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00425f97: call 0x425fb0 */ r_esp -= 4; W32(r_esp, 0x425f9cu); f_00425fb0();
    /* 00425f9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00425f9f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00425fa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00425fa7: mov esp, ebp */ r_esp = r_ebp;
    /* 00425fa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00425faa: ret  */ FN_RET(0x00425df0); r_esp += 4; return;
}

void f_00425fb0(void) /* sub_425FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00425fb0);
    /* 00425fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00425fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00425fb3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00425fb6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00425fb9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425fbc: mov byte ptr [eax + 0xae], 0 */ W8((u32)(r_eax+0xaeu), 0x0u);
    /* 00425fc3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425fc6: mov byte ptr [ecx + 0xa4], 0 */ W8((u32)(r_ecx+0xa4u), 0x0u);
    /* 00425fcd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425fd0: call 0x426200 */ r_esp -= 4; W32(r_esp, 0x425fd5u); f_00426200();
    /* 00425fd5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425fd8: call 0x426c40 */ r_esp -= 4; W32(r_esp, 0x425fddu); f_00426c40();
    /* 00425fdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00425fdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00425fe1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425fe4: call 0x426260 */ r_esp -= 4; W32(r_esp, 0x425fe9u); f_00426260();
    /* 00425fe9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425fec: mov dword ptr [edx + 0xe0], 0xffffffff */ W32((u32)(r_edx+0xe0u), 0xffffffffu);
    /* 00425ff6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00425ff9: mov dword ptr [eax + 0xe4], 0xffffffff */ W32((u32)(r_eax+0xe4u), 0xffffffffu);
    /* 00426003: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042600a: jmp 0x426015 */ goto L_00426015;
L_0042600c:; BB(0x0042600c);
    /* 0042600c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042600f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426012: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00426015:; BB(0x00426015);
    /* 00426015: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426019: jge 0x42602c */ if ((fS==fO)) goto L_0042602c;
L_0042601b:; BB(0x0042601b);
    /* 0042601b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042601e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426021: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00426025: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x42602au); f_005cb9b0();
    /* 0042602a: jmp 0x42600c */ goto L_0042600c;
L_0042602c:; BB(0x0042602c);
    /* 0042602c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426033: jmp 0x42603e */ goto L_0042603e;
L_00426035:; BB(0x00426035);
    /* 00426035: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426038: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0042603b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0042603e:; BB(0x0042603e);
    /* 0042603e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426042: jge 0x42607f */ if ((fS==fO)) goto L_0042607f;
L_00426044:; BB(0x00426044);
    /* 00426044: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426047: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042604a: mov byte ptr [edx + 0xa9], 0 */ W8((u32)(r_edx+0xa9u), 0x0u);
    /* 00426051: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00426058: jmp 0x426063 */ goto L_00426063;
L_0042605a:; BB(0x0042605a);
    /* 0042605a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042605d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426060: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00426063:; BB(0x00426063);
    /* 00426063: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426067: jge 0x42607d */ if ((fS==fO)) goto L_0042607d;
L_00426069:; BB(0x00426069);
    /* 00426069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042606b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042606e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042606f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00426072: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426073: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426076: call 0x4262b0 */ r_esp -= 4; W32(r_esp, 0x42607bu); f_004262b0();
    /* 0042607b: jmp 0x42605a */ goto L_0042605a;
L_0042607d:; BB(0x0042607d);
    /* 0042607d: jmp 0x426035 */ goto L_00426035;
L_0042607f:; BB(0x0042607f);
    /* 0042607f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426086: jmp 0x426091 */ goto L_00426091;
L_00426088:; BB(0x00426088);
    /* 00426088: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042608b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042608e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00426091:; BB(0x00426091);
    /* 00426091: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426095: jge 0x426141 */ if ((fS==fO)) goto L_00426141;
L_0042609b:; BB(0x0042609b);
    /* 0042609b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042609e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042609f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4260a4u); f_005dcb00();
    /* 004260a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004260a7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004260aa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004260ad: mov byte ptr [edx + 0x4a0], 0 */ W8((u32)(r_edx+0x4a0u), 0x0u);
    /* 004260b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004260b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004260b8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4260bdu); f_005dcb00();
    /* 004260bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004260c0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004260c3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004260c6: mov byte ptr [ecx + 0x4a1], 0 */ W8((u32)(r_ecx+0x4a1u), 0x0u);
    /* 004260cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004260d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004260d1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4260d6u); f_005dcb00();
    /* 004260d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004260d9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004260dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004260df: mov byte ptr [eax + 0x4a2], 0 */ W8((u32)(r_eax+0x4a2u), 0x0u);
    /* 004260e6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004260e9: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004260ec: mov byte ptr [ecx + 0xd4], 0 */ W8((u32)(r_ecx+0xd4u), 0x0u);
    /* 004260f3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004260f6: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004260f9: mov byte ptr [edx + 0xd8], 0 */ W8((u32)(r_edx+0xd8u), 0x0u);
    /* 00426100: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426103: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426106: mov byte ptr [eax + 0xd0], 0 */ W8((u32)(r_eax+0xd0u), 0x0u);
    /* 0042610d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426110: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426113: mov byte ptr [ecx + 0xdc], 0 */ W8((u32)(r_ecx+0xdcu), 0x0u);
    /* 0042611a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042611d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426120: mov dword ptr [eax + edx*4 + 0xb0], 0xffffffff */ W32((u32)(r_eax+r_edx*4+0xb0u), 0xffffffffu);
    /* 0042612b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042612e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426131: mov dword ptr [edx + ecx*4 + 0xc0], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0xc0u), 0xffffffffu);
    /* 0042613c: jmp 0x426088 */ goto L_00426088;
L_00426141:; BB(0x00426141);
    /* 00426141: mov esp, ebp */ r_esp = r_ebp;
    /* 00426143: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426144: ret  */ FN_RET(0x00425fb0); r_esp += 4; return;
}

