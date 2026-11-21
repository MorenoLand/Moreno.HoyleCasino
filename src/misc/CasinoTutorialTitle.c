#include "protos.h"

void f_0057c260(void) /* CasinoTutorialTitle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c260);
    /* 0057c260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c261: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057c267: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c26a: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x57c26fu); f_005ec5a0();
    /* 0057c26f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c272: mov dword ptr [eax], 0x6cbcbc */ W32((u32)(r_eax), 0x6cbcbcu);
    /* 0057c278: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c27b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057c27e: mov dword ptr [ecx + 0x1d0], edx */ W32((u32)(r_ecx+0x1d0u), r_edx);
    /* 0057c284: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c287: mov dword ptr [eax + 0x1d4], 0 */ W32((u32)(r_eax+0x1d4u), 0x0u);
    /* 0057c291: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c294: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c296: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c297: ret 4 */ FN_RET(0x0057c260); r_esp += 8; return;
}

void f_0057c2a0(void) /* CasinoTutorialTitle::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c2a0);
    /* 0057c2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c2a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c2a5: push 0x6a676a */ { u32 v = 0x6a676au; r_esp -= 4; W32(r_esp, v); }
    /* 0057c2aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057c2b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c2b1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057c2b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057c2b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c2bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c2bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057c2bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057c2c5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057c2c8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c2cb: mov dword ptr [eax], 0x6cbcbc */ W32((u32)(r_eax), 0x6cbcbcu);
    /* 0057c2d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057c2d8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c2db: cmp dword ptr [ecx + 0x1d4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c2e2: je 0x57c323 */ if (fZ) goto L_0057c323;
L_0057c2e4:; BB(0x0057c2e4);
    /* 0057c2e4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c2e7: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 0057c2ed: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057c2f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057c2f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0057c2f6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c2fa: je 0x57c30f */ if (fZ) goto L_0057c30f;
L_0057c2fc:; BB(0x0057c2fc);
    /* 0057c2fc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c2fe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c301: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057c303: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c306: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057c308: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57c30au); call_ind(t); }
    /* 0057c30a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057c30d: jmp 0x57c316 */ goto L_0057c316;
L_0057c30f:; BB(0x0057c30f);
    /* 0057c30f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0057c316:; BB(0x0057c316);
    /* 0057c316: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c319: mov dword ptr [eax + 0x1d4], 0 */ W32((u32)(r_eax+0x1d4u), 0x0u);
L_0057c323:; BB(0x0057c323);
    /* 0057c323: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057c32a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c32d: call 0x5ec760 */ r_esp -= 4; W32(r_esp, 0x57c332u); f_005ec760();
    /* 0057c332: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057c335: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057c33c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c33d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c33f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c340: ret  */ FN_RET(0x0057c2a0); r_esp += 4; return;
}

void f_0057c350(void) /* CasinoTutorialTitle::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c350);
    /* 0057c350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c351: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c353: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c355: push 0x6a6790 */ { u32 v = 0x6a6790u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c35a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057c360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c361: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057c364: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057c369: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057c36b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c36c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057c36f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057c375: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057c378: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c37b: call 0x5ef3e0 */ r_esp -= 4; W32(r_esp, 0x57c380u); f_005ef3e0();
    /* 0057c380: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c383: cmp dword ptr [eax + 0x1d4], 0 */ {  u32 a = R32((u32)(r_eax+0x1d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c38a: jne 0x57c3d6 */ if (!fZ) goto L_0057c3d6;
L_0057c38c:; BB(0x0057c38c);
    /* 0057c38c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0057c391: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57c396u); f_00686d82();
    /* 0057c396: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c399: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057c39c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057c3a3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c3a7: je 0x57c3b6 */ if (fZ) goto L_0057c3b6;
L_0057c3a9:; BB(0x0057c3a9);
    /* 0057c3a9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057c3ac: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x57c3b1u); f_005eaaf0();
    /* 0057c3b1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057c3b4: jmp 0x57c3bd */ goto L_0057c3bd;
L_0057c3b6:; BB(0x0057c3b6);
    /* 0057c3b6: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0057c3bd:; BB(0x0057c3bd);
    /* 0057c3bd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057c3c0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0057c3c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057c3ca: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c3cd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c3d0: mov dword ptr [edx + 0x1d4], eax */ W32((u32)(r_edx+0x1d4u), r_eax);
L_0057c3d6:; BB(0x0057c3d6);
    /* 0057c3d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c3d9: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0057c3df: mov eax, dword ptr [0x793578] */ r_eax = R32((u32)(0x793578u));
    /* 0057c3e4: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0057c3e7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c3ea: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 0057c3f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057c3f3: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0057c3f9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057c3fb: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0057c3fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c400u); call_ind(t); }
    /* 0057c400: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057c403: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057c40a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057c40b: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c40d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c40e: ret  */ FN_RET(0x0057c350); r_esp += 4; return;
}

void f_0057c560(void) /* CasinoTutorialTitle::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057c560);
    /* 0057c560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057c561: mov ebp, esp */ r_ebp = r_esp;
    /* 0057c563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057c567: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c56a: call 0x5f62b0 */ r_esp -= 4; W32(r_esp, 0x57c56fu); f_005f62b0();
    /* 0057c56f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c572: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 0057c578: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057c57b: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 0057c581: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057c583: mov ecx, eax */ r_ecx = r_eax;
    /* 0057c585: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057c588: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57c58au); call_ind(t); }
    /* 0057c58a: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c58c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c58d: ret  */ FN_RET(0x0057c560); r_esp += 4; return;
}

