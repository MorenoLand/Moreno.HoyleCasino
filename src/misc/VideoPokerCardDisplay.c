#include "protos.h"

void f_00555510(void) /* VideoPokerCardDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555510);
    /* 00555510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555511: mov ebp, esp */ r_ebp = r_esp;
    /* 00555513: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555515: push 0x6a565e */ { u32 v = 0x6a565eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055551a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00555520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555521: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555524: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00555529: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055552b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055552c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0055552f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00555535: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00555538: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055553a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055553c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055553f: call 0x643ce0 */ r_esp -= 4; W32(r_esp, 0x555544u); f_00643ce0();
    /* 00555544: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055554b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055554e: mov dword ptr [eax], 0x6c85ac */ W32((u32)(r_eax), 0x6c85acu);
    /* 00555554: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00555559: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x55555eu); f_00686d82();
    /* 0055555e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555561: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00555564: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00555568: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055556c: je 0x55557b */ if (fZ) goto L_0055557b;
L_0055556e:; BB(0x0055556e);
    /* 0055556e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555571: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x555576u); f_005eaaf0();
    /* 00555576: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00555579: jmp 0x555582 */ goto L_00555582;
L_0055557b:; BB(0x0055557b);
    /* 0055557b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00555582:; BB(0x00555582);
    /* 00555582: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555585: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00555588: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055558c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055558f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00555592: mov dword ptr [edx + 0x1a4], eax */ W32((u32)(r_edx+0x1a4u), r_eax);
    /* 00555598: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055559b: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0055559e: mov byte ptr [ecx + 0x1a8], dl */ W8((u32)(r_ecx+0x1a8u), (u8)r_edx);
    /* 005555a4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005555a7: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 005555ab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005555b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005555b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005555b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005555bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005555c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005555c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005555c3: ret 4 */ FN_RET(0x00555510); r_esp += 8; return;
}

void f_005555d0(void) /* VideoPokerCardDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005555d0);
    /* 005555d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005555d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005555d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005555d5: push 0x6a5681 */ { u32 v = 0x6a5681u; r_esp -= 4; W32(r_esp, v); }
    /* 005555da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005555e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005555e1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005555e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005555e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005555eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005555ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005555ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005555f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005555f8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005555fb: mov dword ptr [eax], 0x6c85ac */ W32((u32)(r_eax), 0x6c85acu);
    /* 00555601: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00555608: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055560b: mov edx, dword ptr [ecx + 0x1a4] */ r_edx = R32((u32)(r_ecx+0x1a4u));
    /* 00555611: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00555614: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00555617: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0055561a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055561e: je 0x555633 */ if (fZ) goto L_00555633;
L_00555620:; BB(0x00555620);
    /* 00555620: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00555622: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00555625: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00555627: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055562a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055562c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55562eu); call_ind(t); }
    /* 0055562e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00555631: jmp 0x55563a */ goto L_0055563a;
L_00555633:; BB(0x00555633);
    /* 00555633: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0055563a:; BB(0x0055563a);
    /* 0055563a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00555641: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555644: call 0x643da0 */ r_esp -= 4; W32(r_esp, 0x555649u); f_00643da0();
    /* 00555649: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055564c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00555653: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00555654: mov esp, ebp */ r_esp = r_ebp;
    /* 00555656: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555657: ret  */ FN_RET(0x005555d0); r_esp += 4; return;
}

void f_00555660(void) /* VideoPokerCardDisplay::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555660);
    /* 00555660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555661: mov ebp, esp */ r_ebp = r_esp;
    /* 00555663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555667: cmp dword ptr [0x793420], 0 */ {  u32 a = R32((u32)(0x793420u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055566e: je 0x555686 */ if (fZ) goto L_00555686;
L_00555670:; BB(0x00555670);
    /* 00555670: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555673: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 0055567a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055567b: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555681: call 0x558040 */ r_esp -= 4; W32(r_esp, 0x555686u); f_00558040();
L_00555686:; BB(0x00555686);
    /* 00555686: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00555689: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055568a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055568d: call 0x6447e0 */ r_esp -= 4; W32(r_esp, 0x555692u); f_006447e0();
    /* 00555692: mov esp, ebp */ r_esp = r_ebp;
    /* 00555694: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555695: ret 4 */ FN_RET(0x00555660); r_esp += 8; return;
}

void f_005556a0(void) /* VideoPokerCardDisplay::vfunc48 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005556a0);
    /* 005556a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005556a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005556a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005556a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005556a9: cmp dword ptr [0x793420], 0 */ {  u32 a = R32((u32)(0x793420u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005556b0: jne 0x5556b6 */ if (!fZ) goto L_005556b6;
L_005556b2:; BB(0x005556b2);
    /* 005556b2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005556b4: jmp 0x5556dc */ goto L_005556dc;
L_005556b6:; BB(0x005556b6);
    /* 005556b6: mov eax, dword ptr [0x793420] */ r_eax = R32((u32)(0x793420u));
    /* 005556bb: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005556be: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005556c1: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005556c5: jne 0x5556da */ if (!fZ) goto L_005556da;
L_005556c7:; BB(0x005556c7);
    /* 005556c7: mov edx, dword ptr [0x79341c] */ r_edx = R32((u32)(0x79341cu));
    /* 005556cd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005556d0: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005556d4: jne 0x5556da */ if (!fZ) goto L_005556da;
L_005556d6:; BB(0x005556d6);
    /* 005556d6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005556d8: jmp 0x5556dc */ goto L_005556dc;
L_005556da:; BB(0x005556da);
    /* 005556da: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005556dc:; BB(0x005556dc);
    /* 005556dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005556de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005556df: ret  */ FN_RET(0x005556a0); r_esp += 4; return;
}

void f_005556e0(void) /* VideoPokerCardDisplay::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005556e0);
    /* 005556e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005556e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005556e3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005556e6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005556e9: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 005556f0: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005556f7: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 005556fe: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00555705: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055570c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055570f: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 00555716: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555717: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55571cu); f_00641280();
    /* 0055571c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055571f: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555722: jne 0x55572d */ if (!fZ) goto L_0055572d;
L_00555724:; BB(0x00555724);
    /* 00555724: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0055572b: jmp 0x555743 */ goto L_00555743;
L_0055572d:; BB(0x0055572d);
    /* 0055572d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555730: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00555737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555738: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55573du); f_00641280();
    /* 0055573d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555740: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00555743:; BB(0x00555743);
    /* 00555743: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555746: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00555749: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055574c: movzx eax, word ptr [edx + 0x190] */ r_eax = (u32)R16((u32)(r_edx+0x190u));
    /* 00555753: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555758: je 0x5557b8 */ if (fZ) goto L_005557b8;
L_0055575a:; BB(0x0055575a);
    /* 0055575a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055575d: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 00555764: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555765: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55576au); f_00641290();
    /* 0055576a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055576d: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00555771: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00555774: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555777: lea edx, [eax + ecx - 1] */ r_edx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 0055577b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055577c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055577f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00555781: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555784: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0055578a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55578cu); call_ind(t); }
    /* 0055578c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055578f: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 00555796: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555797: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55579cu); f_00641280();
    /* 0055579c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055579f: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005557a2: jne 0x5557b6 */ if (!fZ) goto L_005557b6;
L_005557a4:; BB(0x005557a4);
    /* 005557a4: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005557a6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005557a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005557ab: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005557ae: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005557b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5557b6u); call_ind(t); }
L_005557b6:; BB(0x005557b6);
    /* 005557b6: jmp 0x5557ca */ goto L_005557ca;
L_005557b8:; BB(0x005557b8);
    /* 005557b8: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005557ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005557bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005557bf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005557c2: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005557c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5557cau); call_ind(t); }
L_005557ca:; BB(0x005557ca);
    /* 005557ca: cmp dword ptr [0x793428], 0 */ {  u32 a = R32((u32)(0x793428u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005557d1: je 0x55587a */ if (fZ) goto L_0055587a;
L_005557d7:; BB(0x005557d7);
    /* 005557d7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005557da: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 005557e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005557e2: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 005557e8: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x5557edu); f_0054c590();
    /* 005557ed: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005557f0: jne 0x55587a */ if (!fZ) goto L_0055587a;
L_005557f6:; BB(0x005557f6);
    /* 005557f6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005557f9: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 00555800: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555801: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x555806u); f_00641280();
    /* 00555806: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555809: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055580c: jne 0x55587a */ if (!fZ) goto L_0055587a;
L_0055580e:; BB(0x0055580e);
    /* 0055580e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555810: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555813: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x555818u); f_005f53c0();
    /* 00555818: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055581b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055581c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055581f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00555821: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555824: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00555827: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x555829u); call_ind(t); }
    /* 00555829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055582a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055582d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055582f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555832: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00555835: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555837u); call_ind(t); }
    /* 00555837: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555838: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055583b: movzx edx, byte ptr [ecx + 0x1a8] */ r_edx = (u32)R8((u32)(r_ecx+0x1a8u));
    /* 00555842: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00555844: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00555846: and edx, 0xffd04547 */ {  u32 a = r_edx; u32 b = 0xffd04547u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0055584c: add edx, 0x30f357 */ {  u32 a = r_edx; u32 b = 0x30f357u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00555852: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555853: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555856: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 0055585c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x555861u); f_005eae80();
    /* 00555861: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555864: mov edx, dword ptr [ecx + 0x1a4] */ r_edx = R32((u32)(r_ecx+0x1a4u));
    /* 0055586a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055586d: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 00555873: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00555875: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00555878: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55587au); call_ind(t); }
L_0055587a:; BB(0x0055587a);
    /* 0055587a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055587d: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x555882u); f_005eb570();
    /* 00555882: mov esp, ebp */ r_esp = r_ebp;
    /* 00555884: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555885: ret  */ FN_RET(0x005556e0); r_esp += 4; return;
}

void f_00555890(void) /* VideoPokerCardDisplay::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555890);
    /* 00555890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555891: mov ebp, esp */ r_ebp = r_esp;
    /* 00555893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555897: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055589a: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 005558a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005558a3: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 005558a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005558ab: mov ecx, eax */ r_ecx = r_eax;
    /* 005558ad: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005558b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5558b2u); call_ind(t); }
    /* 005558b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005558b5: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x5558bau); f_005eb5a0();
    /* 005558ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005558bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005558bd: ret  */ FN_RET(0x00555890); r_esp += 4; return;
}

