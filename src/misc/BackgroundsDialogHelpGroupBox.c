#include "protos.h"

void f_00677430(void) /* BackgroundsDialogHelpGroupBox::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00677430);
    /* 00677430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00677431: mov ebp, esp */ r_ebp = r_esp;
    /* 00677433: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00677436: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00677439: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00677440: cmp dword ptr [0x16306d8], 0 */ {  u32 a = R32((u32)(0x16306d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677447: jne 0x67744e */ if (!fZ) goto L_0067744e;
L_00677449:; BB(0x00677449);
    /* 00677449: jmp 0x677624 */ goto L_00677624;
L_0067744e:; BB(0x0067744e);
    /* 0067744e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677450: mov ecx, dword ptr [0x16306d8] */ r_ecx = R32((u32)(0x16306d8u));
    /* 00677456: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x67745bu); f_005fb300();
    /* 0067745b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067745e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00677465: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00677467: mov ecx, dword ptr [0x16306d8] */ r_ecx = R32((u32)(0x16306d8u));
    /* 0067746d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x677472u); f_005fb300();
    /* 00677472: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00677475: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0067747c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067747e: mov ecx, dword ptr [0x16306d8] */ r_ecx = R32((u32)(0x16306d8u));
    /* 00677484: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x677489u); f_005fb300();
    /* 00677489: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067748c: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 00677493: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00677495: mov ecx, dword ptr [0x16306d8] */ r_ecx = R32((u32)(0x16306d8u));
    /* 0067749b: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x6774a0u); f_005fb720();
    /* 006774a0: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 006774a3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006774a6: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 006774ad: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 006774b4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006774bb: jmp 0x6774c6 */ goto L_006774c6;
L_006774bd:; BB(0x006774bd);
    /* 006774bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006774c0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006774c3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_006774c6:; BB(0x006774c6);
    /* 006774c6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006774c9: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006774cc: jge 0x677509 */ if ((fS==fO)) goto L_00677509;
L_006774ce:; BB(0x006774ce);
    /* 006774ce: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006774d1: cmp dword ptr [ebp + eax*8 - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+r_eax*8+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006774d6: je 0x677507 */ if (fZ) goto L_00677507;
L_006774d8:; BB(0x006774d8);
    /* 006774d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006774db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006774dc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006774df: mov eax, dword ptr [ebp + edx*8 - 0x2c] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd4u));
    /* 006774e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006774e6: mov ecx, dword ptr [ebp + ecx*8 - 0x2c] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0xffffffd4u));
    /* 006774ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006774ec: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 006774f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6774f4u); call_ind(t); }
    /* 006774f4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006774f7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006774f9: je 0x677507 */ if (fZ) goto L_00677507;
L_006774fb:; BB(0x006774fb);
    /* 006774fb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006774fe: mov eax, dword ptr [ebp + edx*8 - 0x28] */ r_eax = R32((u32)(r_ebp+r_edx*8+0xffffffd8u));
    /* 00677502: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00677505: jmp 0x677509 */ goto L_00677509;
L_00677507:; BB(0x00677507);
    /* 00677507: jmp 0x6774bd */ goto L_006774bd;
L_00677509:; BB(0x00677509);
    /* 00677509: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067750d: jne 0x677538 */ if (!fZ) goto L_00677538;
L_0067750f:; BB(0x0067750f);
    /* 0067750f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00677512: cmp dword ptr [ecx + 0x18], 3 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00677516: jne 0x677533 */ if (!fZ) goto L_00677533;
L_00677518:; BB(0x00677518);
    /* 00677518: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067751d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00677520: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00677523: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00677526: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 00677529: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067752b: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00677531: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677533u); call_ind(t); }
L_00677533:; BB(0x00677533);
    /* 00677533: jmp 0x677624 */ goto L_00677624;
L_00677538:; BB(0x00677538);
    /* 00677538: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067753c: jne 0x677568 */ if (!fZ) goto L_00677568;
L_0067753e:; BB(0x0067753e);
    /* 0067753e: push 0x6e1cb4 */ { u32 v = 0x6e1cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00677543: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x677548u); f_00630f40();
    /* 00677548: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067754b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067754e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00677551: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677552: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00677555: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00677558: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067755b: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0067755e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677560: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00677566: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677568u); call_ind(t); }
L_00677568:; BB(0x00677568);
    /* 00677568: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067756c: jne 0x677598 */ if (!fZ) goto L_00677598;
L_0067756e:; BB(0x0067756e);
    /* 0067756e: push 0x6e1c94 */ { u32 v = 0x6e1c94u; r_esp -= 4; W32(r_esp, v); }
    /* 00677573: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x677578u); f_00630f40();
    /* 00677578: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067757b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067757e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00677581: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00677582: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00677585: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00677588: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067758b: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0067758e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00677590: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00677596: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677598u); call_ind(t); }
L_00677598:; BB(0x00677598);
    /* 00677598: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067759c: jne 0x6775c8 */ if (!fZ) goto L_006775c8;
L_0067759e:; BB(0x0067759e);
    /* 0067759e: push 0x6e1c74 */ { u32 v = 0x6e1c74u; r_esp -= 4; W32(r_esp, v); }
    /* 006775a3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6775a8u); f_00630f40();
    /* 006775a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006775ab: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006775ae: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006775b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006775b2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006775b5: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006775b8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006775bb: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 006775be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006775c0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 006775c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6775c8u); call_ind(t); }
L_006775c8:; BB(0x006775c8);
    /* 006775c8: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006775cc: jne 0x677624 */ if (!fZ) goto L_00677624;
L_006775ce:; BB(0x006775ce);
    /* 006775ce: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006775d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006775d6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006775dc: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 006775e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6775e4u); call_ind(t); }
    /* 006775e4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006775e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006775e9: je 0x6775f4 */ if (fZ) goto L_006775f4;
L_006775eb:; BB(0x006775eb);
    /* 006775eb: mov dword ptr [ebp - 0x44], 0x6e1c48 */ W32((u32)(r_ebp+0xffffffbcu), 0x6e1c48u);
    /* 006775f2: jmp 0x6775fb */ goto L_006775fb;
L_006775f4:; BB(0x006775f4);
    /* 006775f4: mov dword ptr [ebp - 0x44], 0x6e1c1c */ W32((u32)(r_ebp+0xffffffbcu), 0x6e1c1cu);
L_006775fb:; BB(0x006775fb);
    /* 006775fb: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006775fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006775ff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x677604u); f_00630f40();
    /* 00677604: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00677607: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067760a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067760d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067760e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00677611: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00677614: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00677617: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 0067761a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067761c: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00677622: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x677624u); call_ind(t); }
L_00677624:; BB(0x00677624);
    /* 00677624: mov esp, ebp */ r_esp = r_ebp;
    /* 00677626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00677627: ret 4 */ FN_RET(0x00677430); r_esp += 8; return;
}

