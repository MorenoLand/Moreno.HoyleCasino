#include "protos.h"

void f_005bc7f0(void) /* MLVSlotDisplay_Blossom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc7f0);
    /* 005bc7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc7f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc7f5: push 0x6a812e */ { u32 v = 0x6a812eu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc7fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bc800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc801: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc804: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bc809: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bc80b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc80c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bc80f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bc815: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005bc818: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bc81b: call 0x5c0a00 */ r_esp -= 4; W32(r_esp, 0x5bc820u); f_005c0a00();
    /* 005bc820: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc827: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bc82a: mov dword ptr [eax], 0x6d1c18 */ W32((u32)(r_eax), 0x6d1c18u);
    /* 005bc830: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bc833: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bc836: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005bc839: lea edx, [ebp - 0x15] */ r_edx = (u32)(r_ebp+0xffffffebu);
    /* 005bc83c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005bc83f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc841: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005bc844: call 0x5bef20 */ r_esp -= 4; W32(r_esp, 0x5bc849u); f_005bef20();
    /* 005bc849: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bc84c: mov dword ptr [eax + 0x50], 0x758d20 */ W32((u32)(r_eax+0x50u), 0x758d20u);
    /* 005bc853: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bc856: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 005bc85d: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bc860: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
    /* 005bc867: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bc86a: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 005bc871: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bc878: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bc87b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc87e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bc885: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc886: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc888: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc889: ret  */ FN_RET(0x005bc7f0); r_esp += 4; return;
}

void f_005bc890(void) /* MLVSlotDisplay_Blossom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc890);
    /* 005bc890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc891: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc893: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc895: push 0x6a815c */ { u32 v = 0x6a815cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc89a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bc8a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc8a1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc8a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bc8a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bc8ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc8ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bc8af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bc8b5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005bc8b8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bc8bb: mov dword ptr [eax], 0x6d1c18 */ W32((u32)(r_eax), 0x6d1c18u);
    /* 005bc8c1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bc8c8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bc8cb: cmp dword ptr [ecx + 0x50], 0 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc8cf: je 0x5bc8e5 */ if (fZ) goto L_005bc8e5;
L_005bc8d1:; BB(0x005bc8d1);
    /* 005bc8d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc8d3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bc8d6: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bc8d9: add eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc8dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc8dd: call 0x6110a0 */ r_esp -= 4; W32(r_esp, 0x5bc8e2u); f_006110a0();
    /* 005bc8e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bc8e5:; BB(0x005bc8e5);
    /* 005bc8e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc8e7: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005bc8ed: call 0x5dd400 */ r_esp -= 4; W32(r_esp, 0x5bc8f2u); f_005dd400();
    /* 005bc8f2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bc8f5: cmp dword ptr [ecx + 0x6c], 0 */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc8f9: je 0x5bc92a */ if (fZ) goto L_005bc92a;
L_005bc8fb:; BB(0x005bc8fb);
    /* 005bc8fb: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bc8fe: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005bc901: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bc904: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bc907: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005bc90a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc90e: je 0x5bc923 */ if (fZ) goto L_005bc923;
L_005bc910:; BB(0x005bc910);
    /* 005bc910: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc912: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bc915: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc917: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bc91a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bc91c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5bc91eu); call_ind(t); }
    /* 005bc91e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005bc921: jmp 0x5bc92a */ goto L_005bc92a;
L_005bc923:; BB(0x005bc923);
    /* 005bc923: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005bc92a:; BB(0x005bc92a);
    /* 005bc92a: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc92e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bc931: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bc934: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005bc937: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bc93a: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5bc93fu); f_005be450();
    /* 005bc93f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bc946: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bc949: call 0x5c0b40 */ r_esp -= 4; W32(r_esp, 0x5bc94eu); f_005c0b40();
    /* 005bc94e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bc951: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bc958: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bc959: mov esp, ebp */ r_esp = r_ebp;
    /* 005bc95b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bc95c: ret  */ FN_RET(0x005bc890); r_esp += 4; return;
}

void f_005bc960(void) /* MLVSlotDisplay_Blossom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bc960);
    /* 005bc960: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bc961: mov ebp, esp */ r_ebp = r_esp;
    /* 005bc963: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bc965: push 0x6a81a3 */ { u32 v = 0x6a81a3u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc96a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bc970: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc971: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bc977: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bc97c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bc97e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bc97f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bc982: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bc988: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 005bc98e: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bc994: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005bc99a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005bc99d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005bc9a0: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bc9a6: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc9aa: je 0x5bc9e4 */ if (fZ) goto L_005bc9e4;
L_005bc9ac:; BB(0x005bc9ac);
    /* 005bc9ac: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bc9b2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bc9b5: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005bc9b8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bc9bb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bc9be: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc9c2: je 0x5bc9da */ if (fZ) goto L_005bc9da;
L_005bc9c4:; BB(0x005bc9c4);
    /* 005bc9c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc9c6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bc9c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bc9cb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bc9ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bc9d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bc9d2u); call_ind(t); }
    /* 005bc9d2: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005bc9d8: jmp 0x5bc9e4 */ goto L_005bc9e4;
L_005bc9da:; BB(0x005bc9da);
    /* 005bc9da: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_005bc9e4:; BB(0x005bc9e4);
    /* 005bc9e4: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 005bc9e9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bc9eeu); f_00686d82();
    /* 005bc9ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bc9f1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005bc9f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bc9fb: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bc9ff: je 0x5bca11 */ if (fZ) goto L_005bca11;
L_005bca01:; BB(0x005bca01);
    /* 005bca01: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005bca04: call 0x5c8bb0 */ r_esp -= 4; W32(r_esp, 0x5bca09u); f_005c8bb0();
    /* 005bca09: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005bca0f: jmp 0x5bca1b */ goto L_005bca1b;
L_005bca11:; BB(0x005bca11);
    /* 005bca11: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_005bca1b:; BB(0x005bca1b);
    /* 005bca1b: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005bca21: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005bca24: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bca2b: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bca31: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bca34: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005bca37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005bca3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bca3b: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bca41: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005bca44: call 0x5c8c60 */ r_esp -= 4; W32(r_esp, 0x5bca49u); f_005c8c60();
    /* 005bca49: push 0x6d1c4c */ { u32 v = 0x6d1c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bca4e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5bca53u); f_00630f40();
    /* 005bca53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bca56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bca57: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005bca5d: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x5bca62u); f_005f38b0();
    /* 005bca62: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bca68: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bca6b: mov dl, byte ptr [ecx + 6] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x6u))) & 0xffu);
    /* 005bca6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bca6f: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bca75: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bca78: mov dl, byte ptr [ecx + 5] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x5u))) & 0xffu);
    /* 005bca7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bca7c: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bca82: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bca85: mov dl, byte ptr [ecx + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4u))) & 0xffu);
    /* 005bca88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bca89: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005bca8f: call 0x5f1b10 */ r_esp -= 4; W32(r_esp, 0x5bca94u); f_005f1b10();
    /* 005bca94: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bca9a: mov dword ptr [eax + 0xc], 0x758ac0 */ W32((u32)(r_eax+0xcu), 0x758ac0u);
    /* 005bcaa1: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcaa7: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bcaaa: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005bcaad: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005bcab0: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005bcab7: jmp 0x5bcac2 */ goto L_005bcac2;
L_005bcab9:; BB(0x005bcab9);
    /* 005bcab9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bcabc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bcabf: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005bcac2:; BB(0x005bcac2);
    /* 005bcac2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bcac5: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bcac8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bcacb: cmp dword ptr [eax + edx], 0 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bcacf: jl 0x5bcad3 */ if ((fS!=fO)) goto L_005bcad3;
L_005bcad1:; BB(0x005bcad1);
    /* 005bcad1: jmp 0x5bcab9 */ goto L_005bcab9;
L_005bcad3:; BB(0x005bcad3);
    /* 005bcad3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcad5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bcad8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcad9: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcadf: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bcae2: call 0x5be4d0 */ r_esp -= 4; W32(r_esp, 0x5bcae7u); f_005be4d0();
    /* 005bcae7: push 0x5bc6f0 */ { u32 v = 0x5bc6f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcaec: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcaee: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bcaf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcaf2: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcaf8: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bcafb: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005bcafe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcaff: call dword ptr [0x6b2248] */ { u32 t = R32((u32)(0x6b2248u)); r_esp -= 4; W32(r_esp, 0x5bcb05u); call_ind(t); }
    /* 005bcb05: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bcb08: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcb0e: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bcb11: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcb15: je 0x5bcbc4 */ if (fZ) goto L_005bcbc4;
L_005bcb1b:; BB(0x005bcb1b);
    /* 005bcb1b: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb20: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bcb25u); f_00686d82();
    /* 005bcb25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bcb28: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005bcb2b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bcb32: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcb36: je 0x5bcb48 */ if (fZ) goto L_005bcb48;
L_005bcb38:; BB(0x005bcb38);
    /* 005bcb38: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bcb3b: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5bcb40u); f_005eaaf0();
    /* 005bcb40: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 005bcb46: jmp 0x5bcb52 */ goto L_005bcb52;
L_005bcb48:; BB(0x005bcb48);
    /* 005bcb48: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_005bcb52:; BB(0x005bcb52);
    /* 005bcb52: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005bcb58: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005bcb5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bcb62: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005bcb65: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bcb68: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb6a: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb70: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcb76: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bcb79: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bcb7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb7d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bcb80: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5bcb85u); f_005eae80();
    /* 005bcb85: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcb8b: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bcb8e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bcb91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcb92: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bcb95: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5bcb9au); f_005eb000();
    /* 005bcb9a: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcba0: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bcba3: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005bcba6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcba7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bcbaa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bcbac: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bcbaf: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005bcbb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bcbb7u); call_ind(t); }
    /* 005bcbb7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bcbba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bcbbc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bcbbf: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005bcbc2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bcbc4u); call_ind(t); }
L_005bcbc4:; BB(0x005bcbc4);
    /* 005bcbc4: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcbca: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bcbcd: cmp dword ptr [edx + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcbd1: je 0x5bcca5 */ if (fZ) goto L_005bcca5;
L_005bcbd7:; BB(0x005bcbd7);
    /* 005bcbd7: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcbdc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bcbe1u); f_00686d82();
    /* 005bcbe1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bcbe4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005bcbe7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005bcbee: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bcbf2: je 0x5bcc04 */ if (fZ) goto L_005bcc04;
L_005bcbf4:; BB(0x005bcbf4);
    /* 005bcbf4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bcbf7: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x5bcbfcu); f_005f5f50();
    /* 005bcbfc: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005bcc02: jmp 0x5bcc0e */ goto L_005bcc0e;
L_005bcc04:; BB(0x005bcc04);
    /* 005bcc04: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_005bcc0e:; BB(0x005bcc0e);
    /* 005bcc0e: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 005bcc14: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005bcc17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bcc1e: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcc24: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bcc27: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 005bcc2a: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcc30: mov ecx, dword ptr [eax + 0x6c] */ r_ecx = R32((u32)(r_eax+0x6cu));
    /* 005bcc33: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005bcc36: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc38: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc3e: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcc44: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bcc47: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005bcc4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc4b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bcc4e: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5bcc53u); f_005eae80();
    /* 005bcc53: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcc59: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bcc5c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005bcc5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc60: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bcc63: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5bcc68u); f_005eb000();
    /* 005bcc68: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcc6e: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bcc71: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005bcc74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcc75: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bcc78: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bcc7a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bcc7d: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005bcc83: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5bcc85u); call_ind(t); }
    /* 005bcc85: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bcc88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bcc8a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bcc8d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005bcc90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bcc92u); call_ind(t); }
    /* 005bcc92: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcc98: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 005bcc9b: mov dword ptr [edx + 0x178], 0xf */ W32((u32)(r_edx+0x178u), 0xfu);
L_005bcca5:; BB(0x005bcca5);
    /* 005bcca5: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bccab: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bccae: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bccb2: je 0x5bcd61 */ if (fZ) goto L_005bcd61;
L_005bccb8:; BB(0x005bccb8);
    /* 005bccb8: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005bccbd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bccc2u); f_00686d82();
    /* 005bccc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bccc5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005bccc8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005bcccf: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bccd3: je 0x5bcce5 */ if (fZ) goto L_005bcce5;
L_005bccd5:; BB(0x005bccd5);
    /* 005bccd5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005bccd8: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5bccddu); f_005eaaf0();
    /* 005bccdd: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005bcce3: jmp 0x5bccef */ goto L_005bccef;
L_005bcce5:; BB(0x005bcce5);
    /* 005bcce5: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_005bccef:; BB(0x005bccef);
    /* 005bccef: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 005bccf5: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005bccf8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bccff: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bcd02: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005bcd05: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd07: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd0d: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcd13: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bcd16: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005bcd19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bcd1d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5bcd22u); f_005eae80();
    /* 005bcd22: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcd28: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bcd2b: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005bcd2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd2f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bcd32: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5bcd37u); f_005eb000();
    /* 005bcd37: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcd3d: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bcd40: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005bcd43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bcd47: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bcd49: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bcd4c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005bcd52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bcd54u); call_ind(t); }
    /* 005bcd54: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bcd57: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bcd59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bcd5c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005bcd5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bcd61u); call_ind(t); }
L_005bcd61:; BB(0x005bcd61);
    /* 005bcd61: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcd67: call 0x5c10b0 */ r_esp -= 4; W32(r_esp, 0x5bcd6cu); f_005c10b0();
    /* 005bcd6c: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcd72: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bcd75: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005bcd78: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bcd7b: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005bcd81: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd83: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcd89: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bcd8c: add eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bcd8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd90: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005bcd96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcd97: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcd9d: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bcda0: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005bcda3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bcda4: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcdaa: call 0x5c0f40 */ r_esp -= 4; W32(r_esp, 0x5bcdafu); f_005c0f40();
    /* 005bcdaf: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcdb5: call 0x5c13e0 */ r_esp -= 4; W32(r_esp, 0x5bcdbau); f_005c13e0();
    /* 005bcdba: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcdc0: call 0x5c1b60 */ r_esp -= 4; W32(r_esp, 0x5bcdc5u); f_005c1b60();
    /* 005bcdc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bcdc7: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcdcd: call 0x5c1d60 */ r_esp -= 4; W32(r_esp, 0x5bcdd2u); f_005c1d60();
    /* 005bcdd2: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bcdd8: call 0x5c1ed0 */ r_esp -= 4; W32(r_esp, 0x5bcdddu); f_005c1ed0();
    /* 005bcddd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bcde0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bcde7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bcde8: mov esp, ebp */ r_esp = r_ebp;
    /* 005bcdea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bcdeb: ret 4 */ FN_RET(0x005bc960); r_esp += 8; return;
}

void f_005bcdf0(void) /* MLVSlotDisplay_Blossom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bcdf0);
    /* 005bcdf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bcdf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bcdf3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bcdf6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bcdf9: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 005bcdfd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bce00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bce01: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bce04: call 0x5c15c0 */ r_esp -= 4; W32(r_esp, 0x5bce09u); f_005c15c0();
    /* 005bce09: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005bce0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bce0e: je 0x5bce17 */ if (fZ) goto L_005bce17;
L_005bce10:; BB(0x005bce10);
    /* 005bce10: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005bce12: jmp 0x5bce9d */ goto L_005bce9d;
L_005bce17:; BB(0x005bce17);
    /* 005bce17: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bce1a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005bce1d: cmp dword ptr [ebp - 0x1c], 0x5e */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bce21: je 0x5bce25 */ if (fZ) goto L_005bce25;
L_005bce23:; BB(0x005bce23);
    /* 005bce23: jmp 0x5bce96 */ goto L_005bce96;
L_005bce25:; BB(0x005bce25);
    /* 005bce25: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bce28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bce2a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bce2d: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005bce30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bce32u); call_ind(t); }
    /* 005bce32: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005bce35: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bce37: je 0x5bce4d */ if (fZ) goto L_005bce4d;
L_005bce39:; BB(0x005bce39);
    /* 005bce39: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bce3c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bce3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bce41: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005bce44: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5bce46u); call_ind(t); }
    /* 005bce46: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005bce49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bce4b: je 0x5bce4f */ if (fZ) goto L_005bce4f;
L_005bce4d:; BB(0x005bce4d);
    /* 005bce4d: jmp 0x5bce9a */ goto L_005bce9a;
L_005bce4f:; BB(0x005bce4f);
    /* 005bce4f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bce52: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bce55: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bce58: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bce5b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bce5e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bce61: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005bce64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bce67: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5bce6cu); f_005c9140();
    /* 005bce6c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bce6f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bce72: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005bce75: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bce78: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bce7b: jle 0x5bce7f */ if ((fZ||fS!=fO)) goto L_005bce7f;
L_005bce7d:; BB(0x005bce7d);
    /* 005bce7d: jmp 0x5bce9a */ goto L_005bce9a;
L_005bce7f:; BB(0x005bce7f);
    /* 005bce7f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bce82: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bce85: call 0x5c8fc0 */ r_esp -= 4; W32(r_esp, 0x5bce8au); f_005c8fc0();
    /* 005bce8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bce8c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bce8f: call 0x5bceb0 */ r_esp -= 4; W32(r_esp, 0x5bce94u); f_005bceb0();
    /* 005bce94: jmp 0x5bce9a */ goto L_005bce9a;
L_005bce96:; BB(0x005bce96);
    /* 005bce96: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
L_005bce9a:; BB(0x005bce9a);
    /* 005bce9a: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
L_005bce9d:; BB(0x005bce9d);
    /* 005bce9d: mov esp, ebp */ r_esp = r_ebp;
    /* 005bce9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bcea0: ret 4 */ FN_RET(0x005bcdf0); r_esp += 8; return;
}

void f_005bd050(void) /* MLVSlotDisplay_Blossom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bd050);
    /* 005bd050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bd051: mov ebp, esp */ r_ebp = r_esp;
    /* 005bd053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd055: push 0x6a822c */ { u32 v = 0x6a822cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd05a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005bd060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd061: sub esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bd067: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005bd06c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bd06e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd06f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005bd072: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005bd078: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 005bd07e: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd084: call 0x5c1550 */ r_esp -= 4; W32(r_esp, 0x5bd089u); f_005c1550();
    /* 005bd089: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd08f: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005bd092: mov dword ptr [ebp - 0xf4], ecx */ W32((u32)(r_ebp+0xffffff0cu), r_ecx);
    /* 005bd098: mov edx, dword ptr [ebp - 0xf4] */ r_edx = R32((u32)(r_ebp+0xffffff0cu));
    /* 005bd09e: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd0a1: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 005bd0a7: cmp dword ptr [ebp - 0xf4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff0cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bd0ae: ja 0x5bda35 */ if ((!fC&&!fZ)) goto L_005bda35;
L_005bd0b4:; BB(0x005bd0b4);
    /* 005bd0b4: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 005bd0ba: jmp dword ptr [eax*4 + 0x5bdeac] */ { u32 t = R32((u32)(r_eax*4+0x5bdeacu)); switch (t) { case 0x5bd0c1u: goto L_005bd0c1; case 0x5bd35bu: goto L_005bd35b; case 0x5bd6fau: goto L_005bd6fa; case 0x5bda00u: goto L_005bda00; default: UNSUP(0x005bd0ba, "jump table entry is not a known target"); } }
L_005bd0c1:; BB(0x005bd0c1);
    /* 005bd0c1: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd0c7: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bd0ca: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005bd0cd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005bd0d0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005bd0d7: jmp 0x5bd0e2 */ goto L_005bd0e2;
L_005bd0d9:; BB(0x005bd0d9);
    /* 005bd0d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bd0dc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd0df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005bd0e2:; BB(0x005bd0e2);
    /* 005bd0e2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bd0e5: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bd0e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005bd0eb: cmp dword ptr [eax + edx], 0 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd0ef: jl 0x5bd23c */ if ((fS!=fO)) goto L_005bd23c;
L_005bd0f5:; BB(0x005bd0f5);
    /* 005bd0f5: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd0fb: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd0fe: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 005bd104: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005bd10a: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd10e: jne 0x5bd11c */ if (!fZ) goto L_005bd11c;
L_005bd110:; BB(0x005bd110);
    /* 005bd110: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
    /* 005bd11a: jmp 0x5bd137 */ goto L_005bd137;
L_005bd11c:; BB(0x005bd11c);
    /* 005bd11c: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005bd122: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005bd128: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bd12b: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd12e: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bd131: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
L_005bd137:; BB(0x005bd137);
    /* 005bd137: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bd13a: cmp eax, dword ptr [ebp - 0xf8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff08u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bd140: jb 0x5bd148 */ if (fC) goto L_005bd148;
L_005bd142:; BB(0x005bd142);
    /* 005bd142: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bd148u); call_ind(t); }
L_005bd148:; BB(0x005bd148);
    /* 005bd148: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005bd14e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bd151: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005bd154: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bd157: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bd15a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd15e: jne 0x5bd165 */ if (!fZ) goto L_005bd165;
L_005bd160:; BB(0x005bd160);
    /* 005bd160: jmp 0x5bd23c */ goto L_005bd23c;
L_005bd165:; BB(0x005bd165);
    /* 005bd165: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd167: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bd16cu); f_00686d82();
    /* 005bd16c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd16f: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005bd172: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005bd179: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd17d: je 0x5bd211 */ if (fZ) goto L_005bd211;
L_005bd183:; BB(0x005bd183);
    /* 005bd183: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd189: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bd18c: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005bd18f: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 005bd195: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd19b: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bd19e: fild dword ptr [eax + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x58u)));
    /* 005bd1a1: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd1a7: fstp qword ptr [ebp - 0x100] */ W_F64((u32)(r_ebp+0xffffff00u), ST(0)); FPOP();
    /* 005bd1ad: call 0x5c21c0 */ r_esp -= 4; W32(r_esp, 0x5bd1b2u); f_005c21c0();
    /* 005bd1b2: fld1  */ FPUSH(1.0);
    /* 005bd1b4: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 005bd1b6: fmul qword ptr [ebp - 0x100] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffff00u));
    /* 005bd1bc: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5bd1c1u); f_00686cc0();
    /* 005bd1c1: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005bd1c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd1c9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bd1cc: call 0x6069b0 */ r_esp -= 4; W32(r_esp, 0x5bd1d1u); f_006069b0();
    /* 005bd1d1: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bd1d4: mov dword ptr [ecx], 0x6d1cbc */ W32((u32)(r_ecx), 0x6d1cbcu);
    /* 005bd1da: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bd1dd: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 005bd1e3: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005bd1e6: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bd1e9: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005bd1ef: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005bd1f2: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bd1f5: mov dword ptr [eax + 0x14], 0xffffffff */ W32((u32)(r_eax+0x14u), 0xffffffffu);
    /* 005bd1fc: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bd1ff: mov dword ptr [ecx + 0x10], 0xffffffff */ W32((u32)(r_ecx+0x10u), 0xffffffffu);
    /* 005bd206: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bd209: mov dword ptr [ebp - 0x104], edx */ W32((u32)(r_ebp+0xfffffefcu), r_edx);
    /* 005bd20f: jmp 0x5bd21b */ goto L_005bd21b;
L_005bd211:; BB(0x005bd211);
    /* 005bd211: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_005bd21b:; BB(0x005bd21b);
    /* 005bd21b: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005bd221: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005bd224: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bd22b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bd22e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd22f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bd232: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x5bd237u); f_005f6050();
    /* 005bd237: jmp 0x5bd0d9 */ goto L_005bd0d9;
L_005bd23c:; BB(0x005bd23c);
    /* 005bd23c: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd242: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd245: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 005bd24b: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 005bd251: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd255: jne 0x5bd263 */ if (!fZ) goto L_005bd263;
L_005bd257:; BB(0x005bd257);
    /* 005bd257: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 005bd261: jmp 0x5bd27e */ goto L_005bd27e;
L_005bd263:; BB(0x005bd263);
    /* 005bd263: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005bd269: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005bd26f: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bd272: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bd275: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bd278: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
L_005bd27e:; BB(0x005bd27e);
    /* 005bd27e: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005bd284: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd287: mov dword ptr [ebp - 0xac], ecx */ W32((u32)(r_ebp+0xffffff54u), r_ecx);
    /* 005bd28d: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd293: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd296: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 005bd29c: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005bd2a2: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd2a6: jne 0x5bd2b4 */ if (!fZ) goto L_005bd2b4;
L_005bd2a8:; BB(0x005bd2a8);
    /* 005bd2a8: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 005bd2b2: jmp 0x5bd2cf */ goto L_005bd2cf;
L_005bd2b4:; BB(0x005bd2b4);
    /* 005bd2b4: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005bd2ba: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005bd2c0: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bd2c3: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bd2c6: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bd2c9: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
L_005bd2cf:; BB(0x005bd2cf);
    /* 005bd2cf: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bd2d5: cmp ecx, dword ptr [ebp - 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffef4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bd2db: jb 0x5bd2e3 */ if (fC) goto L_005bd2e3;
L_005bd2dd:; BB(0x005bd2dd);
    /* 005bd2dd: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bd2e3u); call_ind(t); }
L_005bd2e3:; BB(0x005bd2e3);
    /* 005bd2e3: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005bd2e9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bd2ec: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005bd2f2: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd2f6: jne 0x5bd30f */ if (!fZ) goto L_005bd30f;
L_005bd2f8:; BB(0x005bd2f8);
    /* 005bd2f8: push 0x17b */ { u32 v = 0x17bu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd2fd: push 0x6d1c98 */ { u32 v = 0x6d1c98u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd302: push 0x6d1c80 */ { u32 v = 0x6d1c80u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd307: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5bd30cu); f_005e9f20();
    /* 005bd30c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bd30f:; BB(0x005bd30f);
    /* 005bd30f: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd315: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bd318: add ecx, 0xe8 */ {  u32 a = r_ecx; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd31e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd31f: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5bd324u); f_00610980();
    /* 005bd324: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd327: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd32d: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bd330: add eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bd333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd334: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5bd339u); f_00610980();
    /* 005bd339: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd33c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd33e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005bd344: call 0x5dd400 */ r_esp -= 4; W32(r_esp, 0x5bd349u); f_005dd400();
    /* 005bd349: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd34b: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd351: call 0x5bceb0 */ r_esp -= 4; W32(r_esp, 0x5bd356u); f_005bceb0();
    /* 005bd356: jmp 0x5bda35 */ goto L_005bda35;
L_005bd35b:; BB(0x005bd35b);
    /* 005bd35b: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd361: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd364: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 005bd36a: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bd370: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd374: jne 0x5bd382 */ if (!fZ) goto L_005bd382;
L_005bd376:; BB(0x005bd376);
    /* 005bd376: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
    /* 005bd380: jmp 0x5bd39d */ goto L_005bd39d;
L_005bd382:; BB(0x005bd382);
    /* 005bd382: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005bd388: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005bd38e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bd391: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd394: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bd397: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
L_005bd39d:; BB(0x005bd39d);
    /* 005bd39d: mov eax, dword ptr [ebp - 0x110] */ r_eax = R32((u32)(r_ebp+0xfffffef0u));
    /* 005bd3a3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bd3a6: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005bd3ac: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd3b2: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd3b5: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 005bd3bb: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005bd3c1: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd3c5: jne 0x5bd3d3 */ if (!fZ) goto L_005bd3d3;
L_005bd3c7:; BB(0x005bd3c7);
    /* 005bd3c7: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 005bd3d1: jmp 0x5bd3ee */ goto L_005bd3ee;
L_005bd3d3:; BB(0x005bd3d3);
    /* 005bd3d3: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 005bd3d9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005bd3df: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bd3e2: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd3e5: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bd3e8: mov dword ptr [ebp - 0x114], edx */ W32((u32)(r_ebp+0xfffffeecu), r_edx);
L_005bd3ee:; BB(0x005bd3ee);
    /* 005bd3ee: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005bd3f4: cmp eax, dword ptr [ebp - 0x114] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffeecu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bd3fa: jb 0x5bd402 */ if (fC) goto L_005bd402;
L_005bd3fc:; BB(0x005bd3fc);
    /* 005bd3fc: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bd402u); call_ind(t); }
L_005bd402:; BB(0x005bd402);
    /* 005bd402: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005bd408: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bd40b: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005bd411: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bd414: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bd417: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd41b: je 0x5bd431 */ if (fZ) goto L_005bd431;
L_005bd41d:; BB(0x005bd41d);
    /* 005bd41d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bd420: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x5bd425u); f_005eb610();
    /* 005bd425: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005bd428: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bd42a: jle 0x5bd431 */ if ((fZ||fS!=fO)) goto L_005bd431;
L_005bd42c:; BB(0x005bd42c);
    /* 005bd42c: jmp 0x5bda35 */ goto L_005bda35;
L_005bd431:; BB(0x005bd431);
    /* 005bd431: push 0x6d1c6c */ { u32 v = 0x6d1c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd436: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5bd43bu); f_0062fde0();
    /* 005bd43b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd43e: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd444: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bd447: call 0x5c90c0 */ r_esp -= 4; W32(r_esp, 0x5bd44cu); f_005c90c0();
    /* 005bd44c: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd44e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bd453u); f_00686d82();
    /* 005bd453: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd456: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005bd459: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005bd460: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd464: je 0x5bd4ac */ if (fZ) goto L_005bd4ac;
L_005bd466:; BB(0x005bd466);
    /* 005bd466: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd468: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005bd46b: call 0x6069b0 */ r_esp -= 4; W32(r_esp, 0x5bd470u); f_006069b0();
    /* 005bd470: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005bd473: mov dword ptr [ecx], 0x6d1cbc */ W32((u32)(r_ecx), 0x6d1cbcu);
    /* 005bd479: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005bd47c: mov dword ptr [edx + 0x2c], 0x10 */ W32((u32)(r_edx+0x2cu), 0x10u);
    /* 005bd483: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005bd486: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005bd48d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005bd490: mov dword ptr [ecx + 0x14], 0xffffffff */ W32((u32)(r_ecx+0x14u), 0xffffffffu);
    /* 005bd497: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 005bd49a: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 005bd4a1: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 005bd4a4: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 005bd4aa: jmp 0x5bd4b6 */ goto L_005bd4b6;
L_005bd4ac:; BB(0x005bd4ac);
    /* 005bd4ac: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_005bd4b6:; BB(0x005bd4b6);
    /* 005bd4b6: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 005bd4bc: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005bd4bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bd4c6: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005bd4c9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005bd4cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd4ce: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd4d3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bd4d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bd4d8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bd4db: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bd4de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bd4e0u); call_ind(t); }
    /* 005bd4e0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd4e2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bd4e7u); f_00686d82();
    /* 005bd4e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd4ea: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005bd4ed: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005bd4f4: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd4f8: je 0x5bd50c */ if (fZ) goto L_005bd50c;
L_005bd4fa:; BB(0x005bd4fa);
    /* 005bd4fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd4fc: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005bd4ff: call 0x600b60 */ r_esp -= 4; W32(r_esp, 0x5bd504u); f_00600b60();
    /* 005bd504: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 005bd50a: jmp 0x5bd516 */ goto L_005bd516;
L_005bd50c:; BB(0x005bd50c);
    /* 005bd50c: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_005bd516:; BB(0x005bd516);
    /* 005bd516: mov ecx, dword ptr [ebp - 0x11c] */ r_ecx = R32((u32)(r_ebp+0xfffffee4u));
    /* 005bd51c: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005bd51f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bd526: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd528: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd52a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd52c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd52e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd530: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005bd533: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd534: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd536: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd538: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd53a: push 0x315941 */ { u32 v = 0x315941u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd53f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bd541: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd543: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd549: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bd54c: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x5bd551u); f_005f9b40();
    /* 005bd551: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bd554: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd55a: call 0x5c21c0 */ r_esp -= 4; W32(r_esp, 0x5bd55fu); f_005c21c0();
    /* 005bd55f: fmul qword ptr [0x6b3728] */ ST(0) = ST(0) * R_F64((u32)(0x6b3728u));
    /* 005bd565: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5bd56au); f_00686cc0();
    /* 005bd56a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd56d: mov dword ptr [ecx + 0x188], eax */ W32((u32)(r_ecx+0x188u), r_eax);
    /* 005bd573: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bd576: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd577: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd57a: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x5bd57fu); f_005f6050();
    /* 005bd57f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd582: mov dword ptr [eax + 0x178], 0x1e */ W32((u32)(r_eax+0x178u), 0x1eu);
    /* 005bd58c: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd58e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bd593u); f_00686d82();
    /* 005bd593: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd596: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005bd599: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005bd5a0: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd5a4: je 0x5bd5ec */ if (fZ) goto L_005bd5ec;
L_005bd5a6:; BB(0x005bd5a6);
    /* 005bd5a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd5a8: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bd5ab: call 0x6069b0 */ r_esp -= 4; W32(r_esp, 0x5bd5b0u); f_006069b0();
    /* 005bd5b0: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bd5b3: mov dword ptr [ecx], 0x6d1cbc */ W32((u32)(r_ecx), 0x6d1cbcu);
    /* 005bd5b9: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bd5bc: mov dword ptr [edx + 0x2c], 0x10 */ W32((u32)(r_edx+0x2cu), 0x10u);
    /* 005bd5c3: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bd5c6: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005bd5cd: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bd5d0: mov dword ptr [ecx + 0x14], 0xffffffff */ W32((u32)(r_ecx+0x14u), 0xffffffffu);
    /* 005bd5d7: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005bd5da: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 005bd5e1: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005bd5e4: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 005bd5ea: jmp 0x5bd5f6 */ goto L_005bd5f6;
L_005bd5ec:; BB(0x005bd5ec);
    /* 005bd5ec: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
L_005bd5f6:; BB(0x005bd5f6);
    /* 005bd5f6: mov ecx, dword ptr [ebp - 0x120] */ r_ecx = R32((u32)(r_ebp+0xfffffee0u));
    /* 005bd5fc: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005bd5ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bd606: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005bd609: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005bd60c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd60f: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5bd614u); f_005f5590();
    /* 005bd614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd615: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd61a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bd61d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bd61f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bd622: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bd625: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bd627u); call_ind(t); }
    /* 005bd627: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd629: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bd62eu); f_00686d82();
    /* 005bd62e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd631: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005bd634: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005bd63b: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd63f: je 0x5bd653 */ if (fZ) goto L_005bd653;
L_005bd641:; BB(0x005bd641);
    /* 005bd641: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd643: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005bd646: call 0x600b60 */ r_esp -= 4; W32(r_esp, 0x5bd64bu); f_00600b60();
    /* 005bd64b: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 005bd651: jmp 0x5bd65d */ goto L_005bd65d;
L_005bd653:; BB(0x005bd653);
    /* 005bd653: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
L_005bd65d:; BB(0x005bd65d);
    /* 005bd65d: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 005bd663: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005bd666: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bd66d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd66f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd671: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd673: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd675: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd677: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005bd67a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd67b: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd67d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd680: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5bd685u); f_005f5590();
    /* 005bd685: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd686: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd689: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5bd68eu); f_005f5550();
    /* 005bd68e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bd690: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bd691: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bd693: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bd695: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd696: push 0x315941 */ { u32 v = 0x315941u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd69b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd69d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd69f: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd6a5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bd6a8: call 0x5f9b40 */ r_esp -= 4; W32(r_esp, 0x5bd6adu); f_005f9b40();
    /* 005bd6ad: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005bd6b0: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd6b6: call 0x5c21c0 */ r_esp -= 4; W32(r_esp, 0x5bd6bbu); f_005c21c0();
    /* 005bd6bb: fmul qword ptr [0x6b3728] */ ST(0) = ST(0) * R_F64((u32)(0x6b3728u));
    /* 005bd6c1: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5bd6c6u); f_00686cc0();
    /* 005bd6c6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd6c9: mov dword ptr [ecx + 0x188], eax */ W32((u32)(r_ecx+0x188u), r_eax);
    /* 005bd6cf: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bd6d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd6d3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd6d6: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x5bd6dbu); f_005f6050();
    /* 005bd6db: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bd6de: mov dword ptr [eax + 0x178], 0x1e */ W32((u32)(r_eax+0x178u), 0x1eu);
    /* 005bd6e8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd6ea: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd6f0: call 0x5bceb0 */ r_esp -= 4; W32(r_esp, 0x5bd6f5u); f_005bceb0();
    /* 005bd6f5: jmp 0x5bda35 */ goto L_005bda35;
L_005bd6fa:; BB(0x005bd6fa);
    /* 005bd6fa: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd700: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd703: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005bd709: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005bd70f: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd713: jne 0x5bd721 */ if (!fZ) goto L_005bd721;
L_005bd715:; BB(0x005bd715);
    /* 005bd715: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 005bd71f: jmp 0x5bd73c */ goto L_005bd73c;
L_005bd721:; BB(0x005bd721);
    /* 005bd721: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005bd727: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005bd72d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bd730: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd733: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bd736: mov dword ptr [ebp - 0x128], edx */ W32((u32)(r_ebp+0xfffffed8u), r_edx);
L_005bd73c:; BB(0x005bd73c);
    /* 005bd73c: mov eax, dword ptr [ebp - 0x128] */ r_eax = R32((u32)(r_ebp+0xfffffed8u));
    /* 005bd742: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bd745: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005bd74b: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd751: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd754: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 005bd75a: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bd760: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd764: jne 0x5bd772 */ if (!fZ) goto L_005bd772;
L_005bd766:; BB(0x005bd766);
    /* 005bd766: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 005bd770: jmp 0x5bd78d */ goto L_005bd78d;
L_005bd772:; BB(0x005bd772);
    /* 005bd772: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 005bd778: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bd77e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bd781: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd784: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bd787: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
L_005bd78d:; BB(0x005bd78d);
    /* 005bd78d: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 005bd793: cmp eax, dword ptr [ebp - 0x12c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffed4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bd799: jb 0x5bd7a1 */ if (fC) goto L_005bd7a1;
L_005bd79b:; BB(0x005bd79b);
    /* 005bd79b: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bd7a1u); call_ind(t); }
L_005bd7a1:; BB(0x005bd7a1);
    /* 005bd7a1: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005bd7a7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bd7aa: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 005bd7b0: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bd7b3: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bd7b6: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd7ba: je 0x5bd7fd */ if (fZ) goto L_005bd7fd;
L_005bd7bc:; BB(0x005bd7bc);
    /* 005bd7bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bd7bf: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x5bd7c4u); f_005eb610();
    /* 005bd7c4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005bd7c7: cmp edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd7ca: jle 0x5bd7fd */ if ((fZ||fS!=fO)) goto L_005bd7fd;
L_005bd7cc:; BB(0x005bd7cc);
    /* 005bd7cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd7ce: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd7d4: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bd7d7: add ecx, 0xe8 */ {  u32 a = r_ecx; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd7dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd7de: call 0x6110a0 */ r_esp -= 4; W32(r_esp, 0x5bd7e3u); f_006110a0();
    /* 005bd7e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd7e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd7e8: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd7ee: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bd7f1: add eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bd7f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bd7f5: call 0x610e70 */ r_esp -= 4; W32(r_esp, 0x5bd7fau); f_00610e70();
    /* 005bd7fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bd7fd:; BB(0x005bd7fd);
    /* 005bd7fd: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd803: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd806: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 005bd80c: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 005bd812: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd816: jne 0x5bd824 */ if (!fZ) goto L_005bd824;
L_005bd818:; BB(0x005bd818);
    /* 005bd818: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
    /* 005bd822: jmp 0x5bd83f */ goto L_005bd83f;
L_005bd824:; BB(0x005bd824);
    /* 005bd824: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005bd82a: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005bd830: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bd833: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd836: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bd839: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
L_005bd83f:; BB(0x005bd83f);
    /* 005bd83f: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 005bd845: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bd848: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005bd84e: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd854: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd857: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005bd85d: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 005bd863: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd867: jne 0x5bd875 */ if (!fZ) goto L_005bd875;
L_005bd869:; BB(0x005bd869);
    /* 005bd869: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 005bd873: jmp 0x5bd890 */ goto L_005bd890;
L_005bd875:; BB(0x005bd875);
    /* 005bd875: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005bd87b: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005bd881: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bd884: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bd887: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bd88a: mov dword ptr [ebp - 0x134], edx */ W32((u32)(r_ebp+0xfffffeccu), r_edx);
L_005bd890:; BB(0x005bd890);
    /* 005bd890: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 005bd896: cmp eax, dword ptr [ebp - 0x134] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffeccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bd89c: jb 0x5bd8a4 */ if (fC) goto L_005bd8a4;
L_005bd89e:; BB(0x005bd89e);
    /* 005bd89e: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bd8a4u); call_ind(t); }
L_005bd8a4:; BB(0x005bd8a4);
    /* 005bd8a4: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 005bd8aa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005bd8ad: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 005bd8b3: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005bd8b6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bd8b9: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd8bd: je 0x5bd8d7 */ if (fZ) goto L_005bd8d7;
L_005bd8bf:; BB(0x005bd8bf);
    /* 005bd8bf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bd8c2: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x5bd8c7u); f_005eb610();
    /* 005bd8c7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005bd8ca: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bd8d0: jge 0x5bd8d7 */ if ((fS==fO)) goto L_005bd8d7;
L_005bd8d2:; BB(0x005bd8d2);
    /* 005bd8d2: jmp 0x5bda35 */ goto L_005bda35;
L_005bd8d7:; BB(0x005bd8d7);
    /* 005bd8d7: push 0x6d1c64 */ { u32 v = 0x6d1c64u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd8dc: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5bd8e1u); f_0062fde0();
    /* 005bd8e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd8e4: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005bd8e9: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bd8ec: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005bd8f2: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bd8f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bd8f7: mov ecx, eax */ r_ecx = r_eax;
    /* 005bd8f9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bd8fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bd8feu); call_ind(t); }
    /* 005bd8fe: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd904: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 005bd907: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd909: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005bd90f: call 0x5dd400 */ r_esp -= 4; W32(r_esp, 0x5bd914u); f_005dd400();
    /* 005bd914: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd916: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd91c: mov ecx, dword ptr [edx + 0x6c] */ r_ecx = R32((u32)(r_edx+0x6cu));
    /* 005bd91f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5bd924u); f_005f5d50();
    /* 005bd924: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005bd926: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd928: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd92e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bd931: call 0x5fbb30 */ r_esp -= 4; W32(r_esp, 0x5bd936u); f_005fbb30();
    /* 005bd936: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005bd938: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd93a: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd940: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005bd943: call 0x5fbb30 */ r_esp -= 4; W32(r_esp, 0x5bd948u); f_005fbb30();
    /* 005bd948: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd94e: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005bd951: call 0x5c9740 */ r_esp -= 4; W32(r_esp, 0x5bd956u); f_005c9740();
    /* 005bd956: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005bd959: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd95b: je 0x5bd984 */ if (fZ) goto L_005bd984;
L_005bd95d:; BB(0x005bd95d);
    /* 005bd95d: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd963: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bd966: add edx, 0xa8 */ {  u32 a = r_edx; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bd96c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd96d: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5bd972u); f_00610980();
    /* 005bd972: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bd975: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd977: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd97d: call 0x5bceb0 */ r_esp -= 4; W32(r_esp, 0x5bd982u); f_005bceb0();
    /* 005bd982: jmp 0x5bd9fe */ goto L_005bd9fe;
L_005bd984:; BB(0x005bd984);
    /* 005bd984: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd98a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bd98d: call 0x5be3f0 */ r_esp -= 4; W32(r_esp, 0x5bd992u); f_005be3f0();
    /* 005bd992: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bd994: jle 0x5bd9f1 */ if ((fZ||fS!=fO)) goto L_005bd9f1;
L_005bd996:; BB(0x005bd996);
    /* 005bd996: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd99c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005bd99f: call 0x5c9940 */ r_esp -= 4; W32(r_esp, 0x5bd9a4u); f_005c9940();
    /* 005bd9a4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005bd9a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bd9a9: je 0x5bd9c2 */ if (fZ) goto L_005bd9c2;
L_005bd9ab:; BB(0x005bd9ab);
    /* 005bd9ab: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd9b1: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bd9b4: add ecx, 0xc8 */ {  u32 a = r_ecx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bd9ba: mov dword ptr [ebp - 0x138], ecx */ W32((u32)(r_ebp+0xfffffec8u), r_ecx);
    /* 005bd9c0: jmp 0x5bd9d6 */ goto L_005bd9d6;
L_005bd9c2:; BB(0x005bd9c2);
    /* 005bd9c2: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd9c8: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bd9cb: add eax, 0x88 */ {  u32 a = r_eax; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bd9d0: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
L_005bd9d6:; BB(0x005bd9d6);
    /* 005bd9d6: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 005bd9dc: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 005bd9e2: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005bd9e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bd9e9: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5bd9eeu); f_00610980();
    /* 005bd9ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bd9f1:; BB(0x005bd9f1);
    /* 005bd9f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bd9f3: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bd9f9: call 0x5bceb0 */ r_esp -= 4; W32(r_esp, 0x5bd9feu); f_005bceb0();
L_005bd9fe:; BB(0x005bd9fe);
    /* 005bd9fe: jmp 0x5bda35 */ goto L_005bda35;
L_005bda00:; BB(0x005bda00);
    /* 005bda00: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005bda05: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005bda08: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005bda0e: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bda11: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bda13: mov ecx, eax */ r_ecx = r_eax;
    /* 005bda15: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bda18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bda1au); call_ind(t); }
    /* 005bda1a: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bda20: sub eax, dword ptr [ecx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bda23: cmp eax, 0xbb8 */ {  u32 a = r_eax; u32 b = 0xbb8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bda28: jbe 0x5bda35 */ if ((fC||fZ)) goto L_005bda35;
L_005bda2a:; BB(0x005bda2a);
    /* 005bda2a: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bda30: call 0x5c1a80 */ r_esp -= 4; W32(r_esp, 0x5bda35u); f_005c1a80();
L_005bda35:; BB(0x005bda35);
    /* 005bda35: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bda3b: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005bda3e: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005bda41: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005bda44: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005bda4a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005bda4d: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005bda53: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005bda56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bda58: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005bda5b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bda5du); call_ind(t); }
    /* 005bda5d: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bda63: sub eax, dword ptr [ecx + 0x68] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x68u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bda66: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005bda69: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005bda70: jmp 0x5bda7b */ goto L_005bda7b;
L_005bda72:; BB(0x005bda72);
    /* 005bda72: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bda75: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bda78: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_005bda7b:; BB(0x005bda7b);
    /* 005bda7b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bda7e: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bda81: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bda84: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bda88: jl 0x5bde85 */ if ((fS!=fO)) goto L_005bde85;
L_005bda8e:; BB(0x005bda8e);
    /* 005bda8e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bda91: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bda94: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bda97: mov ecx, dword ptr [eax + edx] */ r_ecx = R32((u32)(r_eax+r_edx));
    /* 005bda9a: mov edx, dword ptr [eax + edx + 4] */ r_edx = R32((u32)(r_eax+r_edx+0x4u));
    /* 005bda9e: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005bdaa1: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005bdaa4: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bdaaa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bdaad: mov dword ptr [ebp - 0xdc], ecx */ W32((u32)(r_ebp+0xffffff24u), r_ecx);
    /* 005bdab3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bdab6: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 005bdabc: cmp dword ptr [eax + edx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdac1: jl 0x5bdad8 */ if ((fS!=fO)) goto L_005bdad8;
L_005bdac3:; BB(0x005bdac3);
    /* 005bdac3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bdac6: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 005bdacc: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005bdad0: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 005bdad6: jmp 0x5bdaed */ goto L_005bdaed;
L_005bdad8:; BB(0x005bdad8);
    /* 005bdad8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bdadb: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 005bdae1: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 005bdae5: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bdae7: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
L_005bdaed:; BB(0x005bdaed);
    /* 005bdaed: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bdaf0: add ecx, dword ptr [ebp - 0x13c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffec4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bdaf6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005bdaf9: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005bdafc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdafd: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bdb00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bdb01: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bdb04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdb05: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bdb0b: call 0x5bcee0 */ r_esp -= 4; W32(r_esp, 0x5bdb10u); f_005bcee0();
    /* 005bdb10: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bdb16: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdb19: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 005bdb1f: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 005bdb25: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdb29: jne 0x5bdb37 */ if (!fZ) goto L_005bdb37;
L_005bdb2b:; BB(0x005bdb2b);
    /* 005bdb2b: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
    /* 005bdb35: jmp 0x5bdb52 */ goto L_005bdb52;
L_005bdb37:; BB(0x005bdb37);
    /* 005bdb37: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 005bdb3d: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 005bdb43: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bdb46: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bdb49: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bdb4c: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
L_005bdb52:; BB(0x005bdb52);
    /* 005bdb52: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bdb55: cmp ecx, dword ptr [ebp - 0x140] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffec0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bdb5b: jb 0x5bdb63 */ if (fC) goto L_005bdb63;
L_005bdb5d:; BB(0x005bdb5d);
    /* 005bdb5d: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bdb63u); call_ind(t); }
L_005bdb63:; BB(0x005bdb63);
    /* 005bdb63: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 005bdb69: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bdb6c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bdb6f: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005bdb72: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005bdb75: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdb79: je 0x5bdbac */ if (fZ) goto L_005bdbac;
L_005bdb7b:; BB(0x005bdb7b);
    /* 005bdb7b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdb7e: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x5bdb83u); f_005eafc0();
    /* 005bdb83: cmp eax, dword ptr [ebp - 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdb86: jne 0x5bdb99 */ if (!fZ) goto L_005bdb99;
L_005bdb88:; BB(0x005bdb88);
    /* 005bdb88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdb8b: call 0x5eb110 */ r_esp -= 4; W32(r_esp, 0x5bdb90u); f_005eb110();
    /* 005bdb90: cmp eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdb93: je 0x5bdc8b */ if (fZ) goto L_005bdc8b;
L_005bdb99:; BB(0x005bdb99);
    /* 005bdb99: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdb9c: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x5bdba1u); f_005eb610();
    /* 005bdba1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005bdba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bdba6: jg 0x5bdc8b */ if ((!fZ&&fS==fO)) goto L_005bdc8b;
L_005bdbac:; BB(0x005bdbac);
    /* 005bdbac: mov byte ptr [ebp - 0x45], 0 */ W8((u32)(r_ebp+0xffffffbbu), 0x0u);
    /* 005bdbb0: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdbb4: je 0x5bdbfe */ if (fZ) goto L_005bdbfe;
L_005bdbb6:; BB(0x005bdbb6);
    /* 005bdbb6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdbb9: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 005bdbbf: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 005bdbc5: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005bdbcb: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdbd2: je 0x5bdbf0 */ if (fZ) goto L_005bdbf0;
L_005bdbd4:; BB(0x005bdbd4);
    /* 005bdbd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdbd6: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005bdbdc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bdbde: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 005bdbe4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bdbe6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bdbe8u); call_ind(t); }
    /* 005bdbe8: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 005bdbee: jmp 0x5bdbfa */ goto L_005bdbfa;
L_005bdbf0:; BB(0x005bdbf0);
    /* 005bdbf0: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_005bdbfa:; BB(0x005bdbfa);
    /* 005bdbfa: mov byte ptr [ebp - 0x45], 1 */ W8((u32)(r_ebp+0xffffffbbu), 0x1u);
L_005bdbfe:; BB(0x005bdbfe);
    /* 005bdbfe: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bdc01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdc02: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bdc05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bdc06: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bdc0c: call 0x5bcf70 */ r_esp -= 4; W32(r_esp, 0x5bdc11u); f_005bcf70();
    /* 005bdc11: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005bdc14: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bdc1a: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bdc1d: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005bdc23: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005bdc29: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdc2d: jne 0x5bdc3b */ if (!fZ) goto L_005bdc3b;
L_005bdc2f:; BB(0x005bdc2f);
    /* 005bdc2f: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
    /* 005bdc39: jmp 0x5bdc56 */ goto L_005bdc56;
L_005bdc3b:; BB(0x005bdc3b);
    /* 005bdc3b: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005bdc41: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 005bdc47: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bdc4a: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bdc4d: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bdc50: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
L_005bdc56:; BB(0x005bdc56);
    /* 005bdc56: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bdc59: cmp edx, dword ptr [ebp - 0x148] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffeb8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bdc5f: jb 0x5bdc67 */ if (fC) goto L_005bdc67;
L_005bdc61:; BB(0x005bdc61);
    /* 005bdc61: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bdc67u); call_ind(t); }
L_005bdc67:; BB(0x005bdc67);
    /* 005bdc67: mov eax, dword ptr [ebp - 0xe4] */ r_eax = R32((u32)(r_ebp+0xffffff1cu));
    /* 005bdc6d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bdc70: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bdc73: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdc76: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 005bdc79: movzx ecx, byte ptr [ebp - 0x45] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffbbu));
    /* 005bdc7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdc7f: je 0x5bdc8b */ if (fZ) goto L_005bdc8b;
L_005bdc81:; BB(0x005bdc81);
    /* 005bdc81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdc83: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdc86: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5bdc8bu); f_005eb5d0();
L_005bdc8b:; BB(0x005bdc8b);
    /* 005bdc8b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdc8e: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x5bdc93u); f_005eb610();
    /* 005bdc93: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005bdc96: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bdc98: jg 0x5bddb0 */ if ((!fZ&&fS==fO)) goto L_005bddb0;
L_005bdc9e:; BB(0x005bdc9e);
    /* 005bdc9e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdca1: call 0x5f60e0 */ r_esp -= 4; W32(r_esp, 0x5bdca6u); f_005f60e0();
    /* 005bdca6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdca8: jne 0x5bddb0 */ if (!fZ) goto L_005bddb0;
L_005bdcae:; BB(0x005bdcae);
    /* 005bdcae: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdcb0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5bdcb5u); f_00686d82();
    /* 005bdcb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bdcb8: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005bdcbe: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005bdcc5: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdccc: je 0x5bdd84 */ if (fZ) goto L_005bdd84;
L_005bdcd2:; BB(0x005bdcd2);
    /* 005bdcd2: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 005bdcd8: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005bdcdb: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005bdcde: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 005bdce4: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bdcea: call 0x5c21c0 */ r_esp -= 4; W32(r_esp, 0x5bdcefu); f_005c21c0();
    /* 005bdcef: fld1  */ FPUSH(1.0);
    /* 005bdcf1: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 005bdcf3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bdcf6: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bdcf9: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bdcff: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005bdd02: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 005bdd05: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bdd08: add ecx, dword ptr [edx + eax + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bdd0c: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
    /* 005bdd12: fild dword ptr [ebp - 0x14c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffeb4u)));
    /* 005bdd18: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005bdd1a: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x5bdd1fu); f_00686cc0();
    /* 005bdd1f: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005bdd25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bdd27: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bdd2d: call 0x6069b0 */ r_esp -= 4; W32(r_esp, 0x5bdd32u); f_006069b0();
    /* 005bdd32: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bdd38: mov dword ptr [eax], 0x6d1cbc */ W32((u32)(r_eax), 0x6d1cbcu);
    /* 005bdd3e: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bdd44: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005bdd4a: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 005bdd4d: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bdd53: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 005bdd59: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005bdd5c: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bdd62: mov dword ptr [edx + 0x14], 0xffffffff */ W32((u32)(r_edx+0x14u), 0xffffffffu);
    /* 005bdd69: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bdd6f: mov dword ptr [eax + 0x10], 0xffffffff */ W32((u32)(r_eax+0x10u), 0xffffffffu);
    /* 005bdd76: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005bdd7c: mov dword ptr [ebp - 0x150], ecx */ W32((u32)(r_ebp+0xfffffeb0u), r_ecx);
    /* 005bdd82: jmp 0x5bdd8e */ goto L_005bdd8e;
L_005bdd84:; BB(0x005bdd84);
    /* 005bdd84: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
L_005bdd8e:; BB(0x005bdd8e);
    /* 005bdd8e: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005bdd94: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005bdd9a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bdda1: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005bdda7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bdda8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bddab: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x5bddb0u); f_005f6050();
L_005bddb0:; BB(0x005bddb0);
    /* 005bddb0: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005bddb7: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bddbd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005bddbf: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bddc5: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005bddc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bddcau); call_ind(t); }
    /* 005bddca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005bddcd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bddcf: je 0x5bde36 */ if (fZ) goto L_005bde36;
L_005bddd1:; BB(0x005bddd1);
    /* 005bddd1: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005bddd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bddd5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005bddd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bddd9: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bdddf: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005bdde2: call 0x5c9960 */ r_esp -= 4; W32(r_esp, 0x5bdde7u); f_005c9960();
    /* 005bdde7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bdde9: jle 0x5bde36 */ if ((fZ||fS!=fO)) goto L_005bde36;
L_005bddeb:; BB(0x005bddeb);
    /* 005bddeb: mov dword ptr [ebp - 0x54], 0xfa */ W32((u32)(r_ebp+0xffffffacu), 0xfau);
    /* 005bddf2: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005bddf9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bddfc: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5bde01u); f_005eb240();
    /* 005bde01: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bde04: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005bde07: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005bde0a: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005bde0d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bde10: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bde11: mov ecx, 0xfa */ r_ecx = 0xfau;
    /* 005bde16: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bde16, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bde16, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bde18: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005bde1b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bde1e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005bde1f: idiv dword ptr [ebp - 0x58] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffa8u)); if (!d) UNSUP(0x005bde1f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bde1f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bde22: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005bde25: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bde28: cmp edx, dword ptr [ebp - 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bde2b: jl 0x5bde36 */ if ((fS!=fO)) goto L_005bde36;
L_005bde2d:; BB(0x005bde2d);
    /* 005bde2d: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005bde30: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bde33: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_005bde36:; BB(0x005bde36);
    /* 005bde36: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bde39: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5bde3eu); f_005eb220();
    /* 005bde3e: cmp dword ptr [ebp - 0x3c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bde41: je 0x5bde57 */ if (fZ) goto L_005bde57;
L_005bde43:; BB(0x005bde43);
    /* 005bde43: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005bde46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bde47: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bde4a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005bde4c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bde4f: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005bde55: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5bde57u); call_ind(t); }
L_005bde57:; BB(0x005bde57);
    /* 005bde57: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bde5a: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bde5d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bde60: mov edx, dword ptr [ecx + eax + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax+0xcu));
    /* 005bde64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bde65: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005bde68: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bde6b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bde6e: mov edx, dword ptr [ecx + eax + 8] */ r_edx = R32((u32)(r_ecx+r_eax+0x8u));
    /* 005bde72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bde73: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bde76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bde78: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bde7b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005bde7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bde80u); call_ind(t); }
    /* 005bde80: jmp 0x5bda72 */ goto L_005bda72;
L_005bde85:; BB(0x005bde85);
    /* 005bde85: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bde8b: call 0x5c1b60 */ r_esp -= 4; W32(r_esp, 0x5bde90u); f_005c1b60();
    /* 005bde90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bde92: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005bde98: call 0x5c1d60 */ r_esp -= 4; W32(r_esp, 0x5bde9du); f_005c1d60();
    /* 005bde9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdea0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bdea7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bdea8: mov esp, ebp */ r_esp = r_ebp;
    /* 005bdeaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bdeab: ret  */ FN_RET(0x005bd050); r_esp += 4; return;
}

void f_005bdec0(void) /* MLVSlotDisplay_Blossom::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bdec0);
    /* 005bdec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bdec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005bdec3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bdec6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005bdec9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bdecc: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bdecf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005bded2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bded5: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bded9: jne 0x5bdee4 */ if (!fZ) goto L_005bdee4;
L_005bdedb:; BB(0x005bdedb);
    /* 005bdedb: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005bdee2: jmp 0x5bdef6 */ goto L_005bdef6;
L_005bdee4:; BB(0x005bdee4);
    /* 005bdee4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdee7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bdeea: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005bdeed: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bdef0: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005bdef3: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_005bdef6:; BB(0x005bdef6);
    /* 005bdef6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005bdef9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005bdefc: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005bdf03: jmp 0x5bdf0e */ goto L_005bdf0e;
L_005bdf05:; BB(0x005bdf05);
    /* 005bdf05: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bdf08: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bdf0b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005bdf0e:; BB(0x005bdf0e);
    /* 005bdf0e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bdf11: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bdf14: jge 0x5bdfc0 */ if ((fS==fO)) goto L_005bdfc0;
L_005bdf1a:; BB(0x005bdf1a);
    /* 005bdf1a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bdf1d: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdf20: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005bdf23: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdf26: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdf2a: jne 0x5bdf35 */ if (!fZ) goto L_005bdf35;
L_005bdf2c:; BB(0x005bdf2c);
    /* 005bdf2c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005bdf33: jmp 0x5bdf47 */ goto L_005bdf47;
L_005bdf35:; BB(0x005bdf35);
    /* 005bdf35: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdf38: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdf3b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bdf3e: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bdf41: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bdf44: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005bdf47:; BB(0x005bdf47);
    /* 005bdf47: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bdf4a: cmp ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bdf4d: jb 0x5bdf55 */ if (fC) goto L_005bdf55;
L_005bdf4f:; BB(0x005bdf4f);
    /* 005bdf4f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bdf55u); call_ind(t); }
L_005bdf55:; BB(0x005bdf55);
    /* 005bdf55: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005bdf58: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bdf5b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bdf5e: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdf62: je 0x5bdfbb */ if (fZ) goto L_005bdfbb;
L_005bdf64:; BB(0x005bdf64);
    /* 005bdf64: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bdf67: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bdf6a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005bdf6d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005bdf70: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdf74: jne 0x5bdf7f */ if (!fZ) goto L_005bdf7f;
L_005bdf76:; BB(0x005bdf76);
    /* 005bdf76: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005bdf7d: jmp 0x5bdf91 */ goto L_005bdf91;
L_005bdf7f:; BB(0x005bdf7f);
    /* 005bdf7f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bdf82: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bdf85: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bdf88: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bdf8b: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bdf8e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005bdf91:; BB(0x005bdf91);
    /* 005bdf91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bdf94: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bdf97: jb 0x5bdf9f */ if (fC) goto L_005bdf9f;
L_005bdf99:; BB(0x005bdf99);
    /* 005bdf99: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5bdf9fu); call_ind(t); }
L_005bdf9f:; BB(0x005bdf9f);
    /* 005bdf9f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005bdfa2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bdfa5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bdfa8: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005bdfab: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005bdfae: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005bdfb1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005bdfb3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005bdfb6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005bdfb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5bdfbbu); call_ind(t); }
L_005bdfbb:; BB(0x005bdfbb);
    /* 005bdfbb: jmp 0x5bdf05 */ goto L_005bdf05;
L_005bdfc0:; BB(0x005bdfc0);
    /* 005bdfc0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bdfc3: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bdfc6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005bdfc9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdfcc: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bdfd0: jne 0x5bdfdb */ if (!fZ) goto L_005bdfdb;
L_005bdfd2:; BB(0x005bdfd2);
    /* 005bdfd2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005bdfd9: jmp 0x5bdfed */ goto L_005bdfed;
L_005bdfdb:; BB(0x005bdfdb);
    /* 005bdfdb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdfde: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005bdfe1: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005bdfe4: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bdfe7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bdfea: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
L_005bdfed:; BB(0x005bdfed);
    /* 005bdfed: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005bdff0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005bdff3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005bdffa: jmp 0x5be005 */ goto L_005be005;
L_005bdffc:; BB(0x005bdffc);
    /* 005bdffc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005bdfff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005be002: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005be005:; BB(0x005be005);
    /* 005be005: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be008: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be00b: jge 0x5be0b7 */ if ((fS==fO)) goto L_005be0b7;
L_005be011:; BB(0x005be011);
    /* 005be011: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005be014: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be017: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005be01a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005be01d: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be021: jne 0x5be02c */ if (!fZ) goto L_005be02c;
L_005be023:; BB(0x005be023);
    /* 005be023: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005be02a: jmp 0x5be03e */ goto L_005be03e;
L_005be02c:; BB(0x005be02c);
    /* 005be02c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005be02f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005be032: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005be035: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005be038: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005be03b: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_005be03e:; BB(0x005be03e);
    /* 005be03e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be041: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be044: jb 0x5be04c */ if (fC) goto L_005be04c;
L_005be046:; BB(0x005be046);
    /* 005be046: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5be04cu); call_ind(t); }
L_005be04c:; BB(0x005be04c);
    /* 005be04c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005be04f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005be052: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be055: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be059: je 0x5be0b2 */ if (fZ) goto L_005be0b2;
L_005be05b:; BB(0x005be05b);
    /* 005be05b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005be05e: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be061: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005be064: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be067: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be06b: jne 0x5be076 */ if (!fZ) goto L_005be076;
L_005be06d:; BB(0x005be06d);
    /* 005be06d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005be074: jmp 0x5be088 */ goto L_005be088;
L_005be076:; BB(0x005be076);
    /* 005be076: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be079: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be07c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005be07f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005be082: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005be085: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_005be088:; BB(0x005be088);
    /* 005be088: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be08b: cmp edx, dword ptr [ebp - 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be08e: jb 0x5be096 */ if (fC) goto L_005be096;
L_005be090:; BB(0x005be090);
    /* 005be090: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5be096u); call_ind(t); }
L_005be096:; BB(0x005be096);
    /* 005be096: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be099: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005be09c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be09f: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005be0a2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005be0a5: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005be0a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005be0aa: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005be0ad: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005be0b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5be0b2u); call_ind(t); }
L_005be0b2:; BB(0x005be0b2);
    /* 005be0b2: jmp 0x5bdffc */ goto L_005bdffc;
L_005be0b7:; BB(0x005be0b7);
    /* 005be0b7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005be0b9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005be0bc: call 0x5bceb0 */ r_esp -= 4; W32(r_esp, 0x5be0c1u); f_005bceb0();
    /* 005be0c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005be0c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be0c4: ret  */ FN_RET(0x005bdec0); r_esp += 4; return;
}

void f_005be0d0(void) /* MLVSlotDisplay_Blossom::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be0d0);
    /* 005be0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005be0d3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be0d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005be0d9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be0dc: call 0x5c1b10 */ r_esp -= 4; W32(r_esp, 0x5be0e1u); f_005c1b10();
    /* 005be0e1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be0e4: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be0e7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005be0ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be0ed: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be0f1: jne 0x5be0fc */ if (!fZ) goto L_005be0fc;
L_005be0f3:; BB(0x005be0f3);
    /* 005be0f3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005be0fa: jmp 0x5be10e */ goto L_005be10e;
L_005be0fc:; BB(0x005be0fc);
    /* 005be0fc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be0ff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be102: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005be105: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005be108: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005be10b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_005be10e:; BB(0x005be10e);
    /* 005be10e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005be111: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005be114: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005be11b: jmp 0x5be126 */ goto L_005be126;
L_005be11d:; BB(0x005be11d);
    /* 005be11d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be120: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be123: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005be126:; BB(0x005be126);
    /* 005be126: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be129: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be12c: jge 0x5be1d8 */ if ((fS==fO)) goto L_005be1d8;
L_005be132:; BB(0x005be132);
    /* 005be132: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be135: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be138: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005be13b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be13e: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be142: jne 0x5be14d */ if (!fZ) goto L_005be14d;
L_005be144:; BB(0x005be144);
    /* 005be144: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005be14b: jmp 0x5be15f */ goto L_005be15f;
L_005be14d:; BB(0x005be14d);
    /* 005be14d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be150: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be153: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005be156: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005be159: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005be15c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005be15f:; BB(0x005be15f);
    /* 005be15f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be162: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be165: jb 0x5be16d */ if (fC) goto L_005be16d;
L_005be167:; BB(0x005be167);
    /* 005be167: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5be16du); call_ind(t); }
L_005be16d:; BB(0x005be16d);
    /* 005be16d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be170: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005be173: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be176: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be17a: je 0x5be1d3 */ if (fZ) goto L_005be1d3;
L_005be17c:; BB(0x005be17c);
    /* 005be17c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be17f: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be182: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005be185: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005be188: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be18c: jne 0x5be197 */ if (!fZ) goto L_005be197;
L_005be18e:; BB(0x005be18e);
    /* 005be18e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005be195: jmp 0x5be1a9 */ goto L_005be1a9;
L_005be197:; BB(0x005be197);
    /* 005be197: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005be19a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005be19d: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005be1a0: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005be1a3: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005be1a6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_005be1a9:; BB(0x005be1a9);
    /* 005be1a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be1ac: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be1af: jb 0x5be1b7 */ if (fC) goto L_005be1b7;
L_005be1b1:; BB(0x005be1b1);
    /* 005be1b1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5be1b7u); call_ind(t); }
L_005be1b7:; BB(0x005be1b7);
    /* 005be1b7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005be1ba: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005be1bd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be1c0: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005be1c3: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005be1c6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005be1c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005be1cb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005be1ce: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005be1d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5be1d3u); call_ind(t); }
L_005be1d3:; BB(0x005be1d3);
    /* 005be1d3: jmp 0x5be11d */ goto L_005be11d;
L_005be1d8:; BB(0x005be1d8);
    /* 005be1d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be1da: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be1dd: call 0x5bceb0 */ r_esp -= 4; W32(r_esp, 0x5be1e2u); f_005bceb0();
    /* 005be1e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005be1e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be1e5: ret  */ FN_RET(0x005be0d0); r_esp += 4; return;
}

void f_005be1f0(void) /* MLVSlotDisplay_Blossom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be1f0);
    /* 005be1f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be1f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005be1f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be1f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be1f7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005be1f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be1fc: call 0x5bceb0 */ r_esp -= 4; W32(r_esp, 0x5be201u); f_005bceb0();
    /* 005be201: mov esp, ebp */ r_esp = r_ebp;
    /* 005be203: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be204: ret  */ FN_RET(0x005be1f0); r_esp += 4; return;
}

void f_005be210(void) /* MLVSlotDisplay_Blossom::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be210);
    /* 005be210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be211: mov ebp, esp */ r_ebp = r_esp;
    /* 005be213: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be216: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be219: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be21c: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005be21f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005be222: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be226: jle 0x5be234 */ if ((fZ||fS!=fO)) goto L_005be234;
L_005be228:; BB(0x005be228);
    /* 005be228: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be22c: jle 0x5be230 */ if ((fZ||fS!=fO)) goto L_005be230;
L_005be22e:; BB(0x005be22e);
    /* 005be22e: jmp 0x5be234 */ goto L_005be234;
L_005be230:; BB(0x005be230);
    /* 005be230: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005be232: jmp 0x5be236 */ goto L_005be236;
L_005be234:; BB(0x005be234);
    /* 005be234: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005be236:; BB(0x005be236);
    /* 005be236: mov esp, ebp */ r_esp = r_ebp;
    /* 005be238: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be239: ret  */ FN_RET(0x005be210); r_esp += 4; return;
}

void f_005be240(void) /* MLVSlotDisplay_Blossom::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be240);
    /* 005be240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be241: mov ebp, esp */ r_ebp = r_esp;
    /* 005be243: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be246: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be249: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be24c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005be24e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be251: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005be254: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5be256u); call_ind(t); }
    /* 005be256: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005be259: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be25b: je 0x5be261 */ if (fZ) goto L_005be261;
L_005be25d:; BB(0x005be25d);
    /* 005be25d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005be25f: jmp 0x5be284 */ goto L_005be284;
L_005be261:; BB(0x005be261);
    /* 005be261: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be264: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005be267: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005be26a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be26e: je 0x5be27e */ if (fZ) goto L_005be27e;
L_005be270:; BB(0x005be270);
    /* 005be270: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be274: jle 0x5be282 */ if ((fZ||fS!=fO)) goto L_005be282;
L_005be276:; BB(0x005be276);
    /* 005be276: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be27a: jle 0x5be27e */ if ((fZ||fS!=fO)) goto L_005be27e;
L_005be27c:; BB(0x005be27c);
    /* 005be27c: jmp 0x5be282 */ goto L_005be282;
L_005be27e:; BB(0x005be27e);
    /* 005be27e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005be280: jmp 0x5be284 */ goto L_005be284;
L_005be282:; BB(0x005be282);
    /* 005be282: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005be284:; BB(0x005be284);
    /* 005be284: mov esp, ebp */ r_esp = r_ebp;
    /* 005be286: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be287: ret  */ FN_RET(0x005be240); r_esp += 4; return;
}

void f_005be290(void) /* MLVSlotDisplay_Blossom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be290);
    /* 005be290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be291: mov ebp, esp */ r_ebp = r_esp;
    /* 005be293: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be296: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be299: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be29c: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be2a0: je 0x5be2b4 */ if (fZ) goto L_005be2b4;
L_005be2a2:; BB(0x005be2a2);
    /* 005be2a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be2a5: cmp dword ptr [ecx + 0x54], 4 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be2a9: je 0x5be2b4 */ if (fZ) goto L_005be2b4;
L_005be2ab:; BB(0x005be2ab);
    /* 005be2ab: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005be2b2: jmp 0x5be2bb */ goto L_005be2bb;
L_005be2b4:; BB(0x005be2b4);
    /* 005be2b4: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005be2bb:; BB(0x005be2bb);
    /* 005be2bb: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005be2be: mov esp, ebp */ r_esp = r_ebp;
    /* 005be2c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be2c1: ret  */ FN_RET(0x005be290); r_esp += 4; return;
}

void f_005be2d0(void) /* MLVSlotDisplay_Blossom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be2d0);
    /* 005be2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005be2d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be2d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be2d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be2da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005be2dc: cmp dword ptr [eax + 0x54], 5 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be2e0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005be2e3: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005be2e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005be2e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be2e8: ret  */ FN_RET(0x005be2d0); r_esp += 4; return;
}

void f_005c1b30(void) /* MLVSlotDisplay_Blossom::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c1b30);
    /* 005c1b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b31: mov ebp, esp */ r_ebp = r_esp;
    /* 005c1b33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c1b37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b3a: call 0x5c1b60 */ r_esp -= 4; W32(r_esp, 0x5c1b3fu); f_005c1b60();
    /* 005c1b3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c1b41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b44: call 0x5c1d60 */ r_esp -= 4; W32(r_esp, 0x5c1b49u); f_005c1d60();
    /* 005c1b49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c1b4c: call 0x5c1ed0 */ r_esp -= 4; W32(r_esp, 0x5c1b51u); f_005c1ed0();
    /* 005c1b51: mov esp, ebp */ r_esp = r_ebp;
    /* 005c1b53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c1b54: ret  */ FN_RET(0x005c1b30); r_esp += 4; return;
}

void f_005c2000(void) /* MLVSlotDisplay_Blossom::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c2000);
    /* 005c2000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2001: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2005: push 0x6a855f */ { u32 v = 0x6a855fu; r_esp -= 4; W32(r_esp, v); }
    /* 005c200a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2011: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2014: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c2019: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c201b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c201c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c201f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c2025: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c2028: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c202b: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c202f: jne 0x5c20ee */ if (!fZ) goto L_005c20ee;
L_005c2035:; BB(0x005c2035);
    /* 005c2035: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005c203a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c203fu); f_00686d82();
    /* 005c203f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2042: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c2045: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c204c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2050: je 0x5c205f */ if (fZ) goto L_005c205f;
L_005c2052:; BB(0x005c2052);
    /* 005c2052: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2055: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5c205au); f_005f5bf0();
    /* 005c205a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c205d: jmp 0x5c2066 */ goto L_005c2066;
L_005c205f:; BB(0x005c205f);
    /* 005c205f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005c2066:; BB(0x005c2066);
    /* 005c2066: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2069: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c206c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c2073: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2076: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2079: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 005c207c: push 0x15f97 */ { u32 v = 0x15f97u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2081: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2084: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 005c2087: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5c208cu); f_005eaf00();
    /* 005c208c: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005c208e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2091: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005c2094: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2097: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 005c209a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c209c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005c209f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c20a1u); call_ind(t); }
    /* 005c20a1: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c20a3: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005c20a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20a8: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005c20ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20ae: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c20b1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c20b3: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005c20b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c20b8u); call_ind(t); }
    /* 005c20b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20bb: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005c20be: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20c1: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c20c4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c20c6: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005c20c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c20cbu); call_ind(t); }
    /* 005c20cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20ce: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005c20d1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20d4: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c20d7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c20d9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c20dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c20deu); call_ind(t); }
    /* 005c20de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20e1: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005c20e4: mov dword ptr [edx + 0x178], 4 */ W32((u32)(r_edx+0x178u), 0x4u);
L_005c20ee:; BB(0x005c20ee);
    /* 005c20ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c20f0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20f3: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c20f6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c20f9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005c20fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c20fe: mov ecx, eax */ r_ecx = r_eax;
    /* 005c2100: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005c2106: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c2108u); call_ind(t); }
    /* 005c2108: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c210b: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005c210e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2111: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c2114: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005c2116: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c2119: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c211bu); call_ind(t); }
    /* 005c211b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005c211d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c2122u); f_00686d82();
    /* 005c2122: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2125: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c2128: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c212f: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2133: je 0x5c2144 */ if (fZ) goto L_005c2144;
L_005c2135:; BB(0x005c2135);
    /* 005c2135: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2137: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c213a: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5c213fu); f_006010a0();
    /* 005c213f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c2142: jmp 0x5c214b */ goto L_005c214b;
L_005c2144:; BB(0x005c2144);
    /* 005c2144: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005c214b:; BB(0x005c214b);
    /* 005c214b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c214e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c2151: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c2158: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c215b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c215c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c215f: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005c2162: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5c2167u); f_005f5d50();
    /* 005c2167: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2169: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c216c: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005c216f: mov ecx, dword ptr [edx + 0x180] */ r_ecx = R32((u32)(r_edx+0x180u));
    /* 005c2175: call 0x600520 */ r_esp -= 4; W32(r_esp, 0x5c217au); f_00600520();
    /* 005c217a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c217c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c217d: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005c2183: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c2186: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2187: fld1  */ FPUSH(1.0);
    /* 005c2189: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c218c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c218e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2190: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2192: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2194: push 0x18a96 */ { u32 v = 0x18a96u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2199: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005c219e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c21a0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005c21a6: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005c21ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c21aeu); call_ind(t); }
    /* 005c21ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c21b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c21b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c21b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005c21bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c21bc: ret  */ FN_RET(0x005c2000); r_esp += 4; return;
}

