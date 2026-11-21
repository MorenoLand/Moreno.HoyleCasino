#include "protos.h"

void f_00676650(void) /* SetupWizardDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676650);
    /* 00676650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676651: mov ebp, esp */ r_ebp = r_esp;
    /* 00676653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00676655: push 0x6ad5f8 */ { u32 v = 0x6ad5f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067665a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00676660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676661: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676662: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00676667: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00676669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067666a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067666d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00676673: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00676676: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676678: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067667a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067667d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x676682u); f_005f71f0();
    /* 00676682: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00676689: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067668c: mov dword ptr [eax], 0x6e1a24 */ W32((u32)(r_eax), 0x6e1a24u);
    /* 00676692: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676694: push 0x30d4f1 */ { u32 v = 0x30d4f1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676699: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067669c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x6766a1u); f_005f83d0();
    /* 006766a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006766a4: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 006766ae: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006766b2: je 0x6766c2 */ if (fZ) goto L_006766c2;
L_006766b4:; BB(0x006766b4);
    /* 006766b4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006766b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006766ba: mov dword ptr [edx + 0x1c0], eax */ W32((u32)(r_edx+0x1c0u), r_eax);
    /* 006766c0: jmp 0x6766d6 */ goto L_006766d6;
L_006766c2:; BB(0x006766c2);
    /* 006766c2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006766c8: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6766cdu); f_006375b0();
    /* 006766cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006766d0: mov dword ptr [ecx + 0x1c0], eax */ W32((u32)(r_ecx+0x1c0u), r_eax);
L_006766d6:; BB(0x006766d6);
    /* 006766d6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006766dd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006766e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006766e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006766ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006766eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006766ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006766ee: ret 4 */ FN_RET(0x00676650); r_esp += 8; return;
}

void f_00676720(void) /* SetupWizardDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676720);
    /* 00676720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676721: mov ebp, esp */ r_ebp = r_esp;
    /* 00676723: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676726: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00676729: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067672b: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0067672d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067672f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676731: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676733: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00676735: push 0x1dd */ { u32 v = 0x1ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0067673a: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0067673c: push 0x6e1a84 */ { u32 v = 0x6e1a84u; r_esp -= 4; W32(r_esp, v); }
    /* 00676741: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x676746u); f_00630f40();
    /* 00676746: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00676749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067674a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067674c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067674e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676751: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x676756u); f_005fa5b0();
    /* 00676756: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00676758: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067675a: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0067675c: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0067675e: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00676760: push 0x6e1a74 */ { u32 v = 0x6e1a74u; r_esp -= 4; W32(r_esp, v); }
    /* 00676765: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x67676au); f_00630f40();
    /* 0067676a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067676d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067676e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676770: push 0x17f */ { u32 v = 0x17fu; r_esp -= 4; W32(r_esp, v); }
    /* 00676775: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067677a: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0067677f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676781: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00676783: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676786: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x67678bu); f_005f9de0();
    /* 0067678b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067678d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676790: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x676795u); f_005fb300();
    /* 00676795: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00676798: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067679b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067679d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006767a0: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 006767a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6767a8u); call_ind(t); }
    /* 006767a8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006767aa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006767ac: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 006767ae: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006767b0: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006767b2: push 0x6e1a64 */ { u32 v = 0x6e1a64u; r_esp -= 4; W32(r_esp, v); }
    /* 006767b7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6767bcu); f_00630f40();
    /* 006767bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006767bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006767c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006767c2: push 0x17f */ { u32 v = 0x17fu; r_esp -= 4; W32(r_esp, v); }
    /* 006767c7: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 006767cc: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 006767d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006767d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006767d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006767d8: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x6767ddu); f_005f9de0();
    /* 006767dd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 006767df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006767e1: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 006767e3: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 006767e5: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006767e7: push 0x6d2b44 */ { u32 v = 0x6d2b44u; r_esp -= 4; W32(r_esp, v); }
    /* 006767ec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6767f1u); f_00630f40();
    /* 006767f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006767f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006767f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006767f7: push 0x17f */ { u32 v = 0x17fu; r_esp -= 4; W32(r_esp, v); }
    /* 006767fc: push 0x18a */ { u32 v = 0x18au; r_esp -= 4; W32(r_esp, v); }
    /* 00676801: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00676806: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00676808: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067680a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067680d: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x676812u); f_005f9de0();
    /* 00676812: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676815: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0067681b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067681c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067681e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676822: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676828: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067682a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676830: mov eax, dword ptr [edx + 0x3bc] */ r_eax = R32((u32)(r_edx+0x3bcu));
    /* 00676836: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x676838u); call_ind(t); }
    /* 00676838: mov esp, ebp */ r_esp = r_ebp;
    /* 0067683a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067683b: ret  */ FN_RET(0x00676720); r_esp += 4; return;
}

void f_00676890(void) /* SetupWizardDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00676890);
    /* 00676890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00676891: mov ebp, esp */ r_ebp = r_esp;
    /* 00676893: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00676896: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00676899: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067689c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0067689f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006768a3: je 0x6768be */ if (fZ) goto L_006768be;
L_006768a5:; BB(0x006768a5);
    /* 006768a5: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006768a9: je 0x676962 */ if (fZ) goto L_00676962;
L_006768af:; BB(0x006768af);
    /* 006768af: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006768b3: je 0x676a1a */ if (fZ) goto L_00676a1a;
L_006768b9:; BB(0x006768b9);
    /* 006768b9: jmp 0x676a24 */ goto L_00676a24;
L_006768be:; BB(0x006768be);
    /* 006768be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006768c1: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 006768c7: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006768ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006768cd: mov dword ptr [eax + 0x1bc], edx */ W32((u32)(r_eax+0x1bcu), r_edx);
    /* 006768d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006768d6: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006768dd: jne 0x6768fc */ if (!fZ) goto L_006768fc;
L_006768df:; BB(0x006768df);
    /* 006768df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006768e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006768e4: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6768e9u); f_005fb300();
    /* 006768e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006768ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006768ef: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006768f1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006768f4: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 006768fa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6768fcu); call_ind(t); }
L_006768fc:; BB(0x006768fc);
    /* 006768fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006768fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676901: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x676906u); f_005fb300();
    /* 00676906: mov ecx, eax */ r_ecx = r_eax;
    /* 00676908: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x67690du); f_006026d0();
    /* 0067690d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00676910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00676912: jne 0x676931 */ if (!fZ) goto L_00676931;
L_00676914:; BB(0x00676914);
    /* 00676914: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00676916: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676919: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x67691eu); f_005fb300();
    /* 0067691e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00676921: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676924: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00676926: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00676929: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0067692f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x676931u); call_ind(t); }
L_00676931:; BB(0x00676931);
    /* 00676931: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676934: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 0067693a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0067693d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067693f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00676942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676943: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676946: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676947: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0067694d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067694f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676955: mov edx, dword ptr [eax + 0x3c0] */ r_edx = R32((u32)(r_eax+0x3c0u));
    /* 0067695b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67695du); call_ind(t); }
    /* 0067695d: jmp 0x676a42 */ goto L_00676a42;
L_00676962:; BB(0x00676962);
    /* 00676962: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676965: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0067696b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067696e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676971: mov dword ptr [edx + 0x1bc], ecx */ W32((u32)(r_edx+0x1bcu), r_ecx);
    /* 00676977: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0067697c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067697e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676984: mov eax, dword ptr [edx + 0x308] */ r_eax = R32((u32)(r_edx+0x308u));
    /* 0067698a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67698cu); call_ind(t); }
    /* 0067698c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0067698f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676992: cmp dword ptr [ecx + 0x1bc], eax */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00676998: jl 0x6769b7 */ if ((fS!=fO)) goto L_006769b7;
L_0067699a:; BB(0x0067699a);
    /* 0067699a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067699c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067699f: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6769a4u); f_005fb300();
    /* 006769a4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006769a7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006769aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006769ac: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006769af: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 006769b5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6769b7u); call_ind(t); }
L_006769b7:; BB(0x006769b7);
    /* 006769b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006769b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006769bc: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6769c1u); f_005fb300();
    /* 006769c1: mov ecx, eax */ r_ecx = r_eax;
    /* 006769c3: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x6769c8u); f_006026d0();
    /* 006769c8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006769cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006769cd: jne 0x6769ec */ if (!fZ) goto L_006769ec;
L_006769cf:; BB(0x006769cf);
    /* 006769cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006769d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006769d4: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x6769d9u); f_005fb300();
    /* 006769d9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006769dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006769df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006769e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006769e4: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006769ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6769ecu); call_ind(t); }
L_006769ec:; BB(0x006769ec);
    /* 006769ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006769ef: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 006769f5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006769f8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006769fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006769fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006769fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676a01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676a02: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00676a08: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00676a0a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676a10: mov edx, dword ptr [eax + 0x3c0] */ r_edx = R32((u32)(r_eax+0x3c0u));
    /* 00676a16: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x676a18u); call_ind(t); }
    /* 00676a18: jmp 0x676a42 */ goto L_00676a42;
L_00676a1a:; BB(0x00676a1a);
    /* 00676a1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676a1d: call 0x676a50 */ r_esp -= 4; W32(r_esp, 0x676a22u); f_00676a50();
    /* 00676a22: jmp 0x676a42 */ goto L_00676a42;
L_00676a24:; BB(0x00676a24);
    /* 00676a24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00676a27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00676a28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00676a2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00676a2c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00676a32: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00676a34: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00676a3a: mov edx, dword ptr [eax + 0x3c4] */ r_edx = R32((u32)(r_eax+0x3c4u));
    /* 00676a40: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x676a42u); call_ind(t); }
L_00676a42:; BB(0x00676a42);
    /* 00676a42: mov esp, ebp */ r_esp = r_ebp;
    /* 00676a44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00676a45: ret 4 */ FN_RET(0x00676890); r_esp += 8; return;
}

