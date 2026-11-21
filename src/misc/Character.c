#include "protos.h"

void f_006454f0(void) /* Character::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006454f0);
    /* 006454f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006454f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006454f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006454f5: push 0x6abdc8 */ { u32 v = 0x6abdc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006454fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645501: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00645502: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00645507: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00645509: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064550a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064550d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00645513: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00645516: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645519: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x64551eu); f_005e9e20();
    /* 0064551e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00645525: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645528: mov dword ptr [eax], 0x6dc60c */ W32((u32)(r_eax), 0x6dc60cu);
    /* 0064552e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645531: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00645538: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064553b: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 00645542: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645545: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 0064554c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064554f: mov byte ptr [ecx + 0x28], 1 */ W8((u32)(r_ecx+0x28u), 0x1u);
    /* 00645553: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645556: mov byte ptr [edx + 0x29], 1 */ W8((u32)(r_edx+0x29u), 0x1u);
    /* 0064555a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064555d: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00645564: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645567: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 0064556e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645571: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
    /* 00645578: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064557b: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 00645582: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645585: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0064558c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064558f: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 00645596: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645599: mov byte ptr [eax + 0x50], 0 */ W8((u32)(r_eax+0x50u), 0x0u);
    /* 0064559d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006455a0: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 006455a6: fstp dword ptr [ecx + 0x54] */ W_F32((u32)(r_ecx+0x54u), ST(0)); FPOP();
    /* 006455a9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006455ac: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 006455b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006455b6: mov byte ptr [eax + 0x51], 0 */ W8((u32)(r_eax+0x51u), 0x0u);
    /* 006455ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006455bd: mov byte ptr [ecx + 0x5c], 0 */ W8((u32)(r_ecx+0x5cu), 0x0u);
    /* 006455c1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006455c4: call 0x648c20 */ r_esp -= 4; W32(r_esp, 0x6455c9u); f_00648c20();
    /* 006455c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006455cc: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 006455d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006455da: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006455dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006455e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006455e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006455e8: mov esp, ebp */ r_esp = r_ebp;
    /* 006455ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006455eb: ret  */ FN_RET(0x006454f0); r_esp += 4; return;
}

void f_006455f0(void) /* Character::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006455f0);
    /* 006455f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006455f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006455f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006455f5: push 0x6abdeb */ { u32 v = 0x6abdebu; r_esp -= 4; W32(r_esp, v); }
    /* 006455fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00645600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00645601: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00645604: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00645609: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064560b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064560c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064560f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00645615: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00645618: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064561b: mov dword ptr [eax], 0x6dc60c */ W32((u32)(r_eax), 0x6dc60cu);
    /* 00645621: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00645628: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064562b: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064562f: je 0x64566a */ if (fZ) goto L_0064566a;
L_00645631:; BB(0x00645631);
    /* 00645631: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645634: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00645637: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064563a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064563d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00645640: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645644: je 0x645659 */ if (fZ) goto L_00645659;
L_00645646:; BB(0x00645646);
    /* 00645646: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645648: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064564b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064564d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00645650: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645652: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645654u); call_ind(t); }
    /* 00645654: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00645657: jmp 0x645660 */ goto L_00645660;
L_00645659:; BB(0x00645659);
    /* 00645659: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00645660:; BB(0x00645660);
    /* 00645660: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645663: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_0064566a:; BB(0x0064566a);
    /* 0064566a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064566d: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645671: je 0x6456ac */ if (fZ) goto L_006456ac;
L_00645673:; BB(0x00645673);
    /* 00645673: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645676: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00645679: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064567c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064567f: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00645682: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645686: je 0x64569b */ if (fZ) goto L_0064569b;
L_00645688:; BB(0x00645688);
    /* 00645688: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064568a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064568d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064568f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00645692: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645694: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x645696u); call_ind(t); }
    /* 00645696: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00645699: jmp 0x6456a2 */ goto L_006456a2;
L_0064569b:; BB(0x0064569b);
    /* 0064569b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_006456a2:; BB(0x006456a2);
    /* 006456a2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006456a5: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
L_006456ac:; BB(0x006456ac);
    /* 006456ac: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006456af: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006456b3: je 0x6456ee */ if (fZ) goto L_006456ee;
L_006456b5:; BB(0x006456b5);
    /* 006456b5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006456b8: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006456bb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006456be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006456c1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006456c4: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006456c8: je 0x6456dd */ if (fZ) goto L_006456dd;
L_006456ca:; BB(0x006456ca);
    /* 006456ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006456cc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006456cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006456d1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006456d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006456d6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6456d8u); call_ind(t); }
    /* 006456d8: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006456db: jmp 0x6456e4 */ goto L_006456e4;
L_006456dd:; BB(0x006456dd);
    /* 006456dd: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006456e4:; BB(0x006456e4);
    /* 006456e4: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006456e7: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
L_006456ee:; BB(0x006456ee);
    /* 006456ee: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006456f1: cmp dword ptr [ecx + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006456f5: je 0x645730 */ if (fZ) goto L_00645730;
L_006456f7:; BB(0x006456f7);
    /* 006456f7: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006456fa: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006456fd: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00645700: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00645703: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00645706: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064570a: je 0x64571f */ if (fZ) goto L_0064571f;
L_0064570c:; BB(0x0064570c);
    /* 0064570c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064570e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00645711: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00645713: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00645716: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00645718: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64571au); call_ind(t); }
    /* 0064571a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0064571d: jmp 0x645726 */ goto L_00645726;
L_0064571f:; BB(0x0064571f);
    /* 0064571f: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00645726:; BB(0x00645726);
    /* 00645726: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645729: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
L_00645730:; BB(0x00645730);
    /* 00645730: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645733: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645737: je 0x645772 */ if (fZ) goto L_00645772;
L_00645739:; BB(0x00645739);
    /* 00645739: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064573c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0064573f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00645742: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00645745: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00645748: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064574c: je 0x645761 */ if (fZ) goto L_00645761;
L_0064574e:; BB(0x0064574e);
    /* 0064574e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645750: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00645753: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00645755: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00645758: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064575a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64575cu); call_ind(t); }
    /* 0064575c: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0064575f: jmp 0x645768 */ goto L_00645768;
L_00645761:; BB(0x00645761);
    /* 00645761: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00645768:; BB(0x00645768);
    /* 00645768: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064576b: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_00645772:; BB(0x00645772);
    /* 00645772: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645775: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00645779: je 0x6457b4 */ if (fZ) goto L_006457b4;
L_0064577b:; BB(0x0064577b);
    /* 0064577b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0064577e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00645781: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00645784: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00645787: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0064578a: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064578e: je 0x6457a3 */ if (fZ) goto L_006457a3;
L_00645790:; BB(0x00645790);
    /* 00645790: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00645792: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00645795: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00645797: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0064579a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064579c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64579eu); call_ind(t); }
    /* 0064579e: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006457a1: jmp 0x6457aa */ goto L_006457aa;
L_006457a3:; BB(0x006457a3);
    /* 006457a3: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_006457aa:; BB(0x006457aa);
    /* 006457aa: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006457ad: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_006457b4:; BB(0x006457b4);
    /* 006457b4: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006457b7: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006457bb: je 0x6457f6 */ if (fZ) goto L_006457f6;
L_006457bd:; BB(0x006457bd);
    /* 006457bd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006457c0: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 006457c3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006457c6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006457c9: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 006457cc: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006457d0: je 0x6457e5 */ if (fZ) goto L_006457e5;
L_006457d2:; BB(0x006457d2);
    /* 006457d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006457d4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006457d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006457d9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006457dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006457de: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6457e0u); call_ind(t); }
    /* 006457e0: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006457e3: jmp 0x6457ec */ goto L_006457ec;
L_006457e5:; BB(0x006457e5);
    /* 006457e5: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_006457ec:; BB(0x006457ec);
    /* 006457ec: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006457ef: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_006457f6:; BB(0x006457f6);
    /* 006457f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006457fd: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00645800: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x645805u); f_005e9e40();
    /* 00645805: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00645808: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064580f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00645810: mov esp, ebp */ r_esp = r_ebp;
    /* 00645812: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00645813: ret  */ FN_RET(0x006455f0); r_esp += 4; return;
}

void f_00646fa0(void) /* character::func_00646fa0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646fa0);
    /* 00646fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00646fa3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646fa6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00646fa9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00646fac: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00646faf: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 00646fb5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00646fb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00646fba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00646fc0: call 0x637730 */ r_esp -= 4; W32(r_esp, 0x646fc5u); f_00637730();
    /* 00646fc5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00646fc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646fca: jne 0x647002 */ if (!fZ) goto L_00647002;
L_00646fcc:; BB(0x00646fcc);
    /* 00646fcc: cmp dword ptr [ebp + 0xc], 0x1770 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1770u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646fd3: je 0x647002 */ if (fZ) goto L_00647002;
L_00646fd5:; BB(0x00646fd5);
    /* 00646fd5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00646fd8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00646fdb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00646fde: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00646fe1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00646fe4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646fe5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00646feb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00646fed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00646ff3: mov edx, dword ptr [eax + 0x3a8] */ r_edx = R32((u32)(r_eax+0x3a8u));
    /* 00646ff9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x646ffbu); call_ind(t); }
    /* 00646ffb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00646ffe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647000: je 0x647074 */ if (fZ) goto L_00647074;
L_00647002:; BB(0x00647002);
    /* 00647002: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647006: je 0x647074 */ if (fZ) goto L_00647074;
L_00647008:; BB(0x00647008);
    /* 00647008: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064700b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064700e: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00647011: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647014: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x647019u); f_0063aac0();
    /* 00647019: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0064701b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064701e: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647022: je 0x647040 */ if (fZ) goto L_00647040;
L_00647024:; BB(0x00647024);
    /* 00647024: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647027: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64702cu); f_0063aac0();
    /* 0064702c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064702e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00647031: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647035: je 0x647040 */ if (fZ) goto L_00647040;
L_00647037:; BB(0x00647037);
    /* 00647037: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0064703e: jmp 0x647047 */ goto L_00647047;
L_00647040:; BB(0x00647040);
    /* 00647040: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00647047:; BB(0x00647047);
    /* 00647047: movzx edx, byte ptr [ebp - 0x28] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0064704b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064704d: je 0x64705e */ if (fZ) goto L_0064705e;
L_0064704f:; BB(0x0064704f);
    /* 0064704f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647052: call 0x648ae0 */ r_esp -= 4; W32(r_esp, 0x647057u); f_00648ae0();
    /* 00647057: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064705a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064705c: je 0x647074 */ if (fZ) goto L_00647074;
L_0064705e:; BB(0x0064705e);
    /* 0064705e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647061: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00647064: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00647066: cmp dword ptr [edx + 0xc], -1 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064706a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0064706d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00647070: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647072: je 0x6470b1 */ if (fZ) goto L_006470b1;
L_00647074:; BB(0x00647074);
    /* 00647074: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647078: jne 0x647095 */ if (!fZ) goto L_00647095;
L_0064707a:; BB(0x0064707a);
    /* 0064707a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0064707c: jne 0x647095 */ if (!fZ) goto L_00647095;
L_0064707e:; BB(0x0064707e);
    /* 0064707e: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00647083: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 00647088: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0064708d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x647092u); f_005e9f20();
    /* 00647092: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00647095:; BB(0x00647095);
    /* 00647095: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647099: je 0x6470ac */ if (fZ) goto L_006470ac;
L_0064709b:; BB(0x0064709b);
    /* 0064709b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0064709e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064709f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006470a2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006470a4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006470a7: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006470aa: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6470acu); call_ind(t); }
L_006470ac:; BB(0x006470ac);
    /* 006470ac: jmp 0x647201 */ goto L_00647201;
L_006470b1:; BB(0x006470b1);
    /* 006470b1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006470b4: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006470b7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006470ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006470bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006470be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006470c1: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x6470c6u); f_006464d0();
    /* 006470c6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006470c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006470cc: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006470cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006470d1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006470d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006470d5: push 0x20534443 */ { u32 v = 0x20534443u; r_esp -= 4; W32(r_esp, v); }
    /* 006470da: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 006470e0: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 006470e3: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x6470e8u); f_00603c50();
    /* 006470e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006470eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006470ee: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x6470f3u); f_0061ed80();
    /* 006470f3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006470f6: cmp dword ptr [ebp - 8], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006470fd: jle 0x647130 */ if ((fZ||fS!=fO)) goto L_00647130;
L_006470ff:; BB(0x006470ff);
    /* 006470ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00647101: jne 0x64711a */ if (!fZ) goto L_0064711a;
L_00647103:; BB(0x00647103);
    /* 00647103: push 0x20a */ { u32 v = 0x20au; r_esp -= 4; W32(r_esp, v); }
    /* 00647108: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 0064710d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00647112: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x647117u); f_005e9f20();
    /* 00647117: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064711a:; BB(0x0064711a);
    /* 0064711a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064711d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064711e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00647123: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00647126: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x64712bu); f_006041d0();
    /* 0064712b: jmp 0x647201 */ goto L_00647201;
L_00647130:; BB(0x00647130);
    /* 00647130: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00647133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647134: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00647137: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00647139: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064713c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0064713f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x647141u); call_ind(t); }
    /* 00647141: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647142: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647145: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00647148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647149: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x64714eu); f_00686fde();
    /* 0064714e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647151: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00647154: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647155: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0064715b: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0064715e: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x647163u); f_006041d0();
    /* 00647163: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647166: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647169: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0064716c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064716f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00647170: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00647172: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00647174: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647177: mov dword ptr [edx + 0x42c], eax */ W32((u32)(r_edx+0x42cu), r_eax);
    /* 0064717d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647180: mov dword ptr [eax + 0x430], 0 */ W32((u32)(r_eax+0x430u), 0x0u);
    /* 0064718a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064718d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00647190: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00647193: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647196: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00647199: mov dword ptr [eax + 0x440], ecx */ W32((u32)(r_eax+0x440u), r_ecx);
    /* 0064719f: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 006471a5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006471a8: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006471ae: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 006471b1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006471b3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006471b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6471b8u); call_ind(t); }
    /* 006471b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006471bb: mov dword ptr [ecx + 0x444], eax */ W32((u32)(r_ecx+0x444u), r_eax);
    /* 006471c1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006471c4: mov al, byte ptr [ebp + 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 006471c7: mov byte ptr [edx + 0x448], al */ W8((u32)(r_edx+0x448u), (u8)r_eax);
    /* 006471cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006471cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006471d2: movzx edx, byte ptr [ecx + 0x51] */ r_edx = (u32)R8((u32)(r_ecx+0x51u));
    /* 006471d6: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 006471d8: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 006471da: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006471dd: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006471e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006471e1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006471e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006471e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006471e9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006471ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6471eeu); call_ind(t); }
    /* 006471ee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006471f1: movzx edx, byte ptr [ecx + 0x51] */ r_edx = (u32)R8((u32)(r_ecx+0x51u));
    /* 006471f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006471f7: je 0x647201 */ if (fZ) goto L_00647201;
L_006471f9:; BB(0x006471f9);
    /* 006471f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006471fc: call 0x5fc3d0 */ r_esp -= 4; W32(r_esp, 0x647201u); f_005fc3d0();
L_00647201:; BB(0x00647201);
    /* 00647201: mov esp, ebp */ r_esp = r_ebp;
    /* 00647203: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647204: ret 0x14 */ FN_RET(0x00646fa0); r_esp += 24; return;
}

void f_00647210(void) /* character::func_00647210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00647210);
    /* 00647210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647211: mov ebp, esp */ r_ebp = r_esp;
    /* 00647213: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647216: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00647219: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064721c: movzx ecx, byte ptr [eax + 0x28] */ r_ecx = (u32)R8((u32)(r_eax+0x28u));
    /* 00647220: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647222: je 0x64723a */ if (fZ) goto L_0064723a;
L_00647224:; BB(0x00647224);
    /* 00647224: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00647227: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064722a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064722c: cmp dword ptr [eax + 0xc], -1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647230: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00647233: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00647236: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647238: je 0x647254 */ if (fZ) goto L_00647254;
L_0064723a:; BB(0x0064723a);
    /* 0064723a: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064723e: je 0x64724f */ if (fZ) goto L_0064724f;
L_00647240:; BB(0x00647240);
    /* 00647240: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00647242: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00647245: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00647247: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0064724a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0064724d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64724fu); call_ind(t); }
L_0064724f:; BB(0x0064724f);
    /* 0064724f: jmp 0x6473e4 */ goto L_006473e4;
L_00647254:; BB(0x00647254);
    /* 00647254: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00647257: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0064725a: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00647260: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00647263: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647267: je 0x6472b0 */ if (fZ) goto L_006472b0;
L_00647269:; BB(0x00647269);
    /* 00647269: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064726c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064726f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00647272: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00647275: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64727au); f_0063aac0();
    /* 0064727a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0064727c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064727f: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647283: je 0x6472a1 */ if (fZ) goto L_006472a1;
L_00647285:; BB(0x00647285);
    /* 00647285: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00647288: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64728du); f_0063aac0();
    /* 0064728d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064728f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00647292: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647296: je 0x6472a1 */ if (fZ) goto L_006472a1;
L_00647298:; BB(0x00647298);
    /* 00647298: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0064729f: jmp 0x6472a8 */ goto L_006472a8;
L_006472a1:; BB(0x006472a1);
    /* 006472a1: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_006472a8:; BB(0x006472a8);
    /* 006472a8: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 006472ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006472ae: je 0x6472e5 */ if (fZ) goto L_006472e5;
L_006472b0:; BB(0x006472b0);
    /* 006472b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006472b2: jne 0x6472cb */ if (!fZ) goto L_006472cb;
L_006472b4:; BB(0x006472b4);
    /* 006472b4: push 0x22d */ { u32 v = 0x22du; r_esp -= 4; W32(r_esp, v); }
    /* 006472b9: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 006472be: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006472c3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6472c8u); f_005e9f20();
    /* 006472c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006472cb:; BB(0x006472cb);
    /* 006472cb: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006472cf: je 0x6472e0 */ if (fZ) goto L_006472e0;
L_006472d1:; BB(0x006472d1);
    /* 006472d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006472d3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006472d6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006472d8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006472db: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006472de: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6472e0u); call_ind(t); }
L_006472e0:; BB(0x006472e0);
    /* 006472e0: jmp 0x6473e4 */ goto L_006473e4;
L_006472e5:; BB(0x006472e5);
    /* 006472e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006472e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006472e9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006472ec: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x6472f1u); f_006464d0();
    /* 006472f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006472f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006472f6: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006472f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006472fa: push 0x20534443 */ { u32 v = 0x20534443u; r_esp -= 4; W32(r_esp, v); }
    /* 006472ff: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00647305: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00647308: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x64730du); f_00603c50();
    /* 0064730d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00647310: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00647313: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x647318u); f_0061ed80();
    /* 00647318: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064731b: cmp dword ptr [ebp - 8], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647322: jle 0x647356 */ if ((fZ||fS!=fO)) goto L_00647356;
L_00647324:; BB(0x00647324);
    /* 00647324: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00647326: jne 0x64733f */ if (!fZ) goto L_0064733f;
L_00647328:; BB(0x00647328);
    /* 00647328: push 0x239 */ { u32 v = 0x239u; r_esp -= 4; W32(r_esp, v); }
    /* 0064732d: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 00647332: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00647337: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64733cu); f_005e9f20();
    /* 0064733c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064733f:; BB(0x0064733f);
    /* 0064733f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00647342: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647343: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00647349: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0064734c: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x647351u); f_006041d0();
    /* 00647351: jmp 0x6473e4 */ goto L_006473e4;
L_00647356:; BB(0x00647356);
    /* 00647356: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00647359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064735a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064735d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064735f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00647362: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00647365: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x647367u); call_ind(t); }
    /* 00647367: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647368: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064736b: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064736e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064736f: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x647374u); f_00686fde();
    /* 00647374: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647377: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064737a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064737b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00647380: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00647383: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x647388u); f_006041d0();
    /* 00647388: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064738b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064738e: mov dword ptr [ecx + 0x434], edx */ W32((u32)(r_ecx+0x434u), r_edx);
    /* 00647394: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00647397: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00647398: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064739a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0064739c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064739f: mov dword ptr [ecx + 0x42c], eax */ W32((u32)(r_ecx+0x42cu), r_eax);
    /* 006473a5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006473a8: mov dword ptr [edx + 0x430], 0 */ W32((u32)(r_edx+0x430u), 0x0u);
    /* 006473b2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006473b5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006473b8: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 006473bb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006473be: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006473c1: mov dword ptr [edx + 0x438], eax */ W32((u32)(r_edx+0x438u), r_eax);
    /* 006473c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006473ca: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 006473cd: mov dword ptr [ecx + 0x43c], edx */ W32((u32)(r_ecx+0x43cu), r_edx);
    /* 006473d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006473d5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006473d7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006473da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006473dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006473df: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006473e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6473e4u); call_ind(t); }
L_006473e4:; BB(0x006473e4);
    /* 006473e4: mov esp, ebp */ r_esp = r_ebp;
    /* 006473e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006473e7: ret 0x14 */ FN_RET(0x00647210); r_esp += 24; return;
}

void f_006473f0(void) /* character::func_006473f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006473f0);
    /* 006473f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006473f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006473f3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006473f6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006473f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006473fc: movzx ecx, byte ptr [eax + 0x29] */ r_ecx = (u32)R8((u32)(r_eax+0x29u));
    /* 00647400: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647402: je 0x64741a */ if (fZ) goto L_0064741a;
L_00647404:; BB(0x00647404);
    /* 00647404: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647407: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064740a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064740c: cmp dword ptr [eax + 0xc], -1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647410: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00647413: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00647416: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647418: je 0x647434 */ if (fZ) goto L_00647434;
L_0064741a:; BB(0x0064741a);
    /* 0064741a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064741e: je 0x64742f */ if (fZ) goto L_0064742f;
L_00647420:; BB(0x00647420);
    /* 00647420: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00647422: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00647425: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00647427: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064742a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0064742d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64742fu); call_ind(t); }
L_0064742f:; BB(0x0064742f);
    /* 0064742f: jmp 0x6475b7 */ goto L_006475b7;
L_00647434:; BB(0x00647434);
    /* 00647434: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647437: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0064743a: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00647440: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00647443: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647447: je 0x647490 */ if (fZ) goto L_00647490;
L_00647449:; BB(0x00647449);
    /* 00647449: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064744c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064744f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00647452: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00647455: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64745au); f_0063aac0();
    /* 0064745a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0064745c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064745f: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647463: je 0x647481 */ if (fZ) goto L_00647481;
L_00647465:; BB(0x00647465);
    /* 00647465: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00647468: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64746du); f_0063aac0();
    /* 0064746d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064746f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00647472: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647476: je 0x647481 */ if (fZ) goto L_00647481;
L_00647478:; BB(0x00647478);
    /* 00647478: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064747f: jmp 0x647488 */ goto L_00647488;
L_00647481:; BB(0x00647481);
    /* 00647481: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
L_00647488:; BB(0x00647488);
    /* 00647488: movzx edx, byte ptr [ebp - 0x24] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 0064748c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064748e: je 0x6474c5 */ if (fZ) goto L_006474c5;
L_00647490:; BB(0x00647490);
    /* 00647490: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00647492: jne 0x6474ab */ if (!fZ) goto L_006474ab;
L_00647494:; BB(0x00647494);
    /* 00647494: push 0x267 */ { u32 v = 0x267u; r_esp -= 4; W32(r_esp, v); }
    /* 00647499: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 0064749e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006474a3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6474a8u); f_005e9f20();
    /* 006474a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006474ab:; BB(0x006474ab);
    /* 006474ab: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006474af: je 0x6474c0 */ if (fZ) goto L_006474c0;
L_006474b1:; BB(0x006474b1);
    /* 006474b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006474b3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006474b6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006474b8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006474bb: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006474be: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6474c0u); call_ind(t); }
L_006474c0:; BB(0x006474c0);
    /* 006474c0: jmp 0x6475b7 */ goto L_006475b7;
L_006474c5:; BB(0x006474c5);
    /* 006474c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006474c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006474c9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006474cc: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x6474d1u); f_006464d0();
    /* 006474d1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006474d4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006474d7: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006474da: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006474dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006474df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006474e1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006474e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006474e5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006474eb: call 0x639610 */ r_esp -= 4; W32(r_esp, 0x6474f0u); f_00639610();
    /* 006474f0: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006474f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006474f4: push 0x20534443 */ { u32 v = 0x20534443u; r_esp -= 4; W32(r_esp, v); }
    /* 006474f9: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006474ff: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00647502: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x647507u); f_00603c50();
    /* 00647507: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064750a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064750d: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x647512u); f_0061ed80();
    /* 00647512: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00647515: cmp dword ptr [ebp - 8], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064751c: jle 0x64754d */ if ((fZ||fS!=fO)) goto L_0064754d;
L_0064751e:; BB(0x0064751e);
    /* 0064751e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00647520: jne 0x647539 */ if (!fZ) goto L_00647539;
L_00647522:; BB(0x00647522);
    /* 00647522: push 0x273 */ { u32 v = 0x273u; r_esp -= 4; W32(r_esp, v); }
    /* 00647527: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 0064752c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00647531: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x647536u); f_005e9f20();
    /* 00647536: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00647539:; BB(0x00647539);
    /* 00647539: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064753c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064753d: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00647543: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00647546: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x64754bu); f_006041d0();
    /* 0064754b: jmp 0x6475b7 */ goto L_006475b7;
L_0064754d:; BB(0x0064754d);
    /* 0064754d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00647550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647551: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00647554: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00647556: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00647559: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064755c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64755eu); call_ind(t); }
    /* 0064755e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064755f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647562: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647565: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647566: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x64756bu); f_00686fde();
    /* 0064756b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064756e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00647571: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00647572: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00647577: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0064757a: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x64757fu); f_006041d0();
    /* 0064757f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00647582: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00647583: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00647585: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00647587: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064758a: mov dword ptr [ecx + 0x42c], eax */ W32((u32)(r_ecx+0x42cu), r_eax);
    /* 00647590: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647593: mov dword ptr [edx + 0x430], 0 */ W32((u32)(r_edx+0x430u), 0x0u);
    /* 0064759d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006475a0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006475a3: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 006475a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006475a8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006475aa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006475ad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006475af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006475b2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006475b5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6475b7u); call_ind(t); }
L_006475b7:; BB(0x006475b7);
    /* 006475b7: mov esp, ebp */ r_esp = r_ebp;
    /* 006475b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006475ba: ret 8 */ FN_RET(0x006473f0); r_esp += 12; return;
}

void f_006475c0(void) /* character::func_006475c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006475c0);
    /* 006475c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006475c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006475c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006475c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006475c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006475cc: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006475cf: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 006475d5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006475d8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006475db: movzx ecx, byte ptr [eax + 0x29] */ r_ecx = (u32)R8((u32)(r_eax+0x29u));
    /* 006475df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006475e1: je 0x6475e9 */ if (fZ) goto L_006475e9;
L_006475e3:; BB(0x006475e3);
    /* 006475e3: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006475e7: jne 0x647603 */ if (!fZ) goto L_00647603;
L_006475e9:; BB(0x006475e9);
    /* 006475e9: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006475ed: je 0x6475fe */ if (fZ) goto L_006475fe;
L_006475ef:; BB(0x006475ef);
    /* 006475ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006475f1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006475f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006475f6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006475f9: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006475fc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6475feu); call_ind(t); }
L_006475fe:; BB(0x006475fe);
    /* 006475fe: jmp 0x6476e9 */ goto L_006476e9;
L_00647603:; BB(0x00647603);
    /* 00647603: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00647605: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00647607: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064760a: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x64760fu); f_006464d0();
    /* 0064760f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00647611: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00647613: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00647616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647617: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064761d: call 0x639610 */ r_esp -= 4; W32(r_esp, 0x647622u); f_00639610();
    /* 00647622: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00647625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647626: push 0x20534443 */ { u32 v = 0x20534443u; r_esp -= 4; W32(r_esp, v); }
    /* 0064762b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00647631: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00647634: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x647639u); f_00603c50();
    /* 00647639: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064763c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064763f: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x647644u); f_0061ed80();
    /* 00647644: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00647647: cmp dword ptr [ebp - 8], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064764e: jle 0x64767f */ if ((fZ||fS!=fO)) goto L_0064767f;
L_00647650:; BB(0x00647650);
    /* 00647650: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00647652: jne 0x64766b */ if (!fZ) goto L_0064766b;
L_00647654:; BB(0x00647654);
    /* 00647654: push 0x294 */ { u32 v = 0x294u; r_esp -= 4; W32(r_esp, v); }
    /* 00647659: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 0064765e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00647663: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x647668u); f_005e9f20();
    /* 00647668: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064766b:; BB(0x0064766b);
    /* 0064766b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064766e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064766f: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00647675: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00647678: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x64767du); f_006041d0();
    /* 0064767d: jmp 0x6476e9 */ goto L_006476e9;
L_0064767f:; BB(0x0064767f);
    /* 0064767f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00647682: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647683: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00647686: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00647688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064768b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064768e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x647690u); call_ind(t); }
    /* 00647690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647691: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647694: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647697: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647698: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x64769du); f_00686fde();
    /* 0064769d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006476a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006476a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006476a4: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 006476a9: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006476ac: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x6476b1u); f_006041d0();
    /* 006476b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006476b4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006476b5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006476b7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006476b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006476bc: mov dword ptr [ecx + 0x42c], eax */ W32((u32)(r_ecx+0x42cu), r_eax);
    /* 006476c2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006476c5: mov dword ptr [edx + 0x430], 0 */ W32((u32)(r_edx+0x430u), 0x0u);
    /* 006476cf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006476d2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006476d5: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 006476d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006476da: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006476dc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006476df: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006476e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006476e4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006476e7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6476e9u); call_ind(t); }
L_006476e9:; BB(0x006476e9);
    /* 006476e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006476eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006476ec: ret 0xc */ FN_RET(0x006475c0); r_esp += 16; return;
}

void f_006476f0(void) /* character::func_006476f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006476f0);
    /* 006476f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006476f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006476f3: sub esp, 0x18c */ {  u32 a = r_esp; u32 b = 0x18cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006476f9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006476fe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00647700: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00647703: mov dword ptr [ebp - 0x170], ecx */ W32((u32)(r_ebp+0xfffffe90u), r_ecx);
    /* 00647709: mov byte ptr [ebp - 0x135], 0 */ W8((u32)(r_ebp+0xfffffecbu), 0x0u);
    /* 00647710: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00647717: push 0x6dc7d4 */ { u32 v = 0x6dc7d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064771c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x647721u); f_0062fde0();
    /* 00647721: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647724: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00647726: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064772c: call 0x637730 */ r_esp -= 4; W32(r_esp, 0x647731u); f_00637730();
    /* 00647731: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00647734: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647736: jne 0x647744 */ if (!fZ) goto L_00647744;
L_00647738:; BB(0x00647738);
    /* 00647738: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064773b: cmp dword ptr [ecx + 4], 0x1770 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x1770u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647742: jne 0x647761 */ if (!fZ) goto L_00647761;
L_00647744:; BB(0x00647744);
    /* 00647744: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 0064774a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064774c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00647752: mov edx, dword ptr [eax + 0x1f8] */ r_edx = R32((u32)(r_eax+0x1f8u));
    /* 00647758: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64775au); call_ind(t); }
    /* 0064775a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064775d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064775f: je 0x64778a */ if (fZ) goto L_0064778a;
L_00647761:; BB(0x00647761);
    /* 00647761: push 0x6bedd8 */ { u32 v = 0x6bedd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00647766: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x64776bu); f_0062fde0();
    /* 0064776b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064776e: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647772: je 0x647785 */ if (fZ) goto L_00647785;
L_00647774:; BB(0x00647774);
    /* 00647774: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00647777: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647778: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064777b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064777d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00647780: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00647783: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x647785u); call_ind(t); }
L_00647785:; BB(0x00647785);
    /* 00647785: jmp 0x647f48 */ goto L_00647f48;
L_0064778a:; BB(0x0064778a);
    /* 0064778a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064778d: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647791: jl 0x6477ed */ if ((fS!=fO)) goto L_006477ed;
L_00647793:; BB(0x00647793);
    /* 00647793: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647796: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00647799: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064779a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006477a0: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006477a3: call 0x666d90 */ r_esp -= 4; W32(r_esp, 0x6477a8u); f_00666d90();
    /* 006477a8: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 006477ae: cmp dword ptr [ebp - 0x134], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006477b5: je 0x6477d0 */ if (fZ) goto L_006477d0;
L_006477b7:; BB(0x006477b7);
    /* 006477b7: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 006477bd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006477c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006477c1: push 0x6dc7bc */ { u32 v = 0x6dc7bcu; r_esp -= 4; W32(r_esp, v); }
    /* 006477c6: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6477cbu); f_0062fde0();
    /* 006477cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006477ce: jmp 0x6477eb */ goto L_006477eb;
L_006477d0:; BB(0x006477d0);
    /* 006477d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006477d2: jne 0x6477eb */ if (!fZ) goto L_006477eb;
L_006477d4:; BB(0x006477d4);
    /* 006477d4: push 0x2be */ { u32 v = 0x2beu; r_esp -= 4; W32(r_esp, v); }
    /* 006477d9: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 006477de: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006477e3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6477e8u); f_005e9f20();
    /* 006477e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006477eb:; BB(0x006477eb);
    /* 006477eb: jmp 0x6477fa */ goto L_006477fa;
L_006477ed:; BB(0x006477ed);
    /* 006477ed: push 0x6dc79c */ { u32 v = 0x6dc79cu; r_esp -= 4; W32(r_esp, v); }
    /* 006477f2: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6477f7u); f_0062fde0();
    /* 006477f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006477fa:; BB(0x006477fa);
    /* 006477fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006477fd: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647801: jl 0x64785d */ if ((fS!=fO)) goto L_0064785d;
L_00647803:; BB(0x00647803);
    /* 00647803: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647806: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00647809: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064780a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00647810: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647813: call 0x666d90 */ r_esp -= 4; W32(r_esp, 0x647818u); f_00666d90();
    /* 00647818: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 0064781e: cmp dword ptr [ebp - 0x134], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647825: je 0x647840 */ if (fZ) goto L_00647840;
L_00647827:; BB(0x00647827);
    /* 00647827: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 0064782d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00647830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647831: push 0x6dc788 */ { u32 v = 0x6dc788u; r_esp -= 4; W32(r_esp, v); }
    /* 00647836: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x64783bu); f_0062fde0();
    /* 0064783b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064783e: jmp 0x64785b */ goto L_0064785b;
L_00647840:; BB(0x00647840);
    /* 00647840: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00647842: jne 0x64785b */ if (!fZ) goto L_0064785b;
L_00647844:; BB(0x00647844);
    /* 00647844: push 0x2c8 */ { u32 v = 0x2c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00647849: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 0064784e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00647853: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x647858u); f_005e9f20();
    /* 00647858: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064785b:; BB(0x0064785b);
    /* 0064785b: jmp 0x64786a */ goto L_0064786a;
L_0064785d:; BB(0x0064785d);
    /* 0064785d: push 0x6dc76c */ { u32 v = 0x6dc76cu; r_esp -= 4; W32(r_esp, v); }
    /* 00647862: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x647867u); f_0062fde0();
    /* 00647867: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064786a:; BB(0x0064786a);
    /* 0064786a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064786d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064786e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00647874: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00647876: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064787c: mov eax, dword ptr [edx + 0x37c] */ r_eax = R32((u32)(r_edx+0x37cu));
    /* 00647882: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x647884u); call_ind(t); }
    /* 00647884: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00647887: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647889: je 0x647892 */ if (fZ) goto L_00647892;
L_0064788b:; BB(0x0064788b);
    /* 0064788b: mov byte ptr [ebp - 0x135], 1 */ W8((u32)(r_ebp+0xfffffecbu), 0x1u);
L_00647892:; BB(0x00647892);
    /* 00647892: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00647895: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00647896: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064789b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064789d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006478a3: mov eax, dword ptr [edx + 0x380] */ r_eax = R32((u32)(r_edx+0x380u));
    /* 006478a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6478abu); call_ind(t); }
    /* 006478ab: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006478ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006478b0: je 0x6478b9 */ if (fZ) goto L_006478b9;
L_006478b2:; BB(0x006478b2);
    /* 006478b2: mov byte ptr [ebp - 0x135], 1 */ W8((u32)(r_ebp+0xfffffecbu), 0x1u);
L_006478b9:; BB(0x006478b9);
    /* 006478b9: movzx edx, byte ptr [ebp - 0x135] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffecbu));
    /* 006478c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006478c2: je 0x6479f3 */ if (fZ) goto L_006479f3;
L_006478c8:; BB(0x006478c8);
    /* 006478c8: push 0x6dc760 */ { u32 v = 0x6dc760u; r_esp -= 4; W32(r_esp, v); }
    /* 006478cd: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6478d2u); f_0062fde0();
    /* 006478d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006478d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006478d8: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006478dc: jl 0x647933 */ if ((fS!=fO)) goto L_00647933;
L_006478de:; BB(0x006478de);
    /* 006478de: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006478e1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006478e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006478e5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006478eb: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006478ee: call 0x666d90 */ r_esp -= 4; W32(r_esp, 0x6478f3u); f_00666d90();
    /* 006478f3: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 006478f9: cmp dword ptr [ebp - 0x134], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647900: je 0x647916 */ if (fZ) goto L_00647916;
L_00647902:; BB(0x00647902);
    /* 00647902: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00647908: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064790b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064790c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x647911u); f_0062fde0();
    /* 00647911: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647914: jmp 0x647931 */ goto L_00647931;
L_00647916:; BB(0x00647916);
    /* 00647916: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00647918: jne 0x647931 */ if (!fZ) goto L_00647931;
L_0064791a:; BB(0x0064791a);
    /* 0064791a: push 0x2da */ { u32 v = 0x2dau; r_esp -= 4; W32(r_esp, v); }
    /* 0064791f: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 00647924: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00647929: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64792eu); f_005e9f20();
    /* 0064792e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00647931:; BB(0x00647931);
    /* 00647931: jmp 0x647940 */ goto L_00647940;
L_00647933:; BB(0x00647933);
    /* 00647933: push 0x6dc750 */ { u32 v = 0x6dc750u; r_esp -= 4; W32(r_esp, v); }
    /* 00647938: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x64793du); f_0062fde0();
    /* 0064793d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00647940:; BB(0x00647940);
    /* 00647940: push 0x6dc74c */ { u32 v = 0x6dc74cu; r_esp -= 4; W32(r_esp, v); }
    /* 00647945: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x64794au); f_0062fde0();
    /* 0064794a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064794d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00647950: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647954: jl 0x6479ab */ if ((fS!=fO)) goto L_006479ab;
L_00647956:; BB(0x00647956);
    /* 00647956: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647959: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0064795c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064795d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00647963: add ecx, 0x5c */ {  u32 a = r_ecx; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00647966: call 0x666d90 */ r_esp -= 4; W32(r_esp, 0x64796bu); f_00666d90();
    /* 0064796b: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 00647971: cmp dword ptr [ebp - 0x134], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647978: je 0x64798e */ if (fZ) goto L_0064798e;
L_0064797a:; BB(0x0064797a);
    /* 0064797a: mov eax, dword ptr [ebp - 0x134] */ r_eax = R32((u32)(r_ebp+0xfffffeccu));
    /* 00647980: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00647983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647984: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x647989u); f_0062fde0();
    /* 00647989: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064798c: jmp 0x6479a9 */ goto L_006479a9;
L_0064798e:; BB(0x0064798e);
    /* 0064798e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00647990: jne 0x6479a9 */ if (!fZ) goto L_006479a9;
L_00647992:; BB(0x00647992);
    /* 00647992: push 0x2e4 */ { u32 v = 0x2e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00647997: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 0064799c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006479a1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6479a6u); f_005e9f20();
    /* 006479a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006479a9:; BB(0x006479a9);
    /* 006479a9: jmp 0x6479b8 */ goto L_006479b8;
L_006479ab:; BB(0x006479ab);
    /* 006479ab: push 0x6dc750 */ { u32 v = 0x6dc750u; r_esp -= 4; W32(r_esp, v); }
    /* 006479b0: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6479b5u); f_0062fde0();
    /* 006479b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006479b8:; BB(0x006479b8);
    /* 006479b8: push 0x6bedd8 */ { u32 v = 0x6bedd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006479bd: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6479c2u); f_0062fde0();
    /* 006479c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006479c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006479c8: cmp dword ptr [eax + 4], -1 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006479cc: jne 0x6479f3 */ if (!fZ) goto L_006479f3;
L_006479ce:; BB(0x006479ce);
    /* 006479ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006479d1: cmp dword ptr [ecx + 8], -1 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006479d5: jne 0x6479f3 */ if (!fZ) goto L_006479f3;
L_006479d7:; BB(0x006479d7);
    /* 006479d7: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006479db: je 0x6479ee */ if (fZ) goto L_006479ee;
L_006479dd:; BB(0x006479dd);
    /* 006479dd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006479e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006479e1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006479e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006479e6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006479e9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006479ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6479eeu); call_ind(t); }
L_006479ee:; BB(0x006479ee);
    /* 006479ee: jmp 0x647f48 */ goto L_00647f48;
L_006479f3:; BB(0x006479f3);
    /* 006479f3: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 006479f9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006479fc: mov dword ptr [ebp - 0x148], edx */ W32((u32)(r_ebp+0xfffffeb8u), r_edx);
    /* 00647a02: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00647a08: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x647a0du); f_0063aac0();
    /* 00647a0d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00647a0f: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 00647a15: cmp dword ptr [ebp - 0x140], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffec0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647a1c: je 0x647a46 */ if (fZ) goto L_00647a46;
L_00647a1e:; BB(0x00647a1e);
    /* 00647a1e: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00647a24: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x647a29u); f_0063aac0();
    /* 00647a29: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00647a2b: mov dword ptr [ebp - 0x144], ecx */ W32((u32)(r_ebp+0xfffffebcu), r_ecx);
    /* 00647a31: cmp dword ptr [ebp - 0x144], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffebcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647a38: je 0x647a46 */ if (fZ) goto L_00647a46;
L_00647a3a:; BB(0x00647a3a);
    /* 00647a3a: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 00647a44: jmp 0x647a50 */ goto L_00647a50;
L_00647a46:; BB(0x00647a46);
    /* 00647a46: mov dword ptr [ebp - 0x174], 1 */ W32((u32)(r_ebp+0xfffffe8cu), 0x1u);
L_00647a50:; BB(0x00647a50);
    /* 00647a50: movzx edx, byte ptr [ebp - 0x174] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe8cu));
    /* 00647a57: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647a59: je 0x647a89 */ if (fZ) goto L_00647a89;
L_00647a5b:; BB(0x00647a5b);
    /* 00647a5b: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647a61: call 0x648ae0 */ r_esp -= 4; W32(r_esp, 0x647a66u); f_00648ae0();
    /* 00647a66: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00647a69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647a6b: jne 0x647a89 */ if (!fZ) goto L_00647a89;
L_00647a6d:; BB(0x00647a6d);
    /* 00647a6d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647a71: je 0x647a84 */ if (fZ) goto L_00647a84;
L_00647a73:; BB(0x00647a73);
    /* 00647a73: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00647a76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647a77: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00647a7a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00647a7c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00647a7f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00647a82: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x647a84u); call_ind(t); }
L_00647a84:; BB(0x00647a84);
    /* 00647a84: jmp 0x647f48 */ goto L_00647f48;
L_00647a89:; BB(0x00647a89);
    /* 00647a89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00647a8c: cmp dword ptr [eax + 4], -1 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647a90: jne 0x647ad2 */ if (!fZ) goto L_00647ad2;
L_00647a92:; BB(0x00647a92);
    /* 00647a92: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647a95: cmp dword ptr [ecx + 8], -1 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647a99: jne 0x647ad2 */ if (!fZ) goto L_00647ad2;
L_00647a9b:; BB(0x00647a9b);
    /* 00647a9b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00647a9d: jne 0x647ab6 */ if (!fZ) goto L_00647ab6;
L_00647a9f:; BB(0x00647a9f);
    /* 00647a9f: push 0x2ff */ { u32 v = 0x2ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647aa4: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 00647aa9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00647aae: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x647ab3u); f_005e9f20();
    /* 00647ab3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00647ab6:; BB(0x00647ab6);
    /* 00647ab6: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647aba: je 0x647acd */ if (fZ) goto L_00647acd;
L_00647abc:; BB(0x00647abc);
    /* 00647abc: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00647abf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647ac0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00647ac3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00647ac5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00647ac8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00647acb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x647acdu); call_ind(t); }
L_00647acd:; BB(0x00647acd);
    /* 00647acd: jmp 0x647f48 */ goto L_00647f48;
L_00647ad2:; BB(0x00647ad2);
    /* 00647ad2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00647ad8: call 0x6377b0 */ r_esp -= 4; W32(r_esp, 0x647addu); f_006377b0();
    /* 00647add: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 00647ae3: fild dword ptr [ebp - 0x178] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffe88u)));
    /* 00647ae9: fdiv qword ptr [0x6be518] */ ST(0) = ST(0) / R_F64((u32)(0x6be518u));
    /* 00647aef: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00647af2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00647af5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647af8: fld qword ptr [eax + 0x18] */ FPUSH(R_F64((u32)(r_eax+0x18u)));
    /* 00647afb: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00647afe: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647b01: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 00647b04: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00647b07: push 0x6dc724 */ { u32 v = 0x6dc724u; r_esp -= 4; W32(r_esp, v); }
    /* 00647b0c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x647b11u); f_0062fde0();
    /* 00647b11: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647b14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647b17: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00647b1d: fcomp qword ptr [ecx + 0x18] */ fx_compare(ST(0), R_F64((u32)(r_ecx+0x18u))); FPOP();
    /* 00647b20: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00647b22: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00647b25: jp 0x647b6b */ if (fP) goto L_00647b6b;
L_00647b27:; BB(0x00647b27);
    /* 00647b27: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00647b2a: fld qword ptr [edx + 0x18] */ FPUSH(R_F64((u32)(r_edx+0x18u)));
    /* 00647b2d: fsub qword ptr [0x6b2c38] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c38u));
    /* 00647b33: fdiv qword ptr [0x6b2c38] */ ST(0) = ST(0) / R_F64((u32)(0x6b2c38u));
    /* 00647b39: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00647b3c: fld1  */ FPUSH(1.0);
    /* 00647b3e: fsub qword ptr [ebp - 0x20] */ ST(0) = ST(0) - R_F64((u32)(r_ebp+0xffffffe0u));
    /* 00647b41: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 00647b44: fadd qword ptr [ebp - 0x20] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffe0u));
    /* 00647b47: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00647b4a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647b4d: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 00647b50: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00647b53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647b56: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 00647b59: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00647b5c: push 0x6dc6e8 */ { u32 v = 0x6dc6e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00647b61: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x647b66u); f_0062fde0();
    /* 00647b66: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647b69: jmp 0x647bab */ goto L_00647bab;
L_00647b6b:; BB(0x00647b6b);
    /* 00647b6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00647b6e: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00647b74: fsub qword ptr [eax + 0x18] */ ST(0) = ST(0) - R_F64((u32)(r_eax+0x18u));
    /* 00647b77: fdiv qword ptr [0x6b2c38] */ ST(0) = ST(0) / R_F64((u32)(0x6b2c38u));
    /* 00647b7d: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00647b80: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 00647b83: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 00647b86: fsubr qword ptr [ebp - 0x20] */ ST(0) = R_F64((u32)(r_ebp+0xffffffe0u)) - ST(0);
    /* 00647b89: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00647b8c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647b8f: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 00647b92: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00647b95: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647b98: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 00647b9b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00647b9e: push 0x6dc6ac */ { u32 v = 0x6dc6acu; r_esp -= 4; W32(r_esp, v); }
    /* 00647ba3: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x647ba8u); f_0062fde0();
    /* 00647ba8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00647bab:; BB(0x00647bab);
    /* 00647bab: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00647bb0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x647bb5u); f_0062fbf0();
    /* 00647bb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647bb8: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 00647bbe: fild dword ptr [ebp - 0x17c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffe84u)));
    /* 00647bc4: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 00647bc7: fmul qword ptr [0x6b6e18] */ ST(0) = ST(0) * R_F64((u32)(0x6b6e18u));
    /* 00647bcd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00647bcf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00647bd1: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00647bd4: jne 0x647be2 */ if (!fZ) goto L_00647be2;
L_00647bd6:; BB(0x00647bd6);
    /* 00647bd6: mov dword ptr [ebp - 0x180], 1 */ W32((u32)(r_ebp+0xfffffe80u), 0x1u);
    /* 00647be0: jmp 0x647bec */ goto L_00647bec;
L_00647be2:; BB(0x00647be2);
    /* 00647be2: mov dword ptr [ebp - 0x180], 0 */ W32((u32)(r_ebp+0xfffffe80u), 0x0u);
L_00647bec:; BB(0x00647bec);
    /* 00647bec: mov cl, byte ptr [ebp - 0x180] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe80u))) & 0xffu);
    /* 00647bf2: mov byte ptr [ebp - 0xd], cl */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_ecx);
    /* 00647bf5: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00647bf9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647bfb: jne 0x647c26 */ if (!fZ) goto L_00647c26;
L_00647bfd:; BB(0x00647bfd);
    /* 00647bfd: push 0x6dc670 */ { u32 v = 0x6dc670u; r_esp -= 4; W32(r_esp, v); }
    /* 00647c02: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x647c07u); f_0062fde0();
    /* 00647c07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647c0a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647c0e: je 0x647c21 */ if (fZ) goto L_00647c21;
L_00647c10:; BB(0x00647c10);
    /* 00647c10: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00647c13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647c14: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00647c17: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00647c19: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00647c1c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00647c1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x647c21u); call_ind(t); }
L_00647c21:; BB(0x00647c21);
    /* 00647c21: jmp 0x647f48 */ goto L_00647f48;
L_00647c26:; BB(0x00647c26);
    /* 00647c26: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647c29: cmp dword ptr [ecx + 8], -1 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647c2d: jne 0x647c3d */ if (!fZ) goto L_00647c3d;
L_00647c2f:; BB(0x00647c2f);
    /* 00647c2f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00647c32: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00647c35: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00647c38: jmp 0x647cd0 */ goto L_00647cd0;
L_00647c3d:; BB(0x00647c3d);
    /* 00647c3d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647c40: cmp dword ptr [ecx + 4], -1 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647c44: jne 0x647c51 */ if (!fZ) goto L_00647c51;
L_00647c46:; BB(0x00647c46);
    /* 00647c46: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00647c49: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00647c4c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00647c4f: jmp 0x647cd0 */ goto L_00647cd0;
L_00647c51:; BB(0x00647c51);
    /* 00647c51: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647c57: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00647c5a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00647c5d: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 00647c63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647c65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647c68: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00647c6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00647c6c: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 00647c72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647c73: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00647c79: call 0x6371e0 */ r_esp -= 4; W32(r_esp, 0x647c7eu); f_006371e0();
    /* 00647c7e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00647c81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647c83: jne 0x647c90 */ if (!fZ) goto L_00647c90;
L_00647c85:; BB(0x00647c85);
    /* 00647c85: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00647c88: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00647c8b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00647c8e: jmp 0x647cd0 */ goto L_00647cd0;
L_00647c90:; BB(0x00647c90);
    /* 00647c90: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00647c95: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x647c9au); f_0062fbf0();
    /* 00647c9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647c9d: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 00647ca3: fild dword ptr [ebp - 0x184] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffe7cu)));
    /* 00647ca9: fdiv qword ptr [0x6b6e18] */ ST(0) = ST(0) / R_F64((u32)(0x6b6e18u));
    /* 00647caf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647cb2: fcomp qword ptr [ecx + 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ecx+0x10u))); FPOP();
    /* 00647cb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00647cb7: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00647cba: jne 0x647cc7 */ if (!fZ) goto L_00647cc7;
L_00647cbc:; BB(0x00647cbc);
    /* 00647cbc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00647cbf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00647cc2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00647cc5: jmp 0x647cd0 */ goto L_00647cd0;
L_00647cc7:; BB(0x00647cc7);
    /* 00647cc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00647cca: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00647ccd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00647cd0:; BB(0x00647cd0);
    /* 00647cd0: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647cd6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00647cd9: mov dword ptr [ebp - 0x158], ecx */ W32((u32)(r_ebp+0xfffffea8u), r_ecx);
    /* 00647cdf: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 00647ce5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x647ceau); f_0063aac0();
    /* 00647cea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00647cec: mov dword ptr [ebp - 0x150], edx */ W32((u32)(r_ebp+0xfffffeb0u), r_edx);
    /* 00647cf2: cmp dword ptr [ebp - 0x150], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647cf9: je 0x647d23 */ if (fZ) goto L_00647d23;
L_00647cfb:; BB(0x00647cfb);
    /* 00647cfb: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 00647d01: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x647d06u); f_0063aac0();
    /* 00647d06: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00647d08: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 00647d0e: cmp dword ptr [ebp - 0x154], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffeacu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647d15: je 0x647d23 */ if (fZ) goto L_00647d23;
L_00647d17:; BB(0x00647d17);
    /* 00647d17: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
    /* 00647d21: jmp 0x647d2d */ goto L_00647d2d;
L_00647d23:; BB(0x00647d23);
    /* 00647d23: mov dword ptr [ebp - 0x188], 1 */ W32((u32)(r_ebp+0xfffffe78u), 0x1u);
L_00647d2d:; BB(0x00647d2d);
    /* 00647d2d: movzx ecx, byte ptr [ebp - 0x188] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe78u));
    /* 00647d34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647d36: je 0x647d8e */ if (fZ) goto L_00647d8e;
L_00647d38:; BB(0x00647d38);
    /* 00647d38: mov edx, dword ptr [ebp - 0x170] */ r_edx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647d3e: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00647d41: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x647d46u); f_0057a470();
    /* 00647d46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647d47: lea eax, [ebp - 0x130] */ r_eax = (u32)(r_ebp+0xfffffed0u);
    /* 00647d4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647d4e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x647d53u); f_00686d8e();
    /* 00647d53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647d56: movsx ecx, byte ptr [ebp - 0x130] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffed0u));
    /* 00647d5d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647d5f: je 0x647d7d */ if (fZ) goto L_00647d7d;
L_00647d61:; BB(0x00647d61);
    /* 00647d61: mov edx, dword ptr [ebp - 0x170] */ r_edx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647d67: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00647d6a: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x647d6fu); f_0057a470();
    /* 00647d6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647d70: call 0x665800 */ r_esp -= 4; W32(r_esp, 0x647d75u); f_00665800();
    /* 00647d75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647d78: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00647d7b: jmp 0x647d8c */ goto L_00647d8c;
L_00647d7d:; BB(0x00647d7d);
    /* 00647d7d: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647d83: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00647d86: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00647d89: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00647d8c:; BB(0x00647d8c);
    /* 00647d8c: jmp 0x647d9d */ goto L_00647d9d;
L_00647d8e:; BB(0x00647d8e);
    /* 00647d8e: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647d94: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00647d97: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00647d9a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00647d9d:; BB(0x00647d9d);
    /* 00647d9d: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00647da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647da1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647da4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647da5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00647da8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00647da9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00647daf: call 0x6371e0 */ r_esp -= 4; W32(r_esp, 0x647db4u); f_006371e0();
    /* 00647db4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00647db7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647db9: jne 0x647de4 */ if (!fZ) goto L_00647de4;
L_00647dbb:; BB(0x00647dbb);
    /* 00647dbb: push 0x6dc630 */ { u32 v = 0x6dc630u; r_esp -= 4; W32(r_esp, v); }
    /* 00647dc0: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x647dc5u); f_0062fde0();
    /* 00647dc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647dc8: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647dcc: je 0x647ddf */ if (fZ) goto L_00647ddf;
L_00647dce:; BB(0x00647dce);
    /* 00647dce: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00647dd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647dd2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00647dd5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00647dd7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00647dda: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00647ddd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x647ddfu); call_ind(t); }
L_00647ddf:; BB(0x00647ddf);
    /* 00647ddf: jmp 0x647f48 */ goto L_00647f48;
L_00647de4:; BB(0x00647de4);
    /* 00647de4: movzx eax, byte ptr [ebp + 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0x18u));
    /* 00647de8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647dea: je 0x647e42 */ if (fZ) goto L_00647e42;
L_00647dec:; BB(0x00647dec);
    /* 00647dec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00647def: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647df0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647df3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00647df4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00647dfa: call 0x637260 */ r_esp -= 4; W32(r_esp, 0x647dffu); f_00637260();
    /* 00647dff: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 00647e05: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00647e07: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x647e0cu); f_0062fbf0();
    /* 00647e0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647e0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647e11: jne 0x647e42 */ if (!fZ) goto L_00647e42;
L_00647e13:; BB(0x00647e13);
    /* 00647e13: cmp dword ptr [ebp - 0x13c], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffec4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647e1a: je 0x647e42 */ if (fZ) goto L_00647e42;
L_00647e1c:; BB(0x00647e1c);
    /* 00647e1c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00647e1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647e20: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00647e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647e24: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00647e2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00647e2b: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647e31: call 0x647f60 */ r_esp -= 4; W32(r_esp, 0x647e36u); f_00647f60();
    /* 00647e36: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00647e39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647e3b: je 0x647e42 */ if (fZ) goto L_00647e42;
L_00647e3d:; BB(0x00647e3d);
    /* 00647e3d: jmp 0x647f48 */ goto L_00647f48;
L_00647e42:; BB(0x00647e42);
    /* 00647e42: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00647e45: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647e46: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647e49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00647e4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00647e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647e4e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00647e54: call 0x637000 */ r_esp -= 4; W32(r_esp, 0x647e59u); f_00637000();
    /* 00647e59: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00647e5c: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647e60: jne 0x647e99 */ if (!fZ) goto L_00647e99;
L_00647e62:; BB(0x00647e62);
    /* 00647e62: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00647e64: jne 0x647e7d */ if (!fZ) goto L_00647e7d;
L_00647e66:; BB(0x00647e66);
    /* 00647e66: push 0x35c */ { u32 v = 0x35cu; r_esp -= 4; W32(r_esp, v); }
    /* 00647e6b: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 00647e70: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00647e75: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x647e7au); f_005e9f20();
    /* 00647e7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00647e7d:; BB(0x00647e7d);
    /* 00647e7d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647e81: je 0x647e94 */ if (fZ) goto L_00647e94;
L_00647e83:; BB(0x00647e83);
    /* 00647e83: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00647e86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647e87: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00647e8a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00647e8c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00647e8f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00647e92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x647e94u); call_ind(t); }
L_00647e94:; BB(0x00647e94);
    /* 00647e94: jmp 0x647f48 */ goto L_00647f48;
L_00647e99:; BB(0x00647e99);
    /* 00647e99: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647e9f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00647ea2: mov dword ptr [ebp - 0x16c], edx */ W32((u32)(r_ebp+0xfffffe94u), r_edx);
    /* 00647ea8: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00647eae: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x647eb3u); f_0063aac0();
    /* 00647eb3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00647eb5: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 00647ebb: cmp dword ptr [ebp - 0x164], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffe9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647ec2: je 0x647eec */ if (fZ) goto L_00647eec;
L_00647ec4:; BB(0x00647ec4);
    /* 00647ec4: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00647eca: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x647ecfu); f_0063aac0();
    /* 00647ecf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00647ed1: mov dword ptr [ebp - 0x168], ecx */ W32((u32)(r_ebp+0xfffffe98u), r_ecx);
    /* 00647ed7: cmp dword ptr [ebp - 0x168], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffe98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647ede: je 0x647eec */ if (fZ) goto L_00647eec;
L_00647ee0:; BB(0x00647ee0);
    /* 00647ee0: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 00647eea: jmp 0x647ef6 */ goto L_00647ef6;
L_00647eec:; BB(0x00647eec);
    /* 00647eec: mov dword ptr [ebp - 0x18c], 1 */ W32((u32)(r_ebp+0xfffffe74u), 0x1u);
L_00647ef6:; BB(0x00647ef6);
    /* 00647ef6: movzx edx, byte ptr [ebp - 0x18c] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe74u));
    /* 00647efd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647eff: jne 0x647f2b */ if (!fZ) goto L_00647f2b;
L_00647f01:; BB(0x00647f01);
    /* 00647f01: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647f05: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647f0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647f0c: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00647f12: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00647f14: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00647f1a: mov edx, dword ptr [eax + 0x1cc] */ r_edx = R32((u32)(r_eax+0x1ccu));
    /* 00647f20: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x647f22u); call_ind(t); }
    /* 00647f22: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647f28: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
L_00647f2b:; BB(0x00647f2b);
    /* 00647f2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00647f2d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00647f30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00647f31: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00647f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647f35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647f38: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647f39: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647f3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00647f3d: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 00647f43: call 0x646fa0 */ r_esp -= 4; W32(r_esp, 0x647f48u); f_00646fa0();
L_00647f48:; BB(0x00647f48);
    /* 00647f48: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00647f4b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00647f4d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x647f52u); f_00686d72();
    /* 00647f52: mov esp, ebp */ r_esp = r_ebp;
    /* 00647f54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647f55: ret 0x14 */ FN_RET(0x006476f0); r_esp += 24; return;
}

void f_0064b3c0(void) /* character::func_0064b3c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b3c0);
    /* 0064b3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b3c3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b3c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b3c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b3c8: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0064b3cb: mov dword ptr [ebp - 0x24], 0x33 */ W32((u32)(r_ebp+0xffffffdcu), 0x33u);
    /* 0064b3d2: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0064b3d9: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0064b3e0: mov dword ptr [ebp - 0x18], 0x2a */ W32((u32)(r_ebp+0xffffffe8u), 0x2au);
    /* 0064b3e7: mov dword ptr [ebp - 0x14], 0x3c */ W32((u32)(r_ebp+0xffffffecu), 0x3cu);
    /* 0064b3ee: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0064b3f5: mov dword ptr [ebp - 0xc], 0x21 */ W32((u32)(r_ebp+0xfffffff4u), 0x21u);
    /* 0064b3fc: mov dword ptr [ebp - 8], 0x33 */ W32((u32)(r_ebp+0xfffffff8u), 0x33u);
    /* 0064b403: mov dword ptr [ebp - 4], 0x45 */ W32((u32)(r_ebp+0xfffffffcu), 0x45u);
    /* 0064b40a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064b411: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064b414: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064b417: jmp 0x64b422 */ goto L_0064b422;
L_0064b419:; BB(0x0064b419);
    /* 0064b419: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064b41c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064b41f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_0064b422:; BB(0x0064b422);
    /* 0064b422: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064b426: jge 0x64b443 */ if ((fS==fO)) goto L_0064b443;
L_0064b428:; BB(0x0064b428);
    /* 0064b428: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064b42b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b42e: cmp dword ptr [eax + edx*4 + 0x198], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b436: je 0x64b441 */ if (fZ) goto L_0064b441;
L_0064b438:; BB(0x0064b438);
    /* 0064b438: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064b43b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064b43e: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_0064b441:; BB(0x0064b441);
    /* 0064b441: jmp 0x64b419 */ goto L_0064b419;
L_0064b443:; BB(0x0064b443);
    /* 0064b443: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b447: jne 0x64b44e */ if (!fZ) goto L_0064b44e;
L_0064b449:; BB(0x0064b449);
    /* 0064b449: jmp 0x64b530 */ goto L_0064b530;
L_0064b44e:; BB(0x0064b44e);
    /* 0064b44e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064b451: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0064b454: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064b45b: jmp 0x64b466 */ goto L_0064b466;
L_0064b45d:; BB(0x0064b45d);
    /* 0064b45d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064b460: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b463: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_0064b466:; BB(0x0064b466);
    /* 0064b466: cmp dword ptr [ebp - 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064b46a: jge 0x64b513 */ if ((fS==fO)) goto L_0064b513;
L_0064b470:; BB(0x0064b470);
    /* 0064b470: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b474: je 0x64b513 */ if (fZ) goto L_0064b513;
L_0064b47a:; BB(0x0064b47a);
    /* 0064b47a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064b47d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b480: cmp dword ptr [edx + ecx*4 + 0x198], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b488: je 0x64b50e */ if (fZ) goto L_0064b50e;
L_0064b48e:; BB(0x0064b48e);
    /* 0064b48e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b491: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064b493: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b496: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0064b499: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b49bu); call_ind(t); }
    /* 0064b49b: add eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b49e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b49f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0064b4a2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0064b4a5: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064b4a8: lea esi, [ebp + ecx - 0x24] */ r_esi = (u32)(r_ebp+r_ecx+0xffffffdcu);
    /* 0064b4ac: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0064b4af: sub edi, dword ptr [ebp - 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0064b4b2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b4b5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064b4b7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b4ba: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0064b4bd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64b4bfu); call_ind(t); }
    /* 0064b4bf: add eax, dword ptr [esi + edi*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+r_edi*4)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b4c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b4c3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064b4c6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b4c9: mov edx, dword ptr [ecx + eax*4 + 0x198] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0064b4d0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064b4d3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b4d6: mov ecx, dword ptr [ecx + eax*4 + 0x198] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0064b4dd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064b4df: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064b4e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b4e4u); call_ind(t); }
    /* 0064b4e4: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064b4e7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b4ea: mov eax, dword ptr [edx + ecx*4 + 0x198] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0064b4f1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064b4f4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064b4f7: mov ecx, dword ptr [edx + ecx*4 + 0x198] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0064b4fe: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0064b500: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0064b503: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64b505u); call_ind(t); }
    /* 0064b505: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064b508: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064b50b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0064b50e:; BB(0x0064b50e);
    /* 0064b50e: jmp 0x64b45d */ goto L_0064b45d;
L_0064b513:; BB(0x0064b513);
    /* 0064b513: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b517: je 0x64b530 */ if (fZ) goto L_0064b530;
L_0064b519:; BB(0x0064b519);
    /* 0064b519: push 0x7f9 */ { u32 v = 0x7f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b51e: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b523: push 0x6dcaa4 */ { u32 v = 0x6dcaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b528: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64b52du); f_005e9f20();
    /* 0064b52d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064b530:; BB(0x0064b530);
    /* 0064b530: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064b531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064b532: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b534: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b535: ret  */ FN_RET(0x0064b3c0); r_esp += 4; return;
}

void f_0064b640(void) /* character::func_0064b640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b640);
    /* 0064b640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b641: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b643: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b645: push 0x6abf55 */ { u32 v = 0x6abf55u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b64a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064b650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b651: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b654: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064b659: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064b65b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b65c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064b65f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064b665: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0064b668: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0064b66f: jmp 0x64b67a */ goto L_0064b67a;
L_0064b671:; BB(0x0064b671);
    /* 0064b671: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b674: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b677: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0064b67a:; BB(0x0064b67a);
    /* 0064b67a: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064b67e: jge 0x64b6b5 */ if ((fS==fO)) goto L_0064b6b5;
L_0064b680:; BB(0x0064b680);
    /* 0064b680: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b683: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b686: cmp dword ptr [edx + ecx*4 + 0x198], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b68e: jne 0x64b694 */ if (!fZ) goto L_0064b694;
L_0064b690:; BB(0x0064b690);
    /* 0064b690: jmp 0x64b6b5 */ goto L_0064b6b5;
L_0064b694:; BB(0x0064b694);
    /* 0064b694: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b697: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b69a: mov ecx, dword ptr [ecx + eax*4 + 0x198] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0064b6a1: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x64b6a6u); f_005eafc0();
    /* 0064b6a6: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b6a9: jne 0x64b6b3 */ if (!fZ) goto L_0064b6b3;
L_0064b6ab:; BB(0x0064b6ab);
    /* 0064b6ab: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064b6ae: jmp 0x64b77f */ goto L_0064b77f;
L_0064b6b3:; BB(0x0064b6b3);
    /* 0064b6b3: jmp 0x64b671 */ goto L_0064b671;
L_0064b6b5:; BB(0x0064b6b5);
    /* 0064b6b5: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b6b9: jne 0x64b6de */ if (!fZ) goto L_0064b6de;
L_0064b6bb:; BB(0x0064b6bb);
    /* 0064b6bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0064b6bd: jne 0x64b6d6 */ if (!fZ) goto L_0064b6d6;
L_0064b6bf:; BB(0x0064b6bf);
    /* 0064b6bf: push 0x824 */ { u32 v = 0x824u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6c4: push 0x6dc610 */ { u32 v = 0x6dc610u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6c9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6ce: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64b6d3u); f_005e9f20();
    /* 0064b6d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064b6d6:; BB(0x0064b6d6);
    /* 0064b6d6: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064b6d9: jmp 0x64b77f */ goto L_0064b77f;
L_0064b6de:; BB(0x0064b6de);
    /* 0064b6de: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6e3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64b6e8u); f_00686d82();
    /* 0064b6e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064b6eb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064b6ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064b6f5: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b6f9: je 0x64b70c */ if (fZ) goto L_0064b70c;
L_0064b6fb:; BB(0x0064b6fb);
    /* 0064b6fb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b6fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b6ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064b702: call 0x64b920 */ r_esp -= 4; W32(r_esp, 0x64b707u); f_0064b920();
    /* 0064b707: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064b70a: jmp 0x64b713 */ goto L_0064b713;
L_0064b70c:; BB(0x0064b70c);
    /* 0064b70c: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0064b713:; BB(0x0064b713);
    /* 0064b713: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064b716: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0064b719: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064b720: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b723: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b726: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064b729: mov dword ptr [ecx + eax*4 + 0x198], edx */ W32((u32)(r_ecx+r_eax*4+0x198u), r_edx);
    /* 0064b730: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0064b733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b734: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064b737: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b738: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b73b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b73e: mov ecx, dword ptr [eax + edx*4 + 0x198] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x198u));
    /* 0064b745: call 0x64ba60 */ r_esp -= 4; W32(r_esp, 0x64b74au); f_0064ba60();
    /* 0064b74a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064b74d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b74e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b751: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b754: mov ecx, dword ptr [eax + edx*4 + 0x198] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x198u));
    /* 0064b75b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064b75e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b761: mov edx, dword ptr [eax + edx*4 + 0x198] */ r_edx = R32((u32)(r_eax+r_edx*4+0x198u));
    /* 0064b768: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0064b76a: mov ecx, edx */ r_ecx = r_edx;
    /* 0064b76c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0064b772: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64b774u); call_ind(t); }
    /* 0064b774: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064b777: call 0x64b3c0 */ r_esp -= 4; W32(r_esp, 0x64b77cu); f_0064b3c0();
    /* 0064b77c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
L_0064b77f:; BB(0x0064b77f);
    /* 0064b77f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b782: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064b789: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064b78a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b78c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b78d: ret 0xc */ FN_RET(0x0064b640); r_esp += 16; return;
}

