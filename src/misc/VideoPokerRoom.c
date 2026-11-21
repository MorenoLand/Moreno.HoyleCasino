#include "protos.h"

void f_00555ab0(void) /* VideoPokerRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555ab0);
    /* 00555ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00555ab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555ab7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555aba: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x555abfu); f_005d7b60();
    /* 00555abf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555ac2: mov dword ptr [eax], 0x6c86c4 */ W32((u32)(r_eax), 0x6c86c4u);
    /* 00555ac8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555acb: mov dword ptr [0x79341c], ecx */ W32((u32)(0x79341cu), r_ecx);
    /* 00555ad1: mov dword ptr [0x793420], 0 */ W32((u32)(0x793420u), 0x0u);
    /* 00555adb: mov dword ptr [0x793424], 0 */ W32((u32)(0x793424u), 0x0u);
    /* 00555ae5: mov dword ptr [0x793428], 0 */ W32((u32)(0x793428u), 0x0u);
    /* 00555aef: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555af2: mov esp, ebp */ r_esp = r_ebp;
    /* 00555af4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555af5: ret  */ FN_RET(0x00555ab0); r_esp += 4; return;
}

void f_00555b00(void) /* VideoPokerRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555b00);
    /* 00555b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00555b03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555b05: push 0x6a56a8 */ { u32 v = 0x6a56a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00555b0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00555b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555b11: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555b14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00555b19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00555b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555b1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00555b1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00555b25: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00555b28: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00555b2b: mov dword ptr [eax], 0x6c86c4 */ W32((u32)(r_eax), 0x6c86c4u);
    /* 00555b31: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00555b38: mov dword ptr [0x79341c], 0 */ W32((u32)(0x79341cu), 0x0u);
    /* 00555b42: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555b48: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00555b4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555b4e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00555b51: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555b55: je 0x555b6a */ if (fZ) goto L_00555b6a;
L_00555b57:; BB(0x00555b57);
    /* 00555b57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00555b59: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00555b5c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00555b5e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00555b61: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00555b63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555b65u); call_ind(t); }
    /* 00555b65: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00555b68: jmp 0x555b71 */ goto L_00555b71;
L_00555b6a:; BB(0x00555b6a);
    /* 00555b6a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00555b71:; BB(0x00555b71);
    /* 00555b71: mov dword ptr [0x793420], 0 */ W32((u32)(0x793420u), 0x0u);
    /* 00555b7b: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00555b81: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00555b84: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555b87: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00555b8a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555b8e: je 0x555ba3 */ if (fZ) goto L_00555ba3;
L_00555b90:; BB(0x00555b90);
    /* 00555b90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00555b92: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555b95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00555b97: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555b9a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00555b9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555b9eu); call_ind(t); }
    /* 00555b9e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00555ba1: jmp 0x555baa */ goto L_00555baa;
L_00555ba3:; BB(0x00555ba3);
    /* 00555ba3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00555baa:; BB(0x00555baa);
    /* 00555baa: mov dword ptr [0x793424], 0 */ W32((u32)(0x793424u), 0x0u);
    /* 00555bb4: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 00555bba: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00555bbd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00555bc0: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00555bc3: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555bc7: je 0x555bdc */ if (fZ) goto L_00555bdc;
L_00555bc9:; BB(0x00555bc9);
    /* 00555bc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00555bcb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555bce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00555bd0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555bd3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00555bd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555bd7u); call_ind(t); }
    /* 00555bd7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00555bda: jmp 0x555be3 */ goto L_00555be3;
L_00555bdc:; BB(0x00555bdc);
    /* 00555bdc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00555be3:; BB(0x00555be3);
    /* 00555be3: mov dword ptr [0x793428], 0 */ W32((u32)(0x793428u), 0x0u);
    /* 00555bed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00555bf4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00555bf7: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x555bfcu); f_005d7bd0();
    /* 00555bfc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00555bff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00555c06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00555c07: mov esp, ebp */ r_esp = r_ebp;
    /* 00555c09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555c0a: ret  */ FN_RET(0x00555b00); r_esp += 4; return;
}

void f_00555c10(void) /* VideoPokerRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555c10);
    /* 00555c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00555c13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555c15: push 0x6a56e4 */ { u32 v = 0x6a56e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00555c1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00555c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555c21: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555c24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00555c29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00555c2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555c2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00555c2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00555c35: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00555c38: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00555c3b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x555c40u); f_005d8230();
    /* 00555c40: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00555c42: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x555c47u); f_00686d82();
    /* 00555c47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555c4a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00555c4d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00555c54: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555c58: je 0x555c67 */ if (fZ) goto L_00555c67;
L_00555c5a:; BB(0x00555c5a);
    /* 00555c5a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00555c5d: call 0x5570e0 */ r_esp -= 4; W32(r_esp, 0x555c62u); f_005570e0();
    /* 00555c62: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00555c65: jmp 0x555c6e */ goto L_00555c6e;
L_00555c67:; BB(0x00555c67);
    /* 00555c67: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00555c6e:; BB(0x00555c6e);
    /* 00555c6e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00555c71: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00555c74: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00555c7b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00555c7e: mov dword ptr [0x793420], ecx */ W32((u32)(0x793420u), r_ecx);
    /* 00555c84: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555c8a: call 0x5571c0 */ r_esp -= 4; W32(r_esp, 0x555c8fu); f_005571c0();
    /* 00555c8f: call 0x552620 */ r_esp -= 4; W32(r_esp, 0x555c94u); f_00552620();
    /* 00555c94: mov dword ptr [0x793424], eax */ W32((u32)(0x793424u), r_eax);
    /* 00555c99: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00555c9f: call 0x553010 */ r_esp -= 4; W32(r_esp, 0x555ca4u); f_00553010();
    /* 00555ca4: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00555ca6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x555cabu); f_00686d82();
    /* 00555cab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555cae: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00555cb1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00555cb8: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555cbc: je 0x555ccb */ if (fZ) goto L_00555ccb;
L_00555cbe:; BB(0x00555cbe);
    /* 00555cbe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00555cc1: call 0x54c3f0 */ r_esp -= 4; W32(r_esp, 0x555cc6u); f_0054c3f0();
    /* 00555cc6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00555cc9: jmp 0x555cd2 */ goto L_00555cd2;
L_00555ccb:; BB(0x00555ccb);
    /* 00555ccb: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00555cd2:; BB(0x00555cd2);
    /* 00555cd2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00555cd5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00555cd8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00555cdf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00555ce2: mov dword ptr [0x793428], eax */ W32((u32)(0x793428u), r_eax);
    /* 00555ce7: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555ced: call 0x558190 */ r_esp -= 4; W32(r_esp, 0x555cf2u); f_00558190();
    /* 00555cf2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00555cf4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x555cf9u); f_00686d82();
    /* 00555cf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00555cfc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00555cff: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00555d06: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555d0a: je 0x555d27 */ if (fZ) goto L_00555d27;
L_00555d0c:; BB(0x00555d0c);
    /* 00555d0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555d0e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00555d11: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x555d16u); f_005fc0d0();
    /* 00555d16: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00555d19: mov dword ptr [ecx], 0x6c89c4 */ W32((u32)(r_ecx), 0x6c89c4u);
    /* 00555d1f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00555d22: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00555d25: jmp 0x555d2e */ goto L_00555d2e;
L_00555d27:; BB(0x00555d27);
    /* 00555d27: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00555d2e:; BB(0x00555d2e);
    /* 00555d2e: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00555d31: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00555d34: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00555d3b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00555d3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555d3f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00555d42: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x555d47u); f_005f1b70();
    /* 00555d47: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00555d4d: mov al, byte ptr [edx + 0x25] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x25u))) & 0xffu);
    /* 00555d50: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 00555d53: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 00555d57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555d59: je 0x555d72 */ if (fZ) goto L_00555d72;
L_00555d5b:; BB(0x00555d5b);
    /* 00555d5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00555d5d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00555d60: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00555d63: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00555d66: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00555d69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00555d6b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00555d6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555d70u); call_ind(t); }
    /* 00555d70: jmp 0x555d85 */ goto L_00555d85;
L_00555d72:; BB(0x00555d72);
    /* 00555d72: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00555d75: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00555d78: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00555d7b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00555d7e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00555d80: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00555d83: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x555d85u); call_ind(t); }
L_00555d85:; BB(0x00555d85);
    /* 00555d85: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00555d88: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00555d8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00555d90: mov esp, ebp */ r_esp = r_ebp;
    /* 00555d92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555d93: ret  */ FN_RET(0x00555c10); r_esp += 4; return;
}

void f_00555da0(void) /* VideoPokerRoom::vfunc155 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555da0);
    /* 00555da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00555da3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555da4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555da7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00555daa: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00555db0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00555db3: mov dword ptr [ecx], 0x3b9aca00 */ W32((u32)(r_ecx), 0x3b9aca00u);
    /* 00555db9: mov esp, ebp */ r_esp = r_ebp;
    /* 00555dbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555dbc: ret 8 */ FN_RET(0x00555da0); r_esp += 12; return;
}

void f_00555dc0(void) /* VideoPokerRoom::vfunc149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555dc0);
    /* 00555dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00555dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555dc7: mov eax, 0x30ef58 */ r_eax = 0x30ef58u;
    /* 00555dcc: mov esp, ebp */ r_esp = r_ebp;
    /* 00555dce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555dcf: ret  */ FN_RET(0x00555dc0); r_esp += 4; return;
}

void f_00555dd0(void) /* VideoPokerRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555dd0);
    /* 00555dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00555dd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555dd6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555dd9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00555ddc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00555ddf: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555de6: je 0x555e03 */ if (fZ) goto L_00555e03;
L_00555de8:; BB(0x00555de8);
    /* 00555de8: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555def: je 0x555e6d */ if (fZ) goto L_00555e6d;
L_00555df1:; BB(0x00555df1);
    /* 00555df1: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555df8: je 0x555e99 */ if (fZ) goto L_00555e99;
L_00555dfe:; BB(0x00555dfe);
    /* 00555dfe: jmp 0x555ece */ goto L_00555ece;
L_00555e03:; BB(0x00555e03);
    /* 00555e03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e05: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555e0d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x555e12u); f_005fe640();
    /* 00555e12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e14: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e19: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555e1c: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x555e21u); f_005fe640();
    /* 00555e21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e23: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e28: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555e2b: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x555e30u); f_005fe640();
    /* 00555e30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e32: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555e3a: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x555e3fu); f_005fe640();
    /* 00555e3f: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 00555e46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00555e48: jne 0x555e5f */ if (!fZ) goto L_00555e5f;
L_00555e4a:; BB(0x00555e4a);
    /* 00555e4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e4c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555e4e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555e50: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e55: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555e58: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x555e5du); f_005fe240();
    /* 00555e5d: jmp 0x555e6b */ goto L_00555e6b;
L_00555e5f:; BB(0x00555e5f);
    /* 00555e5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e61: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00555e63: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555e66: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x555e6bu); f_005fe640();
L_00555e6b:; BB(0x00555e6b);
    /* 00555e6b: jmp 0x555ece */ goto L_00555ece;
L_00555e6d:; BB(0x00555e6d);
    /* 00555e6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e6f: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e74: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555e77: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x555e7cu); f_005fe640();
    /* 00555e7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e7e: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e83: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555e86: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x555e8bu); f_005fe640();
    /* 00555e8b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e8d: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00555e8f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555e92: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x555e97u); f_005fe640();
    /* 00555e97: jmp 0x555ece */ goto L_00555ece;
L_00555e99:; BB(0x00555e99);
    /* 00555e99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555e9b: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 00555ea0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555ea3: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x555ea8u); f_005fe640();
    /* 00555ea8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555eaa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555eac: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555eae: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 00555eb3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555eb6: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x555ebbu); f_005fe240();
    /* 00555ebb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555ebd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555ebf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00555ec1: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 00555ec6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00555ec9: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x555eceu); f_005fe240();
L_00555ece:; BB(0x00555ece);
    /* 00555ece: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00555ed1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ed2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00555ed5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555ed6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555ed9: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x555edeu); f_005d8670();
    /* 00555ede: mov esp, ebp */ r_esp = r_ebp;
    /* 00555ee0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555ee1: ret 8 */ FN_RET(0x00555dd0); r_esp += 12; return;
}

void f_00555ef0(void) /* VideoPokerRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555ef0);
    /* 00555ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00555ef3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00555ef4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555ef7: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 00555efc: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00555f02: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x555f07u); f_005df2e0();
    /* 00555f07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00555f08: push 0x30f341 */ { u32 v = 0x30f341u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555f10: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x555f15u); f_005f1e60();
    /* 00555f15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00555f18: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x555f1du); f_0064e430();
    /* 00555f1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00555f1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00555f20: ret  */ FN_RET(0x00555ef0); r_esp += 4; return;
}

void f_00555f30(void) /* VideoPokerRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00555f30);
    /* 00555f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00555f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00555f33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00555f36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00555f39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00555f3c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00555f3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555f42: sub ecx, 0x30f342 */ {  u32 a = r_ecx; u32 b = 0x30f342u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00555f48: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00555f4b: cmp dword ptr [ebp - 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00555f4f: ja 0x55600d */ if ((!fC&&!fZ)) goto L_0055600d;
L_00555f55:; BB(0x00555f55);
    /* 00555f55: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00555f58: jmp dword ptr [edx*4 + 0x556024] */ { u32 t = R32((u32)(r_edx*4+0x556024u)); switch (t) { case 0x555f5fu: goto L_00555f5f; case 0x555f71u: goto L_00555f71; case 0x555f83u: goto L_00555f83; case 0x555f95u: goto L_00555f95; case 0x555fa4u: goto L_00555fa4; case 0x555fb3u: goto L_00555fb3; case 0x555fc2u: goto L_00555fc2; case 0x555fd1u: goto L_00555fd1; case 0x555fe0u: goto L_00555fe0; case 0x555fefu: goto L_00555fef; case 0x555ffeu: goto L_00555ffe; default: UNSUP(0x00555f58, "jump table entry is not a known target"); } }
L_00555f5f:; BB(0x00555f5f);
    /* 00555f5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f61: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555f67: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x555f6cu); f_005580f0();
    /* 00555f6c: jmp 0x55601d */ goto L_0055601d;
L_00555f71:; BB(0x00555f71);
    /* 00555f71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f73: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555f79: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x555f7eu); f_005580f0();
    /* 00555f7e: jmp 0x55601d */ goto L_0055601d;
L_00555f83:; BB(0x00555f83);
    /* 00555f83: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f85: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555f8b: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x555f90u); f_005580f0();
    /* 00555f90: jmp 0x55601d */ goto L_0055601d;
L_00555f95:; BB(0x00555f95);
    /* 00555f95: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00555f97: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555f9d: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x555fa2u); f_005580f0();
    /* 00555fa2: jmp 0x55601d */ goto L_0055601d;
L_00555fa4:; BB(0x00555fa4);
    /* 00555fa4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00555fa6: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555fac: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x555fb1u); f_005580f0();
    /* 00555fb1: jmp 0x55601d */ goto L_0055601d;
L_00555fb3:; BB(0x00555fb3);
    /* 00555fb3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00555fb5: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555fbb: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x555fc0u); f_00557ae0();
    /* 00555fc0: jmp 0x55601d */ goto L_0055601d;
L_00555fc2:; BB(0x00555fc2);
    /* 00555fc2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00555fc4: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555fca: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x555fcfu); f_00557ae0();
    /* 00555fcf: jmp 0x55601d */ goto L_0055601d;
L_00555fd1:; BB(0x00555fd1);
    /* 00555fd1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00555fd3: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555fd9: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x555fdeu); f_00557ae0();
    /* 00555fde: jmp 0x55601d */ goto L_0055601d;
L_00555fe0:; BB(0x00555fe0);
    /* 00555fe0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00555fe2: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555fe8: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x555fedu); f_00557ae0();
    /* 00555fed: jmp 0x55601d */ goto L_0055601d;
L_00555fef:; BB(0x00555fef);
    /* 00555fef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00555ff1: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00555ff7: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x555ffcu); f_00557ae0();
    /* 00555ffc: jmp 0x55601d */ goto L_0055601d;
L_00555ffe:; BB(0x00555ffe);
    /* 00555ffe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00556000: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00556006: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x55600bu); f_00557ae0();
    /* 0055600b: jmp 0x55601d */ goto L_0055601d;
L_0055600d:; BB(0x0055600d);
    /* 0055600d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00556010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556011: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556014: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556015: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556018: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x55601du); f_005dc7d0();
L_0055601d:; BB(0x0055601d);
    /* 0055601d: mov esp, ebp */ r_esp = r_ebp;
    /* 0055601f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556020: ret 8 */ FN_RET(0x00555f30); r_esp += 12; return;
}

void f_00556050(void) /* VideoPokerRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556050);
    /* 00556050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556051: mov ebp, esp */ r_ebp = r_esp;
    /* 00556053: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00556056: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556059: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055605c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055605d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00556060: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x556065u); f_005d7f40();
    /* 00556065: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556068: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055606c: jne 0x556470 */ if (!fZ) goto L_00556470;
L_00556072:; BB(0x00556072);
    /* 00556072: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00556075: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 00556079: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055607b: jne 0x556470 */ if (!fZ) goto L_00556470;
L_00556081:; BB(0x00556081);
    /* 00556081: cmp dword ptr [0x793420], 0 */ {  u32 a = R32((u32)(0x793420u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556088: je 0x556470 */ if (fZ) goto L_00556470;
L_0055608e:; BB(0x0055608e);
    /* 0055608e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556091: movsx edx, byte ptr [ecx + 0x14] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x14u));
    /* 00556095: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556096: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x55609cu); call_ind(t); }
    /* 0055609c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055609f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005560a2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005560a5: sub eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005560a8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005560ab: cmp dword ptr [ebp - 8], 0x43 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005560af: ja 0x556470 */ if ((!fC&&!fZ)) goto L_00556470;
L_005560b5:; BB(0x005560b5);
    /* 005560b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005560b8: movzx edx, byte ptr [ecx + 0x5564ac] */ r_edx = (u32)R8((u32)(r_ecx+0x5564acu));
    /* 005560bf: jmp dword ptr [edx*4 + 0x556478] */ { u32 t = R32((u32)(r_edx*4+0x556478u)); switch (t) { case 0x5560c6u: goto L_005560c6; case 0x556115u: goto L_00556115; case 0x556164u: goto L_00556164; case 0x5561b3u: goto L_005561b3; case 0x556202u: goto L_00556202; case 0x556251u: goto L_00556251; case 0x5562efu: goto L_005562ef; case 0x5563dcu: goto L_005563dc; case 0x55638du: goto L_0055638d; case 0x55633eu: goto L_0055633e; case 0x5562a0u: goto L_005562a0; case 0x556428u: goto L_00556428; case 0x556470u: goto L_00556470; default: UNSUP(0x005560bf, "jump table entry is not a known target"); } }
L_005560c6:; BB(0x005560c6);
    /* 005560c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005560c8: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 005560cd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005560d3: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5560d8u); f_005f2a60();
    /* 005560d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005560da: je 0x556110 */ if (fZ) goto L_00556110;
L_005560dc:; BB(0x005560dc);
    /* 005560dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005560de: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 005560e3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005560e9: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5560eeu); f_005f2a60();
    /* 005560ee: mov ecx, eax */ r_ecx = r_eax;
    /* 005560f0: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5560f5u); f_006026d0();
    /* 005560f5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005560f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005560fa: je 0x556110 */ if (fZ) goto L_00556110;
L_005560fc:; BB(0x005560fc);
    /* 005560fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005560fe: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00556104: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x556109u); f_005580f0();
    /* 00556109: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0055610c: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00556110:; BB(0x00556110);
    /* 00556110: jmp 0x556470 */ goto L_00556470;
L_00556115:; BB(0x00556115);
    /* 00556115: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556117: push 0x30f343 */ { u32 v = 0x30f343u; r_esp -= 4; W32(r_esp, v); }
    /* 0055611c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00556122: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556127u); f_005f2a60();
    /* 00556127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556129: je 0x55615f */ if (fZ) goto L_0055615f;
L_0055612b:; BB(0x0055612b);
    /* 0055612b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055612d: push 0x30f343 */ { u32 v = 0x30f343u; r_esp -= 4; W32(r_esp, v); }
    /* 00556132: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00556138: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x55613du); f_005f2a60();
    /* 0055613d: mov ecx, eax */ r_ecx = r_eax;
    /* 0055613f: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x556144u); f_006026d0();
    /* 00556144: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00556147: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556149: je 0x55615f */ if (fZ) goto L_0055615f;
L_0055614b:; BB(0x0055614b);
    /* 0055614b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055614d: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00556153: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x556158u); f_005580f0();
    /* 00556158: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055615b: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_0055615f:; BB(0x0055615f);
    /* 0055615f: jmp 0x556470 */ goto L_00556470;
L_00556164:; BB(0x00556164);
    /* 00556164: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556166: push 0x30f344 */ { u32 v = 0x30f344u; r_esp -= 4; W32(r_esp, v); }
    /* 0055616b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00556171: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556176u); f_005f2a60();
    /* 00556176: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556178: je 0x5561ae */ if (fZ) goto L_005561ae;
L_0055617a:; BB(0x0055617a);
    /* 0055617a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055617c: push 0x30f344 */ { u32 v = 0x30f344u; r_esp -= 4; W32(r_esp, v); }
    /* 00556181: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00556187: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x55618cu); f_005f2a60();
    /* 0055618c: mov ecx, eax */ r_ecx = r_eax;
    /* 0055618e: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x556193u); f_006026d0();
    /* 00556193: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00556196: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556198: je 0x5561ae */ if (fZ) goto L_005561ae;
L_0055619a:; BB(0x0055619a);
    /* 0055619a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0055619c: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005561a2: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x5561a7u); f_005580f0();
    /* 005561a7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005561aa: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_005561ae:; BB(0x005561ae);
    /* 005561ae: jmp 0x556470 */ goto L_00556470;
L_005561b3:; BB(0x005561b3);
    /* 005561b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005561b5: push 0x30f345 */ { u32 v = 0x30f345u; r_esp -= 4; W32(r_esp, v); }
    /* 005561ba: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005561c0: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5561c5u); f_005f2a60();
    /* 005561c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005561c7: je 0x5561fd */ if (fZ) goto L_005561fd;
L_005561c9:; BB(0x005561c9);
    /* 005561c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005561cb: push 0x30f345 */ { u32 v = 0x30f345u; r_esp -= 4; W32(r_esp, v); }
    /* 005561d0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005561d6: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5561dbu); f_005f2a60();
    /* 005561db: mov ecx, eax */ r_ecx = r_eax;
    /* 005561dd: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5561e2u); f_006026d0();
    /* 005561e2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005561e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005561e7: je 0x5561fd */ if (fZ) goto L_005561fd;
L_005561e9:; BB(0x005561e9);
    /* 005561e9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005561eb: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005561f1: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x5561f6u); f_005580f0();
    /* 005561f6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005561f9: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005561fd:; BB(0x005561fd);
    /* 005561fd: jmp 0x556470 */ goto L_00556470;
L_00556202:; BB(0x00556202);
    /* 00556202: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556204: push 0x30f346 */ { u32 v = 0x30f346u; r_esp -= 4; W32(r_esp, v); }
    /* 00556209: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0055620f: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556214u); f_005f2a60();
    /* 00556214: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556216: je 0x55624c */ if (fZ) goto L_0055624c;
L_00556218:; BB(0x00556218);
    /* 00556218: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055621a: push 0x30f346 */ { u32 v = 0x30f346u; r_esp -= 4; W32(r_esp, v); }
    /* 0055621f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00556225: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x55622au); f_005f2a60();
    /* 0055622a: mov ecx, eax */ r_ecx = r_eax;
    /* 0055622c: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x556231u); f_006026d0();
    /* 00556231: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00556234: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556236: je 0x55624c */ if (fZ) goto L_0055624c;
L_00556238:; BB(0x00556238);
    /* 00556238: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055623a: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00556240: call 0x5580f0 */ r_esp -= 4; W32(r_esp, 0x556245u); f_005580f0();
    /* 00556245: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556248: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_0055624c:; BB(0x0055624c);
    /* 0055624c: jmp 0x556470 */ goto L_00556470;
L_00556251:; BB(0x00556251);
    /* 00556251: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556253: push 0x30f347 */ { u32 v = 0x30f347u; r_esp -= 4; W32(r_esp, v); }
    /* 00556258: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0055625e: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556263u); f_005f2a60();
    /* 00556263: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556265: je 0x55629b */ if (fZ) goto L_0055629b;
L_00556267:; BB(0x00556267);
    /* 00556267: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556269: push 0x30f347 */ { u32 v = 0x30f347u; r_esp -= 4; W32(r_esp, v); }
    /* 0055626e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00556274: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556279u); f_005f2a60();
    /* 00556279: mov ecx, eax */ r_ecx = r_eax;
    /* 0055627b: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x556280u); f_006026d0();
    /* 00556280: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00556283: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556285: je 0x55629b */ if (fZ) goto L_0055629b;
L_00556287:; BB(0x00556287);
    /* 00556287: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00556289: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 0055628f: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x556294u); f_00557ae0();
    /* 00556294: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00556297: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_0055629b:; BB(0x0055629b);
    /* 0055629b: jmp 0x556470 */ goto L_00556470;
L_005562a0:; BB(0x005562a0);
    /* 005562a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005562a2: push 0x30f348 */ { u32 v = 0x30f348u; r_esp -= 4; W32(r_esp, v); }
    /* 005562a7: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005562ad: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5562b2u); f_005f2a60();
    /* 005562b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005562b4: je 0x5562ea */ if (fZ) goto L_005562ea;
L_005562b6:; BB(0x005562b6);
    /* 005562b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005562b8: push 0x30f348 */ { u32 v = 0x30f348u; r_esp -= 4; W32(r_esp, v); }
    /* 005562bd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005562c3: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5562c8u); f_005f2a60();
    /* 005562c8: mov ecx, eax */ r_ecx = r_eax;
    /* 005562ca: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5562cfu); f_006026d0();
    /* 005562cf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005562d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005562d4: je 0x5562ea */ if (fZ) goto L_005562ea;
L_005562d6:; BB(0x005562d6);
    /* 005562d6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005562d8: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005562de: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x5562e3u); f_00557ae0();
    /* 005562e3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005562e6: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005562ea:; BB(0x005562ea);
    /* 005562ea: jmp 0x556470 */ goto L_00556470;
L_005562ef:; BB(0x005562ef);
    /* 005562ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005562f1: push 0x30f349 */ { u32 v = 0x30f349u; r_esp -= 4; W32(r_esp, v); }
    /* 005562f6: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005562fc: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556301u); f_005f2a60();
    /* 00556301: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556303: je 0x556339 */ if (fZ) goto L_00556339;
L_00556305:; BB(0x00556305);
    /* 00556305: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556307: push 0x30f349 */ { u32 v = 0x30f349u; r_esp -= 4; W32(r_esp, v); }
    /* 0055630c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00556312: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556317u); f_005f2a60();
    /* 00556317: mov ecx, eax */ r_ecx = r_eax;
    /* 00556319: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x55631eu); f_006026d0();
    /* 0055631e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00556321: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556323: je 0x556339 */ if (fZ) goto L_00556339;
L_00556325:; BB(0x00556325);
    /* 00556325: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00556327: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 0055632d: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x556332u); f_00557ae0();
    /* 00556332: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556335: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00556339:; BB(0x00556339);
    /* 00556339: jmp 0x556470 */ goto L_00556470;
L_0055633e:; BB(0x0055633e);
    /* 0055633e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556340: push 0x30f34a */ { u32 v = 0x30f34au; r_esp -= 4; W32(r_esp, v); }
    /* 00556345: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0055634b: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556350u); f_005f2a60();
    /* 00556350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556352: je 0x556388 */ if (fZ) goto L_00556388;
L_00556354:; BB(0x00556354);
    /* 00556354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556356: push 0x30f34a */ { u32 v = 0x30f34au; r_esp -= 4; W32(r_esp, v); }
    /* 0055635b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00556361: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556366u); f_005f2a60();
    /* 00556366: mov ecx, eax */ r_ecx = r_eax;
    /* 00556368: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x55636du); f_006026d0();
    /* 0055636d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00556370: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556372: je 0x556388 */ if (fZ) goto L_00556388;
L_00556374:; BB(0x00556374);
    /* 00556374: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556376: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 0055637c: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x556381u); f_00557ae0();
    /* 00556381: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00556384: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00556388:; BB(0x00556388);
    /* 00556388: jmp 0x556470 */ goto L_00556470;
L_0055638d:; BB(0x0055638d);
    /* 0055638d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055638f: push 0x30f34b */ { u32 v = 0x30f34bu; r_esp -= 4; W32(r_esp, v); }
    /* 00556394: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0055639a: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x55639fu); f_005f2a60();
    /* 0055639f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005563a1: je 0x5563d7 */ if (fZ) goto L_005563d7;
L_005563a3:; BB(0x005563a3);
    /* 005563a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005563a5: push 0x30f34b */ { u32 v = 0x30f34bu; r_esp -= 4; W32(r_esp, v); }
    /* 005563aa: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005563b0: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5563b5u); f_005f2a60();
    /* 005563b5: mov ecx, eax */ r_ecx = r_eax;
    /* 005563b7: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5563bcu); f_006026d0();
    /* 005563bc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005563bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005563c1: je 0x5563d7 */ if (fZ) goto L_005563d7;
L_005563c3:; BB(0x005563c3);
    /* 005563c3: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005563c5: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005563cb: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x5563d0u); f_00557ae0();
    /* 005563d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005563d3: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_005563d7:; BB(0x005563d7);
    /* 005563d7: jmp 0x556470 */ goto L_00556470;
L_005563dc:; BB(0x005563dc);
    /* 005563dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005563de: push 0x30f34c */ { u32 v = 0x30f34cu; r_esp -= 4; W32(r_esp, v); }
    /* 005563e3: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005563e9: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5563eeu); f_005f2a60();
    /* 005563ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005563f0: je 0x556426 */ if (fZ) goto L_00556426;
L_005563f2:; BB(0x005563f2);
    /* 005563f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005563f4: push 0x30f34c */ { u32 v = 0x30f34cu; r_esp -= 4; W32(r_esp, v); }
    /* 005563f9: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005563ff: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556404u); f_005f2a60();
    /* 00556404: mov ecx, eax */ r_ecx = r_eax;
    /* 00556406: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x55640bu); f_006026d0();
    /* 0055640b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0055640e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556410: je 0x556426 */ if (fZ) goto L_00556426;
L_00556412:; BB(0x00556412);
    /* 00556412: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00556414: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 0055641a: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x55641fu); f_00557ae0();
    /* 0055641f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556422: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_00556426:; BB(0x00556426);
    /* 00556426: jmp 0x556470 */ goto L_00556470;
L_00556428:; BB(0x00556428);
    /* 00556428: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055642a: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0055642f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00556435: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x55643au); f_005f2a60();
    /* 0055643a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055643c: je 0x556470 */ if (fZ) goto L_00556470;
L_0055643e:; BB(0x0055643e);
    /* 0055643e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556440: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 00556445: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0055644b: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x556450u); f_005f2a60();
    /* 00556450: mov ecx, eax */ r_ecx = r_eax;
    /* 00556452: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x556457u); f_006026d0();
    /* 00556457: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0055645a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055645c: je 0x556470 */ if (fZ) goto L_00556470;
L_0055645e:; BB(0x0055645e);
    /* 0055645e: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 00556464: call 0x5db240 */ r_esp -= 4; W32(r_esp, 0x556469u); f_005db240();
    /* 00556469: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0055646c: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00556470:; BB(0x00556470);
    /* 00556470: mov esp, ebp */ r_esp = r_ebp;
    /* 00556472: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556473: ret 4 */ FN_RET(0x00556050); r_esp += 8; return;
}

void f_005564f0(void) /* VideoPokerRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005564f0);
    /* 005564f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005564f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005564f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005564f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005564f7: cmp dword ptr [0x793420], 0 */ {  u32 a = R32((u32)(0x793420u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005564fe: jne 0x556504 */ if (!fZ) goto L_00556504;
L_00556500:; BB(0x00556500);
    /* 00556500: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00556502: jmp 0x55650f */ goto L_0055650f;
L_00556504:; BB(0x00556504);
    /* 00556504: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 0055650a: call 0x5572e0 */ r_esp -= 4; W32(r_esp, 0x55650fu); f_005572e0();
L_0055650f:; BB(0x0055650f);
    /* 0055650f: mov esp, ebp */ r_esp = r_ebp;
    /* 00556511: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556512: ret  */ FN_RET(0x005564f0); r_esp += 4; return;
}

void f_00556520(void) /* VideoPokerRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556520);
    /* 00556520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556521: mov ebp, esp */ r_ebp = r_esp;
    /* 00556523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556527: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 0055652d: call 0x5542c0 */ r_esp -= 4; W32(r_esp, 0x556532u); f_005542c0();
    /* 00556532: mov esp, ebp */ r_esp = r_ebp;
    /* 00556534: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556535: ret  */ FN_RET(0x00556520); r_esp += 4; return;
}

void f_00556540(void) /* VideoPokerRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556540);
    /* 00556540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556541: mov ebp, esp */ r_ebp = r_esp;
    /* 00556543: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00556546: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00556549: mov eax, dword ptr [0x793420] */ r_eax = R32((u32)(0x793420u));
    /* 0055654e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00556551: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00556554: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00556557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556558: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0055655b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055655c: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00556562: call 0x5d0c30 */ r_esp -= 4; W32(r_esp, 0x556567u); f_005d0c30();
    /* 00556567: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0055656a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055656b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055656d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055656e: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00556571: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556572: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00556575: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556576: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 0055657c: call 0x5d0cd0 */ r_esp -= 4; W32(r_esp, 0x556581u); f_005d0cd0();
    /* 00556581: mov ecx, eax */ r_ecx = r_eax;
    /* 00556583: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x556588u); f_0064c630();
    /* 00556588: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055658b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055658c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055658f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556590: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556594: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x556599u); f_005dcb00();
    /* 00556599: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055659c: mov ecx, eax */ r_ecx = r_eax;
    /* 0055659e: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5565a3u); f_005d5fb0();
    /* 005565a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005565a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005565a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005565aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005565ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005565ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005565af: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5565b4u); f_005dcb00();
    /* 005565b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005565b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005565b9: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5565beu); f_005d5cf0();
    /* 005565be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005565c0: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005565c6: call 0x5d0a20 */ r_esp -= 4; W32(r_esp, 0x5565cbu); f_005d0a20();
    /* 005565cb: mov edx, dword ptr [0x793420] */ r_edx = R32((u32)(0x793420u));
    /* 005565d1: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005565d4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005565d7: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005565de: mov esp, ebp */ r_esp = r_ebp;
    /* 005565e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005565e1: ret 4 */ FN_RET(0x00556540); r_esp += 8; return;
}

void f_005565f0(void) /* VideoPokerRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005565f0);
    /* 005565f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005565f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005565f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005565f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005565f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005565f8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005565fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005565fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005565ff: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x556604u); f_005dcb00();
    /* 00556604: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556607: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 0055660d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055660e: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00556614: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00556615: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00556618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556619: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 0055661f: call 0x5571a0 */ r_esp -= 4; W32(r_esp, 0x556624u); f_005571a0();
    /* 00556624: mov ecx, eax */ r_ecx = r_eax;
    /* 00556626: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x55662bu); f_0064c5c0();
    /* 0055662b: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0055662d: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00556630: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00556636: call 0x5571a0 */ r_esp -= 4; W32(r_esp, 0x55663bu); f_005571a0();
    /* 0055663b: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0055663d: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 00556640: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00556643: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556644: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x556649u); f_005dcb00();
    /* 00556649: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055664c: mov ecx, eax */ r_ecx = r_eax;
    /* 0055664e: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x556653u); f_0063b0a0();
    /* 00556653: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00556654: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00556655: mov esp, ebp */ r_esp = r_ebp;
    /* 00556657: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556658: ret 4 */ FN_RET(0x005565f0); r_esp += 8; return;
}

void f_00556660(void) /* VideoPokerRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556660);
    /* 00556660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556661: mov ebp, esp */ r_ebp = r_esp;
    /* 00556663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556667: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 0055666d: call 0x554f60 */ r_esp -= 4; W32(r_esp, 0x556672u); f_00554f60();
    /* 00556672: mov esp, ebp */ r_esp = r_ebp;
    /* 00556674: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556675: ret 4 */ FN_RET(0x00556660); r_esp += 8; return;
}

void f_00556680(void) /* VideoPokerRoom::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00556680);
    /* 00556680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00556681: mov ebp, esp */ r_ebp = r_esp;
    /* 00556683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00556684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00556687: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055668a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055668b: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 00556691: call 0x557ae0 */ r_esp -= 4; W32(r_esp, 0x556696u); f_00557ae0();
    /* 00556696: mov esp, ebp */ r_esp = r_ebp;
    /* 00556698: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556699: ret 4 */ FN_RET(0x00556680); r_esp += 8; return;
}

void f_005566a0(void) /* VideoPokerRoom::vfunc175 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005566a0);
    /* 005566a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005566a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005566a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005566a6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005566a9: mov eax, dword ptr [0x793420] */ r_eax = R32((u32)(0x793420u));
    /* 005566ae: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005566b1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005566b4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005566b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005566b8: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005566bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005566bc: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005566c2: call 0x5d0db0 */ r_esp -= 4; W32(r_esp, 0x5566c7u); f_005d0db0();
    /* 005566c7: mov ecx, dword ptr [0x793420] */ r_ecx = R32((u32)(0x793420u));
    /* 005566cd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005566d0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005566d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005566d6: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005566d9: jge 0x5566e6 */ if ((fS==fO)) goto L_005566e6;
L_005566db:; BB(0x005566db);
    /* 005566db: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 005566e1: call 0x555070 */ r_esp -= 4; W32(r_esp, 0x5566e6u); f_00555070();
L_005566e6:; BB(0x005566e6);
    /* 005566e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005566e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005566e9: ret 4 */ FN_RET(0x005566a0); r_esp += 8; return;
}

