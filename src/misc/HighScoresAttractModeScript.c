#include "protos.h"

void f_00678690(void) /* HighScoresAttractModeScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00678690);
    /* 00678690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678691: mov ebp, esp */ r_ebp = r_esp;
    /* 00678693: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678695: push 0x6ad768 */ { u32 v = 0x6ad768u; r_esp -= 4; W32(r_esp, v); }
    /* 0067869a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006786a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006786a1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006786a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006786a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006786ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006786ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006786af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006786b5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006786b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006786ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006786bd: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x6786c2u); f_005fc0d0();
    /* 006786c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006786c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006786cc: mov dword ptr [eax], 0x6e1fc0 */ W32((u32)(r_eax), 0x6e1fc0u);
    /* 006786d2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006786d8: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6786ddu); f_005f3bf0();
    /* 006786dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006786de: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006786e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006786e6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006786ec: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006786f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6786f4u); call_ind(t); }
    /* 006786f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006786f7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006786fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006786fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006786ff: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00678705: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678707u); call_ind(t); }
    /* 00678707: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067870a: mov byte ptr [ecx + 0x20], al */ W8((u32)(r_ecx+0x20u), (u8)r_eax);
    /* 0067870d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678711: je 0x67871e */ if (fZ) goto L_0067871e;
L_00678713:; BB(0x00678713);
    /* 00678713: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678716: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00678719: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0067871c: jmp 0x678728 */ goto L_00678728;
L_0067871e:; BB(0x0067871e);
    /* 0067871e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678721: mov dword ptr [ecx + 0x28], 0x3c */ W32((u32)(r_ecx+0x28u), 0x3cu);
L_00678728:; BB(0x00678728);
    /* 00678728: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067872f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678732: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678735: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067873c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067873d: mov esp, ebp */ r_esp = r_ebp;
    /* 0067873f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678740: ret 4 */ FN_RET(0x00678690); r_esp += 8; return;
}

void f_006787b0(void) /* HighScoresAttractModeScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006787b0);
    /* 006787b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006787b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006787b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006787b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006787b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006787bc: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006787bf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006787c2: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006787c6: ja 0x67888a */ if ((!fC&&!fZ)) goto L_0067888a;
L_006787cc:; BB(0x006787cc);
    /* 006787cc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006787cf: jmp dword ptr [edx*4 + 0x6788b4] */ { u32 t = R32((u32)(r_edx*4+0x6788b4u)); switch (t) { case 0x6787d6u: goto L_006787d6; case 0x6787f9u: goto L_006787f9; case 0x67880du: goto L_0067880d; case 0x678828u: goto L_00678828; case 0x67884du: goto L_0067884d; default: UNSUP(0x006787cf, "jump table entry is not a known target"); } }
L_006787d6:; BB(0x006787d6);
    /* 006787d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006787d9: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006787dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006787dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006787e0: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006787e3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006787e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006787e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006787ea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006787ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006787ef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006787f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6787f4u); call_ind(t); }
    /* 006787f4: jmp 0x6788b0 */ goto L_006788b0;
L_006787f9:; BB(0x006787f9);
    /* 006787f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006787fc: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 006787ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00678800: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678802: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00678808: call 0x64f950 */ r_esp -= 4; W32(r_esp, 0x67880du); f_0064f950();
L_0067880d:; BB(0x0067880d);
    /* 0067880d: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0067880f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678812: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00678815: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00678818: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00678819: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067881c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067881e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678821: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00678824: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x678826u); call_ind(t); }
    /* 00678826: jmp 0x67888a */ goto L_0067888a;
L_00678828:; BB(0x00678828);
    /* 00678828: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 0067882d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0067882f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678832: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678834: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678837: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0067883a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67883cu); call_ind(t); }
    /* 0067883c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067883f: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00678842: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00678845: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678848: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0067884b: jmp 0x67888a */ goto L_0067888a;
L_0067884d:; BB(0x0067884d);
    /* 0067884d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00678853: call 0x64fa40 */ r_esp -= 4; W32(r_esp, 0x678858u); f_0064fa40();
    /* 00678858: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067885b: movzx edx, byte ptr [ecx + 0x20] */ r_edx = (u32)R8((u32)(r_ecx+0x20u));
    /* 0067885f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678861: je 0x678874 */ if (fZ) goto L_00678874;
L_00678863:; BB(0x00678863);
    /* 00678863: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678865: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678867: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0067886d: call 0x64fa90 */ r_esp -= 4; W32(r_esp, 0x678872u); f_0064fa90();
    /* 00678872: jmp 0x678888 */ goto L_00678888;
L_00678874:; BB(0x00678874);
    /* 00678874: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 00678879: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067887b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067887e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678880: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678883: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00678886: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678888u); call_ind(t); }
L_00678888:; BB(0x00678888);
    /* 00678888: jmp 0x6788b0 */ goto L_006788b0;
L_0067888a:; BB(0x0067888a);
    /* 0067888a: cmp dword ptr [0x16306c4], 0 */ {  u32 a = R32((u32)(0x16306c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678891: je 0x6788b0 */ if (fZ) goto L_006788b0;
L_00678893:; BB(0x00678893);
    /* 00678893: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678896: cmp dword ptr [ecx + 0x14], 1 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067889a: je 0x6788b0 */ if (fZ) goto L_006788b0;
L_0067889c:; BB(0x0067889c);
    /* 0067889c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067889f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006788a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006788a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006788a5: mov ecx, dword ptr [0x16306c4] */ r_ecx = R32((u32)(0x16306c4u));
    /* 006788ab: call 0x66e9e0 */ r_esp -= 4; W32(r_esp, 0x6788b0u); f_0066e9e0();
L_006788b0:; BB(0x006788b0);
    /* 006788b0: mov esp, ebp */ r_esp = r_ebp;
    /* 006788b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006788b3: ret  */ FN_RET(0x006787b0); r_esp += 4; return;
}

