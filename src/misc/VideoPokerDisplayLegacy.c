#include "protos.h"

void f_00552c60(void) /* VideoPokerDisplayLegacy::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00552c60);
    /* 00552c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00552c63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552c66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00552c69: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552c6c: call 0x552720 */ r_esp -= 4; W32(r_esp, 0x552c71u); f_00552720();
    /* 00552c71: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552c74: mov dword ptr [eax], 0x6c84f8 */ W32((u32)(r_eax), 0x6c84f8u);
    /* 00552c7a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00552c81: jmp 0x552c8c */ goto L_00552c8c;
L_00552c83:; BB(0x00552c83);
    /* 00552c83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552c86: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00552c89: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00552c8c:; BB(0x00552c8c);
    /* 00552c8c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552c90: jge 0x552ca5 */ if ((fS==fO)) goto L_00552ca5;
L_00552c92:; BB(0x00552c92);
    /* 00552c92: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00552c95: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552c98: mov dword ptr [eax + edx*4 + 0x9c], 0 */ W32((u32)(r_eax+r_edx*4+0x9cu), 0x0u);
    /* 00552ca3: jmp 0x552c83 */ goto L_00552c83;
L_00552ca5:; BB(0x00552ca5);
    /* 00552ca5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552ca8: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00552cb2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552cb5: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
    /* 00552cbf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552cc2: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 00552ccc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00552ccf: mov esp, ebp */ r_esp = r_ebp;
    /* 00552cd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552cd2: ret  */ FN_RET(0x00552c60); r_esp += 4; return;
}

void f_00552ce0(void) /* VideoPokerDisplayLegacy::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00552ce0);
    /* 00552ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00552ce3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00552ce5: push 0x6a53e2 */ { u32 v = 0x6a53e2u; r_esp -= 4; W32(r_esp, v); }
    /* 00552cea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00552cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552cf1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552cf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00552cf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00552cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552cfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00552cff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00552d05: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00552d08: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00552d0b: mov dword ptr [eax], 0x6c84f8 */ W32((u32)(r_eax), 0x6c84f8u);
    /* 00552d11: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00552d18: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00552d1f: jmp 0x552d2a */ goto L_00552d2a;
L_00552d21:; BB(0x00552d21);
    /* 00552d21: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00552d24: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00552d27: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00552d2a:; BB(0x00552d2a);
    /* 00552d2a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552d2e: jge 0x552d68 */ if ((fS==fO)) goto L_00552d68;
L_00552d30:; BB(0x00552d30);
    /* 00552d30: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00552d33: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00552d36: mov ecx, dword ptr [eax + edx*4 + 0x9c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x9cu));
    /* 00552d3d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00552d40: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00552d43: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00552d46: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552d4a: je 0x552d5f */ if (fZ) goto L_00552d5f;
L_00552d4c:; BB(0x00552d4c);
    /* 00552d4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552d4e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00552d51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00552d53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00552d56: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552d58: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552d5au); call_ind(t); }
    /* 00552d5a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00552d5d: jmp 0x552d66 */ goto L_00552d66;
L_00552d5f:; BB(0x00552d5f);
    /* 00552d5f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00552d66:; BB(0x00552d66);
    /* 00552d66: jmp 0x552d21 */ goto L_00552d21;
L_00552d68:; BB(0x00552d68);
    /* 00552d68: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00552d6b: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 00552d71: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00552d74: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00552d77: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00552d7a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552d7e: je 0x552d93 */ if (fZ) goto L_00552d93;
L_00552d80:; BB(0x00552d80);
    /* 00552d80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552d82: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00552d85: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00552d87: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00552d8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552d8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552d8eu); call_ind(t); }
    /* 00552d8e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00552d91: jmp 0x552d9a */ goto L_00552d9a;
L_00552d93:; BB(0x00552d93);
    /* 00552d93: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00552d9a:; BB(0x00552d9a);
    /* 00552d9a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00552d9d: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 00552da3: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00552da6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00552da9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00552dac: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552db0: je 0x552dc5 */ if (fZ) goto L_00552dc5;
L_00552db2:; BB(0x00552db2);
    /* 00552db2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552db4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00552db7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00552db9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00552dbc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552dbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552dc0u); call_ind(t); }
    /* 00552dc0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00552dc3: jmp 0x552dcc */ goto L_00552dcc;
L_00552dc5:; BB(0x00552dc5);
    /* 00552dc5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00552dcc:; BB(0x00552dcc);
    /* 00552dcc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00552dcf: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00552dd5: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00552dd8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00552ddb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00552dde: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552de2: je 0x552df7 */ if (fZ) goto L_00552df7;
L_00552de4:; BB(0x00552de4);
    /* 00552de4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552de6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00552de9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00552deb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00552dee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00552df0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x552df2u); call_ind(t); }
    /* 00552df2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00552df5: jmp 0x552dfe */ goto L_00552dfe;
L_00552df7:; BB(0x00552df7);
    /* 00552df7: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00552dfe:; BB(0x00552dfe);
    /* 00552dfe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00552e05: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00552e08: call 0x552840 */ r_esp -= 4; W32(r_esp, 0x552e0du); f_00552840();
    /* 00552e0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00552e10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00552e17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00552e18: mov esp, ebp */ r_esp = r_ebp;
    /* 00552e1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552e1b: ret  */ FN_RET(0x00552ce0); r_esp += 4; return;
}

void f_00553960(void) /* VideoPokerDisplayLegacy::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00553960);
    /* 00553960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00553961: mov ebp, esp */ r_ebp = r_esp;
    /* 00553963: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553965: push 0x6a554e */ { u32 v = 0x6a554eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055396a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00553970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553971: sub esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00553977: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0055397c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055397e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00553981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553982: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00553985: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0055398b: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 00553991: push 0x30f340 */ { u32 v = 0x30f340u; r_esp -= 4; W32(r_esp, v); }
    /* 00553996: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0055399c: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x5539a1u); f_005f1ad0();
    /* 005539a1: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005539a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5539abu); f_00686d82();
    /* 005539ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005539ae: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005539b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005539b8: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005539bc: je 0x5539ce */ if (fZ) goto L_005539ce;
L_005539be:; BB(0x005539be);
    /* 005539be: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005539c1: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5539c6u); f_005eaaf0();
    /* 005539c6: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005539cc: jmp 0x5539d8 */ goto L_005539d8;
L_005539ce:; BB(0x005539ce);
    /* 005539ce: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_005539d8:; BB(0x005539d8);
    /* 005539d8: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005539de: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005539e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005539e8: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005539ee: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005539f1: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 005539f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005539f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005539f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005539fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005539fc: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553a02: call 0x5541c0 */ r_esp -= 4; W32(r_esp, 0x553a07u); f_005541c0();
    /* 00553a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553a08: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00553a0e: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00553a11: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x553a16u); f_005eae80();
    /* 00553a16: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553a1c: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00553a1f: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00553a25: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00553a28: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00553a2a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00553a2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x553a2fu); call_ind(t); }
    /* 00553a2f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00553a34: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553a39u); f_00686d82();
    /* 00553a39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553a3c: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00553a3f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00553a46: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553a4a: je 0x553a5c */ if (fZ) goto L_00553a5c;
L_00553a4c:; BB(0x00553a4c);
    /* 00553a4c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00553a4f: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x553a54u); f_005eaaf0();
    /* 00553a54: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00553a5a: jmp 0x553a66 */ goto L_00553a66;
L_00553a5c:; BB(0x00553a5c);
    /* 00553a5c: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_00553a66:; BB(0x00553a66);
    /* 00553a66: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00553a6c: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00553a6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553a76: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553a7c: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00553a7f: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00553a82: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553a84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553a86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553a88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553a8a: push 0x1388c */ { u32 v = 0x1388cu; r_esp -= 4; W32(r_esp, v); }
    /* 00553a8f: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553a95: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00553a98: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x553a9du); f_005eae80();
    /* 00553a9d: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553aa3: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00553aa6: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553aac: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00553aaf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00553ab1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00553ab4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x553ab6u); call_ind(t); }
    /* 00553ab6: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553abb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553ac0u); f_00686d82();
    /* 00553ac0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553ac3: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00553ac6: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00553acd: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553ad1: je 0x553ae3 */ if (fZ) goto L_00553ae3;
L_00553ad3:; BB(0x00553ad3);
    /* 00553ad3: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00553ad6: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x553adbu); f_005ec5a0();
    /* 00553adb: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00553ae1: jmp 0x553aed */ goto L_00553aed;
L_00553ae3:; BB(0x00553ae3);
    /* 00553ae3: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_00553aed:; BB(0x00553aed);
    /* 00553aed: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00553af3: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 00553af6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553afd: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553b03: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00553b06: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 00553b0c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553b0e: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b10: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b12: push 0x181 */ { u32 v = 0x181u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b17: push 0x136 */ { u32 v = 0x136u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b1c: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b1e: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b20: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00553b22: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b27: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553b2d: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00553b33: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x553b38u); f_005ec8f0();
    /* 00553b38: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553b3d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553b42u); f_00686d82();
    /* 00553b42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553b45: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00553b4b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00553b52: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553b59: je 0x553b6e */ if (fZ) goto L_00553b6e;
L_00553b5b:; BB(0x00553b5b);
    /* 00553b5b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00553b61: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x553b66u); f_005ec5a0();
    /* 00553b66: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00553b6c: jmp 0x553b78 */ goto L_00553b78;
L_00553b6e:; BB(0x00553b6e);
    /* 00553b6e: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_00553b78:; BB(0x00553b78);
    /* 00553b78: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00553b7e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00553b84: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553b8b: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00553b91: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00553b97: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
    /* 00553b9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553b9f: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00553ba1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00553ba3: push 0x181 */ { u32 v = 0x181u; r_esp -= 4; W32(r_esp, v); }
    /* 00553ba8: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00553bad: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00553baf: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00553bb1: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00553bb3: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00553bb8: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553bbe: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 00553bc4: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x553bc9u); f_005ec8f0();
    /* 00553bc9: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553bce: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553bd3u); f_00686d82();
    /* 00553bd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553bd6: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00553bdc: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00553be3: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553bea: je 0x553bff */ if (fZ) goto L_00553bff;
L_00553bec:; BB(0x00553bec);
    /* 00553bec: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00553bf2: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x553bf7u); f_005ec5a0();
    /* 00553bf7: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00553bfd: jmp 0x553c09 */ goto L_00553c09;
L_00553bff:; BB(0x00553bff);
    /* 00553bff: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_00553c09:; BB(0x00553c09);
    /* 00553c09: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 00553c0f: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00553c15: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553c1c: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553c22: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00553c28: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 00553c2e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553c30: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00553c32: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00553c34: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00553c39: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 00553c3e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00553c40: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00553c42: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00553c44: push 0x6c8568 */ { u32 v = 0x6c8568u; r_esp -= 4; W32(r_esp, v); }
    /* 00553c49: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x553c4eu); f_00630f40();
    /* 00553c4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553c51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553c52: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00553c58: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00553c5e: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x553c63u); f_005ec8f0();
    /* 00553c63: mov dword ptr [ebp - 0x34], 0x6c8550 */ W32((u32)(r_ebp+0xffffffccu), 0x6c8550u);
    /* 00553c6a: mov dword ptr [ebp - 0x30], 0x6c8538 */ W32((u32)(r_ebp+0xffffffd0u), 0x6c8538u);
    /* 00553c71: mov dword ptr [ebp - 0x2c], 0x6b3148 */ W32((u32)(r_ebp+0xffffffd4u), 0x6b3148u);
    /* 00553c78: mov dword ptr [ebp - 0x68], 0x91 */ W32((u32)(r_ebp+0xffffff98u), 0x91u);
    /* 00553c7f: mov dword ptr [ebp - 0x64], 0x172 */ W32((u32)(r_ebp+0xffffff9cu), 0x172u);
    /* 00553c86: mov dword ptr [ebp - 0x60], 0x168 */ W32((u32)(r_ebp+0xffffffa0u), 0x168u);
    /* 00553c8d: mov dword ptr [ebp - 0x5c], 0x172 */ W32((u32)(r_ebp+0xffffffa4u), 0x172u);
    /* 00553c94: mov dword ptr [ebp - 0x58], 0x91 */ W32((u32)(r_ebp+0xffffffa8u), 0x91u);
    /* 00553c9b: mov dword ptr [ebp - 0x54], 0xd8 */ W32((u32)(r_ebp+0xffffffacu), 0xd8u);
    /* 00553ca2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00553ca9: jmp 0x553cb4 */ goto L_00553cb4;
L_00553cab:; BB(0x00553cab);
    /* 00553cab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553cae: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00553cb1: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_00553cb4:; BB(0x00553cb4);
    /* 00553cb4: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00553cb8: jge 0x553d8b */ if ((fS==fO)) goto L_00553d8b;
L_00553cbe:; BB(0x00553cbe);
    /* 00553cbe: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553cc3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553cc8u); f_00686d82();
    /* 00553cc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553ccb: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00553cd1: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00553cd8: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553cdf: je 0x553cf4 */ if (fZ) goto L_00553cf4;
L_00553ce1:; BB(0x00553ce1);
    /* 00553ce1: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 00553ce7: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x553cecu); f_005ec5a0();
    /* 00553cec: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00553cf2: jmp 0x553cfe */ goto L_00553cfe;
L_00553cf4:; BB(0x00553cf4);
    /* 00553cf4: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_00553cfe:; BB(0x00553cfe);
    /* 00553cfe: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 00553d04: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00553d0a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553d11: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553d14: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553d1a: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00553d20: mov dword ptr [ecx + eax*4 + 0x78], edx */ W32((u32)(r_ecx+r_eax*4+0x78u), r_edx);
    /* 00553d24: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553d26: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00553d28: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00553d2a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553d2d: mov ecx, dword ptr [ebp + eax*8 - 0x64] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffff9cu));
    /* 00553d31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00553d32: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553d35: mov eax, dword ptr [ebp + edx*8 - 0x68] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffff98u));
    /* 00553d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553d3a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00553d3c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00553d3e: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00553d40: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553d43: mov edx, dword ptr [ebp + ecx*4 - 0x34] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffccu));
    /* 00553d47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00553d48: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x553d4du); f_00630f40();
    /* 00553d4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553d51: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553d54: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553d5a: mov ecx, dword ptr [ecx + eax*4 + 0x78] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x78u));
    /* 00553d5e: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x553d63u); f_005ec8f0();
    /* 00553d63: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553d66: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00553d6c: mov ecx, dword ptr [eax + edx*4 + 0x78] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 00553d70: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553d73: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00553d79: mov edx, dword ptr [eax + edx*4 + 0x78] */ r_edx = R32((u32)(r_eax+r_edx*4+0x78u));
    /* 00553d7d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00553d7f: mov ecx, edx */ r_ecx = r_edx;
    /* 00553d81: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00553d84: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x553d86u); call_ind(t); }
    /* 00553d86: jmp 0x553cab */ goto L_00553cab;
L_00553d8b:; BB(0x00553d8b);
    /* 00553d8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553d8d: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00553d93: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x553d98u); f_005d0aa0();
    /* 00553d98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553d99: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x553d9eu); f_0064c8a0();
    /* 00553d9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553da1: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00553da7: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00553dad: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00553db3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00553db6: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00553dbc: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00553dbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553dc1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553dc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553dc5: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 00553dc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00553dc9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00553dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553dcd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00553dd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00553dd1: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x553dd6u); f_0064c8d0();
    /* 00553dd6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553dd9: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 00553ddc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00553ddd: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00553de3: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 00553de9: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553def: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00553df5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00553df7: mov ecx, eax */ r_ecx = r_eax;
    /* 00553df9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00553dff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x553e01u); call_ind(t); }
    /* 00553e01: mov dword ptr [ebp - 0x50], 0x85 */ W32((u32)(r_ebp+0xffffffb0u), 0x85u);
    /* 00553e08: mov dword ptr [ebp - 0x4c], 0xbc */ W32((u32)(r_ebp+0xffffffb4u), 0xbcu);
    /* 00553e0f: mov dword ptr [ebp - 0x48], 0xf3 */ W32((u32)(r_ebp+0xffffffb8u), 0xf3u);
    /* 00553e16: mov dword ptr [ebp - 0x44], 0x12a */ W32((u32)(r_ebp+0xffffffbcu), 0x12au);
    /* 00553e1d: mov dword ptr [ebp - 0x40], 0x161 */ W32((u32)(r_ebp+0xffffffc0u), 0x161u);
    /* 00553e24: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00553e2b: jmp 0x553e36 */ goto L_00553e36;
L_00553e2d:; BB(0x00553e2d);
    /* 00553e2d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553e30: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00553e33: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_00553e36:; BB(0x00553e36);
    /* 00553e36: cmp dword ptr [ebp - 0x28], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00553e3a: jge 0x55405c */ if ((fS==fO)) goto L_0055405c;
L_00553e40:; BB(0x00553e40);
    /* 00553e40: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 00553e45: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553e4au); f_00686d82();
    /* 00553e4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553e4d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00553e53: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00553e5a: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553e61: je 0x553e78 */ if (fZ) goto L_00553e78;
L_00553e63:; BB(0x00553e63);
    /* 00553e63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00553e65: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 00553e6b: call 0x555510 */ r_esp -= 4; W32(r_esp, 0x553e70u); f_00555510();
    /* 00553e70: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00553e76: jmp 0x553e82 */ goto L_00553e82;
L_00553e78:; BB(0x00553e78);
    /* 00553e78: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_00553e82:; BB(0x00553e82);
    /* 00553e82: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00553e88: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00553e8e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553e95: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553e98: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553e9e: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00553ea4: mov dword ptr [ecx + eax*4 + 4], edx */ W32((u32)(r_ecx+r_eax*4+0x4u), r_edx);
    /* 00553ea8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553eaa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00553eac: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 00553eb1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553eb4: mov ecx, dword ptr [ebp + eax*4 - 0x50] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffb0u));
    /* 00553eb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00553eb9: push 0x30f341 */ { u32 v = 0x30f341u; r_esp -= 4; W32(r_esp, v); }
    /* 00553ebe: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553ec1: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00553ec7: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00553ecb: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x553ed0u); f_005eae80();
    /* 00553ed0: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00553ed5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553edau); f_00686d82();
    /* 00553eda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553edd: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00553ee3: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00553eea: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553ef1: je 0x553f06 */ if (fZ) goto L_00553f06;
L_00553ef3:; BB(0x00553ef3);
    /* 00553ef3: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00553ef9: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x553efeu); f_005f5bf0();
    /* 00553efe: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00553f04: jmp 0x553f10 */ goto L_00553f10;
L_00553f06:; BB(0x00553f06);
    /* 00553f06: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_00553f10:; BB(0x00553f10);
    /* 00553f10: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 00553f16: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 00553f1c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553f23: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553f26: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00553f2c: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00553f32: mov dword ptr [eax + edx*4 + 0x18], ecx */ W32((u32)(r_eax+r_edx*4+0x18u), r_ecx);
    /* 00553f36: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553f38: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00553f3a: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00553f3f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553f42: mov eax, dword ptr [ebp + edx*4 - 0x50] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffb0u));
    /* 00553f46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00553f47: push 0x13899 */ { u32 v = 0x13899u; r_esp -= 4; W32(r_esp, v); }
    /* 00553f4c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553f4f: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553f55: mov ecx, dword ptr [edx + ecx*4 + 0x18] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 00553f59: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x553f5eu); f_005eae80();
    /* 00553f5e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553f61: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553f67: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00553f6b: mov dword ptr [edx + 0x178], 0 */ W32((u32)(r_edx+0x178u), 0x0u);
    /* 00553f75: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553f7a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x553f7fu); f_00686d82();
    /* 00553f7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00553f82: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00553f88: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00553f8f: cmp dword ptr [ebp - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00553f96: je 0x553fab */ if (fZ) goto L_00553fab;
L_00553f98:; BB(0x00553f98);
    /* 00553f98: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00553f9e: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x553fa3u); f_005ec5a0();
    /* 00553fa3: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 00553fa9: jmp 0x553fb5 */ goto L_00553fb5;
L_00553fab:; BB(0x00553fab);
    /* 00553fab: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_00553fb5:; BB(0x00553fb5);
    /* 00553fb5: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 00553fbb: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00553fc1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00553fc8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553fcb: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553fd1: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00553fd7: mov dword ptr [edx + ecx*4 + 0x9c], eax */ W32((u32)(r_edx+r_ecx*4+0x9cu), r_eax);
    /* 00553fde: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00553fe0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00553fe2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00553fe4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553fe7: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553fed: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00553ff1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00553ff4: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00553ffa: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00553ffe: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00554000: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00554003: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x554005u); call_ind(t); }
    /* 00554005: sub eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00554008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554009: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0055400c: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00554012: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00554016: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00554019: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0055401f: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00554023: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554025: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00554028: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55402au); call_ind(t); }
    /* 0055402a: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055402d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055402e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00554030: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00554032: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00554034: push 0x6c8524 */ { u32 v = 0x6c8524u; r_esp -= 4; W32(r_esp, v); }
    /* 00554039: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x55403eu); f_00630f40();
    /* 0055403e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554042: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00554045: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 0055404b: mov ecx, dword ptr [edx + ecx*4 + 0x9c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x9cu));
    /* 00554052: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x554057u); f_005ec8f0();
    /* 00554057: jmp 0x553e2d */ goto L_00553e2d;
L_0055405c:; BB(0x0055405c);
    /* 0055405c: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00554061: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x554066u); f_00686d82();
    /* 00554066: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554069: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0055406f: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00554076: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055407d: je 0x554092 */ if (fZ) goto L_00554092;
L_0055407f:; BB(0x0055407f);
    /* 0055407f: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00554085: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x55408au); f_005f5bf0();
    /* 0055408a: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00554090: jmp 0x55409c */ goto L_0055409c;
L_00554092:; BB(0x00554092);
    /* 00554092: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_0055409c:; BB(0x0055409c);
    /* 0055409c: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005540a2: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005540a8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005540af: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005540b5: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005540bb: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 005540be: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005540c0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005540c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005540c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005540c6: push 0x1388b */ { u32 v = 0x1388bu; r_esp -= 4; W32(r_esp, v); }
    /* 005540cb: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005540d1: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005540d4: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5540d9u); f_005eae80();
    /* 005540d9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005540df: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 005540e2: mov byte ptr [ebp - 0xc1], dl */ W8((u32)(r_ebp+0xffffff3fu), (u8)r_edx);
    /* 005540e8: movzx eax, byte ptr [ebp - 0xc1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff3fu));
    /* 005540ef: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005540f1: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005540f3: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005540f6: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005540f9: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005540ff: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00554102: mov dword ptr [edx + 0x178], eax */ W32((u32)(r_edx+0x178u), r_eax);
    /* 00554108: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0055410f: jmp 0x55411a */ goto L_0055411a;
L_00554111:; BB(0x00554111);
    /* 00554111: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00554114: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554117: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0055411a:; BB(0x0055411a);
    /* 0055411a: cmp dword ptr [ebp - 0x28], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055411e: jge 0x55415c */ if ((fS==fO)) goto L_0055415c;
L_00554120:; BB(0x00554120);
    /* 00554120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554122: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554124: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554126: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554128: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055412a: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055412f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00554131: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554133: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554135: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00554138: add ecx, 0x13883 */ {  u32 a = r_ecx; u32 b = 0x13883u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055413e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055413f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00554142: mov eax, dword ptr [edx*4 + 0x73efe0] */ r_eax = R32((u32)(r_edx*4+0x73efe0u));
    /* 00554149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055414a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055414c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00554152: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00554155: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x55415au); f_005f9de0();
    /* 0055415a: jmp 0x554111 */ goto L_00554111;
L_0055415c:; BB(0x0055415c);
    /* 0055415c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055415e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554160: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554162: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554164: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00554166: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055416b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055416d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055416f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554171: push 0x1388d */ { u32 v = 0x1388du; r_esp -= 4; W32(r_esp, v); }
    /* 00554176: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00554178: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055417a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00554180: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00554183: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x554188u); f_005f9de0();
    /* 00554188: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055418a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055418c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00554191: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00554194: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x554199u); f_005fb300();
    /* 00554199: mov ecx, eax */ r_ecx = r_eax;
    /* 0055419b: call 0x602790 */ r_esp -= 4; W32(r_esp, 0x5541a0u); f_00602790();
    /* 005541a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005541a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005541aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005541ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005541ae: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005541b0: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5541b5u); f_00686d72();
    /* 005541b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005541b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005541b8: ret  */ FN_RET(0x00553960); r_esp += 4; return;
}

void f_00554530(void) /* VideoPokerDisplayLegacy::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554530);
    /* 00554530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554531: mov ebp, esp */ r_ebp = r_esp;
    /* 00554533: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554539: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0055453e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00554540: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00554543: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 00554549: mov eax, dword ptr [0x793420] */ r_eax = R32((u32)(0x793420u));
    /* 0055454e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00554551: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 00554557: cmp dword ptr [ebp - 0x10c], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00554561: jl 0x55457a */ if ((fS!=fO)) goto L_0055457a;
L_00554563:; BB(0x00554563);
    /* 00554563: push 0x6c8580 */ { u32 v = 0x6c8580u; r_esp -= 4; W32(r_esp, v); }
    /* 00554568: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0055456e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055456f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x554575u); call_ind(t); }
    /* 00554575: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554578: jmp 0x554596 */ goto L_00554596;
L_0055457a:; BB(0x0055457a);
    /* 0055457a: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00554580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554581: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 00554586: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 0055458c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055458d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x554593u); call_ind(t); }
    /* 00554593: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00554596:; BB(0x00554596);
    /* 00554596: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 0055459c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055459d: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 005545a3: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005545a9: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005545af: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005545b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005545b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005545b9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005545bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5545c1u); call_ind(t); }
    /* 005545c1: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 005545c7: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 005545cd: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 005545d3: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005545d9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005545db: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005545de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5545e0u); call_ind(t); }
    /* 005545e0: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005545e6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005545e9: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 005545ef: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005545f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005545f6: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 005545fb: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00554601: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554602: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x554608u); call_ind(t); }
    /* 00554608: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055460b: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00554611: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554612: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00554618: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0055461e: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00554624: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0055462a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055462c: mov ecx, eax */ r_ecx = r_eax;
    /* 0055462e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00554634: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554636u); call_ind(t); }
    /* 00554636: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0055463c: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 00554642: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00554648: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 0055464e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554650: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554653: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554655u); call_ind(t); }
    /* 00554655: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554658: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055465a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x55465fu); f_00686d72();
    /* 0055465f: mov esp, ebp */ r_esp = r_ebp;
    /* 00554661: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554662: ret  */ FN_RET(0x00554530); r_esp += 4; return;
}

void f_00554920(void) /* VideoPokerDisplayLegacy::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554920);
    /* 00554920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554921: mov ebp, esp */ r_ebp = r_esp;
    /* 00554923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00554927: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055492a: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00554930: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554933: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00554939: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055493b: mov ecx, eax */ r_ecx = r_eax;
    /* 0055493d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00554940: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554942u); call_ind(t); }
    /* 00554942: mov esp, ebp */ r_esp = r_ebp;
    /* 00554944: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554945: ret  */ FN_RET(0x00554920); r_esp += 4; return;
}

void f_00554bf0(void) /* VideoPokerDisplayLegacy::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554bf0);
    /* 00554bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00554bf3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554bf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00554bf9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00554c00: jmp 0x554c0b */ goto L_00554c0b;
L_00554c02:; BB(0x00554c02);
    /* 00554c02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554c05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00554c08: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00554c0b:; BB(0x00554c0b);
    /* 00554c0b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00554c0f: jge 0x554c7b */ if ((fS==fO)) goto L_00554c7b;
L_00554c11:; BB(0x00554c11);
    /* 00554c11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554c14: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554c17: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 00554c1b: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 00554c22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554c23: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00554c29: call 0x5573a0 */ r_esp -= 4; W32(r_esp, 0x554c2eu); f_005573a0();
    /* 00554c2e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00554c31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554c33: je 0x554c58 */ if (fZ) goto L_00554c58;
L_00554c35:; BB(0x00554c35);
    /* 00554c35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554c38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554c3b: mov edx, dword ptr [ecx + eax*4 + 0x9c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x9cu));
    /* 00554c42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554c45: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554c48: mov ecx, dword ptr [ecx + eax*4 + 0x9c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x9cu));
    /* 00554c4f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554c51: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554c54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554c56u); call_ind(t); }
    /* 00554c56: jmp 0x554c79 */ goto L_00554c79;
L_00554c58:; BB(0x00554c58);
    /* 00554c58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554c5b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554c5e: mov eax, dword ptr [edx + ecx*4 + 0x9c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x9cu));
    /* 00554c65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554c68: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00554c6b: mov ecx, dword ptr [edx + ecx*4 + 0x9c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x9cu));
    /* 00554c72: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00554c74: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00554c77: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x554c79u); call_ind(t); }
L_00554c79:; BB(0x00554c79);
    /* 00554c79: jmp 0x554c02 */ goto L_00554c02;
L_00554c7b:; BB(0x00554c7b);
    /* 00554c7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00554c7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554c7e: ret  */ FN_RET(0x00554bf0); r_esp += 4; return;
}

void f_00554eb0(void) /* VideoPokerDisplayLegacy::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00554eb0);
    /* 00554eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00554eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00554eb3: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00554eb6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00554ebb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00554ebd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00554ec0: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00554ec3: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554ec7: je 0x554f0c */ if (fZ) goto L_00554f0c;
L_00554ec9:; BB(0x00554ec9);
    /* 00554ec9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00554ecc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554ecd: push 0x6c8588 */ { u32 v = 0x6c8588u; r_esp -= 4; W32(r_esp, v); }
    /* 00554ed2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x554ed7u); f_00630f40();
    /* 00554ed7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554edb: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00554ede: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00554edf: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x554ee5u); call_ind(t); }
    /* 00554ee5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554ee8: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00554eeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00554eec: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00554eef: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00554ef5: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00554ef8: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00554efe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00554f00: mov ecx, eax */ r_ecx = r_eax;
    /* 00554f02: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00554f08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554f0au); call_ind(t); }
    /* 00554f0a: jmp 0x554f36 */ goto L_00554f36;
L_00554f0c:; BB(0x00554f0c);
    /* 00554f0c: push 0x6c8568 */ { u32 v = 0x6c8568u; r_esp -= 4; W32(r_esp, v); }
    /* 00554f11: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x554f16u); f_00630f40();
    /* 00554f16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00554f19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00554f1a: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00554f1d: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00554f23: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00554f26: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00554f2c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554f2e: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00554f34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554f36u); call_ind(t); }
L_00554f36:; BB(0x00554f36);
    /* 00554f36: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00554f39: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00554f3f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00554f42: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00554f48: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00554f4a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00554f4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x554f4fu); call_ind(t); }
    /* 00554f4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00554f52: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00554f54: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x554f59u); f_00686d72();
    /* 00554f59: mov esp, ebp */ r_esp = r_ebp;
    /* 00554f5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554f5c: ret 4 */ FN_RET(0x00554eb0); r_esp += 8; return;
}

void f_005554c0(void) /* VideoPokerDisplayLegacy::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005554c0);
    /* 005554c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005554c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005554c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005554c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005554c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005554d0: jmp 0x5554db */ goto L_005554db;
L_005554d2:; BB(0x005554d2);
    /* 005554d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005554d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005554d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005554db:; BB(0x005554db);
    /* 005554db: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005554df: jge 0x555504 */ if ((fS==fO)) goto L_00555504;
L_005554e1:; BB(0x005554e1);
    /* 005554e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005554e4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005554e7: mov eax, dword ptr [edx + ecx*4 + 0x9c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x9cu));
    /* 005554ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005554f1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005554f4: mov ecx, dword ptr [edx + ecx*4 + 0x9c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x9cu));
    /* 005554fb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005554fd: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00555500: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x555502u); call_ind(t); }
    /* 00555502: jmp 0x5554d2 */ goto L_005554d2;
L_00555504:; BB(0x00555504);
    /* 00555504: mov esp, ebp */ r_esp = r_ebp;
    /* 00555506: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555507: ret  */ FN_RET(0x005554c0); r_esp += 4; return;
}

