#include "protos.h"

void f_00402660(void) /* BaccaratPlayerDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402660);
    /* 00402660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402661: mov ebp, esp */ r_ebp = r_esp;
    /* 00402663: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00402666: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00402669: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040266c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x402671u); f_005e9e20();
    /* 00402671: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402674: mov dword ptr [eax], 0x6b28f0 */ W32((u32)(r_eax), 0x6b28f0u);
    /* 0040267a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00402681: jmp 0x40268c */ goto L_0040268c;
L_00402683:; BB(0x00402683);
    /* 00402683: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402686: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402689: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0040268c:; BB(0x0040268c);
    /* 0040268c: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00402690: jge 0x4026a2 */ if ((fS==fO)) goto L_004026a2;
L_00402692:; BB(0x00402692);
    /* 00402692: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402695: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00402698: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 004026a0: jmp 0x402683 */ goto L_00402683;
L_004026a2:; BB(0x004026a2);
    /* 004026a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004026a5: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 004026ac: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004026af: mov esp, ebp */ r_esp = r_ebp;
    /* 004026b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004026b2: ret  */ FN_RET(0x00402660); r_esp += 4; return;
}

void f_004026c0(void) /* BaccaratPlayerDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004026c0);
    /* 004026c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004026c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004026c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004026c5: push 0x69d626 */ { u32 v = 0x69d626u; r_esp -= 4; W32(r_esp, v); }
    /* 004026ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004026d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004026d1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004026d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004026d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004026db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004026dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004026df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004026e5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004026e8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004026eb: mov dword ptr [eax], 0x6b28f0 */ W32((u32)(r_eax), 0x6b28f0u);
    /* 004026f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004026f8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004026ff: jmp 0x40270a */ goto L_0040270a;
L_00402701:; BB(0x00402701);
    /* 00402701: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402704: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00402707: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0040270a:; BB(0x0040270a);
    /* 0040270a: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040270e: jge 0x402745 */ if ((fS==fO)) goto L_00402745;
L_00402710:; BB(0x00402710);
    /* 00402710: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00402713: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00402716: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0040271a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0040271d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00402720: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00402723: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402727: je 0x40273c */ if (fZ) goto L_0040273c;
L_00402729:; BB(0x00402729);
    /* 00402729: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040272b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040272e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00402730: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00402733: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00402735: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x402737u); call_ind(t); }
    /* 00402737: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040273a: jmp 0x402743 */ goto L_00402743;
L_0040273c:; BB(0x0040273c);
    /* 0040273c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00402743:; BB(0x00402743);
    /* 00402743: jmp 0x402701 */ goto L_00402701;
L_00402745:; BB(0x00402745);
    /* 00402745: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00402748: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040274c: je 0x402787 */ if (fZ) goto L_00402787;
L_0040274e:; BB(0x0040274e);
    /* 0040274e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00402751: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00402754: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00402757: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040275a: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0040275d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00402761: je 0x402776 */ if (fZ) goto L_00402776;
L_00402763:; BB(0x00402763);
    /* 00402763: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00402765: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00402768: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040276a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040276d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040276f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x402771u); call_ind(t); }
    /* 00402771: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00402774: jmp 0x40277d */ goto L_0040277d;
L_00402776:; BB(0x00402776);
    /* 00402776: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0040277d:; BB(0x0040277d);
    /* 0040277d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00402780: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
L_00402787:; BB(0x00402787);
    /* 00402787: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040278e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00402791: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x402796u); f_005e9e40();
    /* 00402796: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00402799: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004027a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004027a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004027a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004027a4: ret  */ FN_RET(0x004026c0); r_esp += 4; return;
}

