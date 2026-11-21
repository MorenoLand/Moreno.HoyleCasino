#include "protos.h"

void f_0064aab0(void) /* Plaque::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064aab0);
    /* 0064aab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064aab1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064aab3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064aab5: push 0x6abed0 */ { u32 v = 0x6abed0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064aaba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064aac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064aac1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064aac4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064aac9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064aacb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064aacc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064aacf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064aad5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064aad8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064aadb: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x64aae0u); f_005f5bf0();
    /* 0064aae0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064aae7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064aaea: mov dword ptr [eax], 0x6dc9e4 */ W32((u32)(r_eax), 0x6dc9e4u);
    /* 0064aaf0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064aaf3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064aaf6: mov dword ptr [ecx + 0x184], edx */ W32((u32)(r_ecx+0x184u), r_edx);
    /* 0064aafc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064aaff: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064ab02: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0064ab05: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ab08: mov dword ptr [edx + 0x18c], 0 */ W32((u32)(r_edx+0x18cu), 0x0u);
    /* 0064ab12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ab15: mov dword ptr [eax + 0x190], 0 */ W32((u32)(r_eax+0x190u), 0x0u);
    /* 0064ab1f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ab22: mov dword ptr [ecx + 0x194], 0 */ W32((u32)(r_ecx+0x194u), 0x0u);
    /* 0064ab2c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0064ab33: jmp 0x64ab3e */ goto L_0064ab3e;
L_0064ab35:; BB(0x0064ab35);
    /* 0064ab35: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064ab38: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064ab3b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0064ab3e:; BB(0x0064ab3e);
    /* 0064ab3e: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064ab42: jge 0x64ab57 */ if ((fS==fO)) goto L_0064ab57;
L_0064ab44:; BB(0x0064ab44);
    /* 0064ab44: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064ab47: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ab4a: mov dword ptr [ecx + eax*4 + 0x198], 0 */ W32((u32)(r_ecx+r_eax*4+0x198u), 0x0u);
    /* 0064ab55: jmp 0x64ab35 */ goto L_0064ab35;
L_0064ab57:; BB(0x0064ab57);
    /* 0064ab57: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ab5a: mov dword ptr [edx + 0x1a4], 0 */ W32((u32)(r_edx+0x1a4u), 0x0u);
    /* 0064ab64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ab66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ab69: call 0x5eb700 */ r_esp -= 4; W32(r_esp, 0x64ab6eu); f_005eb700();
    /* 0064ab6e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064ab75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ab78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064ab7b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064ab82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ab83: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ab85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ab86: ret 8 */ FN_RET(0x0064aab0); r_esp += 12; return;
}

void f_0064ab90(void) /* Plaque::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ab90);
    /* 0064ab90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ab91: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ab93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ab95: push 0x6abef3 */ { u32 v = 0x6abef3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ab9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064aba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064aba1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064aba4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064aba9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064abab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064abac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064abaf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064abb5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0064abb8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064abbb: mov dword ptr [eax], 0x6dc9e4 */ W32((u32)(r_eax), 0x6dc9e4u);
    /* 0064abc1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064abc8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064abcb: cmp dword ptr [ecx + 0x18c], 0 */ {  u32 a = R32((u32)(r_ecx+0x18cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064abd2: je 0x64ac13 */ if (fZ) goto L_0064ac13;
L_0064abd4:; BB(0x0064abd4);
    /* 0064abd4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064abd7: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0064abdd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064abe0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064abe3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064abe6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064abea: je 0x64abff */ if (fZ) goto L_0064abff;
L_0064abec:; BB(0x0064abec);
    /* 0064abec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064abee: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064abf1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064abf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064abf6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064abf8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64abfau); call_ind(t); }
    /* 0064abfa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0064abfd: jmp 0x64ac06 */ goto L_0064ac06;
L_0064abff:; BB(0x0064abff);
    /* 0064abff: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064ac06:; BB(0x0064ac06);
    /* 0064ac06: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ac09: mov dword ptr [eax + 0x18c], 0 */ W32((u32)(r_eax+0x18cu), 0x0u);
L_0064ac13:; BB(0x0064ac13);
    /* 0064ac13: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ac16: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ac1d: je 0x64ac5e */ if (fZ) goto L_0064ac5e;
L_0064ac1f:; BB(0x0064ac1f);
    /* 0064ac1f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ac22: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0064ac28: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064ac2b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064ac2e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064ac31: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ac35: je 0x64ac4a */ if (fZ) goto L_0064ac4a;
L_0064ac37:; BB(0x0064ac37);
    /* 0064ac37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ac39: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ac3c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064ac3e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ac41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ac43: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64ac45u); call_ind(t); }
    /* 0064ac45: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0064ac48: jmp 0x64ac51 */ goto L_0064ac51;
L_0064ac4a:; BB(0x0064ac4a);
    /* 0064ac4a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0064ac51:; BB(0x0064ac51);
    /* 0064ac51: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ac54: mov dword ptr [eax + 0x190], 0 */ W32((u32)(r_eax+0x190u), 0x0u);
L_0064ac5e:; BB(0x0064ac5e);
    /* 0064ac5e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ac61: cmp dword ptr [ecx + 0x194], 0 */ {  u32 a = R32((u32)(r_ecx+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ac68: je 0x64aca9 */ if (fZ) goto L_0064aca9;
L_0064ac6a:; BB(0x0064ac6a);
    /* 0064ac6a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ac6d: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0064ac73: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064ac76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064ac79: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064ac7c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ac80: je 0x64ac95 */ if (fZ) goto L_0064ac95;
L_0064ac82:; BB(0x0064ac82);
    /* 0064ac82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ac84: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ac87: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064ac89: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ac8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ac8e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64ac90u); call_ind(t); }
    /* 0064ac90: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0064ac93: jmp 0x64ac9c */ goto L_0064ac9c;
L_0064ac95:; BB(0x0064ac95);
    /* 0064ac95: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0064ac9c:; BB(0x0064ac9c);
    /* 0064ac9c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ac9f: mov dword ptr [eax + 0x194], 0 */ W32((u32)(r_eax+0x194u), 0x0u);
L_0064aca9:; BB(0x0064aca9);
    /* 0064aca9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064acac: call 0x64b830 */ r_esp -= 4; W32(r_esp, 0x64acb1u); f_0064b830();
    /* 0064acb1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064acb8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064acbb: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x64acc0u); f_005f5c40();
    /* 0064acc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064acc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064acca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064accb: mov esp, ebp */ r_esp = r_ebp;
    /* 0064accd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064acce: ret  */ FN_RET(0x0064ab90); r_esp += 4; return;
}

void f_0064acd0(void) /* Plaque::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064acd0);
    /* 0064acd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064acd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064acd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064acd5: push 0x6abf2f */ { u32 v = 0x6abf2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064acda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064ace0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ace1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064ace4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064ace9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064aceb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064acec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064acef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064acf5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0064acf8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064acfb: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x64ad00u); f_005f5cc0();
    /* 0064ad00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad02: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0064ad07: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ad09: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064ad0f: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0064ad15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ad17u); call_ind(t); }
    /* 0064ad17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad18: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ad1b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64ad20u); f_005eaf00();
    /* 0064ad20: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ad23: mov byte ptr [ecx + 0x188], 0 */ W8((u32)(r_ecx+0x188u), 0x0u);
    /* 0064ad2a: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad2f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64ad34u); f_00686d82();
    /* 0064ad34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ad37: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064ad3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064ad41: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ad45: je 0x64ad54 */ if (fZ) goto L_0064ad54;
L_0064ad47:; BB(0x0064ad47);
    /* 0064ad47: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ad4a: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x64ad4fu); f_005ec5a0();
    /* 0064ad4f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0064ad52: jmp 0x64ad5b */ goto L_0064ad5b;
L_0064ad54:; BB(0x0064ad54);
    /* 0064ad54: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064ad5b:; BB(0x0064ad5b);
    /* 0064ad5b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064ad5e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0064ad61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064ad68: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ad6b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064ad6e: mov dword ptr [eax + 0x18c], ecx */ W32((u32)(r_eax+0x18cu), r_ecx);
    /* 0064ad74: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ad77: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0064ad7d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ad80: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064ad83: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0064ad86: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad88: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad90: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad92: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ad95: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64ad9au); f_005f5550();
    /* 0064ad9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ad9b: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0064ada0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ada2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064ada8: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 0064adae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64adb0u); call_ind(t); }
    /* 0064adb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064adb1: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064adb7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064adb9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064adbf: mov eax, dword ptr [edx + 0x19c] */ r_eax = R32((u32)(r_edx+0x19cu));
    /* 0064adc5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64adc7u); call_ind(t); }
    /* 0064adc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064adc8: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064adcd: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064add0: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0064add6: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x64addbu); f_005ec8f0();
    /* 0064addb: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ade0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64ade5u); f_00686d82();
    /* 0064ade5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ade8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064adeb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064adf2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064adf6: je 0x64ae05 */ if (fZ) goto L_0064ae05;
L_0064adf8:; BB(0x0064adf8);
    /* 0064adf8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064adfb: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x64ae00u); f_005ec5a0();
    /* 0064ae00: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0064ae03: jmp 0x64ae0c */ goto L_0064ae0c;
L_0064ae05:; BB(0x0064ae05);
    /* 0064ae05: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0064ae0c:; BB(0x0064ae0c);
    /* 0064ae0c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0064ae0f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0064ae12: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064ae19: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ae1c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064ae1f: mov dword ptr [eax + 0x190], ecx */ W32((u32)(r_eax+0x190u), r_ecx);
    /* 0064ae25: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ae28: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0064ae2e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ae31: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064ae34: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0064ae37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae39: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae41: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae43: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ae46: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x64ae4bu); f_005f5550();
    /* 0064ae4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae4c: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0064ae51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064ae53: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064ae59: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 0064ae5f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ae61u); call_ind(t); }
    /* 0064ae61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae62: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064ae68: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064ae6a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064ae70: mov eax, dword ptr [edx + 0x1a0] */ r_eax = R32((u32)(r_edx+0x1a0u));
    /* 0064ae76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ae78u); call_ind(t); }
    /* 0064ae78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae79: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae7e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ae81: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0064ae87: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x64ae8cu); f_005ec8f0();
    /* 0064ae8c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ae91: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64ae96u); f_00686d82();
    /* 0064ae96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ae99: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064ae9c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0064aea3: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064aea7: je 0x64aeb6 */ if (fZ) goto L_0064aeb6;
L_0064aea9:; BB(0x0064aea9);
    /* 0064aea9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064aeac: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x64aeb1u); f_005eaaf0();
    /* 0064aeb1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0064aeb4: jmp 0x64aebd */ goto L_0064aebd;
L_0064aeb6:; BB(0x0064aeb6);
    /* 0064aeb6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0064aebd:; BB(0x0064aebd);
    /* 0064aebd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0064aec0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0064aec3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064aeca: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064aecd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064aed0: mov dword ptr [eax + 0x194], ecx */ W32((u32)(r_eax+0x194u), r_ecx);
    /* 0064aed6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064aed9: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0064aedf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064aee2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064aee5: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0064aee8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064aeeb: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0064aef1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064aef4: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0064aefa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064aefc: mov ecx, eax */ r_ecx = r_eax;
    /* 0064aefe: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0064af01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64af03u); call_ind(t); }
    /* 0064af03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064af06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064af0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064af0e: mov esp, ebp */ r_esp = r_ebp;
    /* 0064af10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064af11: ret  */ FN_RET(0x0064acd0); r_esp += 4; return;
}

void f_0064af20(void) /* Plaque::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064af20);
    /* 0064af20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064af21: mov ebp, esp */ r_ebp = r_esp;
    /* 0064af23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064af24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064af27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064af2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064af2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064af2e: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x64af33u); f_005f5300();
    /* 0064af33: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064af36: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064af39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064af3a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064af3d: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0064af43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064af46: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0064af4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064af4e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064af51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64af53u); call_ind(t); }
    /* 0064af53: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064af56: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064af59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064af5a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064af5d: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0064af63: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064af66: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0064af6c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064af6e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064af71: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64af73u); call_ind(t); }
    /* 0064af73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064af76: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064af79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064af7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064af7d: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 0064af83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064af86: mov ecx, dword ptr [ecx + 0x194] */ r_ecx = R32((u32)(r_ecx+0x194u));
    /* 0064af8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064af8e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064af91: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64af93u); call_ind(t); }
    /* 0064af93: mov esp, ebp */ r_esp = r_ebp;
    /* 0064af95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064af96: ret 4 */ FN_RET(0x0064af20); r_esp += 8; return;
}

void f_0064b350(void) /* Plaque::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b350);
    /* 0064b350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b351: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064b357: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b35a: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0064b360: mov byte ptr [ecx + 0x5c], 1 */ W8((u32)(r_ecx+0x5cu), 0x1u);
    /* 0064b364: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b367: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x64b36cu); f_005eb5a0();
    /* 0064b36c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b36f: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0064b375: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b378: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0064b37e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064b380: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064b383: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b385u); call_ind(t); }
    /* 0064b385: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b388: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0064b38e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b391: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0064b397: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064b399: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064b39c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b39eu); call_ind(t); }
    /* 0064b39e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b3a1: mov edx, dword ptr [ecx + 0x194] */ r_edx = R32((u32)(r_ecx+0x194u));
    /* 0064b3a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b3aa: mov ecx, dword ptr [eax + 0x194] */ r_ecx = R32((u32)(r_eax+0x194u));
    /* 0064b3b0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064b3b2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064b3b5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b3b7u); call_ind(t); }
    /* 0064b3b7: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b3b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b3ba: ret  */ FN_RET(0x0064b350); r_esp += 4; return;
}

void f_0064b540(void) /* Plaque::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b540);
    /* 0064b540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b541: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b543: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064b546: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064b547: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064b54a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b54d: call 0x5f5cf0 */ r_esp -= 4; W32(r_esp, 0x64b552u); f_005f5cf0();
    /* 0064b552: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064b554: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064b559: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064b55b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064b561: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0064b567: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b569u); call_ind(t); }
    /* 0064b569: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064b56c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b56e: je 0x64b57f */ if (fZ) goto L_0064b57f;
L_0064b570:; BB(0x0064b570);
    /* 0064b570: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b573: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x64b578u); f_005f54c0();
    /* 0064b578: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0064b57b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b57d: je 0x64b584 */ if (fZ) goto L_0064b584;
L_0064b57f:; BB(0x0064b57f);
    /* 0064b57f: jmp 0x64b635 */ goto L_0064b635;
L_0064b584:; BB(0x0064b584);
    /* 0064b584: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0064b589: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064b58b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064b591: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0064b597: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b599u); call_ind(t); }
    /* 0064b599: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b59c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064b59e: cmp eax, dword ptr [ecx + 0x184] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x184u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b5a4: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0064b5a7: mov byte ptr [ebp - 5], dl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_edx);
    /* 0064b5aa: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0064b5ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b5b0: je 0x64b613 */ if (fZ) goto L_0064b613;
L_0064b5b2:; BB(0x0064b5b2);
    /* 0064b5b2: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x64b5b8u); call_ind(t); }
    /* 0064b5b8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064b5bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b5be: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b5c1: sub esi, dword ptr [ecx + 0x1a4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x1a4u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0064b5c7: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064b5cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064b5cf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064b5d5: mov edx, dword ptr [eax + 0x150] */ r_edx = R32((u32)(r_eax+0x150u));
    /* 0064b5db: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64b5ddu); call_ind(t); }
    /* 0064b5dd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0064b5df: jb 0x64b611 */ if (fC) goto L_0064b611;
L_0064b5e1:; BB(0x0064b5e1);
    /* 0064b5e1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b5e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b5e7: mov dword ptr [eax + 0x1a4], ecx */ W32((u32)(r_eax+0x1a4u), r_ecx);
    /* 0064b5ed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b5f0: movzx eax, byte ptr [edx + 0x188] */ r_eax = (u32)R8((u32)(r_edx+0x188u));
    /* 0064b5f7: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0064b5f9: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0064b5fb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064b5fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b601: mov byte ptr [ecx + 0x188], al */ W8((u32)(r_ecx+0x188u), (u8)r_eax);
    /* 0064b607: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b609: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b60c: call 0x64afa0 */ r_esp -= 4; W32(r_esp, 0x64b611u); f_0064afa0();
L_0064b611:; BB(0x0064b611);
    /* 0064b611: jmp 0x64b635 */ goto L_0064b635;
L_0064b613:; BB(0x0064b613);
    /* 0064b613: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b616: movzx eax, byte ptr [edx + 0x188] */ r_eax = (u32)R8((u32)(r_edx+0x188u));
    /* 0064b61d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064b61f: je 0x64b635 */ if (fZ) goto L_0064b635;
L_0064b621:; BB(0x0064b621);
    /* 0064b621: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b624: mov byte ptr [ecx + 0x188], 0 */ W8((u32)(r_ecx+0x188u), 0x0u);
    /* 0064b62b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064b62d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064b630: call 0x64afa0 */ r_esp -= 4; W32(r_esp, 0x64b635u); f_0064afa0();
L_0064b635:; BB(0x0064b635);
    /* 0064b635: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064b636: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b638: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b639: ret  */ FN_RET(0x0064b540); r_esp += 4; return;
}

void f_0064b8b0(void) /* Plaque::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b8b0);
    /* 0064b8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b8b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b8b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064b8b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064b8ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b8bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b8be: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x64b8c3u); f_005f4ed0();
    /* 0064b8c3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064b8c6: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0064b8ca: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b8cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b8cd: ret 4 */ FN_RET(0x0064b8b0); r_esp += 8; return;
}

void f_0064b8d0(void) /* Plaque::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064b8d0);
    /* 0064b8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064b8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064b8d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b8d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064b8d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064b8da: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 0064b8de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b8e1: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 0064b8e5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b8e8: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 0064b8ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064b8ef: mov ecx, dword ptr [eax + 0x184] */ r_ecx = R32((u32)(r_eax+0x184u));
    /* 0064b8f5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064b8f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064b8f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064b8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064b8fd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064b903: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064b905: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064b90b: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 0064b911: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64b913u); call_ind(t); }
    /* 0064b913: mov esp, ebp */ r_esp = r_ebp;
    /* 0064b915: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064b916: ret 4 */ FN_RET(0x0064b8d0); r_esp += 8; return;
}

