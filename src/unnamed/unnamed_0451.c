#include "protos.h"

void f_00451540(void) /* sub_451540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451540);
    /* 00451540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451541: mov ebp, esp */ r_ebp = r_esp;
    /* 00451543: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451546: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00451549: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045154c: movzx ecx, byte ptr [eax + 0x2c2] */ r_ecx = (u32)R8((u32)(r_eax+0x2c2u));
    /* 00451553: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451555: jne 0x45155c */ if (!fZ) goto L_0045155c;
L_00451557:; BB(0x00451557);
    /* 00451557: jmp 0x4515dc */ goto L_004515dc;
L_0045155c:; BB(0x0045155c);
    /* 0045155c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045155f: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 00451565: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451568: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 0045156e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451575: jmp 0x451580 */ goto L_00451580;
L_00451577:; BB(0x00451577);
    /* 00451577: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045157a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045157d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00451580:; BB(0x00451580);
    /* 00451580: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451584: jge 0x4515dc */ if ((fS==fO)) goto L_004515dc;
L_00451586:; BB(0x00451586);
    /* 00451586: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451589: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045158c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451591: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451592: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451595: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x45159au); f_0044f6c0();
    /* 0045159a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045159d: cmp eax, dword ptr [edx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004515a3: je 0x4515da */ if (fZ) goto L_004515da;
L_004515a5:; BB(0x004515a5);
    /* 004515a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004515a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004515ab: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 004515b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004515b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004515b4: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x4515b9u); f_0044f6c0();
    /* 004515b9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004515bc: je 0x4515da */ if (fZ) goto L_004515da;
L_004515be:; BB(0x004515be);
    /* 004515be: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004515c1: cmp dword ptr [eax], -1 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004515c4: jne 0x4515d0 */ if (!fZ) goto L_004515d0;
L_004515c6:; BB(0x004515c6);
    /* 004515c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004515c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004515cc: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004515ce: jmp 0x4515da */ goto L_004515da;
L_004515d0:; BB(0x004515d0);
    /* 004515d0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004515d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004515d6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004515d8: jmp 0x4515dc */ goto L_004515dc;
L_004515da:; BB(0x004515da);
    /* 004515da: jmp 0x451577 */ goto L_00451577;
L_004515dc:; BB(0x004515dc);
    /* 004515dc: mov esp, ebp */ r_esp = r_ebp;
    /* 004515de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004515df: ret 8 */ FN_RET(0x00451540); r_esp += 12; return;
}

void f_004515f0(void) /* sub_4515F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004515f0);
    /* 004515f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004515f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004515f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004515f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004515f9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004515fc: movzx ecx, byte ptr [eax + 0x2c2] */ r_ecx = (u32)R8((u32)(r_eax+0x2c2u));
    /* 00451603: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451605: jne 0x45160c */ if (!fZ) goto L_0045160c;
L_00451607:; BB(0x00451607);
    /* 00451607: jmp 0x45168c */ goto L_0045168c;
L_0045160c:; BB(0x0045160c);
    /* 0045160c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045160f: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 00451615: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451618: mov dword ptr [eax], 0xffffffff */ W32((u32)(r_eax), 0xffffffffu);
    /* 0045161e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451625: jmp 0x451630 */ goto L_00451630;
L_00451627:; BB(0x00451627);
    /* 00451627: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045162a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045162d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00451630:; BB(0x00451630);
    /* 00451630: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451634: jge 0x45168c */ if ((fS==fO)) goto L_0045168c;
L_00451636:; BB(0x00451636);
    /* 00451636: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451639: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045163c: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451641: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451642: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451645: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x45164au); f_0044f6c0();
    /* 0045164a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045164d: cmp eax, dword ptr [edx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451653: je 0x45166e */ if (fZ) goto L_0045166e;
L_00451655:; BB(0x00451655);
    /* 00451655: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451658: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045165b: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00451660: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451661: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451664: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451669u); f_0044f6c0();
    /* 00451669: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045166c: jne 0x45168a */ if (!fZ) goto L_0045168a;
L_0045166e:; BB(0x0045166e);
    /* 0045166e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451671: cmp dword ptr [eax], -1 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451674: jne 0x451680 */ if (!fZ) goto L_00451680;
L_00451676:; BB(0x00451676);
    /* 00451676: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00451679: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045167c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0045167e: jmp 0x45168a */ goto L_0045168a;
L_00451680:; BB(0x00451680);
    /* 00451680: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451683: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451686: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451688: jmp 0x45168c */ goto L_0045168c;
L_0045168a:; BB(0x0045168a);
    /* 0045168a: jmp 0x451627 */ goto L_00451627;
L_0045168c:; BB(0x0045168c);
    /* 0045168c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045168e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045168f: ret 8 */ FN_RET(0x004515f0); r_esp += 12; return;
}

void f_004516a0(void) /* sub_4516A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004516a0);
    /* 004516a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004516a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004516a3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004516a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004516a7: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004516aa: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004516b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004516b8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004516bf: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004516c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004516c9: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 004516d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004516d2: je 0x4516e5 */ if (fZ) goto L_004516e5;
L_004516d4:; BB(0x004516d4);
    /* 004516d4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004516d7: mov eax, dword ptr [edx + 0x2d4] */ r_eax = R32((u32)(r_edx+0x2d4u));
    /* 004516dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004516e0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004516e3: jmp 0x4516f1 */ goto L_004516f1;
L_004516e5:; BB(0x004516e5);
    /* 004516e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004516e8: mov edx, dword ptr [ecx + 0x2d4] */ r_edx = R32((u32)(r_ecx+0x2d4u));
    /* 004516ee: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_004516f1:; BB(0x004516f1);
    /* 004516f1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004516f4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004516f7: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 004516fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004516fb: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 004516fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004516ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451702: call 0x451540 */ r_esp -= 4; W32(r_esp, 0x451707u); f_00451540();
    /* 00451707: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0045170a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045170b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0045170e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045170f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451712: call 0x4515f0 */ r_esp -= 4; W32(r_esp, 0x451717u); f_004515f0();
    /* 00451717: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045171b: jne 0x45172d */ if (!fZ) goto L_0045172d;
L_0045171d:; BB(0x0045171d);
    /* 0045171d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00451720: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451723: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451725: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451728: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045172b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0045172d:; BB(0x0045172d);
    /* 0045172d: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451731: jne 0x451783 */ if (!fZ) goto L_00451783;
L_00451733:; BB(0x00451733);
    /* 00451733: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00451736: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451739: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045173e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045173f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451742: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451747u); f_0044f680();
    /* 00451747: mov esi, eax */ r_esi = r_eax;
    /* 00451749: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045174c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045174f: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00451754: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451755: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00451758: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45175du); f_0044f680();
    /* 0045175d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045175f: jl 0x451773 */ if ((fS!=fO)) goto L_00451773;
L_00451761:; BB(0x00451761);
    /* 00451761: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451764: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00451767: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451769: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045176c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045176f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451771: jmp 0x451783 */ goto L_00451783;
L_00451773:; BB(0x00451773);
    /* 00451773: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00451776: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451779: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0045177b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045177e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00451781: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_00451783:; BB(0x00451783);
    /* 00451783: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451787: jne 0x451799 */ if (!fZ) goto L_00451799;
L_00451789:; BB(0x00451789);
    /* 00451789: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045178c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045178f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451791: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451794: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451797: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_00451799:; BB(0x00451799);
    /* 00451799: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045179a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045179c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045179d: ret 8 */ FN_RET(0x004516a0); r_esp += 12; return;
}

void f_004517a0(void) /* sub_4517A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004517a0);
    /* 004517a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004517a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004517a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004517a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004517a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004517b0: jmp 0x4517bb */ goto L_004517bb;
L_004517b2:; BB(0x004517b2);
    /* 004517b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004517b5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004517b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004517bb:; BB(0x004517bb);
    /* 004517bb: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004517bf: jge 0x451863 */ if ((fS==fO)) goto L_00451863;
L_004517c5:; BB(0x004517c5);
    /* 004517c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004517c8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004517cb: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004517d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004517d1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004517d4: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4517d9u); f_0044f680();
    /* 004517d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004517da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004517dd: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x4517e2u); f_00450c20();
    /* 004517e2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004517e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004517e7: je 0x45185e */ if (fZ) goto L_0045185e;
L_004517e9:; BB(0x004517e9);
    /* 004517e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004517ec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004517ef: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004517f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004517f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004517f8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4517fdu); f_0044f680();
    /* 004517fd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00451800: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451802: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451805: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451808: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045180d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045180e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451811: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451816u); f_0044f680();
    /* 00451816: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451819: jne 0x451849 */ if (!fZ) goto L_00451849;
L_0045181b:; BB(0x0045181b);
    /* 0045181b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045181e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451821: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00451826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451827: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045182a: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x45182fu); f_0044f6c0();
    /* 0045182f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451832: jne 0x451849 */ if (!fZ) goto L_00451849;
L_00451834:; BB(0x00451834);
    /* 00451834: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451837: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045183a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045183d: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0045183f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00451842: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451845: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451847: jmp 0x45185c */ goto L_0045185c;
L_00451849:; BB(0x00451849);
    /* 00451849: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045184c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045184f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451851: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451854: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451857: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045185a: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0045185c:; BB(0x0045185c);
    /* 0045185c: jmp 0x451863 */ goto L_00451863;
L_0045185e:; BB(0x0045185e);
    /* 0045185e: jmp 0x4517b2 */ goto L_004517b2;
L_00451863:; BB(0x00451863);
    /* 00451863: mov esp, ebp */ r_esp = r_ebp;
    /* 00451865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451866: ret 0xc */ FN_RET(0x004517a0); r_esp += 16; return;
}

void f_00451870(void) /* sub_451870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451870);
    /* 00451870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451871: mov ebp, esp */ r_ebp = r_esp;
    /* 00451873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451876: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00451879: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045187c: movzx ecx, byte ptr [eax + 0x2ce] */ r_ecx = (u32)R8((u32)(r_eax+0x2ceu));
    /* 00451883: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451885: je 0x451895 */ if (fZ) goto L_00451895;
L_00451887:; BB(0x00451887);
    /* 00451887: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045188a: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 00451891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451893: jne 0x45189c */ if (!fZ) goto L_0045189c;
L_00451895:; BB(0x00451895);
    /* 00451895: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00451897: jmp 0x451c10 */ goto L_00451c10;
L_0045189c:; BB(0x0045189c);
    /* 0045189c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045189f: mov dword ptr [ecx], 0xffffffff */ W32((u32)(r_ecx), 0xffffffffu);
    /* 004518a5: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004518a8: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 004518ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004518b1: movzx ecx, byte ptr [eax + 0x2ca] */ r_ecx = (u32)R8((u32)(r_eax+0x2cau));
    /* 004518b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004518ba: je 0x4519b5 */ if (fZ) goto L_004519b5;
L_004518c0:; BB(0x004518c0);
    /* 004518c0: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004518c4: je 0x451921 */ if (fZ) goto L_00451921;
L_004518c6:; BB(0x004518c6);
    /* 004518c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004518cd: jmp 0x4518d8 */ goto L_004518d8;
L_004518cf:; BB(0x004518cf);
    /* 004518cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004518d2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004518d5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_004518d8:; BB(0x004518d8);
    /* 004518d8: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004518dc: jge 0x45191c */ if ((fS==fO)) goto L_0045191c;
L_004518de:; BB(0x004518de);
    /* 004518de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004518e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004518e4: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 004518e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004518ea: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004518ed: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4518f2u); f_0044f680();
    /* 004518f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004518f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004518f6: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x4518fbu); f_0044f700();
    /* 004518fb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004518fe: jne 0x45191a */ if (!fZ) goto L_0045191a;
L_00451900:; BB(0x00451900);
    /* 00451900: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00451903: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451906: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451908: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045190b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045190e: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00451911: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00451913: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451915: jmp 0x451c10 */ goto L_00451c10;
L_0045191a:; BB(0x0045191a);
    /* 0045191a: jmp 0x4518cf */ goto L_004518cf;
L_0045191c:; BB(0x0045191c);
    /* 0045191c: jmp 0x4519ae */ goto L_004519ae;
L_00451921:; BB(0x00451921);
    /* 00451921: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451924: movzx edx, byte ptr [ecx + 0x2be] */ r_edx = (u32)R8((u32)(r_ecx+0x2beu));
    /* 0045192b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045192d: je 0x45195a */ if (fZ) goto L_0045195a;
L_0045192f:; BB(0x0045192f);
    /* 0045192f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451932: cmp dword ptr [eax + 0x2f4], 5 */ {  u32 a = R32((u32)(r_eax+0x2f4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451939: jne 0x45195a */ if (!fZ) goto L_0045195a;
L_0045193b:; BB(0x0045193b);
    /* 0045193b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045193e: cmp dword ptr [ecx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451945: je 0x451953 */ if (fZ) goto L_00451953;
L_00451947:; BB(0x00451947);
    /* 00451947: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045194a: cmp dword ptr [edx + 0x2e8], 0xe */ {  u32 a = R32((u32)(r_edx+0x2e8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451951: jne 0x45195a */ if (!fZ) goto L_0045195a;
L_00451953:; BB(0x00451953);
    /* 00451953: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00451955: jmp 0x451c10 */ goto L_00451c10;
L_0045195a:; BB(0x0045195a);
    /* 0045195a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451961: jmp 0x45196c */ goto L_0045196c;
L_00451963:; BB(0x00451963);
    /* 00451963: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451966: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451969: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045196c:; BB(0x0045196c);
    /* 0045196c: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451970: jge 0x4519ae */ if ((fS==fO)) goto L_004519ae;
L_00451972:; BB(0x00451972);
    /* 00451972: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451975: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451978: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0045197d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045197e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451981: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451986u); f_0044f6c0();
    /* 00451986: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451989: je 0x4519ac */ if (fZ) goto L_004519ac;
L_0045198b:; BB(0x0045198b);
    /* 0045198b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045198e: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451991: jne 0x45199d */ if (!fZ) goto L_0045199d;
L_00451993:; BB(0x00451993);
    /* 00451993: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00451996: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451999: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0045199b: jmp 0x4519ac */ goto L_004519ac;
L_0045199d:; BB(0x0045199d);
    /* 0045199d: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 004519a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004519a3: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004519a5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004519a7: jmp 0x451c10 */ goto L_00451c10;
L_004519ac:; BB(0x004519ac);
    /* 004519ac: jmp 0x451963 */ goto L_00451963;
L_004519ae:; BB(0x004519ae);
    /* 004519ae: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004519b0: jmp 0x451c10 */ goto L_00451c10;
L_004519b5:; BB(0x004519b5);
    /* 004519b5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004519b8: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 004519bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004519c1: jne 0x451a62 */ if (!fZ) goto L_00451a62;
L_004519c7:; BB(0x004519c7);
    /* 004519c7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004519ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004519cd: cmp eax, dword ptr [edx + 0x2e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004519d3: jg 0x4519e3 */ if ((!fZ&&fS==fO)) goto L_004519e3;
L_004519d5:; BB(0x004519d5);
    /* 004519d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004519d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004519db: cmp edx, dword ptr [ecx + 0x2d8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004519e1: jge 0x451a0c */ if ((fS==fO)) goto L_00451a0c;
L_004519e3:; BB(0x004519e3);
    /* 004519e3: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004519e7: jne 0x4519f5 */ if (!fZ) goto L_004519f5;
L_004519e9:; BB(0x004519e9);
    /* 004519e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004519ec: cmp dword ptr [eax + 0x2d8], 1 */ {  u32 a = R32((u32)(r_eax+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004519f3: je 0x451a0c */ if (fZ) goto L_00451a0c;
L_004519f5:; BB(0x004519f5);
    /* 004519f5: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004519f8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004519fb: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004519fd: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00451a00: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00451a03: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451a05: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451a07: jmp 0x451c10 */ goto L_00451c10;
L_00451a0c:; BB(0x00451a0c);
    /* 00451a0c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451a0f: cmp dword ptr [edx + 0x2f4], 6 */ {  u32 a = R32((u32)(r_edx+0x2f4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451a16: jne 0x451a5d */ if (!fZ) goto L_00451a5d;
L_00451a18:; BB(0x00451a18);
    /* 00451a18: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451a1b: cmp dword ptr [eax + 0x2d8], 1 */ {  u32 a = R32((u32)(r_eax+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451a22: jne 0x451a2a */ if (!fZ) goto L_00451a2a;
L_00451a24:; BB(0x00451a24);
    /* 00451a24: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451a28: je 0x451a46 */ if (fZ) goto L_00451a46;
L_00451a2a:; BB(0x00451a2a);
    /* 00451a2a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451a2d: mov edx, dword ptr [ecx + 0x2d8] */ r_edx = R32((u32)(r_ecx+0x2d8u));
    /* 00451a33: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451a36: je 0x451a46 */ if (fZ) goto L_00451a46;
L_00451a38:; BB(0x00451a38);
    /* 00451a38: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451a3b: mov ecx, dword ptr [eax + 0x2ec] */ r_ecx = R32((u32)(r_eax+0x2ecu));
    /* 00451a41: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451a44: jne 0x451a5d */ if (!fZ) goto L_00451a5d;
L_00451a46:; BB(0x00451a46);
    /* 00451a46: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00451a49: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451a4c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451a4e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00451a51: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00451a54: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451a56: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451a58: jmp 0x451c10 */ goto L_00451c10;
L_00451a5d:; BB(0x00451a5d);
    /* 00451a5d: jmp 0x451c0e */ goto L_00451c0e;
L_00451a62:; BB(0x00451a62);
    /* 00451a62: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451a65: cmp dword ptr [eax + 0x2f4], 5 */ {  u32 a = R32((u32)(r_eax+0x2f4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451a6c: jne 0x451aa7 */ if (!fZ) goto L_00451aa7;
L_00451a6e:; BB(0x00451a6e);
    /* 00451a6e: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451a72: je 0x451aa7 */ if (fZ) goto L_00451aa7;
L_00451a74:; BB(0x00451a74);
    /* 00451a74: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451a77: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00451a7a: cmp edx, dword ptr [ecx + 0x2e8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451a80: jg 0x451a90 */ if ((!fZ&&fS==fO)) goto L_00451a90;
L_00451a82:; BB(0x00451a82);
    /* 00451a82: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451a85: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00451a88: cmp ecx, dword ptr [eax + 0x2d8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451a8e: jge 0x451aa7 */ if ((fS==fO)) goto L_00451aa7;
L_00451a90:; BB(0x00451a90);
    /* 00451a90: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00451a93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451a96: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451a98: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00451a9b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00451a9e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451aa0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451aa2: jmp 0x451c10 */ goto L_00451c10;
L_00451aa7:; BB(0x00451aa7);
    /* 00451aa7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451aaa: cmp dword ptr [eax + 0x2f4], 6 */ {  u32 a = R32((u32)(r_eax+0x2f4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ab1: jne 0x451ba6 */ if (!fZ) goto L_00451ba6;
L_00451ab7:; BB(0x00451ab7);
    /* 00451ab7: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451abb: jne 0x451b1b */ if (!fZ) goto L_00451b1b;
L_00451abd:; BB(0x00451abd);
    /* 00451abd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451ac0: cmp dword ptr [ecx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ac7: je 0x451ad5 */ if (fZ) goto L_00451ad5;
L_00451ac9:; BB(0x00451ac9);
    /* 00451ac9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451acc: cmp dword ptr [edx + 0x2ec], 0xe */ {  u32 a = R32((u32)(r_edx+0x2ecu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451ad3: jne 0x451adc */ if (!fZ) goto L_00451adc;
L_00451ad5:; BB(0x00451ad5);
    /* 00451ad5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00451ad7: jmp 0x451c10 */ goto L_00451c10;
L_00451adc:; BB(0x00451adc);
    /* 00451adc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451adf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451ae2: mov edx, dword ptr [eax + 0x2d8] */ r_edx = R32((u32)(r_eax+0x2d8u));
    /* 00451ae8: cmp edx, dword ptr [ecx + 0x2fc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451aee: je 0x451b04 */ if (fZ) goto L_00451b04;
L_00451af0:; BB(0x00451af0);
    /* 00451af0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451af3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451af6: mov edx, dword ptr [eax + 0x2ec] */ r_edx = R32((u32)(r_eax+0x2ecu));
    /* 00451afc: cmp edx, dword ptr [ecx + 0x2fc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451b02: jne 0x451b1b */ if (!fZ) goto L_00451b1b;
L_00451b04:; BB(0x00451b04);
    /* 00451b04: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00451b07: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451b0a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451b0c: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00451b0f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00451b12: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451b14: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451b16: jmp 0x451c10 */ goto L_00451c10;
L_00451b1b:; BB(0x00451b1b);
    /* 00451b1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451b1e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00451b21: cmp edx, dword ptr [ecx + 0x2d8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451b27: je 0x451b37 */ if (fZ) goto L_00451b37;
L_00451b29:; BB(0x00451b29);
    /* 00451b29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451b2c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00451b2f: cmp ecx, dword ptr [eax + 0x2ec] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451b35: jne 0x451b4e */ if (!fZ) goto L_00451b4e;
L_00451b37:; BB(0x00451b37);
    /* 00451b37: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00451b3a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451b3d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451b3f: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00451b42: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00451b45: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451b47: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451b49: jmp 0x451c10 */ goto L_00451c10;
L_00451b4e:; BB(0x00451b4e);
    /* 00451b4e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451b51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451b54: mov edx, dword ptr [eax + 0x2d8] */ r_edx = R32((u32)(r_eax+0x2d8u));
    /* 00451b5a: cmp edx, dword ptr [ecx + 0x2fc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451b60: je 0x451b76 */ if (fZ) goto L_00451b76;
L_00451b62:; BB(0x00451b62);
    /* 00451b62: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451b65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451b68: mov edx, dword ptr [eax + 0x2ec] */ r_edx = R32((u32)(r_eax+0x2ecu));
    /* 00451b6e: cmp edx, dword ptr [ecx + 0x2fc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x2fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451b74: jne 0x451ba6 */ if (!fZ) goto L_00451ba6;
L_00451b76:; BB(0x00451b76);
    /* 00451b76: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451b79: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00451b7c: cmp ecx, dword ptr [eax + 0x2d8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451b82: jle 0x451ba6 */ if ((fZ||fS!=fO)) goto L_00451ba6;
L_00451b84:; BB(0x00451b84);
    /* 00451b84: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451b87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451b8a: cmp eax, dword ptr [edx + 0x2ec] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451b90: jge 0x451ba6 */ if ((fS==fO)) goto L_00451ba6;
L_00451b92:; BB(0x00451b92);
    /* 00451b92: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00451b95: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00451b98: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451b9a: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00451b9d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00451ba0: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451ba2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451ba4: jmp 0x451c10 */ goto L_00451c10;
L_00451ba6:; BB(0x00451ba6);
    /* 00451ba6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451ba9: cmp dword ptr [edx + 0x2f4], 7 */ {  u32 a = R32((u32)(r_edx+0x2f4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451bb0: jne 0x451c0e */ if (!fZ) goto L_00451c0e;
L_00451bb2:; BB(0x00451bb2);
    /* 00451bb2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451bb5: cmp dword ptr [eax + 0x2d8], 1 */ {  u32 a = R32((u32)(r_eax+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451bbc: jne 0x451bd6 */ if (!fZ) goto L_00451bd6;
L_00451bbe:; BB(0x00451bbe);
    /* 00451bbe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451bc1: cmp dword ptr [ecx + 0x2fc], 7 */ {  u32 a = R32((u32)(r_ecx+0x2fcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451bc8: je 0x451bfa */ if (fZ) goto L_00451bfa;
L_00451bca:; BB(0x00451bca);
    /* 00451bca: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451bcd: cmp dword ptr [edx + 0x2fc], 2 */ {  u32 a = R32((u32)(r_edx+0x2fcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451bd4: je 0x451bfa */ if (fZ) goto L_00451bfa;
L_00451bd6:; BB(0x00451bd6);
    /* 00451bd6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451bd9: cmp dword ptr [eax + 0x2f0], 0xe */ {  u32 a = R32((u32)(r_eax+0x2f0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451be0: jne 0x451c0e */ if (!fZ) goto L_00451c0e;
L_00451be2:; BB(0x00451be2);
    /* 00451be2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451be5: cmp dword ptr [ecx + 0x2fc], 8 */ {  u32 a = R32((u32)(r_ecx+0x2fcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451bec: je 0x451bfa */ if (fZ) goto L_00451bfa;
L_00451bee:; BB(0x00451bee);
    /* 00451bee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451bf1: cmp dword ptr [edx + 0x2fc], 0xd */ {  u32 a = R32((u32)(r_edx+0x2fcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451bf8: jne 0x451c0e */ if (!fZ) goto L_00451c0e;
L_00451bfa:; BB(0x00451bfa);
    /* 00451bfa: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00451bfd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451c00: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451c02: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00451c05: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00451c08: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451c0a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451c0c: jmp 0x451c10 */ goto L_00451c10;
L_00451c0e:; BB(0x00451c0e);
    /* 00451c0e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00451c10:; BB(0x00451c10);
    /* 00451c10: mov esp, ebp */ r_esp = r_ebp;
    /* 00451c12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451c13: ret 0x14 */ FN_RET(0x00451870); r_esp += 24; return;
}

void f_00451c20(void) /* sub_451C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451c20);
    /* 00451c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00451c23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451c26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00451c29: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451c2c: movzx ecx, byte ptr [eax + 0x2ce] */ r_ecx = (u32)R8((u32)(r_eax+0x2ceu));
    /* 00451c33: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451c35: je 0x451c45 */ if (fZ) goto L_00451c45;
L_00451c37:; BB(0x00451c37);
    /* 00451c37: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451c3a: movzx eax, byte ptr [edx + 0x2c2] */ r_eax = (u32)R8((u32)(r_edx+0x2c2u));
    /* 00451c41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451c43: jne 0x451c4c */ if (!fZ) goto L_00451c4c;
L_00451c45:; BB(0x00451c45);
    /* 00451c45: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00451c47: jmp 0x451f5a */ goto L_00451f5a;
L_00451c4c:; BB(0x00451c4c);
    /* 00451c4c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00451c4f: mov dword ptr [ecx], 0xffffffff */ W32((u32)(r_ecx), 0xffffffffu);
    /* 00451c55: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00451c58: mov dword ptr [edx], 0xffffffff */ W32((u32)(r_edx), 0xffffffffu);
    /* 00451c5e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451c61: cmp dword ptr [eax + 0x2d4], 6 */ {  u32 a = R32((u32)(r_eax+0x2d4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451c68: jne 0x451c81 */ if (!fZ) goto L_00451c81;
L_00451c6a:; BB(0x00451c6a);
    /* 00451c6a: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00451c6d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00451c70: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451c72: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00451c75: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00451c78: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451c7a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451c7c: jmp 0x451f5a */ goto L_00451f5a;
L_00451c81:; BB(0x00451c81);
    /* 00451c81: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451c84: movzx eax, byte ptr [edx + 0x2ca] */ r_eax = (u32)R8((u32)(r_edx+0x2cau));
    /* 00451c8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451c8d: je 0x451e2c */ if (fZ) goto L_00451e2c;
L_00451c93:; BB(0x00451c93);
    /* 00451c93: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451c97: je 0x451d5f */ if (fZ) goto L_00451d5f;
L_00451c9d:; BB(0x00451c9d);
    /* 00451c9d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451ca4: jmp 0x451caf */ goto L_00451caf;
L_00451ca6:; BB(0x00451ca6);
    /* 00451ca6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451ca9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00451cac: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00451caf:; BB(0x00451caf);
    /* 00451caf: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451cb3: jge 0x451d5a */ if ((fS==fO)) goto L_00451d5a;
L_00451cb9:; BB(0x00451cb9);
    /* 00451cb9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451cbc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451cbf: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451cc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451cc5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451cc8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451ccdu); f_0044f680();
    /* 00451ccd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451cce: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451cd1: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x451cd6u); f_0044f700();
    /* 00451cd6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451cd9: jne 0x451d55 */ if (!fZ) goto L_00451d55;
L_00451cdb:; BB(0x00451cdb);
    /* 00451cdb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451cde: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451ce1: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451ce6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451ce7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451cea: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451cefu); f_0044f6c0();
    /* 00451cef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451cf2: cmp eax, dword ptr [edx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451cf8: jne 0x451d05 */ if (!fZ) goto L_00451d05;
L_00451cfa:; BB(0x00451cfa);
    /* 00451cfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451cfd: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451d00: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00451d03: jmp 0x451d0b */ goto L_00451d0b;
L_00451d05:; BB(0x00451d05);
    /* 00451d05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451d08: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00451d0b:; BB(0x00451d0b);
    /* 00451d0b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00451d0e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451d11: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451d13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451d16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d19: mov ax, word ptr [edx + ecx*2 + 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x6u))) & 0xffffu);
    /* 00451d1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451d1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d22: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451d27u); f_0044f6c0();
    /* 00451d27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d2a: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451d30: jne 0x451d3d */ if (!fZ) goto L_00451d3d;
L_00451d32:; BB(0x00451d32);
    /* 00451d32: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451d35: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00451d38: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00451d3b: jmp 0x451d46 */ goto L_00451d46;
L_00451d3d:; BB(0x00451d3d);
    /* 00451d3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451d40: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451d43: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00451d46:; BB(0x00451d46);
    /* 00451d46: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00451d49: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00451d4c: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451d4e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451d50: jmp 0x451f5a */ goto L_00451f5a;
L_00451d55:; BB(0x00451d55);
    /* 00451d55: jmp 0x451ca6 */ goto L_00451ca6;
L_00451d5a:; BB(0x00451d5a);
    /* 00451d5a: jmp 0x451e25 */ goto L_00451e25;
L_00451d5f:; BB(0x00451d5f);
    /* 00451d5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d62: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 00451d69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451d6b: je 0x451dd1 */ if (fZ) goto L_00451dd1;
L_00451d6d:; BB(0x00451d6d);
    /* 00451d6d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d70: cmp dword ptr [edx + 0x2d4], 4 */ {  u32 a = R32((u32)(r_edx+0x2d4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451d77: jne 0x451dd1 */ if (!fZ) goto L_00451dd1;
L_00451d79:; BB(0x00451d79);
    /* 00451d79: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d7c: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 00451d80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451d81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d84: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451d89u); f_0044f6c0();
    /* 00451d89: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d8c: cmp eax, dword ptr [edx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451d92: je 0x451dca */ if (fZ) goto L_00451dca;
L_00451d94:; BB(0x00451d94);
    /* 00451d94: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d97: mov cx, word ptr [eax + 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x6u))) & 0xffffu);
    /* 00451d9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451d9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451d9f: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451da4u); f_0044f6c0();
    /* 00451da4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451da7: cmp eax, dword ptr [edx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451dad: je 0x451dca */ if (fZ) goto L_00451dca;
L_00451daf:; BB(0x00451daf);
    /* 00451daf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451db2: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 00451db6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451db7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451dba: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451dbfu); f_0044f6c0();
    /* 00451dbf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451dc2: cmp eax, dword ptr [edx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451dc8: jne 0x451dd1 */ if (!fZ) goto L_00451dd1;
L_00451dca:; BB(0x00451dca);
    /* 00451dca: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00451dcc: jmp 0x451f5a */ goto L_00451f5a;
L_00451dd1:; BB(0x00451dd1);
    /* 00451dd1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451dd8: jmp 0x451de3 */ goto L_00451de3;
L_00451dda:; BB(0x00451dda);
    /* 00451dda: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451ddd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451de0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00451de3:; BB(0x00451de3);
    /* 00451de3: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451de7: jge 0x451e25 */ if ((fS==fO)) goto L_00451e25;
L_00451de9:; BB(0x00451de9);
    /* 00451de9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451dec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451def: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00451df4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451df5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451df8: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451dfdu); f_0044f6c0();
    /* 00451dfd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e00: je 0x451e23 */ if (fZ) goto L_00451e23;
L_00451e02:; BB(0x00451e02);
    /* 00451e02: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00451e05: cmp dword ptr [ecx], -1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e08: jne 0x451e14 */ if (!fZ) goto L_00451e14;
L_00451e0a:; BB(0x00451e0a);
    /* 00451e0a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00451e0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451e10: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451e12: jmp 0x451e23 */ goto L_00451e23;
L_00451e14:; BB(0x00451e14);
    /* 00451e14: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00451e17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451e1a: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451e1c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451e1e: jmp 0x451f5a */ goto L_00451f5a;
L_00451e23:; BB(0x00451e23);
    /* 00451e23: jmp 0x451dda */ goto L_00451dda;
L_00451e25:; BB(0x00451e25);
    /* 00451e25: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00451e27: jmp 0x451f5a */ goto L_00451f5a;
L_00451e2c:; BB(0x00451e2c);
    /* 00451e2c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451e2f: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 00451e36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e38: je 0x451e5c */ if (fZ) goto L_00451e5c;
L_00451e3a:; BB(0x00451e3a);
    /* 00451e3a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451e3d: movzx eax, byte ptr [edx + 0x2be] */ r_eax = (u32)R8((u32)(r_edx+0x2beu));
    /* 00451e44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e46: je 0x451ee8 */ if (fZ) goto L_00451ee8;
L_00451e4c:; BB(0x00451e4c);
    /* 00451e4c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451e4f: cmp dword ptr [ecx + 0x2d4], 4 */ {  u32 a = R32((u32)(r_ecx+0x2d4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e56: jne 0x451ee8 */ if (!fZ) goto L_00451ee8;
L_00451e5c:; BB(0x00451e5c);
    /* 00451e5c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00451e5f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451e62: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451e67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451e68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451e6b: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451e70u); f_0044f6c0();
    /* 00451e70: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451e73: cmp eax, dword ptr [edx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e79: je 0x451ee2 */ if (fZ) goto L_00451ee2;
L_00451e7b:; BB(0x00451e7b);
    /* 00451e7b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451e7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451e81: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00451e86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451e87: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451e8a: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451e8fu); f_0044f6c0();
    /* 00451e8f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451e92: je 0x451ee2 */ if (fZ) goto L_00451ee2;
L_00451e94:; BB(0x00451e94);
    /* 00451e94: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00451e97: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451e9a: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00451e9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451ea0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451ea3: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451ea8u); f_0044f6c0();
    /* 00451ea8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451eab: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451eb1: je 0x451ee2 */ if (fZ) goto L_00451ee2;
L_00451eb3:; BB(0x00451eb3);
    /* 00451eb3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00451eb6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451eb9: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451ebe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451ebf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451ec2: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451ec7u); f_0044f6c0();
    /* 00451ec7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451eca: je 0x451ee2 */ if (fZ) goto L_00451ee2;
L_00451ecc:; BB(0x00451ecc);
    /* 00451ecc: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00451ecf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451ed2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451ed4: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00451ed7: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00451eda: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451edc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451ede: jmp 0x451f5a */ goto L_00451f5a;
L_00451ee2:; BB(0x00451ee2);
    /* 00451ee2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00451ee4: jmp 0x451f5a */ goto L_00451f5a;
L_00451ee8:; BB(0x00451ee8);
    /* 00451ee8: cmp dword ptr [ebp + 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451eec: je 0x451f04 */ if (fZ) goto L_00451f04;
L_00451eee:; BB(0x00451eee);
    /* 00451eee: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00451ef1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451ef4: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451ef6: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00451ef9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00451efc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451efe: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451f00: jmp 0x451f5a */ goto L_00451f5a;
L_00451f04:; BB(0x00451f04);
    /* 00451f04: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451f07: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451f0a: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00451f0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451f10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451f13: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451f18u); f_0044f6c0();
    /* 00451f18: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451f1b: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451f21: je 0x451f58 */ if (fZ) goto L_00451f58;
L_00451f23:; BB(0x00451f23);
    /* 00451f23: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00451f26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451f29: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451f2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451f2f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451f32: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451f37u); f_0044f6c0();
    /* 00451f37: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451f3a: cmp eax, dword ptr [edx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451f40: je 0x451f58 */ if (fZ) goto L_00451f58;
L_00451f42:; BB(0x00451f42);
    /* 00451f42: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00451f45: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451f48: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00451f4a: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00451f4d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00451f50: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451f52: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00451f54: jmp 0x451f5a */ goto L_00451f5a;
L_00451f58:; BB(0x00451f58);
    /* 00451f58: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00451f5a:; BB(0x00451f5a);
    /* 00451f5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00451f5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451f5d: ret 0x14 */ FN_RET(0x00451c20); r_esp += 24; return;
}

void f_00451f60(void) /* sub_451F60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00451f60);
    /* 00451f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00451f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00451f63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00451f66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00451f67: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00451f6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00451f71: jmp 0x451f7c */ goto L_00451f7c;
L_00451f73:; BB(0x00451f73);
    /* 00451f73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451f76: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451f79: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00451f7c:; BB(0x00451f7c);
    /* 00451f7c: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451f80: jge 0x451feb */ if ((fS==fO)) goto L_00451feb;
L_00451f82:; BB(0x00451f82);
    /* 00451f82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451f85: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451f88: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00451f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451f8e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451f91: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451f96u); f_0044f680();
    /* 00451f96: mov esi, eax */ r_esi = r_eax;
    /* 00451f98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451f9b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451f9e: mov ax, word ptr [edx + ecx*2 + 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x6u))) & 0xffffu);
    /* 00451fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451fa4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451fa7: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451facu); f_0044f680();
    /* 00451fac: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451fae: jne 0x451fe9 */ if (!fZ) goto L_00451fe9;
L_00451fb0:; BB(0x00451fb0);
    /* 00451fb0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451fb4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00451fb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451fb8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451fbb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00451fbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451fbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451fc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451fc3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00451fc6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451fc9: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00451fce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451fcf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451fd2: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x451fd7u); f_0044f680();
    /* 00451fd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451fd8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451fdb: call 0x451870 */ r_esp -= 4; W32(r_esp, 0x451fe0u); f_00451870();
    /* 00451fe0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00451fe3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451fe5: je 0x451fe9 */ if (fZ) goto L_00451fe9;
L_00451fe7:; BB(0x00451fe7);
    /* 00451fe7: jmp 0x451ffb */ goto L_00451ffb;
L_00451fe9:; BB(0x00451fe9);
    /* 00451fe9: jmp 0x451f73 */ goto L_00451f73;
L_00451feb:; BB(0x00451feb);
    /* 00451feb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00451fef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00451ff2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00451ff3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451ff6: call 0x4512c0 */ r_esp -= 4; W32(r_esp, 0x451ffbu); f_004512c0();
L_00451ffb:; BB(0x00451ffb);
    /* 00451ffb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00451ffc: mov esp, ebp */ r_esp = r_ebp;
    /* 00451ffe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451fff: ret 8 */ FN_RET(0x00451f60); r_esp += 12; return;
}

