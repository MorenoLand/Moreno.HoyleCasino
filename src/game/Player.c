#include "protos.h"

void f_0063a0c0(void) /* Player::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a0c0);
    /* 0063a0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a0c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063a0c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a0ca: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x63a0cfu); f_005e9e20();
    /* 0063a0cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a0d2: mov dword ptr [eax], 0x6db730 */ W32((u32)(r_eax), 0x6db730u);
    /* 0063a0d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a0db: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0063a0e2: push 0x384 */ { u32 v = 0x384u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a0e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a0e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a0ec: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063a0ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a0f0: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x63a0f5u); f_00686fa2();
    /* 0063a0f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063a0f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a0fb: mov dword ptr [eax + 0xc], 0xffffffff */ W32((u32)(r_eax+0xcu), 0xffffffffu);
    /* 0063a102: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a105: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0063a10c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a10f: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a112: ret  */ FN_RET(0x0063a0c0); r_esp += 4; return;
}

void f_0063a120(void) /* Player::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a120);
    /* 0063a120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a121: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063a125: push 0x6abae8 */ { u32 v = 0x6abae8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a12a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063a130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a131: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063a134: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063a139: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063a13b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a13c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063a13f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063a145: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0063a148: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063a14b: mov dword ptr [eax], 0x6db730 */ W32((u32)(r_eax), 0x6db730u);
    /* 0063a151: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063a158: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063a15b: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a15f: je 0x63a19a */ if (fZ) goto L_0063a19a;
L_0063a161:; BB(0x0063a161);
    /* 0063a161: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063a164: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0063a167: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063a16a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063a16d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063a170: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a174: je 0x63a189 */ if (fZ) goto L_0063a189;
L_0063a176:; BB(0x0063a176);
    /* 0063a176: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063a178: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a17b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a17d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063a180: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063a182: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63a184u); call_ind(t); }
    /* 0063a184: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0063a187: jmp 0x63a190 */ goto L_0063a190;
L_0063a189:; BB(0x0063a189);
    /* 0063a189: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0063a190:; BB(0x0063a190);
    /* 0063a190: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063a193: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_0063a19a:; BB(0x0063a19a);
    /* 0063a19a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063a19d: call 0x63a2a0 */ r_esp -= 4; W32(r_esp, 0x63a1a2u); f_0063a2a0();
    /* 0063a1a2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063a1a9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063a1ac: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x63a1b1u); f_005e9e40();
    /* 0063a1b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063a1b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063a1bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063a1bc: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a1be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a1bf: ret  */ FN_RET(0x0063a120); r_esp += 4; return;
}

void f_0063a880(void) /* Player::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063a880);
    /* 0063a880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063a881: mov ebp, esp */ r_ebp = r_esp;
    /* 0063a883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063a887: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063a88b: jne 0x63a89b */ if (!fZ) goto L_0063a89b;
L_0063a88d:; BB(0x0063a88d);
    /* 0063a88d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a893: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63a898u); f_005f3bf0();
    /* 0063a898: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0063a89b:; BB(0x0063a89b);
    /* 0063a89b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063a89e: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 0063a8a4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063a8a7: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063a8aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063a8ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063a8af: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063a8b5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063a8b7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063a8bd: mov edx, dword ptr [eax + 0x32c] */ r_edx = R32((u32)(r_eax+0x32cu));
    /* 0063a8c3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63a8c5u); call_ind(t); }
    /* 0063a8c5: mov esp, ebp */ r_esp = r_ebp;
    /* 0063a8c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063a8c8: ret 4 */ FN_RET(0x0063a880); r_esp += 8; return;
}

void f_0063ab10(void) /* player::func_0063ab10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063ab10);
    /* 0063ab10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab11: mov ebp, esp */ r_ebp = r_esp;
    /* 0063ab13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab15: push 0x6abb5d */ { u32 v = 0x6abb5du; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063ab20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab21: sub esp, 0x444 */ {  u32 a = r_esp; u32 b = 0x444u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063ab27: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063ab2c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063ab2e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0063ab31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab32: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0063ab35: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0063ab3b: mov dword ptr [ebp - 0x448], ecx */ W32((u32)(r_ebp+0xfffffbb8u), r_ecx);
    /* 0063ab41: mov byte ptr [ebp - 0x414], 0 */ W8((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 0063ab48: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab4f: lea eax, [ebp - 0x413] */ r_eax = (u32)(r_ebp+0xfffffbedu);
    /* 0063ab55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab56: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x63ab5bu); f_00686fa2();
    /* 0063ab5b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ab5e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063ab61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab62: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 0063ab68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab69: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x63ab6eu); f_00686ec6();
    /* 0063ab6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ab71: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab76: lea eax, [ebp - 0x414] */ r_eax = (u32)(r_ebp+0xfffffbecu);
    /* 0063ab7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab7d: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x63ab82u); f_005ea9c0();
    /* 0063ab82: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ab85: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
    /* 0063ab8b: cmp dword ptr [ebp - 0x41c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ab92: je 0x63b07a */ if (fZ) goto L_0063b07a;
L_0063ab98:; BB(0x0063ab98);
    /* 0063ab98: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063ab9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ab9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063aba1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063aba3: lea edx, [ebp - 0x424] */ r_edx = (u32)(r_ebp+0xfffffbdcu);
    /* 0063aba9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063abaa: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x63abb0u); call_ind(t); }
    /* 0063abb0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063abb3: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 0063abb9: cmp dword ptr [ebp - 0x418], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063abc0: jne 0x63abeb */ if (!fZ) goto L_0063abeb;
L_0063abc2:; BB(0x0063abc2);
    /* 0063abc2: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063abc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063abc9: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x63abcfu); call_ind(t); }
    /* 0063abcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063abd2: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 0063abd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063abd9: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x63abdfu); call_ind(t); }
    /* 0063abdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063abe2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063abe4: jmp 0x63b07c */ goto L_0063b07c;
L_0063abeb:; BB(0x0063abeb);
    /* 0063abeb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063abee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063abef: mov eax, dword ptr [ebp - 0x448] */ r_eax = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063abf5: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063abf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063abf9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63abfeu); f_00686d8e();
    /* 0063abfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ac01: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063ac07: call 0x63a2a0 */ r_esp -= 4; W32(r_esp, 0x63ac0cu); f_0063a2a0();
    /* 0063ac0c: cmp dword ptr [ebp - 0x424], 0x384 */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ac16: je 0x63ac61 */ if (fZ) goto L_0063ac61;
L_0063ac18:; BB(0x0063ac18);
    /* 0063ac18: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063ac1e: call 0x63a4d0 */ r_esp -= 4; W32(r_esp, 0x63ac23u); f_0063a4d0();
    /* 0063ac23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac25: mov ecx, dword ptr [ebp - 0x424] */ r_ecx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0063ac2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac2c: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063ac32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac33: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x63ac39u); call_ind(t); }
    /* 0063ac39: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ac3c: cmp dword ptr [ebp - 0x424], 0x384 */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0x384u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ac46: je 0x63ac5f */ if (fZ) goto L_0063ac5f;
L_0063ac48:; BB(0x0063ac48);
    /* 0063ac48: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac4d: push 0x6db788 */ { u32 v = 0x6db788u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac52: push 0x6db76c */ { u32 v = 0x6db76cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac57: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63ac5cu); f_005e9f20();
    /* 0063ac5c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063ac5f:; BB(0x0063ac5f);
    /* 0063ac5f: jmp 0x63aca8 */ goto L_0063aca8;
L_0063ac61:; BB(0x0063ac61);
    /* 0063ac61: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063ac67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac6a: push 0x384 */ { u32 v = 0x384u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac6f: mov edx, dword ptr [ebp - 0x448] */ r_edx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063ac75: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063ac78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ac79: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x63ac7fu); call_ind(t); }
    /* 0063ac7f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ac82: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 0063ac88: mov eax, dword ptr [ebp - 0x448] */ r_eax = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063ac8e: mov dword ptr [eax + 0x3a4], 0 */ W32((u32)(r_eax+0x3a4u), 0x0u);
    /* 0063ac98: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063ac9e: mov dword ptr [ecx + 0x3a8], 0 */ W32((u32)(r_ecx+0x3a8u), 0x0u);
L_0063aca8:; BB(0x0063aca8);
    /* 0063aca8: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063acae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063acaf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063acb1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063acb3: lea eax, [ebp - 0x424] */ r_eax = (u32)(r_ebp+0xfffffbdcu);
    /* 0063acb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063acba: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x63acc0u); call_ind(t); }
    /* 0063acc0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063acc3: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 0063acc9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063accf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063acd1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063acd7: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0063acdd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63acdfu); call_ind(t); }
    /* 0063acdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ace0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63ace5u); f_00686d82();
    /* 0063ace5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ace8: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 0063acee: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063acf4: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 0063acfa: mov dword ptr [ecx + 0x3a4], edx */ W32((u32)(r_ecx+0x3a4u), r_edx);
    /* 0063ad00: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063ad05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063ad07: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063ad0d: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0063ad13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ad15u); call_ind(t); }
    /* 0063ad15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ad17: je 0x63add2 */ if (fZ) goto L_0063add2;
L_0063ad1d:; BB(0x0063ad1d);
    /* 0063ad1d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063ad23: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063ad25: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063ad2b: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0063ad31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ad33u); call_ind(t); }
    /* 0063ad33: cmp dword ptr [ebp - 0x424], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ad39: je 0x63ad9d */ if (fZ) goto L_0063ad9d;
L_0063ad3b:; BB(0x0063ad3b);
    /* 0063ad3b: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063ad41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063ad43: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063ad49: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0063ad4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ad4eu); call_ind(t); }
    /* 0063ad4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ad50: mov ecx, dword ptr [ebp - 0x424] */ r_ecx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0063ad56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ad57: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063ad5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ad5e: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x63ad64u); call_ind(t); }
    /* 0063ad64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ad67: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063ad6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063ad6e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063ad74: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0063ad7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ad7cu); call_ind(t); }
    /* 0063ad7c: cmp dword ptr [ebp - 0x424], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063ad82: je 0x63ad9b */ if (fZ) goto L_0063ad9b;
L_0063ad84:; BB(0x0063ad84);
    /* 0063ad84: push 0xef */ { u32 v = 0xefu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ad89: push 0x6db788 */ { u32 v = 0x6db788u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ad8e: push 0x6db73c */ { u32 v = 0x6db73cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063ad93: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63ad98u); f_005e9f20();
    /* 0063ad98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063ad9b:; BB(0x0063ad9b);
    /* 0063ad9b: jmp 0x63add2 */ goto L_0063add2;
L_0063ad9d:; BB(0x0063ad9d);
    /* 0063ad9d: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063ada3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ada4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ada6: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063adab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063adad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063adb3: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0063adb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63adbbu); call_ind(t); }
    /* 0063adbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063adbc: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063adc2: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 0063adc8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063adc9: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x63adcfu); call_ind(t); }
    /* 0063adcf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063add2:; BB(0x0063add2);
    /* 0063add2: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063add7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063add9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063addf: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0063ade5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ade7u); call_ind(t); }
    /* 0063ade7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063ade9: mov edx, 4 */ r_edx = 0x4u;
    /* 0063adee: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0063adf0: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0063adf3: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0063adf5: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0063adf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063adf8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63adfdu); f_00686d82();
    /* 0063adfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ae00: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 0063ae06: mov eax, dword ptr [ebp - 0x448] */ r_eax = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063ae0c: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 0063ae12: mov dword ptr [eax + 0x3a8], ecx */ W32((u32)(r_eax+0x3a8u), r_ecx);
    /* 0063ae18: mov byte ptr [ebp - 0x41d], 0 */ W8((u32)(r_ebp+0xfffffbe3u), 0x0u);
    /* 0063ae1f: mov dword ptr [ebp - 0x424], 0 */ W32((u32)(r_ebp+0xfffffbdcu), 0x0u);
    /* 0063ae29: jmp 0x63ae3a */ goto L_0063ae3a;
L_0063ae2b:; BB(0x0063ae2b);
    /* 0063ae2b: mov edx, dword ptr [ebp - 0x424] */ r_edx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0063ae31: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063ae34: mov dword ptr [ebp - 0x424], edx */ W32((u32)(r_ebp+0xfffffbdcu), r_edx);
L_0063ae3a:; BB(0x0063ae3a);
    /* 0063ae3a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063ae3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063ae41: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063ae47: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0063ae4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ae4fu); call_ind(t); }
    /* 0063ae4f: cmp dword ptr [ebp - 0x424], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063ae55: jge 0x63af49 */ if ((fS==fO)) goto L_0063af49;
L_0063ae5b:; BB(0x0063ae5b);
    /* 0063ae5b: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063ae61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae64: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae66: lea edx, [ebp - 0x428] */ r_edx = (u32)(r_ebp+0xfffffbd8u);
    /* 0063ae6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae6d: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x63ae73u); call_ind(t); }
    /* 0063ae73: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ae76: mov eax, dword ptr [ebp - 0x424] */ r_eax = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0063ae7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae7d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063ae83: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063ae85: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063ae8b: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 0063ae91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63ae93u); call_ind(t); }
    /* 0063ae93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063ae94: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63ae99u); f_00686d82();
    /* 0063ae99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063ae9c: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
    /* 0063aea2: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063aea8: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 0063aeae: mov eax, dword ptr [ebp - 0x424] */ r_eax = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0063aeb4: mov ecx, dword ptr [ebp - 0x434] */ r_ecx = R32((u32)(r_ebp+0xfffffbccu));
    /* 0063aeba: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 0063aebd: mov edx, dword ptr [ebp - 0x424] */ r_edx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0063aec3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063aec4: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063aec9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063aecb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063aed1: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 0063aed7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63aed9u); call_ind(t); }
    /* 0063aed9: cmp dword ptr [ebp - 0x428], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbd8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063aedf: je 0x63af15 */ if (fZ) goto L_0063af15;
L_0063aee1:; BB(0x0063aee1);
    /* 0063aee1: mov ecx, dword ptr [ebp - 0x424] */ r_ecx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0063aee7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063aee8: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063aeee: call 0x63a720 */ r_esp -= 4; W32(r_esp, 0x63aef3u); f_0063a720();
    /* 0063aef3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063aef5: mov edx, dword ptr [ebp - 0x428] */ r_edx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 0063aefb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063aefc: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063af02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af03: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x63af09u); call_ind(t); }
    /* 0063af09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063af0c: mov byte ptr [ebp - 0x41d], 1 */ W8((u32)(r_ebp+0xfffffbe3u), 0x1u);
    /* 0063af13: jmp 0x63af44 */ goto L_0063af44;
L_0063af15:; BB(0x0063af15);
    /* 0063af15: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063af1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063af1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063af1e: mov edx, dword ptr [ebp - 0x428] */ r_edx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 0063af24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063af25: mov eax, dword ptr [ebp - 0x448] */ r_eax = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063af2b: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 0063af31: mov edx, dword ptr [ebp - 0x424] */ r_edx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 0063af37: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0063af3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063af3b: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x63af41u); call_ind(t); }
    /* 0063af41: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063af44:; BB(0x0063af44);
    /* 0063af44: jmp 0x63ae2b */ goto L_0063ae2b;
L_0063af49:; BB(0x0063af49);
    /* 0063af49: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063af4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063af50: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x63af56u); call_ind(t); }
    /* 0063af56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063af59: movzx edx, byte ptr [ebp - 0x41d] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffbe3u));
    /* 0063af60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063af62: je 0x63af6f */ if (fZ) goto L_0063af6f;
L_0063af64:; BB(0x0063af64);
    /* 0063af64: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063af6a: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x63af6fu); f_0063b0a0();
L_0063af6f:; BB(0x0063af6f);
    /* 0063af6f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063af74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063af76: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063af7c: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0063af82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63af84u); call_ind(t); }
    /* 0063af84: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063af87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063af89: je 0x63b076 */ if (fZ) goto L_0063b076;
L_0063af8f:; BB(0x0063af8f);
    /* 0063af8f: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063af95: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63af9au); f_0063aac0();
    /* 0063af9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063af9c: mov dword ptr [ebp - 0x440], edx */ W32((u32)(r_ebp+0xfffffbc0u), r_edx);
    /* 0063afa2: cmp dword ptr [ebp - 0x440], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffbc0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063afa9: je 0x63afd3 */ if (fZ) goto L_0063afd3;
L_0063afab:; BB(0x0063afab);
    /* 0063afab: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063afb1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63afb6u); f_0063aac0();
    /* 0063afb6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063afb8: mov dword ptr [ebp - 0x444], eax */ W32((u32)(r_ebp+0xfffffbbcu), r_eax);
    /* 0063afbe: cmp dword ptr [ebp - 0x444], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffbbcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063afc5: je 0x63afd3 */ if (fZ) goto L_0063afd3;
L_0063afc7:; BB(0x0063afc7);
    /* 0063afc7: mov dword ptr [ebp - 0x44c], 0 */ W32((u32)(r_ebp+0xfffffbb4u), 0x0u);
    /* 0063afd1: jmp 0x63afdd */ goto L_0063afdd;
L_0063afd3:; BB(0x0063afd3);
    /* 0063afd3: mov dword ptr [ebp - 0x44c], 1 */ W32((u32)(r_ebp+0xfffffbb4u), 0x1u);
L_0063afdd:; BB(0x0063afdd);
    /* 0063afdd: movzx ecx, byte ptr [ebp - 0x44c] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffbb4u));
    /* 0063afe4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063afe6: je 0x63b076 */ if (fZ) goto L_0063b076;
L_0063afec:; BB(0x0063afec);
    /* 0063afec: mov edx, dword ptr [ebp - 0x448] */ r_edx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063aff2: cmp dword ptr [edx + 0x24], 0 */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063aff6: jne 0x63b061 */ if (!fZ) goto L_0063b061;
L_0063aff8:; BB(0x0063aff8);
    /* 0063aff8: push 0xb04 */ { u32 v = 0xb04u; r_esp -= 4; W32(r_esp, v); }
    /* 0063affd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x63b002u); f_00686d82();
    /* 0063b002: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b005: mov dword ptr [ebp - 0x43c], eax */ W32((u32)(r_ebp+0xfffffbc4u), r_eax);
    /* 0063b00b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063b012: cmp dword ptr [ebp - 0x43c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b019: je 0x63b035 */ if (fZ) goto L_0063b035;
L_0063b01b:; BB(0x0063b01b);
    /* 0063b01b: mov eax, dword ptr [ebp - 0x448] */ r_eax = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063b021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b022: mov ecx, dword ptr [ebp - 0x43c] */ r_ecx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 0063b028: call 0x66f8b0 */ r_esp -= 4; W32(r_esp, 0x63b02du); f_0066f8b0();
    /* 0063b02d: mov dword ptr [ebp - 0x450], eax */ W32((u32)(r_ebp+0xfffffbb0u), r_eax);
    /* 0063b033: jmp 0x63b03f */ goto L_0063b03f;
L_0063b035:; BB(0x0063b035);
    /* 0063b035: mov dword ptr [ebp - 0x450], 0 */ W32((u32)(r_ebp+0xfffffbb0u), 0x0u);
L_0063b03f:; BB(0x0063b03f);
    /* 0063b03f: mov ecx, dword ptr [ebp - 0x450] */ r_ecx = R32((u32)(r_ebp+0xfffffbb0u));
    /* 0063b045: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 0063b04b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063b052: mov edx, dword ptr [ebp - 0x448] */ r_edx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063b058: mov eax, dword ptr [ebp - 0x438] */ r_eax = R32((u32)(r_ebp+0xfffffbc8u));
    /* 0063b05e: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_0063b061:; BB(0x0063b061);
    /* 0063b061: mov ecx, dword ptr [ebp - 0x448] */ r_ecx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063b067: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b068: mov edx, dword ptr [ebp - 0x448] */ r_edx = R32((u32)(r_ebp+0xfffffbb8u));
    /* 0063b06e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 0063b071: call 0x66f960 */ r_esp -= 4; W32(r_esp, 0x63b076u); f_0066f960();
L_0063b076:; BB(0x0063b076);
    /* 0063b076: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0063b078: jmp 0x63b07c */ goto L_0063b07c;
L_0063b07a:; BB(0x0063b07a);
    /* 0063b07a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0063b07c:; BB(0x0063b07c);
    /* 0063b07c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b07f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063b086: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063b087: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b08a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b08c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x63b091u); f_00686d72();
    /* 0063b091: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b093: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b094: ret 4 */ FN_RET(0x0063ab10); r_esp += 8; return;
}

void f_0063b0a0(void) /* player::func_0063b0a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b0a0);
    /* 0063b0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b0a3: sub esp, 0x418 */ {  u32 a = r_esp; u32 b = 0x418u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b0a9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063b0ae: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063b0b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063b0b3: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
    /* 0063b0b9: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 0063b0c0: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0c7: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 0063b0cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0ce: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x63b0d3u); f_00686fa2();
    /* 0063b0d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b0d6: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0063b0dc: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b0df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0e0: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 0063b0e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b0e7: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x63b0ecu); f_00686ec6();
    /* 0063b0ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b0ef: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0063b0f5: movsx ecx, byte ptr [eax + 0x10] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x10u));
    /* 0063b0f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b0fb: jne 0x63b11f */ if (!fZ) goto L_0063b11f;
L_0063b0fd:; BB(0x0063b0fd);
    /* 0063b0fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0063b0ff: jne 0x63b118 */ if (!fZ) goto L_0063b118;
L_0063b101:; BB(0x0063b101);
    /* 0063b101: push 0x127 */ { u32 v = 0x127u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b106: push 0x6db788 */ { u32 v = 0x6db788u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b10b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b110: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63b115u); f_005e9f20();
    /* 0063b115: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063b118:; BB(0x0063b118);
    /* 0063b118: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063b11a: jmp 0x63b2b9 */ goto L_0063b2b9;
L_0063b11f:; BB(0x0063b11f);
    /* 0063b11f: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b124: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 0063b12a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b12b: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x63b130u); f_005ea9c0();
    /* 0063b130: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b133: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 0063b139: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b140: je 0x63b2b7 */ if (fZ) goto L_0063b2b7;
L_0063b146:; BB(0x0063b146);
    /* 0063b146: mov dword ptr [ebp - 0x410], 0x384 */ W32((u32)(r_ebp+0xfffffbf0u), 0x384u);
    /* 0063b150: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0063b156: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b157: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b159: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b15b: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 0063b161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b162: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x63b168u); call_ind(t); }
    /* 0063b168: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b16b: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0063b171: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b172: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b174: push 0x384 */ { u32 v = 0x384u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b179: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0063b17f: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063b182: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b183: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x63b189u); call_ind(t); }
    /* 0063b189: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b18c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063b191: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063b193: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b199: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0063b19f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b1a1u); call_ind(t); }
    /* 0063b1a1: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
    /* 0063b1a7: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0063b1ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1b0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1b2: lea edx, [ebp - 0x410] */ r_edx = (u32)(r_ebp+0xfffffbf0u);
    /* 0063b1b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1b9: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x63b1bfu); call_ind(t); }
    /* 0063b1bf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b1c2: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0063b1c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1cb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b1d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b1d3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b1d9: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0063b1df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b1e1u); call_ind(t); }
    /* 0063b1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1e2: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0063b1e8: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 0063b1ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b1ef: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x63b1f5u); call_ind(t); }
    /* 0063b1f5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b1f8: mov dword ptr [ebp - 0x410], 0 */ W32((u32)(r_ebp+0xfffffbf0u), 0x0u);
    /* 0063b202: jmp 0x63b213 */ goto L_0063b213;
L_0063b204:; BB(0x0063b204);
    /* 0063b204: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 0063b20a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063b20d: mov dword ptr [ebp - 0x410], eax */ W32((u32)(r_ebp+0xfffffbf0u), r_eax);
L_0063b213:; BB(0x0063b213);
    /* 0063b213: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b219: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b21b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b221: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0063b227: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b229u); call_ind(t); }
    /* 0063b229: cmp dword ptr [ebp - 0x410], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbf0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063b22f: jge 0x63b2a3 */ if ((fS==fO)) goto L_0063b2a3;
L_0063b231:; BB(0x0063b231);
    /* 0063b231: mov ecx, dword ptr [ebp - 0x410] */ r_ecx = R32((u32)(r_ebp+0xfffffbf0u));
    /* 0063b237: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b238: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0063b23e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063b240: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b246: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 0063b24c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x63b24eu); call_ind(t); }
    /* 0063b24e: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
    /* 0063b254: mov eax, dword ptr [ebp - 0x40c] */ r_eax = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0063b25a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b25b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b25d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b25f: lea ecx, [ebp - 0x414] */ r_ecx = (u32)(r_ebp+0xfffffbecu);
    /* 0063b265: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b266: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x63b26cu); call_ind(t); }
    /* 0063b26c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b26f: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0063b275: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b276: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b278: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 0063b27e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b27f: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0063b285: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 0063b28b: mov eax, dword ptr [ebp - 0x410] */ r_eax = R32((u32)(r_ebp+0xfffffbf0u));
    /* 0063b291: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0063b294: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b295: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x63b29bu); call_ind(t); }
    /* 0063b29b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b29e: jmp 0x63b204 */ goto L_0063b204;
L_0063b2a3:; BB(0x0063b2a3);
    /* 0063b2a3: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 0063b2a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b2aa: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x63b2b0u); call_ind(t); }
    /* 0063b2b0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063b2b3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0063b2b5: jmp 0x63b2b9 */ goto L_0063b2b9;
L_0063b2b7:; BB(0x0063b2b7);
    /* 0063b2b7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0063b2b9:; BB(0x0063b2b9);
    /* 0063b2b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063b2bc: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b2be: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x63b2c3u); f_00686d72();
    /* 0063b2c3: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b2c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b2c6: ret  */ FN_RET(0x0063b0a0); r_esp += 4; return;
}

void f_0063b3c0(void) /* player::func_0063b3c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b3c0);
    /* 0063b3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b3c3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b3c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0063b3c9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b3cc: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063b3cf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0063b3d2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b3d6: je 0x63b3ed */ if (fZ) goto L_0063b3ed;
L_0063b3d8:; BB(0x0063b3d8);
    /* 0063b3d8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b3db: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0063b3de: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063b3e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063b3e4: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x63b3e9u); f_00646f80();
    /* 0063b3e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b3eb: jne 0x63b40a */ if (!fZ) goto L_0063b40a;
L_0063b3ed:; BB(0x0063b3ed);
    /* 0063b3ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0063b3ef: jne 0x63b408 */ if (!fZ) goto L_0063b408;
L_0063b3f1:; BB(0x0063b3f1);
    /* 0063b3f1: push 0x15c */ { u32 v = 0x15cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063b3f6: push 0x6db788 */ { u32 v = 0x6db788u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b3fb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b400: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63b405u); f_005e9f20();
    /* 0063b405: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063b408:; BB(0x0063b408);
    /* 0063b408: jmp 0x63b438 */ goto L_0063b438;
L_0063b40a:; BB(0x0063b40a);
    /* 0063b40a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063b40d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0063b410: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063b413: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063b416: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x63b41bu); f_00646f80();
    /* 0063b41b: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 0063b421: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0063b424: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063b427: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063b428: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b42b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063b42d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063b430: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0063b436: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63b438u); call_ind(t); }
L_0063b438:; BB(0x0063b438);
    /* 0063b438: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b43a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b43b: ret 4 */ FN_RET(0x0063b3c0); r_esp += 8; return;
}

void f_0063b560(void) /* player::func_0063b560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0063b560);
    /* 0063b560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063b561: mov ebp, esp */ r_ebp = r_esp;
    /* 0063b563: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063b566: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063b567: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063b56a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063b56d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63b572u); f_0063aac0();
    /* 0063b572: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0063b574: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063b577: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063b579: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b57d: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0063b580: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0063b583: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063b585: je 0x63b59e */ if (fZ) goto L_0063b59e;
L_0063b587:; BB(0x0063b587);
    /* 0063b587: push 0x182 */ { u32 v = 0x182u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b58c: push 0x6db788 */ { u32 v = 0x6db788u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b591: push 0x6bcee0 */ { u32 v = 0x6bcee0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063b596: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63b59bu); f_005e9f20();
    /* 0063b59b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063b59e:; BB(0x0063b59e);
    /* 0063b59e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063b5a1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63b5a6u); f_0063aac0();
    /* 0063b5a6: mov esi, eax */ r_esi = r_eax;
    /* 0063b5a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063b5ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063b5ac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063b5b2: call 0x639590 */ r_esp -= 4; W32(r_esp, 0x63b5b7u); f_00639590();
    /* 0063b5b7: mov al, byte ptr [esi + eax + 0x15d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+r_eax+0x15du))) & 0xffu);
    /* 0063b5be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063b5bf: mov esp, ebp */ r_esp = r_ebp;
    /* 0063b5c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063b5c2: ret 4 */ FN_RET(0x0063b560); r_esp += 8; return;
}

