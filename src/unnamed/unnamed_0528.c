#include "protos.h"

void f_00528000(void) /* sub_528000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528000);
    /* 00528000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528001: mov ebp, esp */ r_ebp = r_esp;
    /* 00528003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00528007: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052800a: cmp dword ptr [eax + 0xd38], -1 */ {  u32 a = R32((u32)(r_eax+0xd38u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528011: jne 0x528017 */ if (!fZ) goto L_00528017;
L_00528013:; BB(0x00528013);
    /* 00528013: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00528015: jmp 0x528029 */ goto L_00528029;
L_00528017:; BB(0x00528017);
    /* 00528017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052801a: mov edx, dword ptr [ecx + 0xd38] */ r_edx = R32((u32)(r_ecx+0xd38u));
    /* 00528020: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528021: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528026u); f_005dcb00();
    /* 00528026: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00528029:; BB(0x00528029);
    /* 00528029: mov esp, ebp */ r_esp = r_ebp;
    /* 0052802b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052802c: ret  */ FN_RET(0x00528000); r_esp += 4; return;
}

void f_00528030(void) /* sub_528030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528030);
    /* 00528030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528031: mov ebp, esp */ r_ebp = r_esp;
    /* 00528033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528034: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00528037: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052803a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052803d: mov dword ptr [eax + 0xd38], ecx */ W32((u32)(r_eax+0xd38u), r_ecx);
    /* 00528043: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528046: cmp dword ptr [edx + 0xd38], -1 */ {  u32 a = R32((u32)(r_edx+0xd38u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052804d: je 0x528066 */ if (fZ) goto L_00528066;
L_0052804f:; BB(0x0052804f);
    /* 0052804f: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00528052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528053: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00528056: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528057: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00528059: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 0052805f: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x528064u); f_005d8a20();
    /* 00528064: jmp 0x528077 */ goto L_00528077;
L_00528066:; BB(0x00528066);
    /* 00528066: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528068: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052806a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052806c: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00528072: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x528077u); f_005d8a20();
L_00528077:; BB(0x00528077);
    /* 00528077: mov ecx, dword ptr [0x79337c] */ r_ecx = R32((u32)(0x79337cu));
    /* 0052807d: call 0x522750 */ r_esp -= 4; W32(r_esp, 0x528082u); f_00522750();
    /* 00528082: mov esp, ebp */ r_esp = r_ebp;
    /* 00528084: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528085: ret 8 */ FN_RET(0x00528030); r_esp += 12; return;
}

void f_00528090(void) /* sub_528090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528090);
    /* 00528090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528091: mov ebp, esp */ r_ebp = r_esp;
    /* 00528093: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528096: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00528099: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005280a0: jmp 0x5280ab */ goto L_005280ab;
L_005280a2:; BB(0x005280a2);
    /* 005280a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005280a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005280a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005280ab:; BB(0x005280ab);
    /* 005280ab: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005280b2: jge 0x5280ec */ if ((fS==fO)) goto L_005280ec;
L_005280b4:; BB(0x005280b4);
    /* 005280b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005280b7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005280ba: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005280be: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005280c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005280c4: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005280c7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005280ca: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 005280ce: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005280d0: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005280d3: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 005280d6: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 005280da: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005280dd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005280e0: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005280e4: je 0x5280ea */ if (fZ) goto L_005280ea;
L_005280e6:; BB(0x005280e6);
    /* 005280e6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005280e8: jmp 0x5280ee */ goto L_005280ee;
L_005280ea:; BB(0x005280ea);
    /* 005280ea: jmp 0x5280a2 */ goto L_005280a2;
L_005280ec:; BB(0x005280ec);
    /* 005280ec: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005280ee:; BB(0x005280ee);
    /* 005280ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005280f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005280f1: ret 4 */ FN_RET(0x00528090); r_esp += 8; return;
}

void f_00528100(void) /* sub_528100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528100);
    /* 00528100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528101: mov ebp, esp */ r_ebp = r_esp;
    /* 00528103: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528106: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00528109: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00528110: jmp 0x52811b */ goto L_0052811b;
L_00528112:; BB(0x00528112);
    /* 00528112: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528115: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528118: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0052811b:; BB(0x0052811b);
    /* 0052811b: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528122: jge 0x52817f */ if ((fS==fO)) goto L_0052817f;
L_00528124:; BB(0x00528124);
    /* 00528124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528127: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052812a: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0052812e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00528131: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00528134: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00528137: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052813a: lea eax, [edx + ecx + 0x48] */ r_eax = (u32)(r_edx+r_ecx+0x48u);
    /* 0052813e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00528140: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00528143: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00528146: mov eax, dword ptr [eax + ecx + 4] */ r_eax = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0052814a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0052814d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00528150: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528154: je 0x52817d */ if (fZ) goto L_0052817d;
L_00528156:; BB(0x00528156);
    /* 00528156: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528159: mov edx, dword ptr [0x79337c] */ r_edx = R32((u32)(0x79337cu));
    /* 0052815f: mov eax, dword ptr [edx + ecx*4 + 0x80] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x80u));
    /* 00528166: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00528169: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052816f: cmp dword ptr [eax + ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528177: jne 0x52817d */ if (!fZ) goto L_0052817d;
L_00528179:; BB(0x00528179);
    /* 00528179: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0052817b: jmp 0x528181 */ goto L_00528181;
L_0052817d:; BB(0x0052817d);
    /* 0052817d: jmp 0x528112 */ goto L_00528112;
L_0052817f:; BB(0x0052817f);
    /* 0052817f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00528181:; BB(0x00528181);
    /* 00528181: mov esp, ebp */ r_esp = r_ebp;
    /* 00528183: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528184: ret 4 */ FN_RET(0x00528100); r_esp += 8; return;
}

void f_00528190(void) /* sub_528190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528190);
    /* 00528190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528191: mov ebp, esp */ r_ebp = r_esp;
    /* 00528193: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528196: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00528199: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052819d: jne 0x5281ab */ if (!fZ) goto L_005281ab;
L_0052819f:; BB(0x0052819f);
    /* 0052819f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005281a2: mov ecx, dword ptr [eax + 0xd38] */ r_ecx = R32((u32)(r_eax+0xd38u));
    /* 005281a8: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005281ab:; BB(0x005281ab);
    /* 005281ab: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005281af: je 0x5281e8 */ if (fZ) goto L_005281e8;
L_005281b1:; BB(0x005281b1);
    /* 005281b1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005281b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005281b5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5281bau); f_005dcb00();
    /* 005281ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005281bd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005281c0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005281c3: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 005281c9: mov byte ptr [ebp - 9], cl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_ecx);
    /* 005281cc: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005281d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005281d2: jne 0x5281e8 */ if (!fZ) goto L_005281e8;
L_005281d4:; BB(0x005281d4);
    /* 005281d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005281d7: mov ecx, dword ptr [eax + 0xd38] */ r_ecx = R32((u32)(r_eax+0xd38u));
    /* 005281dd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005281e0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005281e3: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005281e6: je 0x5281ec */ if (fZ) goto L_005281ec;
L_005281e8:; BB(0x005281e8);
    /* 005281e8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005281ea: jmp 0x52822b */ goto L_0052822b;
L_005281ec:; BB(0x005281ec);
    /* 005281ec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005281f3: jmp 0x5281fe */ goto L_005281fe;
L_005281f5:; BB(0x005281f5);
    /* 005281f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005281f8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005281fb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005281fe:; BB(0x005281fe);
    /* 005281fe: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528205: jge 0x528229 */ if ((fS==fO)) goto L_00528229;
L_00528207:; BB(0x00528207);
    /* 00528207: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0052820a: imul ecx, ecx, 0x284 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x284u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00528210: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528213: lea eax, [edx + ecx + 0x288] */ r_eax = (u32)(r_edx+r_ecx+0x288u);
    /* 0052821a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052821d: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528221: je 0x528227 */ if (fZ) goto L_00528227;
L_00528223:; BB(0x00528223);
    /* 00528223: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00528225: jmp 0x52822b */ goto L_0052822b;
L_00528227:; BB(0x00528227);
    /* 00528227: jmp 0x5281f5 */ goto L_005281f5;
L_00528229:; BB(0x00528229);
    /* 00528229: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0052822b:; BB(0x0052822b);
    /* 0052822b: mov esp, ebp */ r_esp = r_ebp;
    /* 0052822d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052822e: ret 4 */ FN_RET(0x00528190); r_esp += 8; return;
}

void f_00528240(void) /* sub_528240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528240);
    /* 00528240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528241: mov ebp, esp */ r_ebp = r_esp;
    /* 00528243: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528246: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00528249: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052824b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052824d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x528252u); f_0064c8a0();
    /* 00528252: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528255: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00528258: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0052825b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052825e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00528261: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00528264: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00528267: mov edx, dword ptr [0x793370] */ r_edx = R32((u32)(0x793370u));
    /* 0052826d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052826f: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00528275: mov edx, dword ptr [eax + 0x2b0] */ r_edx = R32((u32)(r_eax+0x2b0u));
    /* 0052827b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52827du); call_ind(t); }
    /* 0052827d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00528280: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00528283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528284: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00528287: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528288: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052828b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052828e: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00528292: call 0x5cb880 */ r_esp -= 4; W32(r_esp, 0x528297u); f_005cb880();
    /* 00528297: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00528299: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0052829c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0052829f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005282a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005282a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005282a8: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005282ae: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5282b3u); f_005da7b0();
    /* 005282b3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005282b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005282b8: je 0x52830b */ if (fZ) goto L_0052830b;
L_005282ba:; BB(0x005282ba);
    /* 005282ba: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005282c0: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x5282c5u); f_005da8a0();
    /* 005282c5: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005282cb: sub eax, dword ptr [edx + 0x4ef8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4ef8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005282d1: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005282d5: cmp eax, 0xfa */ {  u32 a = r_eax; u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005282da: jge 0x5282e5 */ if ((fS==fO)) goto L_005282e5;
L_005282dc:; BB(0x005282dc);
    /* 005282dc: mov dword ptr [ebp - 0x2c], 0xfa */ W32((u32)(r_ebp+0xffffffd4u), 0xfau);
    /* 005282e3: jmp 0x528303 */ goto L_00528303;
L_005282e5:; BB(0x005282e5);
    /* 005282e5: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 005282eb: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x5282f0u); f_005da8a0();
    /* 005282f0: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005282f6: sub eax, dword ptr [ecx + 0x4ef8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4ef8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005282fc: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00528300: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00528303:; BB(0x00528303);
    /* 00528303: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00528306: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00528309: jmp 0x528330 */ goto L_00528330;
L_0052830b:; BB(0x0052830b);
    /* 0052830b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052830e: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00528311: cmp eax, 0x1f4 */ {  u32 a = r_eax; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528316: jge 0x528321 */ if ((fS==fO)) goto L_00528321;
L_00528318:; BB(0x00528318);
    /* 00528318: mov dword ptr [ebp - 0x30], 0x1f4 */ W32((u32)(r_ebp+0xffffffd0u), 0x1f4u);
    /* 0052831f: jmp 0x52832a */ goto L_0052832a;
L_00528321:; BB(0x00528321);
    /* 00528321: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528324: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00528327: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0052832a:; BB(0x0052832a);
    /* 0052832a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052832d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00528330:; BB(0x00528330);
    /* 00528330: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00528333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528334: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528339u); f_005dcb00();
    /* 00528339: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052833c: mov ecx, eax */ r_ecx = r_eax;
    /* 0052833e: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x528343u); f_005d5a50();
    /* 00528343: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528346: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00528348: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052834b: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0052834e: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00528350: mov esp, ebp */ r_esp = r_ebp;
    /* 00528352: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528353: ret 4 */ FN_RET(0x00528240); r_esp += 8; return;
}

void f_00528360(void) /* sub_528360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528360);
    /* 00528360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528361: mov ebp, esp */ r_ebp = r_esp;
    /* 00528363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00528367: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052836a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052836d: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00528371: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00528373: cmp dword ptr [edx + 0xf0], 0 */ {  u32 a = R32((u32)(r_edx+0xf0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052837a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0052837d: mov esp, ebp */ r_esp = r_ebp;
    /* 0052837f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528380: ret 4 */ FN_RET(0x00528360); r_esp += 8; return;
}

void f_00528390(void) /* sub_528390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528390);
    /* 00528390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528391: mov ebp, esp */ r_ebp = r_esp;
    /* 00528393: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528396: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00528399: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005283a0: jmp 0x5283ab */ goto L_005283ab;
L_005283a2:; BB(0x005283a2);
    /* 005283a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005283a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005283a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005283ab:; BB(0x005283ab);
    /* 005283ab: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005283b2: jge 0x5283cd */ if ((fS==fO)) goto L_005283cd;
L_005283b4:; BB(0x005283b4);
    /* 005283b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005283b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005283b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005283bb: call 0x528360 */ r_esp -= 4; W32(r_esp, 0x5283c0u); f_00528360();
    /* 005283c0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005283c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005283c5: je 0x5283cb */ if (fZ) goto L_005283cb;
L_005283c7:; BB(0x005283c7);
    /* 005283c7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005283c9: jmp 0x5283cf */ goto L_005283cf;
L_005283cb:; BB(0x005283cb);
    /* 005283cb: jmp 0x5283a2 */ goto L_005283a2;
L_005283cd:; BB(0x005283cd);
    /* 005283cd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005283cf:; BB(0x005283cf);
    /* 005283cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005283d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005283d2: ret  */ FN_RET(0x00528390); r_esp += 4; return;
}

void f_005283e0(void) /* sub_5283E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005283e0);
    /* 005283e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005283e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005283e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005283e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005283e9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005283ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005283ed: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005283f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005283f1: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005283f7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005283f9: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005283ff: mov edx, dword ptr [eax + 0x26c] */ r_edx = R32((u32)(r_eax+0x26cu));
    /* 00528405: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x528407u); call_ind(t); }
    /* 00528407: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00528409: cmp dword ptr [ebp - 8], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528410: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00528413: mov esp, ebp */ r_esp = r_ebp;
    /* 00528415: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528416: ret  */ FN_RET(0x005283e0); r_esp += 4; return;
}

void f_00528420(void) /* sub_528420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528420);
    /* 00528420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528421: mov ebp, esp */ r_ebp = r_esp;
    /* 00528423: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528426: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00528429: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 0052842f: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x528434u); f_005da7b0();
    /* 00528434: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00528437: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528439: je 0x52845a */ if (fZ) goto L_0052845a;
L_0052843b:; BB(0x0052843b);
    /* 0052843b: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00528441: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x528446u); f_005da8a0();
    /* 00528446: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528449: cmp dword ptr [ecx + 0xd40], eax */ {  u32 a = R32((u32)(r_ecx+0xd40u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052844f: jl 0x52845a */ if ((fS!=fO)) goto L_0052845a;
L_00528451:; BB(0x00528451);
    /* 00528451: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00528458: jmp 0x528461 */ goto L_00528461;
L_0052845a:; BB(0x0052845a);
    /* 0052845a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00528461:; BB(0x00528461);
    /* 00528461: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 00528464: mov esp, ebp */ r_esp = r_ebp;
    /* 00528466: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528467: ret  */ FN_RET(0x00528420); r_esp += 4; return;
}

void f_00528470(void) /* sub_528470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528470);
    /* 00528470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528471: mov ebp, esp */ r_ebp = r_esp;
    /* 00528473: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528476: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00528477: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0052847a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00528481: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00528488: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 0052848e: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x528493u); f_005da880();
    /* 00528493: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00528496: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528499: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052849c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0052849d: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 005284a2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005284a2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005284a2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005284a4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005284a7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005284aa: call 0x528520 */ r_esp -= 4; W32(r_esp, 0x5284afu); f_00528520();
    /* 005284af: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005284b2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005284b5: call 0x5285c0 */ r_esp -= 4; W32(r_esp, 0x5284bau); f_005285c0();
    /* 005284ba: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005284bd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005284c0: cmp dword ptr [edx + 0xd40], 1 */ {  u32 a = R32((u32)(r_edx+0xd40u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005284c7: je 0x52850e */ if (fZ) goto L_0052850e;
L_005284c9:; BB(0x005284c9);
    /* 005284c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005284cc: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005284cf: jne 0x52850e */ if (!fZ) goto L_0052850e;
L_005284d1:; BB(0x005284d1);
    /* 005284d1: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005284d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005284d5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005284d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005284d9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5284deu); f_005dcb00();
    /* 005284de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005284e1: mov ecx, eax */ r_ecx = r_eax;
    /* 005284e3: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5284e8u); f_005d5a90();
    /* 005284e8: mov esi, eax */ r_esi = r_eax;
    /* 005284ea: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005284ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005284ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005284f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005284f2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5284f7u); f_005dcb00();
    /* 005284f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005284fa: mov ecx, eax */ r_ecx = r_eax;
    /* 005284fc: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x528501u); f_005d5a90();
    /* 00528501: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00528503: sub edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00528506: cmp dword ptr [esi], edx */ {  u32 a = R32((u32)(r_esi)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528508: jge 0x52850e */ if ((fS==fO)) goto L_0052850e;
L_0052850a:; BB(0x0052850a);
    /* 0052850a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0052850c: jmp 0x528510 */ goto L_00528510;
L_0052850e:; BB(0x0052850e);
    /* 0052850e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00528510:; BB(0x00528510);
    /* 00528510: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00528511: mov esp, ebp */ r_esp = r_ebp;
    /* 00528513: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528514: ret 4 */ FN_RET(0x00528470); r_esp += 8; return;
}

void f_00528520(void) /* sub_528520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528520);
    /* 00528520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528521: mov ebp, esp */ r_ebp = r_esp;
    /* 00528523: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528526: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00528529: mov dword ptr [ebp - 4], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9aca00u);
    /* 00528530: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00528537: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0052853e: jmp 0x528549 */ goto L_00528549;
L_00528540:; BB(0x00528540);
    /* 00528540: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528543: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528546: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00528549:; BB(0x00528549);
    /* 00528549: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052854d: jge 0x5285b4 */ if ((fS==fO)) goto L_005285b4;
L_0052854f:; BB(0x0052854f);
    /* 0052854f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528552: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528553: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528558u); f_005dcb00();
    /* 00528558: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052855b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052855e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00528561: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 00528567: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0052856a: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0052856e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528570: jne 0x5285b2 */ if (!fZ) goto L_005285b2;
L_00528572:; BB(0x00528572);
    /* 00528572: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00528575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528576: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528579: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052857a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52857fu); f_005dcb00();
    /* 0052857f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528582: mov ecx, eax */ r_ecx = r_eax;
    /* 00528584: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x528589u); f_005d5a90();
    /* 00528589: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0052858b: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052858e: jge 0x5285b2 */ if ((fS==fO)) goto L_005285b2;
L_00528590:; BB(0x00528590);
    /* 00528590: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00528593: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528594: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528598: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52859du); f_005dcb00();
    /* 0052859d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005285a0: mov ecx, eax */ r_ecx = r_eax;
    /* 005285a2: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5285a7u); f_005d5a90();
    /* 005285a7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005285a9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005285ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005285af: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005285b2:; BB(0x005285b2);
    /* 005285b2: jmp 0x528540 */ goto L_00528540;
L_005285b4:; BB(0x005285b4);
    /* 005285b4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005285b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005285b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005285ba: ret  */ FN_RET(0x00528520); r_esp += 4; return;
}

void f_005285c0(void) /* sub_5285C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005285c0);
    /* 005285c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005285c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005285c3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005285c6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005285c9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005285d0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005285d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005285de: jmp 0x5285e9 */ goto L_005285e9;
L_005285e0:; BB(0x005285e0);
    /* 005285e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005285e3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005285e6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005285e9:; BB(0x005285e9);
    /* 005285e9: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005285ed: jge 0x528654 */ if ((fS==fO)) goto L_00528654;
L_005285ef:; BB(0x005285ef);
    /* 005285ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005285f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005285f3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5285f8u); f_005dcb00();
    /* 005285f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005285fb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005285fe: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00528601: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 00528607: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0052860a: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0052860e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528610: jne 0x528652 */ if (!fZ) goto L_00528652;
L_00528612:; BB(0x00528612);
    /* 00528612: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00528615: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528616: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052861a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52861fu); f_005dcb00();
    /* 0052861f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528622: mov ecx, eax */ r_ecx = r_eax;
    /* 00528624: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x528629u); f_005d5a90();
    /* 00528629: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0052862b: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052862e: jle 0x528652 */ if ((fZ||fS!=fO)) goto L_00528652;
L_00528630:; BB(0x00528630);
    /* 00528630: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00528633: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528634: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528637: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528638: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52863du); f_005dcb00();
    /* 0052863d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528640: mov ecx, eax */ r_ecx = r_eax;
    /* 00528642: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x528647u); f_005d5a90();
    /* 00528647: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00528649: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052864c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052864f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00528652:; BB(0x00528652);
    /* 00528652: jmp 0x5285e0 */ goto L_005285e0;
L_00528654:; BB(0x00528654);
    /* 00528654: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00528657: mov esp, ebp */ r_esp = r_ebp;
    /* 00528659: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052865a: ret  */ FN_RET(0x005285c0); r_esp += 4; return;
}

void f_00528660(void) /* sub_528660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528660);
    /* 00528660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528661: mov ebp, esp */ r_ebp = r_esp;
    /* 00528663: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528666: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00528669: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00528670: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528672: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528674: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x528679u); f_0064c8a0();
    /* 00528679: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052867c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052867f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00528682: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00528685: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00528688: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052868b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052868e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00528695: jmp 0x5286a0 */ goto L_005286a0;
L_00528697:; BB(0x00528697);
    /* 00528697: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052869a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052869d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005286a0:; BB(0x005286a0);
    /* 005286a0: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005286a4: jge 0x528760 */ if ((fS==fO)) goto L_00528760;
L_005286aa:; BB(0x005286aa);
    /* 005286aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005286ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005286ae: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5286b3u); f_005dcb00();
    /* 005286b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005286b6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005286b9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005286bc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5286c1u); f_0063aac0();
    /* 005286c1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005286c3: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005286c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005286c8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005286cc: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005286cf: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005286d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005286d4: jne 0x52875b */ if (!fZ) goto L_0052875b;
L_005286da:; BB(0x005286da);
    /* 005286da: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005286dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005286de: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5286e3u); f_005dcb00();
    /* 005286e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005286e6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005286e9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005286ec: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 005286f2: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 005286f5: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 005286f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005286fb: jne 0x52875b */ if (!fZ) goto L_0052875b;
L_005286fd:; BB(0x005286fd);
    /* 005286fd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00528700: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528701: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528706u); f_005dcb00();
    /* 00528706: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528709: mov ecx, eax */ r_ecx = r_eax;
    /* 0052870b: call 0x5d5920 */ r_esp -= 4; W32(r_esp, 0x528710u); f_005d5920();
    /* 00528710: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00528713: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528715: je 0x52875b */ if (fZ) goto L_0052875b;
L_00528717:; BB(0x00528717);
    /* 00528717: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052871a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052871b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052871e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052871f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00528722: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528723: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528728u); f_005dcb00();
    /* 00528728: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052872b: add eax, 0x4cc */ {  u32 a = r_eax; u32 b = 0x4ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528730: mov ecx, eax */ r_ecx = r_eax;
    /* 00528732: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x528737u); f_0064c6e0();
    /* 00528737: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052873a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052873c: je 0x52875b */ if (fZ) goto L_0052875b;
L_0052873e:; BB(0x0052873e);
    /* 0052873e: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00528741: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528742: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00528745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528746: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52874bu); f_005dcb00();
    /* 0052874b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052874e: mov ecx, eax */ r_ecx = r_eax;
    /* 00528750: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x528755u); f_005d6020();
    /* 00528755: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00528758: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0052875b:; BB(0x0052875b);
    /* 0052875b: jmp 0x528697 */ goto L_00528697;
L_00528760:; BB(0x00528760);
    /* 00528760: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528763: mov esp, ebp */ r_esp = r_ebp;
    /* 00528765: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528766: ret  */ FN_RET(0x00528660); r_esp += 4; return;
}

void f_00528770(void) /* sub_528770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528770);
    /* 00528770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528771: mov ebp, esp */ r_ebp = r_esp;
    /* 00528773: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528776: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00528779: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00528780: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528782: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 00528787: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x52878cu); f_0064c8a0();
    /* 0052878c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052878f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00528792: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00528795: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00528798: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0052879b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052879e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005287a1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005287a8: jmp 0x5287b3 */ goto L_005287b3;
L_005287aa:; BB(0x005287aa);
    /* 005287aa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005287ad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005287b0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005287b3:; BB(0x005287b3);
    /* 005287b3: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005287b7: jge 0x528873 */ if ((fS==fO)) goto L_00528873;
L_005287bd:; BB(0x005287bd);
    /* 005287bd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005287c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005287c1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5287c6u); f_005dcb00();
    /* 005287c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005287c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005287cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005287cf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5287d4u); f_0063aac0();
    /* 005287d4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005287d6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005287d9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005287db: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005287df: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005287e2: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005287e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005287e7: jne 0x52886e */ if (!fZ) goto L_0052886e;
L_005287ed:; BB(0x005287ed);
    /* 005287ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005287f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005287f1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5287f6u); f_005dcb00();
    /* 005287f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005287f9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005287fc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005287ff: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 00528805: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 00528808: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 0052880c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052880e: jne 0x52886e */ if (!fZ) goto L_0052886e;
L_00528810:; BB(0x00528810);
    /* 00528810: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528813: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528814: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528819u); f_005dcb00();
    /* 00528819: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052881c: mov ecx, eax */ r_ecx = r_eax;
    /* 0052881e: call 0x5d58d0 */ r_esp -= 4; W32(r_esp, 0x528823u); f_005d58d0();
    /* 00528823: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00528826: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528828: je 0x52886e */ if (fZ) goto L_0052886e;
L_0052882a:; BB(0x0052882a);
    /* 0052882a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052882d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052882e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00528831: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528832: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528836: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52883bu); f_005dcb00();
    /* 0052883b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052883e: add eax, 0x4cc */ {  u32 a = r_eax; u32 b = 0x4ccu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528843: mov ecx, eax */ r_ecx = r_eax;
    /* 00528845: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x52884au); f_0064c6a0();
    /* 0052884a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052884d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052884f: je 0x52886e */ if (fZ) goto L_0052886e;
L_00528851:; BB(0x00528851);
    /* 00528851: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00528854: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528855: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528859: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x52885eu); f_005dcb00();
    /* 0052885e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528861: mov ecx, eax */ r_ecx = r_eax;
    /* 00528863: call 0x5d6020 */ r_esp -= 4; W32(r_esp, 0x528868u); f_005d6020();
    /* 00528868: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052886b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0052886e:; BB(0x0052886e);
    /* 0052886e: jmp 0x5287aa */ goto L_005287aa;
L_00528873:; BB(0x00528873);
    /* 00528873: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528876: mov esp, ebp */ r_esp = r_ebp;
    /* 00528878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528879: ret  */ FN_RET(0x00528770); r_esp += 4; return;
}

void f_00528880(void) /* sub_528880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528880);
    /* 00528880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528881: mov ebp, esp */ r_ebp = r_esp;
    /* 00528883: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528886: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00528889: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00528890: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 00528897: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0052889e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005288a5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005288ac: jmp 0x5288b7 */ goto L_005288b7;
L_005288ae:; BB(0x005288ae);
    /* 005288ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005288b1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005288b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005288b7:; BB(0x005288b7);
    /* 005288b7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005288bb: jge 0x52894d */ if ((fS==fO)) goto L_0052894d;
L_005288c1:; BB(0x005288c1);
    /* 005288c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005288c4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 005288c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005288c9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5288ceu); f_005dcb00();
    /* 005288ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005288d1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005288d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005288d7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5288dcu); f_0063aac0();
    /* 005288dc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005288de: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005288e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005288e3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005288e7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005288ea: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 005288ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005288ef: jne 0x528948 */ if (!fZ) goto L_00528948;
L_005288f1:; BB(0x005288f1);
    /* 005288f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005288f4: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 005288f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005288f9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5288feu); f_005dcb00();
    /* 005288fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528901: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00528904: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00528907: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0052890d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00528910: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00528914: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528916: jne 0x528948 */ if (!fZ) goto L_00528948;
L_00528918:; BB(0x00528918);
    /* 00528918: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052891b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0052891f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528920: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528925u); f_005dcb00();
    /* 00528925: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528928: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0052892b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052892e: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 00528934: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00528937: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0052893b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052893d: jne 0x528948 */ if (!fZ) goto L_00528948;
L_0052893f:; BB(0x0052893f);
    /* 0052893f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528942: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00528946: jmp 0x528950 */ goto L_00528950;
L_00528948:; BB(0x00528948);
    /* 00528948: jmp 0x5288ae */ goto L_005288ae;
L_0052894d:; BB(0x0052894d);
    /* 0052894d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00528950:; BB(0x00528950);
    /* 00528950: mov esp, ebp */ r_esp = r_ebp;
    /* 00528952: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528953: ret  */ FN_RET(0x00528880); r_esp += 4; return;
}

void f_00528a40(void) /* sub_528A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528a40);
    /* 00528a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00528a43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528a44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00528a47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528a4a: call 0x528bd0 */ r_esp -= 4; W32(r_esp, 0x528a4fu); f_00528bd0();
    /* 00528a4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00528a51: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528a54: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00528a57: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00528a59: mov esp, ebp */ r_esp = r_ebp;
    /* 00528a5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528a5c: ret  */ FN_RET(0x00528a40); r_esp += 4; return;
}

void f_00528a60(void) /* sub_528A60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528a60);
    /* 00528a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00528a63: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528a66: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00528a69: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 00528a70: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 00528a77: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00528a7e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00528a85: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00528a8c: jmp 0x528a97 */ goto L_00528a97;
L_00528a8e:; BB(0x00528a8e);
    /* 00528a8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528a91: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528a94: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00528a97:; BB(0x00528a97);
    /* 00528a97: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528a9b: jge 0x528b54 */ if ((fS==fO)) goto L_00528b54;
L_00528aa1:; BB(0x00528aa1);
    /* 00528aa1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528aa4: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00528aa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528aa9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528aaeu); f_005dcb00();
    /* 00528aae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528ab1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00528ab4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00528ab7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x528abcu); f_0063aac0();
    /* 00528abc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00528abe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00528ac1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00528ac3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528ac7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00528aca: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00528acd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528acf: jne 0x528b4f */ if (!fZ) goto L_00528b4f;
L_00528ad1:; BB(0x00528ad1);
    /* 00528ad1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528ad4: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00528ad8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528ad9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528adeu); f_005dcb00();
    /* 00528ade: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528ae1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00528ae4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00528ae7: mov al, byte ptr [edx + 0x4a1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a1u))) & 0xffu);
    /* 00528aed: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00528af0: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00528af4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528af6: jne 0x528b4f */ if (!fZ) goto L_00528b4f;
L_00528af8:; BB(0x00528af8);
    /* 00528af8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528afb: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 00528aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528b00: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528b05u); f_005dcb00();
    /* 00528b05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528b08: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00528b0b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00528b0e: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 00528b14: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00528b17: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 00528b1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528b1d: je 0x528b4f */ if (fZ) goto L_00528b4f;
L_00528b1f:; BB(0x00528b1f);
    /* 00528b1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528b22: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00528b26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528b27: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x528b2cu); f_005dcb00();
    /* 00528b2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528b2f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00528b32: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00528b35: mov cl, byte ptr [eax + 0x4a2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a2u))) & 0xffu);
    /* 00528b3b: mov byte ptr [ebp - 0x31], cl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_ecx);
    /* 00528b3e: movzx edx, byte ptr [ebp - 0x31] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 00528b42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528b44: jne 0x528b4f */ if (!fZ) goto L_00528b4f;
L_00528b46:; BB(0x00528b46);
    /* 00528b46: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528b49: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00528b4d: jmp 0x528b57 */ goto L_00528b57;
L_00528b4f:; BB(0x00528b4f);
    /* 00528b4f: jmp 0x528a8e */ goto L_00528a8e;
L_00528b54:; BB(0x00528b54);
    /* 00528b54: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00528b57:; BB(0x00528b57);
    /* 00528b57: mov esp, ebp */ r_esp = r_ebp;
    /* 00528b59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528b5a: ret  */ FN_RET(0x00528a60); r_esp += 4; return;
}

void f_00528c20(void) /* sub_528C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528c20);
    /* 00528c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00528c23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528c26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00528c29: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00528c30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00528c37: jmp 0x528c42 */ goto L_00528c42;
L_00528c39:; BB(0x00528c39);
    /* 00528c39: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528c3c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528c3f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00528c42:; BB(0x00528c42);
    /* 00528c42: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528c46: jge 0x528c87 */ if ((fS==fO)) goto L_00528c87;
L_00528c48:; BB(0x00528c48);
    /* 00528c48: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00528c4b: call 0x528bd0 */ r_esp -= 4; W32(r_esp, 0x528c50u); f_00528bd0();
    /* 00528c50: imul eax, eax, 0x50 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x50u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00528c53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528c56: cmp dword ptr [eax + ecx*4 + 0x724110], -1 */ {  u32 a = R32((u32)(r_eax+r_ecx*4+0x724110u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528c5e: jne 0x528c62 */ if (!fZ) goto L_00528c62;
L_00528c60:; BB(0x00528c60);
    /* 00528c60: jmp 0x528c87 */ goto L_00528c87;
L_00528c62:; BB(0x00528c62);
    /* 00528c62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00528c65: call 0x528bd0 */ r_esp -= 4; W32(r_esp, 0x528c6au); f_00528bd0();
    /* 00528c6a: imul eax, eax, 0x50 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x50u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00528c6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528c70: mov eax, dword ptr [eax + edx*4 + 0x724110] */ r_eax = R32((u32)(r_eax+r_edx*4+0x724110u));
    /* 00528c77: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528c7a: jne 0x528c85 */ if (!fZ) goto L_00528c85;
L_00528c7c:; BB(0x00528c7c);
    /* 00528c7c: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00528c83: jmp 0x528c87 */ goto L_00528c87;
L_00528c85:; BB(0x00528c85);
    /* 00528c85: jmp 0x528c39 */ goto L_00528c39;
L_00528c87:; BB(0x00528c87);
    /* 00528c87: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528c8b: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00528c8e: mov esp, ebp */ r_esp = r_ebp;
    /* 00528c90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528c91: ret 4 */ FN_RET(0x00528c20); r_esp += 8; return;
}

void f_00528ca0(void) /* sub_528CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528ca0);
    /* 00528ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00528ca3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528ca6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00528ca7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00528caa: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00528cae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528cb0: je 0x528cf7 */ if (fZ) goto L_00528cf7;
L_00528cb2:; BB(0x00528cb2);
    /* 00528cb2: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 00528cb9: jmp 0x528cc4 */ goto L_00528cc4;
L_00528cbb:; BB(0x00528cbb);
    /* 00528cbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528cbe: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00528cc1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00528cc4:; BB(0x00528cc4);
    /* 00528cc4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528cc8: jle 0x528ce6 */ if ((fZ||fS!=fO)) goto L_00528ce6;
L_00528cca:; BB(0x00528cca);
    /* 00528cca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528ccd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528cd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528cd3: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528cd6: mov ecx, dword ptr [esi + ecx*4 + 0xd40] */ r_ecx = R32((u32)(r_esi+r_ecx*4+0xd40u));
    /* 00528cdd: mov dword ptr [eax + edx*4 + 0xd44], ecx */ W32((u32)(r_eax+r_edx*4+0xd44u), r_ecx);
    /* 00528ce4: jmp 0x528cbb */ goto L_00528cbb;
L_00528ce6:; BB(0x00528ce6);
    /* 00528ce6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528ce9: call 0x528bd0 */ r_esp -= 4; W32(r_esp, 0x528ceeu); f_00528bd0();
    /* 00528cee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00528cf1: mov dword ptr [edx + 0xd44], eax */ W32((u32)(r_edx+0xd44u), r_eax);
L_00528cf7:; BB(0x00528cf7);
    /* 00528cf7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00528cf8: mov esp, ebp */ r_esp = r_ebp;
    /* 00528cfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528cfb: ret 4 */ FN_RET(0x00528ca0); r_esp += 8; return;
}

void f_00528d00(void) /* sub_528D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528d00);
    /* 00528d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00528d03: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528d06: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00528d09: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00528d10: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 00528d15: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00528d17: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00528d1d: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00528d23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x528d25u); call_ind(t); }
    /* 00528d25: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00528d28: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00528d2f: jmp 0x528d3a */ goto L_00528d3a;
L_00528d31:; BB(0x00528d31);
    /* 00528d31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528d34: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00528d37: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00528d3a:; BB(0x00528d3a);
    /* 00528d3a: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528d41: jge 0x528dd6 */ if ((fS==fO)) goto L_00528dd6;
L_00528d47:; BB(0x00528d47);
    /* 00528d47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528d49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528d4b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x528d50u); f_0064c8a0();
    /* 00528d50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528d53: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00528d56: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00528d59: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528d5c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00528d5f: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00528d63: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00528d66: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00528d69: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00528d6c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00528d6f: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00528d73: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00528d75: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00528d78: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00528d7b: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00528d7f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00528d82: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00528d85: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00528d88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00528d89: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00528d8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528d8d: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00528d90: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x528d95u); f_0064c6e0();
    /* 00528d95: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00528d98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528d9a: je 0x528dd1 */ if (fZ) goto L_00528dd1;
L_00528d9c:; BB(0x00528d9c);
    /* 00528d9c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528d9f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00528da2: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00528da6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00528da9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00528dac: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00528daf: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00528db2: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00528db6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00528db8: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00528dbb: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00528dbe: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00528dc2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00528dc5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00528dc8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00528dcb: add edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00528dce: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00528dd1:; BB(0x00528dd1);
    /* 00528dd1: jmp 0x528d31 */ goto L_00528d31;
L_00528dd6:; BB(0x00528dd6);
    /* 00528dd6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00528dd9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00528ddb: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528dde: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00528de1: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00528de3: mov esp, ebp */ r_esp = r_ebp;
    /* 00528de5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528de6: ret 4 */ FN_RET(0x00528d00); r_esp += 8; return;
}

void f_00528ee0(void) /* sub_528EE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528ee0);
    /* 00528ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00528ee3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528ee6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00528ee9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00528ef0: jmp 0x528efb */ goto L_00528efb;
L_00528ef2:; BB(0x00528ef2);
    /* 00528ef2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528ef5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00528ef8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00528efb:; BB(0x00528efb);
    /* 00528efb: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528f02: jge 0x528f23 */ if ((fS==fO)) goto L_00528f23;
L_00528f04:; BB(0x00528f04);
    /* 00528f04: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00528f07: imul ecx, ecx, 0x284 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x284u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00528f0d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00528f10: lea eax, [edx + ecx + 0x288] */ r_eax = (u32)(r_edx+r_ecx+0x288u);
    /* 00528f17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528f1a: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 00528f21: jmp 0x528ef2 */ goto L_00528ef2;
L_00528f23:; BB(0x00528f23);
    /* 00528f23: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00528f2a: jmp 0x528f35 */ goto L_00528f35;
L_00528f2c:; BB(0x00528f2c);
    /* 00528f2c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528f2f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00528f32: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00528f35:; BB(0x00528f35);
    /* 00528f35: cmp dword ptr [ebp - 4], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00528f3c: jge 0x528fe4 */ if ((fS==fO)) goto L_00528fe4;
L_00528f42:; BB(0x00528f42);
    /* 00528f42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528f44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528f46: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x528f4bu); f_0064c8a0();
    /* 00528f4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00528f4e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00528f51: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00528f54: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528f57: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00528f5a: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00528f5e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00528f61: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00528f64: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00528f67: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00528f6a: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 00528f6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00528f70: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00528f73: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00528f76: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 00528f7a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00528f7d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00528f80: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00528f83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00528f84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00528f87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00528f88: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 00528f8b: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x528f90u); f_0064c6e0();
    /* 00528f90: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00528f93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00528f95: je 0x528fdf */ if (fZ) goto L_00528fdf;
L_00528f97:; BB(0x00528f97);
    /* 00528f97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528f9a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00528f9d: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 00528fa1: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00528fa4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00528fa7: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00528faa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00528fad: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 00528fb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00528fb3: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00528fb6: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00528fb9: mov edx, dword ptr [edx + eax + 4] */ r_edx = R32((u32)(r_edx+r_eax+0x4u));
    /* 00528fbd: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00528fc0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00528fc3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00528fc6: imul eax, eax, 0x284 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x284u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00528fcc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00528fcf: lea edx, [ecx + eax + 0x288] */ r_edx = (u32)(r_ecx+r_eax+0x288u);
    /* 00528fd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00528fd9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00528fdc: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
L_00528fdf:; BB(0x00528fdf);
    /* 00528fdf: jmp 0x528f2c */ goto L_00528f2c;
L_00528fe4:; BB(0x00528fe4);
    /* 00528fe4: mov esp, ebp */ r_esp = r_ebp;
    /* 00528fe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00528fe7: ret 4 */ FN_RET(0x00528ee0); r_esp += 8; return;
}

void f_00528ff0(void) /* sub_528FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00528ff0);
    /* 00528ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00528ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00528ff3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00528ff6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00528ff7: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00528ffa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528ffc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00528ffe: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x529003u); f_0064c8a0();
    /* 00529003: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529006: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00529009: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0052900c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052900f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00529012: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00529015: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00529018: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 0052901e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00529020: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00529026: mov edx, dword ptr [eax + 0x2b4] */ r_edx = R32((u32)(r_eax+0x2b4u));
    /* 0052902c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52902eu); call_ind(t); }
    /* 0052902e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00529031: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 00529035: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529039: jne 0x529047 */ if (!fZ) goto L_00529047;
L_0052903b:; BB(0x0052903b);
    /* 0052903b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052903e: mov ecx, dword ptr [eax + 0xd38] */ r_ecx = R32((u32)(r_eax+0xd38u));
    /* 00529044: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_00529047:; BB(0x00529047);
    /* 00529047: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052904a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052904b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x529050u); f_005dcb00();
    /* 00529050: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529053: mov ecx, eax */ r_ecx = r_eax;
    /* 00529055: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x52905au); f_005d5a50();
    /* 0052905a: mov esi, eax */ r_esi = r_eax;
    /* 0052905c: mov eax, dword ptr [0x793370] */ r_eax = R32((u32)(0x793370u));
    /* 00529061: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00529063: mov ecx, dword ptr [0x793370] */ r_ecx = R32((u32)(0x793370u));
    /* 00529069: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0052906f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x529071u); call_ind(t); }
    /* 00529071: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529073: jge 0x52907a */ if ((fS==fO)) goto L_0052907a;
L_00529075:; BB(0x00529075);
    /* 00529075: jmp 0x5291d6 */ goto L_005291d6;
L_0052907a:; BB(0x0052907a);
    /* 0052907a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00529081: jmp 0x52908c */ goto L_0052908c;
L_00529083:; BB(0x00529083);
    /* 00529083: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529086: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00529089: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0052908c:; BB(0x0052908c);
    /* 0052908c: cmp dword ptr [ebp - 8], 0xa1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529093: jge 0x5291d6 */ if ((fS==fO)) goto L_005291d6;
L_00529099:; BB(0x00529099);
    /* 00529099: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0052909c: imul edx, edx, 0x284 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x284u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005290a2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005290a5: lea ecx, [eax + edx + 0x288] */ r_ecx = (u32)(r_eax+r_edx+0x288u);
    /* 005290ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005290af: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005290b3: je 0x5291d1 */ if (fZ) goto L_005291d1;
L_005290b9:; BB(0x005290b9);
    /* 005290b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005290bc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005290bf: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005290c3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005290c6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005290c9: mov ecx, dword ptr [ecx + eax*4 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005290cd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005290cf: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005290d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5290d7u); call_ind(t); }
    /* 005290d7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005290da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005290dc: je 0x5291d1 */ if (fZ) goto L_005291d1;
L_005290e2:; BB(0x005290e2);
    /* 005290e2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005290e5: imul edx, edx, 0x284 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x284u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005290eb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005290ee: lea ecx, [eax + edx + 0x288] */ r_ecx = (u32)(r_eax+r_edx+0x288u);
    /* 005290f5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005290f8: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005290fb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005290fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00529101: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00529102: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x529107u); f_005dcb00();
    /* 00529107: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052910a: mov ecx, eax */ r_ecx = r_eax;
    /* 0052910c: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x529111u); f_005d5a50();
    /* 00529111: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00529114: jge 0x529141 */ if ((fS==fO)) goto L_00529141;
L_00529116:; BB(0x00529116);
    /* 00529116: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00529118: push 0x6c3898 */ { u32 v = 0x6c3898u; r_esp -= 4; W32(r_esp, v); }
    /* 0052911d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x529122u); f_00630f40();
    /* 00529122: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529126: push 0x6c3878 */ { u32 v = 0x6c3878u; r_esp -= 4; W32(r_esp, v); }
    /* 0052912b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x529130u); f_00630f40();
    /* 00529130: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00529133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00529134: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x529139u); f_0062ff10();
    /* 00529139: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052913c: jmp 0x5291d6 */ goto L_005291d6;
L_00529141:; BB(0x00529141);
    /* 00529141: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00529144: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00529147: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0052914b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0052914e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00529151: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00529154: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00529157: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0052915b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052915d: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00529160: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00529163: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00529167: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052916a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0052916d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00529170: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00529173: jne 0x5291a9 */ if (!fZ) goto L_005291a9;
L_00529175:; BB(0x00529175);
    /* 00529175: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 00529179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052917b: jne 0x5291a3 */ if (!fZ) goto L_005291a3;
L_0052917d:; BB(0x0052917d);
    /* 0052917d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052917f: push 0x6c3864 */ { u32 v = 0x6c3864u; r_esp -= 4; W32(r_esp, v); }
    /* 00529184: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x529189u); f_00630f40();
    /* 00529189: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052918c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052918d: push 0x6c384c */ { u32 v = 0x6c384cu; r_esp -= 4; W32(r_esp, v); }
    /* 00529192: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x529197u); f_00630f40();
    /* 00529197: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052919a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052919b: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5291a0u); f_0062ff10();
    /* 005291a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005291a3:; BB(0x005291a3);
    /* 005291a3: mov byte ptr [ebp - 0x19], 1 */ W8((u32)(r_ebp+0xffffffe7u), 0x1u);
    /* 005291a7: jmp 0x5291d1 */ goto L_005291d1;
L_005291a9:; BB(0x005291a9);
    /* 005291a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005291ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005291ad: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005291b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005291b1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005291b4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005291b7: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005291bb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005291be: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005291c1: mov edx, dword ptr [eax + edx*4 + 4] */ r_edx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005291c5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005291c7: mov ecx, edx */ r_ecx = r_edx;
    /* 005291c9: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 005291cf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5291d1u); call_ind(t); }
L_005291d1:; BB(0x005291d1);
    /* 005291d1: jmp 0x529083 */ goto L_00529083;
L_005291d6:; BB(0x005291d6);
    /* 005291d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005291d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005291d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005291da: ret 4 */ FN_RET(0x00528ff0); r_esp += 8; return;
}

