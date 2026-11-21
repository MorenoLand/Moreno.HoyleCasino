#include "protos.h"

void f_005946e0(void) /* sciText::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005946e0);
    /* 005946e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005946e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005946e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005946e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005946e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005946ea: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005946ed: je 0x594728 */ if (fZ) goto L_00594728;
L_005946ef:; BB(0x005946ef);
    /* 005946ef: push 0x5ec760 */ { u32 v = 0x5ec760u; r_esp -= 4; W32(r_esp, v); }
    /* 005946f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005946f7: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 005946fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005946fb: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00594700: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00594704: call 0x686e57 */ r_esp -= 4; W32(r_esp, 0x594709u); f_00686e57();
    /* 00594709: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059470c: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0059470f: je 0x594720 */ if (fZ) goto L_00594720;
L_00594711:; BB(0x00594711);
    /* 00594711: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594714: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00594717: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00594718: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x59471du); f_00686cae();
    /* 0059471d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00594720:; BB(0x00594720);
    /* 00594720: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00594723: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00594726: jmp 0x594747 */ goto L_00594747;
L_00594728:; BB(0x00594728);
    /* 00594728: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059472b: call 0x5ec760 */ r_esp -= 4; W32(r_esp, 0x594730u); f_005ec760();
    /* 00594730: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00594733: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00594736: je 0x594744 */ if (fZ) goto L_00594744;
L_00594738:; BB(0x00594738);
    /* 00594738: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0059473b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059473c: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x594741u); f_00686cae();
    /* 00594741: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00594744:; BB(0x00594744);
    /* 00594744: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00594747:; BB(0x00594747);
    /* 00594747: mov esp, ebp */ r_esp = r_ebp;
    /* 00594749: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059474a: ret 4 */ FN_RET(0x005946e0); r_esp += 8; return;
}

void f_005ec760(void) /* sciText::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ec760);
    /* 005ec760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ec761: mov ebp, esp */ r_ebp = r_esp;
    /* 005ec763: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec765: push 0x6a9c7b */ { u32 v = 0x6a9c7bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ec76a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ec770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec771: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ec774: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ec779: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ec77b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec77c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ec77f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ec785: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ec788: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec78b: mov dword ptr [eax], 0x6d6354 */ W32((u32)(r_eax), 0x6d6354u);
    /* 005ec791: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ec798: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec79b: cmp dword ptr [ecx + 0x5c], 0 */ {  u32 a = R32((u32)(r_ecx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec79f: je 0x5ec7b6 */ if (fZ) goto L_005ec7b6;
L_005ec7a1:; BB(0x005ec7a1);
    /* 005ec7a1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec7a4: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 005ec7a7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ec7aa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ec7ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7ae: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ec7b3u); f_00686cae();
    /* 005ec7b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ec7b6:; BB(0x005ec7b6);
    /* 005ec7b6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec7b9: cmp dword ptr [edx + 0x98], 0 */ {  u32 a = R32((u32)(r_edx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec7c0: je 0x5ec7da */ if (fZ) goto L_005ec7da;
L_005ec7c2:; BB(0x005ec7c2);
    /* 005ec7c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec7c5: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005ec7cb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ec7ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ec7d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7d2: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ec7d7u); f_00686cae();
    /* 005ec7d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ec7da:; BB(0x005ec7da);
    /* 005ec7da: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec7dd: cmp dword ptr [eax + 0xac], 0 */ {  u32 a = R32((u32)(r_eax+0xacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec7e4: je 0x5ec819 */ if (fZ) goto L_005ec819;
L_005ec7e6:; BB(0x005ec7e6);
    /* 005ec7e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec7e9: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 005ec7ef: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ec7f2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ec7f5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ec7f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec7f9: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ec7feu); f_00686cae();
    /* 005ec7fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec801: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec804: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005ec80a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ec80d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ec810: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec811: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ec816u); f_00686cae();
    /* 005ec816: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ec819:; BB(0x005ec819);
    /* 005ec819: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec81c: cmp dword ptr [edx + 0xb0], 0 */ {  u32 a = R32((u32)(r_edx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec823: je 0x5ec84a */ if (fZ) goto L_005ec84a;
L_005ec825:; BB(0x005ec825);
    /* 005ec825: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec828: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005ec82e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec82f: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005ec835: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005ec838: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x5ec83du); f_006041d0();
    /* 005ec83d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec840: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
L_005ec84a:; BB(0x005ec84a);
    /* 005ec84a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec84d: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec854: je 0x5ec875 */ if (fZ) goto L_005ec875;
L_005ec856:; BB(0x005ec856);
    /* 005ec856: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec859: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005ec85f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec860: call 0x686c36 */ r_esp -= 4; W32(r_esp, 0x5ec865u); f_00686c36();
    /* 005ec865: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec868: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec86b: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
L_005ec875:; BB(0x005ec875);
    /* 005ec875: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec878: cmp dword ptr [edx + 0xb8], 0 */ {  u32 a = R32((u32)(r_edx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec87f: je 0x5ec8a6 */ if (fZ) goto L_005ec8a6;
L_005ec881:; BB(0x005ec881);
    /* 005ec881: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec884: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005ec88a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ec88b: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005ec891: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005ec894: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x5ec899u); f_006041d0();
    /* 005ec899: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec89c: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
L_005ec8a6:; BB(0x005ec8a6);
    /* 005ec8a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec8a9: cmp dword ptr [ecx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ec8b0: je 0x5ec8d1 */ if (fZ) goto L_005ec8d1;
L_005ec8b2:; BB(0x005ec8b2);
    /* 005ec8b2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec8b5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005ec8bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ec8bc: call 0x686c30 */ r_esp -= 4; W32(r_esp, 0x5ec8c1u); f_00686c30();
    /* 005ec8c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ec8c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec8c7: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
L_005ec8d1:; BB(0x005ec8d1);
    /* 005ec8d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ec8d8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ec8db: call 0x5f61b0 */ r_esp -= 4; W32(r_esp, 0x5ec8e0u); f_005f61b0();
    /* 005ec8e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ec8e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ec8ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ec8eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ec8ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ec8ee: ret  */ FN_RET(0x005ec760); r_esp += 4; return;
}

void f_005ecd00(void) /* scitext::func_005ecd00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ecd00);
    /* 005ecd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd01: mov ebp, esp */ r_ebp = r_esp;
    /* 005ecd03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd05: push 0x6a9cb2 */ { u32 v = 0x6a9cb2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ecd10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd11: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ecd17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd19: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ecd1e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ecd20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecd21: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ecd24: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ecd2a: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 005ecd30: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd34: jne 0x5ecd3b */ if (!fZ) goto L_005ecd3b;
L_005ecd36:; BB(0x005ecd36);
    /* 005ecd36: jmp 0x5ee4a6 */ goto L_005ee4a6;
L_005ecd3b:; BB(0x005ecd3b);
    /* 005ecd3b: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecd41: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005ecd44: mov dword ptr [ebp - 0xdc], ecx */ W32((u32)(r_ebp+0xffffff24u), r_ecx);
    /* 005ecd4a: cmp dword ptr [ebp - 0xdc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ecd51: jle 0x5ecde1 */ if ((fZ||fS!=fO)) goto L_005ecde1;
L_005ecd57:; BB(0x005ecd57);
    /* 005ecd57: cmp dword ptr [ebp - 0xdc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ecd5e: jle 0x5ecd6b */ if ((fZ||fS!=fO)) goto L_005ecd6b;
L_005ecd60:; BB(0x005ecd60);
    /* 005ecd60: cmp dword ptr [ebp - 0xdc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd67: je 0x5ecd7e */ if (fZ) goto L_005ecd7e;
L_005ecd69:; BB(0x005ecd69);
    /* 005ecd69: jmp 0x5ecde1 */ goto L_005ecde1;
L_005ecd6b:; BB(0x005ecd6b);
    /* 005ecd6b: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecd71: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 005ecd74: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd77: jne 0x5ecd7e */ if (!fZ) goto L_005ecd7e;
L_005ecd79:; BB(0x005ecd79);
    /* 005ecd79: jmp 0x5ee4a6 */ goto L_005ee4a6;
L_005ecd7e:; BB(0x005ecd7e);
    /* 005ecd7e: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecd84: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 005ecd87: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd8a: jne 0x5ecde1 */ if (!fZ) goto L_005ecde1;
L_005ecd8c:; BB(0x005ecd8c);
    /* 005ecd8c: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecd92: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005ecd98: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecd9b: jne 0x5ecde1 */ if (!fZ) goto L_005ecde1;
L_005ecd9d:; BB(0x005ecd9d);
    /* 005ecd9d: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecda3: movzx eax, byte ptr [edx + 0xc8] */ r_eax = (u32)R8((u32)(r_edx+0xc8u));
    /* 005ecdaa: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005ecdae: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecdb0: jne 0x5ecde1 */ if (!fZ) goto L_005ecde1;
L_005ecdb2:; BB(0x005ecdb2);
    /* 005ecdb2: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecdb8: movzx eax, byte ptr [edx + 0xc9] */ r_eax = (u32)R8((u32)(r_edx+0xc9u));
    /* 005ecdbf: movzx ecx, byte ptr [ebp + 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0x11u));
    /* 005ecdc3: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecdc5: jne 0x5ecde1 */ if (!fZ) goto L_005ecde1;
L_005ecdc7:; BB(0x005ecdc7);
    /* 005ecdc7: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecdcd: movzx eax, byte ptr [edx + 0xca] */ r_eax = (u32)R8((u32)(r_edx+0xcau));
    /* 005ecdd4: movzx ecx, byte ptr [ebp + 0x12] */ r_ecx = (u32)R8((u32)(r_ebp+0x12u));
    /* 005ecdd8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecdda: jne 0x5ecde1 */ if (!fZ) goto L_005ecde1;
L_005ecddc:; BB(0x005ecddc);
    /* 005ecddc: jmp 0x5ee4a6 */ goto L_005ee4a6;
L_005ecde1:; BB(0x005ecde1);
    /* 005ecde1: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecde7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ecdea: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 005ecded: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ecdf0: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ecdf3: add ecx, 0x770028 */ {  u32 a = r_ecx; u32 b = 0x770028u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ecdf9: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecdff: add edx, 0x8c */ {  u32 a = r_edx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ece05: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ece07: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ece09: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005ece0c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005ece0f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005ece12: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005ece15: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ece1b: cmp dword ptr [edx + 0xb0], 0 */ {  u32 a = R32((u32)(r_edx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ece22: je 0x5ece4f */ if (fZ) goto L_005ece4f;
L_005ece24:; BB(0x005ece24);
    /* 005ece24: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ece2a: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005ece30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ece31: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005ece37: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005ece3a: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x5ece3fu); f_006041d0();
    /* 005ece3f: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ece45: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
L_005ece4f:; BB(0x005ece4f);
    /* 005ece4f: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ece55: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ece5c: je 0x5ece83 */ if (fZ) goto L_005ece83;
L_005ece5e:; BB(0x005ece5e);
    /* 005ece5e: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ece64: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005ece6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ece6b: call 0x686c36 */ r_esp -= 4; W32(r_esp, 0x5ece70u); f_00686c36();
    /* 005ece70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ece73: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ece79: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
L_005ece83:; BB(0x005ece83);
    /* 005ece83: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ece89: cmp dword ptr [edx + 0xb8], 0 */ {  u32 a = R32((u32)(r_edx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ece90: je 0x5ecebd */ if (fZ) goto L_005ecebd;
L_005ece92:; BB(0x005ece92);
    /* 005ece92: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ece98: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005ece9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ece9f: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005ecea5: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005ecea8: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x5eceadu); f_006041d0();
    /* 005ecead: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005eceb3: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
L_005ecebd:; BB(0x005ecebd);
    /* 005ecebd: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecec3: cmp dword ptr [ecx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ececa: je 0x5ecef1 */ if (fZ) goto L_005ecef1;
L_005ececc:; BB(0x005ececc);
    /* 005ececc: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005eced2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 005eced8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005eced9: call 0x686c30 */ r_esp -= 4; W32(r_esp, 0x5ecedeu); f_00686c30();
    /* 005ecede: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecee1: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecee7: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
L_005ecef1:; BB(0x005ecef1);
    /* 005ecef1: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecef7: mov dword ptr [edx + 0xc4], 0xffffffff */ W32((u32)(r_edx+0xc4u), 0xffffffffu);
    /* 005ecf01: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecf07: add eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ecf0c: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005ecf13: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005ecf16: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005ecf1c: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005ecf1f: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecf25: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 005ecf2c: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecf32: cmp dword ptr [ecx + 0x8c], 0 */ {  u32 a = R32((u32)(r_ecx+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ecf39: jbe 0x5ecf8b */ if ((fC||fZ)) goto L_005ecf8b;
L_005ecf3b:; BB(0x005ecf3b);
    /* 005ecf3b: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecf41: movsx eax, word ptr [edx + 0x96] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x96u));
    /* 005ecf48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ecf4a: jl 0x5ecf8b */ if ((fS!=fO)) goto L_005ecf8b;
L_005ecf4c:; BB(0x005ecf4c);
    /* 005ecf4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf4e: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecf54: mov edx, dword ptr [ecx + 0x8c] */ r_edx = R32((u32)(r_ecx+0x8cu));
    /* 005ecf5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf5b: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecf60: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005ecf65: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005ecf68: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x5ecf6du); f_00603c50();
    /* 005ecf6d: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecf73: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 005ecf79: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecf7f: mov dword ptr [edx + 0x64], 2 */ W32((u32)(r_edx+0x64u), 0x2u);
    /* 005ecf86: jmp 0x5ee467 */ goto L_005ee467;
L_005ecf8b:; BB(0x005ecf8b);
    /* 005ecf8b: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecf91: cmp dword ptr [eax + 0x8c], 0 */ {  u32 a = R32((u32)(r_eax+0x8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ecf98: jbe 0x5ee1f3 */ if ((fC||fZ)) goto L_005ee1f3;
L_005ecf9e:; BB(0x005ecf9e);
    /* 005ecf9e: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecfa4: movsx edx, word ptr [ecx + 0x96] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x96u));
    /* 005ecfab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ecfad: jge 0x5ee1f3 */ if ((fS==fO)) goto L_005ee1f3;
L_005ecfb3:; BB(0x005ecfb3);
    /* 005ecfb3: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecfb9: add eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ecfbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfbf: call 0x686c4e */ r_esp -= 4; W32(r_esp, 0x5ecfc4u); f_00686c4e();
    /* 005ecfc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ecfc7: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecfcd: cmp dword ptr [ecx + 0xb4], 0 */ {  u32 a = R32((u32)(r_ecx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecfd4: jne 0x5ed025 */ if (!fZ) goto L_005ed025;
L_005ecfd6:; BB(0x005ecfd6);
    /* 005ecfd6: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ecfdc: cmp dword ptr [edx + 0xb4], 0 */ {  u32 a = R32((u32)(r_edx+0xb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ecfe3: jne 0x5ecffc */ if (!fZ) goto L_005ecffc;
L_005ecfe5:; BB(0x005ecfe5);
    /* 005ecfe5: push 0x128 */ { u32 v = 0x128u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfea: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecfef: push 0x6d6520 */ { u32 v = 0x6d6520u; r_esp -= 4; W32(r_esp, v); }
    /* 005ecff4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ecff9u); f_005e9f20();
    /* 005ecff9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ecffc:; BB(0x005ecffc);
    /* 005ecffc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ecffd: mov ecx, esp */ r_ecx = r_esp;
    /* 005ecfff: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005ed006: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005ed009: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005ed00e: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005ed011: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed013: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed015: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed01b: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5ed020u); f_005ecd00();
    /* 005ed020: jmp 0x5ee4a6 */ goto L_005ee4a6;
L_005ed025:; BB(0x005ed025);
    /* 005ed025: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed02b: mov dword ptr [ecx + 0x64], 3 */ W32((u32)(r_ecx+0x64u), 0x3u);
    /* 005ed032: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed034: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed03a: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005ed040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed041: push 0x20465454 */ { u32 v = 0x20465454u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed046: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005ed04c: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005ed04f: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x5ed054u); f_00603c50();
    /* 005ed054: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed05a: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 005ed060: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed066: cmp dword ptr [eax + 0xb8], 0 */ {  u32 a = R32((u32)(r_eax+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed06d: jne 0x5ed108 */ if (!fZ) goto L_005ed108;
L_005ed073:; BB(0x005ed073);
    /* 005ed073: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed079: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 005ed07f: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed085: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005ed08b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ed08d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ed090: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ed092u); call_ind(t); }
    /* 005ed092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed094: jne 0x5ed108 */ if (!fZ) goto L_005ed108;
L_005ed096:; BB(0x005ed096);
    /* 005ed096: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed09c: cmp dword ptr [ecx + 0xb8], 0 */ {  u32 a = R32((u32)(r_ecx+0xb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed0a3: je 0x5ed0c8 */ if (fZ) goto L_005ed0c8;
L_005ed0a5:; BB(0x005ed0a5);
    /* 005ed0a5: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed0ab: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005ed0b1: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed0b7: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 005ed0bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ed0bf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ed0c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ed0c4u); call_ind(t); }
    /* 005ed0c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed0c6: jne 0x5ed0df */ if (!fZ) goto L_005ed0df;
L_005ed0c8:; BB(0x005ed0c8);
    /* 005ed0c8: push 0x132 */ { u32 v = 0x132u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0cd: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0d2: push 0x6d64ec */ { u32 v = 0x6d64ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0d7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ed0dcu); f_005e9f20();
    /* 005ed0dc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ed0df:; BB(0x005ed0df);
    /* 005ed0df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0e0: mov edx, esp */ r_edx = r_esp;
    /* 005ed0e2: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005ed0e8: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005ed0eb: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005ed0f1: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 005ed0f4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0f6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed0f8: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed0fe: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5ed103u); f_005ecd00();
    /* 005ed103: jmp 0x5ee4a6 */ goto L_005ee4a6;
L_005ed108:; BB(0x005ed108);
    /* 005ed108: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed10e: add edx, 0xbc */ {  u32 a = r_edx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ed114: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed115: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed117: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed11d: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005ed123: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x5ed128u); f_0061ed80();
    /* 005ed128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed129: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed12f: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 005ed135: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed13b: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 005ed141: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005ed143: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ed146: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ed148u); call_ind(t); }
    /* 005ed148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed149: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed14f: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 005ed155: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed156: call 0x686c48 */ r_esp -= 4; W32(r_esp, 0x5ed15bu); f_00686c48();
    /* 005ed15b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed15e: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed164: cmp dword ptr [eax + 0xbc], 0 */ {  u32 a = R32((u32)(r_eax+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed16b: jne 0x5ed1bd */ if (!fZ) goto L_005ed1bd;
L_005ed16d:; BB(0x005ed16d);
    /* 005ed16d: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed173: cmp dword ptr [ecx + 0xbc], 0 */ {  u32 a = R32((u32)(r_ecx+0xbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed17a: jne 0x5ed193 */ if (!fZ) goto L_005ed193;
L_005ed17c:; BB(0x005ed17c);
    /* 005ed17c: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed181: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed186: push 0x6d64e0 */ { u32 v = 0x6d64e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed18b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ed190u); f_005e9f20();
    /* 005ed190: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ed193:; BB(0x005ed193);
    /* 005ed193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed194: mov eax, esp */ r_eax = r_esp;
    /* 005ed196: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005ed19d: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005ed1a0: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005ed1a6: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005ed1a9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1ab: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1ad: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed1b3: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5ed1b8u); f_005ecd00();
    /* 005ed1b8: jmp 0x5ee4a6 */ goto L_005ee4a6;
L_005ed1bd:; BB(0x005ed1bd);
    /* 005ed1bd: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed1c3: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed1c9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005ed1cc: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005ed1cf: jne 0x5ed1e8 */ if (!fZ) goto L_005ed1e8;
L_005ed1d1:; BB(0x005ed1d1);
    /* 005ed1d1: push 0x13f */ { u32 v = 0x13fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1d6: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1db: push 0x6d64c4 */ { u32 v = 0x6d64c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1e0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ed1e5u); f_005e9f20();
    /* 005ed1e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ed1e8:; BB(0x005ed1e8);
    /* 005ed1e8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1ec: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 005ed1ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1f0: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5ed1f5u); f_00686fa2();
    /* 005ed1f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed1f8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed1fc: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed202: add edx, 0xc0 */ {  u32 a = r_edx; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ed208: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed209: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5ed20eu); f_00686fa2();
    /* 005ed20e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed211: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed217: mov dword ptr [eax + 0xc0], 0xffffffff */ W32((u32)(r_eax+0xc0u), 0xffffffffu);
    /* 005ed221: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed227: movzx edx, word ptr [ecx + 0x90] */ r_edx = (u32)R16((u32)(r_ecx+0x90u));
    /* 005ed22e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005ed230: jle 0x5ed2b7 */ if ((fZ||fS!=fO)) goto L_005ed2b7;
L_005ed236:; BB(0x005ed236);
    /* 005ed236: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed23c: movzx ecx, word ptr [eax + 0x90] */ r_ecx = (u32)R16((u32)(r_eax+0x90u));
    /* 005ed243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed244: lea edx, [ebp - 0xa4] */ r_edx = (u32)(r_ebp+0xffffff5cu);
    /* 005ed24a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed24b: call 0x6102a0 */ r_esp -= 4; W32(r_esp, 0x5ed250u); f_006102a0();
    /* 005ed250: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed253: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ed255: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005ed25b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005ed25e: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005ed264: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005ed267: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005ed26d: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005ed270: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005ed276: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005ed27c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005ed27f: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005ed285: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005ed288: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005ed28e: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005ed291: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005ed297: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005ed29a: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed29e: jne 0x5ed2b7 */ if (!fZ) goto L_005ed2b7;
L_005ed2a0:; BB(0x005ed2a0);
    /* 005ed2a0: push 0x146 */ { u32 v = 0x146u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed2a5: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed2aa: push 0x6d64ac */ { u32 v = 0x6d64acu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed2af: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ed2b4u); f_005e9f20();
    /* 005ed2b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ed2b7:; BB(0x005ed2b7);
    /* 005ed2b7: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed2bb: jle 0x5ed2ce */ if ((fZ||fS!=fO)) goto L_005ed2ce;
L_005ed2bd:; BB(0x005ed2bd);
    /* 005ed2bd: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed2c3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ed2c6: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 005ed2cc: jmp 0x5ed300 */ goto L_005ed300;
L_005ed2ce:; BB(0x005ed2ce);
    /* 005ed2ce: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed2d4: movzx edx, word ptr [ecx + 0x90] */ r_edx = (u32)R16((u32)(r_ecx+0x90u));
    /* 005ed2db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005ed2dd: jle 0x5ed2f0 */ if ((fZ||fS!=fO)) goto L_005ed2f0;
L_005ed2df:; BB(0x005ed2df);
    /* 005ed2df: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed2e5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005ed2e8: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 005ed2ee: jmp 0x5ed300 */ goto L_005ed300;
L_005ed2f0:; BB(0x005ed2f0);
    /* 005ed2f0: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed2f6: mov dword ptr [edx + 0xc4], 0xb */ W32((u32)(r_edx+0xc4u), 0xbu);
L_005ed300:; BB(0x005ed300);
    /* 005ed300: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed302: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed304: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed306: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed30c: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 005ed312: shl ecx, 6 */ { u32 c = (6u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ed315: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed316: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed31c: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005ed322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed323: call 0x686c42 */ r_esp -= 4; W32(r_esp, 0x5ed328u); f_00686c42();
    /* 005ed328: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed32b: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005ed32f: movzx edx, byte ptr [0x75ee1c] */ r_edx = (u32)R8((u32)(0x75ee1cu));
    /* 005ed336: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed338: jne 0x5ed358 */ if (!fZ) goto L_005ed358;
L_005ed33a:; BB(0x005ed33a);
    /* 005ed33a: movzx eax, byte ptr [ebp + 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0x11u));
    /* 005ed33e: movzx ecx, byte ptr [0x75ee1d] */ r_ecx = (u32)R8((u32)(0x75ee1du));
    /* 005ed345: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed347: jne 0x5ed358 */ if (!fZ) goto L_005ed358;
L_005ed349:; BB(0x005ed349);
    /* 005ed349: movzx edx, byte ptr [ebp + 0x12] */ r_edx = (u32)R8((u32)(r_ebp+0x12u));
    /* 005ed34d: movzx eax, byte ptr [0x75ee1e] */ r_eax = (u32)R8((u32)(0x75ee1eu));
    /* 005ed354: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed356: je 0x5ed373 */ if (fZ) goto L_005ed373;
L_005ed358:; BB(0x005ed358);
    /* 005ed358: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed35e: add ecx, 0xc8 */ {  u32 a = r_ecx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed364: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 005ed368: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005ed36b: mov al, byte ptr [ebp + 0x12] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x12u))) & 0xffu);
    /* 005ed36e: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 005ed371: jmp 0x5ed3bc */ goto L_005ed3bc;
L_005ed373:; BB(0x005ed373);
    /* 005ed373: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed379: movzx edx, word ptr [ecx + 0x90] */ r_edx = (u32)R16((u32)(r_ecx+0x90u));
    /* 005ed380: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005ed382: jle 0x5ed39e */ if ((fZ||fS!=fO)) goto L_005ed39e;
L_005ed384:; BB(0x005ed384);
    /* 005ed384: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed38a: add eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed38f: mov cx, word ptr [ebp - 0x40] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc0u))) & 0xffffu);
    /* 005ed393: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005ed396: mov dl, byte ptr [ebp - 0x3e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc2u))) & 0xffu);
    /* 005ed399: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 005ed39c: jmp 0x5ed3bc */ goto L_005ed3bc;
L_005ed39e:; BB(0x005ed39e);
    /* 005ed39e: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed3a4: add eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed3a9: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005ed3b0: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 005ed3b3: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005ed3b9: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
L_005ed3bc:; BB(0x005ed3bc);
    /* 005ed3bc: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed3c2: movzx ecx, word ptr [eax + 0x90] */ r_ecx = (u32)R16((u32)(r_eax+0x90u));
    /* 005ed3c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005ed3cb: jle 0x5ed3d8 */ if ((fZ||fS!=fO)) goto L_005ed3d8;
L_005ed3cd:; BB(0x005ed3cd);
    /* 005ed3cd: mov dl, byte ptr [ebp - 0x3d] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffc3u))) & 0xffu);
    /* 005ed3d0: mov byte ptr [ebp - 0xdd], dl */ W8((u32)(r_ebp+0xffffff23u), (u8)r_edx);
    /* 005ed3d6: jmp 0x5ed3df */ goto L_005ed3df;
L_005ed3d8:; BB(0x005ed3d8);
    /* 005ed3d8: mov byte ptr [ebp - 0xdd], 1 */ W8((u32)(r_ebp+0xffffff23u), 0x1u);
L_005ed3df:; BB(0x005ed3df);
    /* 005ed3df: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed3e5: mov cl, byte ptr [ebp - 0xdd] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff23u))) & 0xffu);
    /* 005ed3eb: mov byte ptr [eax + 0xcb], cl */ W8((u32)(r_eax+0xcbu), (u8)r_ecx);
    /* 005ed3f1: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed3f7: cmp dword ptr [edx + 0x60], 0x100 */ {  u32 a = R32((u32)(r_edx+0x60u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed3fe: jl 0x5ed417 */ if ((fS!=fO)) goto L_005ed417;
L_005ed400:; BB(0x005ed400);
    /* 005ed400: push 0x15c */ { u32 v = 0x15cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed405: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed40a: push 0x6d6498 */ { u32 v = 0x6d6498u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed40f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ed414u); f_005e9f20();
    /* 005ed414: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ed417:; BB(0x005ed417);
    /* 005ed417: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed41d: cmp dword ptr [ecx + 0xc4], 0x40 */ {  u32 a = R32((u32)(r_ecx+0xc4u)); u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed424: jl 0x5ed43d */ if ((fS!=fO)) goto L_005ed43d;
L_005ed426:; BB(0x005ed426);
    /* 005ed426: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 005ed42b: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed430: push 0x6d6478 */ { u32 v = 0x6d6478u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed435: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ed43au); f_005e9f20();
    /* 005ed43a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ed43d:; BB(0x005ed43d);
    /* 005ed43d: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed443: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005ed446: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ed449: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed44f: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005ed455: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ed458: shl eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005ed45b: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed45d: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed463: movzx eax, byte ptr [edx + 0xc8] */ r_eax = (u32)R8((u32)(r_edx+0xc8u));
    /* 005ed46a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ed46b: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ed46e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed470: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ed473: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005ed476: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed478: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed47e: movzx eax, byte ptr [eax + 0xc9] */ r_eax = (u32)R8((u32)(r_eax+0xc9u));
    /* 005ed485: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ed486: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ed489: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed48b: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ed48e: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005ed491: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed493: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed499: movzx eax, byte ptr [edx + 0xca] */ r_eax = (u32)R8((u32)(r_edx+0xcau));
    /* 005ed4a0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ed4a1: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ed4a4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed4a6: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ed4a9: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed4ab: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ed4ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4b0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ed4b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4b4: push 0x53544e46 */ { u32 v = 0x53544e46u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4b9: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005ed4bf: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005ed4c2: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x5ed4c7u); f_00603c50();
    /* 005ed4c7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ed4ca: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed4ce: je 0x5ed569 */ if (fZ) goto L_005ed569;
L_005ed4d4:; BB(0x005ed4d4);
    /* 005ed4d4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ed4d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ed4d9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ed4dc: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005ed4df: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ed4e1u); call_ind(t); }
    /* 005ed4e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed4e3: je 0x5ed569 */ if (fZ) goto L_005ed569;
L_005ed4e9:; BB(0x005ed4e9);
    /* 005ed4e9: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4f0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ed4f3: call 0x61f2a0 */ r_esp -= 4; W32(r_esp, 0x5ed4f8u); f_0061f2a0();
    /* 005ed4f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed4f9: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed4ff: add eax, 0xd0 */ {  u32 a = r_eax; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed504: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed505: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5ed50au); f_00686fde();
    /* 005ed50a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed50d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed50f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ed512: call 0x61f2a0 */ r_esp -= 4; W32(r_esp, 0x5ed517u); f_0061f2a0();
    /* 005ed517: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed51d: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 005ed520: mov word ptr [ecx + 0x96], dx */ W16((u32)(r_ecx+0x96u), (u16)r_edx);
    /* 005ed527: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed529: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ed52c: call 0x61f2a0 */ r_esp -= 4; W32(r_esp, 0x5ed531u); f_0061f2a0();
    /* 005ed531: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed537: add ecx, 0xc0 */ {  u32 a = r_ecx; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed53d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ed53f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ed541: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005ed544: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005ed547: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ed54a: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005ed54d: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005ed550: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005ed553: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed559: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ed55c: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 005ed562: jmp 0x5ee1ee */ goto L_005ee1ee;
L_005ed569:; BB(0x005ed569);
    /* 005ed569: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed56d: je 0x5ed581 */ if (fZ) goto L_005ed581;
L_005ed56f:; BB(0x005ed56f);
    /* 005ed56f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ed572: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed573: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005ed579: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005ed57c: call 0x604220 */ r_esp -= 4; W32(r_esp, 0x5ed581u); f_00604220();
L_005ed581:; BB(0x005ed581);
    /* 005ed581: push 0x320 */ { u32 v = 0x320u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed586: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ed58bu); f_00686d82();
    /* 005ed58b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed58e: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005ed594: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ed59b: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed5a2: je 0x5ed5b7 */ if (fZ) goto L_005ed5b7;
L_005ed5a4:; BB(0x005ed5a4);
    /* 005ed5a4: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005ed5aa: call 0x61f3d0 */ r_esp -= 4; W32(r_esp, 0x5ed5afu); f_0061f3d0();
    /* 005ed5af: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005ed5b5: jmp 0x5ed5c1 */ goto L_005ed5c1;
L_005ed5b7:; BB(0x005ed5b7);
    /* 005ed5b7: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_005ed5c1:; BB(0x005ed5c1);
    /* 005ed5c1: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005ed5c7: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 005ed5cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ed5d4: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005ed5da: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ed5dd: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed5e1: jne 0x5ed5fa */ if (!fZ) goto L_005ed5fa;
L_005ed5e3:; BB(0x005ed5e3);
    /* 005ed5e3: push 0x177 */ { u32 v = 0x177u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed5e8: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed5ed: push 0x6d646c */ { u32 v = 0x6d646cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ed5f2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ed5f7u); f_005e9f20();
    /* 005ed5f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ed5fa:; BB(0x005ed5fa);
    /* 005ed5fa: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005ed601: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ed604: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005ed607: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ed60a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ed60d: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed612: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ed614: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed61a: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed620: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed621: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5ed626u); f_00686fa2();
    /* 005ed626: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed629: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005ed630: jmp 0x5ed63b */ goto L_005ed63b;
L_005ed632:; BB(0x005ed632);
    /* 005ed632: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ed635: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ed638: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005ed63b:; BB(0x005ed63b);
    /* 005ed63b: cmp dword ptr [ebp - 0x18], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed642: jge 0x5eda18 */ if ((fS==fO)) goto L_005eda18;
L_005ed648:; BB(0x005ed648);
    /* 005ed648: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed64e: movzx ecx, byte ptr [eax + 0xcb] */ r_ecx = (u32)R8((u32)(r_eax+0xcbu));
    /* 005ed655: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005ed657: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005ed659: and ecx, 0xfffff000 */ {  u32 a = r_ecx; u32 b = 0xfffff000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed65f: add ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed665: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed668: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed669: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ed66c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed66d: call 0x5ee4c0 */ r_esp -= 4; W32(r_esp, 0x5ed672u); f_005ee4c0();
    /* 005ed672: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed675: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ed676: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed67c: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed682: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ed683: call 0x686c3c */ r_esp -= 4; W32(r_esp, 0x5ed688u); f_00686c3c();
    /* 005ed688: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ed68b: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed691: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005ed697: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005ed69a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ed69d: cmp edx, dword ptr [ecx + 0x68] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x68u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed6a0: jle 0x5ed6ad */ if ((fZ||fS!=fO)) goto L_005ed6ad;
L_005ed6a2:; BB(0x005ed6a2);
    /* 005ed6a2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ed6a5: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005ed6ab: jmp 0x5ed6c5 */ goto L_005ed6c5;
L_005ed6ad:; BB(0x005ed6ad);
    /* 005ed6ad: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed6b3: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed6b9: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ed6bc: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005ed6bf: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
L_005ed6c5:; BB(0x005ed6c5);
    /* 005ed6c5: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 005ed6cb: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005ed6ce: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed6d4: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed6da: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005ed6dd: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed6e3: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed6e9: mov eax, dword ptr [ecx + 0x54] */ r_eax = R32((u32)(r_ecx+0x54u));
    /* 005ed6ec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed6ee: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed6f2: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005ed6f5: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed6f8: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed6fb: add ecx, -0x20 */ {  u32 a = r_ecx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed6fe: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005ed701: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed703: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ed704: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ed707: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed709: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ed70c: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed712: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 005ed718: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005ed71b: sub eax, dword ptr [edx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ed71e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ed721: cmp dword ptr [ebp - 0x24], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed724: jle 0x5ed731 */ if ((fZ||fS!=fO)) goto L_005ed731;
L_005ed726:; BB(0x005ed726);
    /* 005ed726: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ed729: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005ed72f: jmp 0x5ed78a */ goto L_005ed78a;
L_005ed731:; BB(0x005ed731);
    /* 005ed731: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed737: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed73d: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ed740: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed746: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed74c: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 005ed74f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ed751: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed755: setl dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005ed758: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ed75b: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ed75e: add edx, -0x20 */ {  u32 a = r_edx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ed761: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005ed764: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed766: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ed767: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ed76a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed76c: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ed76f: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed775: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed77b: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 005ed77e: sub eax, dword ptr [ecx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ed781: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ed784: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
L_005ed78a:; BB(0x005ed78a);
    /* 005ed78a: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005ed790: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005ed793: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed799: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed79f: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005ed7a2: cmp dword ptr [edx + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed7a6: jge 0x5ed7c2 */ if ((fS==fO)) goto L_005ed7c2;
L_005ed7a8:; BB(0x005ed7a8);
    /* 005ed7a8: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed7ae: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed7b4: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005ed7b7: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005ed7ba: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 005ed7c0: jmp 0x5ed7cc */ goto L_005ed7cc;
L_005ed7c2:; BB(0x005ed7c2);
    /* 005ed7c2: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_005ed7cc:; BB(0x005ed7cc);
    /* 005ed7cc: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed7d2: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed7d5: mov dl, byte ptr [ebp - 0xf0] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff10u))) & 0xffu);
    /* 005ed7db: mov byte ptr [ecx + 0xd0], dl */ W8((u32)(r_ecx+0xd0u), (u8)r_edx);
    /* 005ed7e1: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed7e7: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed7ed: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005ed7f0: cmp dword ptr [edx + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed7f4: jle 0x5ed810 */ if ((fZ||fS!=fO)) goto L_005ed810;
L_005ed7f6:; BB(0x005ed7f6);
    /* 005ed7f6: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed7fc: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed802: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005ed805: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005ed808: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 005ed80e: jmp 0x5ed81a */ goto L_005ed81a;
L_005ed810:; BB(0x005ed810);
    /* 005ed810: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_005ed81a:; BB(0x005ed81a);
    /* 005ed81a: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed820: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed826: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ed829: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed82f: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed832: movsx edx, byte ptr [ecx + 0xd0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xd0u));
    /* 005ed839: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ed83b: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005ed83e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed840: add ecx, dword ptr [ebp - 0xf4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff0cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed846: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed84c: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005ed852: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005ed855: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed85b: mov eax, dword ptr [eax + 0xbc] */ r_eax = R32((u32)(r_eax+0xbcu));
    /* 005ed861: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 005ed864: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ed866: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed86a: setl bl */ r_ebx = (r_ebx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005ed86d: sub ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005ed870: and ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005ed873: add ebx, -0x20 */ {  u32 a = r_ebx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ed876: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005ed879: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed87b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ed87c: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ed87f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed881: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ed884: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed88a: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ed88d: movsx edx, byte ptr [edx + 0xd0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0xd0u));
    /* 005ed894: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ed896: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed898: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed89a: jle 0x5ed909 */ if ((fZ||fS!=fO)) goto L_005ed909;
L_005ed89c:; BB(0x005ed89c);
    /* 005ed89c: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed8a2: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed8a8: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005ed8ab: cmp dword ptr [edx + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed8af: jle 0x5ed8cb */ if ((fZ||fS!=fO)) goto L_005ed8cb;
L_005ed8b1:; BB(0x005ed8b1);
    /* 005ed8b1: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed8b7: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed8bd: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005ed8c0: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005ed8c3: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005ed8c9: jmp 0x5ed8d5 */ goto L_005ed8d5;
L_005ed8cb:; BB(0x005ed8cb);
    /* 005ed8cb: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_005ed8d5:; BB(0x005ed8d5);
    /* 005ed8d5: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed8db: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed8e1: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ed8e4: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed8ea: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed8ed: movsx edx, byte ptr [ecx + 0xd0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xd0u));
    /* 005ed8f4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ed8f6: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 005ed8f9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed8fb: add eax, dword ptr [ebp - 0xf8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff08u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed901: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 005ed907: jmp 0x5ed961 */ goto L_005ed961;
L_005ed909:; BB(0x005ed909);
    /* 005ed909: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed90f: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed915: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ed918: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed91e: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed924: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 005ed927: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ed929: cmp dword ptr [ecx + 0x40], 0 */ {  u32 a = R32((u32)(r_ecx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed92d: setl dl */ r_edx = (r_edx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005ed930: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ed933: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ed936: add edx, -0x20 */ {  u32 a = r_edx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ed939: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005ed93c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed93e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ed93f: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ed942: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed944: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ed947: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed94d: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed950: movsx edx, byte ptr [ecx + 0xd0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xd0u));
    /* 005ed957: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ed959: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed95b: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
L_005ed961:; BB(0x005ed961);
    /* 005ed961: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 005ed967: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005ed96a: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed970: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed976: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ed979: cmp dword ptr [eax + 0x50], 0 */ {  u32 a = R32((u32)(r_eax+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ed97d: je 0x5ed9ee */ if (fZ) goto L_005ed9ee;
L_005ed97f:; BB(0x005ed97f);
    /* 005ed97f: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed985: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ed98b: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ed98e: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed994: add ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed997: movsx edx, byte ptr [ecx + 0xd0] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0xd0u));
    /* 005ed99e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ed9a0: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 005ed9a3: lea ecx, [eax + edx + 2] */ r_ecx = (u32)(r_eax+r_edx+0x2u);
    /* 005ed9a7: cmp dword ptr [ebp - 0x54], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed9aa: jge 0x5ed9b7 */ if ((fS==fO)) goto L_005ed9b7;
L_005ed9ac:; BB(0x005ed9ac);
    /* 005ed9ac: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ed9af: mov dword ptr [ebp - 0x100], edx */ W32((u32)(r_ebp+0xffffff00u), r_edx);
    /* 005ed9b5: jmp 0x5ed9e5 */ goto L_005ed9e5;
L_005ed9b7:; BB(0x005ed9b7);
    /* 005ed9b7: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed9bd: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005ed9c3: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005ed9c6: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ed9cc: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ed9cf: movsx ecx, byte ptr [eax + 0xd0] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xd0u));
    /* 005ed9d6: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005ed9d8: mov edx, dword ptr [edx + 0x50] */ r_edx = R32((u32)(r_edx+0x50u));
    /* 005ed9db: lea eax, [edx + ecx + 2] */ r_eax = (u32)(r_edx+r_ecx+0x2u);
    /* 005ed9df: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
L_005ed9e5:; BB(0x005ed9e5);
    /* 005ed9e5: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 005ed9eb: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_005ed9ee:; BB(0x005ed9ee);
    /* 005ed9ee: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ed9f1: cmp edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ed9f4: jle 0x5eda01 */ if ((fZ||fS!=fO)) goto L_005eda01;
L_005ed9f6:; BB(0x005ed9f6);
    /* 005ed9f6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005ed9f9: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 005ed9ff: jmp 0x5eda0a */ goto L_005eda0a;
L_005eda01:; BB(0x005eda01);
    /* 005eda01: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005eda04: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
L_005eda0a:; BB(0x005eda0a);
    /* 005eda0a: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005eda10: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005eda13: jmp 0x5ed632 */ goto L_005ed632;
L_005eda18:; BB(0x005eda18);
    /* 005eda18: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005eda1b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005eda1e: lea edx, [ecx + eax + 1] */ r_edx = (u32)(r_ecx+r_eax+0x1u);
    /* 005eda22: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005eda25: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005eda29: jne 0x5eda42 */ if (!fZ) goto L_005eda42;
L_005eda2b:; BB(0x005eda2b);
    /* 005eda2b: push 0x18b */ { u32 v = 0x18bu; r_esp -= 4; W32(r_esp, v); }
    /* 005eda30: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005eda35: push 0x6d6464 */ { u32 v = 0x6d6464u; r_esp -= 4; W32(r_esp, v); }
    /* 005eda3a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5eda3fu); f_005e9f20();
    /* 005eda3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eda42:; BB(0x005eda42);
    /* 005eda42: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005eda45: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005eda48: imul ecx, dword ptr [ebp - 0x34] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffccu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eda4c: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005eda4f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005eda52: imul eax, dword ptr [ebp - 0x34] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffccu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005eda56: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005eda58: mov edx, 4 */ r_edx = 0x4u;
    /* 005eda5d: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 005eda5f: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 005eda62: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005eda64: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005eda66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005eda67: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5eda6cu); f_00686d82();
    /* 005eda6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005eda6f: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005eda75: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005eda7b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005eda7e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005eda81: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eda84: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005eda8a: mov word ptr [edx + 0x96], cx */ W16((u32)(r_edx+0x96u), (u16)r_ecx);
    /* 005eda91: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005eda98: jmp 0x5edaa3 */ goto L_005edaa3;
L_005eda9a:; BB(0x005eda9a);
    /* 005eda9a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005eda9d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edaa0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005edaa3:; BB(0x005edaa3);
    /* 005edaa3: cmp dword ptr [ebp - 0x18], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edaaa: jge 0x5edfba */ if ((fS==fO)) goto L_005edfba;
L_005edab0:; BB(0x005edab0);
    /* 005edab0: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 005edab7: mov dword ptr [ebp - 0x68], 8 */ W32((u32)(r_ebp+0xffffff98u), 0x8u);
    /* 005edabe: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edac4: movzx edx, byte ptr [ecx + 0xcb] */ r_edx = (u32)R8((u32)(r_ecx+0xcbu));
    /* 005edacb: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 005edacd: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 005edacf: and edx, 0xfffff000 */ {  u32 a = r_edx; u32 b = 0xfffff000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005edad5: add edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005edadb: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005edade: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005edadf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005edae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edae3: call 0x5ee4c0 */ r_esp -= 4; W32(r_esp, 0x5edae8u); f_005ee4c0();
    /* 005edae8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005edaeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edaec: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edaf2: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005edaf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005edaf9: call 0x686c3c */ r_esp -= 4; W32(r_esp, 0x5edafeu); f_00686c3c();
    /* 005edafe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005edb01: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edb07: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005edb0d: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005edb10: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005edb13: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005edb16: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edb1c: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005edb22: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005edb25: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005edb28: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005edb2b: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edb31: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005edb37: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005edb3a: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edb3e: jle 0x5edb5a */ if ((fZ||fS!=fO)) goto L_005edb5a;
L_005edb40:; BB(0x005edb40);
    /* 005edb40: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edb46: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005edb4c: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005edb4f: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005edb52: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 005edb58: jmp 0x5edb64 */ goto L_005edb64;
L_005edb5a:; BB(0x005edb5a);
    /* 005edb5a: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_005edb64:; BB(0x005edb64);
    /* 005edb64: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edb6a: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005edb70: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005edb73: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edb79: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edb7c: movsx ecx, byte ptr [eax + 0xd0] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xd0u));
    /* 005edb83: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005edb85: mov esi, dword ptr [edx + 0x50] */ r_esi = R32((u32)(r_edx+0x50u));
    /* 005edb88: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005edb8a: add esi, dword ptr [ebp - 0x108] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffef8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005edb90: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edb96: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005edb9c: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005edb9f: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edba5: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005edbab: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005edbae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005edbb0: cmp dword ptr [edx + 0x40], 0 */ {  u32 a = R32((u32)(r_edx+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edbb4: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005edbb7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005edbba: and eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005edbbd: add eax, -0x20 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edbc0: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 005edbc3: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edbc5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005edbc6: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005edbc9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edbcb: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005edbce: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edbd4: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005edbd7: movsx ecx, byte ptr [edx + 0xd0] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xd0u));
    /* 005edbde: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005edbe0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edbe2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edbe4: jle 0x5edc53 */ if ((fZ||fS!=fO)) goto L_005edc53;
L_005edbe6:; BB(0x005edbe6);
    /* 005edbe6: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edbec: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005edbf2: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005edbf5: cmp dword ptr [ecx + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edbf9: jle 0x5edc15 */ if ((fZ||fS!=fO)) goto L_005edc15;
L_005edbfb:; BB(0x005edbfb);
    /* 005edbfb: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edc01: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005edc07: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005edc0a: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005edc0d: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
    /* 005edc13: jmp 0x5edc1f */ goto L_005edc1f;
L_005edc15:; BB(0x005edc15);
    /* 005edc15: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_005edc1f:; BB(0x005edc1f);
    /* 005edc1f: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edc25: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005edc2b: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005edc2e: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edc34: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edc37: movsx ecx, byte ptr [eax + 0xd0] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xd0u));
    /* 005edc3e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005edc40: mov edx, dword ptr [edx + 0x50] */ r_edx = R32((u32)(r_edx+0x50u));
    /* 005edc43: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005edc45: add edx, dword ptr [ebp - 0x10c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffef4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005edc4b: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 005edc51: jmp 0x5edcab */ goto L_005edcab;
L_005edc53:; BB(0x005edc53);
    /* 005edc53: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edc59: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005edc5f: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005edc62: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edc68: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005edc6e: mov eax, dword ptr [ecx + 0x54] */ r_eax = R32((u32)(r_ecx+0x54u));
    /* 005edc71: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005edc73: cmp dword ptr [eax + 0x40], 0 */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edc77: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 005edc7a: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005edc7d: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005edc80: add ecx, -0x20 */ {  u32 a = r_ecx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005edc83: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005edc86: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edc88: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005edc89: and edx, 0x3f */ {  u32 a = r_edx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005edc8c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edc8e: sar eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005edc91: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edc97: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005edc9a: movsx ecx, byte ptr [edx + 0xd0] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0xd0u));
    /* 005edca1: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005edca3: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edca5: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
L_005edcab:; BB(0x005edcab);
    /* 005edcab: mov edx, dword ptr [ebp - 0x110] */ r_edx = R32((u32)(r_ebp+0xfffffef0u));
    /* 005edcb1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005edcb4: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edcba: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005edcc0: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005edcc3: cmp dword ptr [edx + 0x50], 0 */ {  u32 a = R32((u32)(r_edx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005edcc7: je 0x5edd38 */ if (fZ) goto L_005edd38;
L_005edcc9:; BB(0x005edcc9);
    /* 005edcc9: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edccf: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005edcd5: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005edcd8: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edcde: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edce1: movsx ecx, byte ptr [eax + 0xd0] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0xd0u));
    /* 005edce8: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005edcea: mov edx, dword ptr [edx + 0x50] */ r_edx = R32((u32)(r_edx+0x50u));
    /* 005edced: lea eax, [edx + ecx + 2] */ r_eax = (u32)(r_edx+r_ecx+0x2u);
    /* 005edcf1: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edcf4: jge 0x5edd01 */ if ((fS==fO)) goto L_005edd01;
L_005edcf6:; BB(0x005edcf6);
    /* 005edcf6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005edcf9: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 005edcff: jmp 0x5edd2f */ goto L_005edd2f;
L_005edd01:; BB(0x005edd01);
    /* 005edd01: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edd07: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005edd0d: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005edd10: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edd16: add edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005edd19: movsx eax, byte ptr [edx + 0xd0] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xd0u));
    /* 005edd20: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005edd22: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005edd25: lea edx, [ecx + eax + 2] */ r_edx = (u32)(r_ecx+r_eax+0x2u);
    /* 005edd29: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
L_005edd2f:; BB(0x005edd2f);
    /* 005edd2f: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 005edd35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005edd38:; BB(0x005edd38);
    /* 005edd38: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edd3c: jg 0x5edd55 */ if ((!fZ&&fS==fO)) goto L_005edd55;
L_005edd3e:; BB(0x005edd3e);
    /* 005edd3e: push 0x1a7 */ { u32 v = 0x1a7u; r_esp -= 4; W32(r_esp, v); }
    /* 005edd43: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005edd48: push 0x6d6458 */ { u32 v = 0x6d6458u; r_esp -= 4; W32(r_esp, v); }
    /* 005edd4d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5edd52u); f_005e9f20();
    /* 005edd52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005edd55:; BB(0x005edd55);
    /* 005edd55: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005edd59: jne 0x5edd62 */ if (!fZ) goto L_005edd62;
L_005edd5b:; BB(0x005edd5b);
    /* 005edd5b: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005edd62:; BB(0x005edd62);
    /* 005edd62: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edd66: jge 0x5edd6d */ if ((fS==fO)) goto L_005edd6d;
L_005edd68:; BB(0x005edd68);
    /* 005edd68: jmp 0x5eda9a */ goto L_005eda9a;
L_005edd6d:; BB(0x005edd6d);
    /* 005edd6d: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005edd70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005edd71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005edd73: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edd76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edd77: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5edd7cu); f_00686fa2();
    /* 005edd7c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005edd7f: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005edd85: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005edd8b: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005edd8e: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 005edd91: cmp ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005edd94: jle 0x5eddad */ if ((fZ||fS!=fO)) goto L_005eddad;
L_005edd96:; BB(0x005edd96);
    /* 005edd96: push 0x1b0 */ { u32 v = 0x1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005edd9b: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005edda0: push 0x6d6424 */ { u32 v = 0x6d6424u; r_esp -= 4; W32(r_esp, v); }
    /* 005edda5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5eddaau); f_005e9f20();
    /* 005eddaa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005eddad:; BB(0x005eddad);
    /* 005eddad: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005eddb4: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005eddba: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005eddc0: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005eddc3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005eddc6: sub eax, dword ptr [edx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005eddc9: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005eddcc: jmp 0x5edde0 */ goto L_005edde0;
L_005eddce:; BB(0x005eddce);
    /* 005eddce: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005eddd1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005eddd4: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005eddd7: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005eddda: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005edddd: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
L_005edde0:; BB(0x005edde0);
    /* 005edde0: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edde6: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 005eddec: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005eddef: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005eddf2: cmp eax, dword ptr [edx + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005eddf5: jge 0x5edf9b */ if ((fS==fO)) goto L_005edf9b;
L_005eddfb:; BB(0x005eddfb);
    /* 005eddfb: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005ede02: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ede08: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ede0e: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ede11: cmp dword ptr [eax + 0x64], 0 */ {  u32 a = R32((u32)(r_eax+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ede15: jle 0x5ede31 */ if ((fZ||fS!=fO)) goto L_005ede31;
L_005ede17:; BB(0x005ede17);
    /* 005ede17: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ede1d: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ede23: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ede26: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005ede29: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 005ede2f: jmp 0x5ede3b */ goto L_005ede3b;
L_005ede31:; BB(0x005ede31);
    /* 005ede31: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_005ede3b:; BB(0x005ede3b);
    /* 005ede3b: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005ede41: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005ede44: jmp 0x5ede58 */ goto L_005ede58;
L_005ede46:; BB(0x005ede46);
    /* 005ede46: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ede49: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ede4c: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005ede4f: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ede52: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ede55: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
L_005ede58:; BB(0x005ede58);
    /* 005ede58: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ede5e: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 005ede64: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005ede67: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ede6a: cmp edx, dword ptr [ecx + 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x50u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ede6d: jge 0x5edf96 */ if ((fS==fO)) goto L_005edf96;
L_005ede73:; BB(0x005ede73);
    /* 005ede73: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ede77: jge 0x5ede90 */ if ((fS==fO)) goto L_005ede90;
L_005ede79:; BB(0x005ede79);
    /* 005ede79: push 0x1b3 */ { u32 v = 0x1b3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ede7e: push 0x6d6530 */ { u32 v = 0x6d6530u; r_esp -= 4; W32(r_esp, v); }
    /* 005ede83: push 0x6d6418 */ { u32 v = 0x6d6418u; r_esp -= 4; W32(r_esp, v); }
    /* 005ede88: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ede8du); f_005e9f20();
    /* 005ede8d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ede90:; BB(0x005ede90);
    /* 005ede90: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ede96: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 005ede9c: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005ede9f: movsx ecx, byte ptr [eax + 0x5e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x5eu));
    /* 005edea3: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005edea6: jne 0x5edf1a */ if (!fZ) goto L_005edf1a;
L_005edea8:; BB(0x005edea8);
    /* 005edea8: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005edeab: imul ecx, dword ptr [ebp - 0x74] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffff8cu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005edeaf: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005edeb2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005edeb3: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005edeb6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edeb8: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005edebb: add eax, dword ptr [ebp - 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edebe: movzx edx, byte ptr [eax + ecx] */ r_edx = (u32)R8((u32)(r_eax+r_ecx));
    /* 005edec2: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005edec5: and ecx, 0x80000007 */ {  u32 a = r_ecx; u32 b = 0x80000007u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005edecb: jns 0x5eded2 */ if (!fS) goto L_005eded2;
L_005edecd:; BB(0x005edecd);
    /* 005edecd: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005edece: or ecx, 0xfffffff8 */ {  u32 a = r_ecx; u32 b = 0xfffffff8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 005eded1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_005eded2:; BB(0x005eded2);
    /* 005eded2: mov eax, 0x80 */ r_eax = 0x80u;
    /* 005eded7: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005eded9: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ededb: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005edede: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005edee2: add ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005edee5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edee8: mov byte ptr [eax + ecx*4 + 3], dl */ W8((u32)(r_eax+r_ecx*4+0x3u), (u8)r_edx);
    /* 005edeec: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005edeef: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005edef3: add ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005edef6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edef9: movzx eax, byte ptr [edx + ecx*4 + 3] */ r_eax = (u32)R8((u32)(r_edx+r_ecx*4+0x3u));
    /* 005edefe: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005edf00: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005edf02: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005edf07: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005edf0a: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005edf0e: add ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005edf11: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edf14: mov byte ptr [edx + ecx*4 + 3], al */ W8((u32)(r_edx+r_ecx*4+0x3u), (u8)r_eax);
    /* 005edf18: jmp 0x5edf3b */ goto L_005edf3b;
L_005edf1a:; BB(0x005edf1a);
    /* 005edf1a: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005edf1d: imul eax, dword ptr [ebp - 0x74] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff8cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005edf21: add eax, dword ptr [ebp - 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005edf24: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005edf27: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005edf2b: add ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005edf2e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edf31: mov esi, dword ptr [ebp - 0x70] */ r_esi = R32((u32)(r_ebp+0xffffff90u));
    /* 005edf34: mov al, byte ptr [esi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_eax))) & 0xffu);
    /* 005edf37: mov byte ptr [edx + ecx*4 + 3], al */ W8((u32)(r_edx+r_ecx*4+0x3u), (u8)r_eax);
L_005edf3b:; BB(0x005edf3b);
    /* 005edf3b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005edf3e: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005edf42: add ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005edf45: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edf48: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edf4e: mov al, byte ptr [eax + 0xca] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xcau))) & 0xffu);
    /* 005edf54: mov byte ptr [edx + ecx*4 + 2], al */ W8((u32)(r_edx+r_ecx*4+0x2u), (u8)r_eax);
    /* 005edf58: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005edf5b: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005edf5f: add ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005edf62: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edf65: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edf6b: mov al, byte ptr [eax + 0xc9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xc9u))) & 0xffu);
    /* 005edf71: mov byte ptr [edx + ecx*4 + 1], al */ W8((u32)(r_edx+r_ecx*4+0x1u), (u8)r_eax);
    /* 005edf75: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005edf78: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005edf7c: add ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005edf7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edf82: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005edf88: mov al, byte ptr [eax + 0xc8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xc8u))) & 0xffu);
    /* 005edf8e: mov byte ptr [edx + ecx*4], al */ W8((u32)(r_edx+r_ecx*4), (u8)r_eax);
    /* 005edf91: jmp 0x5ede46 */ goto L_005ede46;
L_005edf96:; BB(0x005edf96);
    /* 005edf96: jmp 0x5eddce */ goto L_005eddce;
L_005edf9b:; BB(0x005edf9b);
    /* 005edf9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005edf9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005edf9f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005edfa1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005edfa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005edfa5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005edfa8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005edfa9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edfac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edfad: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005edfb0: call 0x6209d0 */ r_esp -= 4; W32(r_esp, 0x5edfb5u); f_006209d0();
    /* 005edfb5: jmp 0x5eda9a */ goto L_005eda9a;
L_005edfba:; BB(0x005edfba);
    /* 005edfba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005edfbd: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 005edfc3: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005edfc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005edfca: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5edfcfu); f_00686cae();
    /* 005edfcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005edfd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005edfd4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005edfd6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005edfd9: call 0x620fe0 */ r_esp -= 4; W32(r_esp, 0x5edfdeu); f_00620fe0();
    /* 005edfde: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005edfe1: call 0x620540 */ r_esp -= 4; W32(r_esp, 0x5edfe6u); f_00620540();
    /* 005edfe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005edfe7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5edfecu); f_00686d82();
    /* 005edfec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005edfef: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005edff5: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005edffb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005edffe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee001: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee002: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ee005: call 0x6201c0 */ r_esp -= 4; W32(r_esp, 0x5ee00au); f_006201c0();
    /* 005ee00a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005ee00d: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee013: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 005ee016: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005ee019: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee01f: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 005ee025: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ee028: shl eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005ee02b: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee02d: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee033: movzx eax, byte ptr [edx + 0xc8] */ r_eax = (u32)R8((u32)(r_edx+0xc8u));
    /* 005ee03a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ee03b: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ee03e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ee040: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ee043: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005ee046: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee048: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee04e: movzx eax, byte ptr [eax + 0xc9] */ r_eax = (u32)R8((u32)(r_eax+0xc9u));
    /* 005ee055: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ee056: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ee059: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ee05b: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ee05e: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005ee061: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee063: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee069: movzx eax, byte ptr [edx + 0xca] */ r_eax = (u32)R8((u32)(r_edx+0xcau));
    /* 005ee070: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005ee071: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ee074: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ee076: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005ee079: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee07b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005ee07e: push 0x96c */ { u32 v = 0x96cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee083: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ee088u); f_00686d82();
    /* 005ee088: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee08b: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005ee091: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ee098: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee09f: je 0x5ee0ce */ if (fZ) goto L_005ee0ce;
L_005ee0a1:; BB(0x005ee0a1);
    /* 005ee0a1: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005ee0a6: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005ee0a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0aa: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ee0ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0ae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee0b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0b2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ee0b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0b6: push 0x53544e46 */ { u32 v = 0x53544e46u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee0bb: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005ee0c1: call 0x5ec560 */ r_esp -= 4; W32(r_esp, 0x5ee0c6u); f_005ec560();
    /* 005ee0c6: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005ee0cc: jmp 0x5ee0d8 */ goto L_005ee0d8;
L_005ee0ce:; BB(0x005ee0ce);
    /* 005ee0ce: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_005ee0d8:; BB(0x005ee0d8);
    /* 005ee0d8: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005ee0de: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 005ee0e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ee0eb: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee0f1: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005ee0f7: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 005ee0fd: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee103: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ee109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee10a: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005ee110: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005ee113: call 0x603ae0 */ r_esp -= 4; W32(r_esp, 0x5ee118u); f_00603ae0();
    /* 005ee118: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee11a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee11c: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee121: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee123: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee129: add edx, 0xd0 */ {  u32 a = r_edx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ee12f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee130: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee132: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee138: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005ee13e: call 0x61f1c0 */ r_esp -= 4; W32(r_esp, 0x5ee143u); f_0061f1c0();
    /* 005ee143: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee145: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee147: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee149: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee14b: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee151: add ecx, 0x96 */ {  u32 a = r_ecx; u32 b = 0x96u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ee157: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee158: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee15a: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee160: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 005ee166: call 0x61f1c0 */ r_esp -= 4; W32(r_esp, 0x5ee16bu); f_0061f1c0();
    /* 005ee16b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee16d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee16f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee171: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee173: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee179: add eax, 0xc0 */ {  u32 a = r_eax; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ee17e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee17f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee181: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee187: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 005ee18d: call 0x61f1c0 */ r_esp -= 4; W32(r_esp, 0x5ee192u); f_0061f1c0();
    /* 005ee192: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ee195: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 005ee19b: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 005ee1a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee1a2: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ee1a7u); f_00686cae();
    /* 005ee1a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee1aa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ee1ad: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005ee1b3: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005ee1b9: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005ee1bf: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee1c6: je 0x5ee1e4 */ if (fZ) goto L_005ee1e4;
L_005ee1c8:; BB(0x005ee1c8);
    /* 005ee1c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee1ca: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005ee1d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ee1d2: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005ee1d8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ee1da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ee1dcu); call_ind(t); }
    /* 005ee1dc: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 005ee1e2: jmp 0x5ee1ee */ goto L_005ee1ee;
L_005ee1e4:; BB(0x005ee1e4);
    /* 005ee1e4: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
L_005ee1ee:; BB(0x005ee1ee);
    /* 005ee1ee: jmp 0x5ee467 */ goto L_005ee467;
L_005ee1f3:; BB(0x005ee1f3);
    /* 005ee1f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee1f5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ee1f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee1f9: push 0x544e4f46 */ { u32 v = 0x544e4f46u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee1fe: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005ee204: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005ee207: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x5ee20cu); f_00603c50();
    /* 005ee20c: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005ee20f: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee213: je 0x5ee226 */ if (fZ) goto L_005ee226;
L_005ee215:; BB(0x005ee215);
    /* 005ee215: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005ee218: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ee21a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ee21d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005ee220: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ee222u); call_ind(t); }
    /* 005ee222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee224: jne 0x5ee249 */ if (!fZ) goto L_005ee249;
L_005ee226:; BB(0x005ee226);
    /* 005ee226: mov dword ptr [ebp + 8], 2 */ W32((u32)(r_ebp+0x8u), 0x2u);
    /* 005ee22d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee22f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ee232: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee233: push 0x544e4f46 */ { u32 v = 0x544e4f46u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee238: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005ee23e: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005ee241: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x5ee246u); f_00603c50();
    /* 005ee246: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
L_005ee249:; BB(0x005ee249);
    /* 005ee249: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee24f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ee252: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 005ee255: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ee258: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ee25a: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ee25d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005ee260: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ee262u); call_ind(t); }
    /* 005ee262: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005ee265: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee26b: mov dword ptr [eax + 0x64], 1 */ W32((u32)(r_eax+0x64u), 0x1u);
    /* 005ee272: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee276: je 0x5ee399 */ if (fZ) goto L_005ee399;
L_005ee27c:; BB(0x005ee27c);
    /* 005ee27c: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005ee27f: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 005ee282: mov word ptr [ebp - 0x84], dx */ W16((u32)(r_ebp+0xffffff7cu), (u16)r_edx);
    /* 005ee289: movzx eax, word ptr [ebp - 0x84] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff7cu));
    /* 005ee290: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee296: mov dword ptr [ecx + 0x8c], eax */ W32((u32)(r_ecx+0x8cu), r_eax);
    /* 005ee29c: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee2a2: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005ee2a5: mov cx, word ptr [eax + 2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x2u))) & 0xffffu);
    /* 005ee2a9: mov word ptr [edx + 0x90], cx */ W16((u32)(r_edx+0x90u), (u16)r_ecx);
    /* 005ee2b0: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee2b6: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005ee2b9: mov cx, word ptr [eax + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x4u))) & 0xffffu);
    /* 005ee2bd: mov word ptr [edx + 0x92], cx */ W16((u32)(r_edx+0x92u), (u16)r_ecx);
    /* 005ee2c4: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee2ca: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005ee2cd: mov cx, word ptr [eax + 6] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x6u))) & 0xffffu);
    /* 005ee2d1: mov word ptr [edx + 0x94], cx */ W16((u32)(r_edx+0x94u), (u16)r_ecx);
    /* 005ee2d8: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee2de: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005ee2e1: mov cx, word ptr [eax + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x8u))) & 0xffffu);
    /* 005ee2e5: mov word ptr [edx + 0x96], cx */ W16((u32)(r_edx+0x96u), (u16)r_ecx);
    /* 005ee2ec: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005ee2ef: mov ax, word ptr [edx + 0xa] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0xau))) & 0xffffu);
    /* 005ee2f3: mov word ptr [ebp - 0x84], ax */ W16((u32)(r_ebp+0xffffff7cu), (u16)r_eax);
    /* 005ee2fa: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee300: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee307: jne 0x5ee32e */ if (!fZ) goto L_005ee32e;
L_005ee309:; BB(0x005ee309);
    /* 005ee309: push 0x802 */ { u32 v = 0x802u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee30e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5ee313u); f_00686d82();
    /* 005ee313: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee316: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005ee31c: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee322: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 005ee328: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
L_005ee32e:; BB(0x005ee32e);
    /* 005ee32e: movzx ecx, word ptr [ebp - 0x84] */ r_ecx = (u32)R16((u32)(r_ebp+0xffffff7cu));
    /* 005ee335: lea edx, [ecx*8 + 2] */ r_edx = (u32)(r_ecx*8+0x2u);
    /* 005ee33c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee33d: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005ee340: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ee343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee344: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee34a: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005ee350: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee351: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5ee356u); f_00686fde();
    /* 005ee356: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee359: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee35f: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 005ee365: mov dx, word ptr [ebp - 0x84] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff7cu))) & 0xffffu);
    /* 005ee36c: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 005ee36f: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 005ee376: jmp 0x5ee381 */ goto L_005ee381;
L_005ee378:; BB(0x005ee378);
    /* 005ee378: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005ee37b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ee37e: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
L_005ee381:; BB(0x005ee381);
    /* 005ee381: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee387: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 005ee38d: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 005ee390: cmp dword ptr [ebp - 0x80], eax */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ee393: jge 0x5ee397 */ if ((fS==fO)) goto L_005ee397;
L_005ee395:; BB(0x005ee395);
    /* 005ee395: jmp 0x5ee378 */ goto L_005ee378;
L_005ee397:; BB(0x005ee397);
    /* 005ee397: jmp 0x5ee3fe */ goto L_005ee3fe;
L_005ee399:; BB(0x005ee399);
    /* 005ee399: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee39f: cmp dword ptr [ecx + 0x98], 0 */ {  u32 a = R32((u32)(r_ecx+0x98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee3a6: je 0x5ee3d9 */ if (fZ) goto L_005ee3d9;
L_005ee3a8:; BB(0x005ee3a8);
    /* 005ee3a8: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee3ae: mov eax, dword ptr [edx + 0x98] */ r_eax = R32((u32)(r_edx+0x98u));
    /* 005ee3b4: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005ee3ba: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 005ee3c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee3c1: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5ee3c6u); f_00686cae();
    /* 005ee3c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee3c9: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee3cf: mov dword ptr [edx + 0x98], 0 */ W32((u32)(r_edx+0x98u), 0x0u);
L_005ee3d9:; BB(0x005ee3d9);
    /* 005ee3d9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005ee3db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee3dd: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee3e3: add eax, 0x8c */ {  u32 a = r_eax; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ee3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee3e9: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5ee3eeu); f_00686fa2();
    /* 005ee3ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ee3f1: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee3f7: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
L_005ee3fe:; BB(0x005ee3fe);
    /* 005ee3fe: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ee401: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ee402: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005ee407: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005ee40a: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x5ee40fu); f_006041d0();
    /* 005ee40f: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee415: cmp dword ptr [ecx + 0xb0], 0 */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee41c: je 0x5ee439 */ if (fZ) goto L_005ee439;
L_005ee41e:; BB(0x005ee41e);
    /* 005ee41e: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee424: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005ee42a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee42b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005ee431: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005ee434: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x5ee439u); f_006041d0();
L_005ee439:; BB(0x005ee439);
    /* 005ee439: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee43b: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee441: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 005ee447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ee448: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005ee44d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005ee453: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005ee456: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x5ee45bu); f_00603c50();
    /* 005ee45b: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee461: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
L_005ee467:; BB(0x005ee467);
    /* 005ee467: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee46d: cmp dword ptr [eax + 0x84], -1 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ee474: je 0x5ee490 */ if (fZ) goto L_005ee490;
L_005ee476:; BB(0x005ee476);
    /* 005ee476: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee47c: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee482: mov ax, word ptr [edx + 0x84] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x84u))) & 0xffffu);
    /* 005ee489: mov word ptr [ecx + 0x96], ax */ W16((u32)(r_ecx+0x96u), (u16)r_eax);
L_005ee490:; BB(0x005ee490);
    /* 005ee490: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee496: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ee498: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 005ee49e: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 005ee4a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ee4a6u); call_ind(t); }
L_005ee4a6:; BB(0x005ee4a6);
    /* 005ee4a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ee4a9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ee4b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ee4b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ee4b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ee4b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ee4b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ee4b6: ret 0xc */ FN_RET(0x005ecd00); r_esp += 16; return;
}

