#include "protos.h"

void f_00670680(void) /* RewardTagDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670680);
    /* 00670680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670681: mov ebp, esp */ r_ebp = r_esp;
    /* 00670683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00670687: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067068a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x67068fu); f_005f5bf0();
    /* 0067068f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670692: mov dword ptr [eax], 0x6e0f54 */ W32((u32)(r_eax), 0x6e0f54u);
    /* 00670698: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067069b: mov dword ptr [ecx + 0x188], 0 */ W32((u32)(r_ecx+0x188u), 0x0u);
    /* 006706a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006706a8: mov dword ptr [edx + 0x18c], 0 */ W32((u32)(r_edx+0x18cu), 0x0u);
    /* 006706b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006706b5: mov dword ptr [eax + 0x194], 0 */ W32((u32)(r_eax+0x194u), 0x0u);
    /* 006706bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006706c2: mov dword ptr [ecx + 0x190], 0 */ W32((u32)(r_ecx+0x190u), 0x0u);
    /* 006706cc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006706cf: mov byte ptr [edx + 0x184], 0 */ W8((u32)(r_edx+0x184u), 0x0u);
    /* 006706d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006706d9: mov dword ptr [eax + 0x198], 0 */ W32((u32)(r_eax+0x198u), 0x0u);
    /* 006706e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006706e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006706e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006706e9: ret  */ FN_RET(0x00670680); r_esp += 4; return;
}

void f_006706f0(void) /* RewardTagDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006706f0);
    /* 006706f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006706f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006706f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006706f5: push 0x6ad088 */ { u32 v = 0x6ad088u; r_esp -= 4; W32(r_esp, v); }
    /* 006706fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00670700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670701: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670704: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00670709: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067070b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067070c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067070f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00670715: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00670718: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067071b: mov dword ptr [eax], 0x6e0f54 */ W32((u32)(r_eax), 0x6e0f54u);
    /* 00670721: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00670728: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067072b: cmp dword ptr [ecx + 0x188], 0 */ {  u32 a = R32((u32)(r_ecx+0x188u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670732: je 0x670773 */ if (fZ) goto L_00670773;
L_00670734:; BB(0x00670734);
    /* 00670734: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670737: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0067073d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00670740: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00670743: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00670746: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067074a: je 0x67075f */ if (fZ) goto L_0067075f;
L_0067074c:; BB(0x0067074c);
    /* 0067074c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067074e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00670751: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00670753: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00670756: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670758: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67075au); call_ind(t); }
    /* 0067075a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067075d: jmp 0x670766 */ goto L_00670766;
L_0067075f:; BB(0x0067075f);
    /* 0067075f: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00670766:; BB(0x00670766);
    /* 00670766: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670769: mov dword ptr [eax + 0x188], 0 */ W32((u32)(r_eax+0x188u), 0x0u);
L_00670773:; BB(0x00670773);
    /* 00670773: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670776: cmp dword ptr [ecx + 0x18c], 0 */ {  u32 a = R32((u32)(r_ecx+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067077d: je 0x6707be */ if (fZ) goto L_006707be;
L_0067077f:; BB(0x0067077f);
    /* 0067077f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670782: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00670788: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067078b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067078e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00670791: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670795: je 0x6707aa */ if (fZ) goto L_006707aa;
L_00670797:; BB(0x00670797);
    /* 00670797: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00670799: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067079c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067079e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006707a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006707a3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6707a5u); call_ind(t); }
    /* 006707a5: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006707a8: jmp 0x6707b1 */ goto L_006707b1;
L_006707aa:; BB(0x006707aa);
    /* 006707aa: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006707b1:; BB(0x006707b1);
    /* 006707b1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006707b4: mov dword ptr [eax + 0x18c], 0 */ W32((u32)(r_eax+0x18cu), 0x0u);
L_006707be:; BB(0x006707be);
    /* 006707be: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006707c1: cmp dword ptr [ecx + 0x194], 0 */ {  u32 a = R32((u32)(r_ecx+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006707c8: je 0x670809 */ if (fZ) goto L_00670809;
L_006707ca:; BB(0x006707ca);
    /* 006707ca: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006707cd: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 006707d3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006707d6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006707d9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006707dc: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006707e0: je 0x6707f5 */ if (fZ) goto L_006707f5;
L_006707e2:; BB(0x006707e2);
    /* 006707e2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006707e4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006707e7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006707e9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006707ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006707ee: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6707f0u); call_ind(t); }
    /* 006707f0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006707f3: jmp 0x6707fc */ goto L_006707fc;
L_006707f5:; BB(0x006707f5);
    /* 006707f5: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006707fc:; BB(0x006707fc);
    /* 006707fc: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006707ff: mov dword ptr [eax + 0x194], 0 */ W32((u32)(r_eax+0x194u), 0x0u);
L_00670809:; BB(0x00670809);
    /* 00670809: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067080c: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670813: je 0x670854 */ if (fZ) goto L_00670854;
L_00670815:; BB(0x00670815);
    /* 00670815: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670818: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0067081e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00670821: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00670824: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00670827: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067082b: je 0x670840 */ if (fZ) goto L_00670840;
L_0067082d:; BB(0x0067082d);
    /* 0067082d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067082f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670832: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00670834: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670837: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670839: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67083bu); call_ind(t); }
    /* 0067083b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067083e: jmp 0x670847 */ goto L_00670847;
L_00670840:; BB(0x00670840);
    /* 00670840: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00670847:; BB(0x00670847);
    /* 00670847: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067084a: mov dword ptr [eax + 0x190], 0 */ W32((u32)(r_eax+0x190u), 0x0u);
L_00670854:; BB(0x00670854);
    /* 00670854: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670857: cmp dword ptr [ecx + 0x198], 0 */ {  u32 a = R32((u32)(r_ecx+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067085e: je 0x67089f */ if (fZ) goto L_0067089f;
L_00670860:; BB(0x00670860);
    /* 00670860: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670863: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00670869: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067086c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067086f: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00670872: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670876: je 0x67088b */ if (fZ) goto L_0067088b;
L_00670878:; BB(0x00670878);
    /* 00670878: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067087a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067087d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067087f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00670882: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670884: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x670886u); call_ind(t); }
    /* 00670886: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00670889: jmp 0x670892 */ goto L_00670892;
L_0067088b:; BB(0x0067088b);
    /* 0067088b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00670892:; BB(0x00670892);
    /* 00670892: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00670895: mov dword ptr [eax + 0x198], 0 */ W32((u32)(r_eax+0x198u), 0x0u);
L_0067089f:; BB(0x0067089f);
    /* 0067089f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006708a6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006708a9: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x6708aeu); f_005f5c40();
    /* 006708ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006708b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006708b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006708b9: mov esp, ebp */ r_esp = r_ebp;
    /* 006708bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006708bc: ret  */ FN_RET(0x006706f0); r_esp += 4; return;
}

void f_00670b90(void) /* RewardTagDisplay::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670b90);
    /* 00670b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00670b93: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670b96: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00670b9b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00670b9d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00670ba0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00670ba3: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00670ba8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670baa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00670bb0: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00670bb6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670bb8u); call_ind(t); }
    /* 00670bb8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00670bbb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670bbd: jne 0x670bc4 */ if (!fZ) goto L_00670bc4;
L_00670bbf:; BB(0x00670bbf);
    /* 00670bbf: jmp 0x670d99 */ goto L_00670d99;
L_00670bc4:; BB(0x00670bc4);
    /* 00670bc4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670bc7: movzx eax, byte ptr [edx + 0x184] */ r_eax = (u32)R8((u32)(r_edx+0x184u));
    /* 00670bce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670bd0: je 0x670c44 */ if (fZ) goto L_00670c44;
L_00670bd2:; BB(0x00670bd2);
    /* 00670bd2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670bd5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00670bd7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670bda: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670bdd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670bdfu); call_ind(t); }
    /* 00670bdf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670be2: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00670be8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670beb: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00670bf1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00670bf3: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00670bf9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670bfbu); call_ind(t); }
    /* 00670bfb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00670c01: call 0x6378e0 */ r_esp -= 4; W32(r_esp, 0x670c06u); f_006378e0();
    /* 00670c06: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00670c09: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00670c0b: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00670c0d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00670c0f: add ecx, 0x27ac48 */ {  u32 a = r_ecx; u32 b = 0x27ac48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00670c15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670c16: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c19: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x670c1eu); f_005eaf00();
    /* 00670c1e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c21: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x670c26u); f_005eb570();
    /* 00670c26: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c29: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00670c2f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c32: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 00670c38: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670c3a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670c3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670c3fu); call_ind(t); }
    /* 00670c3f: jmp 0x670d99 */ goto L_00670d99;
L_00670c44:; BB(0x00670c44);
    /* 00670c44: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00670c4a: call 0x6378e0 */ r_esp -= 4; W32(r_esp, 0x670c4fu); f_006378e0();
    /* 00670c4f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00670c52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670c54: je 0x670d11 */ if (fZ) goto L_00670d11;
L_00670c5a:; BB(0x00670c5a);
    /* 00670c5a: push 0x27ac40 */ { u32 v = 0x27ac40u; r_esp -= 4; W32(r_esp, v); }
    /* 00670c5f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c62: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x670c67u); f_005eaf00();
    /* 00670c67: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c6a: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x670c6fu); f_005eb570();
    /* 00670c6f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c72: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00670c78: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c7b: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00670c81: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670c83: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00670c86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670c88u); call_ind(t); }
    /* 00670c88: push 0x245 */ { u32 v = 0x245u; r_esp -= 4; W32(r_esp, v); }
    /* 00670c8d: push 0x1e1 */ { u32 v = 0x1e1u; r_esp -= 4; W32(r_esp, v); }
    /* 00670c92: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c95: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00670c9b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670c9e: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00670ca4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00670ca6: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00670ca9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670cabu); call_ind(t); }
    /* 00670cab: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00670cb1: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x670cb6u); f_006375b0();
    /* 00670cb6: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00670cb9: call 0x670360 */ r_esp -= 4; W32(r_esp, 0x670cbeu); f_00670360();
    /* 00670cbe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00670cc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670cc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670cc5: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 00670cc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670cc9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00670ccf: call 0x6347c0 */ r_esp -= 4; W32(r_esp, 0x670cd4u); f_006347c0();
    /* 00670cd4: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00670cd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670cd8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670cdb: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 00670ce1: call 0x5ee710 */ r_esp -= 4; W32(r_esp, 0x670ce6u); f_005ee710();
    /* 00670ce6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670ce9: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 00670cef: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670cf2: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 00670cf8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670cfa: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00670cfd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670cffu); call_ind(t); }
    /* 00670cff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00670d01: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d04: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 00670d0a: call 0x671430 */ r_esp -= 4; W32(r_esp, 0x670d0fu); f_00671430();
    /* 00670d0f: jmp 0x670d64 */ goto L_00670d64;
L_00670d11:; BB(0x00670d11);
    /* 00670d11: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d14: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x670d19u); f_005eb5a0();
    /* 00670d19: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d1c: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00670d22: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d25: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 00670d2b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670d2d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670d30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670d32u); call_ind(t); }
    /* 00670d32: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d35: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00670d3b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d3e: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00670d44: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00670d46: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670d49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670d4bu); call_ind(t); }
    /* 00670d4b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d4e: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00670d54: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d57: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00670d5d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00670d5f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670d62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670d64u); call_ind(t); }
L_00670d64:; BB(0x00670d64);
    /* 00670d64: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d67: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00670d6d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d70: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00670d76: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00670d78: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00670d7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670d80u); call_ind(t); }
    /* 00670d80: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d83: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 00670d89: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00670d8c: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00670d92: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00670d94: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00670d97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670d99u); call_ind(t); }
L_00670d99:; BB(0x00670d99);
    /* 00670d99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00670d9c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00670d9e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x670da3u); f_00686d72();
    /* 00670da3: mov esp, ebp */ r_esp = r_ebp;
    /* 00670da5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670da6: ret  */ FN_RET(0x00670b90); r_esp += 4; return;
}

void f_00670db0(void) /* RewardTagDisplay::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670db0);
    /* 00670db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00670db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00670db7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670dba: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x670dbfu); f_005eb5a0();
    /* 00670dbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670dc2: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00670dc8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670dcb: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00670dd1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00670dd3: mov ecx, eax */ r_ecx = r_eax;
    /* 00670dd5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670dd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670ddau); call_ind(t); }
    /* 00670dda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670ddd: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 00670de3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670de6: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00670dec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00670dee: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670df1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670df3u); call_ind(t); }
    /* 00670df3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670df6: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 00670dfc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670dff: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 00670e05: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00670e07: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670e0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670e0cu); call_ind(t); }
    /* 00670e0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670e0f: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 00670e15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670e18: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00670e1e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00670e20: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00670e23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670e25u); call_ind(t); }
    /* 00670e25: mov esp, ebp */ r_esp = r_ebp;
    /* 00670e27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670e28: ret  */ FN_RET(0x00670db0); r_esp += 4; return;
}

void f_00670ed0(void) /* RewardTagDisplay::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670ed0);
    /* 00670ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00670ed3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00670ed6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00670ed9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00670edc: cmp dword ptr [eax + 0x18], 3 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670ee0: jne 0x670ee9 */ if (!fZ) goto L_00670ee9;
L_00670ee2:; BB(0x00670ee2);
    /* 00670ee2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00670ee4: jmp 0x670f84 */ goto L_00670f84;
L_00670ee9:; BB(0x00670ee9);
    /* 00670ee9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00670eec: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 00670ef0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670ef2: jne 0x670f59 */ if (!fZ) goto L_00670f59;
L_00670ef4:; BB(0x00670ef4);
    /* 00670ef4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00670ef7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670ef8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670efb: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x670f00u); f_005f56a0();
    /* 00670f00: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00670f03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670f05: jne 0x670f5d */ if (!fZ) goto L_00670f5d;
L_00670f07:; BB(0x00670f07);
    /* 00670f07: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00670f0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670f0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670f0e: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00670f14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670f17: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00670f1d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00670f1f: mov ecx, eax */ r_ecx = r_eax;
    /* 00670f21: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00670f27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670f29u); call_ind(t); }
    /* 00670f29: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00670f2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670f2e: jne 0x670f5d */ if (!fZ) goto L_00670f5d;
L_00670f30:; BB(0x00670f30);
    /* 00670f30: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00670f33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670f34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670f37: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00670f3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670f40: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00670f46: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00670f48: mov ecx, eax */ r_ecx = r_eax;
    /* 00670f4a: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00670f50: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670f52u); call_ind(t); }
    /* 00670f52: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00670f55: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670f57: jne 0x670f5d */ if (!fZ) goto L_00670f5d;
L_00670f59:; BB(0x00670f59);
    /* 00670f59: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00670f5b: jmp 0x670f84 */ goto L_00670f84;
L_00670f5d:; BB(0x00670f5d);
    /* 00670f5d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00670f60: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00670f63: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00670f66: je 0x670f7a */ if (fZ) goto L_00670f7a;
L_00670f68:; BB(0x00670f68);
    /* 00670f68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00670f6b: cmp dword ptr [ecx + 0x18], 2 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670f6f: jne 0x670f7a */ if (!fZ) goto L_00670f7a;
L_00670f71:; BB(0x00670f71);
    /* 00670f71: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00670f78: jmp 0x670f81 */ goto L_00670f81;
L_00670f7a:; BB(0x00670f7a);
    /* 00670f7a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00670f81:; BB(0x00670f81);
    /* 00670f81: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
L_00670f84:; BB(0x00670f84);
    /* 00670f84: mov esp, ebp */ r_esp = r_ebp;
    /* 00670f86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00670f87: ret 4 */ FN_RET(0x00670ed0); r_esp += 8; return;
}

void f_00670f90(void) /* RewardTagDisplay::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670f90);
    /* 00670f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00670f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00670f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00670f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00670f97: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00670f9c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00670f9e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00670fa4: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00670faa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x670facu); call_ind(t); }
    /* 00670fac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00670faf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670fb1: je 0x671088 */ if (fZ) goto L_00671088;
L_00670fb7:; BB(0x00670fb7);
    /* 00670fb7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00670fbd: call 0x6378e0 */ r_esp -= 4; W32(r_esp, 0x670fc2u); f_006378e0();
    /* 00670fc2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00670fc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670fc7: je 0x671088 */ if (fZ) goto L_00671088;
L_00670fcd:; BB(0x00670fcd);
    /* 00670fcd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00670fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00670fd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670fd4: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x670fd9u); f_005f56a0();
    /* 00670fd9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00670fdc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00670fde: jne 0x67106b */ if (!fZ) goto L_0067106b;
L_00670fe4:; BB(0x00670fe4);
    /* 00670fe4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00670fe7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00670fe8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670feb: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 00670ff1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00670ff4: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 00670ffa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00670ffc: mov ecx, eax */ r_ecx = r_eax;
    /* 00670ffe: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00671004: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671006u); call_ind(t); }
    /* 00671006: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00671009: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067100b: jne 0x67106b */ if (!fZ) goto L_0067106b;
L_0067100d:; BB(0x0067100d);
    /* 0067100d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00671010: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00671011: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671014: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0067101a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067101d: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 00671023: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00671025: mov ecx, eax */ r_ecx = r_eax;
    /* 00671027: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0067102d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67102fu); call_ind(t); }
    /* 0067102f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00671032: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671034: jne 0x67106b */ if (!fZ) goto L_0067106b;
L_00671036:; BB(0x00671036);
    /* 00671036: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00671039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067103a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067103d: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 00671043: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671046: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0067104c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067104e: mov ecx, eax */ r_ecx = r_eax;
    /* 00671050: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00671056: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671058u); call_ind(t); }
    /* 00671058: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0067105b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067105d: je 0x671088 */ if (fZ) goto L_00671088;
L_0067105f:; BB(0x0067105f);
    /* 0067105f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00671062: cmp dword ptr [edx + 0xc], 0x23b */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x23bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00671069: jl 0x671088 */ if ((fS!=fO)) goto L_00671088;
L_0067106b:; BB(0x0067106b);
    /* 0067106b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067106e: mov ecx, dword ptr [eax + 0x198] */ r_ecx = R32((u32)(r_eax+0x198u));
    /* 00671074: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671077: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0067107d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067107f: mov ecx, eax */ r_ecx = r_eax;
    /* 00671081: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00671084: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x671086u); call_ind(t); }
    /* 00671086: jmp 0x6710ad */ goto L_006710ad;
L_00671088:; BB(0x00671088);
    /* 00671088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067108b: cmp dword ptr [ecx + 0x198], 0 */ {  u32 a = R32((u32)(r_ecx+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00671092: je 0x6710ad */ if (fZ) goto L_006710ad;
L_00671094:; BB(0x00671094);
    /* 00671094: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671097: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 0067109d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006710a0: mov ecx, dword ptr [ecx + 0x198] */ r_ecx = R32((u32)(r_ecx+0x198u));
    /* 006710a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006710a8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006710ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6710adu); call_ind(t); }
L_006710ad:; BB(0x006710ad);
    /* 006710ad: mov esp, ebp */ r_esp = r_ebp;
    /* 006710af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006710b0: ret 4 */ FN_RET(0x00670f90); r_esp += 8; return;
}

void f_006710c0(void) /* RewardTagDisplay::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006710c0);
    /* 006710c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006710c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006710c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006710c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006710c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006710c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006710ca: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 006710d0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006710d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006710d4: fld1  */ FPUSH(1.0);
    /* 006710d6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006710d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006710db: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006710dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006710df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006710e1: push 0x27ac43 */ { u32 v = 0x27ac43u; r_esp -= 4; W32(r_esp, v); }
    /* 006710e6: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006710eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006710ed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006710f3: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 006710f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6710fbu); call_ind(t); }
    /* 006710fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006710fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006710fe: ret 4 */ FN_RET(0x006710c0); r_esp += 8; return;
}

