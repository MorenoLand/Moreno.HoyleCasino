#include "protos.h"

void f_00540630(void) /* sub_540630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540630);
    /* 00540630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540631: mov ebp, esp */ r_ebp = r_esp;
    /* 00540633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540637: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054063b: jne 0x540653 */ if (!fZ) goto L_00540653;
L_0054063d:; BB(0x0054063d);
    /* 0054063d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054063f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00540645: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x54064au); f_006375b0();
    /* 0054064a: mov ecx, eax */ r_ecx = r_eax;
    /* 0054064c: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x540651u); f_0063aae0();
    /* 00540651: jmp 0x540668 */ goto L_00540668;
L_00540653:; BB(0x00540653);
    /* 00540653: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00540655: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0054065a: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0054065d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00540660: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 00540663: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x540668u); f_0063aae0();
L_00540668:; BB(0x00540668);
    /* 00540668: mov esp, ebp */ r_esp = r_ebp;
    /* 0054066a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054066b: ret 4 */ FN_RET(0x00540630); r_esp += 8; return;
}

void f_00540670(void) /* sub_540670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540670);
    /* 00540670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540671: mov ebp, esp */ r_ebp = r_esp;
    /* 00540673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540674: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540677: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00540679: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054067c: call 0x540630 */ r_esp -= 4; W32(r_esp, 0x540681u); f_00540630();
    /* 00540681: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00540683: mov esp, ebp */ r_esp = r_ebp;
    /* 00540685: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540686: ret  */ FN_RET(0x00540670); r_esp += 4; return;
}

void f_00540690(void) /* sub_540690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540690);
    /* 00540690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540691: mov ebp, esp */ r_ebp = r_esp;
    /* 00540693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540697: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00540699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054069c: call 0x540630 */ r_esp -= 4; W32(r_esp, 0x5406a1u); f_00540630();
    /* 005406a1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005406a4: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 005406a6: mov esp, ebp */ r_esp = r_ebp;
    /* 005406a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005406a9: ret 4 */ FN_RET(0x00540690); r_esp += 8; return;
}

void f_005406b0(void) /* sub_5406B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005406b0);
    /* 005406b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005406b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005406b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005406b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005406b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005406b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005406bc: call 0x540630 */ r_esp -= 4; W32(r_esp, 0x5406c1u); f_00540630();
    /* 005406c1: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 005406c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005406c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005406c7: ret  */ FN_RET(0x005406b0); r_esp += 4; return;
}

void f_005406d0(void) /* sub_5406D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005406d0);
    /* 005406d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005406d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005406d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005406d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005406d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005406d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005406dc: call 0x540630 */ r_esp -= 4; W32(r_esp, 0x5406e1u); f_00540630();
    /* 005406e1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005406e4: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 005406e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005406ed: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5406f2u); f_006375b0();
    /* 005406f2: mov ecx, eax */ r_ecx = r_eax;
    /* 005406f4: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5406f9u); f_0063b0a0();
    /* 005406f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005406fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005406fc: ret 4 */ FN_RET(0x005406d0); r_esp += 8; return;
}

void f_00540700(void) /* sub_540700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540700);
    /* 00540700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540701: mov ebp, esp */ r_ebp = r_esp;
    /* 00540703: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00540705: push 0x6a4e49 */ { u32 v = 0x6a4e49u; r_esp -= 4; W32(r_esp, v); }
    /* 0054070a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00540710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540711: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540714: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00540719: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054071b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054071c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054071f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00540725: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00540728: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0054072b: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054072f: jne 0x540778 */ if (!fZ) goto L_00540778;
L_00540731:; BB(0x00540731);
    /* 00540731: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 00540736: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x54073bu); f_00686d82();
    /* 0054073b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054073e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00540741: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540748: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054074c: je 0x54075b */ if (fZ) goto L_0054075b;
L_0054074e:; BB(0x0054074e);
    /* 0054074e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00540751: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x540756u); f_00642e10();
    /* 00540756: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00540759: jmp 0x540762 */ goto L_00540762;
L_0054075b:; BB(0x0054075b);
    /* 0054075b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00540762:; BB(0x00540762);
    /* 00540762: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00540765: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00540768: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054076f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00540772: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00540775: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_00540778:; BB(0x00540778);
    /* 00540778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054077a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054077d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00540780: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x540785u); f_00642e70();
    /* 00540785: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540787: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540789: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0054078c: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0054078f: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x540794u); f_006437d0();
    /* 00540794: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0054079b: jmp 0x5407a6 */ goto L_005407a6;
L_0054079d:; BB(0x0054079d);
    /* 0054079d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005407a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005407a3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005407a6:; BB(0x005407a6);
    /* 005407a6: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005407aa: jge 0x540839 */ if ((fS==fO)) goto L_00540839;
L_005407b0:; BB(0x005407b0);
    /* 005407b0: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005407b5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5407bau); f_00686d82();
    /* 005407ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005407bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005407c0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005407c7: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005407cb: je 0x5407da */ if (fZ) goto L_005407da;
L_005407cd:; BB(0x005407cd);
    /* 005407cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005407d0: call 0x542020 */ r_esp -= 4; W32(r_esp, 0x5407d5u); f_00542020();
    /* 005407d5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005407d8: jmp 0x5407e1 */ goto L_005407e1;
L_005407da:; BB(0x005407da);
    /* 005407da: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005407e1:; BB(0x005407e1);
    /* 005407e1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005407e4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005407e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005407ee: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005407f1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005407f4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005407f7: mov dword ptr [eax + edx*4 + 8], ecx */ W32((u32)(r_eax+r_edx*4+0x8u), r_ecx);
    /* 005407fb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005407fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005407ff: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00540802: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00540805: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00540809: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x54080eu); f_005f53e0();
    /* 0054080e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540810: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540812: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x540817u); f_0064c8a0();
    /* 00540817: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054081a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0054081d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00540820: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00540823: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00540826: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00540829: mov dword ptr [eax + edx*8 + 0x38], ecx */ W32((u32)(r_eax+r_edx*8+0x38u), r_ecx);
    /* 0054082d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00540830: mov dword ptr [eax + edx*8 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*8+0x3cu), r_ecx);
    /* 00540834: jmp 0x54079d */ goto L_0054079d;
L_00540839:; BB(0x00540839);
    /* 00540839: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00540840: jmp 0x54084b */ goto L_0054084b;
L_00540842:; BB(0x00540842);
    /* 00540842: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00540845: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00540848: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0054084b:; BB(0x0054084b);
    /* 0054084b: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054084f: jge 0x540880 */ if ((fS==fO)) goto L_00540880;
L_00540851:; BB(0x00540851);
    /* 00540851: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540853: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540855: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x54085au); f_0064c8a0();
    /* 0054085a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054085d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00540860: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00540863: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00540866: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540867: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0054086a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054086b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054086e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054086f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540874u); f_005dcb00();
    /* 00540874: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540877: mov ecx, eax */ r_ecx = r_eax;
    /* 00540879: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x54087eu); f_005d6050();
    /* 0054087e: jmp 0x540842 */ goto L_00540842;
L_00540880:; BB(0x00540880);
    /* 00540880: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00540883: call 0x5408b0 */ r_esp -= 4; W32(r_esp, 0x540888u); f_005408b0();
    /* 00540888: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0054088b: mov byte ptr [eax + 0xfa], 0 */ W8((u32)(r_eax+0xfau), 0x0u);
    /* 00540892: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540895: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054089c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054089d: mov esp, ebp */ r_esp = r_ebp;
    /* 0054089f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005408a0: ret  */ FN_RET(0x00540700); r_esp += 4; return;
}

void f_005408b0(void) /* sub_5408B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005408b0);
    /* 005408b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005408b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005408b3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005408b6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005408b9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005408bc: call 0x540ac0 */ r_esp -= 4; W32(r_esp, 0x5408c1u); f_00540ac0();
    /* 005408c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005408c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005408c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005408c8: call 0x540b20 */ r_esp -= 4; W32(r_esp, 0x5408cdu); f_00540b20();
    /* 005408cd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005408d0: mov dword ptr [eax + 0x100], 0xffffffff */ W32((u32)(r_eax+0x100u), 0xffffffffu);
    /* 005408da: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005408dd: mov dword ptr [ecx + 0x104], 0xffffffff */ W32((u32)(r_ecx+0x104u), 0xffffffffu);
    /* 005408e7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005408ea: mov byte ptr [edx + 0xec], 0 */ W8((u32)(r_edx+0xecu), 0x0u);
    /* 005408f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005408f8: jmp 0x540903 */ goto L_00540903;
L_005408fa:; BB(0x005408fa);
    /* 005408fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005408fd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540900: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00540903:; BB(0x00540903);
    /* 00540903: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540907: jge 0x54092b */ if ((fS==fO)) goto L_0054092b;
L_00540909:; BB(0x00540909);
    /* 00540909: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054090c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054090f: mov ecx, dword ptr [edx + ecx*4 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00540913: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x540918u); f_005cb9b0();
    /* 00540918: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054091b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054091e: mov dword ptr [ecx + eax*4 + 0x98], 0xffffffff */ W32((u32)(r_ecx+r_eax*4+0x98u), 0xffffffffu);
    /* 00540929: jmp 0x5408fa */ goto L_005408fa;
L_0054092b:; BB(0x0054092b);
    /* 0054092b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540932: jmp 0x54093d */ goto L_0054093d;
L_00540934:; BB(0x00540934);
    /* 00540934: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540937: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054093a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0054093d:; BB(0x0054093d);
    /* 0054093d: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540941: jge 0x54097e */ if ((fS==fO)) goto L_0054097e;
L_00540943:; BB(0x00540943);
    /* 00540943: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00540946: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540949: mov byte ptr [eax + 0xed], 0 */ W8((u32)(r_eax+0xedu), 0x0u);
    /* 00540950: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00540957: jmp 0x540962 */ goto L_00540962;
L_00540959:; BB(0x00540959);
    /* 00540959: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054095c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054095f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00540962:; BB(0x00540962);
    /* 00540962: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540966: jge 0x54097c */ if ((fS==fO)) goto L_0054097c;
L_00540968:; BB(0x00540968);
    /* 00540968: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054096a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054096d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054096e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540972: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00540975: call 0x540b70 */ r_esp -= 4; W32(r_esp, 0x54097au); f_00540b70();
    /* 0054097a: jmp 0x540959 */ goto L_00540959;
L_0054097c:; BB(0x0054097c);
    /* 0054097c: jmp 0x540934 */ goto L_00540934;
L_0054097e:; BB(0x0054097e);
    /* 0054097e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540985: jmp 0x540990 */ goto L_00540990;
L_00540987:; BB(0x00540987);
    /* 00540987: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054098a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054098d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00540990:; BB(0x00540990);
    /* 00540990: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540994: jge 0x5409fd */ if ((fS==fO)) goto L_005409fd;
L_00540996:; BB(0x00540996);
    /* 00540996: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540999: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054099a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x54099fu); f_005dcb00();
    /* 0054099f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005409a2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005409a5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005409a8: mov byte ptr [eax + 0x4a0], 0 */ W8((u32)(r_eax+0x4a0u), 0x0u);
    /* 005409af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005409b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005409b3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5409b8u); f_005dcb00();
    /* 005409b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005409bb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005409be: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005409c1: mov byte ptr [edx + 0x4a1], 0 */ W8((u32)(r_edx+0x4a1u), 0x0u);
    /* 005409c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005409cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005409cc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5409d1u); f_005dcb00();
    /* 005409d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005409d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005409d7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005409da: mov byte ptr [ecx + 0x4a2], 0 */ W8((u32)(r_ecx+0x4a2u), 0x0u);
    /* 005409e1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005409e4: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005409e7: mov byte ptr [edx + 0xfb], 0 */ W8((u32)(r_edx+0xfbu), 0x0u);
    /* 005409ee: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005409f1: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005409f4: mov byte ptr [eax + 0xf6], 0 */ W8((u32)(r_eax+0xf6u), 0x0u);
    /* 005409fb: jmp 0x540987 */ goto L_00540987;
L_005409fd:; BB(0x005409fd);
    /* 005409fd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00540a00: call 0x5414a0 */ r_esp -= 4; W32(r_esp, 0x540a05u); f_005414a0();
    /* 00540a05: mov esp, ebp */ r_esp = r_ebp;
    /* 00540a07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540a08: ret  */ FN_RET(0x005408b0); r_esp += 4; return;
}

void f_00540a10(void) /* sub_540A10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540a10);
    /* 00540a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00540a13: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540a16: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00540a19: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540a20: jmp 0x540a2b */ goto L_00540a2b;
L_00540a22:; BB(0x00540a22);
    /* 00540a22: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540a25: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540a28: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00540a2b:; BB(0x00540a2b);
    /* 00540a2b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540a2f: jge 0x540aac */ if ((fS==fO)) goto L_00540aac;
L_00540a31:; BB(0x00540a31);
    /* 00540a31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540a34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540a35: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540a3au); f_005dcb00();
    /* 00540a3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540a3d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00540a40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540a43: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x540a48u); f_0063aac0();
    /* 00540a48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00540a4a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00540a4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00540a4f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540a53: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00540a56: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00540a59: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540a5b: jne 0x540aa7 */ if (!fZ) goto L_00540aa7;
L_00540a5d:; BB(0x00540a5d);
    /* 00540a5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540a60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540a61: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540a66u); f_005dcb00();
    /* 00540a66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540a69: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00540a6c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00540a6f: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 00540a75: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 00540a78: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 00540a7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540a7e: jne 0x540aa7 */ if (!fZ) goto L_00540aa7;
L_00540a80:; BB(0x00540a80);
    /* 00540a80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540a83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540a84: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540a89u); f_005dcb00();
    /* 00540a89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540a8c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00540a8f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00540a92: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 00540a98: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 00540a9b: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 00540a9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540aa1: jne 0x540aa7 */ if (!fZ) goto L_00540aa7;
L_00540aa3:; BB(0x00540aa3);
    /* 00540aa3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00540aa5: jmp 0x540aae */ goto L_00540aae;
L_00540aa7:; BB(0x00540aa7);
    /* 00540aa7: jmp 0x540a22 */ goto L_00540a22;
L_00540aac:; BB(0x00540aac);
    /* 00540aac: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00540aae:; BB(0x00540aae);
    /* 00540aae: mov esp, ebp */ r_esp = r_ebp;
    /* 00540ab0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540ab1: ret  */ FN_RET(0x00540a10); r_esp += 4; return;
}

void f_00540ac0(void) /* sub_540AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540ac0);
    /* 00540ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00540ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540ac4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540ac7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540ac9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540acb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540ace: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00540ad1: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x540ad6u); f_006437d0();
    /* 00540ad6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540ad8: push 0x6c6364 */ { u32 v = 0x6c6364u; r_esp -= 4; W32(r_esp, v); }
    /* 00540add: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00540adf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00540ae1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540ae4: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00540ae7: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x540aecu); f_00643930();
    /* 00540aec: mov esp, ebp */ r_esp = r_ebp;
    /* 00540aee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540aef: ret  */ FN_RET(0x00540ac0); r_esp += 4; return;
}

void f_00540af0(void) /* sub_540AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540af0);
    /* 00540af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00540af3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540af4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540af7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540afa: cmp dword ptr [eax + 0xe8], -1 */ {  u32 a = R32((u32)(r_eax+0xe8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540b01: jne 0x540b07 */ if (!fZ) goto L_00540b07;
L_00540b03:; BB(0x00540b03);
    /* 00540b03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00540b05: jmp 0x540b19 */ goto L_00540b19;
L_00540b07:; BB(0x00540b07);
    /* 00540b07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540b0a: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 00540b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540b11: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540b16u); f_005dcb00();
    /* 00540b16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00540b19:; BB(0x00540b19);
    /* 00540b19: mov esp, ebp */ r_esp = r_ebp;
    /* 00540b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540b1c: ret  */ FN_RET(0x00540af0); r_esp += 4; return;
}

void f_00540b20(void) /* sub_540B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540b20);
    /* 00540b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00540b23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540b24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540b27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540b2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00540b2d: mov dword ptr [eax + 0xe8], ecx */ W32((u32)(r_eax+0xe8u), r_ecx);
    /* 00540b33: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540b36: cmp dword ptr [edx + 0xe8], -1 */ {  u32 a = R32((u32)(r_edx+0xe8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540b3d: je 0x540b56 */ if (fZ) goto L_00540b56;
L_00540b3f:; BB(0x00540b3f);
    /* 00540b3f: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00540b42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540b43: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00540b46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540b47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540b49: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00540b4f: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x540b54u); f_005d8a20();
    /* 00540b54: jmp 0x540b67 */ goto L_00540b67;
L_00540b56:; BB(0x00540b56);
    /* 00540b56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540b58: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00540b5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540b5c: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00540b62: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x540b67u); f_005d8a20();
L_00540b67:; BB(0x00540b67);
    /* 00540b67: mov esp, ebp */ r_esp = r_ebp;
    /* 00540b69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540b6a: ret 8 */ FN_RET(0x00540b20); r_esp += 12; return;
}

void f_00540b70(void) /* sub_540B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540b70);
    /* 00540b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540b71: mov ebp, esp */ r_ebp = r_esp;
    /* 00540b73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540b74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540b77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00540b7a: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00540b7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540b80: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00540b87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00540b8a: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00540b8e: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 00540b92: mov esp, ebp */ r_esp = r_ebp;
    /* 00540b94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540b95: ret 0xc */ FN_RET(0x00540b70); r_esp += 16; return;
}

void f_00540ba0(void) /* sub_540BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540ba0);
    /* 00540ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00540ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540ba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540ba7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00540baa: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00540bad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540bb0: lea edx, [ecx + eax + 0xc8] */ r_edx = (u32)(r_ecx+r_eax+0xc8u);
    /* 00540bb7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00540bba: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 00540bbe: mov esp, ebp */ r_esp = r_ebp;
    /* 00540bc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540bc1: ret 8 */ FN_RET(0x00540ba0); r_esp += 12; return;
}

void f_00540bd0(void) /* sub_540BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540bd0);
    /* 00540bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00540bd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540bd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00540bd9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540be0: jmp 0x540beb */ goto L_00540beb;
L_00540be2:; BB(0x00540be2);
    /* 00540be2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540be5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540be8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00540beb:; BB(0x00540beb);
    /* 00540beb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540bef: jge 0x540c0c */ if ((fS==fO)) goto L_00540c0c;
L_00540bf1:; BB(0x00540bf1);
    /* 00540bf1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540bf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540bf5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00540bf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540bf9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540bfc: call 0x540ba0 */ r_esp -= 4; W32(r_esp, 0x540c01u); f_00540ba0();
    /* 00540c01: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00540c04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540c06: jne 0x540c0a */ if (!fZ) goto L_00540c0a;
L_00540c08:; BB(0x00540c08);
    /* 00540c08: jmp 0x540c0c */ goto L_00540c0c;
L_00540c0a:; BB(0x00540c0a);
    /* 00540c0a: jmp 0x540be2 */ goto L_00540be2;
L_00540c0c:; BB(0x00540c0c);
    /* 00540c0c: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00540c10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540c11: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540c14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540c15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00540c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540c19: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540c1c: call 0x540b70 */ r_esp -= 4; W32(r_esp, 0x540c21u); f_00540b70();
    /* 00540c21: mov esp, ebp */ r_esp = r_ebp;
    /* 00540c23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540c24: ret 8 */ FN_RET(0x00540bd0); r_esp += 12; return;
}

void f_00540c30(void) /* sub_540C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540c30);
    /* 00540c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00540c33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540c36: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00540c39: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00540c40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540c47: jmp 0x540c52 */ goto L_00540c52;
L_00540c49:; BB(0x00540c49);
    /* 00540c49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540c4c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540c4f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00540c52:; BB(0x00540c52);
    /* 00540c52: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540c56: jge 0x540c7a */ if ((fS==fO)) goto L_00540c7a;
L_00540c58:; BB(0x00540c58);
    /* 00540c58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540c5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540c5c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00540c5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540c60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540c63: call 0x540ba0 */ r_esp -= 4; W32(r_esp, 0x540c68u); f_00540ba0();
    /* 00540c68: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00540c6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540c6d: je 0x540c78 */ if (fZ) goto L_00540c78;
L_00540c6f:; BB(0x00540c6f);
    /* 00540c6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540c72: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00540c75: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00540c78:; BB(0x00540c78);
    /* 00540c78: jmp 0x540c49 */ goto L_00540c49;
L_00540c7a:; BB(0x00540c7a);
    /* 00540c7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540c7d: mov esp, ebp */ r_esp = r_ebp;
    /* 00540c7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540c80: ret 4 */ FN_RET(0x00540c30); r_esp += 8; return;
}

void f_00540c90(void) /* sub_540C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540c90);
    /* 00540c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00540c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00540c97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540c9a: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540c9d: mov al, byte ptr [eax + 0xed] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xedu))) & 0xffu);
    /* 00540ca3: mov esp, ebp */ r_esp = r_ebp;
    /* 00540ca5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540ca6: ret 4 */ FN_RET(0x00540c90); r_esp += 8; return;
}

void f_00540cb0(void) /* sub_540CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540cb0);
    /* 00540cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00540cb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540cb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00540cb9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00540cc0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540cc7: jmp 0x540cd2 */ goto L_00540cd2;
L_00540cc9:; BB(0x00540cc9);
    /* 00540cc9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540ccc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540ccf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00540cd2:; BB(0x00540cd2);
    /* 00540cd2: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540cd6: jge 0x540cec */ if ((fS==fO)) goto L_00540cec;
L_00540cd8:; BB(0x00540cd8);
    /* 00540cd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540cdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540cdc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540cdf: call 0x540c30 */ r_esp -= 4; W32(r_esp, 0x540ce4u); f_00540c30();
    /* 00540ce4: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540ce7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00540cea: jmp 0x540cc9 */ goto L_00540cc9;
L_00540cec:; BB(0x00540cec);
    /* 00540cec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540cef: mov esp, ebp */ r_esp = r_ebp;
    /* 00540cf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540cf2: ret  */ FN_RET(0x00540cb0); r_esp += 4; return;
}

void f_00540d00(void) /* sub_540D00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540d00);
    /* 00540d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00540d03: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540d06: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00540d09: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 00540d10: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00540d17: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00540d1e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00540d25: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540d2c: jmp 0x540d37 */ goto L_00540d37;
L_00540d2e:; BB(0x00540d2e);
    /* 00540d2e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540d31: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540d34: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00540d37:; BB(0x00540d37);
    /* 00540d37: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540d3b: jge 0x540dcd */ if ((fS==fO)) goto L_00540dcd;
L_00540d41:; BB(0x00540d41);
    /* 00540d41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540d44: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00540d48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540d49: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540d4eu); f_005dcb00();
    /* 00540d4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540d51: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00540d54: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00540d57: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x540d5cu); f_0063aac0();
    /* 00540d5c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00540d5e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00540d61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00540d63: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540d67: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00540d6a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00540d6d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540d6f: jne 0x540dc8 */ if (!fZ) goto L_00540dc8;
L_00540d71:; BB(0x00540d71);
    /* 00540d71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540d74: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00540d78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540d79: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540d7eu); f_005dcb00();
    /* 00540d7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540d81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00540d84: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00540d87: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 00540d8d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 00540d90: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00540d94: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540d96: jne 0x540dc8 */ if (!fZ) goto L_00540dc8;
L_00540d98:; BB(0x00540d98);
    /* 00540d98: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540d9b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 00540d9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540da0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540da5u); f_005dcb00();
    /* 00540da5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540da8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00540dab: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00540dae: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 00540db4: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 00540db7: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 00540dbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540dbd: jne 0x540dc8 */ if (!fZ) goto L_00540dc8;
L_00540dbf:; BB(0x00540dbf);
    /* 00540dbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540dc2: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 00540dc6: jmp 0x540dd0 */ goto L_00540dd0;
L_00540dc8:; BB(0x00540dc8);
    /* 00540dc8: jmp 0x540d2e */ goto L_00540d2e;
L_00540dcd:; BB(0x00540dcd);
    /* 00540dcd: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00540dd0:; BB(0x00540dd0);
    /* 00540dd0: mov esp, ebp */ r_esp = r_ebp;
    /* 00540dd2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540dd3: ret  */ FN_RET(0x00540d00); r_esp += 4; return;
}

void f_00540de0(void) /* sub_540DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540de0);
    /* 00540de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00540de3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540de6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00540de9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00540dec: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00540def: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00540df2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540df9: jmp 0x540e04 */ goto L_00540e04;
L_00540dfb:; BB(0x00540dfb);
    /* 00540dfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540dfe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00540e01: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00540e04:; BB(0x00540e04);
    /* 00540e04: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540e08: jge 0x540e2f */ if ((fS==fO)) goto L_00540e2f;
L_00540e0a:; BB(0x00540e0a);
    /* 00540e0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540e0c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00540e0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540e10: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540e13: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540e16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540e19: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00540e1d: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x540e22u); f_005cb7d0();
    /* 00540e22: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00540e25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540e27: je 0x540e2d */ if (fZ) goto L_00540e2d;
L_00540e29:; BB(0x00540e29);
    /* 00540e29: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00540e2b: jmp 0x540e31 */ goto L_00540e31;
L_00540e2d:; BB(0x00540e2d);
    /* 00540e2d: jmp 0x540dfb */ goto L_00540dfb;
L_00540e2f:; BB(0x00540e2f);
    /* 00540e2f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00540e31:; BB(0x00540e31);
    /* 00540e31: mov esp, ebp */ r_esp = r_ebp;
    /* 00540e33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540e34: ret 4 */ FN_RET(0x00540de0); r_esp += 8; return;
}

void f_00540e40(void) /* sub_540E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540e40);
    /* 00540e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00540e43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540e46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00540e49: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540e50: jmp 0x540e5b */ goto L_00540e5b;
L_00540e52:; BB(0x00540e52);
    /* 00540e52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540e55: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540e58: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00540e5b:; BB(0x00540e5b);
    /* 00540e5b: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540e5f: jge 0x540e77 */ if ((fS==fO)) goto L_00540e77;
L_00540e61:; BB(0x00540e61);
    /* 00540e61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540e64: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540e67: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 00540e6b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540e6e: jne 0x540e75 */ if (!fZ) goto L_00540e75;
L_00540e70:; BB(0x00540e70);
    /* 00540e70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540e73: jmp 0x540e7a */ goto L_00540e7a;
L_00540e75:; BB(0x00540e75);
    /* 00540e75: jmp 0x540e52 */ goto L_00540e52;
L_00540e77:; BB(0x00540e77);
    /* 00540e77: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00540e7a:; BB(0x00540e7a);
    /* 00540e7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00540e7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540e7d: ret 4 */ FN_RET(0x00540e40); r_esp += 8; return;
}

void f_00540e80(void) /* sub_540E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540e80);
    /* 00540e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00540e83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540e86: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00540e89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00540e8c: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00540e8f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00540e92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540e99: jmp 0x540ea4 */ goto L_00540ea4;
L_00540e9b:; BB(0x00540e9b);
    /* 00540e9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540e9e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00540ea1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00540ea4:; BB(0x00540ea4);
    /* 00540ea4: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540ea8: jge 0x540ec0 */ if ((fS==fO)) goto L_00540ec0;
L_00540eaa:; BB(0x00540eaa);
    /* 00540eaa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540ead: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00540eb0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540eb3: cmp dword ptr [eax + edx*8 + 0x38], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*8+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540eb8: jle 0x540ebe */ if ((fZ||fS!=fO)) goto L_00540ebe;
L_00540eba:; BB(0x00540eba);
    /* 00540eba: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00540ebc: jmp 0x540ec2 */ goto L_00540ec2;
L_00540ebe:; BB(0x00540ebe);
    /* 00540ebe: jmp 0x540e9b */ goto L_00540e9b;
L_00540ec0:; BB(0x00540ec0);
    /* 00540ec0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00540ec2:; BB(0x00540ec2);
    /* 00540ec2: mov esp, ebp */ r_esp = r_ebp;
    /* 00540ec4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540ec5: ret 4 */ FN_RET(0x00540e80); r_esp += 8; return;
}

void f_00540ed0(void) /* sub_540ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540ed0);
    /* 00540ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00540ed3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540ed6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00540ed9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00540edc: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00540edf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00540ee2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00540ee5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540ee6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00540ee9: call 0x540e80 */ r_esp -= 4; W32(r_esp, 0x540eeeu); f_00540e80();
    /* 00540eee: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00540ef1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540ef3: jne 0x540efa */ if (!fZ) goto L_00540efa;
L_00540ef5:; BB(0x00540ef5);
    /* 00540ef5: jmp 0x540fd6 */ goto L_00540fd6;
L_00540efa:; BB(0x00540efa);
    /* 00540efa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00540efd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00540efe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540f03u); f_005dcb00();
    /* 00540f03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540f06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00540f08: jne 0x540f0f */ if (!fZ) goto L_00540f0f;
L_00540f0a:; BB(0x00540f0a);
    /* 00540f0a: jmp 0x540fd6 */ goto L_00540fd6;
L_00540f0f:; BB(0x00540f0f);
    /* 00540f0f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00540f12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540f13: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 00540f19: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00540f1b: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00540f21: mov edx, dword ptr [eax + 0x290] */ r_edx = R32((u32)(r_eax+0x290u));
    /* 00540f27: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x540f29u); call_ind(t); }
    /* 00540f29: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00540f30: jmp 0x540f3b */ goto L_00540f3b;
L_00540f32:; BB(0x00540f32);
    /* 00540f32: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00540f35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540f38: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00540f3b:; BB(0x00540f3b);
    /* 00540f3b: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540f3f: jge 0x540f89 */ if ((fS==fO)) goto L_00540f89;
L_00540f41:; BB(0x00540f41);
    /* 00540f41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540f44: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00540f47: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00540f4a: cmp dword ptr [edx + ecx*8 + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00540f4f: jle 0x540f87 */ if ((fZ||fS!=fO)) goto L_00540f87;
L_00540f51:; BB(0x00540f51);
    /* 00540f51: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540f53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540f55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540f58: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540f5b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00540f5e: lea edx, [ecx + eax*8 + 0x38] */ r_edx = (u32)(r_ecx+r_eax*8+0x38u);
    /* 00540f62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00540f63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540f66: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540f69: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00540f6c: mov edx, dword ptr [ecx + eax*4 + 8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00540f70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540f73: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540f76: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00540f79: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 00540f7d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00540f7f: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00540f85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x540f87u); call_ind(t); }
L_00540f87:; BB(0x00540f87);
    /* 00540f87: jmp 0x540f32 */ goto L_00540f32;
L_00540f89:; BB(0x00540f89);
    /* 00540f89: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00540f8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00540f8d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x540f92u); f_005dcb00();
    /* 00540f92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00540f95: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00540f98: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00540f9b: mov byte ptr [edx + 0x4a0], 1 */ W8((u32)(r_edx+0x4a0u), 0x1u);
    /* 00540fa2: mov ecx, dword ptr [0x7933f4] */ r_ecx = R32((u32)(0x7933f4u));
    /* 00540fa8: call 0x53b1a0 */ r_esp -= 4; W32(r_esp, 0x540fadu); f_0053b1a0();
    /* 00540fad: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00540fb3: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x540fb8u); f_005db890();
    /* 00540fb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00540fba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00540fbc: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 00540fc1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00540fc4: mov edx, dword ptr [0x7933e8] */ r_edx = R32((u32)(0x7933e8u));
    /* 00540fca: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00540fcd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00540fcf: mov ecx, eax */ r_ecx = r_eax;
    /* 00540fd1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00540fd4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x540fd6u); call_ind(t); }
L_00540fd6:; BB(0x00540fd6);
    /* 00540fd6: mov esp, ebp */ r_esp = r_ebp;
    /* 00540fd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00540fd9: ret 4 */ FN_RET(0x00540ed0); r_esp += 8; return;
}

void f_00540fe0(void) /* sub_540FE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00540fe0);
    /* 00540fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00540fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00540fe3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00540fe6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00540fe7: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00540fea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00540ff1: jmp 0x540ffc */ goto L_00540ffc;
L_00540ff3:; BB(0x00540ff3);
    /* 00540ff3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00540ff6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00540ff9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00540ffc:; BB(0x00540ffc);
    /* 00540ffc: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541000: jge 0x5410c2 */ if ((fS==fO)) goto L_005410c2;
L_00541006:; BB(0x00541006);
    /* 00541006: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541009: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054100c: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0054100f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00541016: jmp 0x541021 */ goto L_00541021;
L_00541018:; BB(0x00541018);
    /* 00541018: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054101b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054101e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00541021:; BB(0x00541021);
    /* 00541021: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00541025: jge 0x5410bd */ if ((fS==fO)) goto L_005410bd;
L_0054102b:; BB(0x0054102b);
    /* 0054102b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054102e: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00541031: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00541034: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541036: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541039: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054103a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054103d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00541040: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00541044: call 0x5cb7d0 */ r_esp -= 4; W32(r_esp, 0x541049u); f_005cb7d0();
    /* 00541049: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0054104c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054104e: je 0x541092 */ if (fZ) goto L_00541092;
L_00541050:; BB(0x00541050);
    /* 00541050: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00541053: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00541056: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0054105a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0054105d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00541060: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00541063: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00541066: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 0054106a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054106c: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0054106f: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00541072: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00541076: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00541079: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0054107c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054107f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00541082: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00541085: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00541088: mov dword ptr [esi + ecx*8 + 0x38], edx */ W32((u32)(r_esi+r_ecx*8+0x38u), r_edx);
    /* 0054108c: mov dword ptr [esi + ecx*8 + 0x3c], eax */ W32((u32)(r_esi+r_ecx*8+0x3cu), r_eax);
    /* 00541090: jmp 0x5410b8 */ goto L_005410b8;
L_00541092:; BB(0x00541092);
    /* 00541092: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541094: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00541096: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x54109bu); f_0064c8a0();
    /* 0054109b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054109e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005410a1: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005410a4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005410a7: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005410aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005410ad: mov dword ptr [eax + edx*8 + 0x38], ecx */ W32((u32)(r_eax+r_edx*8+0x38u), r_ecx);
    /* 005410b1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005410b4: mov dword ptr [eax + edx*8 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*8+0x3cu), r_ecx);
L_005410b8:; BB(0x005410b8);
    /* 005410b8: jmp 0x541018 */ goto L_00541018;
L_005410bd:; BB(0x005410bd);
    /* 005410bd: jmp 0x540ff3 */ goto L_00540ff3;
L_005410c2:; BB(0x005410c2);
    /* 005410c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005410c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005410c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005410c6: ret  */ FN_RET(0x00540fe0); r_esp += 4; return;
}

