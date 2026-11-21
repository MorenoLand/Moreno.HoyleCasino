#include "protos.h"

void f_00445600(void) /* sub_445600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445600);
    /* 00445600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445601: mov ebp, esp */ r_ebp = r_esp;
    /* 00445603: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445606: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00445609: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00445610: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00445617: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0044561e: jmp 0x445629 */ goto L_00445629;
L_00445620:; BB(0x00445620);
    /* 00445620: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445623: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445626: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00445629:; BB(0x00445629);
    /* 00445629: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044562d: jge 0x44565f */ if ((fS==fO)) goto L_0044565f;
L_0044562f:; BB(0x0044562f);
    /* 0044562f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445632: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445635: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445638: mov eax, dword ptr [edx + ecx + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx+0x48u));
    /* 0044563c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044563f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445642: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445645: jle 0x44565d */ if ((fZ||fS!=fO)) goto L_0044565d;
L_00445647:; BB(0x00445647);
    /* 00445647: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044564a: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044564d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445650: mov ecx, dword ptr [eax + edx + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx+0x48u));
    /* 00445654: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00445657: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044565a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0044565d:; BB(0x0044565d);
    /* 0044565d: jmp 0x445620 */ goto L_00445620;
L_0044565f:; BB(0x0044565f);
    /* 0044565f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445662: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445665: jne 0x44566b */ if (!fZ) goto L_0044566b;
L_00445667:; BB(0x00445667);
    /* 00445667: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445669: jmp 0x445681 */ goto L_00445681;
L_0044566b:; BB(0x0044566b);
    /* 0044566b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044566e: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445671: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445674: mov eax, dword ptr [edx + ecx + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx+0x48u));
    /* 00445678: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044567b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044567e: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00445681:; BB(0x00445681);
    /* 00445681: mov esp, ebp */ r_esp = r_ebp;
    /* 00445683: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445684: ret 4 */ FN_RET(0x00445600); r_esp += 8; return;
}

void f_00445690(void) /* sub_445690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445690);
    /* 00445690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445691: mov ebp, esp */ r_ebp = r_esp;
    /* 00445693: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445696: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445697: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0044569a: mov dword ptr [ebp - 8], 8 */ W32((u32)(r_ebp+0xfffffff8u), 0x8u);
    /* 004456a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004456a4: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004456a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004456aa: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 004456ae: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004456b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004456b4: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004456b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004456ba: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004456bd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004456c0: mov dword ptr [edx + eax + 0x48], ecx */ W32((u32)(r_edx+r_eax+0x48u), r_ecx);
    /* 004456c4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004456c7: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004456ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004456cd: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004456d0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004456d3: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 004456d6: mov eax, dword ptr [esi + eax + 0x50] */ r_eax = R32((u32)(r_esi+r_eax+0x50u));
    /* 004456da: mov dword ptr [edx + ecx + 0x68], eax */ W32((u32)(r_edx+r_ecx+0x68u), r_eax);
    /* 004456de: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 004456e4: cmp dword ptr [ecx + 0xb0], 2 */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004456eb: jne 0x445714 */ if (!fZ) goto L_00445714;
L_004456ed:; BB(0x004456ed);
    /* 004456ed: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004456f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004456f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004456f4: call 0x445600 */ r_esp -= 4; W32(r_esp, 0x4456f9u); f_00445600();
    /* 004456f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004456fb: jne 0x445714 */ if (!fZ) goto L_00445714;
L_004456fd:; BB(0x004456fd);
    /* 004456fd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004456ff: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445704u); f_0062fbf0();
    /* 00445704: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445707: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044570a: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044570d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445710: mov dword ptr [edx + ecx + 0x68], eax */ W32((u32)(r_edx+r_ecx+0x68u), r_eax);
L_00445714:; BB(0x00445714);
    /* 00445714: mov eax, dword ptr [0x7906f4] */ r_eax = R32((u32)(0x7906f4u));
    /* 00445719: cmp dword ptr [eax + 0xb0], 0 */ {  u32 a = R32((u32)(r_eax+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445720: jle 0x44574a */ if ((fZ||fS!=fO)) goto L_0044574a;
L_00445722:; BB(0x00445722);
    /* 00445722: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00445725: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445726: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445729: call 0x445600 */ r_esp -= 4; W32(r_esp, 0x44572eu); f_00445600();
    /* 0044572e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445731: jl 0x44574a */ if ((fS!=fO)) goto L_0044574a;
L_00445733:; BB(0x00445733);
    /* 00445733: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00445735: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44573au); f_0062fbf0();
    /* 0044573a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044573d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00445740: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445743: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445746: mov dword ptr [ecx + edx + 0x68], eax */ W32((u32)(r_ecx+r_edx+0x68u), r_eax);
L_0044574a:; BB(0x0044574a);
    /* 0044574a: mov edx, dword ptr [0x7906f4] */ r_edx = R32((u32)(0x7906f4u));
    /* 00445750: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00445756: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00445759: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044575d: je 0x445774 */ if (fZ) goto L_00445774;
L_0044575f:; BB(0x0044575f);
    /* 0044575f: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445763: je 0x4457df */ if (fZ) goto L_004457df;
L_00445765:; BB(0x00445765);
    /* 00445765: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445769: je 0x445930 */ if (fZ) goto L_00445930;
L_0044576f:; BB(0x0044576f);
    /* 0044576f: jmp 0x4459db */ goto L_004459db;
L_00445774:; BB(0x00445774);
    /* 00445774: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044577b: jmp 0x445786 */ goto L_00445786;
L_0044577d:; BB(0x0044577d);
    /* 0044577d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445780: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00445783: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00445786:; BB(0x00445786);
    /* 00445786: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044578a: jge 0x4457a6 */ if ((fS==fO)) goto L_004457a6;
L_0044578c:; BB(0x0044578c);
    /* 0044578c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044578f: mov eax, dword ptr [0x7906f4] */ r_eax = R32((u32)(0x7906f4u));
    /* 00445794: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00445798: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x44579du); f_005eb220();
    /* 0044579d: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004457a0: jl 0x4457a4 */ if ((fS!=fO)) goto L_004457a4;
L_004457a2:; BB(0x004457a2);
    /* 004457a2: jmp 0x4457a6 */ goto L_004457a6;
L_004457a4:; BB(0x004457a4);
    /* 004457a4: jmp 0x44577d */ goto L_0044577d;
L_004457a6:; BB(0x004457a6);
    /* 004457a6: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004457aa: jge 0x4457ca */ if ((fS==fO)) goto L_004457ca;
L_004457ac:; BB(0x004457ac);
    /* 004457ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004457af: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004457b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004457b5: mov eax, dword ptr [edx + ecx + 0x68] */ r_eax = R32((u32)(r_edx+r_ecx+0x68u));
    /* 004457b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004457ba: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4457bfu); f_0062fbf0();
    /* 004457bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004457c2: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004457c5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004457c8: jmp 0x4457da */ goto L_004457da;
L_004457ca:; BB(0x004457ca);
    /* 004457ca: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004457cc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4457d1u); f_0062fbf0();
    /* 004457d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004457d4: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004457d7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004457da:; BB(0x004457da);
    /* 004457da: jmp 0x4459db */ goto L_004459db;
L_004457df:; BB(0x004457df);
    /* 004457df: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004457e2: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004457e5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004457e8: cmp dword ptr [edx + ecx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004457ed: jne 0x4458f9 */ if (!fZ) goto L_004458f9;
L_004457f3:; BB(0x004457f3);
    /* 004457f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004457f6: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004457f9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004457fc: movzx edx, byte ptr [ecx + eax + 0x78] */ r_edx = (u32)R8((u32)(r_ecx+r_eax+0x78u));
    /* 00445801: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445803: je 0x445859 */ if (fZ) goto L_00445859;
L_00445805:; BB(0x00445805);
    /* 00445805: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445808: movzx ecx, byte ptr [eax + 0x25d] */ r_ecx = (u32)R8((u32)(r_eax+0x25du));
    /* 0044580f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445811: jne 0x44583c */ if (!fZ) goto L_0044583c;
L_00445813:; BB(0x00445813);
    /* 00445813: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445816: mov byte ptr [edx + 0x25d], 1 */ W8((u32)(r_edx+0x25du), 0x1u);
    /* 0044581d: mov eax, dword ptr [0x7906f4] */ r_eax = R32((u32)(0x7906f4u));
    /* 00445822: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00445825: call 0x43d2c0 */ r_esp -= 4; W32(r_esp, 0x44582au); f_0043d2c0();
    /* 0044582a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044582d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044582e: mov edx, dword ptr [0x7906f4] */ r_edx = R32((u32)(0x7906f4u));
    /* 00445834: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00445837: call 0x43d6c0 */ r_esp -= 4; W32(r_esp, 0x44583cu); f_0043d6c0();
L_0044583c:; BB(0x0044583c);
    /* 0044583c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044583f: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445842: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445845: mov dword ptr [ecx + eax + 0x74], 0x14 */ W32((u32)(r_ecx+r_eax+0x74u), 0x14u);
    /* 0044584d: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 00445854: jmp 0x4458f7 */ goto L_004458f7;
L_00445859:; BB(0x00445859);
    /* 00445859: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044585b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445860u); f_0062fbf0();
    /* 00445860: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445863: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445865: je 0x4458a3 */ if (fZ) goto L_004458a3;
L_00445867:; BB(0x00445867);
    /* 00445867: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044586a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044586b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044586e: call 0x445600 */ r_esp -= 4; W32(r_esp, 0x445873u); f_00445600();
    /* 00445873: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445875: je 0x4458a3 */ if (fZ) goto L_004458a3;
L_00445877:; BB(0x00445877);
    /* 00445877: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00445879: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44587eu); f_0062fbf0();
    /* 0044587e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445881: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445884: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00445887: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00445889: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44588eu); f_0062fbf0();
    /* 0044588e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445891: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445894: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00445897: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044589a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044589d: mov dword ptr [edx + ecx + 0x74], eax */ W32((u32)(r_edx+r_ecx+0x74u), r_eax);
    /* 004458a1: jmp 0x4458f7 */ goto L_004458f7;
L_004458a3:; BB(0x004458a3);
    /* 004458a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004458a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004458a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004458aa: call 0x445600 */ r_esp -= 4; W32(r_esp, 0x4458afu); f_00445600();
    /* 004458af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004458b1: jne 0x4458db */ if (!fZ) goto L_004458db;
L_004458b3:; BB(0x004458b3);
    /* 004458b3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004458b5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4458bau); f_0062fbf0();
    /* 004458ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004458bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004458bf: je 0x4458db */ if (fZ) goto L_004458db;
L_004458c1:; BB(0x004458c1);
    /* 004458c1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004458c3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4458c8u); f_0062fbf0();
    /* 004458c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004458cb: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004458ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004458d1: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004458d4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004458d7: mov dword ptr [edx + ecx + 0x68], eax */ W32((u32)(r_edx+r_ecx+0x68u), r_eax);
L_004458db:; BB(0x004458db);
    /* 004458db: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004458de: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004458e1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004458e4: mov edx, dword ptr [ecx + eax + 0x68] */ r_edx = R32((u32)(r_ecx+r_eax+0x68u));
    /* 004458e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004458e9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4458eeu); f_0062fbf0();
    /* 004458ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004458f1: add eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004458f4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004458f7:; BB(0x004458f7);
    /* 004458f7: jmp 0x44592b */ goto L_0044592b;
L_004458f9:; BB(0x004458f9);
    /* 004458f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004458fc: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004458ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445902: mov edx, dword ptr [ecx + eax + 0x74] */ r_edx = R32((u32)(r_ecx+r_eax+0x74u));
    /* 00445906: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00445909: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044590c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044590f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445912: mov dword ptr [ecx + eax + 0x74], edx */ W32((u32)(r_ecx+r_eax+0x74u), r_edx);
    /* 00445916: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00445919: mov eax, dword ptr [0x7906f4] */ r_eax = R32((u32)(0x7906f4u));
    /* 0044591e: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00445922: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 00445928: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0044592b:; BB(0x0044592b);
    /* 0044592b: jmp 0x4459db */ goto L_004459db;
L_00445930:; BB(0x00445930);
    /* 00445930: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00445933: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445936: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445939: cmp dword ptr [ecx + eax + 0x74], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044593e: jne 0x4459a9 */ if (!fZ) goto L_004459a9;
L_00445940:; BB(0x00445940);
    /* 00445940: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00445942: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445947u); f_0062fbf0();
    /* 00445947: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044594a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044594c: je 0x44598b */ if (fZ) goto L_0044598b;
L_0044594e:; BB(0x0044594e);
    /* 0044594e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00445951: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445952: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445955: call 0x445600 */ r_esp -= 4; W32(r_esp, 0x44595au); f_00445600();
    /* 0044595a: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044595d: jl 0x44598b */ if ((fS!=fO)) goto L_0044598b;
L_0044595f:; BB(0x0044595f);
    /* 0044595f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00445961: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445966u); f_0062fbf0();
    /* 00445966: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445969: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044596c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044596f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00445971: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445976u); f_0062fbf0();
    /* 00445976: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445979: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044597c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044597f: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445982: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445985: mov dword ptr [edx + ecx + 0x74], eax */ W32((u32)(r_edx+r_ecx+0x74u), r_eax);
    /* 00445989: jmp 0x4459a7 */ goto L_004459a7;
L_0044598b:; BB(0x0044598b);
    /* 0044598b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044598e: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445991: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445994: mov edx, dword ptr [ecx + eax + 0x68] */ r_edx = R32((u32)(r_ecx+r_eax+0x68u));
    /* 00445998: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445999: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44599eu); f_0062fbf0();
    /* 0044599e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004459a1: add eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004459a4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004459a7:; BB(0x004459a7);
    /* 004459a7: jmp 0x4459db */ goto L_004459db;
L_004459a9:; BB(0x004459a9);
    /* 004459a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004459ac: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004459af: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004459b2: mov edx, dword ptr [ecx + eax + 0x74] */ r_edx = R32((u32)(r_ecx+r_eax+0x74u));
    /* 004459b6: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004459b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004459bc: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004459bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004459c2: mov dword ptr [ecx + eax + 0x74], edx */ W32((u32)(r_ecx+r_eax+0x74u), r_edx);
    /* 004459c6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004459c9: mov eax, dword ptr [0x7906f4] */ r_eax = R32((u32)(0x7906f4u));
    /* 004459ce: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 004459d2: mov edx, dword ptr [ecx + 0x178] */ r_edx = R32((u32)(r_ecx+0x178u));
    /* 004459d8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_004459db:; BB(0x004459db);
    /* 004459db: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004459df: jle 0x4459f1 */ if ((fZ||fS!=fO)) goto L_004459f1;
L_004459e1:; BB(0x004459e1);
    /* 004459e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004459e3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4459e8u); f_0062fbf0();
    /* 004459e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004459eb: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004459ee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004459f1:; BB(0x004459f1);
    /* 004459f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004459f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004459f5: mov esp, ebp */ r_esp = r_ebp;
    /* 004459f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004459f8: ret 4 */ FN_RET(0x00445690); r_esp += 8; return;
}

void f_00445a00(void) /* sub_445A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445a00);
    /* 00445a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00445a03: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445a06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00445a09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00445a10: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00445a13: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445a16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445a17: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00445a1d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00445a20: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x445a25u); f_005fb810();
    /* 00445a25: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00445a28: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00445a2d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445a30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00445a32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445a35: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00445a3b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x445a3du); call_ind(t); }
    /* 00445a3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445a3e: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x445a43u); f_00686ec0();
    /* 00445a43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445a46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445a48: je 0x445a7f */ if (fZ) goto L_00445a7f;
L_00445a4a:; BB(0x00445a4a);
    /* 00445a4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00445a4d: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445a51: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00445a57: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00445a5a: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x445a5fu); f_005fb810();
    /* 00445a5f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00445a62: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445a65: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00445a67: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445a6a: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00445a70: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x445a72u); call_ind(t); }
    /* 00445a72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445a73: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x445a79u); call_ind(t); }
    /* 00445a79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445a7c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00445a7f:; BB(0x00445a7f);
    /* 00445a7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445a82: mov esp, ebp */ r_esp = r_ebp;
    /* 00445a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445a85: ret 4 */ FN_RET(0x00445a00); r_esp += 8; return;
}

void f_00445a90(void) /* sub_445A90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445a90);
    /* 00445a90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445a91: mov ebp, esp */ r_ebp = r_esp;
    /* 00445a93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445a96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00445a99: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00445aa0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00445aa7: jmp 0x445ab2 */ goto L_00445ab2;
L_00445aa9:; BB(0x00445aa9);
    /* 00445aa9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445aac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445aaf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00445ab2:; BB(0x00445ab2);
    /* 00445ab2: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445ab6: jge 0x445acc */ if ((fS==fO)) goto L_00445acc;
L_00445ab8:; BB(0x00445ab8);
    /* 00445ab8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445abb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445abc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445abf: call 0x445a00 */ r_esp -= 4; W32(r_esp, 0x445ac4u); f_00445a00();
    /* 00445ac4: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445ac7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00445aca: jmp 0x445aa9 */ goto L_00445aa9;
L_00445acc:; BB(0x00445acc);
    /* 00445acc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445acf: mov esp, ebp */ r_esp = r_ebp;
    /* 00445ad1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445ad2: ret  */ FN_RET(0x00445a90); r_esp += 4; return;
}

void f_00445ae0(void) /* sub_445AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445ae0);
    /* 00445ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00445ae3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445ae6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445ae7: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00445aea: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00445af1: jmp 0x445afc */ goto L_00445afc;
L_00445af3:; BB(0x00445af3);
    /* 00445af3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445af6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445af9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00445afc:; BB(0x00445afc);
    /* 00445afc: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445b00: jge 0x445bd1 */ if ((fS==fO)) goto L_00445bd1;
L_00445b06:; BB(0x00445b06);
    /* 00445b06: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00445b0b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445b0e: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00445b11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445b12: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00445b18: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00445b1b: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x445b20u); f_005fb8b0();
    /* 00445b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445b21: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x445b26u); f_00686ec0();
    /* 00445b26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445b29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445b2b: je 0x445bcc */ if (fZ) goto L_00445bcc;
L_00445b31:; BB(0x00445b31);
    /* 00445b31: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445b34: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445b37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445b38: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00445b3e: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00445b41: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x445b46u); f_005fb8b0();
    /* 00445b46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445b47: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x445b4du); call_ind(t); }
    /* 00445b4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445b50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445b52: jne 0x445b6d */ if (!fZ) goto L_00445b6d;
L_00445b54:; BB(0x00445b54);
    /* 00445b54: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00445b59: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445b5c: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445b5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445b60: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00445b65: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00445b68: call 0x5fb8f0 */ r_esp -= 4; W32(r_esp, 0x445b6du); f_005fb8f0();
L_00445b6d:; BB(0x00445b6d);
    /* 00445b6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445b70: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00445b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445b74: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00445b7a: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00445b7d: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x445b82u); f_005fb8b0();
    /* 00445b82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445b83: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x445b89u); call_ind(t); }
    /* 00445b89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445b8c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445b8f: jne 0x445bcc */ if (!fZ) goto L_00445bcc;
L_00445b91:; BB(0x00445b91);
    /* 00445b91: push 0x6b83f8 */ { u32 v = 0x6b83f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00445b96: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445b99: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445b9d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00445ba3: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00445ba6: call 0x5fb8f0 */ r_esp -= 4; W32(r_esp, 0x445babu); f_005fb8f0();
    /* 00445bab: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445bb1: call 0x440260 */ r_esp -= 4; W32(r_esp, 0x445bb6u); f_00440260();
    /* 00445bb6: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445bbc: call 0x440310 */ r_esp -= 4; W32(r_esp, 0x445bc1u); f_00440310();
    /* 00445bc1: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445bc7: call 0x440490 */ r_esp -= 4; W32(r_esp, 0x445bccu); f_00440490();
L_00445bcc:; BB(0x00445bcc);
    /* 00445bcc: jmp 0x445af3 */ goto L_00445af3;
L_00445bd1:; BB(0x00445bd1);
    /* 00445bd1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00445bd4: call 0x445a90 */ r_esp -= 4; W32(r_esp, 0x445bd9u); f_00445a90();
    /* 00445bd9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00445bdc: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445be0: jne 0x445c0f */ if (!fZ) goto L_00445c0f;
L_00445be2:; BB(0x00445be2);
    /* 00445be2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00445be4: push 0x6b8978 */ { u32 v = 0x6b8978u; r_esp -= 4; W32(r_esp, v); }
    /* 00445be9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x445beeu); f_00630f40();
    /* 00445bee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445bf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445bf2: push 0x6b8958 */ { u32 v = 0x6b8958u; r_esp -= 4; W32(r_esp, v); }
    /* 00445bf7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x445bfcu); f_00630f40();
    /* 00445bfc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445bff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445c00: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x445c05u); f_0062ff10();
    /* 00445c05: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445c08: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00445c0a: jmp 0x445e38 */ goto L_00445e38;
L_00445c0f:; BB(0x00445c0f);
    /* 00445c0f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00445c15: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x445c1au); f_006375b0();
    /* 00445c1a: mov ecx, eax */ r_ecx = r_eax;
    /* 00445c1c: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x445c21u); f_005d5a50();
    /* 00445c21: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445c24: jle 0x445c53 */ if ((fZ||fS!=fO)) goto L_00445c53;
L_00445c26:; BB(0x00445c26);
    /* 00445c26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00445c28: push 0x6b8170 */ { u32 v = 0x6b8170u; r_esp -= 4; W32(r_esp, v); }
    /* 00445c2d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x445c32u); f_00630f40();
    /* 00445c32: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445c35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445c36: push 0x6b814c */ { u32 v = 0x6b814cu; r_esp -= 4; W32(r_esp, v); }
    /* 00445c3b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x445c40u); f_00630f40();
    /* 00445c40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445c43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445c44: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x445c49u); f_0062ff10();
    /* 00445c49: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445c4c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00445c4e: jmp 0x445e38 */ goto L_00445e38;
L_00445c53:; BB(0x00445c53);
    /* 00445c53: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00445c5a: jmp 0x445c65 */ goto L_00445c65;
L_00445c5c:; BB(0x00445c5c);
    /* 00445c5c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445c5f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445c62: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00445c65:; BB(0x00445c65);
    /* 00445c65: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445c69: jge 0x445cd7 */ if ((fS==fO)) goto L_00445cd7;
L_00445c6b:; BB(0x00445c6b);
    /* 00445c6b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00445c70: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445c73: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445c76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445c77: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00445c7d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00445c80: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x445c85u); f_005fb8b0();
    /* 00445c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445c86: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x445c8bu); f_00686ec0();
    /* 00445c8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445c90: je 0x445cd5 */ if (fZ) goto L_00445cd5;
L_00445c92:; BB(0x00445c92);
    /* 00445c92: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445c95: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445c98: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00445c9b: mov ecx, dword ptr [eax + edx + 0x44] */ r_ecx = R32((u32)(r_eax+r_edx+0x44u));
    /* 00445c9f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00445ca2: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445ca6: jne 0x445cd5 */ if (!fZ) goto L_00445cd5;
L_00445ca8:; BB(0x00445ca8);
    /* 00445ca8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00445caa: push 0x6b8934 */ { u32 v = 0x6b8934u; r_esp -= 4; W32(r_esp, v); }
    /* 00445caf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x445cb4u); f_00630f40();
    /* 00445cb4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445cb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445cb8: push 0x6b890c */ { u32 v = 0x6b890cu; r_esp -= 4; W32(r_esp, v); }
    /* 00445cbd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x445cc2u); f_00630f40();
    /* 00445cc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445cc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445cc6: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x445ccbu); f_0062ff10();
    /* 00445ccb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445cce: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00445cd0: jmp 0x445e38 */ goto L_00445e38;
L_00445cd5:; BB(0x00445cd5);
    /* 00445cd5: jmp 0x445c5c */ goto L_00445c5c;
L_00445cd7:; BB(0x00445cd7);
    /* 00445cd7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00445cde: jmp 0x445ce9 */ goto L_00445ce9;
L_00445ce0:; BB(0x00445ce0);
    /* 00445ce0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445ce3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445ce6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00445ce9:; BB(0x00445ce9);
    /* 00445ce9: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445ced: jge 0x445ddb */ if ((fS==fO)) goto L_00445ddb;
L_00445cf3:; BB(0x00445cf3);
    /* 00445cf3: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00445cf8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cfb: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445cfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445cff: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00445d05: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00445d08: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x445d0du); f_005fb8b0();
    /* 00445d0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445d0e: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x445d13u); f_00686ec0();
    /* 00445d13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445d16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445d18: je 0x445dd6 */ if (fZ) goto L_00445dd6;
L_00445d1e:; BB(0x00445d1e);
    /* 00445d1e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445d21: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445d24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445d25: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00445d2a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00445d2d: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x445d32u); f_005fb8b0();
    /* 00445d32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445d33: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x445d39u); call_ind(t); }
    /* 00445d39: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445d3c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00445d3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445d42: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445d45: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00445d48: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00445d4b: mov dword ptr [edx + ecx + 0x3c], eax */ W32((u32)(r_edx+r_ecx+0x3cu), r_eax);
    /* 00445d4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445d52: mov edx, dword ptr [0x7906f4] */ r_edx = R32((u32)(0x7906f4u));
    /* 00445d58: mov ecx, dword ptr [edx + ecx*4 + 0xb4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xb4u));
    /* 00445d5f: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x445d64u); f_005eb220();
    /* 00445d64: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445d67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445d68: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445d6b: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445d71: mov edx, dword ptr [ecx + eax*4 + 0xb4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 00445d78: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445d7b: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445d81: mov ecx, dword ptr [ecx + eax*4 + 0xb4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 00445d88: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00445d8a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00445d90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x445d92u); call_ind(t); }
    /* 00445d92: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445d95: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445d98: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00445d9b: mov eax, dword ptr [edx + ecx + 0x3c] */ r_eax = R32((u32)(r_edx+r_ecx+0x3cu));
    /* 00445d9f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00445da2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445da5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445da6: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00445da9: call 0x445e80 */ r_esp -= 4; W32(r_esp, 0x445daeu); f_00445e80();
    /* 00445dae: mov esi, eax */ r_esi = r_eax;
    /* 00445db0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445db3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445db4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00445db7: call 0x445e40 */ r_esp -= 4; W32(r_esp, 0x445dbcu); f_00445e40();
    /* 00445dbc: imul eax, dword ptr [ebp - 0x24] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffdcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445dc0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00445dc1: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00445dc1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00445dc1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00445dc3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445dc6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445dc9: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445dcc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00445dcf: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445dd2: mov dword ptr [ecx + eax + 0x40], edx */ W32((u32)(r_ecx+r_eax+0x40u), r_edx);
L_00445dd6:; BB(0x00445dd6);
    /* 00445dd6: jmp 0x445ce0 */ goto L_00445ce0;
L_00445ddb:; BB(0x00445ddb);
    /* 00445ddb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445dde: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445de1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00445de4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00445de6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00445de9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445dea: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x445defu); f_0064c8a0();
    /* 00445def: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445df2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00445df5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00445df8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445dfb: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00445dfe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00445e01: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00445e04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445e07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445e08: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445e0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445e0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00445e0e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x445e13u); f_005dcb00();
    /* 00445e13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445e16: mov ecx, eax */ r_ecx = r_eax;
    /* 00445e18: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x445e1du); f_005d5fb0();
    /* 00445e1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445e21: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445e24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445e25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00445e27: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x445e2cu); f_005dcb00();
    /* 00445e2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445e2f: mov ecx, eax */ r_ecx = r_eax;
    /* 00445e31: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x445e36u); f_005d5cf0();
    /* 00445e36: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00445e38:; BB(0x00445e38);
    /* 00445e38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00445e39: mov esp, ebp */ r_esp = r_ebp;
    /* 00445e3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445e3c: ret  */ FN_RET(0x00445ae0); r_esp += 4; return;
}

void f_00445e40(void) /* sub_445E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445e40);
    /* 00445e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00445e43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445e46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00445e49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00445e4c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445e4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445e52: mov edx, dword ptr [ecx + eax + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax+0x44u));
    /* 00445e56: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00445e59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00445e5c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445e5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445e62: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 00445e66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445e69: mov ecx, dword ptr [edx + eax*8 + 0x4c] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4cu));
    /* 00445e6d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00445e70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445e73: mov esp, ebp */ r_esp = r_ebp;
    /* 00445e75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445e76: ret 4 */ FN_RET(0x00445e40); r_esp += 8; return;
}

void f_00445e80(void) /* sub_445E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445e80);
    /* 00445e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00445e83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445e86: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00445e89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00445e8c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445e8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445e92: mov edx, dword ptr [ecx + eax + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax+0x44u));
    /* 00445e96: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00445e99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00445e9c: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445e9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445ea2: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 00445ea6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445ea9: mov ecx, dword ptr [edx + eax*8 + 0x50] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x50u));
    /* 00445ead: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00445eb0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445eb3: mov esp, ebp */ r_esp = r_ebp;
    /* 00445eb5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445eb6: ret 4 */ FN_RET(0x00445e80); r_esp += 8; return;
}

void f_00445ec0(void) /* sub_445EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445ec0);
    /* 00445ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00445ec3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445ec6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00445ec9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445ecc: mov dword ptr [eax + 0x260], 0xffffffff */ W32((u32)(r_eax+0x260u), 0xffffffffu);
    /* 00445ed6: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445edc: mov dword ptr [ecx + 0xb0], 0xffffffff */ W32((u32)(r_ecx+0xb0u), 0xffffffffu);
    /* 00445ee6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445ee9: mov byte ptr [edx + 0x264], 0 */ W8((u32)(r_edx+0x264u), 0x0u);
    /* 00445ef0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00445ef7: jmp 0x445f02 */ goto L_00445f02;
L_00445ef9:; BB(0x00445ef9);
    /* 00445ef9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445efc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445eff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00445f02:; BB(0x00445f02);
    /* 00445f02: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445f06: jge 0x445f1b */ if ((fS==fO)) goto L_00445f1b;
L_00445f08:; BB(0x00445f08);
    /* 00445f08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445f0b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445f0e: mov dword ptr [edx + ecx*4 + 0x268], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x268u), 0xffffffffu);
    /* 00445f19: jmp 0x445ef9 */ goto L_00445ef9;
L_00445f1b:; BB(0x00445f1b);
    /* 00445f1b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00445f1d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445f22u); f_0062fbf0();
    /* 00445f22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445f25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445f27: jne 0x445f3e */ if (!fZ) goto L_00445f3e;
L_00445f29:; BB(0x00445f29);
    /* 00445f29: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00445f2b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x445f30u); f_0062fbf0();
    /* 00445f30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445f33: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445f36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445f39: mov byte ptr [ecx + eax + 0x78], 1 */ W8((u32)(r_ecx+r_eax+0x78u), 0x1u);
L_00445f3e:; BB(0x00445f3e);
    /* 00445f3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00445f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445f41: ret  */ FN_RET(0x00445ec0); r_esp += 4; return;
}

void f_00445f50(void) /* sub_445F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445f50);
    /* 00445f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00445f53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445f56: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00445f59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00445f60: jmp 0x445f6b */ goto L_00445f6b;
L_00445f62:; BB(0x00445f62);
    /* 00445f62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445f65: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445f68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00445f6b:; BB(0x00445f6b);
    /* 00445f6b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445f6f: jge 0x445fab */ if ((fS==fO)) goto L_00445fab;
L_00445f71:; BB(0x00445f71);
    /* 00445f71: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00445f73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445f76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445f77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445f7a: call 0x444d00 */ r_esp -= 4; W32(r_esp, 0x445f7fu); f_00444d00();
    /* 00445f7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445f82: imul edx, edx, 0x78 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x78u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445f85: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00445f88: mov dword ptr [eax + edx + 0x3c], 0 */ W32((u32)(r_eax+r_edx+0x3cu), 0x0u);
    /* 00445f90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00445f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445f94: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00445f9a: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00445f9d: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x445fa2u); f_005fb3a0();
    /* 00445fa2: mov ecx, eax */ r_ecx = r_eax;
    /* 00445fa4: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x445fa9u); f_006067e0();
    /* 00445fa9: jmp 0x445f62 */ goto L_00445f62;
L_00445fab:; BB(0x00445fab);
    /* 00445fab: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445fb1: call 0x440200 */ r_esp -= 4; W32(r_esp, 0x445fb6u); f_00440200();
    /* 00445fb6: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445fbc: call 0x440260 */ r_esp -= 4; W32(r_esp, 0x445fc1u); f_00440260();
    /* 00445fc1: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445fc7: call 0x440310 */ r_esp -= 4; W32(r_esp, 0x445fccu); f_00440310();
    /* 00445fcc: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445fd2: call 0x43fe60 */ r_esp -= 4; W32(r_esp, 0x445fd7u); f_0043fe60();
    /* 00445fd7: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00445fdd: call 0x440490 */ r_esp -= 4; W32(r_esp, 0x445fe2u); f_00440490();
    /* 00445fe2: mov esp, ebp */ r_esp = r_ebp;
    /* 00445fe4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445fe5: ret  */ FN_RET(0x00445f50); r_esp += 4; return;
}

void f_00445ff0(void) /* sub_445FF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00445ff0);
    /* 00445ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00445ff3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445ff6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00445ff9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00445ffc: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00445fff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00446002: mov edx, dword ptr [ecx + eax + 0x40] */ r_edx = R32((u32)(r_ecx+r_eax+0x40u));
    /* 00446006: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00446009: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00446010: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00446013: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00446016: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00446019: mov edx, dword ptr [ecx + eax + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax+0x44u));
    /* 0044601d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00446020: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446024: je 0x446092 */ if (fZ) goto L_00446092;
L_00446026:; BB(0x00446026);
    /* 00446026: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00446029: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044602c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044602f: mov edx, dword ptr [ecx + eax + 0x6c] */ r_edx = R32((u32)(r_ecx+r_eax+0x6cu));
    /* 00446033: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00446036: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00446039: imul eax, eax, 0x78 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x78u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044603c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044603f: mov edx, dword ptr [ecx + eax + 0x44] */ r_edx = R32((u32)(r_ecx+r_eax+0x44u));
    /* 00446043: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00446046: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446049: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044604c: jg 0x44607f */ if ((!fZ&&fS==fO)) goto L_0044607f;
L_0044604e:; BB(0x0044604e);
    /* 0044604e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446050: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446052: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446054: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00446057: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446058: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044605b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044605c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044605f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446060: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x446065u); f_0064c8d0();
    /* 00446065: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446068: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044606b: imul ecx, ecx, 0x78 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x78u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044606e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00446071: mov eax, dword ptr [edx + ecx + 0x40] */ r_eax = R32((u32)(r_edx+r_ecx+0x40u));
    /* 00446075: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00446078: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044607b: jmp 0x4460a5 */ goto L_004460a5;
L_0044607f:; BB(0x0044607f);
    /* 0044607f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00446084: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00446087: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446088: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x44608du); f_00686d8e();
    /* 0044608d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446090: jmp 0x4460a3 */ goto L_004460a3;
L_00446092:; BB(0x00446092);
    /* 00446092: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00446097: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044609a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044609b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4460a0u); f_00686d8e();
    /* 004460a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004460a3:; BB(0x004460a3);
    /* 004460a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004460a5:; BB(0x004460a5);
    /* 004460a5: mov esp, ebp */ r_esp = r_ebp;
    /* 004460a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004460a8: ret 8 */ FN_RET(0x00445ff0); r_esp += 12; return;
}

