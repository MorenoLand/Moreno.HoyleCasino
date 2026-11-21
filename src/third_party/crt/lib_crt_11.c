#include "protos.h"

void f_00650c00(void) /* ??1CExpandoObject@@UAE@XZ_129 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650c00);
    /* 00650c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00650c03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00650c04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650c07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650c0a: mov dword ptr [eax], 0x6dd1f4 */ W32((u32)(r_eax), 0x6dd1f4u);
    /* 00650c10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650c13: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x650c18u); f_005f7260();
    /* 00650c18: mov esp, ebp */ r_esp = r_ebp;
    /* 00650c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650c1b: ret  */ FN_RET(0x00650c00); r_esp += 4; return;
}

void f_00651310(void) /* ??_G_com_error@@UAEPAXI@Z_362 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00651310);
    /* 00651310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00651311: mov ebp, esp */ r_ebp = r_esp;
    /* 00651313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00651314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00651317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065131a: call 0x650c00 */ r_esp -= 4; W32(r_esp, 0x65131fu); f_00650c00();
    /* 0065131f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00651322: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00651325: je 0x651333 */ if (fZ) goto L_00651333;
L_00651327:; BB(0x00651327);
    /* 00651327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065132a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065132b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x651330u); f_00686cae();
    /* 00651330: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00651333:; BB(0x00651333);
    /* 00651333: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00651336: mov esp, ebp */ r_esp = r_ebp;
    /* 00651338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00651339: ret 4 */ FN_RET(0x00651310); r_esp += 8; return;
}

void f_006523f0(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006523f0);
    /* 006523f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006523f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006523f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006523f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006523f7: mov esp, ebp */ r_esp = r_ebp;
    /* 006523f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006523fa: ret  */ FN_RET(0x006523f0); r_esp += 4; return;
}

void f_006535c0(void) /* ??_G_com_error@@UAEPAXI@Z_363 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006535c0);
    /* 006535c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006535c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006535c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006535c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006535c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006535ca: call 0x652f10 */ r_esp -= 4; W32(r_esp, 0x6535cfu); f_00652f10();
    /* 006535cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006535d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006535d5: je 0x6535e3 */ if (fZ) goto L_006535e3;
L_006535d7:; BB(0x006535d7);
    /* 006535d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006535da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006535db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6535e0u); f_00686cae();
    /* 006535e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006535e3:; BB(0x006535e3);
    /* 006535e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006535e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006535e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006535e9: ret 4 */ FN_RET(0x006535c0); r_esp += 8; return;
}

void f_00654574(void) /* _WinMain@16_125 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654574);
    /* 00654574: jmp 0x6545fd */ f_006545fd(); return;
}

void f_006545fd(void) /* _WinMain@16_125_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006545fd);
    /* 006545fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00654600: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00654602: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x654607u); f_00686d72();
    /* 00654607: mov esp, ebp */ r_esp = r_ebp;
    /* 00654609: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065460a: ret 0x10 */ FN_RET(0x006545fd); r_esp += 20; return;
}

void f_00654644(void) /* _WinMain@16_126 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654644);
    /* 00654644: jmp 0x6546d1 */ f_006546d1(); return;
}

void f_006546d1(void) /* _WinMain@16_126_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006546d1);
    /* 006546d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006546d4: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006546d6: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6546dbu); f_00686d72();
    /* 006546db: mov esp, ebp */ r_esp = r_ebp;
    /* 006546dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006546de: ret 0x14 */ FN_RET(0x006546d1); r_esp += 24; return;
}

void f_00654740(void) /* ??Y?$CStringT@_WV?$StrTraitMFC@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@QAEAAV01@PBD@Z_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654740);
    /* 00654740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654741: mov ebp, esp */ r_ebp = r_esp;
    /* 00654743: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00654745: push 0x6ac4f2 */ { u32 v = 0x6ac4f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065474a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00654750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654751: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00654754: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00654759: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065475b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065475c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065475f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00654765: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00654768: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065476b: call 0x629ab0 */ r_esp -= 4; W32(r_esp, 0x654770u); f_00629ab0();
    /* 00654770: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00654777: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065477a: mov dword ptr [eax], 0x6dd584 */ W32((u32)(r_eax), 0x6dd584u);
    /* 00654780: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00654786: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00654788: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065478e: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00654794: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x654796u); call_ind(t); }
    /* 00654796: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00654797: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65479cu); f_00686d82();
    /* 0065479c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065479f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006547a2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006547a5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006547a8: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006547ab: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006547b2: jmp 0x6547bd */ goto L_006547bd;
L_006547b4:; BB(0x006547b4);
    /* 006547b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006547b7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006547ba: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006547bd:; BB(0x006547bd);
    /* 006547bd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006547c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006547c5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006547cb: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 006547d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6547d3u); call_ind(t); }
    /* 006547d3: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006547d6: jge 0x6547e7 */ if ((fS==fO)) goto L_006547e7;
L_006547d8:; BB(0x006547d8);
    /* 006547d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006547db: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 006547de: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006547e1: mov byte ptr [edx + eax], 0 */ W8((u32)(r_edx+r_eax), 0x0u);
    /* 006547e5: jmp 0x6547b4 */ goto L_006547b4;
L_006547e7:; BB(0x006547e7);
    /* 006547e7: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006547e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006547eb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006547ee: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006547f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006547f2: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6547f7u); f_00686fa2();
    /* 006547f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006547fa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00654801: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00654804: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00654807: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065480e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065480f: mov esp, ebp */ r_esp = r_ebp;
    /* 00654811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654812: ret  */ FN_RET(0x00654740); r_esp += 4; return;
}

void f_006548a0(void) /* ??_G_com_error@@UAEPAXI@Z_364 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006548a0);
    /* 006548a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006548a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006548a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006548a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006548a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006548aa: call 0x653690 */ r_esp -= 4; W32(r_esp, 0x6548afu); f_00653690();
    /* 006548af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006548b2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006548b5: je 0x6548c3 */ if (fZ) goto L_006548c3;
L_006548b7:; BB(0x006548b7);
    /* 006548b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006548ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006548bb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6548c0u); f_00686cae();
    /* 006548c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006548c3:; BB(0x006548c3);
    /* 006548c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006548c6: mov esp, ebp */ r_esp = r_ebp;
    /* 006548c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006548c9: ret 4 */ FN_RET(0x006548a0); r_esp += 8; return;
}

void f_006548d0(void) /* ??_G_com_error@@UAEPAXI@Z_365 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006548d0);
    /* 006548d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006548d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006548d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006548d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006548d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006548da: call 0x628220 */ r_esp -= 4; W32(r_esp, 0x6548dfu); f_00628220();
    /* 006548df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006548e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006548e5: je 0x6548f3 */ if (fZ) goto L_006548f3;
L_006548e7:; BB(0x006548e7);
    /* 006548e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006548ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006548eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6548f0u); f_00686cae();
    /* 006548f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006548f3:; BB(0x006548f3);
    /* 006548f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006548f6: mov esp, ebp */ r_esp = r_ebp;
    /* 006548f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006548f9: ret 4 */ FN_RET(0x006548d0); r_esp += 8; return;
}

void f_00654900(void) /* ??_G_com_error@@UAEPAXI@Z_366 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00654900);
    /* 00654900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00654901: mov ebp, esp */ r_ebp = r_esp;
    /* 00654903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00654904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00654907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065490a: call 0x654820 */ r_esp -= 4; W32(r_esp, 0x65490fu); f_00654820();
    /* 0065490f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00654912: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00654915: je 0x654923 */ if (fZ) goto L_00654923;
L_00654917:; BB(0x00654917);
    /* 00654917: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065491a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065491b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x654920u); f_00686cae();
    /* 00654920: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00654923:; BB(0x00654923);
    /* 00654923: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00654926: mov esp, ebp */ r_esp = r_ebp;
    /* 00654928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00654929: ret 4 */ FN_RET(0x00654900); r_esp += 8; return;
}

void f_006562e0(void) /* ??_G_com_error@@UAEPAXI@Z_367 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006562e0);
    /* 006562e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006562e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006562e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006562e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006562e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006562ea: call 0x6549c0 */ r_esp -= 4; W32(r_esp, 0x6562efu); f_006549c0();
    /* 006562ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006562f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006562f5: je 0x656303 */ if (fZ) goto L_00656303;
L_006562f7:; BB(0x006562f7);
    /* 006562f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006562fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006562fb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x656300u); f_00686cae();
    /* 00656300: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00656303:; BB(0x00656303);
    /* 00656303: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00656306: mov esp, ebp */ r_esp = r_ebp;
    /* 00656308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656309: ret 4 */ FN_RET(0x006562e0); r_esp += 8; return;
}

void f_00656310(void) /* ??_G_com_error@@UAEPAXI@Z_368 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00656310);
    /* 00656310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656311: mov ebp, esp */ r_ebp = r_esp;
    /* 00656313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00656317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065631a: call 0x680c10 */ r_esp -= 4; W32(r_esp, 0x65631fu); f_00680c10();
    /* 0065631f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00656322: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00656325: je 0x656333 */ if (fZ) goto L_00656333;
L_00656327:; BB(0x00656327);
    /* 00656327: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065632a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065632b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x656330u); f_00686cae();
    /* 00656330: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00656333:; BB(0x00656333);
    /* 00656333: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00656336: mov esp, ebp */ r_esp = r_ebp;
    /* 00656338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656339: ret 4 */ FN_RET(0x00656310); r_esp += 8; return;
}

void f_0065bae0(void) /* ??1CExpandoObject@@UAE@XZ_130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065bae0);
    /* 0065bae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065bae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065bae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065bae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065bae7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065baea: mov dword ptr [eax], 0x6de66c */ W32((u32)(r_eax), 0x6de66cu);
    /* 0065baf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065baf3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x65baf8u); f_005f7260();
    /* 0065baf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0065bafa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bafb: ret  */ FN_RET(0x0065bae0); r_esp += 4; return;
}

void f_0065cd40(void) /* unknown_libname_861 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065cd40);
    /* 0065cd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cd41: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cd43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cd44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065cd47: mov eax, 1 */ r_eax = 0x1u;
    /* 0065cd4c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cd4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cd4f: ret  */ FN_RET(0x0065cd40); r_esp += 4; return;
}

void f_0065cde0(void) /* ?_Acquire@_NonReentrantPPLLock@details@Concurrency@@QAEXPAX@Z_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065cde0);
    /* 0065cde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065cde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065cde3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cde4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065cde7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065cde9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065cdec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cded: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cdf0: call 0x615180 */ r_esp -= 4; W32(r_esp, 0x65cdf5u); f_00615180();
    /* 0065cdf5: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cdf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cdf8: ret 4 */ FN_RET(0x0065cde0); r_esp += 8; return;
}

void f_0065da70(void) /* ??_G_com_error@@UAEPAXI@Z_369 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065da70);
    /* 0065da70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065da71: mov ebp, esp */ r_ebp = r_esp;
    /* 0065da73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065da74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065da77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065da7a: call 0x656540 */ r_esp -= 4; W32(r_esp, 0x65da7fu); f_00656540();
    /* 0065da7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065da82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0065da85: je 0x65da93 */ if (fZ) goto L_0065da93;
L_0065da87:; BB(0x0065da87);
    /* 0065da87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065da8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065da8b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x65da90u); f_00686cae();
    /* 0065da90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065da93:; BB(0x0065da93);
    /* 0065da93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065da96: mov esp, ebp */ r_esp = r_ebp;
    /* 0065da98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065da99: ret 4 */ FN_RET(0x0065da70); r_esp += 8; return;
}

void f_0065daa0(void) /* ??_G_com_error@@UAEPAXI@Z_370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065daa0);
    /* 0065daa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065daa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065daa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065daa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065daa7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065daaa: call 0x6060e0 */ r_esp -= 4; W32(r_esp, 0x65daafu); f_006060e0();
    /* 0065daaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065dab2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0065dab5: je 0x65dac3 */ if (fZ) goto L_0065dac3;
L_0065dab7:; BB(0x0065dab7);
    /* 0065dab7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065daba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065dabb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x65dac0u); f_00686cae();
    /* 0065dac0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065dac3:; BB(0x0065dac3);
    /* 0065dac3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065dac6: mov esp, ebp */ r_esp = r_ebp;
    /* 0065dac8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065dac9: ret 4 */ FN_RET(0x0065daa0); r_esp += 8; return;
}

void f_0065dad0(void) /* ??_G_com_error@@UAEPAXI@Z_371 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065dad0);
    /* 0065dad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065dad1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065dad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065dad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065dad7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065dada: call 0x65a7f0 */ r_esp -= 4; W32(r_esp, 0x65dadfu); f_0065a7f0();
    /* 0065dadf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065dae2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0065dae5: je 0x65daf3 */ if (fZ) goto L_0065daf3;
L_0065dae7:; BB(0x0065dae7);
    /* 0065dae7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065daea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065daeb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x65daf0u); f_00686cae();
    /* 0065daf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065daf3:; BB(0x0065daf3);
    /* 0065daf3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065daf6: mov esp, ebp */ r_esp = r_ebp;
    /* 0065daf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065daf9: ret 4 */ FN_RET(0x0065dad0); r_esp += 8; return;
}

void f_0065db10(void) /* ??_G_com_error@@UAEPAXI@Z_372 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065db10);
    /* 0065db10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065db11: mov ebp, esp */ r_ebp = r_esp;
    /* 0065db13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065db14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065db17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065db1a: call 0x65bae0 */ r_esp -= 4; W32(r_esp, 0x65db1fu); f_0065bae0();
    /* 0065db1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065db22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0065db25: je 0x65db33 */ if (fZ) goto L_0065db33;
L_0065db27:; BB(0x0065db27);
    /* 0065db27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065db2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065db2b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x65db30u); f_00686cae();
    /* 0065db30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065db33:; BB(0x0065db33);
    /* 0065db33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065db36: mov esp, ebp */ r_esp = r_ebp;
    /* 0065db38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065db39: ret 4 */ FN_RET(0x0065db10); r_esp += 8; return;
}

void f_0065db40(void) /* ??_G_com_error@@UAEPAXI@Z_373 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065db40);
    /* 0065db40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065db41: mov ebp, esp */ r_ebp = r_esp;
    /* 0065db43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065db44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065db47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065db4a: call 0x65cc90 */ r_esp -= 4; W32(r_esp, 0x65db4fu); f_0065cc90();
    /* 0065db4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065db52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0065db55: je 0x65db63 */ if (fZ) goto L_0065db63;
L_0065db57:; BB(0x0065db57);
    /* 0065db57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065db5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065db5b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x65db60u); f_00686cae();
    /* 0065db60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065db63:; BB(0x0065db63);
    /* 0065db63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065db66: mov esp, ebp */ r_esp = r_ebp;
    /* 0065db68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065db69: ret 4 */ FN_RET(0x0065db40); r_esp += 8; return;
}

void f_0065db70(void) /* ??_G_com_error@@UAEPAXI@Z_374 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065db70);
    /* 0065db70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065db71: mov ebp, esp */ r_ebp = r_esp;
    /* 0065db73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065db74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065db77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065db7a: call 0x65d260 */ r_esp -= 4; W32(r_esp, 0x65db7fu); f_0065d260();
    /* 0065db7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065db82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0065db85: je 0x65db93 */ if (fZ) goto L_0065db93;
L_0065db87:; BB(0x0065db87);
    /* 0065db87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065db8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065db8b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x65db90u); f_00686cae();
    /* 0065db90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065db93:; BB(0x0065db93);
    /* 0065db93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065db96: mov esp, ebp */ r_esp = r_ebp;
    /* 0065db98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065db99: ret 4 */ FN_RET(0x0065db70); r_esp += 8; return;
}

void f_0065dba0(void) /* ??_G_com_error@@UAEPAXI@Z_375 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065dba0);
    /* 0065dba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065dba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065dba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065dba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065dba7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065dbaa: call 0x65d5d0 */ r_esp -= 4; W32(r_esp, 0x65dbafu); f_0065d5d0();
    /* 0065dbaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065dbb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0065dbb5: je 0x65dbc3 */ if (fZ) goto L_0065dbc3;
L_0065dbb7:; BB(0x0065dbb7);
    /* 0065dbb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065dbba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbbb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x65dbc0u); f_00686cae();
    /* 0065dbc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065dbc3:; BB(0x0065dbc3);
    /* 0065dbc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065dbc6: mov esp, ebp */ r_esp = r_ebp;
    /* 0065dbc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065dbc9: ret 4 */ FN_RET(0x0065dba0); r_esp += 8; return;
}

void f_0065ddc0(void) /* ?GetRuntimeClass@CSpinButtonCtrl@@UBEPAUCRuntimeClass@@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ddc0);
    /* 0065ddc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ddc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ddc7: mov eax, 0x13b */ r_eax = 0x13bu;
    /* 0065ddcc: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ddce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ddcf: ret  */ FN_RET(0x0065ddc0); r_esp += 4; return;
}

void f_0065ddd0(void) /* ?GetRuntimeClass@CSliderCtrl@@UBEPAUCRuntimeClass@@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ddd0);
    /* 0065ddd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ddd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ddd7: mov eax, 0x10b */ r_eax = 0x10bu;
    /* 0065dddc: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ddde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065dddf: ret  */ FN_RET(0x0065ddd0); r_esp += 4; return;
}

void f_0065dde0(void) /* ?GetRuntimeClass@CProgressCtrl@@UBEPAUCRuntimeClass@@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065dde0);
    /* 0065dde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065dde1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065dde3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065dde4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065dde7: mov eax, 0x10e */ r_eax = 0x10eu;
    /* 0065ddec: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ddee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ddef: ret  */ FN_RET(0x0065dde0); r_esp += 4; return;
}

void f_0065ddf0(void) /* ?GetRuntimeClass@CHeaderCtrl@@UBEPAUCRuntimeClass@@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ddf0);
    /* 0065ddf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ddf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ddf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ddf7: mov eax, 0x50 */ r_eax = 0x50u;
    /* 0065ddfc: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ddfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ddff: ret  */ FN_RET(0x0065ddf0); r_esp += 4; return;
}

void f_0065de00(void) /* ?GetRuntimeClass@CTabCtrl@@UBEPAUCRuntimeClass@@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065de00);
    /* 0065de00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065de01: mov ebp, esp */ r_ebp = r_esp;
    /* 0065de03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065de07: mov eax, 0xf5 */ r_eax = 0xf5u;
    /* 0065de0c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065de0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065de0f: ret  */ FN_RET(0x0065de00); r_esp += 4; return;
}

void f_0065de10(void) /* ?GetRuntimeClass@CTreeCtrl@@UBEPAUCRuntimeClass@@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065de10);
    /* 0065de10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065de11: mov ebp, esp */ r_ebp = r_esp;
    /* 0065de13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065de17: mov eax, 0xe1 */ r_eax = 0xe1u;
    /* 0065de1c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065de1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065de1f: ret  */ FN_RET(0x0065de10); r_esp += 4; return;
}

void f_0065de20(void) /* ?GetRuntimeClass@CListCtrl@@UBEPAUCRuntimeClass@@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065de20);
    /* 0065de20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065de21: mov ebp, esp */ r_ebp = r_esp;
    /* 0065de23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065de27: mov eax, 0x1a2 */ r_eax = 0x1a2u;
    /* 0065de2c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065de2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065de2f: ret  */ FN_RET(0x0065de20); r_esp += 4; return;
}

void f_0065de30(void) /* ?GetRuntimeClass@CToolBarCtrl@@UBEPAUCRuntimeClass@@XZ_7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065de30);
    /* 0065de30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065de31: mov ebp, esp */ r_ebp = r_esp;
    /* 0065de33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065de37: mov eax, 0x5a */ r_eax = 0x5au;
    /* 0065de3c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065de3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065de3f: ret  */ FN_RET(0x0065de30); r_esp += 4; return;
}

void f_0065de40(void) /* ?GetRuntimeClass@CStatusBarCtrl@@UBEPAUCRuntimeClass@@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065de40);
    /* 0065de40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065de41: mov ebp, esp */ r_ebp = r_esp;
    /* 0065de43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065de47: mov eax, 0x19c */ r_eax = 0x19cu;
    /* 0065de4c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065de4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065de4f: ret  */ FN_RET(0x0065de40); r_esp += 4; return;
}

void f_0065de50(void) /* ?CreateObject@CImageList@@SGPAVCObject@@XZ_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065de50);
    /* 0065de50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065de51: mov ebp, esp */ r_ebp = r_esp;
    /* 0065de53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065de57: mov eax, 0x91 */ r_eax = 0x91u;
    /* 0065de5c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065de5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065de5f: ret  */ FN_RET(0x0065de50); r_esp += 4; return;
}

void f_0065de60(void) /* sub_65DE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065de60);
    /* 0065de60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065de61: mov ebp, esp */ r_ebp = r_esp;
    /* 0065de63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065de67: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0065de6c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065de6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065de6f: ret  */ FN_RET(0x0065de60); r_esp += 4; return;
}

void f_0065de70(void) /* sub_65DE70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065de70);
    /* 0065de70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065de71: mov ebp, esp */ r_ebp = r_esp;
    /* 0065de73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065de77: mov eax, 0xfb */ r_eax = 0xfbu;
    /* 0065de7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065de7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065de7f: ret  */ FN_RET(0x0065de70); r_esp += 4; return;
}

void f_0065de80(void) /* sub_65DE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065de80);
    /* 0065de80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065de81: mov ebp, esp */ r_ebp = r_esp;
    /* 0065de83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065de84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065de87: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065de8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065de8e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065de94: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0065de9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65de9cu); call_ind(t); }
    /* 0065de9c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065de9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dea1: je 0x65deaa */ if (fZ) goto L_0065deaa;
L_0065dea3:; BB(0x0065dea3);
    /* 0065dea3: mov eax, 0x2c */ r_eax = 0x2cu;
    /* 0065dea8: jmp 0x65deaf */ goto L_0065deaf;
L_0065deaa:; BB(0x0065deaa);
    /* 0065deaa: mov eax, 0x36 */ r_eax = 0x36u;
L_0065deaf:; BB(0x0065deaf);
    /* 0065deaf: mov esp, ebp */ r_esp = r_ebp;
    /* 0065deb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065deb2: ret  */ FN_RET(0x0065de80); r_esp += 4; return;
}

void f_00660400(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660400);
    /* 00660400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660401: mov ebp, esp */ r_ebp = r_esp;
    /* 00660403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660404: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00660407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066040a: call 0x6280d0 */ r_esp -= 4; W32(r_esp, 0x66040fu); f_006280d0();
    /* 0066040f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660412: mov dword ptr [eax], 0x6deddc */ W32((u32)(r_eax), 0x6deddcu);
    /* 00660418: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066041b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066041d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066041e: ret  */ FN_RET(0x00660400); r_esp += 4; return;
}

void f_00660420(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660420);
    /* 00660420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660421: mov ebp, esp */ r_ebp = r_esp;
    /* 00660423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00660427: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066042a: mov dword ptr [eax], 0x6deddc */ W32((u32)(r_eax), 0x6deddcu);
    /* 00660430: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660433: call 0x628220 */ r_esp -= 4; W32(r_esp, 0x660438u); f_00628220();
    /* 00660438: mov esp, ebp */ r_esp = r_ebp;
    /* 0066043a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066043b: ret  */ FN_RET(0x00660420); r_esp += 4; return;
}

void f_00660be0(void) /* ??1CExpandoObject@@UAE@XZ_131 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660be0);
    /* 00660be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00660be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660be4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00660be7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660bea: mov dword ptr [eax], 0x6df13c */ W32((u32)(r_eax), 0x6df13cu);
    /* 00660bf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660bf3: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x660bf8u); f_005f7260();
    /* 00660bf8: mov esp, ebp */ r_esp = r_ebp;
    /* 00660bfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00660bfb: ret  */ FN_RET(0x00660be0); r_esp += 4; return;
}

void f_00661060(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661060);
    /* 00661060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661061: mov ebp, esp */ r_ebp = r_esp;
    /* 00661063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661067: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066106a: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x66106fu); f_00601a80();
    /* 0066106f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661072: mov dword ptr [eax], 0x6df1ac */ W32((u32)(r_eax), 0x6df1acu);
    /* 00661078: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066107b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066107d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066107e: ret  */ FN_RET(0x00661060); r_esp += 4; return;
}

void f_00661080(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661080);
    /* 00661080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661081: mov ebp, esp */ r_ebp = r_esp;
    /* 00661083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661084: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661087: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066108a: mov dword ptr [eax], 0x6df1ac */ W32((u32)(r_eax), 0x6df1acu);
    /* 00661090: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661093: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x661098u); f_00601ba0();
    /* 00661098: mov esp, ebp */ r_esp = r_ebp;
    /* 0066109a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066109b: ret  */ FN_RET(0x00661080); r_esp += 4; return;
}

void f_00661140(void) /* ??_G_com_error@@UAEPAXI@Z_376 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661140);
    /* 00661140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661141: mov ebp, esp */ r_ebp = r_esp;
    /* 00661143: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661144: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661147: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066114a: call 0x65dcc0 */ r_esp -= 4; W32(r_esp, 0x66114fu); f_0065dcc0();
    /* 0066114f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661152: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00661155: je 0x661163 */ if (fZ) goto L_00661163;
L_00661157:; BB(0x00661157);
    /* 00661157: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066115a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066115b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x661160u); f_00686cae();
    /* 00661160: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00661163:; BB(0x00661163);
    /* 00661163: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661166: mov esp, ebp */ r_esp = r_ebp;
    /* 00661168: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661169: ret 4 */ FN_RET(0x00661140); r_esp += 8; return;
}

void f_00661210(void) /* ??_G_com_error@@UAEPAXI@Z_377 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661210);
    /* 00661210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661211: mov ebp, esp */ r_ebp = r_esp;
    /* 00661213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066121a: call 0x660420 */ r_esp -= 4; W32(r_esp, 0x66121fu); f_00660420();
    /* 0066121f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661222: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00661225: je 0x661233 */ if (fZ) goto L_00661233;
L_00661227:; BB(0x00661227);
    /* 00661227: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066122a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066122b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x661230u); f_00686cae();
    /* 00661230: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00661233:; BB(0x00661233);
    /* 00661233: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661236: mov esp, ebp */ r_esp = r_ebp;
    /* 00661238: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661239: ret 4 */ FN_RET(0x00661210); r_esp += 8; return;
}

void f_00661240(void) /* ??_G_com_error@@UAEPAXI@Z_378 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661240);
    /* 00661240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661241: mov ebp, esp */ r_ebp = r_esp;
    /* 00661243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661247: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066124a: call 0x660be0 */ r_esp -= 4; W32(r_esp, 0x66124fu); f_00660be0();
    /* 0066124f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661252: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00661255: je 0x661263 */ if (fZ) goto L_00661263;
L_00661257:; BB(0x00661257);
    /* 00661257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066125a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066125b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x661260u); f_00686cae();
    /* 00661260: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00661263:; BB(0x00661263);
    /* 00661263: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661266: mov esp, ebp */ r_esp = r_ebp;
    /* 00661268: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661269: ret 4 */ FN_RET(0x00661240); r_esp += 8; return;
}

void f_00661270(void) /* ??_G_com_error@@UAEPAXI@Z_379 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661270);
    /* 00661270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661271: mov ebp, esp */ r_ebp = r_esp;
    /* 00661273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661277: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066127a: call 0x661080 */ r_esp -= 4; W32(r_esp, 0x66127fu); f_00661080();
    /* 0066127f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00661282: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00661285: je 0x661293 */ if (fZ) goto L_00661293;
L_00661287:; BB(0x00661287);
    /* 00661287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066128a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066128b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x661290u); f_00686cae();
    /* 00661290: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00661293:; BB(0x00661293);
    /* 00661293: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661296: mov esp, ebp */ r_esp = r_ebp;
    /* 00661298: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661299: ret 4 */ FN_RET(0x00661270); r_esp += 8; return;
}

void f_006614e0(void) /* ??1CExpandoObject@@UAE@XZ_132 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006614e0);
    /* 006614e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006614e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006614e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006614e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006614e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006614ea: mov dword ptr [eax], 0x6df3a4 */ W32((u32)(r_eax), 0x6df3a4u);
    /* 006614f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006614f3: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x6614f8u); f_005d7bd0();
    /* 006614f8: mov esp, ebp */ r_esp = r_ebp;
    /* 006614fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006614fb: ret  */ FN_RET(0x006614e0); r_esp += 4; return;
}

void f_00661a20(void) /* ?SetAtGrow@?$CTypedPtrArray@VCObArray@@PAVCBitmap@@@@QAEXHPAVCBitmap@@@Z_12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00661a20);
    /* 00661a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00661a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00661a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00661a27: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00661a2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00661a2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00661a2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00661a2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661a32: call 0x64e470 */ r_esp -= 4; W32(r_esp, 0x661a37u); f_0064e470();
    /* 00661a37: mov esp, ebp */ r_esp = r_ebp;
    /* 00661a39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00661a3a: ret 8 */ FN_RET(0x00661a20); r_esp += 12; return;
}

void f_00663060(void) /* ?SetOwningNode@SchedulingRing@details@Concurrency@@AAEXPAVSchedulingNode@23@@Z_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663060);
    /* 00663060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663061: mov ebp, esp */ r_ebp = r_esp;
    /* 00663063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663067: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066306a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066306d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00663070: mov esp, ebp */ r_esp = r_ebp;
    /* 00663072: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663073: ret 4 */ FN_RET(0x00663060); r_esp += 8; return;
}

void f_00663270(void) /* ??_G_com_error@@UAEPAXI@Z_380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663270);
    /* 00663270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663271: mov ebp, esp */ r_ebp = r_esp;
    /* 00663273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663277: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066327a: call 0x6614e0 */ r_esp -= 4; W32(r_esp, 0x66327fu); f_006614e0();
    /* 0066327f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00663282: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00663285: je 0x663293 */ if (fZ) goto L_00663293;
L_00663287:; BB(0x00663287);
    /* 00663287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066328a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066328b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x663290u); f_00686cae();
    /* 00663290: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00663293:; BB(0x00663293);
    /* 00663293: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663296: mov esp, ebp */ r_esp = r_ebp;
    /* 00663298: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663299: ret 4 */ FN_RET(0x00663270); r_esp += 8; return;
}

void f_006634e0(void) /* ??1CExpandoObject@@UAE@XZ_133 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006634e0);
    /* 006634e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006634e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006634e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006634e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006634e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006634ea: mov dword ptr [eax], 0x6df8b0 */ W32((u32)(r_eax), 0x6df8b0u);
    /* 006634f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006634f3: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x6634f8u); f_005e9e40();
    /* 006634f8: mov esp, ebp */ r_esp = r_ebp;
    /* 006634fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006634fb: ret  */ FN_RET(0x006634e0); r_esp += 4; return;
}

void f_00663500(void) /* ??0?$CMFCComObject@VCAccessibleProxy@ATL@@@@QAE@PAX@Z_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663500);
    /* 00663500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663501: mov ebp, esp */ r_ebp = r_esp;
    /* 00663503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663505: push 0x6acb03 */ { u32 v = 0x6acb03u; r_esp -= 4; W32(r_esp, v); }
    /* 0066350a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663511: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663512: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00663517: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00663519: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066351a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066351d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00663523: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00663526: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663529: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x66352eu); f_005e9e20();
    /* 0066352e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663535: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663538: mov dword ptr [eax], 0x6df8b8 */ W32((u32)(r_eax), 0x6df8b8u);
    /* 0066353e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663541: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663544: call 0x60c5f0 */ r_esp -= 4; W32(r_esp, 0x663549u); f_0060c5f0();
    /* 00663549: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066354d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663550: call 0x663a30 */ r_esp -= 4; W32(r_esp, 0x663555u); f_00663a30();
    /* 00663555: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066355c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066355f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663562: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663569: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066356a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066356c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066356d: ret  */ FN_RET(0x00663500); r_esp += 4; return;
}

void f_00663570(void) /* ??1?$call@IV?$function@$$A6AXABI@Z@std@@@Concurrency@@UAE@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663570);
    /* 00663570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663571: mov ebp, esp */ r_ebp = r_esp;
    /* 00663573: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00663575: push 0x6acb31 */ { u32 v = 0x6acb31u; r_esp -= 4; W32(r_esp, v); }
    /* 0066357a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663581: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663582: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00663587: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00663589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066358a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066358d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00663593: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00663596: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663599: mov dword ptr [eax], 0x6df8b8 */ W32((u32)(r_eax), 0x6df8b8u);
    /* 0066359f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006635a6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006635a9: call 0x6635e0 */ r_esp -= 4; W32(r_esp, 0x6635aeu); f_006635e0();
    /* 006635ae: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006635b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006635b5: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006635b8: call 0x60c6a0 */ r_esp -= 4; W32(r_esp, 0x6635bdu); f_0060c6a0();
    /* 006635bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006635c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006635c7: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x6635ccu); f_005e9e40();
    /* 006635cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006635cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006635d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006635d7: mov esp, ebp */ r_esp = r_ebp;
    /* 006635d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006635da: ret  */ FN_RET(0x00663570); r_esp += 4; return;
}

void f_00663c50(void) /* ??1CDaoIndexFieldInfo@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663c50);
    /* 00663c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00663c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663c54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663c57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663c5a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00663c5d: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x663c62u); f_0060c9a0();
    /* 00663c62: mov esp, ebp */ r_esp = r_ebp;
    /* 00663c64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663c65: ret  */ FN_RET(0x00663c50); r_esp += 4; return;
}

void f_00663ed0(void) /* ??1CExpandoObject@@UAE@XZ_134 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00663ed0);
    /* 00663ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00663ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00663ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00663ed7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663eda: mov dword ptr [eax], 0x6df8dc */ W32((u32)(r_eax), 0x6df8dcu);
    /* 00663ee0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663ee3: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x663ee8u); f_005f5c40();
    /* 00663ee8: mov esp, ebp */ r_esp = r_ebp;
    /* 00663eea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00663eeb: ret  */ FN_RET(0x00663ed0); r_esp += 4; return;
}

void f_00664cb0(void) /* ?fill@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDXZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00664cb0);
    /* 00664cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00664cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00664cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00664cb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00664cb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00664cba: mov al, byte ptr [eax + 0x40] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x40u))) & 0xffu);
    /* 00664cbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00664cbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00664cc0: ret  */ FN_RET(0x00664cb0); r_esp += 4; return;
}

void f_00665b10(void) /* ??_G_com_error@@UAEPAXI@Z_381 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665b10);
    /* 00665b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00665b13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665b14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00665b17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b1a: call 0x6634e0 */ r_esp -= 4; W32(r_esp, 0x665b1fu); f_006634e0();
    /* 00665b1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00665b22: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00665b25: je 0x665b33 */ if (fZ) goto L_00665b33;
L_00665b27:; BB(0x00665b27);
    /* 00665b27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665b2b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x665b30u); f_00686cae();
    /* 00665b30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665b33:; BB(0x00665b33);
    /* 00665b33: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b36: mov esp, ebp */ r_esp = r_ebp;
    /* 00665b38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665b39: ret 4 */ FN_RET(0x00665b10); r_esp += 8; return;
}

void f_00665b40(void) /* ??_G_com_error@@UAEPAXI@Z_382 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665b40);
    /* 00665b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00665b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00665b47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b4a: call 0x663570 */ r_esp -= 4; W32(r_esp, 0x665b4fu); f_00663570();
    /* 00665b4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00665b52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00665b55: je 0x665b63 */ if (fZ) goto L_00665b63;
L_00665b57:; BB(0x00665b57);
    /* 00665b57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665b5b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x665b60u); f_00686cae();
    /* 00665b60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665b63:; BB(0x00665b63);
    /* 00665b63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b66: mov esp, ebp */ r_esp = r_ebp;
    /* 00665b68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665b69: ret 4 */ FN_RET(0x00665b40); r_esp += 8; return;
}

void f_00665b70(void) /* ??_G_com_error@@UAEPAXI@Z_383 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665b70);
    /* 00665b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00665b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00665b77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b7a: call 0x663ed0 */ r_esp -= 4; W32(r_esp, 0x665b7fu); f_00663ed0();
    /* 00665b7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00665b82: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00665b85: je 0x665b93 */ if (fZ) goto L_00665b93;
L_00665b87:; BB(0x00665b87);
    /* 00665b87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665b8b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x665b90u); f_00686cae();
    /* 00665b90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665b93:; BB(0x00665b93);
    /* 00665b93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665b96: mov esp, ebp */ r_esp = r_ebp;
    /* 00665b98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665b99: ret 4 */ FN_RET(0x00665b70); r_esp += 8; return;
}

void f_00665ba0(void) /* ??_G_com_error@@UAEPAXI@Z_384 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665ba0);
    /* 00665ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00665ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00665ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665ba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00665ba7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665baa: call 0x664140 */ r_esp -= 4; W32(r_esp, 0x665bafu); f_00664140();
    /* 00665baf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00665bb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00665bb5: je 0x665bc3 */ if (fZ) goto L_00665bc3;
L_00665bb7:; BB(0x00665bb7);
    /* 00665bb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665bba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00665bbb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x665bc0u); f_00686cae();
    /* 00665bc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00665bc3:; BB(0x00665bc3);
    /* 00665bc3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00665bc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00665bc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00665bc9: ret 4 */ FN_RET(0x00665ba0); r_esp += 8; return;
}

void f_00665ee5(void) /* _WinMain@16_127 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00665ee5);
    /* 00665ee5: jmp 0x6660c2 */ f_006660c2(); return;
}

void f_00666039(void) /* _WinMain@16_128 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00666039);
    /* 00666039: jmp 0x6660c0 */ f_006660c0(); return;
}

void f_006660c0(void) /* _WinMain@16_128_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006660c0);
    /* 006660c0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006660c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006660c5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006660c7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6660ccu); f_00686d72();
    /* 006660cc: mov esp, ebp */ r_esp = r_ebp;
    /* 006660ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006660cf: ret  */ FN_RET(0x006660c0); r_esp += 4; return;
}

void f_006660c2(void) /* _WinMain@16_127_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006660c2);
    /* 006660c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006660c5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006660c7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6660ccu); f_00686d72();
    /* 006660cc: mov esp, ebp */ r_esp = r_ebp;
    /* 006660ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006660cf: ret  */ FN_RET(0x006660c2); r_esp += 4; return;
}

void f_006660d0(void) /* __should_initialize_environment */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006660d0);
    /* 006660d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006660d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006660d3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006660d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006660d6: ret  */ FN_RET(0x006660d0); r_esp += 4; return;
}

void f_006663c0(void) /* _WinMain@16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006663c0);
    /* 006663c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006663c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006663c3: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 006663c5: push 0x701948 */ { u32 v = 0x701948u; r_esp -= 4; W32(r_esp, v); }
    /* 006663ca: push 0x68736b */ { u32 v = 0x68736bu; r_esp -= 4; W32(r_esp, v); }
    /* 006663cf: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006663d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006663d6: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006663d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006663da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006663db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006663dc: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006663e1: xor dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 006663e4: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006663e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006663e7: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 006663ea: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006663f0: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 006663f3: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 006663fa: call dword ptr [0x6b20b4] */ { u32 t = R32((u32)(0x6b20b4u)); r_esp -= 4; W32(r_esp, 0x666400u); call_ind(t); }
    /* 00666400: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00666403: push 0x6dfabc */ { u32 v = 0x6dfabcu; r_esp -= 4; W32(r_esp, v); }
    /* 00666408: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066640b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066640c: call dword ptr [0x6b22fc] */ { u32 t = R32((u32)(0x6b22fcu)); r_esp -= 4; W32(r_esp, 0x666412u); call_ind(t); }
    /* 00666412: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00666415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00666417: je 0x666433 */ if (fZ) goto L_00666433;
L_00666419:; BB(0x00666419);
    /* 00666419: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0066641c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066641d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00666420: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00666421: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00666424: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666425: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00666428: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666429: call 0x6662c0 */ r_esp -= 4; W32(r_esp, 0x66642eu); f_006662c0();
    /* 0066642e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00666431: jmp 0x666477 */ goto L_00666477;
L_00666433:; BB(0x00666433);
    /* 00666433: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066643a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0066643d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066643e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00666441: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00666442: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00666445: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00666446: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00666449: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066644a: call 0x6662c0 */ r_esp -= 4; W32(r_esp, 0x66644fu); f_006662c0();
    /* 0066644f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00666452: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 00666459: jmp 0x666477 */ goto L_00666477;
L_00666477:; BB(0x00666477);
    /* 00666477: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066647a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066647d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00666484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00666485: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00666486: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00666487: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00666488: mov esp, ebp */ r_esp = r_ebp;
    /* 0066648a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066648b: ret 0x10 */ FN_RET(0x006663c0); r_esp += 20; return;
}

void f_006665b0(void) /* ??0CLoadDirectDraw@@QAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006665b0);
    /* 006665b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006665b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006665b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006665b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006665b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006665ba: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006665c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006665c3: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 006665ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006665cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006665cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006665d0: ret  */ FN_RET(0x006665b0); r_esp += 4; return;
}

void f_006671e8(void) /* _WinMain@16_129 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006671e8);
    /* 006671e8: jmp 0x66782e */ f_0066782e(); return;
}

void f_006671ed(void) /* _WinMain@16_130_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006671ed);
L_006671ed:; BB(0x006671ed);
    /* 006671ed: mov edx, dword ptr [ebp - 0x230] */ r_edx = R32((u32)(r_ebp+0xfffffdd0u));
    /* 006671f3: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006671f6: jne 0x66727d */ if (!fZ) goto L_0066727d;
L_006671fc:; BB(0x006671fc);
    /* 006671fc: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00667201: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x667206u); f_00686d82();
    /* 00667206: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667209: mov dword ptr [ebp - 0x588c], eax */ W32((u32)(r_ebp+0xffffa774u), r_eax);
    /* 0066720f: mov eax, dword ptr [ebp - 0x567c] */ r_eax = R32((u32)(r_ebp+0xffffa984u));
    /* 00667215: mov ecx, dword ptr [ebp - 0x588c] */ r_ecx = R32((u32)(r_ebp+0xffffa774u));
    /* 0066721b: mov dword ptr [ebp + eax*4 - 0x5568], ecx */ W32((u32)(r_ebp+r_eax*4+0xffffaa98u), r_ecx);
    /* 00667222: lea edx, [ebp - 0x20c] */ r_edx = (u32)(r_ebp+0xfffffdf4u);
    /* 00667228: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667229: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066722c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066722d: push 0x6c2d30 */ { u32 v = 0x6c2d30u; r_esp -= 4; W32(r_esp, v); }
    /* 00667232: mov ecx, dword ptr [ebp - 0x567c] */ r_ecx = R32((u32)(r_ebp+0xffffa984u));
    /* 00667238: mov edx, dword ptr [ebp + ecx*4 - 0x5568] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffaa98u));
    /* 0066723f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667240: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x667246u); call_ind(t); }
    /* 00667246: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667249: mov eax, dword ptr [ebp - 0x567c] */ r_eax = R32((u32)(r_ebp+0xffffa984u));
    /* 0066724f: mov ecx, dword ptr [ebp + eax*4 - 0x5568] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffaa98u));
    /* 00667256: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667257: call dword ptr [0x6b21e0] */ { u32 t = R32((u32)(0x6b21e0u)); r_esp -= 4; W32(r_esp, 0x66725du); call_ind(t); }
    /* 0066725d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667260: mov edx, dword ptr [ebp - 0x567c] */ r_edx = R32((u32)(r_ebp+0xffffa984u));
    /* 00667266: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00667269: mov dword ptr [ebp - 0x567c], edx */ W32((u32)(r_ebp+0xffffa984u), r_edx);
    /* 0066726f: cmp dword ptr [ebp - 0x567c], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0xffffa984u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667279: jne 0x66727d */ if (!fZ) goto L_0066727d;
L_0066727b:; BB(0x0066727b);
    /* 0066727b: jmp 0x6672a0 */ goto L_006672a0;
L_0066727d:; BB(0x0066727d);
    /* 0066727d: lea eax, [ebp - 0x230] */ r_eax = (u32)(r_ebp+0xfffffdd0u);
    /* 00667283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667284: mov ecx, dword ptr [ebp - 0x5784] */ r_ecx = R32((u32)(r_ebp+0xffffa87cu));
    /* 0066728a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066728b: call dword ptr [0x6b2304] */ { u32 t = R32((u32)(0x6b2304u)); r_esp -= 4; W32(r_esp, 0x667291u); call_ind(t); }
    /* 00667291: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667294: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667297: jne 0x66729b */ if (!fZ) goto L_0066729b;
L_00667299:; BB(0x00667299);
    /* 00667299: jmp 0x6672a0 */ goto L_006672a0;
L_0066729b:; BB(0x0066729b);
    /* 0066729b: jmp 0x6671ed */ goto L_006671ed;
L_006672a0:; BB(0x006672a0);
    /* 006672a0: mov edx, dword ptr [ebp - 0x5784] */ r_edx = R32((u32)(r_ebp+0xffffa87cu));
    /* 006672a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006672a7: call dword ptr [0x6b2300] */ { u32 t = R32((u32)(0x6b2300u)); r_esp -= 4; W32(r_esp, 0x6672adu); call_ind(t); }
    /* 006672ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006672b0: push 0x667840 */ { u32 v = 0x667840u; r_esp -= 4; W32(r_esp, v); }
    /* 006672b5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006672b7: mov eax, dword ptr [ebp - 0x567c] */ r_eax = R32((u32)(r_ebp+0xffffa984u));
    /* 006672bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006672be: lea ecx, [ebp - 0x5568] */ r_ecx = (u32)(r_ebp+0xffffaa98u);
    /* 006672c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006672c5: call dword ptr [0x6b2248] */ { u32 t = R32((u32)(0x6b2248u)); r_esp -= 4; W32(r_esp, 0x6672cbu); call_ind(t); }
    /* 006672cb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006672ce: mov dword ptr [ebp - 0x238], 0 */ W32((u32)(r_ebp+0xfffffdc8u), 0x0u);
    /* 006672d8: jmp 0x6672e9 */ goto L_006672e9;
L_006672da:; BB(0x006672da);
    /* 006672da: mov edx, dword ptr [ebp - 0x238] */ r_edx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 006672e0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006672e3: mov dword ptr [ebp - 0x238], edx */ W32((u32)(r_ebp+0xfffffdc8u), r_edx);
L_006672e9:; BB(0x006672e9);
    /* 006672e9: mov eax, dword ptr [ebp - 0x238] */ r_eax = R32((u32)(r_ebp+0xfffffdc8u));
    /* 006672ef: cmp eax, dword ptr [ebp - 0x567c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffa984u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006672f5: jge 0x6677e1 */ if ((fS==fO)) goto L_006677e1;
L_006672fb:; BB(0x006672fb);
    /* 006672fb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006672fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006672ff: mov edx, dword ptr [ebp - 0x567c] */ r_edx = R32((u32)(r_ebp+0xffffa984u));
    /* 00667305: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667306: mov eax, dword ptr [ebp - 0x238] */ r_eax = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0066730c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066730f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667310: push 0x6dfbac */ { u32 v = 0x6dfbacu; r_esp -= 4; W32(r_esp, v); }
    /* 00667315: lea ecx, [ebp - 0x538] */ r_ecx = (u32)(r_ebp+0xfffffac8u);
    /* 0066731b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066731c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x667322u); call_ind(t); }
    /* 00667322: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667325: lea edx, [ebp - 0x538] */ r_edx = (u32)(r_ebp+0xfffffac8u);
    /* 0066732b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066732c: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00667331: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00667334: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0066733a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0066733d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066733f: mov ecx, eax */ r_ecx = r_eax;
    /* 00667341: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00667344: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x667346u); call_ind(t); }
    /* 00667346: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0066734c: mov edx, dword ptr [ebp + ecx*4 - 0x5568] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffaa98u));
    /* 00667353: mov dword ptr [ebp - 0x5894], edx */ W32((u32)(r_ebp+0xffffa76cu), r_edx);
    /* 00667359: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066735b: mov eax, dword ptr [ebp - 0x5894] */ r_eax = R32((u32)(r_ebp+0xffffa76cu));
    /* 00667361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667362: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x667368u); call_ind(t); }
    /* 00667368: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066736b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0066736e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667372: je 0x6673b8 */ if (fZ) goto L_006673b8;
L_00667374:; BB(0x00667374);
    /* 00667374: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667377: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 0066737b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066737c: call dword ptr [0x6b2170] */ { u32 t = R32((u32)(0x6b2170u)); r_esp -= 4; W32(r_esp, 0x667382u); call_ind(t); }
    /* 00667382: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667387: je 0x6673b8 */ if (fZ) goto L_006673b8;
L_00667389:; BB(0x00667389);
    /* 00667389: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066738c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066738f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667390: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x667396u); call_ind(t); }
    /* 00667396: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667399: mov dword ptr [ebp - 0x234], eax */ W32((u32)(r_ebp+0xfffffdccu), r_eax);
    /* 0066739f: mov dword ptr [ebp - 0x544], 0xffffffff */ W32((u32)(r_ebp+0xfffffabcu), 0xffffffffu);
    /* 006673a9: mov dword ptr [ebp - 0x5674], 0xffffffff */ W32((u32)(r_ebp+0xffffa98cu), 0xffffffffu);
    /* 006673b3: jmp 0x66743c */ goto L_0066743c;
L_006673b8:; BB(0x006673b8);
    /* 006673b8: lea ecx, [ebp - 0x5670] */ r_ecx = (u32)(r_ebp+0xffffa990u);
    /* 006673be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006673bf: lea edx, [ebp - 0x438] */ r_edx = (u32)(r_ebp+0xfffffbc8u);
    /* 006673c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006673c6: lea eax, [ebp - 0x5780] */ r_eax = (u32)(r_ebp+0xffffa880u);
    /* 006673cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006673cd: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 006673d3: mov edx, dword ptr [ebp + ecx*4 - 0x5568] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffaa98u));
    /* 006673da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006673db: mov ecx, dword ptr [ebp - 0x5898] */ r_ecx = R32((u32)(r_ebp+0xffffa768u));
    /* 006673e1: call 0x667860 */ r_esp -= 4; W32(r_esp, 0x6673e6u); f_00667860();
    /* 006673e6: mov dword ptr [ebp - 0x234], eax */ W32((u32)(r_ebp+0xfffffdccu), r_eax);
    /* 006673ec: cmp dword ptr [ebp - 0x234], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffdccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006673f3: jne 0x6673fa */ if (!fZ) goto L_006673fa;
L_006673f5:; BB(0x006673f5);
    /* 006673f5: jmp 0x6677e1 */ goto L_006677e1;
L_006673fa:; BB(0x006673fa);
    /* 006673fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006673fc: lea eax, [ebp - 0x544] */ r_eax = (u32)(r_ebp+0xfffffabcu);
    /* 00667402: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667403: lea ecx, [ebp - 0x5674] */ r_ecx = (u32)(r_ebp+0xffffa98cu);
    /* 00667409: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066740a: mov edx, dword ptr [ebp - 0x234] */ r_edx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00667410: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667411: mov ecx, dword ptr [ebp - 0x5898] */ r_ecx = R32((u32)(r_ebp+0xffffa768u));
    /* 00667417: call 0x666760 */ r_esp -= 4; W32(r_esp, 0x66741cu); f_00666760();
    /* 0066741c: mov eax, dword ptr [ebp - 0x544] */ r_eax = R32((u32)(r_ebp+0xfffffabcu));
    /* 00667422: cmp eax, dword ptr [ebp - 0x540] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffac0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667428: jne 0x66743c */ if (!fZ) goto L_0066743c;
L_0066742a:; BB(0x0066742a);
    /* 0066742a: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00667430: add ecx, dword ptr [ebp - 0x556c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffaa94u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00667436: mov dword ptr [ebp - 0x234], ecx */ W32((u32)(r_ebp+0xfffffdccu), r_ecx);
L_0066743c:; BB(0x0066743c);
    /* 0066743c: mov edx, dword ptr [ebp - 0x234] */ r_edx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00667442: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667443: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00667446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667447: push 0x6dfba0 */ { u32 v = 0x6dfba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066744c: lea ecx, [ebp - 0x5888] */ r_ecx = (u32)(r_ebp+0xffffa778u);
    /* 00667452: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667453: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x667459u); call_ind(t); }
    /* 00667459: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066745c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066745e: lea edx, [ebp - 0x5888] */ r_edx = (u32)(r_ebp+0xffffa778u);
    /* 00667464: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667465: mov eax, dword ptr [ebp - 0x238] */ r_eax = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0066746b: mov ecx, dword ptr [ebp + eax*4 - 0x5568] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffaa98u));
    /* 00667472: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667473: call dword ptr [0x6b2064] */ { u32 t = R32((u32)(0x6b2064u)); r_esp -= 4; W32(r_esp, 0x667479u); call_ind(t); }
    /* 00667479: mov edx, dword ptr [ebp - 0x238] */ r_edx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0066747f: mov eax, dword ptr [ebp + edx*4 - 0x5568] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffaa98u));
    /* 00667486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667487: lea ecx, [ebp - 0x5888] */ r_ecx = (u32)(r_ebp+0xffffa778u);
    /* 0066748d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066748e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x667493u); f_00686d8e();
    /* 00667493: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667496: push 0x6dfb98 */ { u32 v = 0x6dfb98u; r_esp -= 4; W32(r_esp, v); }
    /* 0066749b: push 0x6dfb90 */ { u32 v = 0x6dfb90u; r_esp -= 4; W32(r_esp, v); }
    /* 006674a0: lea edx, [ebp - 0x5888] */ r_edx = (u32)(r_ebp+0xffffa778u);
    /* 006674a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006674a7: call dword ptr [0x6b22fc] */ { u32 t = R32((u32)(0x6b22fcu)); r_esp -= 4; W32(r_esp, 0x6674adu); call_ind(t); }
    /* 006674ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006674b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006674b1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6674b6u); f_00686d8e();
    /* 006674b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006674b9: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 006674be: lea eax, [ebp - 0x5888] */ r_eax = (u32)(r_ebp+0xffffa778u);
    /* 006674c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006674c5: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6674cau); f_005ea9c0();
    /* 006674ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006674cd: mov dword ptr [ebp - 0x53c], eax */ W32((u32)(r_ebp+0xfffffac4u), r_eax);
    /* 006674d3: cmp dword ptr [ebp - 0x53c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffac4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006674da: je 0x667578 */ if (fZ) goto L_00667578;
L_006674e0:; BB(0x006674e0);
    /* 006674e0: mov ecx, dword ptr [ebp - 0x53c] */ r_ecx = R32((u32)(r_ebp+0xfffffac4u));
    /* 006674e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006674e7: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6674edu); call_ind(t); }
    /* 006674ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006674f0: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 006674f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006674f6: je 0x66751a */ if (fZ) goto L_0066751a;
L_006674f8:; BB(0x006674f8);
    /* 006674f8: mov eax, dword ptr [ebp - 0x234] */ r_eax = R32((u32)(r_ebp+0xfffffdccu));
    /* 006674fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006674ff: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00667502: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667503: push 0x6dfb84 */ { u32 v = 0x6dfb84u; r_esp -= 4; W32(r_esp, v); }
    /* 00667508: lea edx, [ebp - 0x748] */ r_edx = (u32)(r_ebp+0xfffff8b8u);
    /* 0066750e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066750f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x667515u); call_ind(t); }
    /* 00667515: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667518: jmp 0x66753a */ goto L_0066753a;
L_0066751a:; BB(0x0066751a);
    /* 0066751a: mov eax, dword ptr [ebp - 0x234] */ r_eax = R32((u32)(r_ebp+0xfffffdccu));
    /* 00667520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667521: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00667524: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667525: push 0x6dfb78 */ { u32 v = 0x6dfb78u; r_esp -= 4; W32(r_esp, v); }
    /* 0066752a: lea edx, [ebp - 0x748] */ r_edx = (u32)(r_ebp+0xfffff8b8u);
    /* 00667530: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667531: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x667537u); call_ind(t); }
    /* 00667537: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066753a:; BB(0x0066753a);
    /* 0066753a: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 0066753e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667540: je 0x66755d */ if (fZ) goto L_0066755d;
L_00667542:; BB(0x00667542);
    /* 00667542: lea ecx, [ebp - 0x748] */ r_ecx = (u32)(r_ebp+0xfffff8b8u);
    /* 00667548: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667549: lea edx, [ebp - 0x5888] */ r_edx = (u32)(r_ebp+0xffffa778u);
    /* 0066754f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667550: mov ecx, dword ptr [ebp - 0x5898] */ r_ecx = R32((u32)(r_ebp+0xffffa768u));
    /* 00667556: call 0x667b80 */ r_esp -= 4; W32(r_esp, 0x66755bu); f_00667b80();
    /* 0066755b: jmp 0x667573 */ goto L_00667573;
L_0066755d:; BB(0x0066755d);
    /* 0066755d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066755f: lea eax, [ebp - 0x748] */ r_eax = (u32)(r_ebp+0xfffff8b8u);
    /* 00667565: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667566: lea ecx, [ebp - 0x5888] */ r_ecx = (u32)(r_ebp+0xffffa778u);
    /* 0066756c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066756d: call dword ptr [0x6b2064] */ { u32 t = R32((u32)(0x6b2064u)); r_esp -= 4; W32(r_esp, 0x667573u); call_ind(t); }
L_00667573:; BB(0x00667573);
    /* 00667573: jmp 0x667641 */ goto L_00667641;
L_00667578:; BB(0x00667578);
    /* 00667578: mov edx, dword ptr [ebp - 0x238] */ r_edx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 0066757e: mov eax, dword ptr [ebp + edx*4 - 0x5568] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffaa98u));
    /* 00667585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667586: lea ecx, [ebp - 0x5888] */ r_ecx = (u32)(r_ebp+0xffffa778u);
    /* 0066758c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066758d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x667592u); f_00686d8e();
    /* 00667592: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667595: push 0x6dfb70 */ { u32 v = 0x6dfb70u; r_esp -= 4; W32(r_esp, v); }
    /* 0066759a: push 0x6dfb90 */ { u32 v = 0x6dfb90u; r_esp -= 4; W32(r_esp, v); }
    /* 0066759f: lea edx, [ebp - 0x5888] */ r_edx = (u32)(r_ebp+0xffffa778u);
    /* 006675a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006675a6: call dword ptr [0x6b22fc] */ { u32 t = R32((u32)(0x6b22fcu)); r_esp -= 4; W32(r_esp, 0x6675acu); call_ind(t); }
    /* 006675ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006675af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006675b0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6675b5u); f_00686d8e();
    /* 006675b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006675b8: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 006675bd: lea eax, [ebp - 0x5888] */ r_eax = (u32)(r_ebp+0xffffa778u);
    /* 006675c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006675c4: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6675c9u); f_005ea9c0();
    /* 006675c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006675cc: mov dword ptr [ebp - 0x53c], eax */ W32((u32)(r_ebp+0xfffffac4u), r_eax);
    /* 006675d2: cmp dword ptr [ebp - 0x53c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffac4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006675d9: je 0x6675fb */ if (fZ) goto L_006675fb;
L_006675db:; BB(0x006675db);
    /* 006675db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006675dd: jne 0x6675f6 */ if (!fZ) goto L_006675f6;
L_006675df:; BB(0x006675df);
    /* 006675df: push 0x1fd */ { u32 v = 0x1fdu; r_esp -= 4; W32(r_esp, v); }
    /* 006675e4: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 006675e9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006675ee: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6675f3u); f_005e9f20();
    /* 006675f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006675f6:; BB(0x006675f6);
    /* 006675f6: jmp 0x6677e1 */ goto L_006677e1;
L_006675fb:; BB(0x006675fb);
    /* 006675fb: mov eax, dword ptr [ebp - 0x53c] */ r_eax = R32((u32)(r_ebp+0xfffffac4u));
    /* 00667601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667602: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x667608u); call_ind(t); }
    /* 00667608: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066760b: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 00667611: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667612: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00667615: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667616: push 0x6dfb84 */ { u32 v = 0x6dfb84u; r_esp -= 4; W32(r_esp, v); }
    /* 0066761b: lea eax, [ebp - 0x748] */ r_eax = (u32)(r_ebp+0xfffff8b8u);
    /* 00667621: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667622: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x667628u); call_ind(t); }
    /* 00667628: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066762b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066762d: lea ecx, [ebp - 0x748] */ r_ecx = (u32)(r_ebp+0xfffff8b8u);
    /* 00667633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667634: lea edx, [ebp - 0x5888] */ r_edx = (u32)(r_ebp+0xffffa778u);
    /* 0066763a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066763b: call dword ptr [0x6b2064] */ { u32 t = R32((u32)(0x6b2064u)); r_esp -= 4; W32(r_esp, 0x667641u); call_ind(t); }
L_00667641:; BB(0x00667641);
    /* 00667641: cmp dword ptr [ebp - 0x540], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffac0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667648: je 0x667773 */ if (fZ) goto L_00667773;
L_0066764e:; BB(0x0066764e);
    /* 0066764e: mov eax, dword ptr [ebp - 0x544] */ r_eax = R32((u32)(r_ebp+0xfffffabcu));
    /* 00667654: cmp eax, dword ptr [ebp - 0x540] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffac0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066765a: jne 0x66767f */ if (!fZ) goto L_0066767f;
L_0066765c:; BB(0x0066765c);
    /* 0066765c: mov ecx, dword ptr [ebp - 0x5674] */ r_ecx = R32((u32)(r_ebp+0xffffa98cu));
    /* 00667662: cmp ecx, dword ptr [ebp - 0x5678] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffa988u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667668: jne 0x66767f */ if (!fZ) goto L_0066767f;
L_0066766a:; BB(0x0066766a);
    /* 0066766a: mov edx, dword ptr [ebp - 0x567c] */ r_edx = R32((u32)(r_ebp+0xffffa984u));
    /* 00667670: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00667673: cmp dword ptr [ebp - 0x238], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffdc8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00667679: jne 0x667773 */ if (!fZ) goto L_00667773;
L_0066767f:; BB(0x0066767f);
    /* 0066767f: mov eax, dword ptr [ebp - 0x567c] */ r_eax = R32((u32)(r_ebp+0xffffa984u));
    /* 00667685: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00667688: cmp dword ptr [ebp - 0x238], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffdc8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066768e: jne 0x66769f */ if (!fZ) goto L_0066769f;
L_00667690:; BB(0x00667690);
    /* 00667690: mov ecx, dword ptr [ebp - 0x556c] */ r_ecx = R32((u32)(r_ebp+0xffffaa94u));
    /* 00667696: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00667699: mov dword ptr [ebp - 0x556c], ecx */ W32((u32)(r_ebp+0xffffaa94u), r_ecx);
L_0066769f:; BB(0x0066769f);
    /* 0066769f: mov edx, dword ptr [ebp - 0x540] */ r_edx = R32((u32)(r_ebp+0xfffffac0u));
    /* 006676a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006676a6: mov eax, dword ptr [ebp - 0x5678] */ r_eax = R32((u32)(r_ebp+0xffffa988u));
    /* 006676ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006676ad: mov ecx, dword ptr [ebp - 0x5898] */ r_ecx = R32((u32)(r_ebp+0xffffa768u));
    /* 006676b3: call 0x6667c0 */ r_esp -= 4; W32(r_esp, 0x6676b8u); f_006667c0();
    /* 006676b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006676b9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006676bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006676bd: push 0x6dfb64 */ { u32 v = 0x6dfb64u; r_esp -= 4; W32(r_esp, v); }
    /* 006676c2: lea edx, [ebp - 0x5888] */ r_edx = (u32)(r_ebp+0xffffa778u);
    /* 006676c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006676c9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6676cfu); call_ind(t); }
    /* 006676cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006676d2: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006676d7: lea eax, [ebp - 0x5888] */ r_eax = (u32)(r_ebp+0xffffa778u);
    /* 006676dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006676de: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6676e3u); f_005ea9c0();
    /* 006676e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006676e6: mov dword ptr [ebp - 0x53c], eax */ W32((u32)(r_ebp+0xfffffac4u), r_eax);
    /* 006676ec: cmp dword ptr [ebp - 0x53c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffac4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006676f3: jne 0x667715 */ if (!fZ) goto L_00667715;
L_006676f5:; BB(0x006676f5);
    /* 006676f5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006676f7: jne 0x667710 */ if (!fZ) goto L_00667710;
L_006676f9:; BB(0x006676f9);
    /* 006676f9: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 006676fe: push 0x6dfb24 */ { u32 v = 0x6dfb24u; r_esp -= 4; W32(r_esp, v); }
    /* 00667703: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00667708: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66770du); f_005e9f20();
    /* 0066770d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00667710:; BB(0x00667710);
    /* 00667710: jmp 0x6677e1 */ goto L_006677e1;
L_00667715:; BB(0x00667715);
    /* 00667715: mov eax, dword ptr [ebp - 0x53c] */ r_eax = R32((u32)(r_ebp+0xfffffac4u));
    /* 0066771b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066771c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066771e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00667720: lea ecx, [ebp - 0x556c] */ r_ecx = (u32)(r_ebp+0xffffaa94u);
    /* 00667726: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667727: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x66772du); call_ind(t); }
    /* 0066772d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667730: mov edx, dword ptr [ebp - 0x53c] */ r_edx = R32((u32)(r_ebp+0xfffffac4u));
    /* 00667736: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667737: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x66773du); call_ind(t); }
    /* 0066773d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667740: mov eax, dword ptr [ebp - 0x556c] */ r_eax = R32((u32)(r_ebp+0xffffaa94u));
    /* 00667746: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00667747: lea ecx, [ebp - 0x648] */ r_ecx = (u32)(r_ebp+0xfffff9b8u);
    /* 0066774d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066774e: lea edx, [ebp - 0x338] */ r_edx = (u32)(r_ebp+0xfffffcc8u);
    /* 00667754: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667755: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 0066775b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066775c: push 0x6dfb54 */ { u32 v = 0x6dfb54u; r_esp -= 4; W32(r_esp, v); }
    /* 00667761: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x667766u); f_0062fde0();
    /* 00667766: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00667769: mov dword ptr [ebp - 0x556c], 0 */ W32((u32)(r_ebp+0xffffaa94u), 0x0u);
L_00667773:; BB(0x00667773);
    /* 00667773: mov ecx, dword ptr [ebp - 0x556c] */ r_ecx = R32((u32)(r_ebp+0xffffaa94u));
    /* 00667779: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066777c: mov dword ptr [ebp - 0x556c], ecx */ W32((u32)(r_ebp+0xffffaa94u), r_ecx);
    /* 00667782: mov edx, dword ptr [ebp - 0x544] */ r_edx = R32((u32)(r_ebp+0xfffffabcu));
    /* 00667788: mov dword ptr [ebp - 0x540], edx */ W32((u32)(r_ebp+0xfffffac0u), r_edx);
    /* 0066778e: mov eax, dword ptr [ebp - 0x5674] */ r_eax = R32((u32)(r_ebp+0xffffa98cu));
    /* 00667794: mov dword ptr [ebp - 0x5678], eax */ W32((u32)(r_ebp+0xffffa988u), r_eax);
    /* 0066779a: lea ecx, [ebp - 0x5780] */ r_ecx = (u32)(r_ebp+0xffffa880u);
    /* 006677a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006677a1: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 006677a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006677a8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6677adu); f_00686d8e();
    /* 006677ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006677b0: lea eax, [ebp - 0x438] */ r_eax = (u32)(r_ebp+0xfffffbc8u);
    /* 006677b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006677b7: lea ecx, [ebp - 0x338] */ r_ecx = (u32)(r_ebp+0xfffffcc8u);
    /* 006677bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006677be: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6677c3u); f_00686d8e();
    /* 006677c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006677c6: lea edx, [ebp - 0x5670] */ r_edx = (u32)(r_ebp+0xffffa990u);
    /* 006677cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006677cd: lea eax, [ebp - 0x648] */ r_eax = (u32)(r_ebp+0xfffff9b8u);
    /* 006677d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006677d4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6677d9u); f_00686d8e();
    /* 006677d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006677dc: jmp 0x6672da */ goto L_006672da;
L_006677e1:; BB(0x006677e1);
    /* 006677e1: mov dword ptr [ebp - 0x238], 0 */ W32((u32)(r_ebp+0xfffffdc8u), 0x0u);
    /* 006677eb: jmp 0x6677fc */ goto L_006677fc;
L_006677ed:; BB(0x006677ed);
    /* 006677ed: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 006677f3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006677f6: mov dword ptr [ebp - 0x238], ecx */ W32((u32)(r_ebp+0xfffffdc8u), r_ecx);
L_006677fc:; BB(0x006677fc);
    /* 006677fc: mov edx, dword ptr [ebp - 0x238] */ r_edx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 00667802: cmp edx, dword ptr [ebp - 0x567c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffa984u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00667808: jge 0x66782e */ if ((fS==fO)) goto L_0066782e;
L_0066780a:; BB(0x0066780a);
    /* 0066780a: mov eax, dword ptr [ebp - 0x238] */ r_eax = R32((u32)(r_ebp+0xfffffdc8u));
    /* 00667810: mov ecx, dword ptr [ebp + eax*4 - 0x5568] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffaa98u));
    /* 00667817: mov dword ptr [ebp - 0x5890], ecx */ W32((u32)(r_ebp+0xffffa770u), r_ecx);
    /* 0066781d: mov edx, dword ptr [ebp - 0x5890] */ r_edx = R32((u32)(r_ebp+0xffffa770u));
    /* 00667823: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00667824: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x667829u); f_00686cae();
    /* 00667829: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066782c: jmp 0x6677ed */ goto L_006677ed;
L_0066782e:; BB(0x0066782e);
    /* 0066782e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00667831: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667833: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x667838u); f_00686d72();
    /* 00667838: mov esp, ebp */ r_esp = r_ebp;
    /* 0066783a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066783b: ret 0x10 */ FN_RET(0x006671ed); r_esp += 20; return;
}

void f_0066729b(void) /* _WinMain@16_130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066729b);
    /* 0066729b: jmp 0x6671ed */ f_006671ed(); return;
}

void f_0066782e(void) /* _WinMain@16_129_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066782e);
    /* 0066782e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00667831: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00667833: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x667838u); f_00686d72();
    /* 00667838: mov esp, ebp */ r_esp = r_ebp;
    /* 0066783a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066783b: ret 0x10 */ FN_RET(0x0066782e); r_esp += 20; return;
}

void f_00667b80(void) /* ?deallocate@?$_StaticAllocator@V?$_Ref_count_obj_alloc@V__ExceptionPtr@@U?$_StaticAllocator@H@@@std@@@@QBEXPAV?$_Ref_count_obj_alloc@V__ExceptionPtr@@U?$_StaticAllocator@H@@@std@@I@Z_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667b80);
    /* 00667b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00667b83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667b84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00667b87: mov esp, ebp */ r_esp = r_ebp;
    /* 00667b89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667b8a: ret 8 */ FN_RET(0x00667b80); r_esp += 12; return;
}

void f_00667bc0(void) /* ??1CExpandoObject@@UAE@XZ_135 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00667bc0);
    /* 00667bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00667bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00667bc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00667bc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00667bc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667bca: mov dword ptr [eax], 0x6dfbe0 */ W32((u32)(r_eax), 0x6dfbe0u);
    /* 00667bd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00667bd3: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x667bd8u); f_005e9e40();
    /* 00667bd8: mov esp, ebp */ r_esp = r_ebp;
    /* 00667bda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00667bdb: ret  */ FN_RET(0x00667bc0); r_esp += 4; return;
}

void f_006693d0(void) /* ?GetSize@CRecentFileList@@QBEHXZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006693d0);
    /* 006693d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006693d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006693d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006693d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006693d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006693da: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006693dd: mov esp, ebp */ r_esp = r_ebp;
    /* 006693df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006693e0: ret  */ FN_RET(0x006693d0); r_esp += 4; return;
}

void f_006695b0(void) /* ??_G_com_error@@UAEPAXI@Z_385 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006695b0);
    /* 006695b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006695b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006695b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006695b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006695b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006695ba: call 0x667bc0 */ r_esp -= 4; W32(r_esp, 0x6695bfu); f_00667bc0();
    /* 006695bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006695c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006695c5: je 0x6695d3 */ if (fZ) goto L_006695d3;
L_006695c7:; BB(0x006695c7);
    /* 006695c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006695ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006695cb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6695d0u); f_00686cae();
    /* 006695d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006695d3:; BB(0x006695d3);
    /* 006695d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006695d6: mov esp, ebp */ r_esp = r_ebp;
    /* 006695d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006695d9: ret 4 */ FN_RET(0x006695b0); r_esp += 8; return;
}

void f_0066a7f0(void) /* _WinMain@16_131_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066a7f0);
L_0066a7f0:; BB(0x0066a7f0);
    /* 0066a7f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a7f3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a7f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066a7f9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a7ff: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a802: call 0x666c60 */ r_esp -= 4; W32(r_esp, 0x66a807u); f_00666c60();
    /* 0066a807: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066a80a: jge 0x66a9dc */ if ((fS==fO)) goto L_0066a9dc;
L_0066a810:; BB(0x0066a810);
    /* 0066a810: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a813: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a814: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a81a: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a81d: call 0x666eb0 */ r_esp -= 4; W32(r_esp, 0x66a822u); f_00666eb0();
    /* 0066a822: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066a825: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a829: jne 0x66a848 */ if (!fZ) goto L_0066a848;
L_0066a82b:; BB(0x0066a82b);
    /* 0066a82b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066a82d: jne 0x66a846 */ if (!fZ) goto L_0066a846;
L_0066a82f:; BB(0x0066a82f);
    /* 0066a82f: push 0x174 */ { u32 v = 0x174u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a834: push 0x6e0284 */ { u32 v = 0x6e0284u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a839: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a83e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x66a843u); f_005e9f20();
    /* 0066a843: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066a846:; BB(0x0066a846);
    /* 0066a846: jmp 0x66a7f0 */ goto L_0066a7f0;
L_0066a848:; BB(0x0066a848);
    /* 0066a848: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a84b: cmp dword ptr [edx], -1 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a84e: jne 0x66a852 */ if (!fZ) goto L_0066a852;
L_0066a850:; BB(0x0066a850);
    /* 0066a850: jmp 0x66a7f0 */ goto L_0066a7f0;
L_0066a852:; BB(0x0066a852);
    /* 0066a852: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 0066a858: mov ecx, dword ptr [eax + 0x84] */ r_ecx = R32((u32)(r_eax+0x84u));
    /* 0066a85e: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0066a861: mov dword ptr [ebp - 0x134], edx */ W32((u32)(r_ebp+0xfffffeccu), r_edx);
    /* 0066a867: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a86a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066a86c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a86d: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0066a873: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a874: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a87a: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a87d: call 0x666c70 */ r_esp -= 4; W32(r_esp, 0x66a882u); f_00666c70();
    /* 0066a882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a884: jne 0x66a9d7 */ if (!fZ) goto L_0066a9d7;
L_0066a88a:; BB(0x0066a88a);
    /* 0066a88a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a88d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066a890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a891: push 0x6e0278 */ { u32 v = 0x6e0278u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a896: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a89c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a89d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66a8a3u); call_ind(t); }
    /* 0066a8a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a8a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a8a8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a8aa: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a8b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a8b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a8b3: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 0066a8b9: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0066a8bc: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x66a8c1u); f_00628980();
    /* 0066a8c1: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 0066a8cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066a8ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a8cf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a8d5: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a8d8: call 0x666eb0 */ r_esp -= 4; W32(r_esp, 0x66a8ddu); f_00666eb0();
    /* 0066a8dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066a8df: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 0066a8e5: lea eax, [ebp - 0x130] */ r_eax = (u32)(r_ebp+0xfffffed0u);
    /* 0066a8eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a8ec: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a8f2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066a8f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a8fa: mov eax, dword ptr [edx + 0x37c] */ r_eax = R32((u32)(r_edx+0x37cu));
    /* 0066a900: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66a902u); call_ind(t); }
    /* 0066a902: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0066a905: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a907: je 0x66a95a */ if (fZ) goto L_0066a95a;
L_0066a909:; BB(0x0066a909);
    /* 0066a909: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0066a90f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a910: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a916: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a919: call 0x666d90 */ r_esp -= 4; W32(r_esp, 0x66a91eu); f_00666d90();
    /* 0066a91e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0066a921: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a924: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066a927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a928: push 0x6e026c */ { u32 v = 0x6e026cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a92d: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a934: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66a93au); call_ind(t); }
    /* 0066a93a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a93d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a93f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a941: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a947: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a948: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a94a: mov eax, dword ptr [ebp - 0x13c] */ r_eax = R32((u32)(r_ebp+0xfffffec4u));
    /* 0066a950: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0066a953: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x66a958u); f_00628980();
    /* 0066a958: jmp 0x66a95f */ goto L_0066a95f;
L_0066a95a:; BB(0x0066a95a);
    /* 0066a95a: jmp 0x66a7f0 */ goto L_0066a7f0;
L_0066a95f:; BB(0x0066a95f);
    /* 0066a95f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a962: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a965: jne 0x66a96c */ if (!fZ) goto L_0066a96c;
L_0066a967:; BB(0x0066a967);
    /* 0066a967: jmp 0x66a7f0 */ goto L_0066a7f0;
L_0066a96c:; BB(0x0066a96c);
    /* 0066a96c: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 0066a972: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0066a978: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0066a97b: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 0066a981: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a984: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066a986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a987: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0066a98d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a98e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066a994: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a997: call 0x666c70 */ r_esp -= 4; W32(r_esp, 0x66a99cu); f_00666c70();
    /* 0066a99c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a99e: jne 0x66a9d7 */ if (!fZ) goto L_0066a9d7;
L_0066a9a0:; BB(0x0066a9a0);
    /* 0066a9a0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066a9a3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066a9a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9a7: push 0x6e0260 */ { u32 v = 0x6e0260u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9ac: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0066a9b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9b3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66a9b9u); call_ind(t); }
    /* 0066a9b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a9bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9be: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9c0: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 0066a9c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9c9: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 0066a9cf: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 0066a9d2: call 0x628980 */ r_esp -= 4; W32(r_esp, 0x66a9d7u); f_00628980();
L_0066a9d7:; BB(0x0066a9d7);
    /* 0066a9d7: jmp 0x66a7f0 */ goto L_0066a7f0;
L_0066a9dc:; BB(0x0066a9dc);
    /* 0066a9dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066a9df: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066a9e1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x66a9e6u); f_00686d72();
    /* 0066a9e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0066a9e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a9e9: ret  */ FN_RET(0x0066a7f0); r_esp += 4; return;
}

void f_0066a95a(void) /* _WinMain@16_131 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066a95a);
    /* 0066a95a: jmp 0x66a7f0 */ f_0066a7f0(); return;
}

void f_0066a9f0(void) /* ?GetRibbonQuickAccessToolBarChevronOffset@CMFCVisualManagerWindows7@@UAEHXZ_4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066a9f0);
    /* 0066a9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066a9f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066a9f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066a9f7: mov eax, 0xd */ r_eax = 0xdu;
    /* 0066a9fc: mov esp, ebp */ r_esp = r_ebp;
    /* 0066a9fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066a9ff: ret  */ FN_RET(0x0066a9f0); r_esp += 4; return;
}

void f_0066aa00(void) /* ?_Acquire@_NonReentrantPPLLock@details@Concurrency@@QAEXPAX@Z_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066aa00);
    /* 0066aa00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa01: mov ebp, esp */ r_ebp = r_esp;
    /* 0066aa03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066aa07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066aa0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066aa10: call 0x628e60 */ r_esp -= 4; W32(r_esp, 0x66aa15u); f_00628e60();
    /* 0066aa15: mov esp, ebp */ r_esp = r_ebp;
    /* 0066aa17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066aa18: ret 4 */ FN_RET(0x0066aa00); r_esp += 8; return;
}

void f_0066aa50(void) /* ?GetRibbonQuickAccessToolBarChevronOffset@CMFCVisualManagerWindows7@@UAEHXZ_5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066aa50);
    /* 0066aa50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa51: mov ebp, esp */ r_ebp = r_esp;
    /* 0066aa53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066aa57: mov eax, 0xd */ r_eax = 0xdu;
    /* 0066aa5c: mov esp, ebp */ r_esp = r_ebp;
    /* 0066aa5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066aa5f: ret  */ FN_RET(0x0066aa50); r_esp += 4; return;
}

void f_0066aa60(void) /* ?_Acquire@_NonReentrantPPLLock@details@Concurrency@@QAEXPAX@Z_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066aa60);
    /* 0066aa60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa61: mov ebp, esp */ r_ebp = r_esp;
    /* 0066aa63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066aa67: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066aa6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066aa6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066aa70: call 0x628e60 */ r_esp -= 4; W32(r_esp, 0x66aa75u); f_00628e60();
    /* 0066aa75: mov esp, ebp */ r_esp = r_ebp;
    /* 0066aa77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066aa78: ret 4 */ FN_RET(0x0066aa60); r_esp += 8; return;
}

void f_0066ac30(void) /* ??_G_com_error@@UAEPAXI@Z_386 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ac30);
    /* 0066ac30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac31: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ac33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066ac37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ac3a: call 0x669650 */ r_esp -= 4; W32(r_esp, 0x66ac3fu); f_00669650();
    /* 0066ac3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066ac42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066ac45: je 0x66ac53 */ if (fZ) goto L_0066ac53;
L_0066ac47:; BB(0x0066ac47);
    /* 0066ac47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ac4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ac4b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66ac50u); f_00686cae();
    /* 0066ac50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066ac53:; BB(0x0066ac53);
    /* 0066ac53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ac56: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ac58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ac59: ret 4 */ FN_RET(0x0066ac30); r_esp += 8; return;
}

void f_0066ad70(void) /* ??1?$CMFCComObject@VCAccessibleProxy@ATL@@@@UAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ad70);
    /* 0066ad70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad71: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ad73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad75: push 0x6acd1b */ { u32 v = 0x6acd1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066ad80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad82: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066ad87: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ad89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ad8a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066ad8d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066ad93: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0066ad96: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066ad99: mov dword ptr [eax], 0x6e02ac */ W32((u32)(r_eax), 0x6e02acu);
    /* 0066ad9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066ada6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ada8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066adae: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x66adb3u); f_005f38b0();
    /* 0066adb3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066adba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066adbd: call 0x64cc80 */ r_esp -= 4; W32(r_esp, 0x66adc2u); f_0064cc80();
    /* 0066adc2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066adc5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066adcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066adcd: mov esp, ebp */ r_esp = r_ebp;
    /* 0066adcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066add0: ret  */ FN_RET(0x0066ad70); r_esp += 4; return;
}

void f_0066ade0(void) /* sub_66ADE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ade0);
    /* 0066ade0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ade1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ade3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ade5: push 0x6acd41 */ { u32 v = 0x6acd41u; r_esp -= 4; W32(r_esp, v); }
    /* 0066adea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066adf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066adf1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066adf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066adf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066adfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066adfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066adff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066ae05: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0066ae08: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066ae0b: call 0x64ce60 */ r_esp -= 4; W32(r_esp, 0x66ae10u); f_0064ce60();
    /* 0066ae10: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0066ae13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae14: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ae1a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ae1c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ae22: mov eax, dword ptr [edx + 0x2e4] */ r_eax = R32((u32)(r_edx+0x2e4u));
    /* 0066ae28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ae2au); call_ind(t); }
    /* 0066ae2a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0066ae2c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0066ae2f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066ae32: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0066ae35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae37: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae3e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae40: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066ae43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066ae47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae48: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066ae4e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066ae50: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ae56: mov edx, dword ptr [eax + 0x2dc] */ r_edx = R32((u32)(r_eax+0x2dcu));
    /* 0066ae5c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66ae5eu); call_ind(t); }
    /* 0066ae5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae63: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066ae68: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0066ae6b: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x66ae70u); f_005f9ce0();
    /* 0066ae70: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ae76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066ae78: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ae7e: mov eax, dword ptr [edx + 0x2e0] */ r_eax = R32((u32)(r_edx+0x2e0u));
    /* 0066ae84: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66ae86u); call_ind(t); }
    /* 0066ae86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ae88: je 0x66aec2 */ if (fZ) goto L_0066aec2;
L_0066ae8a:; BB(0x0066ae8a);
    /* 0066ae8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae8c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae93: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ae99: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066ae9f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066aea1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066aea7: mov eax, dword ptr [edx + 0x2e0] */ r_eax = R32((u32)(r_edx+0x2e0u));
    /* 0066aead: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66aeafu); call_ind(t); }
    /* 0066aeaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066aeb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066aeb2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066aeb4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066aeba: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0066aebd: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x66aec2u); f_005f9ce0();
L_0066aec2:; BB(0x0066aec2);
    /* 0066aec2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0066aec4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66aec9u); f_00686d82();
    /* 0066aec9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066aecc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0066aecf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066aed6: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066aeda: je 0x66aef7 */ if (fZ) goto L_0066aef7;
L_0066aedc:; BB(0x0066aedc);
    /* 0066aedc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066aede: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066aee1: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x66aee6u); f_005fc0d0();
    /* 0066aee6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066aee9: mov dword ptr [edx], 0x6e0504 */ W32((u32)(r_edx), 0x6e0504u);
    /* 0066aeef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066aef2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0066aef5: jmp 0x66aefe */ goto L_0066aefe;
L_0066aef7:; BB(0x0066aef7);
    /* 0066aef7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0066aefe:; BB(0x0066aefe);
    /* 0066aefe: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066af01: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066af04: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066af0b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066af0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066af0f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066af12: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x66af17u); f_005f1b70();
    /* 0066af17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066af1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066af21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066af22: mov esp, ebp */ r_esp = r_ebp;
    /* 0066af24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066af25: ret  */ FN_RET(0x0066ade0); r_esp += 4; return;
}

void f_0066b200(void) /* ??_G?$CMFCComObject@VCAccessibleProxy@ATL@@@@UAEPAXI@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b200);
    /* 0066b200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b201: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066b207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b20a: call 0x66ad70 */ r_esp -= 4; W32(r_esp, 0x66b20fu); f_0066ad70();
    /* 0066b20f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066b212: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066b215: je 0x66b223 */ if (fZ) goto L_0066b223;
L_0066b217:; BB(0x0066b217);
    /* 0066b217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b21a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b21b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66b220u); f_00686cae();
    /* 0066b220: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066b223:; BB(0x0066b223);
    /* 0066b223: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b226: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b228: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b229: ret 4 */ FN_RET(0x0066b200); r_esp += 8; return;
}

void f_0066b7f0(void) /* ??_G_com_error@@UAEPAXI@Z_387 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b7f0);
    /* 0066b7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b7f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b7f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066b7f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b7fa: call 0x66b2c0 */ r_esp -= 4; W32(r_esp, 0x66b7ffu); f_0066b2c0();
    /* 0066b7ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066b802: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066b805: je 0x66b813 */ if (fZ) goto L_0066b813;
L_0066b807:; BB(0x0066b807);
    /* 0066b807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b80a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b80b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66b810u); f_00686cae();
    /* 0066b810: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066b813:; BB(0x0066b813);
    /* 0066b813: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066b816: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b818: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b819: ret 4 */ FN_RET(0x0066b7f0); r_esp += 8; return;
}

void f_0066b820(void) /* ??Y?$CStringT@_WV?$StrTraitMFC@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@QAEAAV01@PBD@Z_8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066b820);
    /* 0066b820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066b821: mov ebp, esp */ r_ebp = r_esp;
    /* 0066b823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066b825: push 0x6acdf8 */ { u32 v = 0x6acdf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b82a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066b830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b831: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066b834: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066b839: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066b83b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b83c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066b83f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066b845: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0066b848: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b84b: call 0x64cbe0 */ r_esp -= 4; W32(r_esp, 0x66b850u); f_0064cbe0();
    /* 0066b850: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066b857: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b85a: mov dword ptr [eax], 0x6e079c */ W32((u32)(r_eax), 0x6e079cu);
    /* 0066b860: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b866: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066b868: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b86e: mov eax, dword ptr [edx + 0x27c] */ r_eax = R32((u32)(r_edx+0x27cu));
    /* 0066b874: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b876u); call_ind(t); }
    /* 0066b876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066b877: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b87a: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x66b87fu); f_005f1ad0();
    /* 0066b87f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066b881: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b887: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x66b88cu); f_005f38b0();
    /* 0066b88c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b88f: mov dword ptr [0x16306c0], ecx */ W32((u32)(0x16306c0u), r_ecx);
    /* 0066b895: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0066b89b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066b89d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b8a3: mov edx, dword ptr [eax + 0x25c] */ r_edx = R32((u32)(r_eax+0x25cu));
    /* 0066b8a9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66b8abu); call_ind(t); }
    /* 0066b8ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b8ad: mov edx, 4 */ r_edx = 0x4u;
    /* 0066b8b2: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0066b8b4: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0066b8b7: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b8b9: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0066b8bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066b8bc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x66b8c1u); f_00686d82();
    /* 0066b8c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066b8c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066b8c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b8ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066b8cd: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 0066b8d0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0066b8d7: jmp 0x66b8e2 */ goto L_0066b8e2;
L_0066b8d9:; BB(0x0066b8d9);
    /* 0066b8d9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b8dc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066b8df: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0066b8e2:; BB(0x0066b8e2);
    /* 0066b8e2: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0066b8e7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066b8e9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0066b8ef: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 0066b8f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66b8f7u); call_ind(t); }
    /* 0066b8f7: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066b8fa: jge 0x66b90e */ if ((fS==fO)) goto L_0066b90e;
L_0066b8fc:; BB(0x0066b8fc);
    /* 0066b8fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b8ff: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0066b902: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066b905: mov dword ptr [edx + eax*4], 0 */ W32((u32)(r_edx+r_eax*4), 0x0u);
    /* 0066b90c: jmp 0x66b8d9 */ goto L_0066b8d9;
L_0066b90e:; BB(0x0066b90e);
    /* 0066b90e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b911: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 0066b918: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b91b: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
    /* 0066b922: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b925: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 0066b92c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b92f: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 0066b936: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b939: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 0066b940: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b943: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 0066b94a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066b951: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066b954: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066b957: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066b95e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066b95f: mov esp, ebp */ r_esp = r_ebp;
    /* 0066b961: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066b962: ret  */ FN_RET(0x0066b820); r_esp += 4; return;
}

void f_0066c7a0(void) /* ?do_always_noconv@?$codecvt@DDU_Mbstatet@@@std@@MBE_NXZ_31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066c7a0);
    /* 0066c7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066c7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066c7a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c7a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066c7a7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0066c7a9: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c7ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c7ac: ret  */ FN_RET(0x0066c7a0); r_esp += 4; return;
}

void f_0066cb10(void) /* ??0FreeVirtualProcessorRoot@details@Concurrency@@QAE@PAVSchedulerProxy@12@PAUSchedulerNode@12@I@Z_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066cb10);
    /* 0066cb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066cb11: mov ebp, esp */ r_ebp = r_esp;
    /* 0066cb13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cb14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066cb17: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0066cb1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cb1b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0066cb1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cb1f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0066cb22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cb23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066cb26: call 0x603120 */ r_esp -= 4; W32(r_esp, 0x66cb2bu); f_00603120();
    /* 0066cb2b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066cb2e: mov dword ptr [eax], 0x6e0a34 */ W32((u32)(r_eax), 0x6e0a34u);
    /* 0066cb34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066cb37: mov esp, ebp */ r_esp = r_ebp;
    /* 0066cb39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066cb3a: ret 0xc */ FN_RET(0x0066cb10); r_esp += 16; return;
}

void f_0066cdf0(void) /* ??0_AFX_OLE_STATE@@QAE@XZ_58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066cdf0);
    /* 0066cdf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066cdf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066cdf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cdf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066cdf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066cdfa: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x66cdffu); f_00601a80();
    /* 0066cdff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ce02: mov dword ptr [eax], 0x6e0b2c */ W32((u32)(r_eax), 0x6e0b2cu);
    /* 0066ce08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ce0b: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ce0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ce0e: ret  */ FN_RET(0x0066cdf0); r_esp += 4; return;
}

void f_0066ce10(void) /* ??1_AFX_OLE_STATE@@UAE@XZ_58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066ce10);
    /* 0066ce10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce11: mov ebp, esp */ r_ebp = r_esp;
    /* 0066ce13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066ce17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ce1a: mov dword ptr [eax], 0x6e0b2c */ W32((u32)(r_eax), 0x6e0b2cu);
    /* 0066ce20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066ce23: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x66ce28u); f_00601ba0();
    /* 0066ce28: mov esp, ebp */ r_esp = r_ebp;
    /* 0066ce2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066ce2b: ret  */ FN_RET(0x0066ce10); r_esp += 4; return;
}

void f_0066d1a0(void) /* ??1CExpandoObject@@UAE@XZ_136 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d1a0);
    /* 0066d1a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d1a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d1a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d1a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066d1a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d1aa: mov dword ptr [eax], 0x6e0ce0 */ W32((u32)(r_eax), 0x6e0ce0u);
    /* 0066d1b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d1b3: call 0x600f70 */ r_esp -= 4; W32(r_esp, 0x66d1b8u); f_00600f70();
    /* 0066d1b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d1ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d1bb: ret  */ FN_RET(0x0066d1a0); r_esp += 4; return;
}

void f_0066d250(void) /* ??_G_com_error@@UAEPAXI@Z_388 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d250);
    /* 0066d250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d251: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066d257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d25a: call 0x66b970 */ r_esp -= 4; W32(r_esp, 0x66d25fu); f_0066b970();
    /* 0066d25f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066d262: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066d265: je 0x66d273 */ if (fZ) goto L_0066d273;
L_0066d267:; BB(0x0066d267);
    /* 0066d267: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d26a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d26b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66d270u); f_00686cae();
    /* 0066d270: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066d273:; BB(0x0066d273);
    /* 0066d273: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d276: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d278: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d279: ret 4 */ FN_RET(0x0066d250); r_esp += 8; return;
}

void f_0066d280(void) /* ??_G_com_error@@UAEPAXI@Z_389 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d280);
    /* 0066d280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d281: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066d287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d28a: call 0x66ce10 */ r_esp -= 4; W32(r_esp, 0x66d28fu); f_0066ce10();
    /* 0066d28f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066d292: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066d295: je 0x66d2a3 */ if (fZ) goto L_0066d2a3;
L_0066d297:; BB(0x0066d297);
    /* 0066d297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d29a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d29b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66d2a0u); f_00686cae();
    /* 0066d2a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066d2a3:; BB(0x0066d2a3);
    /* 0066d2a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d2a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d2a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d2a9: ret 4 */ FN_RET(0x0066d280); r_esp += 8; return;
}

void f_0066d2b0(void) /* ??_G_com_error@@UAEPAXI@Z_390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d2b0);
    /* 0066d2b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d2b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066d2b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d2ba: call 0x66d080 */ r_esp -= 4; W32(r_esp, 0x66d2bfu); f_0066d080();
    /* 0066d2bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066d2c2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066d2c5: je 0x66d2d3 */ if (fZ) goto L_0066d2d3;
L_0066d2c7:; BB(0x0066d2c7);
    /* 0066d2c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d2ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2cb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66d2d0u); f_00686cae();
    /* 0066d2d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066d2d3:; BB(0x0066d2d3);
    /* 0066d2d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d2d6: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d2d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d2d9: ret 4 */ FN_RET(0x0066d2b0); r_esp += 8; return;
}

void f_0066d2e0(void) /* ??_G_com_error@@UAEPAXI@Z_391 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d2e0);
    /* 0066d2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066d2e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d2ea: call 0x66d1a0 */ r_esp -= 4; W32(r_esp, 0x66d2efu); f_0066d1a0();
    /* 0066d2ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066d2f2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066d2f5: je 0x66d303 */ if (fZ) goto L_0066d303;
L_0066d2f7:; BB(0x0066d2f7);
    /* 0066d2f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d2fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2fb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66d300u); f_00686cae();
    /* 0066d300: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066d303:; BB(0x0066d303);
    /* 0066d303: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d306: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d308: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d309: ret 4 */ FN_RET(0x0066d2e0); r_esp += 8; return;
}

void f_0066f850(void) /* ??_G_com_error@@UAEPAXI@Z_392 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f850);
    /* 0066f850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f851: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066f857: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f85a: call 0x66d3f0 */ r_esp -= 4; W32(r_esp, 0x66f85fu); f_0066d3f0();
    /* 0066f85f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066f862: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066f865: je 0x66f873 */ if (fZ) goto L_0066f873;
L_0066f867:; BB(0x0066f867);
    /* 0066f867: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f86a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f86b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66f870u); f_00686cae();
    /* 0066f870: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066f873:; BB(0x0066f873);
    /* 0066f873: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f876: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f879: ret 4 */ FN_RET(0x0066f850); r_esp += 8; return;
}

void f_0066f880(void) /* ??_G_com_error@@UAEPAXI@Z_393 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f880);
    /* 0066f880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f881: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066f887: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f88a: call 0x66f440 */ r_esp -= 4; W32(r_esp, 0x66f88fu); f_0066f440();
    /* 0066f88f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066f892: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0066f895: je 0x66f8a3 */ if (fZ) goto L_0066f8a3;
L_0066f897:; BB(0x0066f897);
    /* 0066f897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f89a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f89b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x66f8a0u); f_00686cae();
    /* 0066f8a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066f8a3:; BB(0x0066f8a3);
    /* 0066f8a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f8a6: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f8a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f8a9: ret 4 */ FN_RET(0x0066f880); r_esp += 8; return;
}

void f_0066f940(void) /* ??1CExpandoObject@@UAE@XZ_137 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066f940);
    /* 0066f940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066f941: mov ebp, esp */ r_ebp = r_esp;
    /* 0066f943: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066f944: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066f947: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f94a: mov dword ptr [eax], 0x6e0ee4 */ W32((u32)(r_eax), 0x6e0ee4u);
    /* 0066f950: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066f953: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x66f958u); f_005e9e40();
    /* 0066f958: mov esp, ebp */ r_esp = r_ebp;
    /* 0066f95a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066f95b: ret  */ FN_RET(0x0066f940); r_esp += 4; return;
}

void f_0066fdf0(void) /* ??1CAtlWinModule@ATL@@QAE@XZ_6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066fdf0);
    /* 0066fdf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066fdf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066fdf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066fdf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0066fdf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fdfa: call 0x66fe10 */ r_esp -= 4; W32(r_esp, 0x66fdffu); f_0066fe10();
    /* 0066fdff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066fe02: call 0x66ff30 */ r_esp -= 4; W32(r_esp, 0x66fe07u); f_0066ff30();
    /* 0066fe07: mov esp, ebp */ r_esp = r_ebp;
    /* 0066fe09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066fe0a: ret  */ FN_RET(0x0066fdf0); r_esp += 4; return;
}

void f_006701ef(void) /* _WinMain@16_132 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006701ef);
    /* 006701ef: jmp 0x670357 */ f_00670357(); return;
}

void f_00670357(void) /* _WinMain@16_132_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00670357);
    /* 00670357: mov esp, ebp */ r_esp = r_ebp;
    /* 00670359: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067035a: ret 8 */ FN_RET(0x00670357); r_esp += 12; return;
}

void f_00671110(void) /* unknown_libname_862 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671110);
    /* 00671110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671111: mov ebp, esp */ r_ebp = r_esp;
    /* 00671113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671114: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671117: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00671119: mov esp, ebp */ r_esp = r_ebp;
    /* 0067111b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067111c: ret  */ FN_RET(0x00671110); r_esp += 4; return;
}

void f_00671810(void) /* ??0ScheduleGroupBase@details@Concurrency@@QAE@PAVSchedulerBase@12@PAVlocation@2@@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671810);
    /* 00671810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671811: mov ebp, esp */ r_ebp = r_esp;
    /* 00671813: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00671815: push 0x6ad176 */ { u32 v = 0x6ad176u; r_esp -= 4; W32(r_esp, v); }
    /* 0067181a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00671820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00671821: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671822: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00671827: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00671829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067182a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067182d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00671833: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00671836: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671839: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x67183eu); f_00601a80();
    /* 0067183e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00671845: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671848: mov dword ptr [eax], 0x6e110c */ W32((u32)(r_eax), 0x6e110cu);
    /* 0067184e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671851: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00671854: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 0067185a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067185d: mov dword ptr [eax + 0x1e0], 0 */ W32((u32)(r_eax+0x1e0u), 0x0u);
    /* 00671867: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00671869: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67186eu); f_0062fbf0();
    /* 0067186e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00671871: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00671874: add eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00671879: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067187c: mov dword ptr [ecx + 0x1e4], eax */ W32((u32)(r_ecx+0x1e4u), r_eax);
    /* 00671882: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00671889: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067188c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067188f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00671896: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00671897: mov esp, ebp */ r_esp = r_ebp;
    /* 00671899: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067189a: ret 4 */ FN_RET(0x00671810); r_esp += 8; return;
}

void f_006718a0(void) /* sub_6718A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006718a0);
    /* 006718a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006718a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006718a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006718a5: push 0x6ad199 */ { u32 v = 0x6ad199u; r_esp -= 4; W32(r_esp, v); }
    /* 006718aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006718b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006718b1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006718b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006718b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006718bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006718bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006718bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006718c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006718c8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006718cb: mov dword ptr [eax], 0x6e110c */ W32((u32)(r_eax), 0x6e110cu);
    /* 006718d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006718d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006718db: cmp dword ptr [ecx + 0x1e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006718e2: je 0x671923 */ if (fZ) goto L_00671923;
L_006718e4:; BB(0x006718e4);
    /* 006718e4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006718e7: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 006718ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006718f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006718f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006718f6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006718fa: je 0x67190f */ if (fZ) goto L_0067190f;
L_006718fc:; BB(0x006718fc);
    /* 006718fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006718fe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671901: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00671903: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00671906: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00671908: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67190au); call_ind(t); }
    /* 0067190a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067190d: jmp 0x671916 */ goto L_00671916;
L_0067190f:; BB(0x0067190f);
    /* 0067190f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00671916:; BB(0x00671916);
    /* 00671916: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00671919: mov dword ptr [eax + 0x1e0], 0 */ W32((u32)(r_eax+0x1e0u), 0x0u);
L_00671923:; BB(0x00671923);
    /* 00671923: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067192a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067192d: call 0x601ba0 */ r_esp -= 4; W32(r_esp, 0x671932u); f_00601ba0();
    /* 00671932: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00671935: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067193c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067193d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067193f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671940: ret  */ FN_RET(0x006718a0); r_esp += 4; return;
}

void f_00671ea0(void) /* ??_G_com_error@@UAEPAXI@Z_394 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671ea0);
    /* 00671ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00671ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671ea7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671eaa: call 0x66f940 */ r_esp -= 4; W32(r_esp, 0x671eafu); f_0066f940();
    /* 00671eaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00671eb2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00671eb5: je 0x671ec3 */ if (fZ) goto L_00671ec3;
L_00671eb7:; BB(0x00671eb7);
    /* 00671eb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671eba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671ebb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x671ec0u); f_00686cae();
    /* 00671ec0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00671ec3:; BB(0x00671ec3);
    /* 00671ec3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671ec6: mov esp, ebp */ r_esp = r_ebp;
    /* 00671ec8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671ec9: ret 4 */ FN_RET(0x00671ea0); r_esp += 8; return;
}

void f_00671ed0(void) /* ??_G_com_error@@UAEPAXI@Z_395 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671ed0);
    /* 00671ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00671ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671ed7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671eda: call 0x6706f0 */ r_esp -= 4; W32(r_esp, 0x671edfu); f_006706f0();
    /* 00671edf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00671ee2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00671ee5: je 0x671ef3 */ if (fZ) goto L_00671ef3;
L_00671ee7:; BB(0x00671ee7);
    /* 00671ee7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671eea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671eeb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x671ef0u); f_00686cae();
    /* 00671ef0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00671ef3:; BB(0x00671ef3);
    /* 00671ef3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671ef6: mov esp, ebp */ r_esp = r_ebp;
    /* 00671ef8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671ef9: ret 4 */ FN_RET(0x00671ed0); r_esp += 8; return;
}

void f_00671f00(void) /* ??_G_com_error@@UAEPAXI@Z_396 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671f00);
    /* 00671f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00671f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671f07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671f0a: call 0x671200 */ r_esp -= 4; W32(r_esp, 0x671f0fu); f_00671200();
    /* 00671f0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00671f12: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00671f15: je 0x671f23 */ if (fZ) goto L_00671f23;
L_00671f17:; BB(0x00671f17);
    /* 00671f17: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671f1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671f1b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x671f20u); f_00686cae();
    /* 00671f20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00671f23:; BB(0x00671f23);
    /* 00671f23: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671f26: mov esp, ebp */ r_esp = r_ebp;
    /* 00671f28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671f29: ret 4 */ FN_RET(0x00671f00); r_esp += 8; return;
}

void f_00671f30(void) /* ??_G_com_error@@UAEPAXI@Z_397 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671f30);
    /* 00671f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00671f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671f37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671f3a: call 0x6718a0 */ r_esp -= 4; W32(r_esp, 0x671f3fu); f_006718a0();
    /* 00671f3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00671f42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00671f45: je 0x671f53 */ if (fZ) goto L_00671f53;
L_00671f47:; BB(0x00671f47);
    /* 00671f47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671f4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671f4b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x671f50u); f_00686cae();
    /* 00671f50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00671f53:; BB(0x00671f53);
    /* 00671f53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671f56: mov esp, ebp */ r_esp = r_ebp;
    /* 00671f58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671f59: ret 4 */ FN_RET(0x00671f30); r_esp += 8; return;
}

void f_00671f60(void) /* ??_G_com_error@@UAEPAXI@Z_398 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00671f60);
    /* 00671f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00671f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00671f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00671f67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671f6a: call 0x671d00 */ r_esp -= 4; W32(r_esp, 0x671f6fu); f_00671d00();
    /* 00671f6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00671f72: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00671f75: je 0x671f83 */ if (fZ) goto L_00671f83;
L_00671f77:; BB(0x00671f77);
    /* 00671f77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671f7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00671f7b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x671f80u); f_00686cae();
    /* 00671f80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00671f83:; BB(0x00671f83);
    /* 00671f83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00671f86: mov esp, ebp */ r_esp = r_ebp;
    /* 00671f88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00671f89: ret 4 */ FN_RET(0x00671f60); r_esp += 8; return;
}

void f_00672010(void) /* ??1CExpandoObject@@UAE@XZ_138 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672010);
    /* 00672010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672011: mov ebp, esp */ r_ebp = r_esp;
    /* 00672013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00672017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067201a: mov dword ptr [eax], 0x6e1224 */ W32((u32)(r_eax), 0x6e1224u);
    /* 00672020: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672023: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x672028u); f_005f7260();
    /* 00672028: mov esp, ebp */ r_esp = r_ebp;
    /* 0067202a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067202b: ret  */ FN_RET(0x00672010); r_esp += 4; return;
}

void f_00672b00(void) /* ??1CExpandoObject@@UAE@XZ_139 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672b00);
    /* 00672b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00672b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672b04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00672b07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672b0a: mov dword ptr [eax], 0x6e1334 */ W32((u32)(r_eax), 0x6e1334u);
    /* 00672b10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672b13: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x672b18u); f_005f7260();
    /* 00672b18: mov esp, ebp */ r_esp = r_ebp;
    /* 00672b1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672b1b: ret  */ FN_RET(0x00672b00); r_esp += 4; return;
}

void f_00672f80(void) /* ??_G_com_error@@UAEPAXI@Z_399 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672f80);
    /* 00672f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00672f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00672f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672f8a: call 0x672010 */ r_esp -= 4; W32(r_esp, 0x672f8fu); f_00672010();
    /* 00672f8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00672f92: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00672f95: je 0x672fa3 */ if (fZ) goto L_00672fa3;
L_00672f97:; BB(0x00672f97);
    /* 00672f97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672f9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672f9b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x672fa0u); f_00686cae();
    /* 00672fa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00672fa3:; BB(0x00672fa3);
    /* 00672fa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672fa6: mov esp, ebp */ r_esp = r_ebp;
    /* 00672fa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672fa9: ret 4 */ FN_RET(0x00672f80); r_esp += 8; return;
}

void f_00672fb0(void) /* ??_G_com_error@@UAEPAXI@Z_400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672fb0);
    /* 00672fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00672fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00672fb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672fba: call 0x672b00 */ r_esp -= 4; W32(r_esp, 0x672fbfu); f_00672b00();
    /* 00672fbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00672fc2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00672fc5: je 0x672fd3 */ if (fZ) goto L_00672fd3;
L_00672fc7:; BB(0x00672fc7);
    /* 00672fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672fca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672fcb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x672fd0u); f_00686cae();
    /* 00672fd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00672fd3:; BB(0x00672fd3);
    /* 00672fd3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00672fd6: mov esp, ebp */ r_esp = r_ebp;
    /* 00672fd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00672fd9: ret 4 */ FN_RET(0x00672fb0); r_esp += 8; return;
}

void f_00674370(void) /* unknown_libname_661 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674370);
    /* 00674370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674371: mov ebp, esp */ r_ebp = r_esp;
    /* 00674373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00674377: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067437a: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067437d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067437f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674380: ret  */ FN_RET(0x00674370); r_esp += 4; return;
}

void f_00674840(void) /* ??_G_com_error@@UAEPAXI@Z_401 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674840);
    /* 00674840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674841: mov ebp, esp */ r_ebp = r_esp;
    /* 00674843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674844: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00674847: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067484a: call 0x673070 */ r_esp -= 4; W32(r_esp, 0x67484fu); f_00673070();
    /* 0067484f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00674852: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00674855: je 0x674863 */ if (fZ) goto L_00674863;
L_00674857:; BB(0x00674857);
    /* 00674857: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067485a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067485b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x674860u); f_00686cae();
    /* 00674860: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00674863:; BB(0x00674863);
    /* 00674863: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674866: mov esp, ebp */ r_esp = r_ebp;
    /* 00674868: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674869: ret 4 */ FN_RET(0x00674840); r_esp += 8; return;
}

void f_00674930(void) /* ??_G_com_error@@UAEPAXI@Z_402 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00674930);
    /* 00674930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674931: mov ebp, esp */ r_ebp = r_esp;
    /* 00674933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00674934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00674937: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067493a: call 0x673d50 */ r_esp -= 4; W32(r_esp, 0x67493fu); f_00673d50();
    /* 0067493f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00674942: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00674945: je 0x674953 */ if (fZ) goto L_00674953;
L_00674947:; BB(0x00674947);
    /* 00674947: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067494a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067494b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x674950u); f_00686cae();
    /* 00674950: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00674953:; BB(0x00674953);
    /* 00674953: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00674956: mov esp, ebp */ r_esp = r_ebp;
    /* 00674958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674959: ret 4 */ FN_RET(0x00674930); r_esp += 8; return;
}

void f_006763b0(void) /* ??1CSessionMapPtrToPtr@@UAE@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006763b0);
    /* 006763b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006763b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006763b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006763b5: push 0x6ad584 */ { u32 v = 0x6ad584u; r_esp -= 4; W32(r_esp, v); }
    /* 006763ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006763c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006763c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006763c2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006763c7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006763c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006763ca: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006763cd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006763d3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006763d6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006763d9: mov dword ptr [eax], 0x6e1a10 */ W32((u32)(r_eax), 0x6e1a10u);
    /* 006763df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006763e6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006763e9: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006763ec: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x6763f1u); f_00676430();
    /* 006763f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006763f8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006763fb: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x676400u); f_005e9e40();
    /* 00676400: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676403: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067640a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067640b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067640d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067640e: ret  */ FN_RET(0x006763b0); r_esp += 4; return;
}

void f_006764e0(void) /* ?try_lock_for@critical_section@Concurrency@@QAE_NI@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006764e0);
    /* 006764e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006764e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006764e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006764e5: push 0x6ad5cd */ { u32 v = 0x6ad5cdu; r_esp -= 4; W32(r_esp, v); }
    /* 006764ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006764f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006764f1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006764f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006764f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006764fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006764fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006764ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00676505: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00676508: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0067650a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67650fu); f_00686d82();
    /* 0067650f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676512: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00676515: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067651c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676520: je 0x676533 */ if (fZ) goto L_00676533;
L_00676522:; BB(0x00676522);
    /* 00676522: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00676525: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676526: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676529: call 0x676340 */ r_esp -= 4; W32(r_esp, 0x67652eu); f_00676340();
    /* 0067652e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00676531: jmp 0x67653a */ goto L_0067653a;
L_00676533:; BB(0x00676533);
    /* 00676533: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0067653a:; BB(0x0067653a);
    /* 0067653a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067653d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00676540: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00676547: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067654a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0067654d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00676550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676551: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00676554: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x676559u); f_0060c840();
    /* 00676559: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067655c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00676563: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00676564: mov esp, ebp */ r_esp = r_ebp;
    /* 00676566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676567: ret 4 */ FN_RET(0x006764e0); r_esp += 8; return;
}

void f_00676570(void) /* sub_676570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676570);
    /* 00676570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676571: mov ebp, esp */ r_ebp = r_esp;
    /* 00676573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00676577: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067657a: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x67657fu); f_0060c9a0();
    /* 0067657f: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676582: jl 0x676589 */ if ((fS!=fO)) goto L_00676589;
L_00676584:; BB(0x00676584);
    /* 00676584: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00676587: jmp 0x676598 */ goto L_00676598;
L_00676589:; BB(0x00676589);
    /* 00676589: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067658c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067658d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676590: call 0x6765a0 */ r_esp -= 4; W32(r_esp, 0x676595u); f_006765a0();
    /* 00676595: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
L_00676598:; BB(0x00676598);
    /* 00676598: mov esp, ebp */ r_esp = r_ebp;
    /* 0067659a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067659b: ret 4 */ FN_RET(0x00676570); r_esp += 8; return;
}

void f_006765c0(void) /* ??_G_com_error@@UAEPAXI@Z_403 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006765c0);
    /* 006765c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006765c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006765c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006765c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006765c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006765ca: call 0x675000 */ r_esp -= 4; W32(r_esp, 0x6765cfu); f_00675000();
    /* 006765cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006765d2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006765d5: je 0x6765e3 */ if (fZ) goto L_006765e3;
L_006765d7:; BB(0x006765d7);
    /* 006765d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006765da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006765db: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6765e0u); f_00686cae();
    /* 006765e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006765e3:; BB(0x006765e3);
    /* 006765e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006765e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006765e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006765e9: ret 4 */ FN_RET(0x006765c0); r_esp += 8; return;
}

void f_006765f0(void) /* ??_G_com_error@@UAEPAXI@Z_404 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006765f0);
    /* 006765f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006765f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006765f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006765f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006765f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006765fa: call 0x6763b0 */ r_esp -= 4; W32(r_esp, 0x6765ffu); f_006763b0();
    /* 006765ff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00676602: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00676605: je 0x676613 */ if (fZ) goto L_00676613;
L_00676607:; BB(0x00676607);
    /* 00676607: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067660a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067660b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x676610u); f_00686cae();
    /* 00676610: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00676613:; BB(0x00676613);
    /* 00676613: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676616: mov esp, ebp */ r_esp = r_ebp;
    /* 00676618: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676619: ret 4 */ FN_RET(0x006765f0); r_esp += 8; return;
}

void f_00676620(void) /* ??_G_com_error@@UAEPAXI@Z_405 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676620);
    /* 00676620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676621: mov ebp, esp */ r_ebp = r_esp;
    /* 00676623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00676627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067662a: call 0x676430 */ r_esp -= 4; W32(r_esp, 0x67662fu); f_00676430();
    /* 0067662f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00676632: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00676635: je 0x676643 */ if (fZ) goto L_00676643;
L_00676637:; BB(0x00676637);
    /* 00676637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067663a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067663b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x676640u); f_00686cae();
    /* 00676640: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00676643:; BB(0x00676643);
    /* 00676643: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676646: mov esp, ebp */ r_esp = r_ebp;
    /* 00676648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676649: ret 4 */ FN_RET(0x00676620); r_esp += 8; return;
}

void f_00676700(void) /* ??1CExpandoObject@@UAE@XZ_140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676700);
    /* 00676700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676701: mov ebp, esp */ r_ebp = r_esp;
    /* 00676703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00676707: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067670a: mov dword ptr [eax], 0x6e1a24 */ W32((u32)(r_eax), 0x6e1a24u);
    /* 00676710: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676713: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x676718u); f_005f7260();
    /* 00676718: mov esp, ebp */ r_esp = r_ebp;
    /* 0067671a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067671b: ret  */ FN_RET(0x00676700); r_esp += 4; return;
}

void f_00676b30(void) /* ??_G_com_error@@UAEPAXI@Z_406 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676b30);
    /* 00676b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00676b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00676b37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676b3a: call 0x676700 */ r_esp -= 4; W32(r_esp, 0x676b3fu); f_00676700();
    /* 00676b3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00676b42: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00676b45: je 0x676b53 */ if (fZ) goto L_00676b53;
L_00676b47:; BB(0x00676b47);
    /* 00676b47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676b4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676b4b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x676b50u); f_00686cae();
    /* 00676b50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00676b53:; BB(0x00676b53);
    /* 00676b53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676b56: mov esp, ebp */ r_esp = r_ebp;
    /* 00676b58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676b59: ret 4 */ FN_RET(0x00676b30); r_esp += 8; return;
}

void f_00677630(void) /* ??_G_com_error@@UAEPAXI@Z_407 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677630);
    /* 00677630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677631: mov ebp, esp */ r_ebp = r_esp;
    /* 00677633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00677637: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067763a: call 0x676be0 */ r_esp -= 4; W32(r_esp, 0x67763fu); f_00676be0();
    /* 0067763f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00677642: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00677645: je 0x677653 */ if (fZ) goto L_00677653;
L_00677647:; BB(0x00677647);
    /* 00677647: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067764a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067764b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x677650u); f_00686cae();
    /* 00677650: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00677653:; BB(0x00677653);
    /* 00677653: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677656: mov esp, ebp */ r_esp = r_ebp;
    /* 00677658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677659: ret 4 */ FN_RET(0x00677630); r_esp += 8; return;
}

void f_00677660(void) /* ??_G_com_error@@UAEPAXI@Z_408 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677660);
    /* 00677660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677661: mov ebp, esp */ r_ebp = r_esp;
    /* 00677663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00677667: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067766a: call 0x629b00 */ r_esp -= 4; W32(r_esp, 0x67766fu); f_00629b00();
    /* 0067766f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00677672: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00677675: je 0x677683 */ if (fZ) goto L_00677683;
L_00677677:; BB(0x00677677);
    /* 00677677: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067767a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067767b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x677680u); f_00686cae();
    /* 00677680: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00677683:; BB(0x00677683);
    /* 00677683: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00677686: mov esp, ebp */ r_esp = r_ebp;
    /* 00677688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677689: ret 4 */ FN_RET(0x00677660); r_esp += 8; return;
}

void f_00678660(void) /* ??_G_com_error@@UAEPAXI@Z_409 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00678660);
    /* 00678660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678661: mov ebp, esp */ r_ebp = r_esp;
    /* 00678663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00678664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00678667: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067866a: call 0x677710 */ r_esp -= 4; W32(r_esp, 0x67866fu); f_00677710();
    /* 0067866f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00678672: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00678675: je 0x678683 */ if (fZ) goto L_00678683;
L_00678677:; BB(0x00678677);
    /* 00678677: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067867a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067867b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x678680u); f_00686cae();
    /* 00678680: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00678683:; BB(0x00678683);
    /* 00678683: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678686: mov esp, ebp */ r_esp = r_ebp;
    /* 00678688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678689: ret 4 */ FN_RET(0x00678660); r_esp += 8; return;
}

void f_00678750(void) /* ??1CSessionMapPtrToPtr@@UAE@XZ_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00678750);
    /* 00678750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678751: mov ebp, esp */ r_ebp = r_esp;
    /* 00678753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678755: push 0x6ad78b */ { u32 v = 0x6ad78bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067875a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678761: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00678762: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00678767: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00678769: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067876a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067876d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00678773: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00678776: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678779: mov dword ptr [eax], 0x6e1fc0 */ W32((u32)(r_eax), 0x6e1fc0u);
    /* 0067877f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678786: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067878c: call 0x64fa40 */ r_esp -= 4; W32(r_esp, 0x678791u); f_0064fa40();
    /* 00678791: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00678798: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067879b: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x6787a0u); f_005fc150();
    /* 006787a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006787a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006787aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006787ab: mov esp, ebp */ r_esp = r_ebp;
    /* 006787ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006787ae: ret  */ FN_RET(0x00678750); r_esp += 4; return;
}

void f_006788d0(void) /* ??_G_com_error@@UAEPAXI@Z_410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006788d0);
    /* 006788d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006788d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006788d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006788d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006788d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006788da: call 0x678750 */ r_esp -= 4; W32(r_esp, 0x6788dfu); f_00678750();
    /* 006788df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006788e2: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006788e5: je 0x6788f3 */ if (fZ) goto L_006788f3;
L_006788e7:; BB(0x006788e7);
    /* 006788e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006788ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006788eb: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6788f0u); f_00686cae();
    /* 006788f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006788f3:; BB(0x006788f3);
    /* 006788f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006788f6: mov esp, ebp */ r_esp = r_ebp;
    /* 006788f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006788f9: ret 4 */ FN_RET(0x006788d0); r_esp += 8; return;
}

void f_0067a360(void) /* ??1CComCriticalSection@ATL@@QAE@XZ_26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067a360);
    /* 0067a360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067a361: mov ebp, esp */ r_ebp = r_esp;
    /* 0067a363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067a364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0067a367: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a36a: ret  */ FN_RET(0x0067a360); r_esp += 4; return;
}

void f_00680b40(void) /* ??_G_com_error@@UAEPAXI@Z_411 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680b40);
    /* 00680b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00680b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00680b47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680b4a: call 0x678b60 */ r_esp -= 4; W32(r_esp, 0x680b4fu); f_00678b60();
    /* 00680b4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00680b52: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00680b55: je 0x680b63 */ if (fZ) goto L_00680b63;
L_00680b57:; BB(0x00680b57);
    /* 00680b57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680b5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680b5b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x680b60u); f_00686cae();
    /* 00680b60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00680b63:; BB(0x00680b63);
    /* 00680b63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00680b66: mov esp, ebp */ r_esp = r_ebp;
    /* 00680b68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680b69: ret 4 */ FN_RET(0x00680b40); r_esp += 8; return;
}

void f_00680da0(void) /* ?CreateObject@?$CProcessLocal@V_AFX_RICHEDIT_STATE@@@@SGPAVCNoTrackObject@@XZ */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00680da0);
    /* 00680da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00680da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00680da3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00680da5: push 0x6add9b */ { u32 v = 0x6add9bu; r_esp -= 4; W32(r_esp, v); }
    /* 00680daa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00680db0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680db1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00680db4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00680db9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00680dbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680dbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00680dbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00680dc5: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00680dc7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x680dccu); f_00686d82();
    /* 00680dcc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680dcf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00680dd2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00680dd9: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680ddd: je 0x680dec */ if (fZ) goto L_00680dec;
L_00680ddf:; BB(0x00680ddf);
    /* 00680ddf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680de2: call 0x689750 */ r_esp -= 4; W32(r_esp, 0x680de7u); f_00689750();
    /* 00680de7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00680dea: jmp 0x680df3 */ goto L_00680df3;
L_00680dec:; BB(0x00680dec);
    /* 00680dec: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_00680df3:; BB(0x00680df3);
    /* 00680df3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680df6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00680df9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00680e00: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680e03: mov dword ptr [0x7960d8], ecx */ W32((u32)(0x7960d8u), r_ecx);
    /* 00680e09: call 0x666490 */ r_esp -= 4; W32(r_esp, 0x680e0eu); f_00666490();
    /* 00680e0e: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00680e14: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00680e16: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680e1c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00680e1f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x680e21u); call_ind(t); }
    /* 00680e21: mov byte ptr [0x163184c], 1 */ W8((u32)(0x163184cu), 0x1u);
    /* 00680e28: call 0x6664b0 */ r_esp -= 4; W32(r_esp, 0x680e2du); f_006664b0();
    /* 00680e2d: call 0x5dca80 */ r_esp -= 4; W32(r_esp, 0x680e32u); f_005dca80();
    /* 00680e32: mov dword ptr [0x162ee84], eax */ W32((u32)(0x162ee84u), r_eax);
    /* 00680e37: call 0x6664c0 */ r_esp -= 4; W32(r_esp, 0x680e3cu); f_006664c0();
    /* 00680e3c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00680e41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00680e43: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680e49: mov eax, dword ptr [edx + 0x128] */ r_eax = R32((u32)(r_edx+0x128u));
    /* 00680e4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680e51u); call_ind(t); }
    /* 00680e51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680e52: push 0x79542c */ { u32 v = 0x79542cu; r_esp -= 4; W32(r_esp, v); }
    /* 00680e57: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x680e5cu); f_00686d8e();
    /* 00680e5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680e5f: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680e65: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680e67: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680e6d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00680e70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680e72u); call_ind(t); }
    /* 00680e72: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00680e74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680e77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00680e7e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00680e7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00680e81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00680e82: ret  */ FN_RET(0x00680da0); r_esp += 4; return;
}

void f_006813b0(void) /* _WinMain@16_133 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006813b0);
    /* 006813b0: jmp 0x681514 */ f_00681514(); return;
}

void f_006813b5(void) /* _WinMain@16_134 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006813b5);
    /* 006813b5: jmp 0x681514 */ f_00681514(); return;
}

void f_006813d6(void) /* _WinMain@16_135_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006813d6);
L_006813d6:; BB(0x006813d6);
    /* 006813d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006813d9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006813dc: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006813df: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006813e2: cmp edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006813e5: jge 0x6814db */ if ((fS==fO)) goto L_006814db;
L_006813eb:; BB(0x006813eb);
    /* 006813eb: mov eax, dword ptr [0x1630704] */ r_eax = R32((u32)(0x1630704u));
    /* 006813f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006813f1: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 006813f6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006813f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006813fa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006813fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006813fe: push 0x6e22b8 */ { u32 v = 0x6e22b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00681403: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x681408u); f_0062fde0();
    /* 00681408: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068140b: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 00681410: call 0x666500 */ r_esp -= 4; W32(r_esp, 0x681415u); f_00666500();
    /* 00681415: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00681418: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0068141b: cmp dword ptr [0x1631848], 0x64 */ {  u32 a = R32((u32)(0x1631848u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681422: jae 0x681454 */ if (!fC) goto L_00681454;
L_00681424:; BB(0x00681424);
    /* 00681424: mov eax, dword ptr [0x1631848] */ r_eax = R32((u32)(0x1631848u));
    /* 00681429: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068142c: mov dword ptr [eax*8 + 0x1631528], ecx */ W32((u32)(r_eax*8+0x1631528u), r_ecx);
    /* 00681433: mov edx, dword ptr [0x1631848] */ r_edx = R32((u32)(0x1631848u));
    /* 00681439: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0068143c: mov dword ptr [edx*8 + 0x163152c], eax */ W32((u32)(r_edx*8+0x163152cu), r_eax);
    /* 00681443: mov ecx, dword ptr [0x1631848] */ r_ecx = R32((u32)(0x1631848u));
    /* 00681449: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068144c: mov dword ptr [0x1631848], ecx */ W32((u32)(0x1631848u), r_ecx);
    /* 00681452: jmp 0x681461 */ goto L_00681461;
L_00681454:; BB(0x00681454);
    /* 00681454: push 0x6e2284 */ { u32 v = 0x6e2284u; r_esp -= 4; W32(r_esp, v); }
    /* 00681459: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x68145eu); f_0062fde0();
    /* 0068145e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00681461:; BB(0x00681461);
    /* 00681461: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00681464: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00681467: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0068146a: add eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068146d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00681470: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00681477: jmp 0x681482 */ goto L_00681482;
L_00681479:; BB(0x00681479);
    /* 00681479: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0068147c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068147f: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00681482:; BB(0x00681482);
    /* 00681482: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00681485: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681488: cmp dword ptr [ebp - 0x34], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068148b: jge 0x6814ba */ if ((fS==fO)) goto L_006814ba;
L_0068148d:; BB(0x0068148d);
    /* 0068148d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00681490: mov dword ptr [eax], 0xdddddddd */ W32((u32)(r_eax), 0xddddddddu);
    /* 00681496: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00681499: mov dword ptr [ecx + 4], 0xabcdabcd */ W32((u32)(r_ecx+0x4u), 0xabcdabcdu);
    /* 006814a0: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006814a3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006814a6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006814a9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006814ac: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006814af: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006814b2: add edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006814b5: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006814b8: jmp 0x681479 */ goto L_00681479;
L_006814ba:; BB(0x006814ba);
    /* 006814ba: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006814bd: mov dword ptr [eax], 0xdddddddd */ W32((u32)(r_eax), 0xddddddddu);
    /* 006814c3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006814c6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006814c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006814cb: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006814ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006814d1: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006814d4: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006814d6: jmp 0x6813d6 */ goto L_006813d6;
L_006814db:; BB(0x006814db);
    /* 006814db: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006814de: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006814e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006814e3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006814e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006814e8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006814eb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006814ee: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006814f1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006814f4: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006814f6: jmp 0x681514 */ f_00681514(); return;
}

void f_0068150f(void) /* _WinMain@16_135 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068150f);
    /* 0068150f: jmp 0x6815ff */ goto L_006815ff;
L_006815ff:; BB(0x006815ff);
    /* 006815ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00681601: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681602: ret  */ FN_RET(0x0068150f); r_esp += 4; return;
}

void f_00681514(void) /* _WinMain@16_133_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00681514);
    /* 00681514: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00681517: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0068151a: jne 0x681524 */ if (!fZ) goto L_00681524;
L_0068151c:; BB(0x0068151c);
    /* 0068151c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068151f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00681522: jmp 0x681530 */ goto L_00681530;
L_00681524:; BB(0x00681524);
    /* 00681524: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00681527: and ecx, 0xfffffff0 */ {  u32 a = r_ecx; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0068152a: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068152d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00681530:; BB(0x00681530);
    /* 00681530: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00681533: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00681536: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00681539: jae 0x681544 */ if (!fC) goto L_00681544;
L_0068153b:; BB(0x0068153b);
    /* 0068153b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068153e: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00681541: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00681544:; BB(0x00681544);
    /* 00681544: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00681547: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068154a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068154d: mov dword ptr [edx], 0xaaaaaaaa */ W32((u32)(r_edx), 0xaaaaaaaau);
    /* 00681553: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00681556: sub eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00681559: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068155c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068155f: mov dword ptr [ecx], 0xaaaaaaaa */ W32((u32)(r_ecx), 0xaaaaaaaau);
    /* 00681565: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00681568: mov ax, word ptr [0x1631850] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x1631850u))) & 0xffffu);
    /* 0068156e: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00681572: mov cx, word ptr [0x1631850] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x1631850u))) & 0xffffu);
    /* 00681579: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0068157d: mov word ptr [0x1631850], cx */ W16((u32)(0x1631850u), (u16)r_ecx);
    /* 00681584: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00681587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068158a: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0068158d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00681590: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00681593: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00681596: mov eax, dword ptr [0x7950a8] */ r_eax = R32((u32)(0x7950a8u));
    /* 0068159b: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068159e: mov dword ptr [0x7950a8], eax */ W32((u32)(0x7950a8u), r_eax);
    /* 006815a3: mov ecx, dword ptr [0x7950a8] */ r_ecx = R32((u32)(0x7950a8u));
    /* 006815a9: cmp ecx, dword ptr [0x7950ac] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x7950acu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006815af: jle 0x6815bd */ if ((fZ||fS!=fO)) goto L_006815bd;
L_006815b1:; BB(0x006815b1);
    /* 006815b1: mov edx, dword ptr [0x7950a8] */ r_edx = R32((u32)(0x7950a8u));
    /* 006815b7: mov dword ptr [0x7950ac], edx */ W32((u32)(0x7950acu), r_edx);
L_006815bd:; BB(0x006815bd);
    /* 006815bd: mov eax, dword ptr [0x7950b0] */ r_eax = R32((u32)(0x7950b0u));
    /* 006815c2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006815c5: mov dword ptr [0x7950b0], eax */ W32((u32)(0x7950b0u), r_eax);
    /* 006815ca: movzx ecx, byte ptr [0x1631852] */ r_ecx = (u32)R8((u32)(0x1631852u));
    /* 006815d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006815d3: je 0x6815fc */ if (fZ) goto L_006815fc;
L_006815d5:; BB(0x006815d5);
    /* 006815d5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006815d8: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006815db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006815dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006815df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006815e0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006815e3: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006815e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006815e7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006815ea: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 006815ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006815ef: push 0x6e2240 */ { u32 v = 0x6e2240u; r_esp -= 4; W32(r_esp, v); }
    /* 006815f4: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6815f9u); f_0062fde0();
    /* 006815f9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006815fc:; BB(0x006815fc);
    /* 006815fc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006815ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00681601: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681602: ret  */ FN_RET(0x00681514); r_esp += 4; return;
}

void f_00681654(void) /* _WinMain@16_136 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00681654);
    /* 00681654: jmp 0x681793 */ f_00681793(); return;
}

void f_00681793(void) /* _WinMain@16_136_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00681793);
    /* 00681793: mov esp, ebp */ r_esp = r_ebp;
    /* 00681795: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00681796: ret  */ FN_RET(0x00681793); r_esp += 4; return;
}

void f_00686c65(void) /* ??_Etype_info@@UAEPAXI@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686c65);
    /* 00686c65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00686c66: mov bl, byte ptr [esp + 8] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esp+0x8u))) & 0xffu);
    /* 00686c6a: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00686c6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686c6e: mov esi, ecx */ r_esi = r_ecx;
    /* 00686c70: je 0x686c96 */ if (fZ) goto L_00686c96;
L_00686c72:; BB(0x00686c72);
    /* 00686c72: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00686c73: push 0x6879ae */ { u32 v = 0x6879aeu; r_esp -= 4; W32(r_esp, v); }
    /* 00686c78: lea edi, [esi - 4] */ r_edi = (u32)(r_esi+0xfffffffcu);
    /* 00686c7b: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 00686c7d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00686c7f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686c80: call 0x686e57 */ r_esp -= 4; W32(r_esp, 0x686c85u); f_00686e57();
    /* 00686c85: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00686c88: je 0x686c91 */ if (fZ) goto L_00686c91;
L_00686c8a:; BB(0x00686c8a);
    /* 00686c8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00686c8b: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x686c90u); f_00686cae();
    /* 00686c90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00686c91:; BB(0x00686c91);
    /* 00686c91: mov eax, edi */ r_eax = r_edi;
    /* 00686c93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00686c94: jmp 0x686ca9 */ goto L_00686ca9;
L_00686c96:; BB(0x00686c96);
    /* 00686c96: call 0x6879ae */ r_esp -= 4; W32(r_esp, 0x686c9bu); f_006879ae();
    /* 00686c9b: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00686c9e: je 0x686ca7 */ if (fZ) goto L_00686ca7;
L_00686ca0:; BB(0x00686ca0);
    /* 00686ca0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00686ca1: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x686ca6u); f_00686cae();
    /* 00686ca6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00686ca7:; BB(0x00686ca7);
    /* 00686ca7: mov eax, esi */ r_eax = r_esi;
L_00686ca9:; BB(0x00686ca9);
    /* 00686ca9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00686caa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00686cab: ret 4 */ FN_RET(0x00686c65); r_esp += 8; return;
}

void f_00686cae(void) /* ??3@YAXPAX@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686cae);
    /* 00686cae: jmp dword ptr [0x6b2214] */ { u32 t = R32((u32)(0x6b2214u)); call_ind(t); return; }
}

void f_00686cc0(void) /* __ftol2_sse */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686cc0);
    /* 00686cc0: cmp dword ptr [0x1631bec], 0 */ {  u32 a = R32((u32)(0x1631becu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686cc7: je 0x686cf6 */ if (fZ) goto L_00686cf6;
L_00686cc9:; BB(0x00686cc9);
    /* 00686cc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00686cca: mov ebp, esp */ r_ebp = r_esp;
    /* 00686ccc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00686ccf: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00686cd2: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00686cd5: cvttsd2si eax, qword ptr [esp] */ { XMM s; s.q[0] = R64((u32)(r_esp)); s.q[1] = 0; double v = s.f[0]; double r = trunc(v); r_eax = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 00686cda: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00686cdb: ret  */ FN_RET(0x00686cc0); r_esp += 4; return;
L_00686cf6:; BB(0x00686cf6);
    /* 00686cf6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00686cf7: mov ebp, esp */ r_ebp = r_esp;
    /* 00686cf9: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00686cfc: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00686cff: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00686d01: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 00686d05: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00686d09: fild qword ptr [esp + 0x10] */ FPUSH((long double)(i64)R64((u32)(r_esp+0x10u)));
    /* 00686d0d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00686d11: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00686d15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686d17: je 0x686d55 */ if (fZ) goto L_00686d55;
L_00686d19:; BB(0x00686d19);
    /* 00686d19: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00686d1b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); }
    /* 00686d1d: jns 0x686d3d */ if (!fS) goto L_00686d3d;
L_00686d1f:; BB(0x00686d1f);
    /* 00686d1f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00686d22: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00686d25: xor ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00686d2b: add ecx, 0x7fffffff */ {  u32 a = r_ecx; u32 b = 0x7fffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00686d31: adc eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00686d34: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00686d38: adc edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00686d3b: jmp 0x686d69 */ goto L_00686d69;
L_00686d3d:; BB(0x00686d3d);
    /* 00686d3d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00686d40: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00686d43: add ecx, 0x7fffffff */ {  u32 a = r_ecx; u32 b = 0x7fffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00686d49: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 00686d4c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00686d50: sbb edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00686d53: jmp 0x686d69 */ goto L_00686d69;
L_00686d55:; BB(0x00686d55);
    /* 00686d55: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00686d59: test edx, 0x7fffffff */ {  u32 a = r_edx; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686d5f: jne 0x686d19 */ if (!fZ) goto L_00686d19;
L_00686d61:; BB(0x00686d61);
    /* 00686d61: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00686d65: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_00686d69:; BB(0x00686d69);
    /* 00686d69: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00686d6a: ret  */ FN_RET(0x00686cc0); r_esp += 4; return;
}

void f_00686d82(void) /* ??2@YAPAXI@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686d82);
    /* 00686d82: jmp dword ptr [0x6b221c] */ { u32 t = R32((u32)(0x6b221cu)); call_ind(t); return; }
}

void f_00686d94(void) /* ??_L@YGXPAXIHP6EX0@Z1@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686d94);
    /* 00686d94: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00686d96: push 0x702a70 */ { u32 v = 0x702a70u; r_esp -= 4; W32(r_esp, v); }
    /* 00686d9b: call 0x68768c */ r_esp -= 4; W32(r_esp, 0x686da0u); f_0068768c();
    /* 00686da0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00686da2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00686da5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00686da8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00686dab:; BB(0x00686dab);
    /* 00686dab: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00686dae: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00686db1: jge 0x686dc6 */ if ((fS==fO)) goto L_00686dc6;
L_00686db3:; BB(0x00686db3);
    /* 00686db3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00686db6: mov ecx, esi */ r_ecx = r_esi;
    /* 00686db8: call dword ptr [ebp + 0x14] */ { u32 t = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, 0x686dbbu); call_ind(t); }
    /* 00686dbb: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00686dbe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00686dc1: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00686dc4: jmp 0x686dab */ goto L_00686dab;
L_00686dc6:; BB(0x00686dc6);
    /* 00686dc6: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00686dcd: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 00686dd4: call 0x686de1 */ r_esp -= 4; W32(r_esp, 0x686dd9u); f_00686de1();
    /* 00686dd9: call 0x6876d1 */ r_esp -= 4; W32(r_esp, 0x686ddeu); f_006876d1();
    /* 00686dde: ret 0x14 */ FN_RET(0x00686d94); r_esp += 24; return;
}

void f_00686df9(void) /* ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686df9);
    /* 00686df9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00686dfb: push 0x702a90 */ { u32 v = 0x702a90u; r_esp -= 4; W32(r_esp, v); }
    /* 00686e00: call 0x68768c */ r_esp -= 4; W32(r_esp, 0x686e05u); f_0068768c();
    /* 00686e05: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00686e09:; BB(0x00686e09);
    /* 00686e09: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 00686e0c: js 0x686e48 */ if (fS) goto L_00686e48;
L_00686e0e:; BB(0x00686e0e);
    /* 00686e0e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00686e11: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00686e14: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00686e17: call dword ptr [ebp + 0x14] */ { u32 t = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, 0x686e1au); call_ind(t); }
    /* 00686e1a: jmp 0x686e09 */ goto L_00686e09;
L_00686e48:; BB(0x00686e48);
    /* 00686e48: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 00686e4f: call 0x6876d1 */ r_esp -= 4; W32(r_esp, 0x686e54u); f_006876d1();
    /* 00686e54: ret 0x10 */ FN_RET(0x00686df9); r_esp += 20; return;
}

void f_00686e57(void) /* ??_M@YGXPAXIHP6EX0@Z@Z */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686e57);
    /* 00686e57: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00686e59: push 0x702ab0 */ { u32 v = 0x702ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686e5e: call 0x68768c */ r_esp -= 4; W32(r_esp, 0x686e63u); f_0068768c();
    /* 00686e63: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00686e67: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00686e6a: mov eax, esi */ r_eax = r_esi;
    /* 00686e6c: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00686e70: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00686e73: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00686e77:; BB(0x00686e77);
    /* 00686e77: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 00686e7a: js 0x686e87 */ if (fS) goto L_00686e87;
L_00686e7c:; BB(0x00686e7c);
    /* 00686e7c: sub dword ptr [ebp + 8], esi */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00686e7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00686e82: call dword ptr [ebp + 0x14] */ { u32 t = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, 0x686e85u); call_ind(t); }
    /* 00686e85: jmp 0x686e77 */ goto L_00686e77;
L_00686e87:; BB(0x00686e87);
    /* 00686e87: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00686e8e: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 00686e95: call 0x686ea2 */ r_esp -= 4; W32(r_esp, 0x686e9au); f_00686ea2();
    /* 00686e9a: call 0x6876d1 */ r_esp -= 4; W32(r_esp, 0x686e9fu); f_006876d1();
    /* 00686e9f: ret 0x10 */ FN_RET(0x00686e57); r_esp += 20; return;
}

void f_00686eea(void) /* __onexit */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686eea);
    /* 00686eea: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00686eec: push 0x702ad0 */ { u32 v = 0x702ad0u; r_esp -= 4; W32(r_esp, v); }
    /* 00686ef1: call 0x68768c */ r_esp -= 4; W32(r_esp, 0x686ef6u); f_0068768c();
    /* 00686ef6: push dword ptr [0x1631bf8] */ { u32 v = R32((u32)(0x1631bf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686efc: mov esi, dword ptr [0x6b2124] */ r_esi = R32((u32)(0x6b2124u));
    /* 00686f02: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x686f04u); call_ind(t); }
    /* 00686f04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00686f05: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00686f08: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00686f0b: jne 0x686f19 */ if (!fZ) goto L_00686f19;
L_00686f0d:; BB(0x00686f0d);
    /* 00686f0d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686f10: call dword ptr [0x6b211c] */ { u32 t = R32((u32)(0x6b211cu)); r_esp -= 4; W32(r_esp, 0x686f16u); call_ind(t); }
    /* 00686f16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00686f17: jmp 0x686f80 */ goto L_00686f80;
L_00686f19:; BB(0x00686f19);
    /* 00686f19: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00686f1b: call 0x6876f8 */ r_esp -= 4; W32(r_esp, 0x686f20u); f_006876f8();
    /* 00686f20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00686f21: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00686f25: push dword ptr [0x1631bf8] */ { u32 v = R32((u32)(0x1631bf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686f2b: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x686f2du); call_ind(t); }
    /* 00686f2d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00686f30: push dword ptr [0x1631bf4] */ { u32 v = R32((u32)(0x1631bf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686f36: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x686f38u); call_ind(t); }
    /* 00686f38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00686f39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00686f3a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00686f3d: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00686f40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686f41: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00686f44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686f45: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686f48: mov esi, dword ptr [0x6b2140] */ r_esi = R32((u32)(0x6b2140u));
    /* 00686f4e: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x686f50u); call_ind(t); }
    /* 00686f50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00686f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00686f52: call 0x6876f2 */ r_esp -= 4; W32(r_esp, 0x686f57u); f_006876f2();
    /* 00686f57: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00686f5a: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686f5d: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x686f5fu); call_ind(t); }
    /* 00686f5f: mov dword ptr [0x1631bf8], eax */ W32((u32)(0x1631bf8u), r_eax);
    /* 00686f64: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686f67: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x686f69u); call_ind(t); }
    /* 00686f69: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00686f6c: mov dword ptr [0x1631bf4], eax */ W32((u32)(0x1631bf4u), r_eax);
    /* 00686f71: mov dword ptr [ebp - 4], 0xfffffffe */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffeu);
    /* 00686f78: call 0x686f86 */ r_esp -= 4; W32(r_esp, 0x686f7du); f_00686f86();
    /* 00686f7d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_00686f80:; BB(0x00686f80);
    /* 00686f80: call 0x6876d1 */ r_esp -= 4; W32(r_esp, 0x686f85u); f_006876d1();
    /* 00686f85: ret  */ FN_RET(0x00686eea); r_esp += 4; return;
}

void f_00686f8f(void) /* _atexit */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686f8f);
    /* 00686f8f: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00686f93: call 0x686eea */ r_esp -= 4; W32(r_esp, 0x686f98u); f_00686eea();
    /* 00686f98: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00686f9a: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00686f9c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00686f9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00686f9f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00686fa0: ret  */ FN_RET(0x00686f8f); r_esp += 4; return;
}

void f_00686fe4(void) /* _pre_cpp_init */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00686fe4);
    /* 00686fe4: push 0x687774 */ { u32 v = 0x687774u; r_esp -= 4; W32(r_esp, v); }
    /* 00686fe9: call 0x686f8f */ r_esp -= 4; W32(r_esp, 0x686feeu); f_00686f8f();
    /* 00686fee: mov eax, dword ptr [0x1631ba4] */ r_eax = R32((u32)(0x1631ba4u));
    /* 00686ff3: mov dword ptr [esp], 0x1631868 */ W32((u32)(r_esp), 0x1631868u);
    /* 00686ffa: push dword ptr [0x1631ba0] */ { u32 v = R32((u32)(0x1631ba0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00687000: mov dword ptr [0x1631868], eax */ W32((u32)(0x1631868u), r_eax);
    /* 00687005: push 0x1631858 */ { u32 v = 0x1631858u; r_esp -= 4; W32(r_esp, v); }
    /* 0068700a: push 0x163185c */ { u32 v = 0x163185cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068700f: push 0x1631854 */ { u32 v = 0x1631854u; r_esp -= 4; W32(r_esp, v); }
    /* 00687014: call dword ptr [0x6b212c] */ { u32 t = R32((u32)(0x6b212cu)); r_esp -= 4; W32(r_esp, 0x68701au); call_ind(t); }
    /* 0068701a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068701d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0068701f: mov dword ptr [0x1631864], eax */ W32((u32)(0x1631864u), r_eax);
    /* 00687024: jge 0x68702e */ if ((fS==fO)) goto L_0068702e;
L_00687026:; BB(0x00687026);
    /* 00687026: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00687028: call 0x68774a */ r_esp -= 4; W32(r_esp, 0x68702du); f_0068774a();
    /* 0068702d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0068702e:; BB(0x0068702e);
    /* 0068702e: ret  */ FN_RET(0x00686fe4); r_esp += 4; return;
}

