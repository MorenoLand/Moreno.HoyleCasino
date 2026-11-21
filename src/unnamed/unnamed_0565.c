#include "protos.h"

void f_005655d0(void) /* sub_5655D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005655d0);
    /* 005655d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005655d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005655d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005655d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005655d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005655e0: jmp 0x5655eb */ goto L_005655eb;
L_005655e2:; BB(0x005655e2);
    /* 005655e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005655e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005655e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005655eb:; BB(0x005655eb);
    /* 005655eb: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005655ef: jge 0x565600 */ if ((fS==fO)) goto L_00565600;
L_005655f1:; BB(0x005655f1);
    /* 005655f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005655f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005655f7: mov dword ptr [edx + ecx*4], 0 */ W32((u32)(r_edx+r_ecx*4), 0x0u);
    /* 005655fe: jmp 0x5655e2 */ goto L_005655e2;
L_00565600:; BB(0x00565600);
    /* 00565600: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565603: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 0056560a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056560d: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00565614: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565617: mov dword ptr [edx + 0x30], 0x31224c */ W32((u32)(r_edx+0x30u), 0x31224cu);
    /* 0056561e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565621: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 00565628: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056562b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056562d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056562e: ret  */ FN_RET(0x005655d0); r_esp += 4; return;
}

void f_00565630(void) /* sub_565630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565630);
    /* 00565630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565631: mov ebp, esp */ r_ebp = r_esp;
    /* 00565633: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00565636: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00565639: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00565640: jmp 0x56564b */ goto L_0056564b;
L_00565642:; BB(0x00565642);
    /* 00565642: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565645: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00565648: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056564b:; BB(0x0056564b);
    /* 0056564b: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056564f: jge 0x565685 */ if ((fS==fO)) goto L_00565685;
L_00565651:; BB(0x00565651);
    /* 00565651: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565654: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00565657: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0056565a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0056565d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565660: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00565663: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565667: je 0x56567c */ if (fZ) goto L_0056567c;
L_00565669:; BB(0x00565669);
    /* 00565669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056566b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056566e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00565670: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565673: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00565675: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x565677u); call_ind(t); }
    /* 00565677: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0056567a: jmp 0x565683 */ goto L_00565683;
L_0056567c:; BB(0x0056567c);
    /* 0056567c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00565683:; BB(0x00565683);
    /* 00565683: jmp 0x565642 */ goto L_00565642;
L_00565685:; BB(0x00565685);
    /* 00565685: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00565688: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0056568b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056568e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00565691: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00565694: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565698: je 0x5656ad */ if (fZ) goto L_005656ad;
L_0056569a:; BB(0x0056569a);
    /* 0056569a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056569c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056569f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005656a1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005656a4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005656a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5656a8u); call_ind(t); }
    /* 005656a8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005656ab: jmp 0x5656b4 */ goto L_005656b4;
L_005656ad:; BB(0x005656ad);
    /* 005656ad: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005656b4:; BB(0x005656b4);
    /* 005656b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005656b7: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005656ba: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005656bd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005656c0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005656c3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005656c7: je 0x5656dc */ if (fZ) goto L_005656dc;
L_005656c9:; BB(0x005656c9);
    /* 005656c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005656cb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005656ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005656d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005656d3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005656d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5656d7u); call_ind(t); }
    /* 005656d7: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005656da: jmp 0x5656e3 */ goto L_005656e3;
L_005656dc:; BB(0x005656dc);
    /* 005656dc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005656e3:; BB(0x005656e3);
    /* 005656e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005656e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005656e6: ret  */ FN_RET(0x00565630); r_esp += 4; return;
}

void f_005656f0(void) /* sub_5656F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005656f0);
    /* 005656f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005656f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005656f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005656f5: push 0x6a5b32 */ { u32 v = 0x6a5b32u; r_esp -= 4; W32(r_esp, v); }
    /* 005656fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00565700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565701: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00565704: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00565709: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056570b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056570c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0056570f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00565715: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00565718: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0056571f: jmp 0x56572a */ goto L_0056572a;
L_00565721:; BB(0x00565721);
    /* 00565721: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565724: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00565727: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0056572a:; BB(0x0056572a);
    /* 0056572a: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056572e: jge 0x5657e4 */ if ((fS==fO)) goto L_005657e4;
L_00565734:; BB(0x00565734);
    /* 00565734: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00565739: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56573eu); f_00686d82();
    /* 0056573e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00565741: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00565744: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056574b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056574f: je 0x56575e */ if (fZ) goto L_0056575e;
L_00565751:; BB(0x00565751);
    /* 00565751: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00565754: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x565759u); f_005eaaf0();
    /* 00565759: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056575c: jmp 0x565765 */ goto L_00565765;
L_0056575e:; BB(0x0056575e);
    /* 0056575e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00565765:; BB(0x00565765);
    /* 00565765: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00565768: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056576b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00565772: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565775: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00565778: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056577b: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 0056577e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00565780: push 0x70a */ { u32 v = 0x70au; r_esp -= 4; W32(r_esp, v); }
    /* 00565785: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565787: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565789: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056578c: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0056578f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565790: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565793: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00565796: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00565799: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x56579eu); f_005eae80();
    /* 0056579e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005657a0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005657a3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005657a6: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 005657a9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005657ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005657af: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005657b2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005657b4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005657ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5657bcu); call_ind(t); }
    /* 005657bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005657bf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005657c2: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 005657c5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005657c8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005657cb: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 005657ce: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005657d0: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005657d3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5657d5u); call_ind(t); }
    /* 005657d5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005657d8: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005657db: mov byte ptr [eax + 0x38], 0 */ W8((u32)(r_eax+0x38u), 0x0u);
    /* 005657df: jmp 0x565721 */ goto L_00565721;
L_005657e4:; BB(0x005657e4);
    /* 005657e4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005657eb: jmp 0x5657f6 */ goto L_005657f6;
L_005657ed:; BB(0x005657ed);
    /* 005657ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005657f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005657f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005657f6:; BB(0x005657f6);
    /* 005657f6: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005657fa: jge 0x5658ac */ if ((fS==fO)) goto L_005658ac;
L_00565800:; BB(0x00565800);
    /* 00565800: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00565805: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56580au); f_00686d82();
    /* 0056580a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056580d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00565810: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00565817: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056581b: je 0x56582a */ if (fZ) goto L_0056582a;
L_0056581d:; BB(0x0056581d);
    /* 0056581d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00565820: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x565825u); f_005eaaf0();
    /* 00565825: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00565828: jmp 0x565831 */ goto L_00565831;
L_0056582a:; BB(0x0056582a);
    /* 0056582a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00565831:; BB(0x00565831);
    /* 00565831: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00565834: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00565837: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056583e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565841: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00565844: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00565847: mov dword ptr [ecx + eax*4 + 0x20], edx */ W32((u32)(r_ecx+r_eax*4+0x20u), r_edx);
    /* 0056584b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056584d: push 0x70a */ { u32 v = 0x70au; r_esp -= 4; W32(r_esp, v); }
    /* 00565852: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565854: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565856: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00565859: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0056585c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056585d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565860: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00565863: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00565867: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x56586cu); f_005eae80();
    /* 0056586c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056586e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565871: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00565874: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00565878: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056587b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056587e: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00565882: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00565884: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0056588a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56588cu); call_ind(t); }
    /* 0056588c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056588f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00565892: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00565896: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565899: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056589c: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005658a0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005658a2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005658a5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5658a7u); call_ind(t); }
    /* 005658a7: jmp 0x5657ed */ goto L_005657ed;
L_005658ac:; BB(0x005658ac);
    /* 005658ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005658af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005658b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005658b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005658b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005658ba: ret  */ FN_RET(0x005656f0); r_esp += 4; return;
}

void f_005658c0(void) /* sub_5658C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005658c0);
    /* 005658c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005658c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005658c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005658c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005658c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005658d0: jmp 0x5658db */ goto L_005658db;
L_005658d2:; BB(0x005658d2);
    /* 005658d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005658d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005658d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005658db:; BB(0x005658db);
    /* 005658db: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005658df: jge 0x565902 */ if ((fS==fO)) goto L_00565902;
L_005658e1:; BB(0x005658e1);
    /* 005658e1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005658e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005658e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005658e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005658eb: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 005658ee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005658f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005658f4: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005658f7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005658f9: mov ecx, edx */ r_ecx = r_edx;
    /* 005658fb: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005658fe: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x565900u); call_ind(t); }
    /* 00565900: jmp 0x5658d2 */ goto L_005658d2;
L_00565902:; BB(0x00565902);
    /* 00565902: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00565909: jmp 0x565914 */ goto L_00565914;
L_0056590b:; BB(0x0056590b);
    /* 0056590b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056590e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00565911: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00565914:; BB(0x00565914);
    /* 00565914: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565918: jge 0x56593d */ if ((fS==fO)) goto L_0056593d;
L_0056591a:; BB(0x0056591a);
    /* 0056591a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0056591d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056591e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565921: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565924: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00565928: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056592b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056592e: mov edx, dword ptr [eax + edx*4 + 0x20] */ r_edx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 00565932: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00565934: mov ecx, edx */ r_ecx = r_edx;
    /* 00565936: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00565939: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56593bu); call_ind(t); }
    /* 0056593b: jmp 0x56590b */ goto L_0056590b;
L_0056593d:; BB(0x0056593d);
    /* 0056593d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056593f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565940: ret 4 */ FN_RET(0x005658c0); r_esp += 8; return;
}

void f_00565950(void) /* sub_565950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565950);
    /* 00565950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565951: mov ebp, esp */ r_ebp = r_esp;
    /* 00565953: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00565956: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00565959: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00565960: jmp 0x56596b */ goto L_0056596b;
L_00565962:; BB(0x00565962);
    /* 00565962: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565965: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00565968: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056596b:; BB(0x0056596b);
    /* 0056596b: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056596f: jge 0x565985 */ if ((fS==fO)) goto L_00565985;
L_00565971:; BB(0x00565971);
    /* 00565971: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00565974: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565975: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565978: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056597b: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0056597e: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x565983u); f_005eb5d0();
    /* 00565983: jmp 0x565962 */ goto L_00565962;
L_00565985:; BB(0x00565985);
    /* 00565985: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056598c: jmp 0x565997 */ goto L_00565997;
L_0056598e:; BB(0x0056598e);
    /* 0056598e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565991: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00565994: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00565997:; BB(0x00565997);
    /* 00565997: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056599b: jge 0x5659b2 */ if ((fS==fO)) goto L_005659b2;
L_0056599d:; BB(0x0056599d);
    /* 0056599d: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005659a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005659a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005659a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005659a7: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 005659ab: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5659b0u); f_005eb5d0();
    /* 005659b0: jmp 0x56598e */ goto L_0056598e;
L_005659b2:; BB(0x005659b2);
    /* 005659b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005659b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005659b5: ret 4 */ FN_RET(0x00565950); r_esp += 8; return;
}

void f_005659c0(void) /* sub_5659C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005659c0);
    /* 005659c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005659c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005659c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005659c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005659c9: movzx eax, byte ptr [0x793430] */ r_eax = (u32)R8((u32)(0x793430u));
    /* 005659d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005659d2: jne 0x5659d9 */ if (!fZ) goto L_005659d9;
L_005659d4:; BB(0x005659d4);
    /* 005659d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005659d7: jmp 0x565a2d */ goto L_00565a2d;
L_005659d9:; BB(0x005659d9);
    /* 005659d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005659dc: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005659df: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005659e2: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005659e6: ja 0x565a23 */ if ((!fC&&!fZ)) goto L_00565a23;
L_005659e8:; BB(0x005659e8);
    /* 005659e8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005659eb: jmp dword ptr [eax*4 + 0x565a34] */ { u32 t = R32((u32)(r_eax*4+0x565a34u)); switch (t) { case 0x5659f2u: goto L_005659f2; case 0x5659f9u: goto L_005659f9; case 0x565a00u: goto L_00565a00; case 0x565a07u: goto L_00565a07; case 0x565a0eu: goto L_00565a0e; case 0x565a15u: goto L_00565a15; case 0x565a1cu: goto L_00565a1c; default: UNSUP(0x005659eb, "jump table entry is not a known target"); } }
L_005659f2:; BB(0x005659f2);
    /* 005659f2: mov eax, 0xae8f8 */ r_eax = 0xae8f8u;
    /* 005659f7: jmp 0x565a2d */ goto L_00565a2d;
L_005659f9:; BB(0x005659f9);
    /* 005659f9: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 005659fe: jmp 0x565a2d */ goto L_00565a2d;
L_00565a00:; BB(0x00565a00);
    /* 00565a00: mov eax, 0xfa */ r_eax = 0xfau;
    /* 00565a05: jmp 0x565a2d */ goto L_00565a2d;
L_00565a07:; BB(0x00565a07);
    /* 00565a07: mov eax, 0x14ca634 */ r_eax = 0x14ca634u;
    /* 00565a0c: jmp 0x565a2d */ goto L_00565a2d;
L_00565a0e:; BB(0x00565a0e);
    /* 00565a0e: mov eax, 0xa */ r_eax = 0xau;
    /* 00565a13: jmp 0x565a2d */ goto L_00565a2d;
L_00565a15:; BB(0x00565a15);
    /* 00565a15: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 00565a1a: jmp 0x565a2d */ goto L_00565a2d;
L_00565a1c:; BB(0x00565a1c);
    /* 00565a1c: mov eax, 0x186a0 */ r_eax = 0x186a0u;
    /* 00565a21: jmp 0x565a2d */ goto L_00565a2d;
L_00565a23:; BB(0x00565a23);
    /* 00565a23: mov eax, 0x7d0 */ r_eax = 0x7d0u;
    /* 00565a28: jmp 0x565a2d */ goto L_00565a2d;
L_00565a2d:; BB(0x00565a2d);
    /* 00565a2d: mov esp, ebp */ r_esp = r_ebp;
    /* 00565a2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565a30: ret 4 */ FN_RET(0x005659c0); r_esp += 8; return;
}

void f_00565a50(void) /* sub_565A50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565a50);
    /* 00565a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00565a53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00565a56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00565a59: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00565a60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00565a62: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00565a65: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565a68: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00565a6b: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 00565a6e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565a71: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00565a74: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00565a77: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00565a7b: ja 0x565b91 */ if ((!fC&&!fZ)) goto L_00565b91;
L_00565a81:; BB(0x00565a81);
    /* 00565a81: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00565a84: jmp dword ptr [edx*4 + 0x565c48] */ { u32 t = R32((u32)(r_edx*4+0x565c48u)); switch (t) { case 0x565a8bu: goto L_00565a8b; case 0x565aabu: goto L_00565aab; case 0x565ac4u: goto L_00565ac4; case 0x565aeau: goto L_00565aea; case 0x565b10u: goto L_00565b10; case 0x565b3du: goto L_00565b3d; case 0x565b67u: goto L_00565b67; default: UNSUP(0x00565a84, "jump table entry is not a known target"); } }
L_00565a8b:; BB(0x00565a8b);
    /* 00565a8b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565a8e: mov dword ptr [eax + 0x30], 0x31224c */ W32((u32)(r_eax+0x30u), 0x31224cu);
    /* 00565a95: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565a98: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 00565a9f: mov dword ptr [ebp - 8], 0x5d */ W32((u32)(r_ebp+0xfffffff8u), 0x5du);
    /* 00565aa6: jmp 0x565bbe */ goto L_00565bbe;
L_00565aab:; BB(0x00565aab);
    /* 00565aab: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565aae: mov dword ptr [edx + 0x30], 0x31224c */ W32((u32)(r_edx+0x30u), 0x31224cu);
    /* 00565ab5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565ab8: mov dword ptr [eax + 0x34], 1 */ W32((u32)(r_eax+0x34u), 0x1u);
    /* 00565abf: jmp 0x565bbe */ goto L_00565bbe;
L_00565ac4:; BB(0x00565ac4);
    /* 00565ac4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565ac7: mov dword ptr [ecx + 0x34], 1 */ W32((u32)(r_ecx+0x34u), 0x1u);
    /* 00565ace: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565ad1: mov dword ptr [edx + 0x30], 0x31224b */ W32((u32)(r_edx+0x30u), 0x31224bu);
    /* 00565ad8: push 0x15f */ { u32 v = 0x15fu; r_esp -= 4; W32(r_esp, v); }
    /* 00565add: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565ae0: call 0x565cf0 */ r_esp -= 4; W32(r_esp, 0x565ae5u); f_00565cf0();
    /* 00565ae5: jmp 0x565bbe */ goto L_00565bbe;
L_00565aea:; BB(0x00565aea);
    /* 00565aea: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565aed: mov dword ptr [eax + 0x34], 1 */ W32((u32)(r_eax+0x34u), 0x1u);
    /* 00565af4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565af7: mov dword ptr [ecx + 0x30], 0x31224d */ W32((u32)(r_ecx+0x30u), 0x31224du);
    /* 00565afe: push 0x15f */ { u32 v = 0x15fu; r_esp -= 4; W32(r_esp, v); }
    /* 00565b03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b06: call 0x565cf0 */ r_esp -= 4; W32(r_esp, 0x565b0bu); f_00565cf0();
    /* 00565b0b: jmp 0x565bbe */ goto L_00565bbe;
L_00565b10:; BB(0x00565b10);
    /* 00565b10: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b13: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00565b1a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b1d: mov dword ptr [eax + 0x30], 0x31224b */ W32((u32)(r_eax+0x30u), 0x31224bu);
    /* 00565b24: mov dword ptr [ebp - 8], 0x1a3 */ W32((u32)(r_ebp+0xfffffff8u), 0x1a3u);
    /* 00565b2b: push 0x15f */ { u32 v = 0x15fu; r_esp -= 4; W32(r_esp, v); }
    /* 00565b30: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b33: call 0x565cf0 */ r_esp -= 4; W32(r_esp, 0x565b38u); f_00565cf0();
    /* 00565b38: jmp 0x565bbe */ goto L_00565bbe;
L_00565b3d:; BB(0x00565b3d);
    /* 00565b3d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b40: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 00565b47: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b4a: mov dword ptr [edx + 0x30], 0x31224b */ W32((u32)(r_edx+0x30u), 0x31224bu);
    /* 00565b51: mov dword ptr [ebp - 8], 0x149 */ W32((u32)(r_ebp+0xfffffff8u), 0x149u);
    /* 00565b58: push 0x125 */ { u32 v = 0x125u; r_esp -= 4; W32(r_esp, v); }
    /* 00565b5d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b60: call 0x565cf0 */ r_esp -= 4; W32(r_esp, 0x565b65u); f_00565cf0();
    /* 00565b65: jmp 0x565bbe */ goto L_00565bbe;
L_00565b67:; BB(0x00565b67);
    /* 00565b67: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b6a: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 00565b71: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b74: mov dword ptr [ecx + 0x30], 0x31224b */ W32((u32)(r_ecx+0x30u), 0x31224bu);
    /* 00565b7b: mov dword ptr [ebp - 8], 0x149 */ W32((u32)(r_ebp+0xfffffff8u), 0x149u);
    /* 00565b82: push 0x141 */ { u32 v = 0x141u; r_esp -= 4; W32(r_esp, v); }
    /* 00565b87: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b8a: call 0x565cf0 */ r_esp -= 4; W32(r_esp, 0x565b8fu); f_00565cf0();
    /* 00565b8f: jmp 0x565bbe */ goto L_00565bbe;
L_00565b91:; BB(0x00565b91);
    /* 00565b91: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b94: mov dword ptr [edx + 0x34], 2 */ W32((u32)(r_edx+0x34u), 0x2u);
    /* 00565b9b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565b9e: mov dword ptr [eax + 0x30], 0x31224c */ W32((u32)(r_eax+0x30u), 0x31224cu);
    /* 00565ba5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565ba8: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00565bab: mov eax, dword ptr [edx*8 + 0x7437f4] */ r_eax = R32((u32)(r_edx*8+0x7437f4u));
    /* 00565bb2: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00565bb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565bb6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565bb9: call 0x565cf0 */ r_esp -= 4; W32(r_esp, 0x565bbeu); f_00565cf0();
L_00565bbe:; BB(0x00565bbe);
    /* 00565bbe: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00565bc5: jmp 0x565bd0 */ goto L_00565bd0;
L_00565bc7:; BB(0x00565bc7);
    /* 00565bc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565bca: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00565bcd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00565bd0:; BB(0x00565bd0);
    /* 00565bd0: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565bd4: jge 0x565bed */ if ((fS==fO)) goto L_00565bed;
L_00565bd6:; BB(0x00565bd6);
    /* 00565bd6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565bd9: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00565bdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565bdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565be0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565be3: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00565be6: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x565bebu); f_005eaf00();
    /* 00565beb: jmp 0x565bc7 */ goto L_00565bc7;
L_00565bed:; BB(0x00565bed);
    /* 00565bed: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00565bf4: jmp 0x565bff */ goto L_00565bff;
L_00565bf6:; BB(0x00565bf6);
    /* 00565bf6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565bf9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00565bfc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00565bff:; BB(0x00565bff);
    /* 00565bff: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565c03: jge 0x565c40 */ if ((fS==fO)) goto L_00565c40;
L_00565c05:; BB(0x00565c05);
    /* 00565c05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565c08: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00565c0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00565c0c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565c0f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565c12: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 00565c16: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x565c1bu); f_005eaf00();
    /* 00565c1b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565c1e: mov eax, dword ptr [ebp + edx*4 - 8] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xfffffff8u));
    /* 00565c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565c23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565c26: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565c29: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00565c2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565c30: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565c33: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 00565c37: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00565c39: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00565c3c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x565c3eu); call_ind(t); }
    /* 00565c3e: jmp 0x565bf6 */ goto L_00565bf6;
L_00565c40:; BB(0x00565c40);
    /* 00565c40: mov esp, ebp */ r_esp = r_ebp;
    /* 00565c42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565c43: ret 4 */ FN_RET(0x00565a50); r_esp += 8; return;
}

void f_00565c70(void) /* sub_565C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565c70);
    /* 00565c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00565c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00565c77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565c7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00565c7c: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00565c80: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00565c83: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00565c85: mov esp, ebp */ r_esp = r_ebp;
    /* 00565c87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565c88: ret  */ FN_RET(0x00565c70); r_esp += 4; return;
}

void f_00565cf0(void) /* sub_565CF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565cf0);
    /* 00565cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00565cf3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00565cf6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00565cf9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00565d00: jmp 0x565d0b */ goto L_00565d0b;
L_00565d02:; BB(0x00565d02);
    /* 00565d02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565d05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00565d08: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00565d0b:; BB(0x00565d0b);
    /* 00565d0b: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565d0f: jge 0x565d32 */ if ((fS==fO)) goto L_00565d32;
L_00565d11:; BB(0x00565d11);
    /* 00565d11: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00565d14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565d15: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565d18: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565d1b: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00565d1e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565d21: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565d24: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00565d27: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00565d29: mov ecx, edx */ r_ecx = r_edx;
    /* 00565d2b: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00565d2e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x565d30u); call_ind(t); }
    /* 00565d30: jmp 0x565d02 */ goto L_00565d02;
L_00565d32:; BB(0x00565d32);
    /* 00565d32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00565d35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00565d36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565d39: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00565d3c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565d3f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00565d42: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00565d44: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00565d47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565d49u); call_ind(t); }
    /* 00565d49: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00565d4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565d4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565d50: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00565d53: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565d56: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00565d59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00565d5b: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00565d5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565d60u); call_ind(t); }
    /* 00565d60: mov esp, ebp */ r_esp = r_ebp;
    /* 00565d62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565d63: ret 4 */ FN_RET(0x00565cf0); r_esp += 8; return;
}

void f_00565e30(void) /* sub_565E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565e30);
    /* 00565e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00565e33: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00565e36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00565e37: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00565e3a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565e3d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00565e40: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00565e43: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00565e46: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565e49: mov eax, dword ptr [edx*8 + 0x743b10] */ r_eax = R32((u32)(r_edx*8+0x743b10u));
    /* 00565e50: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00565e53: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565e56: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00565e59: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00565e5c: call 0x566380 */ r_esp -= 4; W32(r_esp, 0x565e61u); f_00566380();
    /* 00565e61: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00565e64: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00565e65: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00565e67: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00565e69: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00565e6b: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 00565e6e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00565e71: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00565e74: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00565e77: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00565e78: mov esp, ebp */ r_esp = r_ebp;
    /* 00565e7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565e7b: ret 4 */ FN_RET(0x00565e30); r_esp += 8; return;
}

void f_00565e80(void) /* sub_565E80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565e80);
    /* 00565e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00565e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00565e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00565e87: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565e8b: jl 0x565e9f */ if ((fS!=fO)) goto L_00565e9f;
L_00565e8d:; BB(0x00565e8d);
    /* 00565e8d: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565e91: jg 0x565e9f */ if ((!fZ&&fS==fO)) goto L_00565e9f;
L_00565e93:; BB(0x00565e93);
    /* 00565e93: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00565e96: mov eax, dword ptr [eax*4 + 0x743d08] */ r_eax = R32((u32)(r_eax*4+0x743d08u));
    /* 00565e9d: jmp 0x565eab */ goto L_00565eab;
L_00565e9f:; BB(0x00565e9f);
    /* 00565e9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00565ea2: imul eax, eax, 9 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x9u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00565ea5: add eax, dword ptr [0x743d08] */ {  u32 a = r_eax; u32 b = R32((u32)(0x743d08u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00565eab:; BB(0x00565eab);
    /* 00565eab: mov esp, ebp */ r_esp = r_ebp;
    /* 00565ead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565eae: ret 4 */ FN_RET(0x00565e80); r_esp += 8; return;
}

void f_00565ec0(void) /* sub_565EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00565ec0);
    /* 00565ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00565ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00565ec3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00565ec6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00565ec9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565ecc: call 0x566380 */ r_esp -= 4; W32(r_esp, 0x565ed1u); f_00566380();
    /* 00565ed1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00565ed4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00565ed7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00565eda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565edd: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00565ee0: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00565ee3: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00565ee7: ja 0x56607b */ if ((!fC&&!fZ)) goto L_0056607b;
L_00565eed:; BB(0x00565eed);
    /* 00565eed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00565ef0: jmp dword ptr [edx*4 + 0x566088] */ { u32 t = R32((u32)(r_edx*4+0x566088u)); switch (t) { case 0x565ef7u: goto L_00565ef7; case 0x565f45u: goto L_00565f45; case 0x565f94u: goto L_00565f94; case 0x565fe3u: goto L_00565fe3; case 0x56602fu: goto L_0056602f; default: UNSUP(0x00565ef0, "jump table entry is not a known target"); } }
L_00565ef7:; BB(0x00565ef7);
    /* 00565ef7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565ef9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565efc: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00565eff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565f02: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00565f05: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00565f07: mov ecx, eax */ r_ecx = r_eax;
    /* 00565f09: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00565f0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565f0eu); call_ind(t); }
    /* 00565f0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565f10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565f13: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00565f16: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565f19: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00565f1c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00565f1e: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00565f21: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565f23u); call_ind(t); }
    /* 00565f23: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565f27: jl 0x565f2f */ if ((fS!=fO)) goto L_00565f2f;
L_00565f29:; BB(0x00565f29);
    /* 00565f29: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565f2d: jle 0x565f36 */ if ((fZ||fS!=fO)) goto L_00565f36;
L_00565f2f:; BB(0x00565f2f);
    /* 00565f2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00565f31: jmp 0x566080 */ goto L_00566080;
L_00565f36:; BB(0x00565f36);
    /* 00565f36: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00565f39: mov eax, dword ptr [ecx*4 + 0x743d14] */ r_eax = R32((u32)(r_ecx*4+0x743d14u));
    /* 00565f40: jmp 0x566080 */ goto L_00566080;
L_00565f45:; BB(0x00565f45);
    /* 00565f45: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 00565f4a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565f4d: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00565f50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565f53: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00565f56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00565f58: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00565f5b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565f5du); call_ind(t); }
    /* 00565f5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565f5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565f62: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00565f65: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565f68: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00565f6b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00565f6d: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00565f70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565f72u); call_ind(t); }
    /* 00565f72: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565f76: jl 0x565f7e */ if ((fS!=fO)) goto L_00565f7e;
L_00565f78:; BB(0x00565f78);
    /* 00565f78: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565f7c: jle 0x565f85 */ if ((fZ||fS!=fO)) goto L_00565f85;
L_00565f7e:; BB(0x00565f7e);
    /* 00565f7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00565f80: jmp 0x566080 */ goto L_00566080;
L_00565f85:; BB(0x00565f85);
    /* 00565f85: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00565f88: mov eax, dword ptr [ecx*4 + 0x743d24] */ r_eax = R32((u32)(r_ecx*4+0x743d24u));
    /* 00565f8f: jmp 0x566080 */ goto L_00566080;
L_00565f94:; BB(0x00565f94);
    /* 00565f94: push 0x112 */ { u32 v = 0x112u; r_esp -= 4; W32(r_esp, v); }
    /* 00565f99: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565f9c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00565f9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565fa2: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00565fa5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00565fa7: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00565faa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565facu); call_ind(t); }
    /* 00565fac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00565fae: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565fb1: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00565fb4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565fb7: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00565fba: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00565fbc: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00565fbf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565fc1u); call_ind(t); }
    /* 00565fc1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565fc5: jl 0x565fcd */ if ((fS!=fO)) goto L_00565fcd;
L_00565fc7:; BB(0x00565fc7);
    /* 00565fc7: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00565fcb: jle 0x565fd4 */ if ((fZ||fS!=fO)) goto L_00565fd4;
L_00565fcd:; BB(0x00565fcd);
    /* 00565fcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00565fcf: jmp 0x566080 */ goto L_00566080;
L_00565fd4:; BB(0x00565fd4);
    /* 00565fd4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00565fd7: mov eax, dword ptr [ecx*4 + 0x743d38] */ r_eax = R32((u32)(r_ecx*4+0x743d38u));
    /* 00565fde: jmp 0x566080 */ goto L_00566080;
L_00565fe3:; BB(0x00565fe3);
    /* 00565fe3: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 00565fe8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565feb: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00565fee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00565ff1: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00565ff4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00565ff6: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00565ff9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x565ffbu); call_ind(t); }
    /* 00565ffb: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 00566000: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566003: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00566006: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566009: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0056600c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056600e: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00566011: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566013u); call_ind(t); }
    /* 00566013: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566017: jl 0x56601f */ if ((fS!=fO)) goto L_0056601f;
L_00566019:; BB(0x00566019);
    /* 00566019: cmp dword ptr [ebp + 8], 6 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056601d: jle 0x566023 */ if ((fZ||fS!=fO)) goto L_00566023;
L_0056601f:; BB(0x0056601f);
    /* 0056601f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00566021: jmp 0x566080 */ goto L_00566080;
L_00566023:; BB(0x00566023);
    /* 00566023: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00566026: mov eax, dword ptr [ecx*4 + 0x743d50] */ r_eax = R32((u32)(r_ecx*4+0x743d50u));
    /* 0056602d: jmp 0x566080 */ goto L_00566080;
L_0056602f:; BB(0x0056602f);
    /* 0056602f: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 00566034: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566037: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0056603a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056603d: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00566040: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00566042: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00566045: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566047u); call_ind(t); }
    /* 00566047: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 0056604c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056604f: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00566052: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566055: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00566058: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056605a: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0056605d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56605fu); call_ind(t); }
    /* 0056605f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566063: jl 0x56606b */ if ((fS!=fO)) goto L_0056606b;
L_00566065:; BB(0x00566065);
    /* 00566065: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566069: jle 0x56606f */ if ((fZ||fS!=fO)) goto L_0056606f;
L_0056606b:; BB(0x0056606b);
    /* 0056606b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056606d: jmp 0x566080 */ goto L_00566080;
L_0056606f:; BB(0x0056606f);
    /* 0056606f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00566072: mov eax, dword ptr [ecx*4 + 0x743d6c] */ r_eax = R32((u32)(r_ecx*4+0x743d6cu));
    /* 00566079: jmp 0x566080 */ goto L_00566080;
L_0056607b:; BB(0x0056607b);
    /* 0056607b: mov eax, 0xf5 */ r_eax = 0xf5u;
L_00566080:; BB(0x00566080);
    /* 00566080: mov esp, ebp */ r_esp = r_ebp;
    /* 00566082: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566083: ret 4 */ FN_RET(0x00565ec0); r_esp += 8; return;
}

