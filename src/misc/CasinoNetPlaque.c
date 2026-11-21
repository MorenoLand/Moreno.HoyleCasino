#include "protos.h"

void f_005d7580(void) /* CasinoNetPlaque::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7580);
    /* 005d7580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7581: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7587: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d758a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5d758fu); f_005f5bf0();
    /* 005d758f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7592: mov dword ptr [eax], 0x6d3eb4 */ W32((u32)(r_eax), 0x6d3eb4u);
    /* 005d7598: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d759b: mov dword ptr [ecx + 0x184], 0 */ W32((u32)(r_ecx+0x184u), 0x0u);
    /* 005d75a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d75a8: mov dword ptr [edx + 0x188], 0 */ W32((u32)(r_edx+0x188u), 0x0u);
    /* 005d75b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d75b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005d75b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d75b8: ret  */ FN_RET(0x005d7580); r_esp += 4; return;
}

void f_005d75c0(void) /* CasinoNetPlaque::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d75c0);
    /* 005d75c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d75c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d75c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d75c5: push 0x6a90da */ { u32 v = 0x6a90dau; r_esp -= 4; W32(r_esp, v); }
    /* 005d75ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d75d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d75d1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d75d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d75d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d75db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d75dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d75df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d75e5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d75e8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d75eb: mov dword ptr [eax], 0x6d3eb4 */ W32((u32)(r_eax), 0x6d3eb4u);
    /* 005d75f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d75f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d75fb: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 005d7601: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d7604: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d7607: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d760a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d760e: je 0x5d7623 */ if (fZ) goto L_005d7623;
L_005d7610:; BB(0x005d7610);
    /* 005d7610: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7612: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7615: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7617: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d761a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d761c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d761eu); call_ind(t); }
    /* 005d761e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d7621: jmp 0x5d762a */ goto L_005d762a;
L_005d7623:; BB(0x005d7623);
    /* 005d7623: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d762a:; BB(0x005d762a);
    /* 005d762a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d762d: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005d7633: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d7636: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d7639: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d763c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7640: je 0x5d7655 */ if (fZ) goto L_005d7655;
L_005d7642:; BB(0x005d7642);
    /* 005d7642: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7644: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d7647: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7649: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d764c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d764e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7650u); call_ind(t); }
    /* 005d7650: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d7653: jmp 0x5d765c */ goto L_005d765c;
L_005d7655:; BB(0x005d7655);
    /* 005d7655: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d765c:; BB(0x005d765c);
    /* 005d765c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d7663: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7666: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x5d766bu); f_005f5c40();
    /* 005d766b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d766e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d7675: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7676: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7678: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7679: ret  */ FN_RET(0x005d75c0); r_esp += 4; return;
}

void f_005d77d0(void) /* CasinoNetPlaque::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d77d0);
    /* 005d77d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d77d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d77d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d77d5: push 0x6a910b */ { u32 v = 0x6a910bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d77da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d77e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d77e1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d77e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d77e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d77eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d77ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d77ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d77f5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d77f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d77fb: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x5d7800u); f_005f5cc0();
    /* 005d7800: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7803: cmp dword ptr [eax + 0x184], 0 */ {  u32 a = R32((u32)(r_eax+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d780a: jne 0x5d7856 */ if (!fZ) goto L_005d7856;
L_005d780c:; BB(0x005d780c);
    /* 005d780c: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7811: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d7816u); f_00686d82();
    /* 005d7816: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d7819: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d781c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d7823: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d7827: je 0x5d7836 */ if (fZ) goto L_005d7836;
L_005d7829:; BB(0x005d7829);
    /* 005d7829: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d782c: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5d7831u); f_005ec5a0();
    /* 005d7831: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d7834: jmp 0x5d783d */ goto L_005d783d;
L_005d7836:; BB(0x005d7836);
    /* 005d7836: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d783d:; BB(0x005d783d);
    /* 005d783d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d7840: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005d7843: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d784a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d784d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d7850: mov dword ptr [edx + 0x184], eax */ W32((u32)(r_edx+0x184u), r_eax);
L_005d7856:; BB(0x005d7856);
    /* 005d7856: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7858: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005d785a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d785d: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5d7862u); f_005f53c0();
    /* 005d7862: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7866: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7869: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d786b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d786e: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005d7871: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7873u); call_ind(t); }
    /* 005d7873: add eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7877: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d787a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d787c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d787f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d7882: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7884u); call_ind(t); }
    /* 005d7884: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7887: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7888: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d788a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d788d: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5d7892u); f_005f5550();
    /* 005d7892: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d7895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7896: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7898: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d789d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d78a0: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 005d78a6: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5d78abu); f_005ec8f0();
    /* 005d78ab: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d78ae: cmp dword ptr [edx + 0x188], 0 */ {  u32 a = R32((u32)(r_edx+0x188u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d78b5: jne 0x5d7901 */ if (!fZ) goto L_005d7901;
L_005d78b7:; BB(0x005d78b7);
    /* 005d78b7: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d78bc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d78c1u); f_00686d82();
    /* 005d78c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d78c4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d78c7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d78ce: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d78d2: je 0x5d78e1 */ if (fZ) goto L_005d78e1;
L_005d78d4:; BB(0x005d78d4);
    /* 005d78d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d78d7: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5d78dcu); f_005ec5a0();
    /* 005d78dc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d78df: jmp 0x5d78e8 */ goto L_005d78e8;
L_005d78e1:; BB(0x005d78e1);
    /* 005d78e1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d78e8:; BB(0x005d78e8);
    /* 005d78e8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d78eb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d78ee: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d78f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d78f8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d78fb: mov dword ptr [ecx + 0x188], edx */ W32((u32)(r_ecx+0x188u), r_edx);
L_005d7901:; BB(0x005d7901);
    /* 005d7901: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d7903: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7905: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7908: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5d790du); f_005f53c0();
    /* 005d790d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7911: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7914: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d7916: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7919: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005d791c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d791eu); call_ind(t); }
    /* 005d791e: add eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7921: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7922: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7925: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7927: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d792a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d792d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d792fu); call_ind(t); }
    /* 005d792f: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d7932: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7933: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7935: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d7938: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5d793du); f_005f5550();
    /* 005d793d: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d7940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d7941: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7943: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7948: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d794b: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 005d7951: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5d7956u); f_005ec8f0();
    /* 005d7956: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d7959: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d7960: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d7961: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7963: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7964: ret  */ FN_RET(0x005d77d0); r_esp += 4; return;
}

void f_005d7970(void) /* CasinoNetPlaque::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7970);
    /* 005d7970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7971: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7977: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d797a: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 005d7980: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7983: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 005d7989: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d798b: mov ecx, eax */ r_ecx = r_eax;
    /* 005d798d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d7990: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7992u); call_ind(t); }
    /* 005d7992: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7995: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 005d799b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d799e: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 005d79a4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d79a6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d79a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d79abu); call_ind(t); }
    /* 005d79ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d79ae: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x5d79b3u); f_005eb5a0();
    /* 005d79b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005d79b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d79b6: ret  */ FN_RET(0x005d7970); r_esp += 4; return;
}

