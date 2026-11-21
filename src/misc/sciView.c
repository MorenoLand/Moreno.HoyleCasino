#include "protos.h"

void f_00594750(void) /* sciView::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00594750);
    /* 00594750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00594751: mov ebp, esp */ r_ebp = r_esp;
    /* 00594753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00594754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00594757: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059475a: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0059475d: je 0x594798 */ if (fZ) goto L_00594798;
L_0059475f:; BB(0x0059475f);
    /* 0059475f: push 0x5eac00 */ { u32 v = 0x5eac00u; r_esp -= 4; W32(r_esp, v); }
    /* 00594764: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594767: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 0059476a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059476b: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00594770: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594774: call 0x686e57 */ r_esp -= 4; W32(r_esp, 0x594779u); f_00686e57();
    /* 00594779: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059477c: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0059477f: je 0x594790 */ if (fZ) goto L_00594790;
L_00594781:; BB(0x00594781);
    /* 00594781: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594784: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00594787: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00594788: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x59478du); f_00686cae();
    /* 0059478d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00594790:; BB(0x00594790);
    /* 00594790: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594793: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00594796: jmp 0x5947b7 */ goto L_005947b7;
L_00594798:; BB(0x00594798);
    /* 00594798: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059479b: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x5947a0u); f_005eac00();
    /* 005947a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005947a3: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005947a6: je 0x5947b4 */ if (fZ) goto L_005947b4;
L_005947a8:; BB(0x005947a8);
    /* 005947a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005947ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005947ac: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5947b1u); f_00686cae();
    /* 005947b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005947b4:; BB(0x005947b4);
    /* 005947b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005947b7:; BB(0x005947b7);
    /* 005947b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005947b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005947ba: ret 4 */ FN_RET(0x00594750); r_esp += 8; return;
}

void f_005eaaf0(void) /* sciView::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eaaf0);
    /* 005eaaf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005eaaf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaaf5: push 0x6a9c08 */ { u32 v = 0x6a9c08u; r_esp -= 4; W32(r_esp, v); }
    /* 005eaafa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eab00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eab01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eab02: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005eab07: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005eab09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eab0a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005eab0d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005eab13: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005eab16: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab19: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x5eab1eu); f_005f49d0();
    /* 005eab1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eab25: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab28: mov dword ptr [eax], 0x6d6214 */ W32((u32)(r_eax), 0x6d6214u);
    /* 005eab2e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab31: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
    /* 005eab38: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab3b: mov byte ptr [edx + 0x50], 0 */ W8((u32)(r_edx+0x50u), 0x0u);
    /* 005eab3f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab42: mov dword ptr [eax + 0x164], 0 */ W32((u32)(r_eax+0x164u), 0x0u);
    /* 005eab4c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab4f: mov dword ptr [ecx + 0x15c], 0 */ W32((u32)(r_ecx+0x15cu), 0x0u);
    /* 005eab59: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab5c: mov dword ptr [edx + 0x174], 0 */ W32((u32)(r_edx+0x174u), 0x0u);
    /* 005eab66: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab69: mov byte ptr [eax + 0x16c], 0xff */ W8((u32)(r_eax+0x16cu), 0xffu);
    /* 005eab70: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab73: mov dword ptr [ecx + 0x160], 0 */ W32((u32)(r_ecx+0x160u), 0x0u);
    /* 005eab7d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab80: mov dword ptr [edx + 0x168], 0 */ W32((u32)(r_edx+0x168u), 0x0u);
    /* 005eab8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005eab8c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab8f: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x5eab94u); f_005eb700();
    /* 005eab94: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eab97: mov dword ptr [eax + 0x154], 0 */ W32((u32)(r_eax+0x154u), 0x0u);
    /* 005eaba1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eaba4: mov dword ptr [ecx + 0x158], 0 */ W32((u32)(r_ecx+0x158u), 0x0u);
    /* 005eabae: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eabb1: mov byte ptr [edx + 0x16e], 0xff */ W8((u32)(r_edx+0x16eu), 0xffu);
    /* 005eabb8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eabbb: mov byte ptr [eax + 0x16f], 0 */ W8((u32)(r_eax+0x16fu), 0x0u);
    /* 005eabc2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eabc5: mov dword ptr [ecx + 0x170], 4 */ W32((u32)(r_ecx+0x170u), 0x4u);
    /* 005eabcf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eabd2: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005eabd7: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005eabda: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 005eabdd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eabe4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eabe7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eabea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eabf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eabf2: mov esp, ebp */ r_esp = r_ebp;
    /* 005eabf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eabf5: ret  */ FN_RET(0x005eaaf0); r_esp += 4; return;
}

void f_005eac00(void) /* sciView::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eac00);
    /* 005eac00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eac01: mov ebp, esp */ r_ebp = r_esp;
    /* 005eac03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005eac05: push 0x6a9c2b */ { u32 v = 0x6a9c2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005eac0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005eac10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eac11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eac12: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005eac17: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005eac19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eac1a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005eac1d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005eac23: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005eac26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eac29: mov dword ptr [eax], 0x6d6214 */ W32((u32)(r_eax), 0x6d6214u);
    /* 005eac2f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005eac36: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eac39: call 0x5eac80 */ r_esp -= 4; W32(r_esp, 0x5eac3eu); f_005eac80();
    /* 005eac3e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eac41: cmp dword ptr [ecx + 0x174], 0 */ {  u32 a = R32((u32)(r_ecx+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eac48: je 0x5eac5f */ if (fZ) goto L_005eac5f;
L_005eac4a:; BB(0x005eac4a);
    /* 005eac4a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eac4d: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 005eac53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eac54: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eac57: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 005eac5a: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x5eac5fu); f_006041d0();
L_005eac5f:; BB(0x005eac5f);
    /* 005eac5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005eac66: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005eac69: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x5eac6eu); f_005f4ad0();
    /* 005eac6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005eac71: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005eac78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005eac79: mov esp, ebp */ r_esp = r_ebp;
    /* 005eac7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eac7c: ret  */ FN_RET(0x005eac00); r_esp += 4; return;
}

void f_005eaf00(void) /* sciview::func_005eaf00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eaf00);
    /* 005eaf00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf01: mov ebp, esp */ r_ebp = r_esp;
    /* 005eaf03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eaf07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaf0a: mov byte ptr [eax + 0x50], 0 */ W8((u32)(r_eax+0x50u), 0x0u);
    /* 005eaf0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaf11: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005eaf14: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaf17: je 0x5eaf4d */ if (fZ) goto L_005eaf4d;
L_005eaf19:; BB(0x005eaf19);
    /* 005eaf19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaf1c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eaf1f: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 005eaf22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaf25: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eaf29: je 0x5eaf4d */ if (fZ) goto L_005eaf4d;
L_005eaf2b:; BB(0x005eaf2b);
    /* 005eaf2b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eaf2f: jge 0x5eaf45 */ if ((fS==fO)) goto L_005eaf45;
L_005eaf31:; BB(0x005eaf31);
    /* 005eaf31: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf33: push 0x6d62dc */ { u32 v = 0x6d62dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf38: push 0x6d62cc */ { u32 v = 0x6d62ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005eaf3d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5eaf42u); f_005e9f20();
    /* 005eaf42: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eaf45:; BB(0x005eaf45);
    /* 005eaf45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eaf48: call 0x5eacd0 */ r_esp -= 4; W32(r_esp, 0x5eaf4du); f_005eacd0();
L_005eaf4d:; BB(0x005eaf4d);
    /* 005eaf4d: mov esp, ebp */ r_esp = r_ebp;
    /* 005eaf4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eaf50: ret 4 */ FN_RET(0x005eaf00); r_esp += 8; return;
}

void f_005eb150(void) /* sciView::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005eb150);
    /* 005eb150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005eb151: mov ebp, esp */ r_ebp = r_esp;
    /* 005eb153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eb154: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005eb157: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb15a: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 005eb160: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb163: je 0x5eb20c */ if (fZ) goto L_005eb20c;
L_005eb169:; BB(0x005eb169);
    /* 005eb169: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb16c: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb170: je 0x5eb200 */ if (fZ) goto L_005eb200;
L_005eb176:; BB(0x005eb176);
    /* 005eb176: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb179: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5eb17eu); f_005eb240();
    /* 005eb17e: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb181: jle 0x5eb18e */ if ((fZ||fS!=fO)) goto L_005eb18e;
L_005eb183:; BB(0x005eb183);
    /* 005eb183: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb186: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5eb18bu); f_005eb240();
    /* 005eb18b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005eb18e:; BB(0x005eb18e);
    /* 005eb18e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eb192: jge 0x5eb19b */ if ((fS==fO)) goto L_005eb19b;
L_005eb194:; BB(0x005eb194);
    /* 005eb194: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_005eb19b:; BB(0x005eb19b);
    /* 005eb19b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb19e: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 005eb1a4: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eb1a7: je 0x5eb1fe */ if (fZ) goto L_005eb1fe;
L_005eb1a9:; BB(0x005eb1a9);
    /* 005eb1a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb1ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1b1: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005eb1b7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eb1b9u); call_ind(t); }
    /* 005eb1b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005eb1bf: mov dword ptr [eax + 0x15c], ecx */ W32((u32)(r_eax+0x15cu), r_ecx);
    /* 005eb1c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005eb1ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1cd: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005eb1d0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5eb1d2u); call_ind(t); }
    /* 005eb1d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb1d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005eb1d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1db: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005eb1de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb1e0u); call_ind(t); }
    /* 005eb1e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eb1e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb1e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1e9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005eb1ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb1eeu); call_ind(t); }
    /* 005eb1ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005eb1f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb1f6: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005eb1fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5eb1feu); call_ind(t); }
L_005eb1fe:; BB(0x005eb1fe);
    /* 005eb1fe: jmp 0x5eb20c */ goto L_005eb20c;
L_005eb200:; BB(0x005eb200);
    /* 005eb200: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005eb203: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005eb206: mov dword ptr [ecx + 0x15c], edx */ W32((u32)(r_ecx+0x15cu), r_edx);
L_005eb20c:; BB(0x005eb20c);
    /* 005eb20c: mov esp, ebp */ r_esp = r_ebp;
    /* 005eb20e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005eb20f: ret 4 */ FN_RET(0x005eb150); r_esp += 8; return;
}

void f_005ebac0(void) /* sciview::func_005ebac0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ebac0);
    /* 005ebac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ebac1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ebac3: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ebac6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005ebac9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebacb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebacd: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 005ebad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebad1: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5ebad6u); f_00686fa2();
    /* 005ebad6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ebad9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebadc: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5ebae1u); f_005f5550();
    /* 005ebae1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ebae4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebae7: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5ebaecu); f_005f5590();
    /* 005ebaec: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ebaef: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebaf2: cmp dword ptr [ecx + 0x174], 0 */ {  u32 a = R32((u32)(r_ecx+0x174u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebaf9: je 0x5ebb07 */ if (fZ) goto L_005ebb07;
L_005ebafb:; BB(0x005ebafb);
    /* 005ebafb: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebaff: je 0x5ebb07 */ if (fZ) goto L_005ebb07;
L_005ebb01:; BB(0x005ebb01);
    /* 005ebb01: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebb05: jne 0x5ebb29 */ if (!fZ) goto L_005ebb29;
L_005ebb07:; BB(0x005ebb07);
    /* 005ebb07: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ebb0a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ebb0d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ebb0f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ebb12: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005ebb15: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ebb18: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ebb1b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ebb1e: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005ebb21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebb24: jmp 0x5ebf73 */ goto L_005ebf73;
L_005ebb29:; BB(0x005ebb29);
    /* 005ebb29: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005ebb30: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebb33: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005ebb36: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebb39: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ebb3c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebb3f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ebb42:; BB(0x005ebb42);
    /* 005ebb42: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebb45: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ebb48: jmp 0x5ebb53 */ goto L_005ebb53;
L_005ebb53:; BB(0x005ebb53);
    /* 005ebb53: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebb56: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebb57: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebb59: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebb5b: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebb5e: jge 0x5ebbe4 */ if ((fS==fO)) goto L_005ebbe4;
L_005ebb64:; BB(0x005ebb64);
    /* 005ebb64: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebb67: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ebb6a: jmp 0x5ebb75 */ goto L_005ebb75;
L_005ebb6c:; BB(0x005ebb6c);
    /* 005ebb6c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebb6f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ebb72: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_005ebb75:; BB(0x005ebb75);
    /* 005ebb75: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebb78: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebb7b: jge 0x5ebbdd */ if ((fS==fO)) goto L_005ebbdd;
L_005ebb7d:; BB(0x005ebb7d);
    /* 005ebb7d: lea ecx, [ebp - 0x21] */ r_ecx = (u32)(r_ebp+0xffffffdfu);
    /* 005ebb80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb81: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005ebb84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb85: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebb88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb89: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebb8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb8d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebb90: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 005ebb96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebb97: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebb9a: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 005ebba0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebba1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebba4: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 005ebbaa: call 0x616b30 */ r_esp -= 4; W32(r_esp, 0x5ebbafu); f_00616b30();
    /* 005ebbaf: movzx ecx, byte ptr [ebp - 0x35] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 005ebbb3: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebbb9: je 0x5ebbdb */ if (fZ) goto L_005ebbdb;
L_005ebbbb:; BB(0x005ebbbb);
    /* 005ebbbb: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebbbe: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ebbc1: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005ebbc4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebbc7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebbca: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ebbcd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebbd0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebbd3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ebbd6: jmp 0x5ebb42 */ goto L_005ebb42;
L_005ebbdb:; BB(0x005ebbdb);
    /* 005ebbdb: jmp 0x5ebb6c */ goto L_005ebb6c;
L_005ebbdd:; BB(0x005ebbdd);
    /* 005ebbdd: jmp 0x5ebbe4 */ goto L_005ebbe4;
L_005ebbe4:; BB(0x005ebbe4);
    /* 005ebbe4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebbe7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebbe8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebbea: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebbec: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebbef: jl 0x5ebc37 */ if ((fS!=fO)) goto L_005ebc37;
L_005ebbf1:; BB(0x005ebbf1);
    /* 005ebbf1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebbf4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebbf5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebbf7: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebbf9: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebbfc: jl 0x5ebc15 */ if ((fS!=fO)) goto L_005ebc15;
L_005ebbfe:; BB(0x005ebbfe);
    /* 005ebbfe: push 0x1ca */ { u32 v = 0x1cau; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc03: push 0x6d62dc */ { u32 v = 0x6d62dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc08: push 0x6d6334 */ { u32 v = 0x6d6334u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc0d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ebc12u); f_005e9f20();
    /* 005ebc12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ebc15:; BB(0x005ebc15);
    /* 005ebc15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebc18: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ebc1b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005ebc1d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ebc20: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005ebc23: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ebc26: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005ebc29: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ebc2c: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005ebc2f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebc32: jmp 0x5ebf73 */ goto L_005ebf73;
L_005ebc37:; BB(0x005ebc37);
    /* 005ebc37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebc3a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebc3d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ebc40: jmp 0x5ebc4b */ goto L_005ebc4b;
L_005ebc4b:; BB(0x005ebc4b);
    /* 005ebc4b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebc4e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebc4f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebc51: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebc53: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebc56: jl 0x5ebce7 */ if ((fS!=fO)) goto L_005ebce7;
L_005ebc5c:; BB(0x005ebc5c);
    /* 005ebc5c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebc5f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ebc62: jmp 0x5ebc6d */ goto L_005ebc6d;
L_005ebc64:; BB(0x005ebc64);
    /* 005ebc64: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebc67: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ebc6a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005ebc6d:; BB(0x005ebc6d);
    /* 005ebc6d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebc70: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebc73: jge 0x5ebce0 */ if ((fS==fO)) goto L_005ebce0;
L_005ebc75:; BB(0x005ebc75);
    /* 005ebc75: lea edx, [ebp - 0x21] */ r_edx = (u32)(r_ebp+0xffffffdfu);
    /* 005ebc78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc79: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 005ebc7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebc80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc81: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ebc84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc85: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebc88: mov ecx, dword ptr [eax + 0x15c] */ r_ecx = R32((u32)(r_eax+0x15cu));
    /* 005ebc8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc8f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebc92: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 005ebc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebc99: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebc9c: mov ecx, dword ptr [ecx + 0x174] */ r_ecx = R32((u32)(r_ecx+0x174u));
    /* 005ebca2: call 0x616b30 */ r_esp -= 4; W32(r_esp, 0x5ebca7u); f_00616b30();
    /* 005ebca7: movzx edx, byte ptr [ebp - 0x35] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 005ebcab: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebcb1: je 0x5ebcde */ if (fZ) goto L_005ebcde;
L_005ebcb3:; BB(0x005ebcb3);
    /* 005ebcb3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebcb6: sub eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebcb9: cmp eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebcbc: jl 0x5ebcd0 */ if ((fS!=fO)) goto L_005ebcd0;
L_005ebcbe:; BB(0x005ebcbe);
    /* 005ebcbe: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebcc1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebcc4: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005ebcc7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebcca: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ebccd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005ebcd0:; BB(0x005ebcd0);
    /* 005ebcd0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebcd3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebcd6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ebcd9: jmp 0x5ebc37 */ goto L_005ebc37;
L_005ebcde:; BB(0x005ebcde);
    /* 005ebcde: jmp 0x5ebc64 */ goto L_005ebc64;
L_005ebce0:; BB(0x005ebce0);
    /* 005ebce0: jmp 0x5ebce7 */ goto L_005ebce7;
L_005ebce7:; BB(0x005ebce7);
    /* 005ebce7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebcea: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebceb: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebced: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebcef: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebcf2: jge 0x5ebd3a */ if ((fS==fO)) goto L_005ebd3a;
L_005ebcf4:; BB(0x005ebcf4);
    /* 005ebcf4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ebcf7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebcf8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebcfa: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebcfc: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebcff: jge 0x5ebd18 */ if ((fS==fO)) goto L_005ebd18;
L_005ebd01:; BB(0x005ebd01);
    /* 005ebd01: push 0x1e1 */ { u32 v = 0x1e1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd06: push 0x6d62dc */ { u32 v = 0x6d62dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd0b: push 0x6d6320 */ { u32 v = 0x6d6320u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd10: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ebd15u); f_005e9f20();
    /* 005ebd15: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ebd18:; BB(0x005ebd18);
    /* 005ebd18: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ebd1b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ebd1e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ebd20: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ebd23: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005ebd26: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ebd29: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ebd2c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ebd2f: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005ebd32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebd35: jmp 0x5ebf73 */ goto L_005ebf73;
L_005ebd3a:; BB(0x005ebd3a);
    /* 005ebd3a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebd3d: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebd40: jl 0x5ebd64 */ if ((fS!=fO)) goto L_005ebd64;
L_005ebd42:; BB(0x005ebd42);
    /* 005ebd42: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebd45: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ebd48: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005ebd4a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ebd4d: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005ebd50: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ebd53: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005ebd56: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ebd59: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 005ebd5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebd5f: jmp 0x5ebf73 */ goto L_005ebf73;
L_005ebd64:; BB(0x005ebd64);
    /* 005ebd64: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebd67: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005ebd6a:; BB(0x005ebd6a);
    /* 005ebd6a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebd6d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005ebd70: jmp 0x5ebd7b */ goto L_005ebd7b;
L_005ebd72:; BB(0x005ebd72);
    /* 005ebd72: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd75: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ebd78: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005ebd7b:; BB(0x005ebd7b);
    /* 005ebd7b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd7e: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebd81: jge 0x5ebdce */ if ((fS==fO)) goto L_005ebdce;
L_005ebd83:; BB(0x005ebd83);
    /* 005ebd83: lea ecx, [ebp - 0x21] */ r_ecx = (u32)(r_ebp+0xffffffdfu);
    /* 005ebd86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd87: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005ebd8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd8b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd8f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebd92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd93: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebd96: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 005ebd9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebd9d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebda0: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 005ebda6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebda7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebdaa: mov ecx, dword ptr [eax + 0x174] */ r_ecx = R32((u32)(r_eax+0x174u));
    /* 005ebdb0: call 0x616b30 */ r_esp -= 4; W32(r_esp, 0x5ebdb5u); f_00616b30();
    /* 005ebdb5: movzx ecx, byte ptr [ebp - 0x35] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 005ebdb9: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebdbf: je 0x5ebdcc */ if (fZ) goto L_005ebdcc;
L_005ebdc1:; BB(0x005ebdc1);
    /* 005ebdc1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebdc4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ebdc7: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005ebdca: jmp 0x5ebd6a */ goto L_005ebd6a;
L_005ebdcc:; BB(0x005ebdcc);
    /* 005ebdcc: jmp 0x5ebd72 */ goto L_005ebd72;
L_005ebdce:; BB(0x005ebdce);
    /* 005ebdce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebdd1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebdd2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebdd4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebdd6: cmp dword ptr [ebp - 0x3c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebdd9: jl 0x5ebe00 */ if ((fS!=fO)) goto L_005ebe00;
L_005ebddb:; BB(0x005ebddb);
    /* 005ebddb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebdde: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebde1: jle 0x5ebe00 */ if ((fZ||fS!=fO)) goto L_005ebe00;
L_005ebde3:; BB(0x005ebde3);
    /* 005ebde3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebde6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebde9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ebdec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebdef: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ebdf2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005ebdf5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ebdf8: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005ebdfb: jmp 0x5ebd6a */ goto L_005ebd6a;
L_005ebe00:; BB(0x005ebe00);
    /* 005ebe00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebe03: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebe04: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebe06: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebe08: cmp dword ptr [ebp - 0x3c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebe0b: jl 0x5ebe53 */ if ((fS!=fO)) goto L_005ebe53;
L_005ebe0d:; BB(0x005ebe0d);
    /* 005ebe0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebe10: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebe11: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebe13: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebe15: cmp dword ptr [ebp - 0x3c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebe18: jl 0x5ebe31 */ if ((fS!=fO)) goto L_005ebe31;
L_005ebe1a:; BB(0x005ebe1a);
    /* 005ebe1a: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe1f: push 0x6d62dc */ { u32 v = 0x6d62dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe24: push 0x6d630c */ { u32 v = 0x6d630cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe29: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ebe2eu); f_005e9f20();
    /* 005ebe2e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ebe31:; BB(0x005ebe31);
    /* 005ebe31: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ebe34: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ebe37: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ebe39: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ebe3c: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005ebe3f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ebe42: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ebe45: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ebe48: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005ebe4b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebe4e: jmp 0x5ebf73 */ goto L_005ebf73;
L_005ebe53:; BB(0x005ebe53);
    /* 005ebe53: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebe56: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_005ebe59:; BB(0x005ebe59);
    /* 005ebe59: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebe5c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ebe5f: jmp 0x5ebe6a */ goto L_005ebe6a;
L_005ebe61:; BB(0x005ebe61);
    /* 005ebe61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebe64: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebe67: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005ebe6a:; BB(0x005ebe6a);
    /* 005ebe6a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebe6d: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebe70: jge 0x5ebebc */ if ((fS==fO)) goto L_005ebebc;
L_005ebe72:; BB(0x005ebe72);
    /* 005ebe72: lea eax, [ebp - 0x21] */ r_eax = (u32)(r_ebp+0xffffffdfu);
    /* 005ebe75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe76: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005ebe79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe7a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ebe7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe7e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebe81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe82: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebe85: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 005ebe8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe8c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebe8f: mov ecx, dword ptr [eax + 0x164] */ r_ecx = R32((u32)(r_eax+0x164u));
    /* 005ebe95: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ebe96: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005ebe99: mov ecx, dword ptr [edx + 0x174] */ r_ecx = R32((u32)(r_edx+0x174u));
    /* 005ebe9f: call 0x616b30 */ r_esp -= 4; W32(r_esp, 0x5ebea4u); f_00616b30();
    /* 005ebea4: movzx eax, byte ptr [ebp - 0x35] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 005ebea8: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ebead: je 0x5ebeba */ if (fZ) goto L_005ebeba;
L_005ebeaf:; BB(0x005ebeaf);
    /* 005ebeaf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebeb2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebeb5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ebeb8: jmp 0x5ebe59 */ goto L_005ebe59;
L_005ebeba:; BB(0x005ebeba);
    /* 005ebeba: jmp 0x5ebe61 */ goto L_005ebe61;
L_005ebebc:; BB(0x005ebebc);
    /* 005ebebc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebebf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebec0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebec2: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebec4: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebec7: jge 0x5ebeee */ if ((fS==fO)) goto L_005ebeee;
L_005ebec9:; BB(0x005ebec9);
    /* 005ebec9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebecc: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebecf: jle 0x5ebeee */ if ((fZ||fS!=fO)) goto L_005ebeee;
L_005ebed1:; BB(0x005ebed1);
    /* 005ebed1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebed4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ebed7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ebeda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebedd: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ebee0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ebee3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ebee6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005ebee9: jmp 0x5ebe59 */ goto L_005ebe59;
L_005ebeee:; BB(0x005ebeee);
    /* 005ebeee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebef1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebef2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebef4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebef6: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebef9: jge 0x5ebf3e */ if ((fS==fO)) goto L_005ebf3e;
L_005ebefb:; BB(0x005ebefb);
    /* 005ebefb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ebefe: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ebeff: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ebf01: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ebf03: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ebf06: jge 0x5ebf1f */ if ((fS==fO)) goto L_005ebf1f;
L_005ebf08:; BB(0x005ebf08);
    /* 005ebf08: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf0d: push 0x6d62dc */ { u32 v = 0x6d62dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf12: push 0x6d62f4 */ { u32 v = 0x6d62f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ebf17: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ebf1cu); f_005e9f20();
    /* 005ebf1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ebf1f:; BB(0x005ebf1f);
    /* 005ebf1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ebf22: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ebf25: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ebf27: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ebf2a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ebf2d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ebf30: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005ebf33: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ebf36: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005ebf39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ebf3c: jmp 0x5ebf73 */ goto L_005ebf73;
L_005ebf3e:; BB(0x005ebf3e);
    /* 005ebf3e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005ebf41: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005ebf44: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ebf47: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005ebf4a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ebf4d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ebf50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ebf53: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ebf56: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ebf59: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ebf5c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ebf5e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ebf61: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005ebf64: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ebf67: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005ebf6a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ebf6d: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 005ebf70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005ebf73:; BB(0x005ebf73);
    /* 005ebf73: mov esp, ebp */ r_esp = r_ebp;
    /* 005ebf75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ebf76: ret 4 */ FN_RET(0x005ebac0); r_esp += 8; return;
}

void f_005f5860(void) /* sciView::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5860);
    /* 005f5860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5861: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5867: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f586a: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f586e: je 0x5f588f */ if (fZ) goto L_005f588f;
L_005f5870:; BB(0x005f5870);
    /* 005f5870: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5873: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f5875: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5878: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005f587e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5880u); call_ind(t); }
    /* 005f5880: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5884: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5887: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f588a: call 0x5f8ce0 */ r_esp -= 4; W32(r_esp, 0x5f588fu); f_005f8ce0();
L_005f588f:; BB(0x005f588f);
    /* 005f588f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5892: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f5895: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005f5898: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f589b: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f589f: je 0x5f58c0 */ if (fZ) goto L_005f58c0;
L_005f58a1:; BB(0x005f58a1);
    /* 005f58a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f58a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f58a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f58a8: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005f58ab: call 0x5f8ba0 */ r_esp -= 4; W32(r_esp, 0x5f58b0u); f_005f8ba0();
    /* 005f58b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f58b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f58b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f58b8: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005f58be: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f58c0u); call_ind(t); }
L_005f58c0:; BB(0x005f58c0);
    /* 005f58c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005f58c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f58c3: ret 4 */ FN_RET(0x005f5860); r_esp += 8; return;
}

