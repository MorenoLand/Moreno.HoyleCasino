#include "protos.h"

void f_0054a050(void) /* sub_54A050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a050);
    /* 0054a050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a051: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a053: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a056: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054a059: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a05c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a05d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a060: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x54a065u); f_00548f80();
    /* 0054a065: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a068: je 0x54a06e */ if (fZ) goto L_0054a06e;
L_0054a06a:; BB(0x0054a06a);
    /* 0054a06a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054a06c: jmp 0x54a0ad */ goto L_0054a0ad;
L_0054a06e:; BB(0x0054a06e);
    /* 0054a06e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054a071: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054a074: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a077: mov ax, word ptr [edx + ecx + 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x28u))) & 0xffffu);
    /* 0054a07c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a07d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54a082u); f_00641280();
    /* 0054a082: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a085: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054a088: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054a08b: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054a08e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a091: mov ax, word ptr [edx + ecx + 0x2a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x2au))) & 0xffffu);
    /* 0054a096: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a097: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54a09cu); f_00641280();
    /* 0054a09c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a09f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054a0a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a0a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054a0a7: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a0aa: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_0054a0ad:; BB(0x0054a0ad);
    /* 0054a0ad: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a0af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a0b0: ret 4 */ FN_RET(0x0054a050); r_esp += 8; return;
}

void f_0054a0c0(void) /* sub_54A0C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a0c0);
    /* 0054a0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a0c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a0c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054a0c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a0cc: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054a0cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a0d2: lea edx, [ecx + eax + 0x28] */ r_edx = (u32)(r_ecx+r_eax+0x28u);
    /* 0054a0d6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054a0d9: mov cx, word ptr [edx + eax*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 0054a0dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a0de: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54a0e3u); f_00641280();
    /* 0054a0e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a0e6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054a0e9: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a0ed: jle 0x54a0f8 */ if ((fZ||fS!=fO)) goto L_0054a0f8;
L_0054a0ef:; BB(0x0054a0ef);
    /* 0054a0ef: mov dword ptr [ebp - 0xc], 0xa */ W32((u32)(r_ebp+0xfffffff4u), 0xau);
    /* 0054a0f6: jmp 0x54a0fe */ goto L_0054a0fe;
L_0054a0f8:; BB(0x0054a0f8);
    /* 0054a0f8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a0fb: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0054a0fe:; BB(0x0054a0fe);
    /* 0054a0fe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a101: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a103: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a104: ret 8 */ FN_RET(0x0054a0c0); r_esp += 12; return;
}

void f_0054a110(void) /* sub_54A110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a110);
    /* 0054a110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a111: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a116: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a119: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a11c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054a11f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a122: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a125: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054a128: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054a12c: ja 0x54a154 */ if ((!fC&&!fZ)) goto L_0054a154;
L_0054a12e:; BB(0x0054a12e);
    /* 0054a12e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a131: jmp dword ptr [edx*4 + 0x54a160] */ { u32 t = R32((u32)(r_edx*4+0x54a160u)); switch (t) { case 0x54a14du: goto L_0054a14d; case 0x54a138u: goto L_0054a138; case 0x54a154u: goto L_0054a154; case 0x54a13fu: goto L_0054a13f; case 0x54a146u: goto L_0054a146; default: UNSUP(0x0054a131, "jump table entry is not a known target"); } }
L_0054a138:; BB(0x0054a138);
    /* 0054a138: mov eax, 0x311734 */ r_eax = 0x311734u;
    /* 0054a13d: jmp 0x54a159 */ goto L_0054a159;
L_0054a13f:; BB(0x0054a13f);
    /* 0054a13f: mov eax, 0x311736 */ r_eax = 0x311736u;
    /* 0054a144: jmp 0x54a159 */ goto L_0054a159;
L_0054a146:; BB(0x0054a146);
    /* 0054a146: mov eax, 0x311738 */ r_eax = 0x311738u;
    /* 0054a14b: jmp 0x54a159 */ goto L_0054a159;
L_0054a14d:; BB(0x0054a14d);
    /* 0054a14d: mov eax, 0x311737 */ r_eax = 0x311737u;
    /* 0054a152: jmp 0x54a159 */ goto L_0054a159;
L_0054a154:; BB(0x0054a154);
    /* 0054a154: mov eax, 0x311735 */ r_eax = 0x311735u;
L_0054a159:; BB(0x0054a159);
    /* 0054a159: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a15b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a15c: ret 4 */ FN_RET(0x0054a110); r_esp += 8; return;
}

void f_0054a310(void) /* sub_54A310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a310);
    /* 0054a310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a311: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a314: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054a315: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a318: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a31a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a31d: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x54a322u); f_0054a740();
    /* 0054a322: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054a325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a327: je 0x54a330 */ if (fZ) goto L_0054a330;
L_0054a329:; BB(0x0054a329);
    /* 0054a329: mov eax, 5 */ r_eax = 0x5u;
    /* 0054a32e: jmp 0x54a3af */ goto L_0054a3af;
L_0054a330:; BB(0x0054a330);
    /* 0054a330: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a332: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a335: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x54a33au); f_0054a740();
    /* 0054a33a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054a33d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a33f: je 0x54a348 */ if (fZ) goto L_0054a348;
L_0054a341:; BB(0x0054a341);
    /* 0054a341: mov eax, 2 */ r_eax = 0x2u;
    /* 0054a346: jmp 0x54a3af */ goto L_0054a3af;
L_0054a348:; BB(0x0054a348);
    /* 0054a348: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a34a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a34d: call 0x54a920 */ r_esp -= 4; W32(r_esp, 0x54a352u); f_0054a920();
    /* 0054a352: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054a355: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a357: je 0x54a360 */ if (fZ) goto L_0054a360;
L_0054a359:; BB(0x0054a359);
    /* 0054a359: mov eax, 6 */ r_eax = 0x6u;
    /* 0054a35e: jmp 0x54a3af */ goto L_0054a3af;
L_0054a360:; BB(0x0054a360);
    /* 0054a360: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a362: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a364: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a367: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a36cu); f_00549e80();
    /* 0054a36c: mov esi, eax */ r_esi = r_eax;
    /* 0054a36e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a370: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a372: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a375: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a37au); f_00549e80();
    /* 0054a37a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a37c: jne 0x54a385 */ if (!fZ) goto L_0054a385;
L_0054a37e:; BB(0x0054a37e);
    /* 0054a37e: mov eax, 4 */ r_eax = 0x4u;
    /* 0054a383: jmp 0x54a3af */ goto L_0054a3af;
L_0054a385:; BB(0x0054a385);
    /* 0054a385: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a387: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a389: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a38c: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a391u); f_00549e80();
    /* 0054a391: mov esi, eax */ r_esi = r_eax;
    /* 0054a393: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a395: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a39a: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a39fu); f_00549e80();
    /* 0054a39f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a3a1: jge 0x54a3aa */ if ((fS==fO)) goto L_0054a3aa;
L_0054a3a3:; BB(0x0054a3a3);
    /* 0054a3a3: mov eax, 2 */ r_eax = 0x2u;
    /* 0054a3a8: jmp 0x54a3af */ goto L_0054a3af;
L_0054a3aa:; BB(0x0054a3aa);
    /* 0054a3aa: mov eax, 3 */ r_eax = 0x3u;
L_0054a3af:; BB(0x0054a3af);
    /* 0054a3af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054a3b0: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a3b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a3b3: ret  */ FN_RET(0x0054a310); r_esp += 4; return;
}

void f_0054a3c0(void) /* sub_54A3C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a3c0);
    /* 0054a3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a3c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a3c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054a3c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a3cc: call 0x54a610 */ r_esp -= 4; W32(r_esp, 0x54a3d1u); f_0054a610();
    /* 0054a3d1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054a3d4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a3d7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0054a3da: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054a3dd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a3e0: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054a3e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a3e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a3e7: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x54a3ecu); f_005d0a20();
    /* 0054a3ec: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a3ef: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0054a3f6: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054a3fc: call 0x5452a0 */ r_esp -= 4; W32(r_esp, 0x54a401u); f_005452a0();
    /* 0054a401: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a404: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0054a407: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0054a40a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a40d: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x54a412u); f_005d0aa0();
    /* 0054a412: imul eax, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054a416: cmp eax, 0x5f5e100 */ {  u32 a = r_eax; u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a41b: jle 0x54a459 */ if ((fZ||fS!=fO)) goto L_0054a459;
L_0054a41d:; BB(0x0054a41d);
    /* 0054a41d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a420: call 0x5d13e0 */ r_esp -= 4; W32(r_esp, 0x54a425u); f_005d13e0();
    /* 0054a425: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a427: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a428: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0054a42e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054a431: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a432: fld1  */ FPUSH(1.0);
    /* 0054a434: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054a437: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a439: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a43b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a43d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a43f: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a444: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0054a449: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0054a44b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0054a451: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0054a457: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54a459u); call_ind(t); }
L_0054a459:; BB(0x0054a459);
    /* 0054a459: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054a45f: call 0x544d20 */ r_esp -= 4; W32(r_esp, 0x54a464u); f_00544d20();
    /* 0054a464: mov ecx, dword ptr [0x793408] */ r_ecx = R32((u32)(0x793408u));
    /* 0054a46a: call 0x5451d0 */ r_esp -= 4; W32(r_esp, 0x54a46fu); f_005451d0();
    /* 0054a46f: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a472: ret  */ FN_RET(0x0054a3c0); r_esp += 4; return;
}

void f_0054a480(void) /* sub_54A480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a480);
    /* 0054a480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a481: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a483: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a486: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0054a489: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a48b: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0054a48e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a48f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054a492: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x54a497u); f_005d0c30();
    /* 0054a497: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054a499: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054a49c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054a49f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0054a4a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a4a5: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0054a4aa: jns 0x54a4b1 */ if (!fS) goto L_0054a4b1;
L_0054a4ac:; BB(0x0054a4ac);
    /* 0054a4ac: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0054a4ad: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054a4b0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0054a4b1:; BB(0x0054a4b1);
    /* 0054a4b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a4b3: je 0x54a4be */ if (fZ) goto L_0054a4be;
L_0054a4b5:; BB(0x0054a4b5);
    /* 0054a4b5: mov dword ptr [ebp - 4], 0x32 */ W32((u32)(r_ebp+0xfffffffcu), 0x32u);
    /* 0054a4bc: jmp 0x54a4c5 */ goto L_0054a4c5;
L_0054a4be:; BB(0x0054a4be);
    /* 0054a4be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0054a4c5:; BB(0x0054a4c5);
    /* 0054a4c5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a4c8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0054a4c9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0054a4cb: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0054a4cd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054a4d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a4d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a4d4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a4d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a4d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054a4db: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x54a4e0u); f_005d1420();
    /* 0054a4e0: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a4e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a4e3: ret  */ FN_RET(0x0054a480); r_esp += 4; return;
}

void f_0054a4f0(void) /* sub_54A4F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a4f0);
    /* 0054a4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a4f3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a4f6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0054a4f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a4fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a4fd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054a500: call 0x54a180 */ r_esp -= 4; W32(r_esp, 0x54a505u); f_0054a180();
    /* 0054a505: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054a508: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0054a50f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0054a516: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054a519: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a51a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054a51d: call 0x54a660 */ r_esp -= 4; W32(r_esp, 0x54a522u); f_0054a660();
    /* 0054a522: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0054a525: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 0054a529: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054a52c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054a52f: mov ecx, dword ptr [eax + edx*4 + 0x50] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x50u));
    /* 0054a533: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054a536: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a53a: jne 0x54a544 */ if (!fZ) goto L_0054a544;
L_0054a53c:; BB(0x0054a53c);
    /* 0054a53c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a53f: jmp 0x54a5fd */ goto L_0054a5fd;
L_0054a544:; BB(0x0054a544);
    /* 0054a544: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a548: je 0x54a559 */ if (fZ) goto L_0054a559;
L_0054a54a:; BB(0x0054a54a);
    /* 0054a54a: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a54e: je 0x54a559 */ if (fZ) goto L_0054a559;
L_0054a550:; BB(0x0054a550);
    /* 0054a550: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0054a557: jmp 0x54a560 */ goto L_0054a560;
L_0054a559:; BB(0x0054a559);
    /* 0054a559: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_0054a560:; BB(0x0054a560);
    /* 0054a560: mov dl, byte ptr [ebp - 0x30] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd0u))) & 0xffu);
    /* 0054a563: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 0054a566: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0054a56a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a56c: jne 0x54a5ab */ if (!fZ) goto L_0054a5ab;
L_0054a56e:; BB(0x0054a56e);
    /* 0054a56e: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 0054a571: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0054a574: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x54a579u); f_00686cc0();
    /* 0054a579: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054a57c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0054a57f: fld qword ptr [0x6c70b8] */ FPUSH(R_F64((u32)(0x6c70b8u)));
    /* 0054a585: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 0054a588: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054a58a: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0054a58d: jp 0x54a5ab */ if (fP) goto L_0054a5ab;
L_0054a58f:; BB(0x0054a58f);
    /* 0054a58f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a592: and ecx, 0x80000001 */ {  u32 a = r_ecx; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 0054a598: jns 0x54a59f */ if (!fS) goto L_0054a59f;
L_0054a59a:; BB(0x0054a59a);
    /* 0054a59a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a59b: or ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a59e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0054a59f:; BB(0x0054a59f);
    /* 0054a59f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a5a1: je 0x54a5ab */ if (fZ) goto L_0054a5ab;
L_0054a5a3:; BB(0x0054a5a3);
    /* 0054a5a3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054a5a6: call 0x54a480 */ r_esp -= 4; W32(r_esp, 0x54a5abu); f_0054a480();
L_0054a5ab:; BB(0x0054a5ab);
    /* 0054a5ab: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a5af: jne 0x54a5fa */ if (!fZ) goto L_0054a5fa;
L_0054a5b1:; BB(0x0054a5b1);
    /* 0054a5b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a5b3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054a5b6: call 0x54a6c0 */ r_esp -= 4; W32(r_esp, 0x54a5bbu); f_0054a6c0();
    /* 0054a5bb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054a5be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a5c0: je 0x54a5fa */ if (fZ) goto L_0054a5fa;
L_0054a5c2:; BB(0x0054a5c2);
    /* 0054a5c2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054a5c5: movzx ecx, byte ptr [eax + 0x25] */ r_ecx = (u32)R8((u32)(r_eax+0x25u));
    /* 0054a5c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a5cb: je 0x54a5fa */ if (fZ) goto L_0054a5fa;
L_0054a5cd:; BB(0x0054a5cd);
    /* 0054a5cd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a5d0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0054a5d3: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0054a5d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a5d7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054a5da: call 0x548ef0 */ r_esp -= 4; W32(r_esp, 0x54a5dfu); f_00548ef0();
    /* 0054a5df: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0054a5e1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054a5e4: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0054a5e7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0054a5ea: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054a5ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a5ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a5f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a5f2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0054a5f5: call 0x5d1420 */ r_esp -= 4; W32(r_esp, 0x54a5fau); f_005d1420();
L_0054a5fa:; BB(0x0054a5fa);
    /* 0054a5fa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_0054a5fd:; BB(0x0054a5fd);
    /* 0054a5fd: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a5ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a600: ret 4 */ FN_RET(0x0054a4f0); r_esp += 8; return;
}

void f_0054a610(void) /* sub_54A610 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a610);
    /* 0054a610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a611: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a613: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a616: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054a619: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054a620: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054a627: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a629: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a62c: call 0x54a4f0 */ r_esp -= 4; W32(r_esp, 0x54a631u); f_0054a4f0();
    /* 0054a631: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054a634: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a637: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 0054a63b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a63d: je 0x54a64c */ if (fZ) goto L_0054a64c;
L_0054a63f:; BB(0x0054a63f);
    /* 0054a63f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a641: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a644: call 0x54a4f0 */ r_esp -= 4; W32(r_esp, 0x54a649u); f_0054a4f0();
    /* 0054a649: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0054a64c:; BB(0x0054a64c);
    /* 0054a64c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a64f: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054a652: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a655: ret  */ FN_RET(0x0054a610); r_esp += 4; return;
}

void f_0054a660(void) /* sub_54A660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a660);
    /* 0054a660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a661: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a663: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a666: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a669: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a66c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054a66f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a672: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a675: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054a678: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054a67c: ja 0x54a69c */ if ((!fC&&!fZ)) goto L_0054a69c;
L_0054a67e:; BB(0x0054a67e);
    /* 0054a67e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a681: jmp dword ptr [edx*4 + 0x54a6a4] */ { u32 t = R32((u32)(r_edx*4+0x54a6a4u)); switch (t) { case 0x54a688u: goto L_0054a688; case 0x54a698u: goto L_0054a698; case 0x54a69cu: goto L_0054a69c; case 0x54a690u: goto L_0054a690; default: UNSUP(0x0054a681, "jump table entry is not a known target"); } }
L_0054a688:; BB(0x0054a688);
    /* 0054a688: fld qword ptr [0x6c70b8] */ FPUSH(R_F64((u32)(0x6c70b8u)));
    /* 0054a68e: jmp 0x54a69e */ goto L_0054a69e;
L_0054a690:; BB(0x0054a690);
    /* 0054a690: fld qword ptr [0x6b3740] */ FPUSH(R_F64((u32)(0x6b3740u)));
    /* 0054a696: jmp 0x54a69e */ goto L_0054a69e;
L_0054a698:; BB(0x0054a698);
    /* 0054a698: fld1  */ FPUSH(1.0);
    /* 0054a69a: jmp 0x54a69e */ goto L_0054a69e;
L_0054a69c:; BB(0x0054a69c);
    /* 0054a69c: fldz  */ FPUSH(0.0);
L_0054a69e:; BB(0x0054a69e);
    /* 0054a69e: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a6a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a6a1: ret 4 */ FN_RET(0x0054a660); r_esp += 8; return;
}

void f_0054a6c0(void) /* sub_54A6C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a6c0);
    /* 0054a6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a6c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a6c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054a6c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a6cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a6ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a6cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a6d2: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a6d7u); f_00549e80();
    /* 0054a6d7: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a6da: jne 0x54a6f6 */ if (!fZ) goto L_0054a6f6;
L_0054a6dc:; BB(0x0054a6dc);
    /* 0054a6dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054a6df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a6e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a6e3: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x54a6e8u); f_00548f80();
    /* 0054a6e8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a6eb: jne 0x54a6f6 */ if (!fZ) goto L_0054a6f6;
L_0054a6ed:; BB(0x0054a6ed);
    /* 0054a6ed: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0054a6f4: jmp 0x54a6fd */ goto L_0054a6fd;
L_0054a6f6:; BB(0x0054a6f6);
    /* 0054a6f6: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0054a6fd:; BB(0x0054a6fd);
    /* 0054a6fd: mov dl, byte ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0054a700: mov byte ptr [ebp - 1], dl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_edx);
    /* 0054a703: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a707: je 0x54a70f */ if (fZ) goto L_0054a70f;
L_0054a709:; BB(0x0054a709);
    /* 0054a709: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a70d: jne 0x54a728 */ if (!fZ) goto L_0054a728;
L_0054a70f:; BB(0x0054a70f);
    /* 0054a70f: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054a713: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a715: je 0x54a726 */ if (fZ) goto L_0054a726;
L_0054a717:; BB(0x0054a717);
    /* 0054a717: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a71a: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 0054a71e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a720: jne 0x54a726 */ if (!fZ) goto L_0054a726;
L_0054a722:; BB(0x0054a722);
    /* 0054a722: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054a724: jmp 0x54a736 */ goto L_0054a736;
L_0054a726:; BB(0x0054a726);
    /* 0054a726: jmp 0x54a734 */ goto L_0054a734;
L_0054a728:; BB(0x0054a728);
    /* 0054a728: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054a72c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a72e: je 0x54a734 */ if (fZ) goto L_0054a734;
L_0054a730:; BB(0x0054a730);
    /* 0054a730: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054a732: jmp 0x54a736 */ goto L_0054a736;
L_0054a734:; BB(0x0054a734);
    /* 0054a734: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054a736:; BB(0x0054a736);
    /* 0054a736: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a738: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a739: ret 4 */ FN_RET(0x0054a6c0); r_esp += 8; return;
}

void f_0054a740(void) /* sub_54A740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a740);
    /* 0054a740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a741: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a747: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a749: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a74c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a74d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a750: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a755u); f_00549e80();
    /* 0054a755: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a758: jg 0x54a75e */ if ((!fZ&&fS==fO)) goto L_0054a75e;
L_0054a75a:; BB(0x0054a75a);
    /* 0054a75a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054a75c: jmp 0x54a760 */ goto L_0054a760;
L_0054a75e:; BB(0x0054a75e);
    /* 0054a75e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0054a760:; BB(0x0054a760);
    /* 0054a760: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a763: ret 4 */ FN_RET(0x0054a740); r_esp += 8; return;
}

void f_0054a770(void) /* sub_54A770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a770);
    /* 0054a770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a771: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a774: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a777: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a779: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a77c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a77d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a780: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a785u); f_00549e80();
    /* 0054a785: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a787: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a78a: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0054a78d: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0054a78f: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a792: ret 4 */ FN_RET(0x0054a770); r_esp += 8; return;
}

void f_0054a7a0(void) /* sub_54A7A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a7a0);
    /* 0054a7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a7a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a7ac: call 0x54a770 */ r_esp -= 4; W32(r_esp, 0x54a7b1u); f_0054a770();
    /* 0054a7b1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054a7b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a7b6: je 0x54a7bc */ if (fZ) goto L_0054a7bc;
L_0054a7b8:; BB(0x0054a7b8);
    /* 0054a7b8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054a7ba: jmp 0x54a7d3 */ goto L_0054a7d3;
L_0054a7bc:; BB(0x0054a7bc);
    /* 0054a7bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054a7bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a7c3: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x54a7c8u); f_00548f80();
    /* 0054a7c8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a7cb: jne 0x54a7d1 */ if (!fZ) goto L_0054a7d1;
L_0054a7cd:; BB(0x0054a7cd);
    /* 0054a7cd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054a7cf: jmp 0x54a7d3 */ goto L_0054a7d3;
L_0054a7d1:; BB(0x0054a7d1);
    /* 0054a7d1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054a7d3:; BB(0x0054a7d3);
    /* 0054a7d3: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a7d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a7d6: ret 4 */ FN_RET(0x0054a7a0); r_esp += 8; return;
}

void f_0054a7e0(void) /* sub_54A7E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a7e0);
    /* 0054a7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a7e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a7e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054a7e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a7ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a7f2: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a7f7u); f_00549e80();
    /* 0054a7f7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0054a7fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a801: call 0x549e80 */ r_esp -= 4; W32(r_esp, 0x54a806u); f_00549e80();
    /* 0054a806: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054a809: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a80c: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a80f: jne 0x54a815 */ if (!fZ) goto L_0054a815;
L_0054a811:; BB(0x0054a811);
    /* 0054a811: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054a813: jmp 0x54a817 */ goto L_0054a817;
L_0054a815:; BB(0x0054a815);
    /* 0054a815: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054a817:; BB(0x0054a817);
    /* 0054a817: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a819: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a81a: ret 4 */ FN_RET(0x0054a7e0); r_esp += 8; return;
}

void f_0054a830(void) /* sub_54A830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a830);
    /* 0054a830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a831: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a833: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a836: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054a837: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054a83a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a83d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0054a840: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a843: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a846: call 0x5d1470 */ r_esp -= 4; W32(r_esp, 0x54a84bu); f_005d1470();
    /* 0054a84b: mov esi, eax */ r_esi = r_eax;
    /* 0054a84d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a850: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x54a855u); f_005d0aa0();
    /* 0054a855: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054a857: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a859: setge dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0054a85c: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 0054a85f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a863: jne 0x54a876 */ if (!fZ) goto L_0054a876;
L_0054a865:; BB(0x0054a865);
    /* 0054a865: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0054a869: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a86b: jne 0x54a876 */ if (!fZ) goto L_0054a876;
L_0054a86d:; BB(0x0054a86d);
    /* 0054a86d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0054a874: jmp 0x54a87d */ goto L_0054a87d;
L_0054a876:; BB(0x0054a876);
    /* 0054a876: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_0054a87d:; BB(0x0054a87d);
    /* 0054a87d: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0054a880: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054a881: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a883: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a884: ret  */ FN_RET(0x0054a830); r_esp += 4; return;
}

void f_0054a890(void) /* sub_54A890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a890);
    /* 0054a890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a891: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a893: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a896: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054a899: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a89c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0054a89f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a8a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054a8a4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a8a8: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0054a8ab: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a8ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a8ae: ret  */ FN_RET(0x0054a890); r_esp += 4; return;
}

void f_0054a8b0(void) /* sub_54A8B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a8b0);
    /* 0054a8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a8b3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a8b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054a8b7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0054a8ba: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a8bd: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0054a8c0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054a8c3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a8c6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0054a8c9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054a8cc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a8cf: call 0x5d1470 */ r_esp -= 4; W32(r_esp, 0x54a8d4u); f_005d1470();
    /* 0054a8d4: mov esi, eax */ r_esi = r_eax;
    /* 0054a8d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054a8d9: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x54a8deu); f_005d0aa0();
    /* 0054a8de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a8e0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a8e2: setge cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0054a8e5: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 0054a8e8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a8ec: jne 0x54a905 */ if (!fZ) goto L_0054a905;
L_0054a8ee:; BB(0x0054a8ee);
    /* 0054a8ee: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a8f2: jne 0x54a905 */ if (!fZ) goto L_0054a905;
L_0054a8f4:; BB(0x0054a8f4);
    /* 0054a8f4: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0054a8f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a8fa: jne 0x54a905 */ if (!fZ) goto L_0054a905;
L_0054a8fc:; BB(0x0054a8fc);
    /* 0054a8fc: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0054a903: jmp 0x54a90c */ goto L_0054a90c;
L_0054a905:; BB(0x0054a905);
    /* 0054a905: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_0054a90c:; BB(0x0054a90c);
    /* 0054a90c: mov al, byte ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 0054a90f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054a910: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a912: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a913: ret  */ FN_RET(0x0054a8b0); r_esp += 4; return;
}

void f_0054a920(void) /* sub_54A920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a920);
    /* 0054a920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a921: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a923: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0054a929: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0054a92e: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0054a934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a937: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a93b: je 0x54a941 */ if (fZ) goto L_0054a941;
L_0054a93d:; BB(0x0054a93d);
    /* 0054a93d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054a93f: jmp 0x54a988 */ goto L_0054a988;
L_0054a941:; BB(0x0054a941);
    /* 0054a941: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054a944: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a945: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a948: call 0x54a990 */ r_esp -= 4; W32(r_esp, 0x54a94du); f_0054a990();
    /* 0054a94d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054a950: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a952: je 0x54a958 */ if (fZ) goto L_0054a958;
L_0054a954:; BB(0x0054a954);
    /* 0054a954: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054a956: jmp 0x54a988 */ goto L_0054a988;
L_0054a958:; BB(0x0054a958);
    /* 0054a958: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054a95b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a95c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a95f: call 0x54a9d0 */ r_esp -= 4; W32(r_esp, 0x54a964u); f_0054a9d0();
    /* 0054a964: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054a967: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a969: je 0x54a96f */ if (fZ) goto L_0054a96f;
L_0054a96b:; BB(0x0054a96b);
    /* 0054a96b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054a96d: jmp 0x54a988 */ goto L_0054a988;
L_0054a96f:; BB(0x0054a96f);
    /* 0054a96f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a973: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054a976: call 0x54aa50 */ r_esp -= 4; W32(r_esp, 0x54a97bu); f_0054aa50();
    /* 0054a97b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054a97e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a980: je 0x54a986 */ if (fZ) goto L_0054a986;
L_0054a982:; BB(0x0054a982);
    /* 0054a982: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054a984: jmp 0x54a988 */ goto L_0054a988;
L_0054a986:; BB(0x0054a986);
    /* 0054a986: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054a988:; BB(0x0054a988);
    /* 0054a988: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a98a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a98b: ret 4 */ FN_RET(0x0054a920); r_esp += 8; return;
}

void f_0054a990(void) /* sub_54A990 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a990);
    /* 0054a990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a991: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a997: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a99a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a99b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a99e: call 0x54a770 */ r_esp -= 4; W32(r_esp, 0x54a9a3u); f_0054a770();
    /* 0054a9a3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054a9a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a9a8: jne 0x54a9ae */ if (!fZ) goto L_0054a9ae;
L_0054a9aa:; BB(0x0054a9aa);
    /* 0054a9aa: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054a9ac: jmp 0x54a9c5 */ goto L_0054a9c5;
L_0054a9ae:; BB(0x0054a9ae);
    /* 0054a9ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0054a9b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a9b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a9b5: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x54a9bau); f_00548f80();
    /* 0054a9ba: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a9bd: jne 0x54a9c3 */ if (!fZ) goto L_0054a9c3;
L_0054a9bf:; BB(0x0054a9bf);
    /* 0054a9bf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054a9c1: jmp 0x54a9c5 */ goto L_0054a9c5;
L_0054a9c3:; BB(0x0054a9c3);
    /* 0054a9c3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054a9c5:; BB(0x0054a9c5);
    /* 0054a9c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a9c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a9c8: ret 4 */ FN_RET(0x0054a990); r_esp += 8; return;
}

void f_0054a9d0(void) /* sub_54A9D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054a9d0);
    /* 0054a9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a9d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a9d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054a9d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054a9da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a9db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a9de: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x54a9e3u); f_00548f80();
    /* 0054a9e3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a9e6: je 0x54a9ec */ if (fZ) goto L_0054a9ec;
L_0054a9e8:; BB(0x0054a9e8);
    /* 0054a9e8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054a9ea: jmp 0x54aa46 */ goto L_0054aa46;
L_0054a9ec:; BB(0x0054a9ec);
    /* 0054a9ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054a9ef: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054a9f2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054a9f5: mov ax, word ptr [edx + ecx + 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x28u))) & 0xffffu);
    /* 0054a9fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a9fb: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54aa00u); f_00641280();
    /* 0054aa00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aa03: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aa06: jne 0x54aa44 */ if (!fZ) goto L_0054aa44;
L_0054aa08:; BB(0x0054aa08);
    /* 0054aa08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054aa0b: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054aa0e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054aa11: mov ax, word ptr [edx + ecx + 0x2a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x2au))) & 0xffffu);
    /* 0054aa16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa17: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54aa1cu); f_00641280();
    /* 0054aa1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aa1f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aa22: jne 0x54aa44 */ if (!fZ) goto L_0054aa44;
L_0054aa24:; BB(0x0054aa24);
    /* 0054aa24: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054aa27: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054aa2a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054aa2d: mov ax, word ptr [edx + ecx + 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x2cu))) & 0xffffu);
    /* 0054aa32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa33: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54aa38u); f_00641280();
    /* 0054aa38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aa3b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aa3e: jne 0x54aa44 */ if (!fZ) goto L_0054aa44;
L_0054aa40:; BB(0x0054aa40);
    /* 0054aa40: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054aa42: jmp 0x54aa46 */ goto L_0054aa46;
L_0054aa44:; BB(0x0054aa44);
    /* 0054aa44: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054aa46:; BB(0x0054aa46);
    /* 0054aa46: mov esp, ebp */ r_esp = r_ebp;
    /* 0054aa48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054aa49: ret 4 */ FN_RET(0x0054a9d0); r_esp += 8; return;
}

void f_0054aa50(void) /* sub_54AA50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054aa50);
    /* 0054aa50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa51: mov ebp, esp */ r_ebp = r_esp;
    /* 0054aa53: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054aa56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa57: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0054aa5a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0054aa5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa5e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054aa61: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x54aa66u); f_00548f80();
    /* 0054aa66: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aa69: je 0x54aa72 */ if (fZ) goto L_0054aa72;
L_0054aa6b:; BB(0x0054aa6b);
    /* 0054aa6b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054aa6d: jmp 0x54ac0f */ goto L_0054ac0f;
L_0054aa72:; BB(0x0054aa72);
    /* 0054aa72: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054aa75: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054aa78: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054aa7b: mov ax, word ptr [edx + ecx + 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x28u))) & 0xffffu);
    /* 0054aa80: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 0054aa84: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054aa87: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054aa8a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054aa8d: mov ax, word ptr [edx + ecx + 0x2a] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x2au))) & 0xffffu);
    /* 0054aa92: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0054aa96: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0054aa99: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054aa9c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054aa9f: mov ax, word ptr [edx + ecx + 0x2c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx+0x2cu))) & 0xffffu);
    /* 0054aaa4: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 0054aaa8: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0054aaac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054aaad: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54aab2u); f_00641290();
    /* 0054aab2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aab5: mov esi, eax */ r_esi = r_eax;
    /* 0054aab7: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0054aabb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054aabc: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54aac1u); f_00641290();
    /* 0054aac1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aac4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aac6: jne 0x54aaf1 */ if (!fZ) goto L_0054aaf1;
L_0054aac8:; BB(0x0054aac8);
    /* 0054aac8: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0054aacc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aacd: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54aad2u); f_00641290();
    /* 0054aad2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aad5: mov esi, eax */ r_esi = r_eax;
    /* 0054aad7: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0054aadb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054aadc: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x54aae1u); f_00641290();
    /* 0054aae1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aae4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aae6: jne 0x54aaf1 */ if (!fZ) goto L_0054aaf1;
L_0054aae8:; BB(0x0054aae8);
    /* 0054aae8: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0054aaef: jmp 0x54aaf8 */ goto L_0054aaf8;
L_0054aaf1:; BB(0x0054aaf1);
    /* 0054aaf1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0054aaf8:; BB(0x0054aaf8);
    /* 0054aaf8: mov dl, byte ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe4u))) & 0xffu);
    /* 0054aafb: mov byte ptr [ebp - 6], dl */ W8((u32)(r_ebp+0xfffffffau), (u8)r_edx);
    /* 0054aafe: movzx eax, byte ptr [ebp - 6] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 0054ab02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ab04: jne 0x54ab0d */ if (!fZ) goto L_0054ab0d;
L_0054ab06:; BB(0x0054ab06);
    /* 0054ab06: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0054ab08: jmp 0x54ac0f */ goto L_0054ac0f;
L_0054ab0d:; BB(0x0054ab0d);
    /* 0054ab0d: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0054ab11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ab12: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ab17u); f_00641280();
    /* 0054ab17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ab1a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ab1d: je 0x54ab4c */ if (fZ) goto L_0054ab4c;
L_0054ab1f:; BB(0x0054ab1f);
    /* 0054ab1f: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0054ab23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ab24: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ab29u); f_00641280();
    /* 0054ab29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ab2c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ab2f: je 0x54ab4c */ if (fZ) goto L_0054ab4c;
L_0054ab31:; BB(0x0054ab31);
    /* 0054ab31: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0054ab35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ab36: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ab3bu); f_00641280();
    /* 0054ab3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ab3e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ab41: je 0x54ab4c */ if (fZ) goto L_0054ab4c;
L_0054ab43:; BB(0x0054ab43);
    /* 0054ab43: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0054ab4a: jmp 0x54ab53 */ goto L_0054ab53;
L_0054ab4c:; BB(0x0054ab4c);
    /* 0054ab4c: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0054ab53:; BB(0x0054ab53);
    /* 0054ab53: mov cl, byte ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe0u))) & 0xffu);
    /* 0054ab56: mov byte ptr [ebp - 7], cl */ W8((u32)(r_ebp+0xfffffff9u), (u8)r_ecx);
    /* 0054ab59: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0054ab5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ab5e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ab63u); f_00641280();
    /* 0054ab63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ab66: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ab69: je 0x54ab98 */ if (fZ) goto L_0054ab98;
L_0054ab6b:; BB(0x0054ab6b);
    /* 0054ab6b: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0054ab6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ab70: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ab75u); f_00641280();
    /* 0054ab75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ab78: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ab7b: je 0x54ab98 */ if (fZ) goto L_0054ab98;
L_0054ab7d:; BB(0x0054ab7d);
    /* 0054ab7d: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0054ab81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ab82: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54ab87u); f_00641280();
    /* 0054ab87: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ab8a: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ab8d: je 0x54ab98 */ if (fZ) goto L_0054ab98;
L_0054ab8f:; BB(0x0054ab8f);
    /* 0054ab8f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0054ab96: jmp 0x54ab9f */ goto L_0054ab9f;
L_0054ab98:; BB(0x0054ab98);
    /* 0054ab98: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_0054ab9f:; BB(0x0054ab9f);
    /* 0054ab9f: mov dl, byte ptr [ebp - 0x24] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffdcu))) & 0xffu);
    /* 0054aba2: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 0054aba5: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0054aba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054abaa: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54abafu); f_00641280();
    /* 0054abaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054abb2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054abb5: je 0x54abe4 */ if (fZ) goto L_0054abe4;
L_0054abb7:; BB(0x0054abb7);
    /* 0054abb7: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0054abbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054abbc: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54abc1u); f_00641280();
    /* 0054abc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054abc4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054abc7: je 0x54abe4 */ if (fZ) goto L_0054abe4;
L_0054abc9:; BB(0x0054abc9);
    /* 0054abc9: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0054abcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054abce: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54abd3u); f_00641280();
    /* 0054abd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054abd6: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054abd9: je 0x54abe4 */ if (fZ) goto L_0054abe4;
L_0054abdb:; BB(0x0054abdb);
    /* 0054abdb: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0054abe2: jmp 0x54abeb */ goto L_0054abeb;
L_0054abe4:; BB(0x0054abe4);
    /* 0054abe4: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_0054abeb:; BB(0x0054abeb);
    /* 0054abeb: mov al, byte ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd8u))) & 0xffu);
    /* 0054abee: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 0054abf1: movzx ecx, byte ptr [ebp - 7] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff9u));
    /* 0054abf5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054abf7: je 0x54ac0d */ if (fZ) goto L_0054ac0d;
L_0054abf9:; BB(0x0054abf9);
    /* 0054abf9: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0054abfd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054abff: je 0x54ac0d */ if (fZ) goto L_0054ac0d;
L_0054ac01:; BB(0x0054ac01);
    /* 0054ac01: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0054ac05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ac07: je 0x54ac0d */ if (fZ) goto L_0054ac0d;
L_0054ac09:; BB(0x0054ac09);
    /* 0054ac09: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0054ac0b: jmp 0x54ac0f */ goto L_0054ac0f;
L_0054ac0d:; BB(0x0054ac0d);
    /* 0054ac0d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0054ac0f:; BB(0x0054ac0f);
    /* 0054ac0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054ac10: mov esp, ebp */ r_esp = r_ebp;
    /* 0054ac12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ac13: ret 4 */ FN_RET(0x0054aa50); r_esp += 8; return;
}

void f_0054ac20(void) /* sub_54AC20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054ac20);
    /* 0054ac20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac21: mov ebp, esp */ r_ebp = r_esp;
    /* 0054ac23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0054ac27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ac2a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0054ac2d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ac31: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x54ac36u); f_0054a740();
    /* 0054ac36: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054ac39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ac3b: je 0x54ac4a */ if (fZ) goto L_0054ac4a;
L_0054ac3d:; BB(0x0054ac3d);
    /* 0054ac3d: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0054ac43: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x54ac48u); f_0057ae30();
    /* 0054ac48: jmp 0x54ac72 */ goto L_0054ac72;
L_0054ac4a:; BB(0x0054ac4a);
    /* 0054ac4a: push 0x73d790 */ { u32 v = 0x73d790u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac4f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac51: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0054ac57: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x54ac5cu); f_0057ab80();
    /* 0054ac5c: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054ac62: call 0x54ac80 */ r_esp -= 4; W32(r_esp, 0x54ac67u); f_0054ac80();
    /* 0054ac67: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054ac6d: call 0x54ad80 */ r_esp -= 4; W32(r_esp, 0x54ac72u); f_0054ad80();
L_0054ac72:; BB(0x0054ac72);
    /* 0054ac72: mov esp, ebp */ r_esp = r_ebp;
    /* 0054ac74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ac75: ret  */ FN_RET(0x0054ac20); r_esp += 4; return;
}

void f_0054ac80(void) /* sub_54AC80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054ac80);
    /* 0054ac80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac81: mov ebp, esp */ r_ebp = r_esp;
    /* 0054ac83: sub esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ac89: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0054ac8e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054ac90: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0054ac93: mov dword ptr [ebp - 0x40c], ecx */ W32((u32)(r_ebp+0xfffffbf4u), r_ecx);
    /* 0054ac99: push 0x6c7150 */ { u32 v = 0x6c7150u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac9e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54aca3u); f_00630f40();
    /* 0054aca3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aca6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aca7: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0054acad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054acae: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x54acb3u); f_00686d8e();
    /* 0054acb3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054acb6: push 0x6c7130 */ { u32 v = 0x6c7130u; r_esp -= 4; W32(r_esp, v); }
    /* 0054acbb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54acc0u); f_00630f40();
    /* 0054acc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054acc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054acc4: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0054acca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054accb: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x54acd0u); f_00686ec6();
    /* 0054acd0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054acd3: push 0x6c710c */ { u32 v = 0x6c710cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054acd8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54acddu); f_00630f40();
    /* 0054acdd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ace0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ace1: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0054ace7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ace8: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x54acedu); f_00686ec6();
    /* 0054aced: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054acf0: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0054acf6: call 0x5497a0 */ r_esp -= 4; W32(r_esp, 0x54acfbu); f_005497a0();
    /* 0054acfb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054acfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ad00: je 0x54ad1f */ if (fZ) goto L_0054ad1f;
L_0054ad02:; BB(0x0054ad02);
    /* 0054ad02: push 0x6c70e4 */ { u32 v = 0x6c70e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad07: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54ad0cu); f_00630f40();
    /* 0054ad0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ad0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad10: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0054ad16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad17: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x54ad1cu); f_00686ec6();
    /* 0054ad1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054ad1f:; BB(0x0054ad1f);
    /* 0054ad1f: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0054ad25: call 0x549ad0 */ r_esp -= 4; W32(r_esp, 0x54ad2au); f_00549ad0();
    /* 0054ad2a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054ad2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ad2f: je 0x54ad4e */ if (fZ) goto L_0054ad4e;
L_0054ad31:; BB(0x0054ad31);
    /* 0054ad31: push 0x6c70c0 */ { u32 v = 0x6c70c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad36: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54ad3bu); f_00630f40();
    /* 0054ad3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ad3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad3f: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 0054ad45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad46: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x54ad4bu); f_00686ec6();
    /* 0054ad4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054ad4e:; BB(0x0054ad4e);
    /* 0054ad4e: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0054ad54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad55: push 0x6b4d38 */ { u32 v = 0x6b4d38u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad5a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x54ad5fu); f_00630f40();
    /* 0054ad5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ad62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad65: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0054ad6b: call 0x57be80 */ r_esp -= 4; W32(r_esp, 0x54ad70u); f_0057be80();
    /* 0054ad70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054ad73: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ad75: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x54ad7au); f_00686d72();
    /* 0054ad7a: mov esp, ebp */ r_esp = r_ebp;
    /* 0054ad7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ad7d: ret  */ FN_RET(0x0054ac80); r_esp += 4; return;
}

