#include "protos.h"

void f_0044c7b0(void) /* sub_44C7B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c7b0);
    /* 0044c7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c7b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c7b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c7b7: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c7bb: jne 0x44c7d3 */ if (!fZ) goto L_0044c7d3;
L_0044c7bd:; BB(0x0044c7bd);
    /* 0044c7bd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c7bf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0044c7c5: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x44c7cau); f_006375b0();
    /* 0044c7ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0044c7cc: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x44c7d1u); f_0063aae0();
    /* 0044c7d1: jmp 0x44c7e8 */ goto L_0044c7e8;
L_0044c7d3:; BB(0x0044c7d3);
    /* 0044c7d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c7d5: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0044c7da: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0044c7dd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044c7e0: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0044c7e3: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x44c7e8u); f_0063aae0();
L_0044c7e8:; BB(0x0044c7e8);
    /* 0044c7e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c7ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c7eb: ret 4 */ FN_RET(0x0044c7b0); r_esp += 8; return;
}

void f_0044c7f0(void) /* sub_44C7F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c7f0);
    /* 0044c7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c7f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c7f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c7f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c7f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c7fc: call 0x44c7b0 */ r_esp -= 4; W32(r_esp, 0x44c801u); f_0044c7b0();
    /* 0044c801: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0044c803: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c805: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c806: ret  */ FN_RET(0x0044c7f0); r_esp += 4; return;
}

void f_0044c810(void) /* sub_44C810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c810);
    /* 0044c810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c811: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c817: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c819: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c81c: call 0x44c7b0 */ r_esp -= 4; W32(r_esp, 0x44c821u); f_0044c7b0();
    /* 0044c821: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0044c824: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0044c826: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c828: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c829: ret 4 */ FN_RET(0x0044c810); r_esp += 8; return;
}

void f_0044c830(void) /* sub_44C830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c830);
    /* 0044c830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c831: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c837: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c839: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c83c: call 0x44c7b0 */ r_esp -= 4; W32(r_esp, 0x44c841u); f_0044c7b0();
    /* 0044c841: mov al, byte ptr [eax + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0044c844: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c847: ret  */ FN_RET(0x0044c830); r_esp += 4; return;
}

void f_0044c850(void) /* sub_44C850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c850);
    /* 0044c850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c851: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044c857: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c859: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044c85c: call 0x44c7b0 */ r_esp -= 4; W32(r_esp, 0x44c861u); f_0044c7b0();
    /* 0044c861: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0044c864: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 0044c867: mov esp, ebp */ r_esp = r_ebp;
    /* 0044c869: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044c86a: ret 4 */ FN_RET(0x0044c850); r_esp += 8; return;
}

void f_0044c870(void) /* sub_44C870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044c870);
    /* 0044c870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044c871: mov ebp, esp */ r_ebp = r_esp;
    /* 0044c873: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044c875: push 0x69ef39 */ { u32 v = 0x69ef39u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c87a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044c880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c881: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044c884: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0044c889: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044c88b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c88c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0044c88f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0044c895: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0044c898: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c89b: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c89f: jne 0x44c8e8 */ if (!fZ) goto L_0044c8e8;
L_0044c8a1:; BB(0x0044c8a1);
    /* 0044c8a1: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c8a6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44c8abu); f_00686d82();
    /* 0044c8ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c8ae: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044c8b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044c8b8: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c8bc: je 0x44c8cb */ if (fZ) goto L_0044c8cb;
L_0044c8be:; BB(0x0044c8be);
    /* 0044c8be: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044c8c1: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x44c8c6u); f_00642e10();
    /* 0044c8c6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044c8c9: jmp 0x44c8d2 */ goto L_0044c8d2;
L_0044c8cb:; BB(0x0044c8cb);
    /* 0044c8cb: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0044c8d2:; BB(0x0044c8d2);
    /* 0044c8d2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0044c8d5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0044c8d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044c8df: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c8e2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044c8e5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_0044c8e8:; BB(0x0044c8e8);
    /* 0044c8e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c8ea: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c8ed: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0044c8f0: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x44c8f5u); f_00642e70();
    /* 0044c8f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c8f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c8f9: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c8fc: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0044c8ff: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x44c904u); f_006437d0();
    /* 0044c904: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044c90b: jmp 0x44c916 */ goto L_0044c916;
L_0044c90d:; BB(0x0044c90d);
    /* 0044c90d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044c910: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044c913: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0044c916:; BB(0x0044c916);
    /* 0044c916: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c91a: jge 0x44c9a9 */ if ((fS==fO)) goto L_0044c9a9;
L_0044c920:; BB(0x0044c920);
    /* 0044c920: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c925: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x44c92au); f_00686d82();
    /* 0044c92a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c92d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044c930: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0044c937: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044c93b: je 0x44c94a */ if (fZ) goto L_0044c94a;
L_0044c93d:; BB(0x0044c93d);
    /* 0044c93d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044c940: call 0x44e130 */ r_esp -= 4; W32(r_esp, 0x44c945u); f_0044e130();
    /* 0044c945: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0044c948: jmp 0x44c951 */ goto L_0044c951;
L_0044c94a:; BB(0x0044c94a);
    /* 0044c94a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0044c951:; BB(0x0044c951);
    /* 0044c951: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0044c954: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044c957: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044c95e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044c961: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c964: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044c967: mov dword ptr [eax + edx*4 + 8], ecx */ W32((u32)(r_eax+r_edx*4+0x8u), r_ecx);
    /* 0044c96b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044c96e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c96f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044c972: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c975: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0044c979: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x44c97eu); f_005f53e0();
    /* 0044c97e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c980: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c982: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44c987u); f_0064c8a0();
    /* 0044c987: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c98a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044c98d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0044c990: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044c993: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c996: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044c999: mov dword ptr [eax + edx*8 + 0x38], ecx */ W32((u32)(r_eax+r_edx*8+0x38u), r_ecx);
    /* 0044c99d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044c9a0: mov dword ptr [eax + edx*8 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*8+0x3cu), r_ecx);
    /* 0044c9a4: jmp 0x44c90d */ goto L_0044c90d;
L_0044c9a9:; BB(0x0044c9a9);
    /* 0044c9a9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044c9b0: jmp 0x44c9bb */ goto L_0044c9bb;
L_0044c9b2:; BB(0x0044c9b2);
    /* 0044c9b2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044c9b5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044c9b8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0044c9bb:; BB(0x0044c9bb);
    /* 0044c9bb: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044c9bf: jge 0x44c9f0 */ if ((fS==fO)) goto L_0044c9f0;
L_0044c9c1:; BB(0x0044c9c1);
    /* 0044c9c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c9c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044c9c5: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x44c9cau); f_0064c8a0();
    /* 0044c9ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c9cd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0044c9d0: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0044c9d3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044c9d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044c9d7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044c9da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c9db: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044c9de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044c9df: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44c9e4u); f_005dcb00();
    /* 0044c9e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044c9e7: mov ecx, eax */ r_ecx = r_eax;
    /* 0044c9e9: call 0x5d6050 */ r_esp -= 4; W32(r_esp, 0x44c9eeu); f_005d6050();
    /* 0044c9ee: jmp 0x44c9b2 */ goto L_0044c9b2;
L_0044c9f0:; BB(0x0044c9f0);
    /* 0044c9f0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c9f3: call 0x44ca20 */ r_esp -= 4; W32(r_esp, 0x44c9f8u); f_0044ca20();
    /* 0044c9f8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0044c9fb: mov byte ptr [eax + 0xd1], 0 */ W8((u32)(r_eax+0xd1u), 0x0u);
    /* 0044ca02: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044ca05: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044ca0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044ca0d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ca0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ca10: ret  */ FN_RET(0x0044c870); r_esp += 4; return;
}

void f_0044ca20(void) /* sub_44CA20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ca20);
    /* 0044ca20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ca21: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ca23: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ca26: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044ca29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ca2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ca2d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca30: call 0x44ccf0 */ r_esp -= 4; W32(r_esp, 0x44ca35u); f_0044ccf0();
    /* 0044ca35: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca38: mov dword ptr [eax + 0xf4], 0xffffffff */ W32((u32)(r_eax+0xf4u), 0xffffffffu);
    /* 0044ca42: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca45: mov dword ptr [ecx + 0xf8], 0xffffffff */ W32((u32)(r_ecx+0xf8u), 0xffffffffu);
    /* 0044ca4f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca52: call 0x44cc90 */ r_esp -= 4; W32(r_esp, 0x44ca57u); f_0044cc90();
    /* 0044ca57: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca5a: mov byte ptr [edx + 0xc8], 0 */ W8((u32)(r_edx+0xc8u), 0x0u);
    /* 0044ca61: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca64: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
    /* 0044ca6e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca71: mov byte ptr [ecx + 0xd8], 0 */ W8((u32)(r_ecx+0xd8u), 0x0u);
    /* 0044ca78: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca7b: mov byte ptr [edx + 0xd9], 0 */ W8((u32)(r_edx+0xd9u), 0x0u);
    /* 0044ca82: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca85: mov byte ptr [eax + 0xf0], 0 */ W8((u32)(r_eax+0xf0u), 0x0u);
    /* 0044ca8c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044ca8f: mov byte ptr [ecx + 0xf1], 0 */ W8((u32)(r_ecx+0xf1u), 0x0u);
    /* 0044ca96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044ca9d: jmp 0x44caa8 */ goto L_0044caa8;
L_0044ca9f:; BB(0x0044ca9f);
    /* 0044ca9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044caa2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044caa5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0044caa8:; BB(0x0044caa8);
    /* 0044caa8: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044caac: jge 0x44cabf */ if ((fS==fO)) goto L_0044cabf;
L_0044caae:; BB(0x0044caae);
    /* 0044caae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cab1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044cab4: mov ecx, dword ptr [ecx + eax*4 + 8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 0044cab8: call 0x5cb9b0 */ r_esp -= 4; W32(r_esp, 0x44cabdu); f_005cb9b0();
    /* 0044cabd: jmp 0x44ca9f */ goto L_0044ca9f;
L_0044cabf:; BB(0x0044cabf);
    /* 0044cabf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044cac6: jmp 0x44cad1 */ goto L_0044cad1;
L_0044cac8:; BB(0x0044cac8);
    /* 0044cac8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cacb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044cace: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0044cad1:; BB(0x0044cad1);
    /* 0044cad1: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cad5: jge 0x44cb05 */ if ((fS==fO)) goto L_0044cb05;
L_0044cad7:; BB(0x0044cad7);
    /* 0044cad7: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044cade: jmp 0x44cae9 */ goto L_0044cae9;
L_0044cae0:; BB(0x0044cae0);
    /* 0044cae0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044cae3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cae6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0044cae9:; BB(0x0044cae9);
    /* 0044cae9: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044caed: jge 0x44cb03 */ if ((fS==fO)) goto L_0044cb03;
L_0044caef:; BB(0x0044caef);
    /* 0044caef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044caf1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044caf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044caf5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044caf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044caf9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044cafc: call 0x44cd40 */ r_esp -= 4; W32(r_esp, 0x44cb01u); f_0044cd40();
    /* 0044cb01: jmp 0x44cae0 */ goto L_0044cae0;
L_0044cb03:; BB(0x0044cb03);
    /* 0044cb03: jmp 0x44cac8 */ goto L_0044cac8;
L_0044cb05:; BB(0x0044cb05);
    /* 0044cb05: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044cb0c: jmp 0x44cb17 */ goto L_0044cb17;
L_0044cb0e:; BB(0x0044cb0e);
    /* 0044cb0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cb11: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cb14: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044cb17:; BB(0x0044cb17);
    /* 0044cb17: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cb1b: jge 0x44cb2f */ if ((fS==fO)) goto L_0044cb2f;
L_0044cb1d:; BB(0x0044cb1d);
    /* 0044cb1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cb20: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044cb23: mov word ptr [edx + ecx*2 + 0xc0], 0 */ W16((u32)(r_edx+r_ecx*2+0xc0u), 0x0u);
    /* 0044cb2d: jmp 0x44cb0e */ goto L_0044cb0e;
L_0044cb2f:; BB(0x0044cb2f);
    /* 0044cb2f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044cb36: jmp 0x44cb41 */ goto L_0044cb41;
L_0044cb38:; BB(0x0044cb38);
    /* 0044cb38: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cb3b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cb3e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044cb41:; BB(0x0044cb41);
    /* 0044cb41: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cb45: jge 0x44cbd3 */ if ((fS==fO)) goto L_0044cbd3;
L_0044cb4b:; BB(0x0044cb4b);
    /* 0044cb4b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044cb4e: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044cb51: mov byte ptr [ecx + 0xc9], 0 */ W8((u32)(r_ecx+0xc9u), 0x0u);
    /* 0044cb58: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cb5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb5c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cb61u); f_005dcb00();
    /* 0044cb61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cb64: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044cb67: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044cb6a: mov byte ptr [eax + 0x4a0], 0 */ W8((u32)(r_eax+0x4a0u), 0x0u);
    /* 0044cb71: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cb74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb75: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cb7au); f_005dcb00();
    /* 0044cb7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cb7d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044cb80: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044cb83: mov byte ptr [edx + 0x4a1], 0 */ W8((u32)(r_edx+0x4a1u), 0x0u);
    /* 0044cb8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cb8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044cb8e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cb93u); f_005dcb00();
    /* 0044cb93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cb96: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044cb99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044cb9c: mov byte ptr [ecx + 0x4a2], 0 */ W8((u32)(r_ecx+0x4a2u), 0x0u);
    /* 0044cba3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044cba6: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044cba9: mov byte ptr [edx + 0xcd], 0 */ W8((u32)(r_edx+0xcdu), 0x0u);
    /* 0044cbb0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cbb3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044cbb6: mov dword ptr [ecx + eax*4 + 0xdc], 0xffffffff */ W32((u32)(r_ecx+r_eax*4+0xdcu), 0xffffffffu);
    /* 0044cbc1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044cbc4: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044cbc7: mov byte ptr [edx + 0xec], 0 */ W8((u32)(r_edx+0xecu), 0x0u);
    /* 0044cbce: jmp 0x44cb38 */ goto L_0044cb38;
L_0044cbd3:; BB(0x0044cbd3);
    /* 0044cbd3: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cbd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cbd6: ret  */ FN_RET(0x0044ca20); r_esp += 4; return;
}

void f_0044cbe0(void) /* sub_44CBE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044cbe0);
    /* 0044cbe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044cbe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044cbe3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044cbe6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044cbe9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044cbf0: jmp 0x44cbfb */ goto L_0044cbfb;
L_0044cbf2:; BB(0x0044cbf2);
    /* 0044cbf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cbf5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cbf8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044cbfb:; BB(0x0044cbfb);
    /* 0044cbfb: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cbff: jge 0x44cc7c */ if ((fS==fO)) goto L_0044cc7c;
L_0044cc01:; BB(0x0044cc01);
    /* 0044cc01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cc04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc05: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cc0au); f_005dcb00();
    /* 0044cc0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cc0d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044cc10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044cc13: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44cc18u); f_0063aac0();
    /* 0044cc18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044cc1a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0044cc1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044cc1f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cc23: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044cc26: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0044cc29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cc2b: jne 0x44cc77 */ if (!fZ) goto L_0044cc77;
L_0044cc2d:; BB(0x0044cc2d);
    /* 0044cc2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cc30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc31: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cc36u); f_005dcb00();
    /* 0044cc36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cc39: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0044cc3c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044cc3f: mov cl, byte ptr [eax + 0x4a1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a1u))) & 0xffu);
    /* 0044cc45: mov byte ptr [ebp - 0x11], cl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_ecx);
    /* 0044cc48: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0044cc4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cc4e: jne 0x44cc77 */ if (!fZ) goto L_0044cc77;
L_0044cc50:; BB(0x0044cc50);
    /* 0044cc50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cc53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc54: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cc59u); f_005dcb00();
    /* 0044cc59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cc5c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044cc5f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044cc62: mov dl, byte ptr [ecx + 0x4a0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a0u))) & 0xffu);
    /* 0044cc68: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 0044cc6b: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0044cc6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cc71: jne 0x44cc77 */ if (!fZ) goto L_0044cc77;
L_0044cc73:; BB(0x0044cc73);
    /* 0044cc73: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044cc75: jmp 0x44cc7e */ goto L_0044cc7e;
L_0044cc77:; BB(0x0044cc77);
    /* 0044cc77: jmp 0x44cbf2 */ goto L_0044cbf2;
L_0044cc7c:; BB(0x0044cc7c);
    /* 0044cc7c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044cc7e:; BB(0x0044cc7e);
    /* 0044cc7e: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cc80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cc81: ret  */ FN_RET(0x0044cbe0); r_esp += 4; return;
}

void f_0044cc90(void) /* sub_44CC90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044cc90);
    /* 0044cc90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc91: mov ebp, esp */ r_ebp = r_esp;
    /* 0044cc93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044cc97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cc9b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cc9e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0044cca1: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x44cca6u); f_006437d0();
    /* 0044cca6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cca8: push 0x6b932c */ { u32 v = 0x6b932cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044ccad: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ccaf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044ccb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ccb4: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0044ccb7: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x44ccbcu); f_00643930();
    /* 0044ccbc: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ccbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ccbf: ret  */ FN_RET(0x0044cc90); r_esp += 4; return;
}

void f_0044ccc0(void) /* sub_44CCC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ccc0);
    /* 0044ccc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ccc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ccc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ccc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044ccc7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ccca: cmp dword ptr [eax + 0xc4], -1 */ {  u32 a = R32((u32)(r_eax+0xc4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ccd1: jne 0x44ccd7 */ if (!fZ) goto L_0044ccd7;
L_0044ccd3:; BB(0x0044ccd3);
    /* 0044ccd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044ccd5: jmp 0x44cce9 */ goto L_0044cce9;
L_0044ccd7:; BB(0x0044ccd7);
    /* 0044ccd7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ccda: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0044cce0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cce1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cce6u); f_005dcb00();
    /* 0044cce6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044cce9:; BB(0x0044cce9);
    /* 0044cce9: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ccec: ret  */ FN_RET(0x0044ccc0); r_esp += 4; return;
}

void f_0044ccf0(void) /* sub_44CCF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ccf0);
    /* 0044ccf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ccf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ccf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ccf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044ccf7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ccfa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044ccfd: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 0044cd03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cd06: cmp dword ptr [edx + 0xc4], -1 */ {  u32 a = R32((u32)(r_edx+0xc4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cd0d: je 0x44cd26 */ if (fZ) goto L_0044cd26;
L_0044cd0f:; BB(0x0044cd0f);
    /* 0044cd0f: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0044cd12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044cd16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd19: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044cd1f: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x44cd24u); f_005d8a20();
    /* 0044cd24: jmp 0x44cd37 */ goto L_0044cd37;
L_0044cd26:; BB(0x0044cd26);
    /* 0044cd26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd28: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd2c: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044cd32: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x44cd37u); f_005d8a20();
L_0044cd37:; BB(0x0044cd37);
    /* 0044cd37: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cd39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cd3a: ret 8 */ FN_RET(0x0044ccf0); r_esp += 12; return;
}

void f_0044cd40(void) /* sub_44CD40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044cd40);
    /* 0044cd40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd41: mov ebp, esp */ r_ebp = r_esp;
    /* 0044cd43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044cd47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044cd4a: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044cd4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cd50: lea edx, [ecx + eax + 0x98] */ r_edx = (u32)(r_ecx+r_eax+0x98u);
    /* 0044cd57: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044cd5a: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0044cd5e: mov word ptr [edx + eax*2], cx */ W16((u32)(r_edx+r_eax*2), (u16)r_ecx);
    /* 0044cd62: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cd64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cd65: ret 0xc */ FN_RET(0x0044cd40); r_esp += 16; return;
}

void f_0044cd70(void) /* sub_44CD70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044cd70);
    /* 0044cd70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd71: mov ebp, esp */ r_ebp = r_esp;
    /* 0044cd73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cd74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044cd77: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044cd7a: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044cd7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cd80: lea edx, [ecx + eax + 0x98] */ r_edx = (u32)(r_ecx+r_eax+0x98u);
    /* 0044cd87: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044cd8a: mov ax, word ptr [edx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2))) & 0xffffu);
    /* 0044cd8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cd90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cd91: ret 8 */ FN_RET(0x0044cd70); r_esp += 12; return;
}

void f_0044cda0(void) /* sub_44CDA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044cda0);
    /* 0044cda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044cda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044cda3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044cda6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044cda9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044cdb0: jmp 0x44cdbb */ goto L_0044cdbb;
L_0044cdb2:; BB(0x0044cdb2);
    /* 0044cdb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cdb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cdb8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044cdbb:; BB(0x0044cdbb);
    /* 0044cdbb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cdbf: jge 0x44cddc */ if ((fS==fO)) goto L_0044cddc;
L_0044cdc1:; BB(0x0044cdc1);
    /* 0044cdc1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cdc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cdc5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044cdc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cdc9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044cdcc: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x44cdd1u); f_0044cd70();
    /* 0044cdd1: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0044cdd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cdd6: jne 0x44cdda */ if (!fZ) goto L_0044cdda;
L_0044cdd8:; BB(0x0044cdd8);
    /* 0044cdd8: jmp 0x44cddc */ goto L_0044cddc;
L_0044cdda:; BB(0x0044cdda);
    /* 0044cdda: jmp 0x44cdb2 */ goto L_0044cdb2;
L_0044cddc:; BB(0x0044cddc);
    /* 0044cddc: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0044cde0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cde1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cde4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cde5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044cde8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044cde9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044cdec: call 0x44cd40 */ r_esp -= 4; W32(r_esp, 0x44cdf1u); f_0044cd40();
    /* 0044cdf1: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cdf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cdf4: ret 8 */ FN_RET(0x0044cda0); r_esp += 12; return;
}

void f_0044ce00(void) /* sub_44CE00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ce00);
    /* 0044ce00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce01: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ce03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ce06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044ce09: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044ce10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044ce17: jmp 0x44ce22 */ goto L_0044ce22;
L_0044ce19:; BB(0x0044ce19);
    /* 0044ce19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ce1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044ce1f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044ce22:; BB(0x0044ce22);
    /* 0044ce22: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ce26: jge 0x44ce4a */ if ((fS==fO)) goto L_0044ce4a;
L_0044ce28:; BB(0x0044ce28);
    /* 0044ce28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ce2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce2c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044ce2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce30: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044ce33: call 0x44cd70 */ r_esp -= 4; W32(r_esp, 0x44ce38u); f_0044cd70();
    /* 0044ce38: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0044ce3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ce3d: je 0x44ce48 */ if (fZ) goto L_0044ce48;
L_0044ce3f:; BB(0x0044ce3f);
    /* 0044ce3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044ce42: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044ce45: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0044ce48:; BB(0x0044ce48);
    /* 0044ce48: jmp 0x44ce19 */ goto L_0044ce19;
L_0044ce4a:; BB(0x0044ce4a);
    /* 0044ce4a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044ce4d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ce4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ce50: ret 4 */ FN_RET(0x0044ce00); r_esp += 8; return;
}

void f_0044ce60(void) /* sub_44CE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ce60);
    /* 0044ce60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce61: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ce63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044ce67: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044ce6b: jne 0x44ce71 */ if (!fZ) goto L_0044ce71;
L_0044ce6d:; BB(0x0044ce6d);
    /* 0044ce6d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044ce6f: jmp 0x44ce7d */ goto L_0044ce7d;
L_0044ce71:; BB(0x0044ce71);
    /* 0044ce71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ce74: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044ce77: mov al, byte ptr [eax + 0xc9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xc9u))) & 0xffu);
L_0044ce7d:; BB(0x0044ce7d);
    /* 0044ce7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ce7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ce80: ret 4 */ FN_RET(0x0044ce60); r_esp += 8; return;
}

void f_0044ce90(void) /* sub_44CE90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044ce90);
    /* 0044ce90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044ce91: mov ebp, esp */ r_ebp = r_esp;
    /* 0044ce93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044ce96: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0044ce99: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0044cea0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044cea7: jmp 0x44ceb2 */ goto L_0044ceb2;
L_0044cea9:; BB(0x0044cea9);
    /* 0044cea9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044ceac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044ceaf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044ceb2:; BB(0x0044ceb2);
    /* 0044ceb2: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044ceb6: jge 0x44cecc */ if ((fS==fO)) goto L_0044cecc;
L_0044ceb8:; BB(0x0044ceb8);
    /* 0044ceb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cebb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cebc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044cebf: call 0x44ce00 */ r_esp -= 4; W32(r_esp, 0x44cec4u); f_0044ce00();
    /* 0044cec4: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cec7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044ceca: jmp 0x44cea9 */ goto L_0044cea9;
L_0044cecc:; BB(0x0044cecc);
    /* 0044cecc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044cecf: mov esp, ebp */ r_esp = r_ebp;
    /* 0044ced1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044ced2: ret  */ FN_RET(0x0044ce90); r_esp += 4; return;
}

void f_0044cee0(void) /* sub_44CEE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044cee0);
    /* 0044cee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044cee1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044cee3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044cee6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0044cee9: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0044cef0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0044cef7: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0044cefe: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 0044cf05: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044cf0c: jmp 0x44cf17 */ goto L_0044cf17;
L_0044cf0e:; BB(0x0044cf0e);
    /* 0044cf0e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cf11: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cf14: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044cf17:; BB(0x0044cf17);
    /* 0044cf17: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cf1b: jge 0x44cfad */ if ((fS==fO)) goto L_0044cfad;
L_0044cf21:; BB(0x0044cf21);
    /* 0044cf21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cf24: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0044cf28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cf29: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cf2eu); f_005dcb00();
    /* 0044cf2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cf31: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0044cf34: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044cf37: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x44cf3cu); f_0063aac0();
    /* 0044cf3c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0044cf3e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044cf41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044cf43: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cf47: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0044cf4a: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0044cf4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cf4f: jne 0x44cfa8 */ if (!fZ) goto L_0044cfa8;
L_0044cf51:; BB(0x0044cf51);
    /* 0044cf51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cf54: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0044cf58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044cf59: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cf5eu); f_005dcb00();
    /* 0044cf5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cf61: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044cf64: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044cf67: mov al, byte ptr [edx + 0x4a0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a0u))) & 0xffu);
    /* 0044cf6d: mov byte ptr [ebp - 0x21], al */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_eax);
    /* 0044cf70: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0044cf74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cf76: jne 0x44cfa8 */ if (!fZ) goto L_0044cfa8;
L_0044cf78:; BB(0x0044cf78);
    /* 0044cf78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cf7b: mov eax, dword ptr [ebp + edx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffecu));
    /* 0044cf7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044cf80: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44cf85u); f_005dcb00();
    /* 0044cf85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044cf88: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044cf8b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044cf8e: mov dl, byte ptr [ecx + 0x4a1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a1u))) & 0xffu);
    /* 0044cf94: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 0044cf97: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 0044cf9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044cf9d: jne 0x44cfa8 */ if (!fZ) goto L_0044cfa8;
L_0044cf9f:; BB(0x0044cf9f);
    /* 0044cf9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cfa2: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0044cfa6: jmp 0x44cfb0 */ goto L_0044cfb0;
L_0044cfa8:; BB(0x0044cfa8);
    /* 0044cfa8: jmp 0x44cf0e */ goto L_0044cf0e;
L_0044cfad:; BB(0x0044cfad);
    /* 0044cfad: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0044cfb0:; BB(0x0044cfb0);
    /* 0044cfb0: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cfb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cfb3: ret  */ FN_RET(0x0044cee0); r_esp += 4; return;
}

void f_0044cfc0(void) /* sub_44CFC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044cfc0);
    /* 0044cfc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044cfc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044cfc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044cfc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044cfc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044cfd0: jmp 0x44cfdb */ goto L_0044cfdb;
L_0044cfd2:; BB(0x0044cfd2);
    /* 0044cfd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044cfd5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044cfd8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0044cfdb:; BB(0x0044cfdb);
    /* 0044cfdb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cfdf: jge 0x44cffa */ if ((fS==fO)) goto L_0044cffa;
L_0044cfe1:; BB(0x0044cfe1);
    /* 0044cfe1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044cfe4: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044cfe7: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044cfea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044cfed: cmp dword ptr [edx + ecx*8 + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*8+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044cff2: jle 0x44cff8 */ if ((fZ||fS!=fO)) goto L_0044cff8;
L_0044cff4:; BB(0x0044cff4);
    /* 0044cff4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044cff6: jmp 0x44cffc */ goto L_0044cffc;
L_0044cff8:; BB(0x0044cff8);
    /* 0044cff8: jmp 0x44cfd2 */ goto L_0044cfd2;
L_0044cffa:; BB(0x0044cffa);
    /* 0044cffa: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044cffc:; BB(0x0044cffc);
    /* 0044cffc: mov esp, ebp */ r_esp = r_ebp;
    /* 0044cffe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044cfff: ret 4 */ FN_RET(0x0044cfc0); r_esp += 8; return;
}

