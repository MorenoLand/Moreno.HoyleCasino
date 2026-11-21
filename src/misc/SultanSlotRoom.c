#include "protos.h"

void f_00578910(void) /* SultanSlotRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578910);
    /* 00578910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578911: mov ebp, esp */ r_ebp = r_esp;
    /* 00578913: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578915: push 0x6a6558 */ { u32 v = 0x6a6558u; r_esp -= 4; W32(r_esp, v); }
    /* 0057891a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578920: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578921: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578924: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00578929: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057892b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057892c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057892f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00578935: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00578938: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057893b: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x578940u); f_005d7b60();
    /* 00578940: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578947: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057894a: mov dword ptr [eax], 0x6cb1dc */ W32((u32)(r_eax), 0x6cb1dcu);
    /* 00578950: push 0x6ca780 */ { u32 v = 0x6ca780u; r_esp -= 4; W32(r_esp, v); }
    /* 00578955: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57895au); f_00630f40();
    /* 0057895a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057895d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057895e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00578964: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x578969u); f_005f38b0();
    /* 00578969: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057896c: mov dword ptr [0x793458], ecx */ W32((u32)(0x793458u), r_ecx);
    /* 00578972: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578974: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578977: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x57897cu); f_005f1ad0();
    /* 0057897c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057897e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578980: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578982: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578985: call 0x5f1b10 */ r_esp -= 4; W32(r_esp, 0x57898au); f_005f1b10();
    /* 0057898a: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00578990: jmp 0x57899e */ goto L_0057899e;
L_00578992:; BB(0x00578992);
    /* 00578992: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00578996: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0057899a: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0057899e:; BB(0x0057899e);
    /* 0057899e: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005789a2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005789a5: jge 0x5789c9 */ if ((fS==fO)) goto L_005789c9;
L_005789a7:; BB(0x005789a7);
    /* 005789a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005789a9: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005789ad: add ecx, 0x1601d */ {  u32 a = r_ecx; u32 b = 0x1601du; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005789b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005789b4: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 005789b9: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005789bf: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005789c2: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x5789c7u); f_006044b0();
    /* 005789c7: jmp 0x578992 */ goto L_00578992;
L_005789c9:; BB(0x005789c9);
    /* 005789c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005789d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005789d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005789d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005789dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005789de: mov esp, ebp */ r_esp = r_ebp;
    /* 005789e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005789e1: ret  */ FN_RET(0x00578910); r_esp += 4; return;
}

void f_005789f0(void) /* SultanSlotRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005789f0);
    /* 005789f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005789f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005789f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005789f5: push 0x6a657b */ { u32 v = 0x6a657bu; r_esp -= 4; W32(r_esp, v); }
    /* 005789fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578a01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578a04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00578a09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578a0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578a0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00578a0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00578a15: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00578a18: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00578a1b: mov dword ptr [eax], 0x6cb1dc */ W32((u32)(r_eax), 0x6cb1dcu);
    /* 00578a21: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578a28: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00578a2e: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x578a33u); f_005de170();
    /* 00578a33: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00578a39: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00578a3c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578a3f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00578a42: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578a46: je 0x578a5b */ if (fZ) goto L_00578a5b;
L_00578a48:; BB(0x00578a48);
    /* 00578a48: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00578a4a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00578a4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00578a4f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00578a52: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00578a54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578a56u); call_ind(t); }
    /* 00578a56: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00578a59: jmp 0x578a62 */ goto L_00578a62;
L_00578a5b:; BB(0x00578a5b);
    /* 00578a5b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00578a62:; BB(0x00578a62);
    /* 00578a62: mov dword ptr [0x79345c], 0 */ W32((u32)(0x79345cu), 0x0u);
    /* 00578a6c: mov dword ptr [0x793458], 0 */ W32((u32)(0x793458u), 0x0u);
    /* 00578a76: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00578a7d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00578a80: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x578a85u); f_005d7bd0();
    /* 00578a85: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578a88: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578a8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578a90: mov esp, ebp */ r_esp = r_ebp;
    /* 00578a92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578a93: ret  */ FN_RET(0x005789f0); r_esp += 4; return;
}

void f_00578aa0(void) /* SultanSlotRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578aa0);
    /* 00578aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00578aa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578aa5: push 0x6a65ac */ { u32 v = 0x6a65acu; r_esp -= 4; W32(r_esp, v); }
    /* 00578aaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578ab1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578ab4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00578ab9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578abb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578abc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00578abf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00578ac5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00578ac8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578acb: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x578ad0u); f_005d8230();
    /* 00578ad0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00578ad6: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x578adbu); f_005f3e50();
    /* 00578adb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578ade: mov dword ptr [ecx + 0x80], eax */ W32((u32)(r_ecx+0x80u), r_eax);
    /* 00578ae4: cmp dword ptr [0x79345c], 0 */ {  u32 a = R32((u32)(0x79345cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578aeb: jne 0x578b33 */ if (!fZ) goto L_00578b33;
L_00578aed:; BB(0x00578aed);
    /* 00578aed: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00578af2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x578af7u); f_00686d82();
    /* 00578af7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578afa: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00578afd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00578b04: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578b08: je 0x578b17 */ if (fZ) goto L_00578b17;
L_00578b0a:; BB(0x00578b0a);
    /* 00578b0a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00578b0d: call 0x573190 */ r_esp -= 4; W32(r_esp, 0x578b12u); f_00573190();
    /* 00578b12: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00578b15: jmp 0x578b1e */ goto L_00578b1e;
L_00578b17:; BB(0x00578b17);
    /* 00578b17: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00578b1e:; BB(0x00578b1e);
    /* 00578b1e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00578b21: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00578b24: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00578b2b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00578b2e: mov dword ptr [0x79345c], eax */ W32((u32)(0x79345cu), r_eax);
L_00578b33:; BB(0x00578b33);
    /* 00578b33: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00578b35: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x578b3au); f_00686d82();
    /* 00578b3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578b3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00578b40: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00578b47: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578b4b: je 0x578b68 */ if (fZ) goto L_00578b68;
L_00578b4d:; BB(0x00578b4d);
    /* 00578b4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578b4f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00578b52: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x578b57u); f_005fc0d0();
    /* 00578b57: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00578b5a: mov dword ptr [ecx], 0x6cb4dc */ W32((u32)(r_ecx), 0x6cb4dcu);
    /* 00578b60: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00578b63: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00578b66: jmp 0x578b6f */ goto L_00578b6f;
L_00578b68:; BB(0x00578b68);
    /* 00578b68: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00578b6f:; BB(0x00578b6f);
    /* 00578b6f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00578b72: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00578b75: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00578b7c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00578b7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578b80: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00578b83: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x578b88u); f_005f1b70();
    /* 00578b88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578b8b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578b92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00578b93: mov esp, ebp */ r_esp = r_ebp;
    /* 00578b95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578b96: ret  */ FN_RET(0x00578aa0); r_esp += 4; return;
}

void f_00578ba0(void) /* SultanSlotRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578ba0);
    /* 00578ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00578ba3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578ba6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578ba9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00578bac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00578baf: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578bb6: je 0x578bd3 */ if (fZ) goto L_00578bd3;
L_00578bb8:; BB(0x00578bb8);
    /* 00578bb8: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578bbf: je 0x578c24 */ if (fZ) goto L_00578c24;
L_00578bc1:; BB(0x00578bc1);
    /* 00578bc1: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578bc8: je 0x578c50 */ if (fZ) goto L_00578c50;
L_00578bce:; BB(0x00578bce);
    /* 00578bce: jmp 0x578c72 */ goto L_00578c72;
L_00578bd3:; BB(0x00578bd3);
    /* 00578bd3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578bd5: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00578bda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578bdd: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x578be2u); f_005fe640();
    /* 00578be2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578be4: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00578be9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578bec: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x578bf1u); f_005fe640();
    /* 00578bf1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578bf3: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00578bf8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578bfb: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x578c00u); f_005fe640();
    /* 00578c00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c02: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c07: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578c0a: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x578c0fu); f_005fe640();
    /* 00578c0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c11: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578c13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578c15: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578c1d: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x578c22u); f_005fe240();
    /* 00578c22: jmp 0x578c72 */ goto L_00578c72;
L_00578c24:; BB(0x00578c24);
    /* 00578c24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c26: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578c2e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x578c33u); f_005fe640();
    /* 00578c33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c35: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578c3d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x578c42u); f_005fe640();
    /* 00578c42: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c44: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00578c46: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578c49: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x578c4eu); f_005fe640();
    /* 00578c4e: jmp 0x578c72 */ goto L_00578c72;
L_00578c50:; BB(0x00578c50);
    /* 00578c50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c52: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 00578c57: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578c5a: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x578c5fu); f_005fe640();
    /* 00578c5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c61: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578c63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578c65: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 00578c6a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578c6d: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x578c72u); f_005fe240();
L_00578c72:; BB(0x00578c72);
    /* 00578c72: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00578c75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c76: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00578c79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578c7d: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x578c82u); f_005d8670();
    /* 00578c82: mov esp, ebp */ r_esp = r_ebp;
    /* 00578c84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578c85: ret 8 */ FN_RET(0x00578ba0); r_esp += 12; return;
}

void f_00578c90(void) /* SultanSlotRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578c90);
    /* 00578c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00578c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578c97: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 00578c9c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00578ca2: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x578ca7u); f_005df2e0();
    /* 00578ca7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578ca8: push 0x3102e2 */ { u32 v = 0x3102e2u; r_esp -= 4; W32(r_esp, v); }
    /* 00578cad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578cb0: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x578cb5u); f_005f1e60();
    /* 00578cb5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578cb8: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x578cbdu); f_0064e430();
    /* 00578cbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00578cbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578cc0: ret  */ FN_RET(0x00578c90); r_esp += 4; return;
}

void f_00578cd0(void) /* SultanSlotRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578cd0);
    /* 00578cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00578cd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578cd6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578cd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578cdc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00578cdf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00578ce2: sub ecx, 0x30ef5a */ {  u32 a = r_ecx; u32 b = 0x30ef5au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00578ce8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00578ceb: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00578cef: ja 0x578d95 */ if ((!fC&&!fZ)) goto L_00578d95;
L_00578cf5:; BB(0x00578cf5);
    /* 00578cf5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00578cf8: jmp dword ptr [edx*4 + 0x578dac] */ { u32 t = R32((u32)(r_edx*4+0x578dacu)); switch (t) { case 0x578d78u: goto L_00578d78; case 0x578d5bu: goto L_00578d5b; case 0x578cffu: goto L_00578cff; case 0x578d21u: goto L_00578d21; case 0x578d3eu: goto L_00578d3e; default: UNSUP(0x00578cf8, "jump table entry is not a known target"); } }
L_00578cff:; BB(0x00578cff);
    /* 00578cff: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 00578d04: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00578d07: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 00578d0d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00578d10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00578d12: mov ecx, eax */ r_ecx = r_eax;
    /* 00578d14: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00578d1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578d1cu); call_ind(t); }
    /* 00578d1c: jmp 0x578da5 */ goto L_00578da5;
L_00578d21:; BB(0x00578d21);
    /* 00578d21: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00578d27: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00578d2a: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 00578d2f: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00578d32: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00578d34: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00578d3a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578d3cu); call_ind(t); }
    /* 00578d3c: jmp 0x578da5 */ goto L_00578da5;
L_00578d3e:; BB(0x00578d3e);
    /* 00578d3e: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00578d44: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00578d47: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 00578d4c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00578d4f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00578d51: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00578d57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578d59u); call_ind(t); }
    /* 00578d59: jmp 0x578da5 */ goto L_00578da5;
L_00578d5b:; BB(0x00578d5b);
    /* 00578d5b: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00578d61: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00578d64: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 00578d69: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00578d6c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00578d6e: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00578d74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578d76u); call_ind(t); }
    /* 00578d76: jmp 0x578da5 */ goto L_00578da5;
L_00578d78:; BB(0x00578d78);
    /* 00578d78: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00578d7e: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 00578d81: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 00578d86: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 00578d89: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00578d8b: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00578d91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578d93u); call_ind(t); }
    /* 00578d93: jmp 0x578da5 */ goto L_00578da5;
L_00578d95:; BB(0x00578d95);
    /* 00578d95: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00578d98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578d99: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00578d9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578d9d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578da0: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x578da5u); f_005dc7d0();
L_00578da5:; BB(0x00578da5);
    /* 00578da5: mov esp, ebp */ r_esp = r_ebp;
    /* 00578da7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578da8: ret 8 */ FN_RET(0x00578cd0); r_esp += 12; return;
}

void f_00578dc0(void) /* SultanSlotRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578dc0);
    /* 00578dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00578dc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578dc6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578dc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00578dcc: cmp dword ptr [eax + 0x18], 4 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578dd0: jne 0x578f20 */ if (!fZ) goto L_00578f20;
L_00578dd6:; BB(0x00578dd6);
    /* 00578dd6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578dd9: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00578ddd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00578dde: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x578de4u); call_ind(t); }
    /* 00578de4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578de7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00578dea: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00578ded: sub eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00578df0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00578df3: cmp dword ptr [ebp - 8], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00578df7: ja 0x578f20 */ if ((!fC&&!fZ)) goto L_00578f20;
L_00578dfd:; BB(0x00578dfd);
    /* 00578dfd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00578e00: movzx edx, byte ptr [ecx + 0x578f4c] */ r_edx = (u32)R8((u32)(r_ecx+0x578f4cu));
    /* 00578e07: jmp dword ptr [edx*4 + 0x578f34] */ { u32 t = R32((u32)(r_edx*4+0x578f34u)); switch (t) { case 0x578eb6u: goto L_00578eb6; case 0x578e0eu: goto L_00578e0e; case 0x578eecu: goto L_00578eec; case 0x578e80u: goto L_00578e80; case 0x578e47u: goto L_00578e47; case 0x578f20u: goto L_00578f20; default: UNSUP(0x00578e07, "jump table entry is not a known target"); } }
L_00578e0e:; BB(0x00578e0e);
    /* 00578e0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578e10: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 00578e15: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00578e1b: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x578e20u); f_005f2a60();
    /* 00578e20: mov ecx, eax */ r_ecx = r_eax;
    /* 00578e22: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x578e27u); f_006026d0();
    /* 00578e27: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00578e2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578e2c: je 0x578e42 */ if (fZ) goto L_00578e42;
L_00578e2e:; BB(0x00578e2e);
    /* 00578e2e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578e30: push 0x30ef5a */ { u32 v = 0x30ef5au; r_esp -= 4; W32(r_esp, v); }
    /* 00578e35: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578e38: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00578e3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578e3d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00578e40: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578e42u); call_ind(t); }
L_00578e42:; BB(0x00578e42);
    /* 00578e42: jmp 0x578f20 */ goto L_00578f20;
L_00578e47:; BB(0x00578e47);
    /* 00578e47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578e49: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00578e4e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00578e54: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x578e59u); f_005f2a60();
    /* 00578e59: mov ecx, eax */ r_ecx = r_eax;
    /* 00578e5b: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x578e60u); f_006026d0();
    /* 00578e60: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00578e63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578e65: je 0x578e7b */ if (fZ) goto L_00578e7b;
L_00578e67:; BB(0x00578e67);
    /* 00578e67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578e69: push 0x30ef5b */ { u32 v = 0x30ef5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00578e6e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578e71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00578e73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578e76: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00578e79: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x578e7bu); call_ind(t); }
L_00578e7b:; BB(0x00578e7b);
    /* 00578e7b: jmp 0x578f20 */ goto L_00578f20;
L_00578e80:; BB(0x00578e80);
    /* 00578e80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578e82: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00578e87: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00578e8d: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x578e92u); f_005f2a60();
    /* 00578e92: mov ecx, eax */ r_ecx = r_eax;
    /* 00578e94: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x578e99u); f_006026d0();
    /* 00578e99: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00578e9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578e9e: je 0x578eb4 */ if (fZ) goto L_00578eb4;
L_00578ea0:; BB(0x00578ea0);
    /* 00578ea0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578ea2: push 0x30ef5e */ { u32 v = 0x30ef5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00578ea7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578eaa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00578eac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578eaf: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00578eb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578eb4u); call_ind(t); }
L_00578eb4:; BB(0x00578eb4);
    /* 00578eb4: jmp 0x578f20 */ goto L_00578f20;
L_00578eb6:; BB(0x00578eb6);
    /* 00578eb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578eb8: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00578ebd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00578ec3: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x578ec8u); f_005f2a60();
    /* 00578ec8: mov ecx, eax */ r_ecx = r_eax;
    /* 00578eca: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x578ecfu); f_006026d0();
    /* 00578ecf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00578ed2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578ed4: je 0x578eea */ if (fZ) goto L_00578eea;
L_00578ed6:; BB(0x00578ed6);
    /* 00578ed6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578ed8: push 0x30ef5c */ { u32 v = 0x30ef5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00578edd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578ee0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00578ee2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578ee5: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00578ee8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x578eeau); call_ind(t); }
L_00578eea:; BB(0x00578eea);
    /* 00578eea: jmp 0x578f20 */ goto L_00578f20;
L_00578eec:; BB(0x00578eec);
    /* 00578eec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578eee: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 00578ef3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00578ef9: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x578efeu); f_005f2a60();
    /* 00578efe: mov ecx, eax */ r_ecx = r_eax;
    /* 00578f00: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x578f05u); f_006026d0();
    /* 00578f05: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00578f08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578f0a: je 0x578f20 */ if (fZ) goto L_00578f20;
L_00578f0c:; BB(0x00578f0c);
    /* 00578f0c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578f0e: push 0x30ef5d */ { u32 v = 0x30ef5du; r_esp -= 4; W32(r_esp, v); }
    /* 00578f13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578f16: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00578f18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578f1b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00578f1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x578f20u); call_ind(t); }
L_00578f20:; BB(0x00578f20);
    /* 00578f20: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00578f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578f24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578f27: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x578f2cu); f_005d7f40();
    /* 00578f2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00578f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578f2f: ret 4 */ FN_RET(0x00578dc0); r_esp += 8; return;
}

void f_00578f60(void) /* SultanSlotRoom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578f60);
    /* 00578f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00578f63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578f64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578f67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578f6a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00578f6d: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x578f72u); f_005fc360();
    /* 00578f72: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578f75: je 0x578f87 */ if (fZ) goto L_00578f87;
L_00578f77:; BB(0x00578f77);
    /* 00578f77: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578f7a: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00578f7d: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x578f82u); f_005fc360();
    /* 00578f82: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578f85: jne 0x578f8f */ if (!fZ) goto L_00578f8f;
L_00578f87:; BB(0x00578f87);
    /* 00578f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578f8a: call 0x579230 */ r_esp -= 4; W32(r_esp, 0x578f8fu); f_00579230();
L_00578f8f:; BB(0x00578f8f);
    /* 00578f8f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578f92: call 0x5d8020 */ r_esp -= 4; W32(r_esp, 0x578f97u); f_005d8020();
    /* 00578f97: mov esp, ebp */ r_esp = r_ebp;
    /* 00578f99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578f9a: ret  */ FN_RET(0x00578f60); r_esp += 4; return;
}

void f_00578fb0(void) /* SultanSlotRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578fb0);
    /* 00578fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00578fb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00578fb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00578fb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578fb9: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x578fbeu); f_005dcb00();
    /* 00578fbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578fc1: mov esp, ebp */ r_esp = r_ebp;
    /* 00578fc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578fc4: ret  */ FN_RET(0x00578fb0); r_esp += 4; return;
}

void f_00578fd0(void) /* SultanSlotRoom::vfunc175 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578fd0);
    /* 00578fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00578fd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00578fd5: push 0x6a65d2 */ { u32 v = 0x6a65d2u; r_esp -= 4; W32(r_esp, v); }
    /* 00578fda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00578fe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578fe1: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578fe4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00578fe9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00578feb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578fec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00578fef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00578ff5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00578ff8: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00578ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00578ffc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578ffe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x579003u); f_005dcb00();
    /* 00579003: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579006: mov ecx, eax */ r_ecx = r_eax;
    /* 00579008: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x57900du); f_005d5ac0();
    /* 0057900d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00579010: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579011: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 00579014: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00579015: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 0057901b: call 0x574cc0 */ r_esp -= 4; W32(r_esp, 0x579020u); f_00574cc0();
    /* 00579020: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00579022: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00579025: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00579028: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0057902b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057902e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057902f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00579032: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579033: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00579036: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x57903bu); f_0064c6a0();
    /* 0057903b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0057903e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579040: je 0x579058 */ if (fZ) goto L_00579058;
L_00579042:; BB(0x00579042);
    /* 00579042: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00579045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579046: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00579049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057904a: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579050: call 0x574ed0 */ r_esp -= 4; W32(r_esp, 0x579055u); f_00574ed0();
    /* 00579055: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00579058:; BB(0x00579058);
    /* 00579058: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 0057905e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00579061: add eax, dword ptr [edx + 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x70u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00579064: cmp eax, 0x3b9ac9ff */ {  u32 a = r_eax; u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00579069: jbe 0x57907c */ if ((fC||fZ)) goto L_0057907c;
L_0057906b:; BB(0x0057906b);
    /* 0057906b: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579071: mov edx, 0x3b9ac9ff */ r_edx = 0x3b9ac9ffu;
    /* 00579076: sub edx, dword ptr [ecx + 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x70u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00579079: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_0057907c:; BB(0x0057907c);
    /* 0057907c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057907f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579080: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00579083: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579084: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 0057908a: call 0x574cc0 */ r_esp -= 4; W32(r_esp, 0x57908fu); f_00574cc0();
    /* 0057908f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00579091: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00579094: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00579097: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057909a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057909d: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005790a0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005790a3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005790a6: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005790a9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005790ac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005790af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005790b0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005790b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005790b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005790b6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5790bbu); f_005dcb00();
    /* 005790bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005790be: mov ecx, eax */ r_ecx = r_eax;
    /* 005790c0: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5790c5u); f_005d5fb0();
    /* 005790c5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005790c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005790c9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005790cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005790cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005790cf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5790d4u); f_005dcb00();
    /* 005790d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005790d7: mov ecx, eax */ r_ecx = r_eax;
    /* 005790d9: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5790deu); f_005d5cf0();
    /* 005790de: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005790e2: je 0x57921d */ if (fZ) goto L_0057921d;
L_005790e8:; BB(0x005790e8);
    /* 005790e8: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 005790ee: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005790f2: jne 0x57910b */ if (!fZ) goto L_0057910b;
L_005790f4:; BB(0x005790f4);
    /* 005790f4: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 005790fa: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005790fe: jne 0x57910b */ if (!fZ) goto L_0057910b;
L_00579100:; BB(0x00579100);
    /* 00579100: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579106: call 0x576220 */ r_esp -= 4; W32(r_esp, 0x57910bu); f_00576220();
L_0057910b:; BB(0x0057910b);
    /* 0057910b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057910e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057910f: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579115: call 0x575c60 */ r_esp -= 4; W32(r_esp, 0x57911au); f_00575c60();
    /* 0057911a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057911c: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00579122: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00579125: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 0057912a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057912d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057912f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00579132: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579134u); call_ind(t); }
    /* 00579134: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579138: jne 0x579144 */ if (!fZ) goto L_00579144;
L_0057913a:; BB(0x0057913a);
    /* 0057913a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057913e: je 0x579203 */ if (fZ) goto L_00579203;
L_00579144:; BB(0x00579144);
    /* 00579144: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579146: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 0057914c: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0057914f: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 00579154: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00579157: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00579159: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057915f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579161u); call_ind(t); }
    /* 00579161: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 00579167: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0057916a: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 0057916f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00579172: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00579174: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00579177: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579179u); call_ind(t); }
    /* 00579179: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0057917b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x579180u); f_00686d82();
    /* 00579180: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00579183: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00579186: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057918d: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00579191: je 0x5791a7 */ if (fZ) goto L_005791a7;
L_00579193:; BB(0x00579193);
    /* 00579193: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00579196: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00579199: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057919a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057919d: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5791a2u); f_006010a0();
    /* 005791a2: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005791a5: jmp 0x5791ae */ goto L_005791ae;
L_005791a7:; BB(0x005791a7);
    /* 005791a7: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005791ae:; BB(0x005791ae);
    /* 005791ae: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005791b1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005791b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005791bb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005791be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005791bf: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 005791c5: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005791c8: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5791cdu); f_005f5d50();
    /* 005791cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005791cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005791d0: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005791d6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005791d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005791da: fld1  */ FPUSH(1.0);
    /* 005791dc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005791df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005791e1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005791e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005791e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005791e7: push 0x18a96 */ { u32 v = 0x18a96u; r_esp -= 4; W32(r_esp, v); }
    /* 005791ec: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005791f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005791f3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005791f9: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005791ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x579201u); call_ind(t); }
    /* 00579201: jmp 0x57921d */ goto L_0057921d;
L_00579203:; BB(0x00579203);
    /* 00579203: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00579205: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057920b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057920e: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00579213: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00579216: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00579218: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057921b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57921du); call_ind(t); }
L_0057921d:; BB(0x0057921d);
    /* 0057921d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00579220: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00579227: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00579228: mov esp, ebp */ r_esp = r_ebp;
    /* 0057922a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057922b: ret 4 */ FN_RET(0x00578fd0); r_esp += 8; return;
}

void f_005792b0(void) /* SultanSlotRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005792b0);
    /* 005792b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005792b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005792b3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005792b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005792b9: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 005792be: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 005792c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005792c2: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005792c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005792c6: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 005792cc: call 0x574cc0 */ r_esp -= 4; W32(r_esp, 0x5792d1u); f_00574cc0();
    /* 005792d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005792d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005792d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005792d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005792d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005792db: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5792e0u); f_005dcb00();
    /* 005792e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005792e3: mov ecx, eax */ r_ecx = r_eax;
    /* 005792e5: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5792eau); f_005d5fb0();
    /* 005792ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005792ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005792ee: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005792f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005792f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005792f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005792f6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5792fbu); f_005dcb00();
    /* 005792fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005792fe: mov ecx, eax */ r_ecx = r_eax;
    /* 00579300: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x579305u); f_005d5cf0();
    /* 00579305: mov edx, dword ptr [0x79345c] */ r_edx = R32((u32)(0x79345cu));
    /* 0057930b: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
    /* 00579312: mov eax, dword ptr [0x79345c] */ r_eax = R32((u32)(0x79345cu));
    /* 00579317: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 0057931e: mov esp, ebp */ r_esp = r_ebp;
    /* 00579320: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579321: ret 4 */ FN_RET(0x005792b0); r_esp += 8; return;
}

void f_00579330(void) /* SultanSlotRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00579330);
    /* 00579330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00579331: mov ebp, esp */ r_ebp = r_esp;
    /* 00579333: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00579336: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00579339: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0057933b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00579341: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x579346u); f_006375b0();
    /* 00579346: mov ecx, eax */ r_ecx = r_eax;
    /* 00579348: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x57934du); f_0063aae0();
    /* 0057934d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00579350: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00579353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00579354: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x579359u); f_005dcb00();
    /* 00579359: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057935c: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 00579362: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579363: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00579369: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057936a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057936d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057936e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00579371: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x579376u); f_0064c5c0();
    /* 00579376: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00579378: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0057937b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057937e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00579380: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00579383: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00579386: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00579387: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x57938cu); f_005dcb00();
    /* 0057938c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057938f: mov ecx, eax */ r_ecx = r_eax;
    /* 00579391: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x579396u); f_0063b0a0();
    /* 00579396: mov esp, ebp */ r_esp = r_ebp;
    /* 00579398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00579399: ret 4 */ FN_RET(0x00579330); r_esp += 8; return;
}

void f_005793a0(void) /* SultanSlotRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005793a0);
    /* 005793a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005793a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005793a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005793a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005793a7: mov ecx, dword ptr [0x79345c] */ r_ecx = R32((u32)(0x79345cu));
    /* 005793ad: call 0x575b20 */ r_esp -= 4; W32(r_esp, 0x5793b2u); f_00575b20();
    /* 005793b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005793b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005793b5: ret  */ FN_RET(0x005793a0); r_esp += 4; return;
}

