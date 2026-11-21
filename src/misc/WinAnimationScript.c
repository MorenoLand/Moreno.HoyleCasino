#include "protos.h"

void f_006795f0(void) /* WinAnimationScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006795f0);
    /* 006795f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006795f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006795f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006795f5: push 0x6ad805 */ { u32 v = 0x6ad805u; r_esp -= 4; W32(r_esp, v); }
    /* 006795fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00679600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00679601: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679604: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00679609: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067960b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067960c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067960f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00679615: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00679618: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067961b: mov byte ptr [eax + 0x2ac], 1 */ W8((u32)(r_eax+0x2acu), 0x1u);
    /* 00679622: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00679629: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067962d: jne 0x67963c */ if (!fZ) goto L_0067963c;
L_0067962f:; BB(0x0067962f);
    /* 0067962f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00679631: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x679636u); f_0062fbf0();
    /* 00679636: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00679639: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0067963c:; BB(0x0067963c);
    /* 0067963c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067963f: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x679644u); f_005f5cc0();
    /* 00679644: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679647: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0067964a: mov eax, dword ptr [edx*4 + 0x7813c8] */ r_eax = R32((u32)(r_edx*4+0x7813c8u));
    /* 00679651: mov dword ptr [ecx + 0x29c], eax */ W32((u32)(r_ecx+0x29cu), r_eax);
    /* 00679657: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067965a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0067965d: mov eax, dword ptr [edx*4 + 0x781388] */ r_eax = R32((u32)(r_edx*4+0x781388u));
    /* 00679664: mov dword ptr [ecx + 0x2a0], eax */ W32((u32)(r_ecx+0x2a0u), r_eax);
    /* 0067966a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067966d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00679670: mov dword ptr [ecx + 0x190], edx */ W32((u32)(r_ecx+0x190u), r_edx);
    /* 00679676: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0067967b: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0067967e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00679681: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00679684: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00679687: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067968a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x67968fu); f_0063aac0();
    /* 0067968f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00679692: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679695: mov dword ptr [ecx + 0x2a8], eax */ W32((u32)(r_ecx+0x2a8u), r_eax);
    /* 0067969b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067969d: push 0x7d0 */ { u32 v = 0x7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006796a2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006796a5: mov eax, dword ptr [edx*8 + 0x78130c] */ r_eax = R32((u32)(r_edx*8+0x78130cu));
    /* 006796ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006796ad: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006796b0: mov edx, dword ptr [ecx*8 + 0x781308] */ r_edx = R32((u32)(r_ecx*8+0x781308u));
    /* 006796b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006796b8: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006796bb: mov ecx, dword ptr [eax + 0x29c] */ r_ecx = R32((u32)(r_eax+0x29cu));
    /* 006796c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006796c2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006796c5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x6796cau); f_005eae80();
    /* 006796ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006796cc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006796cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006796d1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006796d4: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 006796da: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6796dcu); call_ind(t); }
    /* 006796dc: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006796e1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006796e4: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x6796e9u); f_005eb5d0();
    /* 006796e9: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006796ec: cmp dword ptr [eax + 0x29c], 0x249f04 */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x249f04u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006796f6: je 0x67971a */ if (fZ) goto L_0067971a;
L_006796f8:; BB(0x006796f8);
    /* 006796f8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006796fb: cmp dword ptr [ecx + 0x29c], 0x249f05 */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679705: je 0x67971a */ if (fZ) goto L_0067971a;
L_00679707:; BB(0x00679707);
    /* 00679707: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067970a: cmp dword ptr [edx + 0x29c], 0x249f62 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679714: jne 0x679873 */ if (!fZ) goto L_00679873;
L_0067971a:; BB(0x0067971a);
    /* 0067971a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067971d: cmp dword ptr [eax + 0x29c], 0x249f04 */ {  u32 a = R32((u32)(r_eax+0x29cu)); u32 b = 0x249f04u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679727: jne 0x679730 */ if (!fZ) goto L_00679730;
L_00679729:; BB(0x00679729);
    /* 00679729: mov dword ptr [ebp - 0x10], 0x249f03 */ W32((u32)(r_ebp+0xfffffff0u), 0x249f03u);
L_00679730:; BB(0x00679730);
    /* 00679730: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679733: cmp dword ptr [ecx + 0x29c], 0x249f05 */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067973d: jne 0x679746 */ if (!fZ) goto L_00679746;
L_0067973f:; BB(0x0067973f);
    /* 0067973f: mov dword ptr [ebp - 0x10], 0x249f06 */ W32((u32)(r_ebp+0xfffffff0u), 0x249f06u);
L_00679746:; BB(0x00679746);
    /* 00679746: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679749: cmp dword ptr [edx + 0x298], 0 */ {  u32 a = R32((u32)(r_edx+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679750: jne 0x67979c */ if (!fZ) goto L_0067979c;
L_00679752:; BB(0x00679752);
    /* 00679752: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00679757: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67975cu); f_00686d82();
    /* 0067975c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067975f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00679762: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679769: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067976d: je 0x67977c */ if (fZ) goto L_0067977c;
L_0067976f:; BB(0x0067976f);
    /* 0067976f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679772: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x679777u); f_005f5bf0();
    /* 00679777: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067977a: jmp 0x679783 */ goto L_00679783;
L_0067977c:; BB(0x0067977c);
    /* 0067977c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00679783:; BB(0x00679783);
    /* 00679783: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00679786: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00679789: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00679790: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679793: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00679796: mov dword ptr [ecx + 0x298], edx */ W32((u32)(r_ecx+0x298u), r_edx);
L_0067979c:; BB(0x0067979c);
    /* 0067979c: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067979f: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 006797a5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006797a8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006797ab: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006797ae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006797b0: push 0x7cf */ { u32 v = 0x7cfu; r_esp -= 4; W32(r_esp, v); }
    /* 006797b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006797b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006797b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006797bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006797bd: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006797c0: mov ecx, dword ptr [edx + 0x298] */ r_ecx = R32((u32)(r_edx+0x298u));
    /* 006797c6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x6797cbu); f_005eae80();
    /* 006797cb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006797ce: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 006797d4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006797d7: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 006797dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006797df: mov ecx, eax */ r_ecx = r_eax;
    /* 006797e1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006797e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6797e6u); call_ind(t); }
    /* 006797e6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006797e9: cmp dword ptr [ecx + 0x29c], 0x249f05 */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f05u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006797f3: je 0x679804 */ if (fZ) goto L_00679804;
L_006797f5:; BB(0x006797f5);
    /* 006797f5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006797f8: cmp dword ptr [edx + 0x29c], 0x249f62 */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679802: jne 0x679873 */ if (!fZ) goto L_00679873;
L_00679804:; BB(0x00679804);
    /* 00679804: push 0x7d1 */ { u32 v = 0x7d1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679809: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067980c: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 00679812: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679815: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0067981b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067981d: mov ecx, eax */ r_ecx = r_eax;
    /* 0067981f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00679822: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679824u); call_ind(t); }
    /* 00679824: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00679826: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67982bu); f_00686d82();
    /* 0067982b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067982e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00679831: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00679838: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067983c: je 0x67984d */ if (fZ) goto L_0067984d;
L_0067983e:; BB(0x0067983e);
    /* 0067983e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679840: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679843: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x679848u); f_006010a0();
    /* 00679848: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0067984b: jmp 0x679854 */ goto L_00679854;
L_0067984d:; BB(0x0067984d);
    /* 0067984d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00679854:; BB(0x00679854);
    /* 00679854: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00679857: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0067985a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00679861: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00679864: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00679865: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679868: mov ecx, dword ptr [eax + 0x298] */ r_ecx = R32((u32)(r_eax+0x298u));
    /* 0067986e: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x679873u); f_005f5d50();
L_00679873:; BB(0x00679873);
    /* 00679873: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679876: cmp dword ptr [ecx + 0x29c], 0x249f0d */ {  u32 a = R32((u32)(r_ecx+0x29cu)); u32 b = 0x249f0du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679880: je 0x679895 */ if (fZ) goto L_00679895;
L_00679882:; BB(0x00679882);
    /* 00679882: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679885: cmp dword ptr [edx + 0x29c], 0x249f0a */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f0au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067988f: jne 0x679a25 */ if (!fZ) goto L_00679a25;
L_00679895:; BB(0x00679895);
    /* 00679895: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679898: cmp dword ptr [eax + 0x194], 0 */ {  u32 a = R32((u32)(r_eax+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067989f: jne 0x6798eb */ if (!fZ) goto L_006798eb;
L_006798a1:; BB(0x006798a1);
    /* 006798a1: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006798a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6798abu); f_00686d82();
    /* 006798ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006798ae: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006798b1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006798b8: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006798bc: je 0x6798cb */ if (fZ) goto L_006798cb;
L_006798be:; BB(0x006798be);
    /* 006798be: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006798c1: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x6798c6u); f_005ec5a0();
    /* 006798c6: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006798c9: jmp 0x6798d2 */ goto L_006798d2;
L_006798cb:; BB(0x006798cb);
    /* 006798cb: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006798d2:; BB(0x006798d2);
    /* 006798d2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006798d5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006798d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006798df: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006798e2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006798e5: mov dword ptr [edx + 0x194], eax */ W32((u32)(r_edx+0x194u), r_eax);
L_006798eb:; BB(0x006798eb);
    /* 006798eb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006798ee: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 006798f4: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006798f7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006798fa: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 006798fd: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679900: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00679906: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679909: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0067990f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679911: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00679914: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679916u); call_ind(t); }
    /* 00679916: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00679917: mov ecx, esp */ r_ecx = r_esp;
    /* 00679919: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00679920: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00679923: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00679928: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0067992b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067992d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0067992f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679932: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 00679938: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x67993du); f_005ecd00();
    /* 0067993d: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 00679942: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679945: mov ecx, dword ptr [edx + 0x194] */ r_ecx = R32((u32)(r_edx+0x194u));
    /* 0067994b: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x679950u); f_005ecc60();
    /* 00679950: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00679952: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679955: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0067995b: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x679960u); f_005eccb0();
    /* 00679960: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679963: mov edx, dword ptr [ecx + 0x2a8] */ r_edx = R32((u32)(r_ecx+0x2a8u));
    /* 00679969: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067996a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067996d: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00679973: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x679978u); f_005ee710();
    /* 00679978: push 0x7d1 */ { u32 v = 0x7d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067997d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679980: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00679986: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679989: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0067998f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00679991: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00679994: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679996u); call_ind(t); }
    /* 00679996: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00679998: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067999b: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 006799a1: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x6799a6u); f_005ef310();
    /* 006799a6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006799a9: cmp dword ptr [edx + 0x29c], 0x249f0d */ {  u32 a = R32((u32)(r_edx+0x29cu)); u32 b = 0x249f0du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006799b3: jne 0x6799f5 */ if (!fZ) goto L_006799f5;
L_006799b5:; BB(0x006799b5);
    /* 006799b5: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 006799ba: push 0x102 */ { u32 v = 0x102u; r_esp -= 4; W32(r_esp, v); }
    /* 006799bf: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006799c2: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 006799c8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006799cb: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 006799d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006799d3: mov ecx, eax */ r_ecx = r_eax;
    /* 006799d5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006799d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6799dau); call_ind(t); }
    /* 006799da: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006799dd: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 006799e3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006799e6: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 006799ec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006799ee: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006799f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6799f3u); call_ind(t); }
    /* 006799f3: jmp 0x679a18 */ goto L_00679a18;
L_006799f5:; BB(0x006799f5);
    /* 006799f5: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 006799fa: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 006799ff: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679a02: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00679a08: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679a0b: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00679a11: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00679a13: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00679a16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679a18u); call_ind(t); }
L_00679a18:; BB(0x00679a18);
    /* 00679a18: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679a1b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00679a1d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679a20: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00679a23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679a25u); call_ind(t); }
L_00679a25:; BB(0x00679a25);
    /* 00679a25: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679a28: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00679a2b: mov eax, dword ptr [edx*4 + 0x7812c8] */ r_eax = R32((u32)(r_edx*4+0x7812c8u));
    /* 00679a32: mov dword ptr [ecx + 0x178], eax */ W32((u32)(r_ecx+0x178u), r_eax);
    /* 00679a38: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00679a3a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x679a3fu); f_00686d82();
    /* 00679a3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00679a42: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00679a45: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00679a4c: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679a50: je 0x679a6d */ if (fZ) goto L_00679a6d;
L_00679a52:; BB(0x00679a52);
    /* 00679a52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679a54: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00679a57: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x679a5cu); f_005fc0d0();
    /* 00679a5c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00679a5f: mov dword ptr [ecx], 0x6e20a8 */ W32((u32)(r_ecx), 0x6e20a8u);
    /* 00679a65: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00679a68: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00679a6b: jmp 0x679a74 */ goto L_00679a74;
L_00679a6d:; BB(0x00679a6d);
    /* 00679a6d: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00679a74:; BB(0x00679a74);
    /* 00679a74: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00679a77: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00679a7a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00679a81: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00679a84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00679a85: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679a88: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x679a8du); f_005f5df0();
    /* 00679a8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00679a90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00679a97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00679a98: mov esp, ebp */ r_esp = r_ebp;
    /* 00679a9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00679a9b: ret 0xc */ FN_RET(0x006795f0); r_esp += 16; return;
}

void f_00680960(void) /* WinAnimationScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680960);
    /* 00680960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680961: mov ebp, esp */ r_ebp = r_esp;
    /* 00680963: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680966: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00680969: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0068096e: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00680971: mov edx, dword ptr [ecx + 0x29c] */ r_edx = R32((u32)(r_ecx+0x29cu));
    /* 00680977: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068097a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068097d: sub eax, 0x249f20 */ {  u32 a = r_eax; u32 b = 0x249f20u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00680982: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00680985: cmp dword ptr [ebp - 8], 0x44 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00680989: ja 0x68099c */ if ((!fC&&!fZ)) goto L_0068099c;
L_0068098b:; BB(0x0068098b);
    /* 0068098b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068098e: movzx edx, byte ptr [ecx + 0x680af4] */ r_edx = (u32)R8((u32)(r_ecx+0x680af4u));
    /* 00680995: jmp dword ptr [edx*4 + 0x680ac4] */ { u32 t = R32((u32)(r_edx*4+0x680ac4u)); switch (t) { case 0x6809b6u: goto L_006809b6; case 0x6809d0u: goto L_006809d0; case 0x6809eau: goto L_006809ea; case 0x680a1eu: goto L_00680a1e; case 0x680a38u: goto L_00680a38; case 0x680a66u: goto L_00680a66; case 0x680a7du: goto L_00680a7d; case 0x680a94u: goto L_00680a94; case 0x680aabu: goto L_00680aab; case 0x680a04u: goto L_00680a04; case 0x680a4fu: goto L_00680a4f; case 0x68099cu: goto L_0068099c; default: UNSUP(0x00680995, "jump table entry is not a known target"); } }
L_0068099c:; BB(0x0068099c);
    /* 0068099c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068099f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006809a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006809a3: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 006809a9: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006809ac: call 0x680490 */ r_esp -= 4; W32(r_esp, 0x6809b1u); f_00680490();
    /* 006809b1: jmp 0x680ac0 */ goto L_00680ac0;
L_006809b6:; BB(0x006809b6);
    /* 006809b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006809b9: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006809bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006809bd: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 006809c3: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006809c6: call 0x67a370 */ r_esp -= 4; W32(r_esp, 0x6809cbu); f_0067a370();
    /* 006809cb: jmp 0x680ac0 */ goto L_00680ac0;
L_006809d0:; BB(0x006809d0);
    /* 006809d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006809d3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006809d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006809d7: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 006809dd: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006809e0: call 0x67ac60 */ r_esp -= 4; W32(r_esp, 0x6809e5u); f_0067ac60();
    /* 006809e5: jmp 0x680ac0 */ goto L_00680ac0;
L_006809ea:; BB(0x006809ea);
    /* 006809ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006809ed: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006809f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006809f1: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 006809f7: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006809fa: call 0x67b450 */ r_esp -= 4; W32(r_esp, 0x6809ffu); f_0067b450();
    /* 006809ff: jmp 0x680ac0 */ goto L_00680ac0;
L_00680a04:; BB(0x00680a04);
    /* 00680a04: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680a07: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00680a0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680a0b: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00680a11: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00680a14: call 0x67b450 */ r_esp -= 4; W32(r_esp, 0x680a19u); f_0067b450();
    /* 00680a19: jmp 0x680ac0 */ goto L_00680ac0;
L_00680a1e:; BB(0x00680a1e);
    /* 00680a1e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680a21: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00680a24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680a25: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00680a2b: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00680a2e: call 0x67bf40 */ r_esp -= 4; W32(r_esp, 0x680a33u); f_0067bf40();
    /* 00680a33: jmp 0x680ac0 */ goto L_00680ac0;
L_00680a38:; BB(0x00680a38);
    /* 00680a38: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680a3b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00680a3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680a3f: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00680a45: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00680a48: call 0x67c880 */ r_esp -= 4; W32(r_esp, 0x680a4du); f_0067c880();
    /* 00680a4d: jmp 0x680ac0 */ goto L_00680ac0;
L_00680a4f:; BB(0x00680a4f);
    /* 00680a4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680a52: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00680a55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680a56: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00680a5c: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00680a5f: call 0x67c880 */ r_esp -= 4; W32(r_esp, 0x680a64u); f_0067c880();
    /* 00680a64: jmp 0x680ac0 */ goto L_00680ac0;
L_00680a66:; BB(0x00680a66);
    /* 00680a66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680a69: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00680a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680a6d: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00680a73: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00680a76: call 0x67d090 */ r_esp -= 4; W32(r_esp, 0x680a7bu); f_0067d090();
    /* 00680a7b: jmp 0x680ac0 */ goto L_00680ac0;
L_00680a7d:; BB(0x00680a7d);
    /* 00680a7d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680a80: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00680a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680a84: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00680a8a: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00680a8d: call 0x67df70 */ r_esp -= 4; W32(r_esp, 0x680a92u); f_0067df70();
    /* 00680a92: jmp 0x680ac0 */ goto L_00680ac0;
L_00680a94:; BB(0x00680a94);
    /* 00680a94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680a97: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00680a9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680a9b: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00680aa1: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00680aa4: call 0x67e900 */ r_esp -= 4; W32(r_esp, 0x680aa9u); f_0067e900();
    /* 00680aa9: jmp 0x680ac0 */ goto L_00680ac0;
L_00680aab:; BB(0x00680aab);
    /* 00680aab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680aae: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00680ab1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680ab2: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00680ab8: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00680abb: call 0x67ffa0 */ r_esp -= 4; W32(r_esp, 0x680ac0u); f_0067ffa0();
L_00680ac0:; BB(0x00680ac0);
    /* 00680ac0: mov esp, ebp */ r_esp = r_ebp;
    /* 00680ac2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680ac3: ret  */ FN_RET(0x00680960); r_esp += 4; return;
}

