#include "protos.h"

void f_00419080(void) /* sub_419080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419080);
    /* 00419080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419081: mov ebp, esp */ r_ebp = r_esp;
    /* 00419083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419087: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041908a: cmp dword ptr [eax + 0x4d0], -1 */ {  u32 a = R32((u32)(r_eax+0x4d0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419091: jne 0x419097 */ if (!fZ) goto L_00419097;
L_00419093:; BB(0x00419093);
    /* 00419093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419095: jmp 0x4190a9 */ goto L_004190a9;
L_00419097:; BB(0x00419097);
    /* 00419097: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041909a: mov edx, dword ptr [ecx + 0x4d0] */ r_edx = R32((u32)(r_ecx+0x4d0u));
    /* 004190a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004190a1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4190a6u); f_005dcb00();
    /* 004190a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004190a9:; BB(0x004190a9);
    /* 004190a9: mov esp, ebp */ r_esp = r_ebp;
    /* 004190ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004190ac: ret  */ FN_RET(0x00419080); r_esp += 4; return;
}

void f_004190b0(void) /* sub_4190B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004190b0);
    /* 004190b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004190b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004190b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004190b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004190b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004190ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004190bd: mov dword ptr [eax + 0x4d0], ecx */ W32((u32)(r_eax+0x4d0u), r_ecx);
    /* 004190c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004190c6: cmp dword ptr [edx + 0x4d0], -1 */ {  u32 a = R32((u32)(r_edx+0x4d0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004190cd: je 0x4190e6 */ if (fZ) goto L_004190e6;
L_004190cf:; BB(0x004190cf);
    /* 004190cf: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 004190d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004190d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004190d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004190d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004190d9: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004190df: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x4190e4u); f_005d8a20();
    /* 004190e4: jmp 0x4190f7 */ goto L_004190f7;
L_004190e6:; BB(0x004190e6);
    /* 004190e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004190e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004190ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004190ec: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004190f2: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x4190f7u); f_005d8a20();
L_004190f7:; BB(0x004190f7);
    /* 004190f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004190f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004190fa: ret 8 */ FN_RET(0x004190b0); r_esp += 12; return;
}

void f_00419100(void) /* sub_419100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419100);
    /* 00419100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419101: mov ebp, esp */ r_ebp = r_esp;
    /* 00419103: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419106: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00419109: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00419110: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00419117: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0041911e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00419125: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041912c: jmp 0x419137 */ goto L_00419137;
L_0041912e:; BB(0x0041912e);
    /* 0041912e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419131: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419134: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00419137:; BB(0x00419137);
    /* 00419137: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041913b: jge 0x4191e4 */ if ((fS==fO)) goto L_004191e4;
L_00419141:; BB(0x00419141);
    /* 00419141: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419144: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00419148: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419149: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41914eu); f_005dcb00();
    /* 0041914e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419151: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00419154: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00419157: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41915cu); f_0063aac0();
    /* 0041915c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041915e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00419161: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00419163: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419167: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0041916a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0041916d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041916f: jne 0x4191df */ if (!fZ) goto L_004191df;
L_00419171:; BB(0x00419171);
    /* 00419171: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419174: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00419178: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419179: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41917eu); f_005dcb00();
    /* 0041917e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419181: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00419184: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00419187: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41918cu); f_0063aac0();
    /* 0041918c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041918e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00419191: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419195: je 0x4191b3 */ if (fZ) goto L_004191b3;
L_00419197:; BB(0x00419197);
    /* 00419197: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041919a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41919fu); f_0063aac0();
    /* 0041919f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004191a1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004191a4: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004191a8: je 0x4191b3 */ if (fZ) goto L_004191b3;
L_004191aa:; BB(0x004191aa);
    /* 004191aa: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004191b1: jmp 0x4191ba */ goto L_004191ba;
L_004191b3:; BB(0x004191b3);
    /* 004191b3: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_004191ba:; BB(0x004191ba);
    /* 004191ba: movzx ecx, byte ptr [ebp - 0x34] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 004191be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004191c0: je 0x4191df */ if (fZ) goto L_004191df;
L_004191c2:; BB(0x004191c2);
    /* 004191c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004191c5: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 004191c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004191ca: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4191cfu); f_005dcb00();
    /* 004191cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004191d2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004191d5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004191d8: mov byte ptr [ecx + 0x4a1], 1 */ W8((u32)(r_ecx+0x4a1u), 0x1u);
L_004191df:; BB(0x004191df);
    /* 004191df: jmp 0x41912e */ goto L_0041912e;
L_004191e4:; BB(0x004191e4);
    /* 004191e4: mov esp, ebp */ r_esp = r_ebp;
    /* 004191e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004191e7: ret  */ FN_RET(0x00419100); r_esp += 4; return;
}

void f_004191f0(void) /* sub_4191F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004191f0);
    /* 004191f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004191f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004191f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004191f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004191f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004191fc: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419202: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419205: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419208: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0041920b: mov byte ptr [ecx + eax + 0x110], dl */ W8((u32)(r_ecx+r_eax+0x110u), (u8)r_edx);
    /* 00419212: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00419215: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00419218: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0041921c: ja 0x419241 */ if ((!fC&&!fZ)) goto L_00419241;
L_0041921e:; BB(0x0041921e);
    /* 0041921e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419221: movzx edx, byte ptr [ecx + 0x41926c] */ r_edx = (u32)R8((u32)(r_ecx+0x41926cu));
    /* 00419228: jmp dword ptr [edx*4 + 0x419260] */ { u32 t = R32((u32)(r_edx*4+0x419260u)); switch (t) { case 0x419238u: goto L_00419238; case 0x41922fu: goto L_0041922f; case 0x419241u: goto L_00419241; default: UNSUP(0x00419228, "jump table entry is not a known target"); } }
L_0041922f:; BB(0x0041922f);
    /* 0041922f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00419236: jmp 0x419248 */ goto L_00419248;
L_00419238:; BB(0x00419238);
    /* 00419238: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0041923f: jmp 0x419248 */ goto L_00419248;
L_00419241:; BB(0x00419241);
    /* 00419241: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00419248:; BB(0x00419248);
    /* 00419248: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041924b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041924e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419251: mov dword ptr [ecx + eax*4 + 0x4f4], edx */ W32((u32)(r_ecx+r_eax*4+0x4f4u), r_edx);
    /* 00419258: mov esp, ebp */ r_esp = r_ebp;
    /* 0041925a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041925b: ret 0xc */ FN_RET(0x004191f0); r_esp += 16; return;
}

void f_00419280(void) /* sub_419280 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419280);
    /* 00419280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419281: mov ebp, esp */ r_ebp = r_esp;
    /* 00419283: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419286: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00419289: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00419290: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 00419294: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041929b: jmp 0x4192a6 */ goto L_004192a6;
L_0041929d:; BB(0x0041929d);
    /* 0041929d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004192a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004192a3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004192a6:; BB(0x004192a6);
    /* 004192a6: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004192aa: jge 0x419340 */ if ((fS==fO)) goto L_00419340;
L_004192b0:; BB(0x004192b0);
    /* 004192b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004192b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004192b4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004192ba: call 0x638ff0 */ r_esp -= 4; W32(r_esp, 0x4192bfu); f_00638ff0();
    /* 004192bf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004192c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004192c4: jne 0x4192c8 */ if (!fZ) goto L_004192c8;
L_004192c6:; BB(0x004192c6);
    /* 004192c6: jmp 0x41929d */ goto L_0041929d;
L_004192c8:; BB(0x004192c8);
    /* 004192c8: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 004192cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004192cf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004192d2: mov edx, dword ptr [ecx + eax*4 + 0x4f4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4f4u));
    /* 004192d9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004192dc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004192df: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004192e2: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004192e6: je 0x41931c */ if (fZ) goto L_0041931c;
L_004192e8:; BB(0x004192e8);
    /* 004192e8: cmp dword ptr [ebp - 0x2c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004192ec: je 0x4192f6 */ if (fZ) goto L_004192f6;
L_004192ee:; BB(0x004192ee);
    /* 004192ee: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004192f2: je 0x419310 */ if (fZ) goto L_00419310;
L_004192f4:; BB(0x004192f4);
    /* 004192f4: jmp 0x419320 */ goto L_00419320;
L_004192f6:; BB(0x004192f6);
    /* 004192f6: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004192fa: jne 0x419302 */ if (!fZ) goto L_00419302;
L_004192fc:; BB(0x004192fc);
    /* 004192fc: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 00419300: jmp 0x41930e */ goto L_0041930e;
L_00419302:; BB(0x00419302);
    /* 00419302: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419306: jne 0x41930a */ if (!fZ) goto L_0041930a;
L_00419308:; BB(0x00419308);
    /* 00419308: jmp 0x41930e */ goto L_0041930e;
L_0041930a:; BB(0x0041930a);
    /* 0041930a: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
L_0041930e:; BB(0x0041930e);
    /* 0041930e: jmp 0x419320 */ goto L_00419320;
L_00419310:; BB(0x00419310);
    /* 00419310: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419314: je 0x41931a */ if (fZ) goto L_0041931a;
L_00419316:; BB(0x00419316);
    /* 00419316: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
L_0041931a:; BB(0x0041931a);
    /* 0041931a: jmp 0x419320 */ goto L_00419320;
L_0041931c:; BB(0x0041931c);
    /* 0041931c: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
L_00419320:; BB(0x00419320);
    /* 00419320: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00419324: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419326: je 0x41933b */ if (fZ) goto L_0041933b;
L_00419328:; BB(0x00419328);
    /* 00419328: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041932b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041932e: mov dword ptr [ebp + edx*4 - 0x20], eax */ W32((u32)(r_ebp+r_edx*4+0xffffffe0u), r_eax);
    /* 00419332: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419335: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419338: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_0041933b:; BB(0x0041933b);
    /* 0041933b: jmp 0x41929d */ goto L_0041929d;
L_00419340:; BB(0x00419340);
    /* 00419340: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419344: jne 0x41934b */ if (!fZ) goto L_0041934b;
L_00419346:; BB(0x00419346);
    /* 00419346: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00419349: jmp 0x419366 */ goto L_00419366;
L_0041934b:; BB(0x0041934b);
    /* 0041934b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041934e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00419351: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419352: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419354: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x419359u); f_0062fc30();
    /* 00419359: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041935c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041935f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419362: mov eax, dword ptr [ebp + eax*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
L_00419366:; BB(0x00419366);
    /* 00419366: mov esp, ebp */ r_esp = r_ebp;
    /* 00419368: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419369: ret 4 */ FN_RET(0x00419280); r_esp += 8; return;
}

void f_00419370(void) /* sub_419370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419370);
    /* 00419370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419371: mov ebp, esp */ r_ebp = r_esp;
    /* 00419373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419377: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041937b: jne 0x419399 */ if (!fZ) goto L_00419399;
L_0041937d:; BB(0x0041937d);
    /* 0041937d: cmp dword ptr [ebp + 0x10], 0xf */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419381: jl 0x419385 */ if ((fS!=fO)) goto L_00419385;
L_00419383:; BB(0x00419383);
    /* 00419383: jmp 0x4193bc */ goto L_004193bc;
L_00419385:; BB(0x00419385);
    /* 00419385: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00419388: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041938b: mov dx, word ptr [ebp + 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x14u))) & 0xffffu);
    /* 0041938f: mov word ptr [ecx + eax*2 + 0x498], dx */ W16((u32)(r_ecx+r_eax*2+0x498u), (u16)r_edx);
    /* 00419397: jmp 0x4193bc */ goto L_004193bc;
L_00419399:; BB(0x00419399);
    /* 00419399: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041939c: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004193a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004193a5: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 004193a9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004193ac: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004193af: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004193b1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004193b4: mov ax, word ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x14u))) & 0xffffu);
    /* 004193b8: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
L_004193bc:; BB(0x004193bc);
    /* 004193bc: mov esp, ebp */ r_esp = r_ebp;
    /* 004193be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004193bf: ret 0x10 */ FN_RET(0x00419370); r_esp += 20; return;
}

void f_004193d0(void) /* sub_4193D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004193d0);
    /* 004193d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004193d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004193d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004193d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004193d7: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004193db: jne 0x4193f8 */ if (!fZ) goto L_004193f8;
L_004193dd:; BB(0x004193dd);
    /* 004193dd: cmp dword ptr [ebp + 0x10], 0xf */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004193e1: jl 0x4193e8 */ if ((fS!=fO)) goto L_004193e8;
L_004193e3:; BB(0x004193e3);
    /* 004193e3: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004193e6: jmp 0x419417 */ goto L_00419417;
L_004193e8:; BB(0x004193e8);
    /* 004193e8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004193eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004193ee: mov ax, word ptr [ecx + eax*2 + 0x498] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x498u))) & 0xffffu);
    /* 004193f6: jmp 0x419417 */ goto L_00419417;
L_004193f8:; BB(0x004193f8);
    /* 004193f8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004193fb: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419401: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419404: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 00419408: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041940b: imul edx, edx, 0x2c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041940e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419410: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00419413: mov ax, word ptr [ecx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
L_00419417:; BB(0x00419417);
    /* 00419417: mov esp, ebp */ r_esp = r_ebp;
    /* 00419419: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041941a: ret 0xc */ FN_RET(0x004193d0); r_esp += 16; return;
}

void f_00419420(void) /* sub_419420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419420);
    /* 00419420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419421: mov ebp, esp */ r_ebp = r_esp;
    /* 00419423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419427: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041942b: jne 0x41943e */ if (!fZ) goto L_0041943e;
L_0041942d:; BB(0x0041942d);
    /* 0041942d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419430: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419433: mov cl, byte ptr [ebp + 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 00419436: mov byte ptr [eax + 0x4b6], cl */ W8((u32)(r_eax+0x4b6u), (u8)r_ecx);
    /* 0041943c: jmp 0x419461 */ goto L_00419461;
L_0041943e:; BB(0x0041943e);
    /* 0041943e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419441: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041944a: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 0041944e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00419451: imul edx, edx, 0x16 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x16u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419454: add ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419457: mov al, byte ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 0041945a: mov byte ptr [edx + ecx + 0xb0], al */ W8((u32)(r_edx+r_ecx+0xb0u), (u8)r_eax);
L_00419461:; BB(0x00419461);
    /* 00419461: mov esp, ebp */ r_esp = r_ebp;
    /* 00419463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419464: ret 0x10 */ FN_RET(0x00419420); r_esp += 20; return;
}

void f_00419470(void) /* sub_419470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419470);
    /* 00419470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419471: mov ebp, esp */ r_ebp = r_esp;
    /* 00419473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419474: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419477: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041947b: jne 0x419491 */ if (!fZ) goto L_00419491;
L_0041947d:; BB(0x0041947d);
    /* 0041947d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419480: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419483: cmp byte ptr [eax + 0x4b6], 0 */ {  u32 a = R8((u32)(r_eax+0x4b6u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0041948a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0041948d: jmp 0x4194b5 */ goto L_004194b5;
L_00419491:; BB(0x00419491);
    /* 00419491: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419494: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041949a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041949d: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 004194a1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004194a4: imul ecx, ecx, 0x16 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004194a7: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004194aa: cmp byte ptr [ecx + eax + 0xb0], 0 */ {  u32 a = R8((u32)(r_ecx+r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004194b2: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
L_004194b5:; BB(0x004194b5);
    /* 004194b5: mov esp, ebp */ r_esp = r_ebp;
    /* 004194b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004194b8: ret 0xc */ FN_RET(0x00419470); r_esp += 16; return;
}

void f_004194c0(void) /* sub_4194C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004194c0);
    /* 004194c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004194c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004194c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004194c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004194c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004194d0: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004194d4: jne 0x4194dd */ if (!fZ) goto L_004194dd;
L_004194d6:; BB(0x004194d6);
    /* 004194d6: mov eax, 1 */ r_eax = 0x1u;
    /* 004194db: jmp 0x41951c */ goto L_0041951c;
L_004194dd:; BB(0x004194dd);
    /* 004194dd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004194e4: jmp 0x4194ef */ goto L_004194ef;
L_004194e6:; BB(0x004194e6);
    /* 004194e6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004194e9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004194ec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004194ef:; BB(0x004194ef);
    /* 004194ef: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004194f3: jge 0x419519 */ if ((fS==fO)) goto L_00419519;
L_004194f5:; BB(0x004194f5);
    /* 004194f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004194f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004194fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004194fb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004194fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004194ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419502: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x419507u); f_004193d0();
    /* 00419507: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0041950a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041950c: je 0x419517 */ if (fZ) goto L_00419517;
L_0041950e:; BB(0x0041950e);
    /* 0041950e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419511: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00419517:; BB(0x00419517);
    /* 00419517: jmp 0x4194e6 */ goto L_004194e6;
L_00419519:; BB(0x00419519);
    /* 00419519: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0041951c:; BB(0x0041951c);
    /* 0041951c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041951e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041951f: ret 4 */ FN_RET(0x004194c0); r_esp += 8; return;
}

void f_00419530(void) /* sub_419530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419530);
    /* 00419530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419531: mov ebp, esp */ r_ebp = r_esp;
    /* 00419533: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419536: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00419539: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00419540: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419544: jne 0x419581 */ if (!fZ) goto L_00419581;
L_00419546:; BB(0x00419546);
    /* 00419546: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041954a: jne 0x419555 */ if (!fZ) goto L_00419555;
L_0041954c:; BB(0x0041954c);
    /* 0041954c: mov dword ptr [ebp + 0xc], 0xffffffff */ W32((u32)(r_ebp+0xcu), 0xffffffffu);
    /* 00419553: jmp 0x419581 */ goto L_00419581;
L_00419555:; BB(0x00419555);
    /* 00419555: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419559: jne 0x419564 */ if (!fZ) goto L_00419564;
L_0041955b:; BB(0x0041955b);
    /* 0041955b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00419562: jmp 0x41957b */ goto L_0041957b;
L_00419564:; BB(0x00419564);
    /* 00419564: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419567: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041956d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419570: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 00419578: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0041957b:; BB(0x0041957b);
    /* 0041957b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041957e: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_00419581:; BB(0x00419581);
    /* 00419581: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419585: jne 0x4195c5 */ if (!fZ) goto L_004195c5;
L_00419587:; BB(0x00419587);
    /* 00419587: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041958e: jmp 0x419599 */ goto L_00419599;
L_00419590:; BB(0x00419590);
    /* 00419590: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419593: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419596: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00419599:; BB(0x00419599);
    /* 00419599: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041959d: jge 0x4195c3 */ if ((fS==fO)) goto L_004195c3;
L_0041959f:; BB(0x0041959f);
    /* 0041959f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004195a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004195a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004195a5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004195a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004195a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004195ac: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x4195b1u); f_004193d0();
    /* 004195b1: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 004195b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004195b6: je 0x4195c1 */ if (fZ) goto L_004195c1;
L_004195b8:; BB(0x004195b8);
    /* 004195b8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004195bb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004195be: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_004195c1:; BB(0x004195c1);
    /* 004195c1: jmp 0x419590 */ goto L_00419590;
L_004195c3:; BB(0x004195c3);
    /* 004195c3: jmp 0x419603 */ goto L_00419603;
L_004195c5:; BB(0x004195c5);
    /* 004195c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004195cc: jmp 0x4195d7 */ goto L_004195d7;
L_004195ce:; BB(0x004195ce);
    /* 004195ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004195d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004195d4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004195d7:; BB(0x004195d7);
    /* 004195d7: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004195db: jge 0x419603 */ if ((fS==fO)) goto L_00419603;
L_004195dd:; BB(0x004195dd);
    /* 004195dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004195e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004195e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004195e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004195e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004195e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004195e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004195ec: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x4195f1u); f_004193d0();
    /* 004195f1: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 004195f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004195f6: je 0x419601 */ if (fZ) goto L_00419601;
L_004195f8:; BB(0x004195f8);
    /* 004195f8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004195fb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004195fe: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00419601:; BB(0x00419601);
    /* 00419601: jmp 0x4195ce */ goto L_004195ce;
L_00419603:; BB(0x00419603);
    /* 00419603: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419606: mov esp, ebp */ r_esp = r_ebp;
    /* 00419608: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419609: ret 8 */ FN_RET(0x00419530); r_esp += 12; return;
}

void f_00419610(void) /* sub_419610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419610);
    /* 00419610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419611: mov ebp, esp */ r_ebp = r_esp;
    /* 00419613: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419616: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00419619: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00419620: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419624: jne 0x419636 */ if (!fZ) goto L_00419636;
L_00419626:; BB(0x00419626);
    /* 00419626: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419628: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0041962a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041962d: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x419632u); f_00419530();
    /* 00419632: jmp 0x419669 */ goto L_00419669;
L_00419636:; BB(0x00419636);
    /* 00419636: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041963d: jmp 0x419648 */ goto L_00419648;
L_0041963f:; BB(0x0041963f);
    /* 0041963f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419642: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419645: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00419648:; BB(0x00419648);
    /* 00419648: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041964c: jge 0x419666 */ if ((fS==fO)) goto L_00419666;
L_0041964e:; BB(0x0041964e);
    /* 0041964e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419651: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419652: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419655: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419656: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419659: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x41965eu); f_00419530();
    /* 0041965e: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419661: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00419664: jmp 0x41963f */ goto L_0041963f;
L_00419666:; BB(0x00419666);
    /* 00419666: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_00419669:; BB(0x00419669);
    /* 00419669: mov esp, ebp */ r_esp = r_ebp;
    /* 0041966b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041966c: ret 4 */ FN_RET(0x00419610); r_esp += 8; return;
}

void f_00419670(void) /* sub_419670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419670);
    /* 00419670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419671: mov ebp, esp */ r_ebp = r_esp;
    /* 00419673: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419676: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419679: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041967d: jne 0x4196ba */ if (!fZ) goto L_004196ba;
L_0041967f:; BB(0x0041967f);
    /* 0041967f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419683: jne 0x41968e */ if (!fZ) goto L_0041968e;
L_00419685:; BB(0x00419685);
    /* 00419685: mov dword ptr [ebp + 0x10], 0xffffffff */ W32((u32)(r_ebp+0x10u), 0xffffffffu);
    /* 0041968c: jmp 0x4196ba */ goto L_004196ba;
L_0041968e:; BB(0x0041968e);
    /* 0041968e: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419692: jne 0x41969d */ if (!fZ) goto L_0041969d;
L_00419694:; BB(0x00419694);
    /* 00419694: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0041969b: jmp 0x4196b4 */ goto L_004196b4;
L_0041969d:; BB(0x0041969d);
    /* 0041969d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004196a0: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004196a6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004196a9: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 004196b1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_004196b4:; BB(0x004196b4);
    /* 004196b4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004196b7: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_004196ba:; BB(0x004196ba);
    /* 004196ba: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004196be: jne 0x41970e */ if (!fZ) goto L_0041970e;
L_004196c0:; BB(0x004196c0);
    /* 004196c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004196c7: jmp 0x4196d2 */ goto L_004196d2;
L_004196c9:; BB(0x004196c9);
    /* 004196c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004196cc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004196cf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004196d2:; BB(0x004196d2);
    /* 004196d2: cmp dword ptr [ebp - 4], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004196d6: jge 0x4196f5 */ if ((fS==fO)) goto L_004196f5;
L_004196d8:; BB(0x004196d8);
    /* 004196d8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004196db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004196dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004196de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004196e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004196e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004196e5: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x4196eau); f_004193d0();
    /* 004196ea: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 004196ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004196ef: jne 0x4196f3 */ if (!fZ) goto L_004196f3;
L_004196f1:; BB(0x004196f1);
    /* 004196f1: jmp 0x4196f5 */ goto L_004196f5;
L_004196f3:; BB(0x004196f3);
    /* 004196f3: jmp 0x4196c9 */ goto L_004196c9;
L_004196f5:; BB(0x004196f5);
    /* 004196f5: mov dx, word ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004196f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004196fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004196fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004196fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419700: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419704: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419707: call 0x419370 */ r_esp -= 4; W32(r_esp, 0x41970cu); f_00419370();
    /* 0041970c: jmp 0x41975e */ goto L_0041975e;
L_0041970e:; BB(0x0041970e);
    /* 0041970e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00419715: jmp 0x419720 */ goto L_00419720;
L_00419717:; BB(0x00419717);
    /* 00419717: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041971a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041971d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00419720:; BB(0x00419720);
    /* 00419720: cmp dword ptr [ebp - 4], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419724: jge 0x419745 */ if ((fS==fO)) goto L_00419745;
L_00419726:; BB(0x00419726);
    /* 00419726: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041972a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0041972d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041972e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419731: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419732: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419735: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x41973au); f_004193d0();
    /* 0041973a: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0041973d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041973f: jne 0x419743 */ if (!fZ) goto L_00419743;
L_00419741:; BB(0x00419741);
    /* 00419741: jmp 0x419745 */ goto L_00419745;
L_00419743:; BB(0x00419743);
    /* 00419743: jmp 0x419717 */ goto L_00419717;
L_00419745:; BB(0x00419745);
    /* 00419745: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00419749: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041974a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041974d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041974e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00419751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419752: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419755: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419756: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419759: call 0x419370 */ r_esp -= 4; W32(r_esp, 0x41975eu); f_00419370();
L_0041975e:; BB(0x0041975e);
    /* 0041975e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419761: mov eax, dword ptr [edx + 0x4c8] */ r_eax = R32((u32)(r_edx+0x4c8u));
    /* 00419767: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041976a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041976d: mov dword ptr [ecx + 0x4c8], eax */ W32((u32)(r_ecx+0x4c8u), r_eax);
    /* 00419773: mov esp, ebp */ r_esp = r_ebp;
    /* 00419775: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419776: ret 0xc */ FN_RET(0x00419670); r_esp += 16; return;
}

void f_00419780(void) /* sub_419780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419780);
    /* 00419780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419781: mov ebp, esp */ r_ebp = r_esp;
    /* 00419783: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419786: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419789: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0041978c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041978d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00419790: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419791: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419795: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419798: call 0x4193d0 */ r_esp -= 4; W32(r_esp, 0x41979du); f_004193d0();
    /* 0041979d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041979e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x4197a3u); f_00641280();
    /* 004197a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004197a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004197a9: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004197ad: jle 0x4197b8 */ if ((fZ||fS!=fO)) goto L_004197b8;
L_004197af:; BB(0x004197af);
    /* 004197af: mov dword ptr [ebp - 0xc], 0xa */ W32((u32)(r_ebp+0xfffffff4u), 0xau);
    /* 004197b6: jmp 0x4197be */ goto L_004197be;
L_004197b8:; BB(0x004197b8);
    /* 004197b8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004197bb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004197be:; BB(0x004197be);
    /* 004197be: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004197c1: mov esp, ebp */ r_esp = r_ebp;
    /* 004197c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004197c4: ret 0xc */ FN_RET(0x00419780); r_esp += 16; return;
}

void f_004197d0(void) /* sub_4197D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004197d0);
    /* 004197d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004197d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004197d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004197d6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004197d9: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004197dd: jne 0x41981a */ if (!fZ) goto L_0041981a;
L_004197df:; BB(0x004197df);
    /* 004197df: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004197e3: jne 0x4197ee */ if (!fZ) goto L_004197ee;
L_004197e5:; BB(0x004197e5);
    /* 004197e5: mov dword ptr [ebp + 0xc], 0xffffffff */ W32((u32)(r_ebp+0xcu), 0xffffffffu);
    /* 004197ec: jmp 0x41981a */ goto L_0041981a;
L_004197ee:; BB(0x004197ee);
    /* 004197ee: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004197f2: jne 0x4197fd */ if (!fZ) goto L_004197fd;
L_004197f4:; BB(0x004197f4);
    /* 004197f4: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004197fb: jmp 0x419814 */ goto L_00419814;
L_004197fd:; BB(0x004197fd);
    /* 004197fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419800: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419806: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419809: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 00419811: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_00419814:; BB(0x00419814);
    /* 00419814: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00419817: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_0041981a:; BB(0x0041981a);
    /* 0041981a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00419821: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 00419825: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00419828: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419829: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041982c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041982d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419830: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x419835u); f_00419530();
    /* 00419835: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00419838: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041983f: jmp 0x41984a */ goto L_0041984a;
L_00419841:; BB(0x00419841);
    /* 00419841: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419844: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419847: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0041984a:; BB(0x0041984a);
    /* 0041984a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041984d: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419850: jge 0x4198c0 */ if ((fS==fO)) goto L_004198c0;
L_00419852:; BB(0x00419852);
    /* 00419852: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 00419856: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419858: je 0x41987e */ if (fZ) goto L_0041987e;
L_0041985a:; BB(0x0041985a);
    /* 0041985a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041985d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041985e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00419861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419862: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419865: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419866: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419869: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x41986eu); f_00419780();
    /* 0041986e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419871: jne 0x41987e */ if (!fZ) goto L_0041987e;
L_00419873:; BB(0x00419873);
    /* 00419873: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419876: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419879: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0041987c: jmp 0x4198be */ goto L_004198be;
L_0041987e:; BB(0x0041987e);
    /* 0041987e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419881: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419882: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00419885: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419886: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419889: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041988a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041988d: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x419892u); f_00419780();
    /* 00419892: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419895: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00419898: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041989b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041989c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0041989f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004198a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004198a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004198a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004198a7: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x4198acu); f_00419780();
    /* 004198ac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004198af: jne 0x4198be */ if (!fZ) goto L_004198be;
L_004198b1:; BB(0x004198b1);
    /* 004198b1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004198b4: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004198b7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004198ba: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
L_004198be:; BB(0x004198be);
    /* 004198be: jmp 0x419841 */ goto L_00419841;
L_004198c0:; BB(0x004198c0);
    /* 004198c0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004198c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004198c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004198c6: ret 8 */ FN_RET(0x004197d0); r_esp += 12; return;
}

void f_004198d0(void) /* sub_4198D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004198d0);
    /* 004198d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004198d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004198d3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004198d6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004198d9: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004198dd: jne 0x41991a */ if (!fZ) goto L_0041991a;
L_004198df:; BB(0x004198df);
    /* 004198df: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004198e3: jne 0x4198ee */ if (!fZ) goto L_004198ee;
L_004198e5:; BB(0x004198e5);
    /* 004198e5: mov dword ptr [ebp + 0xc], 0xffffffff */ W32((u32)(r_ebp+0xcu), 0xffffffffu);
    /* 004198ec: jmp 0x41991a */ goto L_0041991a;
L_004198ee:; BB(0x004198ee);
    /* 004198ee: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004198f2: jne 0x4198fd */ if (!fZ) goto L_004198fd;
L_004198f4:; BB(0x004198f4);
    /* 004198f4: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004198fb: jmp 0x419914 */ goto L_00419914;
L_004198fd:; BB(0x004198fd);
    /* 004198fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419900: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419906: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419909: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 00419911: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00419914:; BB(0x00419914);
    /* 00419914: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419917: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_0041991a:; BB(0x0041991a);
    /* 0041991a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00419921: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00419924: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419925: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419928: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419929: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041992c: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x419931u); f_00419530();
    /* 00419931: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00419934: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041993b: jmp 0x419946 */ goto L_00419946;
L_0041993d:; BB(0x0041993d);
    /* 0041993d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419940: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419943: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00419946:; BB(0x00419946);
    /* 00419946: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419949: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041994c: jge 0x41996a */ if ((fS==fO)) goto L_0041996a;
L_0041994e:; BB(0x0041994e);
    /* 0041994e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419951: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419952: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00419955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419956: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419959: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041995a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041995d: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x419962u); f_00419780();
    /* 00419962: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419965: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00419968: jmp 0x41993d */ goto L_0041993d;
L_0041996a:; BB(0x0041996a);
    /* 0041996a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041996d: mov esp, ebp */ r_esp = r_ebp;
    /* 0041996f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419970: ret 8 */ FN_RET(0x004198d0); r_esp += 12; return;
}

void f_00419980(void) /* sub_419980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419980);
    /* 00419980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419981: mov ebp, esp */ r_ebp = r_esp;
    /* 00419983: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419986: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00419989: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041998d: jne 0x4199ca */ if (!fZ) goto L_004199ca;
L_0041998f:; BB(0x0041998f);
    /* 0041998f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419993: jne 0x41999e */ if (!fZ) goto L_0041999e;
L_00419995:; BB(0x00419995);
    /* 00419995: mov dword ptr [ebp + 0xc], 0xffffffff */ W32((u32)(r_ebp+0xcu), 0xffffffffu);
    /* 0041999c: jmp 0x4199ca */ goto L_004199ca;
L_0041999e:; BB(0x0041999e);
    /* 0041999e: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004199a2: jne 0x4199ad */ if (!fZ) goto L_004199ad;
L_004199a4:; BB(0x004199a4);
    /* 004199a4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004199ab: jmp 0x4199c4 */ goto L_004199c4;
L_004199ad:; BB(0x004199ad);
    /* 004199ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004199b0: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004199b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004199b9: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 004199c1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_004199c4:; BB(0x004199c4);
    /* 004199c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004199c7: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_004199ca:; BB(0x004199ca);
    /* 004199ca: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004199cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004199ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004199d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004199d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004199d5: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x4199dau); f_004197d0();
    /* 004199da: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004199dd: jle 0x4199f1 */ if ((fZ||fS!=fO)) goto L_004199f1;
L_004199df:; BB(0x004199df);
    /* 004199df: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004199e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004199e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004199e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004199e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004199ea: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x4199efu); f_004198d0();
    /* 004199ef: jmp 0x419a01 */ goto L_00419a01;
L_004199f1:; BB(0x004199f1);
    /* 004199f1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004199f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004199f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004199f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004199f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004199fc: call 0x4197d0 */ r_esp -= 4; W32(r_esp, 0x419a01u); f_004197d0();
L_00419a01:; BB(0x00419a01);
    /* 00419a01: mov esp, ebp */ r_esp = r_ebp;
    /* 00419a03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419a04: ret 8 */ FN_RET(0x00419980); r_esp += 12; return;
}

void f_00419a10(void) /* sub_419A10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419a10);
    /* 00419a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00419a13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419a16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419a19: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a1d: jne 0x419a28 */ if (!fZ) goto L_00419a28;
L_00419a1f:; BB(0x00419a1f);
    /* 00419a1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00419a26: jmp 0x419a54 */ goto L_00419a54;
L_00419a28:; BB(0x00419a28);
    /* 00419a28: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a2c: jne 0x419a37 */ if (!fZ) goto L_00419a37;
L_00419a2e:; BB(0x00419a2e);
    /* 00419a2e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00419a35: jmp 0x419a4e */ goto L_00419a4e;
L_00419a37:; BB(0x00419a37);
    /* 00419a37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00419a3a: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419a40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419a43: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 00419a4b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00419a4e:; BB(0x00419a4e);
    /* 00419a4e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419a51: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00419a54:; BB(0x00419a54);
    /* 00419a54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419a57: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419a5d: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419a60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419a63: mov byte ptr [edx + ecx + 0x114], 1 */ W8((u32)(r_edx+r_ecx+0x114u), 0x1u);
L_00419a6b:; BB(0x00419a6b);
    /* 00419a6b: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419a6f: jle 0x419ab5 */ if ((fZ||fS!=fO)) goto L_00419ab5;
L_00419a71:; BB(0x00419a71);
    /* 00419a71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419a74: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00419a77: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00419a7a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419a7d: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419a83: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419a86: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419a89: cmp byte ptr [edx + ecx + 0x114], 0 */ {  u32 a = R8((u32)(r_edx+r_ecx+0x114u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00419a91: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00419a94: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00419a97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419a99: jne 0x419ab3 */ if (!fZ) goto L_00419ab3;
L_00419a9b:; BB(0x00419a9b);
    /* 00419a9b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419a9e: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419aa4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419aa7: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 00419aaa: mov byte ptr [eax + edx + 0x119], cl */ W8((u32)(r_eax+r_edx+0x119u), (u8)r_ecx);
    /* 00419ab1: jmp 0x419ac9 */ goto L_00419ac9;
L_00419ab3:; BB(0x00419ab3);
    /* 00419ab3: jmp 0x419a6b */ goto L_00419a6b;
L_00419ab5:; BB(0x00419ab5);
    /* 00419ab5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419ab8: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419abe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419ac1: mov byte ptr [eax + edx + 0x119], 0xff */ W8((u32)(r_eax+r_edx+0x119u), 0xffu);
L_00419ac9:; BB(0x00419ac9);
    /* 00419ac9: mov esp, ebp */ r_esp = r_ebp;
    /* 00419acb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419acc: ret 4 */ FN_RET(0x00419a10); r_esp += 8; return;
}

void f_00419ad0(void) /* sub_419AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419ad0);
    /* 00419ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00419ad3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419ad6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00419ad9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00419adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419add: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00419ae0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419ae1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419ae4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419ae5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419ae8: call 0x419780 */ r_esp -= 4; W32(r_esp, 0x419aedu); f_00419780();
    /* 00419aed: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00419af0: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419af4: jne 0x419afd */ if (!fZ) goto L_00419afd;
L_00419af6:; BB(0x00419af6);
    /* 00419af6: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
L_00419afd:; BB(0x00419afd);
    /* 00419afd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b00: mov ecx, dword ptr [eax + 0x4dc] */ r_ecx = R32((u32)(r_eax+0x4dcu));
    /* 00419b06: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419b09: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b0c: mov dword ptr [edx + 0x4dc], ecx */ W32((u32)(r_edx+0x4dcu), r_ecx);
    /* 00419b12: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419b16: jge 0x419b2d */ if ((fS==fO)) goto L_00419b2d;
L_00419b18:; BB(0x00419b18);
    /* 00419b18: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b1b: mov ecx, dword ptr [eax + 0x4e4] */ r_ecx = R32((u32)(r_eax+0x4e4u));
    /* 00419b21: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419b24: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b27: mov dword ptr [edx + 0x4e4], ecx */ W32((u32)(r_edx+0x4e4u), r_ecx);
L_00419b2d:; BB(0x00419b2d);
    /* 00419b2d: cmp dword ptr [ebp - 4], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419b31: jle 0x419b48 */ if ((fZ||fS!=fO)) goto L_00419b48;
L_00419b33:; BB(0x00419b33);
    /* 00419b33: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b36: mov ecx, dword ptr [eax + 0x4e4] */ r_ecx = R32((u32)(r_eax+0x4e4u));
    /* 00419b3c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00419b3f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b42: mov dword ptr [edx + 0x4e4], ecx */ W32((u32)(r_edx+0x4e4u), r_ecx);
L_00419b48:; BB(0x00419b48);
    /* 00419b48: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419b4c: jne 0x419b63 */ if (!fZ) goto L_00419b63;
L_00419b4e:; BB(0x00419b4e);
    /* 00419b4e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b51: mov ecx, dword ptr [eax + 0x4e8] */ r_ecx = R32((u32)(r_eax+0x4e8u));
    /* 00419b57: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00419b5a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b5d: mov dword ptr [edx + 0x4e8], ecx */ W32((u32)(r_edx+0x4e8u), r_ecx);
L_00419b63:; BB(0x00419b63);
    /* 00419b63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b66: call 0x419c90 */ r_esp -= 4; W32(r_esp, 0x419b6bu); f_00419c90();
    /* 00419b6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b6e: mov dword ptr [ecx + 0x4e0], eax */ W32((u32)(r_ecx+0x4e0u), r_eax);
    /* 00419b74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00419b76: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00419b79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419b7a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00419b7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419b7e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419b81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419b82: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00419b85: call 0x419420 */ r_esp -= 4; W32(r_esp, 0x419b8au); f_00419420();
    /* 00419b8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00419b8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419b8d: ret 0xc */ FN_RET(0x00419ad0); r_esp += 16; return;
}

void f_00419c90(void) /* sub_419C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419c90);
    /* 00419c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00419c93: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419c96: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00419c99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419c9c: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x419ca1u); f_00418700();
    /* 00419ca1: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419ca4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419ca7: cmp dword ptr [ecx + 0x4dc], eax */ {  u32 a = R32((u32)(r_ecx+0x4dcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419cad: jl 0x419cb3 */ if ((fS!=fO)) goto L_00419cb3;
L_00419caf:; BB(0x00419caf);
    /* 00419caf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419cb1: jmp 0x419d2b */ goto L_00419d2b;
L_00419cb3:; BB(0x00419cb3);
    /* 00419cb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419cb6: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x419cbbu); f_00418700();
    /* 00419cbb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00419cbe: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 00419cc1: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00419cc3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419cc6: fild dword ptr [edx + 0x4dc] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4dcu)));
    /* 00419ccc: fdiv qword ptr [0x6b4b18] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b18u));
    /* 00419cd2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00419cd4: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00419cd7: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 00419cdd: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 00419ce0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00419ce2: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00419ce5: jne 0x419cf0 */ if (!fZ) goto L_00419cf0;
L_00419ce7:; BB(0x00419ce7);
    /* 00419ce7: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 00419ced: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
L_00419cf0:; BB(0x00419cf0);
    /* 00419cf0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00419cf3: fild dword ptr [eax + 0x4e4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4e4u)));
    /* 00419cf9: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 00419cfc: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00419cff: fldz  */ FPUSH(0.0);
    /* 00419d01: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 00419d04: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00419d06: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00419d09: jne 0x419d1d */ if (!fZ) goto L_00419d1d;
L_00419d0b:; BB(0x00419d0b);
    /* 00419d0b: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00419d0e: fsub qword ptr [0x6b2c38] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c38u));
    /* 00419d14: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x419d19u); f_00686cc0();
    /* 00419d19: jmp 0x419d2b */ goto L_00419d2b;
L_00419d1d:; BB(0x00419d1d);
    /* 00419d1d: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00419d20: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00419d26: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x419d2bu); f_00686cc0();
L_00419d2b:; BB(0x00419d2b);
    /* 00419d2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00419d2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419d2e: ret  */ FN_RET(0x00419c90); r_esp += 4; return;
}

void f_00419d30(void) /* sub_419D30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419d30);
    /* 00419d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00419d33: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419d36: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00419d39: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00419d3c: cmp dword ptr [eax + 0x4dc], 0 */ {  u32 a = R32((u32)(r_eax+0x4dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419d43: jne 0x419d49 */ if (!fZ) goto L_00419d49;
L_00419d45:; BB(0x00419d45);
    /* 00419d45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00419d47: jmp 0x419dbd */ goto L_00419dbd;
L_00419d49:; BB(0x00419d49);
    /* 00419d49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00419d4c: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x419d51u); f_00418700();
    /* 00419d51: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00419d54: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00419d57: sub eax, dword ptr [ecx + 0x4e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4e8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00419d5d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00419d60: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419d64: jg 0x419d6b */ if ((!fZ&&fS==fO)) goto L_00419d6b;
L_00419d66:; BB(0x00419d66);
    /* 00419d66: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00419d69: jmp 0x419dbd */ goto L_00419dbd;
L_00419d6b:; BB(0x00419d6b);
    /* 00419d6b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00419d6e: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x419d73u); f_00418700();
    /* 00419d73: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00419d76: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00419d79: sub eax, dword ptr [edx + 0x4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4dcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00419d7f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00419d82: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 00419d85: fidiv dword ptr [ebp - 4] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xfffffffcu));
    /* 00419d88: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00419d8b: fld qword ptr [0x6b4b28] */ FPUSH(R_F64((u32)(0x6b4b28u)));
    /* 00419d91: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 00419d94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00419d96: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00419d99: jp 0x419da2 */ if (fP) goto L_00419da2;
L_00419d9b:; BB(0x00419d9b);
    /* 00419d9b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00419d9e: jmp 0x419dbd */ goto L_00419dbd;
L_00419da2:; BB(0x00419da2);
    /* 00419da2: fld qword ptr [0x6b4b20] */ FPUSH(R_F64((u32)(0x6b4b20u)));
    /* 00419da8: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 00419dab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00419dad: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00419db0: jne 0x419dbb */ if (!fZ) goto L_00419dbb;
L_00419db2:; BB(0x00419db2);
    /* 00419db2: mov eax, 1 */ r_eax = 0x1u;
    /* 00419db7: jmp 0x419dbd */ goto L_00419dbd;
L_00419dbb:; BB(0x00419dbb);
    /* 00419dbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00419dbd:; BB(0x00419dbd);
    /* 00419dbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00419dbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419dc0: ret  */ FN_RET(0x00419d30); r_esp += 4; return;
}

void f_00419dd0(void) /* sub_419DD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419dd0);
    /* 00419dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00419dd3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419dd6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00419dd9: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00419de0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00419de7: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00419dee: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00419df5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00419dfc: jmp 0x419e07 */ goto L_00419e07;
L_00419dfe:; BB(0x00419dfe);
    /* 00419dfe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419e01: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419e04: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00419e07:; BB(0x00419e07);
    /* 00419e07: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419e0b: jge 0x419e9d */ if ((fS==fO)) goto L_00419e9d;
L_00419e11:; BB(0x00419e11);
    /* 00419e11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419e14: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00419e18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419e19: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x419e1eu); f_005dcb00();
    /* 00419e1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419e21: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00419e24: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00419e27: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x419e2cu); f_0063aac0();
    /* 00419e2c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00419e2e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00419e31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00419e33: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e37: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00419e3a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00419e3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e3f: jne 0x419e98 */ if (!fZ) goto L_00419e98;
L_00419e41:; BB(0x00419e41);
    /* 00419e41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419e44: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00419e48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419e49: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x419e4eu); f_005dcb00();
    /* 00419e4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419e51: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00419e54: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00419e57: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00419e5d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00419e60: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00419e64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e66: jne 0x419e98 */ if (!fZ) goto L_00419e98;
L_00419e68:; BB(0x00419e68);
    /* 00419e68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419e6b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 00419e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419e70: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x419e75u); f_005dcb00();
    /* 00419e75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419e78: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00419e7b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00419e7e: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 00419e84: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00419e87: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 00419e8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419e8d: jne 0x419e98 */ if (!fZ) goto L_00419e98;
L_00419e8f:; BB(0x00419e8f);
    /* 00419e8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419e92: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00419e96: jmp 0x419ea0 */ goto L_00419ea0;
L_00419e98:; BB(0x00419e98);
    /* 00419e98: jmp 0x419dfe */ goto L_00419dfe;
L_00419e9d:; BB(0x00419e9d);
    /* 00419e9d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00419ea0:; BB(0x00419ea0);
    /* 00419ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00419ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419ea3: ret  */ FN_RET(0x00419dd0); r_esp += 4; return;
}

void f_00419eb0(void) /* sub_419EB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419eb0);
    /* 00419eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00419eb3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419eb6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00419eb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419ebb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00419ebd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x419ec2u); f_0064c8a0();
    /* 00419ec2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419ec5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00419ec8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00419ecb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00419ece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419ecf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00419ed2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419ed3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419ed6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419ed7: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00419eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00419edb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419ede: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00419ee1: mov ecx, dword ptr [edx + ecx*4 + 0x468] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x468u));
    /* 00419ee8: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x419eedu); f_005cb880();
    /* 00419eed: mov ecx, eax */ r_ecx = r_eax;
    /* 00419eef: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x419ef4u); f_0064c6e0();
    /* 00419ef4: mov esp, ebp */ r_esp = r_ebp;
    /* 00419ef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00419ef7: ret 4 */ FN_RET(0x00419eb0); r_esp += 8; return;
}

void f_00419f00(void) /* sub_419F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00419f00);
    /* 00419f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00419f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00419f03: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00419f06: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00419f09: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00419f10: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00419f17: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00419f1e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00419f25: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00419f2b: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x419f30u); f_005da830();
    /* 00419f30: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00419f33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419f35: jne 0x419f51 */ if (!fZ) goto L_00419f51;
L_00419f37:; BB(0x00419f37);
    /* 00419f37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00419f3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419f3b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x419f40u); f_005dcb00();
    /* 00419f40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419f43: mov ecx, eax */ r_ecx = r_eax;
    /* 00419f45: call 0x5d5840 */ r_esp -= 4; W32(r_esp, 0x419f4au); f_005d5840();
    /* 00419f4a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00419f4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419f4f: je 0x419f58 */ if (fZ) goto L_00419f58;
L_00419f51:; BB(0x00419f51);
    /* 00419f51: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00419f53: jmp 0x41a06e */ goto L_0041a06e;
L_00419f58:; BB(0x00419f58);
    /* 00419f58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00419f5f: jmp 0x419f6a */ goto L_00419f6a;
L_00419f61:; BB(0x00419f61);
    /* 00419f61: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419f64: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419f67: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00419f6a:; BB(0x00419f6a);
    /* 00419f6a: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00419f6e: jge 0x41a06c */ if ((fS==fO)) goto L_0041a06c;
L_00419f74:; BB(0x00419f74);
    /* 00419f74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419f77: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00419f7b: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419f7e: jne 0x419f85 */ if (!fZ) goto L_00419f85;
L_00419f80:; BB(0x00419f80);
    /* 00419f80: jmp 0x41a06c */ goto L_0041a06c;
L_00419f85:; BB(0x00419f85);
    /* 00419f85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419f88: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00419f8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419f8d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x419f92u); f_005dcb00();
    /* 00419f92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419f95: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00419f98: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00419f9b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x419fa0u); f_0063aac0();
    /* 00419fa0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00419fa2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00419fa5: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419fa9: je 0x419fc7 */ if (fZ) goto L_00419fc7;
L_00419fab:; BB(0x00419fab);
    /* 00419fab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00419fae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x419fb3u); f_0063aac0();
    /* 00419fb3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00419fb5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00419fb8: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419fbc: je 0x419fc7 */ if (fZ) goto L_00419fc7;
L_00419fbe:; BB(0x00419fbe);
    /* 00419fbe: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00419fc5: jmp 0x419fce */ goto L_00419fce;
L_00419fc7:; BB(0x00419fc7);
    /* 00419fc7: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_00419fce:; BB(0x00419fce);
    /* 00419fce: movzx ecx, byte ptr [ebp - 0x3c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc4u));
    /* 00419fd2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00419fd4: je 0x41a067 */ if (fZ) goto L_0041a067;
L_00419fda:; BB(0x00419fda);
    /* 00419fda: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00419fdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00419fde: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x419fe3u); f_005dcb00();
    /* 00419fe3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00419fe6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00419fe9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00419fec: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x419ff1u); f_0063aac0();
    /* 00419ff1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00419ff4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00419ff7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00419ffa: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00419ffe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00419fff: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a004u); f_005dcb00();
    /* 0041a004: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a007: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0041a00a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041a00d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41a012u); f_0063aac0();
    /* 0041a012: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041a015: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0041a018: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041a01b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a01c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0041a01f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041a020: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x41a025u); f_00686ec0();
    /* 0041a025: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041a02a: jne 0x41a067 */ if (!fZ) goto L_0041a067;
L_0041a02c:; BB(0x0041a02c);
    /* 0041a02c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041a02f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041a030: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41a035u); f_005dcb00();
    /* 0041a035: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041a038: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0041a03b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0041a03e: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
    /* 0041a045: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a047: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041a049: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0041a04e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0041a051: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0041a057: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0041a05a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041a05c: mov ecx, eax */ r_ecx = r_eax;
    /* 0041a05e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041a061: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41a063u); call_ind(t); }
    /* 0041a063: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0041a065: jmp 0x41a06e */ goto L_0041a06e;
L_0041a067:; BB(0x0041a067);
    /* 0041a067: jmp 0x419f61 */ goto L_00419f61;
L_0041a06c:; BB(0x0041a06c);
    /* 0041a06c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0041a06e:; BB(0x0041a06e);
    /* 0041a06e: mov esp, ebp */ r_esp = r_ebp;
    /* 0041a070: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041a071: ret 4 */ FN_RET(0x00419f00); r_esp += 8; return;
}

