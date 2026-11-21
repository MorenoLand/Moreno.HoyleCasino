#include "protos.h"

void f_00411310(void) /* BlackjackSayHumanLineScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411310);
    /* 00411310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411311: mov ebp, esp */ r_ebp = r_esp;
    /* 00411313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00411314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411317: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411319: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041131c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x411321u); f_005fc0d0();
    /* 00411321: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411324: mov dword ptr [eax], 0x6b3b38 */ W32((u32)(r_eax), 0x6b3b38u);
    /* 0041132a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041132d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00411330: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00411333: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00411336: mov esp, ebp */ r_esp = r_ebp;
    /* 00411338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00411339: ret 4 */ FN_RET(0x00411310); r_esp += 8; return;
}

void f_00411340(void) /* BlackjackSayHumanLineScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00411340);
    /* 00411340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00411341: mov ebp, esp */ r_ebp = r_esp;
    /* 00411343: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00411346: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00411349: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0041134e: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 00411354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00411357: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041135a: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x41135fu); f_005fc360();
    /* 0041135f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00411362: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411366: je 0x411377 */ if (fZ) goto L_00411377;
L_00411368:; BB(0x00411368);
    /* 00411368: cmp dword ptr [ebp - 0x40], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041136c: je 0x411484 */ if (fZ) goto L_00411484;
L_00411372:; BB(0x00411372);
    /* 00411372: jmp 0x411507 */ goto L_00411507;
L_00411377:; BB(0x00411377);
    /* 00411377: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00411379: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041137c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041137e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00411381: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00411384: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x411386u); call_ind(t); }
    /* 00411386: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0041138d: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411391: je 0x411451 */ if (fZ) goto L_00411451;
L_00411397:; BB(0x00411397);
    /* 00411397: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041139a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041139b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4113a0u); f_005dcb00();
    /* 004113a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004113a3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004113a6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004113a9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4113aeu); f_0063aac0();
    /* 004113ae: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004113b0: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004113b3: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004113b7: je 0x4113d5 */ if (fZ) goto L_004113d5;
L_004113b9:; BB(0x004113b9);
    /* 004113b9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004113bc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4113c1u); f_0063aac0();
    /* 004113c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004113c3: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004113c6: cmp dword ptr [ebp - 0x34], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004113ca: je 0x4113d5 */ if (fZ) goto L_004113d5;
L_004113cc:; BB(0x004113cc);
    /* 004113cc: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 004113d3: jmp 0x4113dc */ goto L_004113dc;
L_004113d5:; BB(0x004113d5);
    /* 004113d5: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_004113dc:; BB(0x004113dc);
    /* 004113dc: movzx eax, byte ptr [ebp - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 004113e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004113e2: je 0x411451 */ if (fZ) goto L_00411451;
L_004113e4:; BB(0x004113e4);
    /* 004113e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004113e7: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004113ea: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 004113f1: fldz  */ FPUSH(0.0);
    /* 004113f3: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004113f6: fld1  */ FPUSH(1.0);
    /* 004113f8: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004113fb: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004113fe: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00411401: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00411404: cmp dword ptr [ebp - 0x48], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00411408: ja 0x411451 */ if ((!fC&&!fZ)) goto L_00411451;
L_0041140a:; BB(0x0041140a);
    /* 0041140a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041140d: jmp dword ptr [ecx*4 + 0x41150c] */ { u32 t = R32((u32)(r_ecx*4+0x41150cu)); switch (t) { case 0x411414u: goto L_00411414; case 0x41141du: goto L_0041141d; case 0x411426u: goto L_00411426; case 0x41142fu: goto L_0041142f; case 0x411438u: goto L_00411438; case 0x411441u: goto L_00411441; case 0x41144au: goto L_0041144a; default: UNSUP(0x0041140d, "jump table entry is not a known target"); } }
L_00411414:; BB(0x00411414);
    /* 00411414: mov dword ptr [ebp - 0x24], 0x7d5 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d5u);
    /* 0041141b: jmp 0x411451 */ goto L_00411451;
L_0041141d:; BB(0x0041141d);
    /* 0041141d: mov dword ptr [ebp - 0x24], 0x7d0 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d0u);
    /* 00411424: jmp 0x411451 */ goto L_00411451;
L_00411426:; BB(0x00411426);
    /* 00411426: mov dword ptr [ebp - 0x24], 0x7d2 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d2u);
    /* 0041142d: jmp 0x411451 */ goto L_00411451;
L_0041142f:; BB(0x0041142f);
    /* 0041142f: mov dword ptr [ebp - 0x24], 0x7d4 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d4u);
    /* 00411436: jmp 0x411451 */ goto L_00411451;
L_00411438:; BB(0x00411438);
    /* 00411438: mov dword ptr [ebp - 0x24], 0x830 */ W32((u32)(r_ebp+0xffffffdcu), 0x830u);
    /* 0041143f: jmp 0x411451 */ goto L_00411451;
L_00411441:; BB(0x00411441);
    /* 00411441: mov dword ptr [ebp - 0x24], 0x7d8 */ W32((u32)(r_ebp+0xffffffdcu), 0x7d8u);
    /* 00411448: jmp 0x411451 */ goto L_00411451;
L_0041144a:; BB(0x0041144a);
    /* 0041144a: mov dword ptr [ebp - 0x24], 0x82f */ W32((u32)(r_ebp+0xffffffdcu), 0x82fu);
L_00411451:; BB(0x00411451);
    /* 00411451: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00411455: je 0x411470 */ if (fZ) goto L_00411470;
L_00411457:; BB(0x00411457);
    /* 00411457: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411459: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041145b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041145e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041145f: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00411462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00411463: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00411469: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x41146eu); f_00639390();
    /* 0041146e: jmp 0x41147f */ goto L_0041147f;
L_00411470:; BB(0x00411470);
    /* 00411470: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00411472: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00411475: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00411477: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041147a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0041147d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41147fu); call_ind(t); }
L_0041147f:; BB(0x0041147f);
    /* 0041147f: jmp 0x411507 */ goto L_00411507;
L_00411484:; BB(0x00411484);
    /* 00411484: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00411487: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0041148a: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0041148d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041148f: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00411494: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00411497: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x41149cu); f_005fc420();
    /* 0041149c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041149f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 004114a2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004114a5: cmp dword ptr [ebp - 0x4c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004114a9: jl 0x4114cc */ if ((fS!=fO)) goto L_004114cc;
L_004114ab:; BB(0x004114ab);
    /* 004114ab: cmp dword ptr [ebp - 0x4c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004114af: jle 0x4114b3 */ if ((fZ||fS!=fO)) goto L_004114b3;
L_004114b1:; BB(0x004114b1);
    /* 004114b1: jmp 0x4114cc */ goto L_004114cc;
L_004114b3:; BB(0x004114b3);
    /* 004114b3: cmp dword ptr [ebp - 0x2c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004114b7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004114ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004114bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004114be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004114bf: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004114c5: call 0x41a570 */ r_esp -= 4; W32(r_esp, 0x4114cau); f_0041a570();
    /* 004114ca: jmp 0x4114ea */ goto L_004114ea;
L_004114cc:; BB(0x004114cc);
    /* 004114cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004114ce: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004114d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004114d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004114d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004114d6: mov ecx, dword ptr [0x790328] */ r_ecx = R32((u32)(0x790328u));
    /* 004114dc: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x4114e1u); f_00413360();
    /* 004114e1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004114e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004114e6: jne 0x4114ea */ if (!fZ) goto L_004114ea;
L_004114e8:; BB(0x004114e8);
    /* 004114e8: jmp 0x411507 */ goto L_00411507;
L_004114ea:; BB(0x004114ea);
    /* 004114ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004114ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004114ee: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 004114f4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004114f7: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004114fd: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00411500: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00411502: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00411505: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x411507u); call_ind(t); }
L_00411507:; BB(0x00411507);
    /* 00411507: mov esp, ebp */ r_esp = r_ebp;
    /* 00411509: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041150a: ret  */ FN_RET(0x00411340); r_esp += 4; return;
}

