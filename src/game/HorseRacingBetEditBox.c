#include "protos.h"

void f_00443460(void) /* HorseRacingBetEditBox::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443460);
    /* 00443460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443461: mov ebp, esp */ r_ebp = r_esp;
    /* 00443463: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443464: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443467: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044346a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044346b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044346e: call 0x5f4b60 */ r_esp -= 4; W32(r_esp, 0x443473u); f_005f4b60();
    /* 00443473: mov esp, ebp */ r_esp = r_ebp;
    /* 00443475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443476: ret 4 */ FN_RET(0x00443460); r_esp += 8; return;
}

void f_00443480(void) /* HorseRacingBetEditBox::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443480);
    /* 00443480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443481: mov ebp, esp */ r_ebp = r_esp;
    /* 00443483: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443486: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00443489: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0044348d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443491: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443494: call 0x60b710 */ r_esp -= 4; W32(r_esp, 0x443499u); f_0060b710();
    /* 00443499: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004434a0: jmp 0x4434ab */ goto L_004434ab;
L_004434a2:; BB(0x004434a2);
    /* 004434a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004434a5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004434a8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004434ab:; BB(0x004434ab);
    /* 004434ab: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004434af: jge 0x44351c */ if ((fS==fO)) goto L_0044351c;
L_004434b1:; BB(0x004434b1);
    /* 004434b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004434b4: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004434b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004434b8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 004434bd: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004434c0: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4434c5u); f_005fb810();
    /* 004434c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004434c7: je 0x44351a */ if (fZ) goto L_0044351a;
L_004434c9:; BB(0x004434c9);
    /* 004434c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004434cc: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004434cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004434d0: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004434d6: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004434d9: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4434deu); f_005fb810();
    /* 004434de: mov ecx, eax */ r_ecx = r_eax;
    /* 004434e0: call 0x60c330 */ r_esp -= 4; W32(r_esp, 0x4434e5u); f_0060c330();
    /* 004434e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004434e8: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004434eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004434ec: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004434f2: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 004434f5: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4434fau); f_005fb810();
    /* 004434fa: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004434fd: jne 0x44351a */ if (!fZ) goto L_0044351a;
L_004434ff:; BB(0x004434ff);
    /* 004434ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443502: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00443505: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443506: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0044350b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0044350e: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x443513u); f_005fb810();
    /* 00443513: mov ecx, eax */ r_ecx = r_eax;
    /* 00443515: call 0x60c300 */ r_esp -= 4; W32(r_esp, 0x44351au); f_0060c300();
L_0044351a:; BB(0x0044351a);
    /* 0044351a: jmp 0x4434a2 */ goto L_004434a2;
L_0044351c:; BB(0x0044351c);
    /* 0044351c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00443523: jmp 0x44352e */ goto L_0044352e;
L_00443525:; BB(0x00443525);
    /* 00443525: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443528: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044352b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0044352e:; BB(0x0044352e);
    /* 0044352e: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00443532: jge 0x443657 */ if ((fS==fO)) goto L_00443657;
L_00443538:; BB(0x00443538);
    /* 00443538: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044353b: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044353e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044353f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00443544: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00443547: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x44354cu); f_005fb810();
    /* 0044354c: mov ecx, eax */ r_ecx = r_eax;
    /* 0044354e: call 0x60c370 */ r_esp -= 4; W32(r_esp, 0x443553u); f_0060c370();
    /* 00443553: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00443556: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443558: jne 0x4435c4 */ if (!fZ) goto L_004435c4;
L_0044355a:; BB(0x0044355a);
    /* 0044355a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044355d: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00443560: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443561: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00443566: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00443569: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x44356eu); f_005fb810();
    /* 0044356e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00443571: push 0x6b83fc */ { u32 v = 0x6b83fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00443576: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00443579: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044357b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044357e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00443584: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443586u); call_ind(t); }
    /* 00443586: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443587: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x44358cu); f_00686ec0();
    /* 0044358c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044358f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443591: jne 0x4435c4 */ if (!fZ) goto L_004435c4;
L_00443593:; BB(0x00443593);
    /* 00443593: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443596: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00443599: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044359a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004435a0: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004435a3: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4435a8u); f_005fb810();
    /* 004435a8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004435ab: push 0x6b83f8 */ { u32 v = 0x6b83f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004435b0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004435b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004435b5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004435b8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004435be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4435c0u); call_ind(t); }
    /* 004435c0: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_004435c4:; BB(0x004435c4);
    /* 004435c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004435c7: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004435ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004435cb: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004435d1: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004435d4: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4435d9u); f_005fb810();
    /* 004435d9: mov ecx, eax */ r_ecx = r_eax;
    /* 004435db: call 0x60c370 */ r_esp -= 4; W32(r_esp, 0x4435e0u); f_0060c370();
    /* 004435e0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004435e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004435e5: jne 0x443652 */ if (!fZ) goto L_00443652;
L_004435e7:; BB(0x004435e7);
    /* 004435e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004435ea: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004435ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004435ee: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004435f4: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004435f7: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4435fcu); f_005fb810();
    /* 004435fc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004435ff: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00443604: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443607: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443609: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044360c: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00443612: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443614u); call_ind(t); }
    /* 00443614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443615: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x44361au); f_00686ec0();
    /* 0044361a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044361d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044361f: jne 0x443652 */ if (!fZ) goto L_00443652;
L_00443621:; BB(0x00443621);
    /* 00443621: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443624: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00443627: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443628: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0044362e: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00443631: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x443636u); f_005fb810();
    /* 00443636: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00443639: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044363e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00443641: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443643: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00443646: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0044364c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44364eu); call_ind(t); }
    /* 0044364e: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_00443652:; BB(0x00443652);
    /* 00443652: jmp 0x443525 */ goto L_00443525;
L_00443657:; BB(0x00443657);
    /* 00443657: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0044365b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044365d: je 0x443680 */ if (fZ) goto L_00443680;
L_0044365f:; BB(0x0044365f);
    /* 0044365f: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443665: call 0x440260 */ r_esp -= 4; W32(r_esp, 0x44366au); f_00440260();
    /* 0044366a: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443670: call 0x440310 */ r_esp -= 4; W32(r_esp, 0x443675u); f_00440310();
    /* 00443675: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 0044367b: call 0x440490 */ r_esp -= 4; W32(r_esp, 0x443680u); f_00440490();
L_00443680:; BB(0x00443680);
    /* 00443680: mov esp, ebp */ r_esp = r_ebp;
    /* 00443682: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443683: ret 4 */ FN_RET(0x00443480); r_esp += 8; return;
}

void f_00443690(void) /* HorseRacingBetEditBox::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443690);
    /* 00443690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443691: mov ebp, esp */ r_ebp = r_esp;
    /* 00443693: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00443696: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00443699: mov ax, word ptr [0x6b2b64] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x6b2b64u))) & 0xffffu);
    /* 0044369f: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004436a3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004436a6: mov dl, byte ptr [ecx + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x14u))) & 0xffu);
    /* 004436a9: mov byte ptr [ebp - 4], dl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_edx);
    /* 004436ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004436af: call 0x60c370 */ r_esp -= 4; W32(r_esp, 0x4436b4u); f_0060c370();
    /* 004436b4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004436b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004436b9: je 0x4436ce */ if (fZ) goto L_004436ce;
L_004436bb:; BB(0x004436bb);
    /* 004436bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004436be: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 004436c2: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004436c5: jne 0x4436ce */ if (!fZ) goto L_004436ce;
L_004436c7:; BB(0x004436c7);
    /* 004436c7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004436c9: jmp 0x4437cd */ goto L_004437cd;
L_004436ce:; BB(0x004436ce);
    /* 004436ce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004436d1: call 0x60c370 */ r_esp -= 4; W32(r_esp, 0x4436d6u); f_0060c370();
    /* 004436d6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004436d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004436db: je 0x4437cb */ if (fZ) goto L_004437cb;
L_004436e1:; BB(0x004436e1);
    /* 004436e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004436e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004436e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004436e8: call 0x60b7a0 */ r_esp -= 4; W32(r_esp, 0x4436edu); f_0060b7a0();
    /* 004436ed: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004436f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004436f2: je 0x4437cb */ if (fZ) goto L_004437cb;
L_004436f8:; BB(0x004436f8);
    /* 004436f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004436fb: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 004436ff: cmp ecx, 0x16 */ {  u32 a = r_ecx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443702: je 0x4437c7 */ if (fZ) goto L_004437c7;
L_00443708:; BB(0x00443708);
    /* 00443708: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044370b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044370d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443710: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00443716: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x443718u); call_ind(t); }
    /* 00443718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443719: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x44371fu); call_ind(t); }
    /* 0044371f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443722: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443724: jne 0x443742 */ if (!fZ) goto L_00443742;
L_00443726:; BB(0x00443726);
    /* 00443726: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0044372b: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0044372e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044372f: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x443734u); f_00686ec0();
    /* 00443734: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443737: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443739: jne 0x443742 */ if (!fZ) goto L_00443742;
L_0044373b:; BB(0x0044373b);
    /* 0044373b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044373d: jmp 0x4437cd */ goto L_004437cd;
L_00443742:; BB(0x00443742);
    /* 00443742: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443745: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00443747: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044374a: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00443750: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443752u); call_ind(t); }
    /* 00443752: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443753: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x443759u); call_ind(t); }
    /* 00443759: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044375c: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044375f: jle 0x443765 */ if ((fZ||fS!=fO)) goto L_00443765;
L_00443761:; BB(0x00443761);
    /* 00443761: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00443763: jmp 0x4437cd */ goto L_004437cd;
L_00443765:; BB(0x00443765);
    /* 00443765: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443768: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044376a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044376d: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00443773: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443775u); call_ind(t); }
    /* 00443775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443776: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x44377cu); call_ind(t); }
    /* 0044377c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044377f: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443782: jne 0x44379d */ if (!fZ) goto L_0044379d;
L_00443784:; BB(0x00443784);
    /* 00443784: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00443789: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0044378c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044378d: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x443792u); f_00686ec0();
    /* 00443792: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00443795: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443797: je 0x44379d */ if (fZ) goto L_0044379d;
L_00443799:; BB(0x00443799);
    /* 00443799: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0044379b: jmp 0x4437cd */ goto L_004437cd;
L_0044379d:; BB(0x0044379d);
    /* 0044379d: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 004437a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004437a1: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x4437a7u); call_ind(t); }
    /* 004437a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004437aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004437ac: jne 0x4437c7 */ if (!fZ) goto L_004437c7;
L_004437ae:; BB(0x004437ae);
    /* 004437ae: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004437b3: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004437b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004437b7: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x4437bcu); f_00686ec0();
    /* 004437bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004437bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004437c1: je 0x4437c7 */ if (fZ) goto L_004437c7;
L_004437c3:; BB(0x004437c3);
    /* 004437c3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004437c5: jmp 0x4437cd */ goto L_004437cd;
L_004437c7:; BB(0x004437c7);
    /* 004437c7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004437c9: jmp 0x4437cd */ goto L_004437cd;
L_004437cb:; BB(0x004437cb);
    /* 004437cb: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004437cd:; BB(0x004437cd);
    /* 004437cd: mov esp, ebp */ r_esp = r_ebp;
    /* 004437cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004437d0: ret 4 */ FN_RET(0x00443690); r_esp += 8; return;
}

void f_004437e0(void) /* HorseRacingBetEditBox::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004437e0);
    /* 004437e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004437e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004437e3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004437e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004437e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004437ec: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x4437f1u); f_005f5400();
    /* 004437f1: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004437f4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004437f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004437fa: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004437fd: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443800: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00443803: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 00443807: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044380a: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 0044380e: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443811: jne 0x4439c3 */ if (!fZ) goto L_004439c3;
L_00443817:; BB(0x00443817);
    /* 00443817: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044381e: jmp 0x443829 */ goto L_00443829;
L_00443820:; BB(0x00443820);
    /* 00443820: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443823: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443826: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00443829:; BB(0x00443829);
    /* 00443829: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044382d: jge 0x443995 */ if ((fS==fO)) goto L_00443995;
L_00443833:; BB(0x00443833);
    /* 00443833: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443836: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00443839: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044383a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00443840: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00443843: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x443848u); f_005fb810();
    /* 00443848: mov ecx, eax */ r_ecx = r_eax;
    /* 0044384a: call 0x60c370 */ r_esp -= 4; W32(r_esp, 0x44384fu); f_0060c370();
    /* 0044384f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00443852: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443854: je 0x4438c1 */ if (fZ) goto L_004438c1;
L_00443856:; BB(0x00443856);
    /* 00443856: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443859: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044385c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044385d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00443863: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00443866: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x44386bu); f_005fb810();
    /* 0044386b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044386e: push 0x6b83fc */ { u32 v = 0x6b83fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00443873: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00443876: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00443878: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044387b: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00443881: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x443883u); call_ind(t); }
    /* 00443883: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443884: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x443889u); f_00686ec0();
    /* 00443889: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044388c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044388e: jne 0x4438c1 */ if (!fZ) goto L_004438c1;
L_00443890:; BB(0x00443890);
    /* 00443890: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443893: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00443896: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443897: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0044389d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004438a0: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4438a5u); f_005fb810();
    /* 004438a5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004438a8: push 0x6b83f8 */ { u32 v = 0x6b83f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004438ad: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004438b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004438b2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004438b5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004438bb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4438bdu); call_ind(t); }
    /* 004438bd: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
L_004438c1:; BB(0x004438c1);
    /* 004438c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004438c4: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004438c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004438c8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004438ce: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004438d1: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4438d6u); f_005fb810();
    /* 004438d6: mov ecx, eax */ r_ecx = r_eax;
    /* 004438d8: call 0x60c370 */ r_esp -= 4; W32(r_esp, 0x4438ddu); f_0060c370();
    /* 004438dd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004438e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004438e2: je 0x443990 */ if (fZ) goto L_00443990;
L_004438e8:; BB(0x004438e8);
    /* 004438e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004438eb: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004438ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004438ef: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004438f5: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004438f8: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x4438fdu); f_005fb810();
    /* 004438fd: mov ecx, eax */ r_ecx = r_eax;
    /* 004438ff: call 0x60c330 */ r_esp -= 4; W32(r_esp, 0x443904u); f_0060c330();
    /* 00443904: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443907: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0044390a: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0044390d: je 0x44394c */ if (fZ) goto L_0044394c;
L_0044390f:; BB(0x0044390f);
    /* 0044390f: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443913: jne 0x44392e */ if (!fZ) goto L_0044392e;
L_00443915:; BB(0x00443915);
    /* 00443915: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00443917: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0044391d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00443920: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x443925u); f_005fb810();
    /* 00443925: mov ecx, eax */ r_ecx = r_eax;
    /* 00443927: call 0x60c300 */ r_esp -= 4; W32(r_esp, 0x44392cu); f_0060c300();
    /* 0044392c: jmp 0x44394a */ goto L_0044394a;
L_0044392e:; BB(0x0044392e);
    /* 0044392e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443931: add eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443935: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044393b: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0044393e: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x443943u); f_005fb810();
    /* 00443943: mov ecx, eax */ r_ecx = r_eax;
    /* 00443945: call 0x60c300 */ r_esp -= 4; W32(r_esp, 0x44394au); f_0060c300();
L_0044394a:; BB(0x0044394a);
    /* 0044394a: jmp 0x443987 */ goto L_00443987;
L_0044394c:; BB(0x0044394c);
    /* 0044394c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443950: jne 0x44396b */ if (!fZ) goto L_0044396b;
L_00443952:; BB(0x00443952);
    /* 00443952: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00443954: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0044395a: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0044395d: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x443962u); f_005fb810();
    /* 00443962: mov ecx, eax */ r_ecx = r_eax;
    /* 00443964: call 0x60c300 */ r_esp -= 4; W32(r_esp, 0x443969u); f_0060c300();
    /* 00443969: jmp 0x443987 */ goto L_00443987;
L_0044396b:; BB(0x0044396b);
    /* 0044396b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044396e: add eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443972: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00443978: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0044397b: call 0x5fb810 */ r_esp -= 4; W32(r_esp, 0x443980u); f_005fb810();
    /* 00443980: mov ecx, eax */ r_ecx = r_eax;
    /* 00443982: call 0x60c300 */ r_esp -= 4; W32(r_esp, 0x443987u); f_0060c300();
L_00443987:; BB(0x00443987);
    /* 00443987: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044398a: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
    /* 0044398e: jmp 0x443995 */ goto L_00443995;
L_00443990:; BB(0x00443990);
    /* 00443990: jmp 0x443820 */ goto L_00443820;
L_00443995:; BB(0x00443995);
    /* 00443995: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00443999: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044399b: je 0x4439be */ if (fZ) goto L_004439be;
L_0044399d:; BB(0x0044399d);
    /* 0044399d: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 004439a3: call 0x440260 */ r_esp -= 4; W32(r_esp, 0x4439a8u); f_00440260();
    /* 004439a8: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 004439ae: call 0x440310 */ r_esp -= 4; W32(r_esp, 0x4439b3u); f_00440310();
    /* 004439b3: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 004439b9: call 0x440490 */ r_esp -= 4; W32(r_esp, 0x4439beu); f_00440490();
L_004439be:; BB(0x004439be);
    /* 004439be: jmp 0x443a82 */ goto L_00443a82;
L_004439c3:; BB(0x004439c3);
    /* 004439c3: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004439c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004439cb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004439cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004439d0: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 004439d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4439d8u); call_ind(t); }
    /* 004439d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004439d9: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x4439deu); f_00686ec0();
    /* 004439de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004439e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004439e3: je 0x443a55 */ if (fZ) goto L_00443a55;
L_004439e5:; BB(0x004439e5);
    /* 004439e5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004439ec: jmp 0x4439f7 */ goto L_004439f7;
L_004439ee:; BB(0x004439ee);
    /* 004439ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004439f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004439f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004439f7:; BB(0x004439f7);
    /* 004439f7: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004439fb: jge 0x443a55 */ if ((fS==fO)) goto L_00443a55;
L_004439fd:; BB(0x004439fd);
    /* 004439fd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00443a00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00443a01: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00443a04: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00443a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443a08: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00443a0e: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00443a11: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x443a16u); f_005fb3f0();
    /* 00443a16: mov ecx, eax */ r_ecx = r_eax;
    /* 00443a18: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x443a1du); f_00600230();
    /* 00443a1d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00443a20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00443a22: je 0x443a53 */ if (fZ) goto L_00443a53;
L_00443a24:; BB(0x00443a24);
    /* 00443a24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00443a27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00443a28: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443a2b: call 0x60b7d0 */ r_esp -= 4; W32(r_esp, 0x443a30u); f_0060b7d0();
    /* 00443a30: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443a36: call 0x440260 */ r_esp -= 4; W32(r_esp, 0x443a3bu); f_00440260();
    /* 00443a3b: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443a41: call 0x440310 */ r_esp -= 4; W32(r_esp, 0x443a46u); f_00440310();
    /* 00443a46: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443a4c: call 0x440490 */ r_esp -= 4; W32(r_esp, 0x443a51u); f_00440490();
    /* 00443a51: jmp 0x443a82 */ goto L_00443a82;
L_00443a53:; BB(0x00443a53);
    /* 00443a53: jmp 0x4439ee */ goto L_004439ee;
L_00443a55:; BB(0x00443a55);
    /* 00443a55: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00443a58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443a59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00443a5c: call 0x60b7d0 */ r_esp -= 4; W32(r_esp, 0x443a61u); f_0060b7d0();
    /* 00443a61: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443a67: call 0x440260 */ r_esp -= 4; W32(r_esp, 0x443a6cu); f_00440260();
    /* 00443a6c: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443a72: call 0x440310 */ r_esp -= 4; W32(r_esp, 0x443a77u); f_00440310();
    /* 00443a77: mov ecx, dword ptr [0x7906f4] */ r_ecx = R32((u32)(0x7906f4u));
    /* 00443a7d: call 0x440490 */ r_esp -= 4; W32(r_esp, 0x443a82u); f_00440490();
L_00443a82:; BB(0x00443a82);
    /* 00443a82: mov esp, ebp */ r_esp = r_ebp;
    /* 00443a84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443a85: ret 4 */ FN_RET(0x004437e0); r_esp += 8; return;
}

void f_00443bd0(void) /* HorseRacingBetEditBox::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00443bd0);
    /* 00443bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00443bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00443bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00443bd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00443bd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00443bda: call 0x60c370 */ r_esp -= 4; W32(r_esp, 0x443bdfu); f_0060c370();
    /* 00443bdf: mov esp, ebp */ r_esp = r_ebp;
    /* 00443be1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00443be2: ret  */ FN_RET(0x00443bd0); r_esp += 4; return;
}

void f_0060b780(void) /* HorseRacingBetEditBox::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060b780);
    /* 0060b780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060b781: mov ebp, esp */ r_ebp = r_esp;
    /* 0060b783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060b787: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060b78a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b78b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b78e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060b790: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b793: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060b796: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60b798u); call_ind(t); }
    /* 0060b798: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b79a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b79b: ret 4 */ FN_RET(0x0060b780); r_esp += 8; return;
}

void f_0060bff0(void) /* HorseRacingBetEditBox::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060bff0);
    /* 0060bff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060bff1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060bff3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060bff5: push 0x6aad32 */ { u32 v = 0x6aad32u; r_esp -= 4; W32(r_esp, v); }
    /* 0060bffa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c001: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c004: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060c009: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060c00b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c00c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060c00f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060c015: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0060c018: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c01b: call 0x5ef3e0 */ r_esp -= 4; W32(r_esp, 0x60c020u); f_005ef3e0();
    /* 0060c020: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c023: cmp dword ptr [eax + 0x1e4], 0 */ {  u32 a = R32((u32)(r_eax+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c02a: jne 0x60c076 */ if (!fZ) goto L_0060c076;
L_0060c02c:; BB(0x0060c02c);
    /* 0060c02c: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c031: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60c036u); f_00686d82();
    /* 0060c036: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c039: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060c03c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c043: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c047: je 0x60c056 */ if (fZ) goto L_0060c056;
L_0060c049:; BB(0x0060c049);
    /* 0060c049: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c04c: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x60c051u); f_005f5bf0();
    /* 0060c051: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0060c054: jmp 0x60c05d */ goto L_0060c05d;
L_0060c056:; BB(0x0060c056);
    /* 0060c056: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0060c05d:; BB(0x0060c05d);
    /* 0060c05d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060c060: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060c063: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c06a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c06d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c070: mov dword ptr [edx + 0x1e4], eax */ W32((u32)(r_edx+0x1e4u), r_eax);
L_0060c076:; BB(0x0060c076);
    /* 0060c076: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c079: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0060c07f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c082: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060c085: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0060c088: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c08b: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0060c091: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c094: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0060c09a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060c09c: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0060c09f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c0a1u); call_ind(t); }
    /* 0060c0a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c0a4: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0060c0aa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c0ad: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0060c0b3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0060c0b5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0060c0b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c0bau); call_ind(t); }
    /* 0060c0ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c0bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c0c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c0c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c0c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c0c8: ret  */ FN_RET(0x0060bff0); r_esp += 4; return;
}

void f_0060c140(void) /* HorseRacingBetEditBox::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c140);
    /* 0060c140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c141: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060c145: push 0x6aad58 */ { u32 v = 0x6aad58u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c14a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060c150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c151: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060c154: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060c159: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060c15b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c15c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060c15f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060c165: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0060c168: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c16b: call 0x5f6270 */ r_esp -= 4; W32(r_esp, 0x60c170u); f_005f6270();
    /* 0060c170: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c173: cmp dword ptr [eax + 0x1dc], 0 */ {  u32 a = R32((u32)(r_eax+0x1dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c17a: je 0x60c195 */ if (fZ) goto L_0060c195;
L_0060c17c:; BB(0x0060c17c);
    /* 0060c17c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c17f: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0060c185: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c188: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0060c18e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0060c190: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0060c193: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c195u); call_ind(t); }
L_0060c195:; BB(0x0060c195);
    /* 0060c195: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c198: cmp dword ptr [ecx + 0x1e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c19f: je 0x60c1ba */ if (fZ) goto L_0060c1ba;
L_0060c1a1:; BB(0x0060c1a1);
    /* 0060c1a1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c1a4: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0060c1aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c1ad: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 0060c1b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060c1b5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0060c1b8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c1bau); call_ind(t); }
L_0060c1ba:; BB(0x0060c1ba);
    /* 0060c1ba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c1bd: cmp dword ptr [ecx + 0x1e4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c1c4: je 0x60c279 */ if (fZ) goto L_0060c279;
L_0060c1ca:; BB(0x0060c1ca);
    /* 0060c1ca: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c1cd: movzx eax, byte ptr [edx + 0x1d0] */ r_eax = (u32)R8((u32)(r_edx+0x1d0u));
    /* 0060c1d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c1d6: je 0x60c254 */ if (fZ) goto L_0060c254;
L_0060c1d8:; BB(0x0060c1d8);
    /* 0060c1d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c1db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c1dc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c1df: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0060c1e2: call 0x5f9590 */ r_esp -= 4; W32(r_esp, 0x60c1e7u); f_005f9590();
    /* 0060c1e7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c1ea: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0060c1f0: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c1f7: jne 0x60c24a */ if (!fZ) goto L_0060c24a;
L_0060c1f9:; BB(0x0060c1f9);
    /* 0060c1f9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c1fb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60c200u); f_00686d82();
    /* 0060c200: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060c203: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060c206: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060c20d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c211: je 0x60c224 */ if (fZ) goto L_0060c224;
L_0060c213:; BB(0x0060c213);
    /* 0060c213: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c216: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c217: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060c21a: call 0x5f0c20 */ r_esp -= 4; W32(r_esp, 0x60c21fu); f_005f0c20();
    /* 0060c21f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0060c222: jmp 0x60c22b */ goto L_0060c22b;
L_0060c224:; BB(0x0060c224);
    /* 0060c224: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0060c22b:; BB(0x0060c22b);
    /* 0060c22b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060c22e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0060c231: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060c238: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060c23b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c23c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c23f: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0060c245: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x60c24au); f_005f5df0();
L_0060c24a:; BB(0x0060c24a);
    /* 0060c24a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c24d: call 0x5f0b90 */ r_esp -= 4; W32(r_esp, 0x60c252u); f_005f0b90();
    /* 0060c252: jmp 0x60c279 */ goto L_0060c279;
L_0060c254:; BB(0x0060c254);
    /* 0060c254: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c256: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c259: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0060c25c: call 0x5f9590 */ r_esp -= 4; W32(r_esp, 0x60c261u); f_005f9590();
    /* 0060c261: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c264: call 0x5f0bb0 */ r_esp -= 4; W32(r_esp, 0x60c269u); f_005f0bb0();
    /* 0060c269: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c26b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060c26e: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0060c274: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x60c279u); f_005f5df0();
L_0060c279:; BB(0x0060c279);
    /* 0060c279: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060c27c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060c283: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060c284: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c286: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c287: ret  */ FN_RET(0x0060c140); r_esp += 4; return;
}

void f_0060c290(void) /* HorseRacingBetEditBox::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c290);
    /* 0060c290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c291: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c29a: call 0x5f62b0 */ r_esp -= 4; W32(r_esp, 0x60c29fu); f_005f62b0();
    /* 0060c29f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c2a2: cmp dword ptr [eax + 0x1dc], 0 */ {  u32 a = R32((u32)(r_eax+0x1dcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c2a9: je 0x60c2c4 */ if (fZ) goto L_0060c2c4;
L_0060c2ab:; BB(0x0060c2ab);
    /* 0060c2ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c2ae: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 0060c2b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c2b7: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 0060c2bd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0060c2bf: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0060c2c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c2c4u); call_ind(t); }
L_0060c2c4:; BB(0x0060c2c4);
    /* 0060c2c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c2c7: cmp dword ptr [ecx + 0x1e4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c2ce: je 0x60c2f5 */ if (fZ) goto L_0060c2f5;
L_0060c2d0:; BB(0x0060c2d0);
    /* 0060c2d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c2d2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c2d5: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0060c2d8: call 0x5f9590 */ r_esp -= 4; W32(r_esp, 0x60c2ddu); f_005f9590();
    /* 0060c2dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060c2df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c2e2: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 0060c2e8: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x60c2edu); f_005f5df0();
    /* 0060c2ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c2f0: call 0x5f0bb0 */ r_esp -= 4; W32(r_esp, 0x60c2f5u); f_005f0bb0();
L_0060c2f5:; BB(0x0060c2f5);
    /* 0060c2f5: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c2f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c2f8: ret  */ FN_RET(0x0060c290); r_esp += 4; return;
}

void f_0060c390(void) /* HorseRacingBetEditBox::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060c390);
    /* 0060c390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060c391: mov ebp, esp */ r_ebp = r_esp;
    /* 0060c393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060c394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060c397: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060c39a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c39b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c39e: call 0x5ee5e0 */ r_esp -= 4; W32(r_esp, 0x60c3a3u); f_005ee5e0();
    /* 0060c3a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c3a6: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060c3aa: je 0x60c3c8 */ if (fZ) goto L_0060c3c8;
L_0060c3ac:; BB(0x0060c3ac);
    /* 0060c3ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c3af: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x60c3b4u); f_005f5400();
    /* 0060c3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060c3b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c3b8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0060c3bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060c3be: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0060c3c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060c3c3: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0060c3c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60c3c8u); call_ind(t); }
L_0060c3c8:; BB(0x0060c3c8);
    /* 0060c3c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0060c3ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060c3cb: ret 4 */ FN_RET(0x0060c390); r_esp += 8; return;
}

