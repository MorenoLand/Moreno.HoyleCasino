#include "protos.h"

void f_0057a790(void) /* CasinoTutorialDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a790);
    /* 0057a790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a791: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057a797: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a799: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a79b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a79e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x57a7a3u); f_005f71f0();
    /* 0057a7a3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a7a6: mov dword ptr [eax], 0x6cbc14 */ W32((u32)(r_eax), 0x6cbc14u);
    /* 0057a7ac: push 0x1810 */ { u32 v = 0x1810u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a7b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a7b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a7b6: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057a7bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057a7bd: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x57a7c2u); f_00686fa2();
    /* 0057a7c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a7c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a7c8: mov byte ptr [edx + 0x1c4], 0 */ W8((u32)(r_edx+0x1c4u), 0x0u);
    /* 0057a7cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a7d2: mov byte ptr [eax + 0x1c5], 0 */ W8((u32)(r_eax+0x1c5u), 0x0u);
    /* 0057a7d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a7dc: mov byte ptr [ecx + 0x1bc], 0 */ W8((u32)(r_ecx+0x1bcu), 0x0u);
    /* 0057a7e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a7e6: mov byte ptr [edx + 0x1bd], 0 */ W8((u32)(r_edx+0x1bdu), 0x0u);
    /* 0057a7ed: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a7f0: mov dword ptr [eax + 0x19d0], 0 */ W32((u32)(r_eax+0x19d0u), 0x0u);
    /* 0057a7fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a7fd: mov dword ptr [ecx + 0x19d4], 0 */ W32((u32)(r_ecx+0x19d4u), 0x0u);
    /* 0057a807: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a80a: mov dword ptr [edx + 0x19d8], 0 */ W32((u32)(r_edx+0x19d8u), 0x0u);
    /* 0057a814: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a817: mov dword ptr [eax + 0x19dc], 0 */ W32((u32)(r_eax+0x19dcu), 0x0u);
    /* 0057a821: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a824: mov dword ptr [ecx + 0x19e0], 0 */ W32((u32)(r_ecx+0x19e0u), 0x0u);
    /* 0057a82e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057a831: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a833: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a834: ret  */ FN_RET(0x0057a790); r_esp += 4; return;
}

void f_0057a840(void) /* CasinoTutorialDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a840);
    /* 0057a840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a841: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a845: push 0x6a66d8 */ { u32 v = 0x6a66d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a84a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057a850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a851: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a854: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057a859: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057a85b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a85c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057a85f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057a865: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057a868: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a86b: mov dword ptr [eax], 0x6cbc14 */ W32((u32)(r_eax), 0x6cbc14u);
    /* 0057a871: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057a878: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a87b: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x57a880u); f_0057ae30();
    /* 0057a880: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a883: cmp dword ptr [ecx + 0x19e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x19e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a88a: je 0x57a8cb */ if (fZ) goto L_0057a8cb;
L_0057a88c:; BB(0x0057a88c);
    /* 0057a88c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a88f: mov eax, dword ptr [edx + 0x19e0] */ r_eax = R32((u32)(r_edx+0x19e0u));
    /* 0057a895: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057a898: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057a89b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0057a89e: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057a8a2: je 0x57a8b7 */ if (fZ) goto L_0057a8b7;
L_0057a8a4:; BB(0x0057a8a4);
    /* 0057a8a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a8a6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057a8a9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057a8ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057a8ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057a8b0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57a8b2u); call_ind(t); }
    /* 0057a8b2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057a8b5: jmp 0x57a8be */ goto L_0057a8be;
L_0057a8b7:; BB(0x0057a8b7);
    /* 0057a8b7: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0057a8be:; BB(0x0057a8be);
    /* 0057a8be: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a8c1: mov dword ptr [eax + 0x19e0], 0 */ W32((u32)(r_eax+0x19e0u), 0x0u);
L_0057a8cb:; BB(0x0057a8cb);
    /* 0057a8cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057a8d2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a8d5: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x57a8dau); f_005f7260();
    /* 0057a8da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057a8dd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057a8e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057a8e5: mov esp, ebp */ r_esp = r_ebp;
    /* 0057a8e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057a8e8: ret  */ FN_RET(0x0057a840); r_esp += 4; return;
}

void f_0057a8f0(void) /* CasinoTutorialDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057a8f0);
    /* 0057a8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057a8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057a8f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a8f5: push 0x6a66fe */ { u32 v = 0x6a66feu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a8fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057a900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a901: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057a904: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057a909: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057a90b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a90c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057a90f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057a915: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0057a918: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a91a: push 0x4cb */ { u32 v = 0x4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a91f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a922: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x57a927u); f_005f83d0();
    /* 0057a927: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a929: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a92b: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a92d: push 0x6cbc84 */ { u32 v = 0x6cbc84u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a932: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57a937u); f_00630f40();
    /* 0057a937: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a93a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a93b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a93e: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x57a943u); f_005f73e0();
    /* 0057a943: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a945: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a947: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a949: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a94e: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a950: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a952: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a954: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a956: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a958: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a95a: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a95c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a95e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a960: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a963: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x57a968u); f_005fa880();
    /* 0057a968: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a96a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a96d: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x57a972u); f_005fb630();
    /* 0057a972: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057a975: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057a978: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057a97a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057a97d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057a980: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57a982u); call_ind(t); }
    /* 0057a982: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a984: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a986: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a988: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a98d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a992: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a997: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a999: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a99b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a99d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a99f: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9a5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a9a8: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x57a9adu); f_005fa880();
    /* 0057a9ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9af: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a9b2: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x57a9b7u); f_005fb630();
    /* 0057a9b7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057a9ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057a9bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057a9bf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057a9c2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057a9c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57a9c7u); call_ind(t); }
    /* 0057a9c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9c9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9cb: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9cd: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9cf: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9d1: push 0x6cbc70 */ { u32 v = 0x6cbc70u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9d6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57a9dbu); f_00630f40();
    /* 0057a9db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057a9de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9df: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9e4: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9e6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9e8: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9f1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a9f4: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x57a9f9u); f_005f9de0();
    /* 0057a9f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057a9fb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057a9fe: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x57aa03u); f_005fb300();
    /* 0057aa03: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057aa06: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057aa09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057aa0b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057aa0e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057aa11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57aa13u); call_ind(t); }
    /* 0057aa13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa15: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa19: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa1b: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa1d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa1f: push 0x6cbc54 */ { u32 v = 0x6cbc54u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa24: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57aa29u); f_00630f40();
    /* 0057aa29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057aa2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa2d: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa32: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa34: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa36: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa3f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057aa42: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x57aa47u); f_005f9ef0();
    /* 0057aa47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa49: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057aa4c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x57aa51u); f_005fb350();
    /* 0057aa51: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057aa54: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057aa57: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057aa59: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057aa5c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057aa5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57aa61u); call_ind(t); }
    /* 0057aa61: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa63: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057aa69: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x57aa6eu); f_005de600();
    /* 0057aa6e: mov ecx, eax */ r_ecx = r_eax;
    /* 0057aa70: call 0x5d5550 */ r_esp -= 4; W32(r_esp, 0x57aa75u); f_005d5550();
    /* 0057aa75: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057aa78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057aa7a: je 0x57aa99 */ if (fZ) goto L_0057aa99;
L_0057aa7c:; BB(0x0057aa7c);
    /* 0057aa7c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa7e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057aa81: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x57aa86u); f_005fb350();
    /* 0057aa86: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0057aa89: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057aa8c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057aa8e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057aa91: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0057aa97: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57aa99u); call_ind(t); }
L_0057aa99:; BB(0x0057aa99);
    /* 0057aa99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aa9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aaa1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aaa3: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aaa8: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aaad: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aaaf: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aab1: push 0x444 */ { u32 v = 0x444u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aab6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aab8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aaba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057aabd: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x57aac2u); f_005f9de0();
    /* 0057aac2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aac4: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aac6: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aacb: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aad0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aad2: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aad4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057aad7: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x57aadcu); f_005f8550();
    /* 0057aadc: sub eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057aadf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057aae0: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0057aae2: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aae7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aae9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aaeb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057aaee: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x57aaf3u); f_005fa5b0();
    /* 0057aaf3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057aaf5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057aaf8: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x57aafdu); f_005fb550();
    /* 0057aafd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0057ab00: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057ab03: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057ab05: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057ab08: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057ab0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ab0du); call_ind(t); }
    /* 0057ab0d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ab10: cmp dword ptr [ecx + 0x19e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x19e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ab17: jne 0x57ab63 */ if (!fZ) goto L_0057ab63;
L_0057ab19:; BB(0x0057ab19);
    /* 0057ab19: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ab1e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57ab23u); f_00686d82();
    /* 0057ab23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ab26: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057ab29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057ab30: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ab34: je 0x57ab43 */ if (fZ) goto L_0057ab43;
L_0057ab36:; BB(0x0057ab36);
    /* 0057ab36: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057ab39: call 0x57c590 */ r_esp -= 4; W32(r_esp, 0x57ab3eu); f_0057c590();
    /* 0057ab3e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057ab41: jmp 0x57ab4a */ goto L_0057ab4a;
L_0057ab43:; BB(0x0057ab43);
    /* 0057ab43: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0057ab4a:; BB(0x0057ab4a);
    /* 0057ab4a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057ab4d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0057ab50: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057ab57: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ab5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ab5d: mov dword ptr [eax + 0x19e0], ecx */ W32((u32)(r_eax+0x19e0u), r_ecx);
L_0057ab63:; BB(0x0057ab63);
    /* 0057ab63: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ab66: mov ecx, dword ptr [edx + 0x19e0] */ r_ecx = R32((u32)(r_edx+0x19e0u));
    /* 0057ab6c: call 0x57c800 */ r_esp -= 4; W32(r_esp, 0x57ab71u); f_0057c800();
    /* 0057ab71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057ab74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057ab7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057ab7c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057ab7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ab7f: ret  */ FN_RET(0x0057a8f0); r_esp += 4; return;
}

void f_0057b0f0(void) /* CasinoTutorialDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057b0f0);
    /* 0057b0f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057b0f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057b0f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057b0f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057b0f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057b0fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057b0ff: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b103: je 0x57b10d */ if (fZ) goto L_0057b10d;
L_0057b105:; BB(0x0057b105);
    /* 0057b105: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b109: je 0x57b11a */ if (fZ) goto L_0057b11a;
L_0057b10b:; BB(0x0057b10b);
    /* 0057b10b: jmp 0x57b151 */ goto L_0057b151;
L_0057b10d:; BB(0x0057b10d);
    /* 0057b10d: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 0057b113: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x57b118u); f_005db240();
    /* 0057b118: jmp 0x57b151 */ goto L_0057b151;
L_0057b11a:; BB(0x0057b11a);
    /* 0057b11a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b11c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b11e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b124: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x57b129u); f_006375b0();
    /* 0057b129: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b12b: call 0x5d5500 */ r_esp -= 4; W32(r_esp, 0x57b130u); f_005d5500();
    /* 0057b130: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b136: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x57b13bu); f_00637610();
    /* 0057b13b: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 0057b141: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b143: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 0057b149: mov eax, dword ptr [edx + 0x2e0] */ r_eax = R32((u32)(r_edx+0x2e0u));
    /* 0057b14f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b151u); call_ind(t); }
L_0057b151:; BB(0x0057b151);
    /* 0057b151: mov esp, ebp */ r_esp = r_ebp;
    /* 0057b153: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057b154: ret 4 */ FN_RET(0x0057b0f0); r_esp += 8; return;
}

void f_0057b160(void) /* CasinoTutorialDialog::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057b160);
    /* 0057b160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057b161: mov ebp, esp */ r_ebp = r_esp;
    /* 0057b163: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057b166: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0057b169: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057b16c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057b16f: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b173: je 0x57b177 */ if (fZ) goto L_0057b177;
L_0057b175:; BB(0x0057b175);
    /* 0057b175: jmp 0x57b1aa */ goto L_0057b1aa;
L_0057b177:; BB(0x0057b177);
    /* 0057b177: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b179: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057b17c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b17d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057b180: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x57b185u); f_005fb350();
    /* 0057b185: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b187: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x57b18cu); f_00600230();
    /* 0057b18c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b18d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b193: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x57b198u); f_006375b0();
    /* 0057b198: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b19a: call 0x5d5590 */ r_esp -= 4; W32(r_esp, 0x57b19fu); f_005d5590();
    /* 0057b19f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b1a5: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x57b1aau); f_00637610();
L_0057b1aa:; BB(0x0057b1aa);
    /* 0057b1aa: mov esp, ebp */ r_esp = r_ebp;
    /* 0057b1ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057b1ad: ret 4 */ FN_RET(0x0057b160); r_esp += 8; return;
}

void f_0057b790(void) /* CasinoTutorialDialog::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057b790);
    /* 0057b790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057b791: mov ebp, esp */ r_ebp = r_esp;
    /* 0057b793: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057b796: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057b799: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057b79c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0057b79f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0057b7a2: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b7a6: je 0x57b7ad */ if (fZ) goto L_0057b7ad;
L_0057b7a8:; BB(0x0057b7a8);
    /* 0057b7a8: jmp 0x57b8ac */ goto L_0057b8ac;
L_0057b7ad:; BB(0x0057b7ad);
    /* 0057b7ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057b7b0: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b7b4: jl 0x57b7e4 */ if ((fS!=fO)) goto L_0057b7e4;
L_0057b7b6:; BB(0x0057b7b6);
    /* 0057b7b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b7b9: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x57b7beu); f_005f8550();
    /* 0057b7be: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b7c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057b7c4: cmp dword ptr [ecx + 8], eax */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b7c7: jg 0x57b7e4 */ if ((!fZ&&fS==fO)) goto L_0057b7e4;
L_0057b7c9:; BB(0x0057b7c9);
    /* 0057b7c9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057b7cc: cmp dword ptr [edx + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b7d0: jl 0x57b7e4 */ if ((fS!=fO)) goto L_0057b7e4;
L_0057b7d2:; BB(0x0057b7d2);
    /* 0057b7d2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057b7d5: cmp dword ptr [eax + 0xc], 0x21 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b7d9: jg 0x57b7e4 */ if ((!fZ&&fS==fO)) goto L_0057b7e4;
L_0057b7db:; BB(0x0057b7db);
    /* 0057b7db: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 0057b7e2: jmp 0x57b7eb */ goto L_0057b7eb;
L_0057b7e4:; BB(0x0057b7e4);
    /* 0057b7e4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0057b7eb:; BB(0x0057b7eb);
    /* 0057b7eb: mov cl, byte ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 0057b7ee: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 0057b7f1: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0057b7f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b7f7: je 0x57b838 */ if (fZ) goto L_0057b838;
L_0057b7f9:; BB(0x0057b7f9);
    /* 0057b7f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057b7fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b7fd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b7ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b802: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x57b807u); f_005fb300();
    /* 0057b807: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b809: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x57b80eu); f_005f56a0();
    /* 0057b80e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057b811: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b813: je 0x57b838 */ if (fZ) goto L_0057b838;
L_0057b815:; BB(0x0057b815);
    /* 0057b815: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b817: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b81a: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x57b81fu); f_005fb300();
    /* 0057b81f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057b822: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057b825: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b826: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b829: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057b82b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b82e: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0057b831: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b833u); call_ind(t); }
    /* 0057b833: jmp 0x57b8b8 */ goto L_0057b8b8;
L_0057b838:; BB(0x0057b838);
    /* 0057b838: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0057b83c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b83e: je 0x57b86b */ if (fZ) goto L_0057b86b;
L_0057b840:; BB(0x0057b840);
    /* 0057b840: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b843: mov ecx, dword ptr [edx + 0x19e0] */ r_ecx = R32((u32)(r_edx+0x19e0u));
    /* 0057b849: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57b84eu); f_0057d3a0();
    /* 0057b84e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b851: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057b857: mov dword ptr [ecx + 0x1b4], 0xffffffff */ W32((u32)(r_ecx+0x1b4u), 0xffffffffu);
    /* 0057b861: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b864: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57b869u); f_0057b1b0();
    /* 0057b869: jmp 0x57b8ac */ goto L_0057b8ac;
L_0057b86b:; BB(0x0057b86b);
    /* 0057b86b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b86e: mov ecx, dword ptr [edx + 0x19e0] */ r_ecx = R32((u32)(r_edx+0x19e0u));
    /* 0057b874: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x57b879u); f_005f8910();
    /* 0057b879: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057b87c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b87e: je 0x57b8ac */ if (fZ) goto L_0057b8ac;
L_0057b880:; BB(0x0057b880);
    /* 0057b880: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b883: mov ecx, dword ptr [ecx + 0x19e0] */ r_ecx = R32((u32)(r_ecx+0x19e0u));
    /* 0057b889: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57b88eu); f_0057d3a0();
    /* 0057b88e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b891: mov eax, dword ptr [edx + 0x19e0] */ r_eax = R32((u32)(r_edx+0x19e0u));
    /* 0057b897: mov ecx, dword ptr [eax + 0x1b4] */ r_ecx = R32((u32)(r_eax+0x1b4u));
    /* 0057b89d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b89e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b8a1: mov ecx, dword ptr [edx + 0x19e0] */ r_ecx = R32((u32)(r_edx+0x19e0u));
    /* 0057b8a7: call 0x57cb70 */ r_esp -= 4; W32(r_esp, 0x57b8acu); f_0057cb70();
L_0057b8ac:; BB(0x0057b8ac);
    /* 0057b8ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057b8af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b8b3: call 0x5f72f0 */ r_esp -= 4; W32(r_esp, 0x57b8b8u); f_005f72f0();
L_0057b8b8:; BB(0x0057b8b8);
    /* 0057b8b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0057b8ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057b8bb: ret 4 */ FN_RET(0x0057b790); r_esp += 8; return;
}

void f_0057b8c0(void) /* CasinoTutorialDialog::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057b8c0);
    /* 0057b8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057b8c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8c5: push 0x6a6747 */ { u32 v = 0x6a6747u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057b8d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8d1: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057b8d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8d6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057b8db: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057b8dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b8de: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057b8e1: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057b8e7: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0057b8ea: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b8ed: call 0x5f8340 */ r_esp -= 4; W32(r_esp, 0x57b8f2u); f_005f8340();
    /* 0057b8f2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b8f5: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x57b8fau); f_005f88f0();
    /* 0057b8fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057b8fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b8ff: je 0x57b906 */ if (fZ) goto L_0057b906;
L_0057b901:; BB(0x0057b901);
    /* 0057b901: jmp 0x57be68 */ goto L_0057be68;
L_0057b906:; BB(0x0057b906);
    /* 0057b906: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b909: mov dl, byte ptr [ecx + 0x1bc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1bcu))) & 0xffu);
    /* 0057b90f: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 0057b912: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b915: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057b91b: mov edx, dword ptr [ecx + 0x1b4] */ r_edx = R32((u32)(r_ecx+0x1b4u));
    /* 0057b921: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0057b924: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b927: call 0x5f8930 */ r_esp -= 4; W32(r_esp, 0x57b92cu); f_005f8930();
    /* 0057b92c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0057b92f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b932: call 0x5f8950 */ r_esp -= 4; W32(r_esp, 0x57b937u); f_005f8950();
    /* 0057b937: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057b93a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b93e: jle 0x57b96f */ if ((fZ||fS!=fO)) goto L_0057b96f;
L_0057b940:; BB(0x0057b940);
    /* 0057b940: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b943: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x57b948u); f_005f8550();
    /* 0057b948: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b94b: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b94e: jg 0x57b96f */ if ((!fZ&&fS==fO)) goto L_0057b96f;
L_0057b950:; BB(0x0057b950);
    /* 0057b950: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b954: jle 0x57b96f */ if ((fZ||fS!=fO)) goto L_0057b96f;
L_0057b956:; BB(0x0057b956);
    /* 0057b956: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b959: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x57b95eu); f_005f8570();
    /* 0057b95e: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b961: cmp dword ptr [ebp - 0x1c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b964: jg 0x57b96f */ if ((!fZ&&fS==fO)) goto L_0057b96f;
L_0057b966:; BB(0x0057b966);
    /* 0057b966: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0057b96d: jmp 0x57b976 */ goto L_0057b976;
L_0057b96f:; BB(0x0057b96f);
    /* 0057b96f: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0057b976:; BB(0x0057b976);
    /* 0057b976: mov al, byte ptr [ebp - 0x50] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb0u))) & 0xffu);
    /* 0057b979: mov byte ptr [ebp - 0x45], al */ W8((u32)(r_ebp+0xffffffbbu), (u8)r_eax);
    /* 0057b97c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b97f: movzx edx, byte ptr [ecx + 0x1bd] */ r_edx = (u32)R8((u32)(r_ecx+0x1bdu));
    /* 0057b986: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b988: je 0x57b9cb */ if (fZ) goto L_0057b9cb;
L_0057b98a:; BB(0x0057b98a);
    /* 0057b98a: movzx eax, byte ptr [ebp - 0x45] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbbu));
    /* 0057b98e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b990: jne 0x57b9b9 */ if (!fZ) goto L_0057b9b9;
L_0057b992:; BB(0x0057b992);
    /* 0057b992: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b995: mov edx, dword ptr [ecx + 0x19e0] */ r_edx = R32((u32)(r_ecx+0x19e0u));
    /* 0057b99b: cmp dword ptr [edx + 0x1b4], -1 */ {  u32 a = R32((u32)(r_edx+0x1b4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b9a2: je 0x57b9cb */ if (fZ) goto L_0057b9cb;
L_0057b9a4:; BB(0x0057b9a4);
    /* 0057b9a4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b9a7: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057b9ad: call 0x57d4b0 */ r_esp -= 4; W32(r_esp, 0x57b9b2u); f_0057d4b0();
    /* 0057b9b2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057b9b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b9b7: je 0x57b9cb */ if (fZ) goto L_0057b9cb;
L_0057b9b9:; BB(0x0057b9b9);
    /* 0057b9b9: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b9bc: mov byte ptr [edx + 0x1bd], 0 */ W8((u32)(r_edx+0x1bdu), 0x0u);
    /* 0057b9c3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b9c6: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57b9cbu); f_0057b1b0();
L_0057b9cb:; BB(0x0057b9cb);
    /* 0057b9cb: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b9ce: movzx ecx, byte ptr [eax + 0x124] */ r_ecx = (u32)R8((u32)(r_eax+0x124u));
    /* 0057b9d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b9d7: je 0x57b9de */ if (fZ) goto L_0057b9de;
L_0057b9d9:; BB(0x0057b9d9);
    /* 0057b9d9: jmp 0x57be68 */ goto L_0057be68;
L_0057b9de:; BB(0x0057b9de);
    /* 0057b9de: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057b9e1: call 0x6101f0 */ r_esp -= 4; W32(r_esp, 0x57b9e6u); f_006101f0();
    /* 0057b9e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057b9ed: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b9f0: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0057b9f3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057b9f6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0057b9f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b9fb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057b9fe: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x57ba03u); f_005fb300();
    /* 0057ba03: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0057ba06: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057ba09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ba0a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0057ba0d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057ba0f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0057ba12: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0057ba18: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57ba1au); call_ind(t); }
    /* 0057ba1a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057ba1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ba1f: je 0x57bb12 */ if (fZ) goto L_0057bb12;
L_0057ba25:; BB(0x0057ba25);
    /* 0057ba25: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057ba28: movzx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 0057ba2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ba31: je 0x57bb12 */ if (fZ) goto L_0057bb12;
L_0057ba37:; BB(0x0057ba37);
    /* 0057ba37: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057ba3a: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057ba40: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057ba43: mov eax, dword ptr [edx + 0x19d4] */ r_eax = R32((u32)(r_edx+0x19d4u));
    /* 0057ba49: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057ba4c: cmp dword ptr [ecx + 0x1b4], eax */ {  u32 a = R32((u32)(r_ecx+0x1b4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ba52: je 0x57bafe */ if (fZ) goto L_0057bafe;
L_0057ba58:; BB(0x0057ba58);
    /* 0057ba58: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057ba5b: mov ecx, dword ptr [ecx + 0x19e0] */ r_ecx = R32((u32)(r_ecx+0x19e0u));
    /* 0057ba61: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57ba66u); f_0057d3a0();
    /* 0057ba66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ba68: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057ba6b: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x57ba70u); f_005fb300();
    /* 0057ba70: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0057ba73: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0057ba76: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057ba78: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0057ba7b: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0057ba7e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57ba80u); call_ind(t); }
    /* 0057ba80: mov esi, eax */ r_esi = r_eax;
    /* 0057ba82: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057ba85: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x57ba8au); f_005f84f0();
    /* 0057ba8a: lea eax, [eax + esi - 4] */ r_eax = (u32)(r_eax+r_esi+0xfffffffcu);
    /* 0057ba8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ba8f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057ba92: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057ba98: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0057ba9a: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x57ba9fu); f_005f5550();
    /* 0057ba9f: mov esi, eax */ r_esi = r_eax;
    /* 0057baa1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057baa4: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057baaa: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0057baac: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057baaf: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057bab5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057bab7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057bab9: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0057babc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57babeu); call_ind(t); }
    /* 0057babe: mov edi, eax */ r_edi = r_eax;
    /* 0057bac0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bac3: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x57bac8u); f_005f84d0();
    /* 0057bac8: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057baca: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057bacc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057bacd: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bad0: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057bad6: call 0x5f8420 */ r_esp -= 4; W32(r_esp, 0x57badbu); f_005f8420();
    /* 0057badb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bade: mov edx, dword ptr [ecx + 0x19d4] */ r_edx = R32((u32)(r_ecx+0x19d4u));
    /* 0057bae4: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057bae7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bae8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057baeb: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057baf1: call 0x57cb70 */ r_esp -= 4; W32(r_esp, 0x57baf6u); f_0057cb70();
    /* 0057baf6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057baf9: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57bafeu); f_0057b1b0();
L_0057bafe:; BB(0x0057bafe);
    /* 0057bafe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057bb05: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057bb08: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x57bb0du); f_00610250();
    /* 0057bb0d: jmp 0x57be68 */ goto L_0057be68;
L_0057bb12:; BB(0x0057bb12);
    /* 0057bb12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb14: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bb17: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x57bb1cu); f_005fb350();
    /* 0057bb1c: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0057bb1f: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057bb22: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb23: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0057bb26: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057bb28: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0057bb2b: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 0057bb31: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57bb33u); call_ind(t); }
    /* 0057bb33: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0057bb36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bb38: je 0x57bc2b */ if (fZ) goto L_0057bc2b;
L_0057bb3e:; BB(0x0057bb3e);
    /* 0057bb3e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bb41: movzx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 0057bb48: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bb4a: je 0x57bc2b */ if (fZ) goto L_0057bc2b;
L_0057bb50:; BB(0x0057bb50);
    /* 0057bb50: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bb53: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057bb59: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bb5c: mov eax, dword ptr [edx + 0x19d4] */ r_eax = R32((u32)(r_edx+0x19d4u));
    /* 0057bb62: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057bb65: cmp dword ptr [ecx + 0x1b4], eax */ {  u32 a = R32((u32)(r_ecx+0x1b4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bb6b: je 0x57bc17 */ if (fZ) goto L_0057bc17;
L_0057bb71:; BB(0x0057bb71);
    /* 0057bb71: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bb74: mov ecx, dword ptr [ecx + 0x19e0] */ r_ecx = R32((u32)(r_ecx+0x19e0u));
    /* 0057bb7a: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57bb7fu); f_0057d3a0();
    /* 0057bb7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057bb81: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bb84: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x57bb89u); f_005fb350();
    /* 0057bb89: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0057bb8c: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0057bb8f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057bb91: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0057bb94: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0057bb97: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57bb99u); call_ind(t); }
    /* 0057bb99: mov esi, eax */ r_esi = r_eax;
    /* 0057bb9b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bb9e: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x57bba3u); f_005f84f0();
    /* 0057bba3: lea eax, [eax + esi - 4] */ r_eax = (u32)(r_eax+r_esi+0xfffffffcu);
    /* 0057bba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057bba8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bbab: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057bbb1: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0057bbb3: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x57bbb8u); f_005f5550();
    /* 0057bbb8: mov esi, eax */ r_esi = r_eax;
    /* 0057bbba: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bbbd: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057bbc3: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0057bbc5: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bbc8: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057bbce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057bbd0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057bbd2: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0057bbd5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57bbd7u); call_ind(t); }
    /* 0057bbd7: mov edi, eax */ r_edi = r_eax;
    /* 0057bbd9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bbdc: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x57bbe1u); f_005f84d0();
    /* 0057bbe1: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057bbe3: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057bbe5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057bbe6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bbe9: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057bbef: call 0x5f8420 */ r_esp -= 4; W32(r_esp, 0x57bbf4u); f_005f8420();
    /* 0057bbf4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bbf7: mov edx, dword ptr [ecx + 0x19d4] */ r_edx = R32((u32)(r_ecx+0x19d4u));
    /* 0057bbfd: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057bc00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bc01: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bc04: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057bc0a: call 0x57cb70 */ r_esp -= 4; W32(r_esp, 0x57bc0fu); f_0057cb70();
    /* 0057bc0f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bc12: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57bc17u); f_0057b1b0();
L_0057bc17:; BB(0x0057bc17);
    /* 0057bc17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057bc1e: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057bc21: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x57bc26u); f_00610250();
    /* 0057bc26: jmp 0x57be68 */ goto L_0057be68;
L_0057bc2b:; BB(0x0057bc2b);
    /* 0057bc2b: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0057bc32: jmp 0x57bc3d */ goto L_0057bc3d;
L_0057bc34:; BB(0x0057bc34);
    /* 0057bc34: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bc37: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057bc3a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0057bc3d:; BB(0x0057bc3d);
    /* 0057bc3d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bc40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bc43: cmp eax, dword ptr [edx + 0x19d4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x19d4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057bc49: jge 0x57bd7b */ if ((fS==fO)) goto L_0057bd7b;
L_0057bc4f:; BB(0x0057bc4f);
    /* 0057bc4f: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057bc52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bc53: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bc56: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057bc5c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bc5f: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0057bc62: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bc65: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057bc6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bc6e: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0057bc71: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057bc73: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0057bc79: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57bc7bu); call_ind(t); }
    /* 0057bc7b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057bc7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bc80: je 0x57bd76 */ if (fZ) goto L_0057bd76;
L_0057bc86:; BB(0x0057bc86);
    /* 0057bc86: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bc89: movzx eax, byte ptr [edx + 0x1bc] */ r_eax = (u32)R8((u32)(r_edx+0x1bcu));
    /* 0057bc90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bc92: je 0x57bd76 */ if (fZ) goto L_0057bd76;
L_0057bc98:; BB(0x0057bc98);
    /* 0057bc98: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bc9b: mov edx, dword ptr [ecx + 0x19e0] */ r_edx = R32((u32)(r_ecx+0x19e0u));
    /* 0057bca1: mov eax, dword ptr [edx + 0x1b4] */ r_eax = R32((u32)(r_edx+0x1b4u));
    /* 0057bca7: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bcaa: je 0x57bd62 */ if (fZ) goto L_0057bd62;
L_0057bcb0:; BB(0x0057bcb0);
    /* 0057bcb0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bcb3: mov ecx, dword ptr [ecx + 0x19e0] */ r_ecx = R32((u32)(r_ecx+0x19e0u));
    /* 0057bcb9: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57bcbeu); f_0057d3a0();
    /* 0057bcbe: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bcc1: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x57bcc6u); f_005f84f0();
    /* 0057bcc6: mov esi, eax */ r_esi = r_eax;
    /* 0057bcc8: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bccb: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057bcd1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bcd4: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0057bcd7: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bcda: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057bce0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bce3: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0057bce6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057bce8: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0057bceb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57bcedu); call_ind(t); }
    /* 0057bced: lea ecx, [esi + eax - 4] */ r_ecx = (u32)(r_esi+r_eax+0xfffffffcu);
    /* 0057bcf1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bcf2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bcf5: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x57bcfau); f_005f84d0();
    /* 0057bcfa: mov esi, eax */ r_esi = r_eax;
    /* 0057bcfc: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bcff: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057bd05: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bd08: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0057bd0b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bd0e: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057bd14: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bd17: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0057bd1a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057bd1c: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0057bd1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57bd21u); call_ind(t); }
    /* 0057bd21: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057bd23: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bd26: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057bd2c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bd2f: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0057bd32: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x57bd37u); f_005f5550();
    /* 0057bd37: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057bd39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057bd3a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bd3d: mov ecx, dword ptr [ecx + 0x19e0] */ r_ecx = R32((u32)(r_ecx+0x19e0u));
    /* 0057bd43: call 0x5f8420 */ r_esp -= 4; W32(r_esp, 0x57bd48u); f_005f8420();
    /* 0057bd48: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bd4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bd4c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bd4f: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057bd55: call 0x57cb70 */ r_esp -= 4; W32(r_esp, 0x57bd5au); f_0057cb70();
    /* 0057bd5a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bd5d: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57bd62u); f_0057b1b0();
L_0057bd62:; BB(0x0057bd62);
    /* 0057bd62: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057bd69: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057bd6c: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x57bd71u); f_00610250();
    /* 0057bd71: jmp 0x57be68 */ goto L_0057be68;
L_0057bd76:; BB(0x0057bd76);
    /* 0057bd76: jmp 0x57bc34 */ goto L_0057bc34;
L_0057bd7b:; BB(0x0057bd7b);
    /* 0057bd7b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bd7e: movzx edx, byte ptr [ecx + 0x1bd] */ r_edx = (u32)R8((u32)(r_ecx+0x1bdu));
    /* 0057bd85: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bd87: je 0x57bd9d */ if (fZ) goto L_0057bd9d;
L_0057bd89:; BB(0x0057bd89);
    /* 0057bd89: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057bd90: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057bd93: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x57bd98u); f_00610250();
    /* 0057bd98: jmp 0x57be68 */ goto L_0057be68;
L_0057bd9d:; BB(0x0057bd9d);
    /* 0057bd9d: movzx eax, byte ptr [ebp - 0x45] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffbbu));
    /* 0057bda1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bda3: je 0x57bde7 */ if (fZ) goto L_0057bde7;
L_0057bda5:; BB(0x0057bda5);
    /* 0057bda5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bda8: movzx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 0057bdaf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bdb1: jne 0x57bdd3 */ if (!fZ) goto L_0057bdd3;
L_0057bdb3:; BB(0x0057bdb3);
    /* 0057bdb3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bdb6: mov byte ptr [eax + 0x1bc], 1 */ W8((u32)(r_eax+0x1bcu), 0x1u);
    /* 0057bdbd: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bdc0: mov ecx, dword ptr [ecx + 0x19e0] */ r_ecx = R32((u32)(r_ecx+0x19e0u));
    /* 0057bdc6: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57bdcbu); f_0057d3a0();
    /* 0057bdcb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bdce: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57bdd3u); f_0057b1b0();
L_0057bdd3:; BB(0x0057bdd3);
    /* 0057bdd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057bdda: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057bddd: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x57bde2u); f_00610250();
    /* 0057bde2: jmp 0x57be68 */ goto L_0057be68;
L_0057bde7:; BB(0x0057bde7);
    /* 0057bde7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bdea: mov eax, dword ptr [edx + 0x19e0] */ r_eax = R32((u32)(r_edx+0x19e0u));
    /* 0057bdf0: cmp dword ptr [eax + 0x1b4], -1 */ {  u32 a = R32((u32)(r_eax+0x1b4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bdf7: je 0x57be24 */ if (fZ) goto L_0057be24;
L_0057bdf9:; BB(0x0057bdf9);
    /* 0057bdf9: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057bdfc: mov ecx, dword ptr [ecx + 0x19e0] */ r_ecx = R32((u32)(r_ecx+0x19e0u));
    /* 0057be02: call 0x57d4b0 */ r_esp -= 4; W32(r_esp, 0x57be07u); f_0057d4b0();
    /* 0057be07: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0057be0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be0c: jne 0x57be24 */ if (!fZ) goto L_0057be24;
L_0057be0e:; BB(0x0057be0e);
    /* 0057be0e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057be11: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057be17: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57be1cu); f_0057d3a0();
    /* 0057be1c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057be1f: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57be24u); f_0057b1b0();
L_0057be24:; BB(0x0057be24);
    /* 0057be24: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057be27: movzx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 0057be2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be30: je 0x57be59 */ if (fZ) goto L_0057be59;
L_0057be32:; BB(0x0057be32);
    /* 0057be32: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057be35: mov ecx, dword ptr [eax + 0x19e0] */ r_ecx = R32((u32)(r_eax+0x19e0u));
    /* 0057be3b: call 0x57d4b0 */ r_esp -= 4; W32(r_esp, 0x57be40u); f_0057d4b0();
    /* 0057be40: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057be43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057be45: jne 0x57be59 */ if (!fZ) goto L_0057be59;
L_0057be47:; BB(0x0057be47);
    /* 0057be47: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057be4a: mov byte ptr [edx + 0x1bc], 0 */ W8((u32)(r_edx+0x1bcu), 0x0u);
    /* 0057be51: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0057be54: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x57be59u); f_0057b1b0();
L_0057be59:; BB(0x0057be59);
    /* 0057be59: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057be60: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0057be63: call 0x610250 */ r_esp -= 4; W32(r_esp, 0x57be68u); f_00610250();
L_0057be68:; BB(0x0057be68);
    /* 0057be68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057be6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057be72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057be73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057be74: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057be75: mov esp, ebp */ r_esp = r_ebp;
    /* 0057be77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057be78: ret  */ FN_RET(0x0057b8c0); r_esp += 4; return;
}

