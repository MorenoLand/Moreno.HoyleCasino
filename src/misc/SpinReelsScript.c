#include "protos.h"

void f_0052f930(void) /* SpinReelsScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052f930);
    /* 0052f930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052f931: mov ebp, esp */ r_ebp = r_esp;
    /* 0052f933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f935: push 0x6a46e4 */ { u32 v = 0x6a46e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f93a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052f940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f941: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052f944: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052f949: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052f94b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f94c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052f94f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052f955: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0052f958: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f95a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052f95d: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x52f962u); f_005fc0d0();
    /* 0052f962: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052f969: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052f96c: mov dword ptr [eax], 0x6c3d7c */ W32((u32)(r_eax), 0x6c3d7cu);
    /* 0052f972: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052f979: jmp 0x52f984 */ goto L_0052f984;
L_0052f97b:; BB(0x0052f97b);
    /* 0052f97b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052f97e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052f981: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052f984:; BB(0x0052f984);
    /* 0052f984: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052f988: jge 0x52faa8 */ if ((fS==fO)) goto L_0052faa8;
L_0052f98e:; BB(0x0052f98e);
    /* 0052f98e: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f993: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52f998u); f_00686d82();
    /* 0052f998: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052f99b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052f99e: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052f9a2: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052f9a6: je 0x52f9b5 */ if (fZ) goto L_0052f9b5;
L_0052f9a8:; BB(0x0052f9a8);
    /* 0052f9a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052f9ab: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52f9b0u); f_005f5bf0();
    /* 0052f9b0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0052f9b3: jmp 0x52f9bc */ goto L_0052f9bc;
L_0052f9b5:; BB(0x0052f9b5);
    /* 0052f9b5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0052f9bc:; BB(0x0052f9bc);
    /* 0052f9bc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0052f9bf: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0052f9c2: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052f9c6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052f9c9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052f9cc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052f9cf: mov dword ptr [ecx + eax*4 + 0x20], edx */ W32((u32)(r_ecx+r_eax*4+0x20u), r_edx);
    /* 0052f9d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9d5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9d7: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052f9dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052f9de: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052f9e4: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0052f9e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52f9e9u); call_ind(t); }
    /* 0052f9e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9ea: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052f9ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9ee: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 0052f9f4: call 0x52d1a0 */ r_esp -= 4; W32(r_esp, 0x52f9f9u); f_0052d1a0();
    /* 0052f9f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052f9fa: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 0052fa00: call 0x52d180 */ r_esp -= 4; W32(r_esp, 0x52fa05u); f_0052d180();
    /* 0052fa05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa06: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fa09: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052fa0c: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0052fa10: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52fa15u); f_005eae80();
    /* 0052fa15: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa17: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52fa1cu); f_00686d82();
    /* 0052fa1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fa1f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052fa22: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0052fa26: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fa2a: je 0x52fa3b */ if (fZ) goto L_0052fa3b;
L_0052fa2c:; BB(0x0052fa2c);
    /* 0052fa2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052fa31: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x52fa36u); f_00600a70();
    /* 0052fa36: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0052fa39: jmp 0x52fa42 */ goto L_0052fa42;
L_0052fa3b:; BB(0x0052fa3b);
    /* 0052fa3b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0052fa42:; BB(0x0052fa42);
    /* 0052fa42: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052fa45: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052fa48: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052fa4c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fa4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa50: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fa53: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052fa56: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0052fa5a: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52fa5fu); f_005f5d50();
    /* 0052fa5f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fa62: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052fa65: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0052fa69: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x52fa6eu); f_005eb240();
    /* 0052fa6e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052fa71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa72: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52fa77u); f_0062fbf0();
    /* 0052fa77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052fa7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fa7b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fa7e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052fa81: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0052fa85: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fa88: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052fa8b: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0052fa8f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052fa91: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0052fa97: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52fa99u); call_ind(t); }
    /* 0052fa99: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052fa9c: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052fa9f: mov byte ptr [eax + 0x30], 0 */ W8((u32)(r_eax+0x30u), 0x0u);
    /* 0052faa3: jmp 0x52f97b */ goto L_0052f97b;
L_0052faa8:; BB(0x0052faa8);
    /* 0052faa8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052faab: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 0052fab2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052fab9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052fabc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052fabf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052fac6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052fac7: mov esp, ebp */ r_esp = r_ebp;
    /* 0052fac9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052faca: ret  */ FN_RET(0x0052f930); r_esp += 4; return;
}

void f_0052fad0(void) /* SpinReelsScript::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052fad0);
    /* 0052fad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052fad1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052fad3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fad5: push 0x6a4707 */ { u32 v = 0x6a4707u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fada: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052fae0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fae1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052fae4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052fae9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052faeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052faec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052faef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052faf5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052faf8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fafb: mov dword ptr [eax], 0x6c3d7c */ W32((u32)(r_eax), 0x6c3d7cu);
    /* 0052fb01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052fb08: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fb0b: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 0052fb12: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052fb19: jmp 0x52fb24 */ goto L_0052fb24;
L_0052fb1b:; BB(0x0052fb1b);
    /* 0052fb1b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fb1e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052fb21: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0052fb24:; BB(0x0052fb24);
    /* 0052fb24: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052fb28: jge 0x52fb7a */ if ((fS==fO)) goto L_0052fb7a;
L_0052fb2a:; BB(0x0052fb2a);
    /* 0052fb2a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fb2d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fb30: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fb35: je 0x52fb6a */ if (fZ) goto L_0052fb6a;
L_0052fb37:; BB(0x0052fb37);
    /* 0052fb37: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fb3a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fb3d: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 0052fb41: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052fb44: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052fb47: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0052fb4a: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fb4e: je 0x52fb63 */ if (fZ) goto L_0052fb63;
L_0052fb50:; BB(0x0052fb50);
    /* 0052fb50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fb52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052fb55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052fb57: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052fb5a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052fb5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fb5eu); call_ind(t); }
    /* 0052fb5e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052fb61: jmp 0x52fb6a */ goto L_0052fb6a;
L_0052fb63:; BB(0x0052fb63);
    /* 0052fb63: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0052fb6a:; BB(0x0052fb6a);
    /* 0052fb6a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fb6d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fb70: mov dword ptr [edx + ecx*4 + 0x20], 0 */ W32((u32)(r_edx+r_ecx*4+0x20u), 0x0u);
    /* 0052fb78: jmp 0x52fb1b */ goto L_0052fb1b;
L_0052fb7a:; BB(0x0052fb7a);
    /* 0052fb7a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052fb81: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fb84: call 0x5fc150 */ r_esp -= 4; W32(r_esp, 0x52fb89u); f_005fc150();
    /* 0052fb89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052fb8c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052fb93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052fb94: mov esp, ebp */ r_esp = r_ebp;
    /* 0052fb96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052fb97: ret  */ FN_RET(0x0052fad0); r_esp += 4; return;
}

void f_0052fba0(void) /* SpinReelsScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052fba0);
    /* 0052fba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052fba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052fba3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052fba6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052fba9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052fbb0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fbb3: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x52fbb8u); f_005fc360();
    /* 0052fbb8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052fbbb: cmp dword ptr [ebp - 0x20], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0052fbbf: ja 0x53019c */ if ((!fC&&!fZ)) goto L_0053019c;
L_0052fbc5:; BB(0x0052fbc5);
    /* 0052fbc5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052fbc8: jmp dword ptr [eax*4 + 0x5301a0] */ { u32 t = R32((u32)(r_eax*4+0x5301a0u)); switch (t) { case 0x52fbcfu: goto L_0052fbcf; case 0x52fbf0u: goto L_0052fbf0; case 0x52fcc3u: goto L_0052fcc3; case 0x52fce8u: goto L_0052fce8; case 0x52fe2eu: goto L_0052fe2e; case 0x52fe99u: goto L_0052fe99; case 0x52ff3cu: goto L_0052ff3c; case 0x5300b7u: goto L_005300b7; case 0x5300fau: goto L_005300fa; case 0x53016eu: goto L_0053016e; case 0x530181u: goto L_00530181; default: UNSUP(0x0052fbc8, "jump table entry is not a known target"); } }
L_0052fbcf:; BB(0x0052fbcf);
    /* 0052fbcf: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052fbd5: call 0x535ff0 */ r_esp -= 4; W32(r_esp, 0x52fbdau); f_00535ff0();
    /* 0052fbda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fbdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fbde: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fbe1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052fbe3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fbe6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052fbe9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fbebu); call_ind(t); }
    /* 0052fbeb: jmp 0x53019c */ goto L_0053019c;
L_0052fbf0:; BB(0x0052fbf0);
    /* 0052fbf0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052fbf7: jmp 0x52fc02 */ goto L_0052fc02;
L_0052fbf9:; BB(0x0052fbf9);
    /* 0052fbf9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052fbfc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052fbff: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0052fc02:; BB(0x0052fc02);
    /* 0052fc02: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052fc06: jge 0x52fc70 */ if ((fS==fO)) goto L_0052fc70;
L_0052fc08:; BB(0x0052fc08);
    /* 0052fc08: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052fc0b: mov eax, dword ptr [0x793390] */ r_eax = R32((u32)(0x793390u));
    /* 0052fc10: mov ecx, dword ptr [eax + edx*4 + 0xf4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xf4u));
    /* 0052fc17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052fc1a: mov eax, dword ptr [0x793390] */ r_eax = R32((u32)(0x793390u));
    /* 0052fc1f: mov edx, dword ptr [eax + edx*4 + 0xf4] */ r_edx = R32((u32)(r_eax+r_edx*4+0xf4u));
    /* 0052fc26: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052fc28: mov ecx, edx */ r_ecx = r_edx;
    /* 0052fc2a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0052fc2d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52fc2fu); call_ind(t); }
    /* 0052fc2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052fc32: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fc35: cmp dword ptr [ecx + eax*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fc3a: jne 0x52fc53 */ if (!fZ) goto L_0052fc53;
L_0052fc3c:; BB(0x0052fc3c);
    /* 0052fc3c: push 0x55e */ { u32 v = 0x55eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc41: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc46: push 0x6c3db4 */ { u32 v = 0x6c3db4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc4b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x52fc50u); f_005e9f20();
    /* 0052fc50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052fc53:; BB(0x0052fc53);
    /* 0052fc53: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052fc56: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fc59: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0052fc5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052fc60: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fc63: mov ecx, dword ptr [ecx + eax*4 + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0052fc67: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052fc69: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052fc6c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fc6eu); call_ind(t); }
    /* 0052fc6e: jmp 0x52fbf9 */ goto L_0052fbf9;
L_0052fc70:; BB(0x0052fc70);
    /* 0052fc70: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 0052fc76: add ecx, 0x68 */ {  u32 a = r_ecx; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052fc79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc7b: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052fc81: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052fc84: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc85: fld1  */ FPUSH(1.0);
    /* 0052fc87: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052fc8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc8c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc92: push 0x18a92 */ { u32 v = 0x18a92u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fc97: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052fc9d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052fc9f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052fca5: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0052fcab: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52fcadu); call_ind(t); }
    /* 0052fcad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcaf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcb1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fcb4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052fcb6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fcb9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052fcbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fcbeu); call_ind(t); }
    /* 0052fcbe: jmp 0x53019c */ goto L_0053019c;
L_0052fcc3:; BB(0x0052fcc3);
    /* 0052fcc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcc5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052fccb: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x52fcd0u); f_00637810();
    /* 0052fcd0: imul eax, eax, 9 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x9u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052fcd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcd4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fcd6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fcd9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052fcdb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fcde: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052fce1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fce3u); call_ind(t); }
    /* 0052fce3: jmp 0x53019c */ goto L_0053019c;
L_0052fce8:; BB(0x0052fce8);
    /* 0052fce8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fceb: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052fcef: jl 0x52fdaa */ if ((fS!=fO)) goto L_0052fdaa;
L_0052fcf5:; BB(0x0052fcf5);
    /* 0052fcf5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fcf8: cmp dword ptr [edx + 0x2c], 2 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052fcfc: jg 0x52fdaa */ if ((!fZ&&fS==fO)) goto L_0052fdaa;
L_0052fd02:; BB(0x0052fd02);
    /* 0052fd02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd04: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd07: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0052fd0a: mov edx, dword ptr [0x793390] */ r_edx = R32((u32)(0x793390u));
    /* 0052fd10: mov ecx, dword ptr [edx + ecx*4 + 0xf4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xf4u));
    /* 0052fd17: call 0x52f3f0 */ r_esp -= 4; W32(r_esp, 0x52fd1cu); f_0052f3f0();
    /* 0052fd1c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd1f: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0052fd22: mov edx, dword ptr [0x793390] */ r_edx = R32((u32)(0x793390u));
    /* 0052fd28: mov eax, dword ptr [edx + ecx*4 + 0xf4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xf4u));
    /* 0052fd2f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd32: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0052fd35: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 0052fd3b: mov ecx, dword ptr [ecx + edx*4 + 0xf4] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0xf4u));
    /* 0052fd42: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052fd44: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052fd47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fd49u); call_ind(t); }
    /* 0052fd49: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd4c: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0052fd4f: mov eax, dword ptr [0x793390] */ r_eax = R32((u32)(0x793390u));
    /* 0052fd54: mov ecx, dword ptr [eax + edx*4 + 0xf4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xf4u));
    /* 0052fd5b: call 0x52f240 */ r_esp -= 4; W32(r_esp, 0x52fd60u); f_0052f240();
    /* 0052fd60: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd63: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0052fd66: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd69: cmp dword ptr [eax + edx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fd6e: jne 0x52fd87 */ if (!fZ) goto L_0052fd87;
L_0052fd70:; BB(0x0052fd70);
    /* 0052fd70: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd75: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd7a: push 0x6c3d9c */ { u32 v = 0x6c3d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fd7f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x52fd84u); f_005e9f20();
    /* 0052fd84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052fd87:; BB(0x0052fd87);
    /* 0052fd87: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd8a: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0052fd8d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd90: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0052fd94: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd97: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0052fd9a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fd9d: mov ecx, dword ptr [eax + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x20u));
    /* 0052fda1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052fda3: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052fda6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fda8u); call_ind(t); }
    /* 0052fda8: jmp 0x52fdc5 */ goto L_0052fdc5;
L_0052fdaa:; BB(0x0052fdaa);
    /* 0052fdaa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0052fdac: jne 0x52fdc5 */ if (!fZ) goto L_0052fdc5;
L_0052fdae:; BB(0x0052fdae);
    /* 0052fdae: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdb3: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdb8: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdbd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x52fdc2u); f_005e9f20();
    /* 0052fdc2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0052fdc5:; BB(0x0052fdc5);
    /* 0052fdc5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fdc8: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0052fdcb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052fdce: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fdd1: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0052fdd4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fdd7: cmp dword ptr [eax + 0x2c], 3 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052fddb: jl 0x52fe09 */ if ((fS!=fO)) goto L_0052fe09;
L_0052fddd:; BB(0x0052fddd);
    /* 0052fddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fddf: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 0052fde5: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 0052fde8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fde9: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0052fdee: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052fdf1: call 0x609870 */ r_esp -= 4; W32(r_esp, 0x52fdf6u); f_00609870();
    /* 0052fdf6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdf8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdfa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fdfd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052fdff: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fe02: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052fe05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fe07u); call_ind(t); }
    /* 0052fe07: jmp 0x52fe29 */ goto L_0052fe29;
L_0052fe09:; BB(0x0052fe09);
    /* 0052fe09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe0b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052fe11: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x52fe16u); f_00637810();
    /* 0052fe16: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052fe19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe1a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe1c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fe1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052fe21: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fe24: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052fe27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fe29u); call_ind(t); }
L_0052fe29:; BB(0x0052fe29);
    /* 0052fe29: jmp 0x53019c */ goto L_0053019c;
L_0052fe2e:; BB(0x0052fe2e);
    /* 0052fe2e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0052fe35: jmp 0x52fe40 */ goto L_0052fe40;
L_0052fe37:; BB(0x0052fe37);
    /* 0052fe37: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052fe3a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052fe3d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0052fe40:; BB(0x0052fe40);
    /* 0052fe40: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052fe44: jge 0x52fe83 */ if ((fS==fO)) goto L_0052fe83;
L_0052fe46:; BB(0x0052fe46);
    /* 0052fe46: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052fe49: mov eax, dword ptr [0x793390] */ r_eax = R32((u32)(0x793390u));
    /* 0052fe4e: mov ecx, dword ptr [eax + edx*4 + 0xf4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xf4u));
    /* 0052fe55: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe5c: je 0x52fe81 */ if (fZ) goto L_0052fe81;
L_0052fe5e:; BB(0x0052fe5e);
    /* 0052fe5e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe60: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fe63: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052fe65: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fe68: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0052fe6b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52fe6du); call_ind(t); }
    /* 0052fe6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe6f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fe72: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052fe74: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fe77: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0052fe7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fe7cu); call_ind(t); }
    /* 0052fe7c: jmp 0x53019c */ goto L_0053019c;
L_0052fe81:; BB(0x0052fe81);
    /* 0052fe81: jmp 0x52fe37 */ goto L_0052fe37;
L_0052fe83:; BB(0x0052fe83);
    /* 0052fe83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe85: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe87: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fe8a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052fe8c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fe8f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052fe92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52fe94u); call_ind(t); }
    /* 0052fe94: jmp 0x53019c */ goto L_0053019c;
L_0052fe99:; BB(0x0052fe99);
    /* 0052fe99: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0052fea0: jmp 0x52feab */ goto L_0052feab;
L_0052fea2:; BB(0x0052fea2);
    /* 0052fea2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052fea5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052fea8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0052feab:; BB(0x0052feab);
    /* 0052feab: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052feaf: jge 0x52ff1c */ if ((fS==fO)) goto L_0052ff1c;
L_0052feb1:; BB(0x0052feb1);
    /* 0052feb1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052feb4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052feb7: cmp dword ptr [eax + edx*4 + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052febc: je 0x52ff1a */ if (fZ) goto L_0052ff1a;
L_0052febe:; BB(0x0052febe);
    /* 0052febe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052fec1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fec4: mov eax, dword ptr [edx + ecx*4 + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0052fec8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052fecb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fece: mov ecx, dword ptr [edx + ecx*4 + 0x20] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x20u));
    /* 0052fed2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052fed4: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0052fed7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52fed9u); call_ind(t); }
    /* 0052fed9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052fedc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052fedf: mov edx, dword ptr [ecx + eax*4 + 0x20] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 0052fee3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0052fee6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052fee9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0052feec: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fef0: je 0x52ff05 */ if (fZ) goto L_0052ff05;
L_0052fef2:; BB(0x0052fef2);
    /* 0052fef2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052fef4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052fef7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052fef9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052fefc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052fefe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ff00u); call_ind(t); }
    /* 0052ff00: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0052ff03: jmp 0x52ff0c */ goto L_0052ff0c;
L_0052ff05:; BB(0x0052ff05);
    /* 0052ff05: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0052ff0c:; BB(0x0052ff0c);
    /* 0052ff0c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052ff0f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff12: mov dword ptr [edx + ecx*4 + 0x20], 0 */ W32((u32)(r_edx+r_ecx*4+0x20u), 0x0u);
L_0052ff1a:; BB(0x0052ff1a);
    /* 0052ff1a: jmp 0x52fea2 */ goto L_0052fea2;
L_0052ff1c:; BB(0x0052ff1c);
    /* 0052ff1c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff1f: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0052ff26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ff28: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ff2a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff2d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ff2f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff32: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0052ff35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ff37u); call_ind(t); }
    /* 0052ff37: jmp 0x53019c */ goto L_0053019c;
L_0052ff3c:; BB(0x0052ff3c);
    /* 0052ff3c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff3f: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ff43: jl 0x530024 */ if ((fS!=fO)) goto L_00530024;
L_0052ff49:; BB(0x0052ff49);
    /* 0052ff49: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff4c: cmp dword ptr [edx + 0x2c], 2 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ff50: jg 0x530024 */ if ((!fZ&&fS==fO)) goto L_00530024;
L_0052ff56:; BB(0x0052ff56);
    /* 0052ff56: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff59: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0052ff5c: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 0052ff62: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 0052ff66: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0052ff69: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ff6d: jne 0x52ff96 */ if (!fZ) goto L_0052ff96;
L_0052ff6f:; BB(0x0052ff6f);
    /* 0052ff6f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff72: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0052ff75: mov eax, dword ptr [0x793390] */ r_eax = R32((u32)(0x793390u));
    /* 0052ff7a: mov ecx, dword ptr [eax + edx*4 + 0xf4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xf4u));
    /* 0052ff81: call 0x52f360 */ r_esp -= 4; W32(r_esp, 0x52ff86u); f_0052f360();
    /* 0052ff86: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff89: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0052ff8c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff8f: mov byte ptr [eax + edx + 0x30], 1 */ W8((u32)(r_eax+r_edx+0x30u), 0x1u);
    /* 0052ff94: jmp 0x52ffd4 */ goto L_0052ffd4;
L_0052ff96:; BB(0x0052ff96);
    /* 0052ff96: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ff99: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0052ff9c: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052ffa1: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0052ffa5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0052ffa8: cmp dword ptr [ebp - 0x18], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ffac: jne 0x52ffd4 */ if (!fZ) goto L_0052ffd4;
L_0052ffae:; BB(0x0052ffae);
    /* 0052ffae: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ffb1: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0052ffb4: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 0052ffba: mov ecx, dword ptr [ecx + eax*4 + 0xf4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xf4u));
    /* 0052ffc1: call 0x52f2d0 */ r_esp -= 4; W32(r_esp, 0x52ffc6u); f_0052f2d0();
    /* 0052ffc6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ffc9: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0052ffcc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ffcf: mov byte ptr [ecx + eax + 0x30], 1 */ W8((u32)(r_ecx+r_eax+0x30u), 0x1u);
L_0052ffd4:; BB(0x0052ffd4);
    /* 0052ffd4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ffd7: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0052ffda: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ffdd: movzx edx, byte ptr [ecx + eax + 0x30] */ r_edx = (u32)R8((u32)(r_ecx+r_eax+0x30u));
    /* 0052ffe2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ffe4: je 0x530022 */ if (fZ) goto L_00530022;
L_0052ffe6:; BB(0x0052ffe6);
    /* 0052ffe6: mov eax, dword ptr [0x793390] */ r_eax = R32((u32)(0x793390u));
    /* 0052ffeb: add eax, 0x70 */ {  u32 a = r_eax; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052ffee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ffef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fff0: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0052fff6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052fff9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052fffa: fld1  */ FPUSH(1.0);
    /* 0052fffc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052ffff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530001: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00530003: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530005: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530007: push 0x30f0bf */ { u32 v = 0x30f0bfu; r_esp -= 4; W32(r_esp, v); }
    /* 0053000c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00530012: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530014: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0053001a: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00530020: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530022u); call_ind(t); }
L_00530022:; BB(0x00530022);
    /* 00530022: jmp 0x53003f */ goto L_0053003f;
L_00530024:; BB(0x00530024);
    /* 00530024: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00530026: jne 0x53003f */ if (!fZ) goto L_0053003f;
L_00530028:; BB(0x00530028);
    /* 00530028: push 0x5b2 */ { u32 v = 0x5b2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053002d: push 0x6c3b5c */ { u32 v = 0x6c3b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00530032: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 00530037: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x53003cu); f_005e9f20();
    /* 0053003c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053003f:; BB(0x0053003f);
    /* 0053003f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530042: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00530045: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00530048: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053004b: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0053004e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530051: cmp dword ptr [eax + 0x2c], 3 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00530055: jl 0x53006a */ if ((fS!=fO)) goto L_0053006a;
L_00530057:; BB(0x00530057);
    /* 00530057: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00530059: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053005b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053005e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530060: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530063: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00530066: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530068u); call_ind(t); }
    /* 00530068: jmp 0x5300b2 */ goto L_005300b2;
L_0053006a:; BB(0x0053006a);
    /* 0053006a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053006d: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00530070: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530073: movzx ecx, byte ptr [eax + edx + 0x2f] */ r_ecx = (u32)R8((u32)(r_eax+r_edx+0x2fu));
    /* 00530078: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053007a: je 0x5300a1 */ if (fZ) goto L_005300a1;
L_0053007c:; BB(0x0053007c);
    /* 0053007c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053007e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00530084: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x530089u); f_00637810();
    /* 00530089: imul eax, eax, 9 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x9u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053008c: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053008f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00530090: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00530092: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530095: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00530097: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053009a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0053009d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53009fu); call_ind(t); }
    /* 0053009f: jmp 0x5300b2 */ goto L_005300b2;
L_005300a1:; BB(0x005300a1);
    /* 005300a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005300a3: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005300a5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005300a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005300aa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005300ad: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005300b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5300b2u); call_ind(t); }
L_005300b2:; BB(0x005300b2);
    /* 005300b2: jmp 0x53019c */ goto L_0053019c;
L_005300b7:; BB(0x005300b7);
    /* 005300b7: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 005300bd: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 005300c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005300c1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005300c7: call 0x5f45a0 */ r_esp -= 4; W32(r_esp, 0x5300ccu); f_005f45a0();
    /* 005300cc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005300cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005300d1: je 0x5300e4 */ if (fZ) goto L_005300e4;
L_005300d3:; BB(0x005300d3);
    /* 005300d3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005300d5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005300d7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005300da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005300dc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005300df: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005300e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5300e4u); call_ind(t); }
L_005300e4:; BB(0x005300e4);
    /* 005300e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005300e6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005300e8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005300eb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005300ed: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005300f0: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005300f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5300f5u); call_ind(t); }
    /* 005300f5: jmp 0x53019c */ goto L_0053019c;
L_005300fa:; BB(0x005300fa);
    /* 005300fa: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00530101: jmp 0x53010c */ goto L_0053010c;
L_00530103:; BB(0x00530103);
    /* 00530103: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530106: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00530109: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0053010c:; BB(0x0053010c);
    /* 0053010c: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00530110: jge 0x53014c */ if ((fS==fO)) goto L_0053014c;
L_00530112:; BB(0x00530112);
    /* 00530112: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00530115: mov eax, dword ptr [0x793390] */ r_eax = R32((u32)(0x793390u));
    /* 0053011a: mov ecx, dword ptr [eax + edx*4 + 0xf4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xf4u));
    /* 00530121: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00530128: je 0x53014a */ if (fZ) goto L_0053014a;
L_0053012a:; BB(0x0053012a);
    /* 0053012a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053012c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053012f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00530131: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530134: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00530137: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x530139u); call_ind(t); }
    /* 00530139: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053013b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053013e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00530140: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530143: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00530146: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x530148u); call_ind(t); }
    /* 00530148: jmp 0x53019c */ goto L_0053019c;
L_0053014a:; BB(0x0053014a);
    /* 0053014a: jmp 0x530103 */ goto L_00530103;
L_0053014c:; BB(0x0053014c);
    /* 0053014c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053014e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00530154: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x530159u); f_00637810();
    /* 00530159: imul eax, eax, 6 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x6u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053015c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053015d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0053015f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530162: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530164: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530167: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053016a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53016cu); call_ind(t); }
    /* 0053016c: jmp 0x53019c */ goto L_0053019c;
L_0053016e:; BB(0x0053016e);
    /* 0053016e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530170: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00530172: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00530175: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00530177: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053017a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053017d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53017fu); call_ind(t); }
    /* 0053017f: jmp 0x53019c */ goto L_0053019c;
L_00530181:; BB(0x00530181);
    /* 00530181: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530183: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00530189: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0053018c: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x530191u); f_005fc420();
    /* 00530191: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 00530197: call 0x535d80 */ r_esp -= 4; W32(r_esp, 0x53019cu); f_00535d80();
L_0053019c:; BB(0x0053019c);
    /* 0053019c: mov esp, ebp */ r_esp = r_ebp;
    /* 0053019e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053019f: ret  */ FN_RET(0x0052fba0); r_esp += 4; return;
}

