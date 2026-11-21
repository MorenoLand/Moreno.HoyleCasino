#include "protos.h"

void f_00593530(void) /* FourCardPokerDiscardDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00593530);
    /* 00593530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00593531: mov ebp, esp */ r_ebp = r_esp;
    /* 00593533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00593534: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00593537: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00593539: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059353b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059353e: call 0x518900 */ r_esp -= 4; W32(r_esp, 0x593543u); f_00518900();
    /* 00593543: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00593546: mov dword ptr [eax], 0x6ce3ac */ W32((u32)(r_eax), 0x6ce3acu);
    /* 0059354c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059354f: mov dword ptr [ecx + 0x1e0], 0 */ W32((u32)(r_ecx+0x1e0u), 0x0u);
    /* 00593559: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059355c: mov dword ptr [edx + 0x1e4], 0 */ W32((u32)(r_edx+0x1e4u), 0x0u);
    /* 00593566: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00593569: mov dword ptr [eax + 0x1e8], 0 */ W32((u32)(r_eax+0x1e8u), 0x0u);
    /* 00593573: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00593576: mov esp, ebp */ r_esp = r_ebp;
    /* 00593578: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00593579: ret  */ FN_RET(0x00593530); r_esp += 4; return;
}

void f_00593580(void) /* FourCardPokerDiscardDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00593580);
    /* 00593580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00593581: mov ebp, esp */ r_ebp = r_esp;
    /* 00593583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00593585: push 0x6a720e */ { u32 v = 0x6a720eu; r_esp -= 4; W32(r_esp, v); }
    /* 0059358a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00593590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593591: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00593594: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00593599: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059359b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059359c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059359f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005935a5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005935a8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005935ab: mov dword ptr [eax], 0x6ce3ac */ W32((u32)(r_eax), 0x6ce3acu);
    /* 005935b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005935b8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005935bb: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 005935c1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005935c4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005935c7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005935ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005935cd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005935d0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005935d4: je 0x593610 */ if (fZ) goto L_00593610;
L_005935d6:; BB(0x005935d6);
    /* 005935d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005935d9: cmp dword ptr [edx - 4], 0 */ {  u32 a = R32((u32)(r_edx+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005935dd: je 0x5935f2 */ if (fZ) goto L_005935f2;
L_005935df:; BB(0x005935df);
    /* 005935df: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005935e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005935e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005935e6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005935e9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005935eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5935edu); call_ind(t); }
    /* 005935ed: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005935f0: jmp 0x593608 */ goto L_00593608;
L_005935f2:; BB(0x005935f2);
    /* 005935f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005935f5: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005935f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005935f9: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5935feu); f_00686cae();
    /* 005935fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593601: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00593608:; BB(0x00593608);
    /* 00593608: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0059360b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0059360e: jmp 0x593617 */ goto L_00593617;
L_00593610:; BB(0x00593610);
    /* 00593610: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00593617:; BB(0x00593617);
    /* 00593617: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0059361a: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00593620: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00593623: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00593626: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00593629: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059362c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0059362f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593633: je 0x59366f */ if (fZ) goto L_0059366f;
L_00593635:; BB(0x00593635);
    /* 00593635: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00593638: cmp dword ptr [ecx - 4], 0 */ {  u32 a = R32((u32)(r_ecx+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059363c: je 0x593651 */ if (fZ) goto L_00593651;
L_0059363e:; BB(0x0059363e);
    /* 0059363e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00593640: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00593643: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00593645: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00593648: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059364a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59364cu); call_ind(t); }
    /* 0059364c: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0059364f: jmp 0x593667 */ goto L_00593667;
L_00593651:; BB(0x00593651);
    /* 00593651: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00593654: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00593657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593658: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x59365du); f_00686cae();
    /* 0059365d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593660: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00593667:; BB(0x00593667);
    /* 00593667: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059366a: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0059366d: jmp 0x593676 */ goto L_00593676;
L_0059366f:; BB(0x0059366f);
    /* 0059366f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00593676:; BB(0x00593676);
    /* 00593676: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00593679: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0059367f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00593682: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00593685: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00593688: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0059368b: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0059368e: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593692: je 0x5936ce */ if (fZ) goto L_005936ce;
L_00593694:; BB(0x00593694);
    /* 00593694: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00593697: cmp dword ptr [eax - 4], 0 */ {  u32 a = R32((u32)(r_eax+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059369b: je 0x5936b0 */ if (fZ) goto L_005936b0;
L_0059369d:; BB(0x0059369d);
    /* 0059369d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0059369f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005936a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005936a4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005936a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005936a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5936abu); call_ind(t); }
    /* 005936ab: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005936ae: jmp 0x5936c6 */ goto L_005936c6;
L_005936b0:; BB(0x005936b0);
    /* 005936b0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005936b3: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005936b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005936b7: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5936bcu); f_00686cae();
    /* 005936bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005936bf: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005936c6:; BB(0x005936c6);
    /* 005936c6: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005936c9: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005936cc: jmp 0x5936d5 */ goto L_005936d5;
L_005936ce:; BB(0x005936ce);
    /* 005936ce: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005936d5:; BB(0x005936d5);
    /* 005936d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005936dc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005936df: call 0x518980 */ r_esp -= 4; W32(r_esp, 0x5936e4u); f_00518980();
    /* 005936e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005936e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005936ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005936ef: mov esp, ebp */ r_esp = r_ebp;
    /* 005936f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005936f2: ret  */ FN_RET(0x00593580); r_esp += 4; return;
}

void f_00593700(void) /* FourCardPokerDiscardDialog::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00593700);
    /* 00593700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00593701: mov ebp, esp */ r_ebp = r_esp;
    /* 00593703: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00593706: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00593707: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0059370a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00593711: jmp 0x59371c */ goto L_0059371c;
L_00593713:; BB(0x00593713);
    /* 00593713: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00593716: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00593719: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0059371c:; BB(0x0059371c);
    /* 0059371c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059371f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00593722: cmp edx, dword ptr [ecx + 0x1f4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1f4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00593728: jge 0x59374c */ if ((fS==fO)) goto L_0059374c;
L_0059372a:; BB(0x0059372a);
    /* 0059372a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059372d: imul eax, eax, 0x1e8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00593733: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00593736: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 0059373c: movzx eax, byte ptr [edx + eax + 0x1dc] */ r_eax = (u32)R8((u32)(r_edx+r_eax+0x1dcu));
    /* 00593744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593746: je 0x59374a */ if (fZ) goto L_0059374a;
L_00593748:; BB(0x00593748);
    /* 00593748: jmp 0x59374c */ goto L_0059374c;
L_0059374a:; BB(0x0059374a);
    /* 0059374a: jmp 0x593713 */ goto L_00593713;
L_0059374c:; BB(0x0059374c);
    /* 0059374c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059374f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00593752: cmp edx, dword ptr [ecx + 0x1f4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00593758: jne 0x593785 */ if (!fZ) goto L_00593785;
L_0059375a:; BB(0x0059375a);
    /* 0059375a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059375c: push 0x6ce41c */ { u32 v = 0x6ce41cu; r_esp -= 4; W32(r_esp, v); }
    /* 00593761: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x593766u); f_00630f40();
    /* 00593766: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059376a: push 0x6ce3f8 */ { u32 v = 0x6ce3f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0059376f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x593774u); f_00630f40();
    /* 00593774: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00593778: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x59377du); f_0062ff10();
    /* 0059377d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00593780: jmp 0x593842 */ goto L_00593842;
L_00593785:; BB(0x00593785);
    /* 00593785: mov ecx, dword ptr [0x7935a8] */ r_ecx = R32((u32)(0x7935a8u));
    /* 0059378b: call 0x597d30 */ r_esp -= 4; W32(r_esp, 0x593790u); f_00597d30();
    /* 00593790: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00593793: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00593796: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00593799: jmp 0x5937a4 */ goto L_005937a4;
L_0059379b:; BB(0x0059379b);
    /* 0059379b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059379e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005937a1: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005937a4:; BB(0x005937a4);
    /* 005937a4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005937a7: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 005937ad: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005937b0: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005937b3: jge 0x5937ec */ if ((fS==fO)) goto L_005937ec;
L_005937b5:; BB(0x005937b5);
    /* 005937b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005937b8: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005937bb: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 005937c1: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 005937c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005937cb: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005937ce: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 005937d4: lea ecx, [edx + ecx + 0xc8] */ r_ecx = (u32)(r_edx+r_ecx+0xc8u);
    /* 005937db: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005937de: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 005937e1: mov ax, word ptr [eax + esi*2 + 2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax+r_esi*2+0x2u))) & 0xffffu);
    /* 005937e6: mov word ptr [ecx + edx*2], ax */ W16((u32)(r_ecx+r_edx*2), (u16)r_eax);
    /* 005937ea: jmp 0x59379b */ goto L_0059379b;
L_005937ec:; BB(0x005937ec);
    /* 005937ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005937ef: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005937f2: mov edx, dword ptr [0x7935a8] */ r_edx = R32((u32)(0x7935a8u));
    /* 005937f8: lea eax, [edx + ecx + 0xc8] */ r_eax = (u32)(r_edx+r_ecx+0xc8u);
    /* 005937ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00593802: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00593808: mov word ptr [eax + edx*2 - 2], 0 */ W16((u32)(r_eax+r_edx*2+0xfffffffeu), 0x0u);
    /* 0059380f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00593812: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x593817u); f_005f8990();
    /* 00593817: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 0059381c: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 00593826: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00593828: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059382a: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00593830: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00593833: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 00593838: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059383b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059383d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00593840: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x593842u); call_ind(t); }
L_00593842:; BB(0x00593842);
    /* 00593842: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00593843: mov esp, ebp */ r_esp = r_ebp;
    /* 00593845: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00593846: ret  */ FN_RET(0x00593700); r_esp += 4; return;
}

void f_005938d0(void) /* FourCardPokerDiscardDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005938d0);
    /* 005938d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005938d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005938d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005938d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005938d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005938da: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 005938de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005938e0: jne 0x5938f1 */ if (!fZ) goto L_005938f1;
L_005938e2:; BB(0x005938e2);
    /* 005938e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005938e5: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5938eau); f_005f88f0();
    /* 005938ea: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005938ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005938ef: je 0x5938f3 */ if (fZ) goto L_005938f3;
L_005938f1:; BB(0x005938f1);
    /* 005938f1: jmp 0x5938ff */ goto L_005938ff;
L_005938f3:; BB(0x005938f3);
    /* 005938f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005938f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005938f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005938fa: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x5938ffu); f_005f72f0();
L_005938ff:; BB(0x005938ff);
    /* 005938ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00593901: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00593902: ret 4 */ FN_RET(0x005938d0); r_esp += 8; return;
}

