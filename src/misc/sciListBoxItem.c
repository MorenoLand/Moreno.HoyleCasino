#include "protos.h"

void f_00629ab0(void) /* sciListBoxItem::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629ab0);
    /* 00629ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00629ab3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629ab4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629ab7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629aba: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x629abfu); f_005e9e20();
    /* 00629abf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629ac2: mov dword ptr [eax], 0x6d9518 */ W32((u32)(r_eax), 0x6d9518u);
    /* 00629ac8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629acb: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00629ad2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629ad5: mov dword ptr [edx + 8], 0xffffffff */ W32((u32)(r_edx+0x8u), 0xffffffffu);
    /* 00629adc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629adf: mov byte ptr [eax + 0xc], 0 */ W8((u32)(r_eax+0xcu), 0x0u);
    /* 00629ae3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629ae6: mov byte ptr [ecx + 0xd], 1 */ W8((u32)(r_ecx+0xdu), 0x1u);
    /* 00629aea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629aed: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 00629af4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629af7: mov esp, ebp */ r_esp = r_ebp;
    /* 00629af9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629afa: ret  */ FN_RET(0x00629ab0); r_esp += 4; return;
}

void f_00629b00(void) /* sciListBoxItem::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629b00);
    /* 00629b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00629b03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629b05: push 0x6ab607 */ { u32 v = 0x6ab607u; r_esp -= 4; W32(r_esp, v); }
    /* 00629b0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629b10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629b11: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629b14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00629b19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629b1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00629b1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00629b25: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00629b28: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00629b2b: mov dword ptr [eax], 0x6d9518 */ W32((u32)(r_eax), 0x6d9518u);
    /* 00629b31: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00629b38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00629b3b: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629b3f: je 0x629b56 */ if (fZ) goto L_00629b56;
L_00629b41:; BB(0x00629b41);
    /* 00629b41: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00629b44: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00629b47: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00629b4a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00629b4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629b4e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x629b53u); f_00686cae();
    /* 00629b53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00629b56:; BB(0x00629b56);
    /* 00629b56: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00629b5d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00629b60: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x629b65u); f_005e9e40();
    /* 00629b65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00629b68: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629b6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629b70: mov esp, ebp */ r_esp = r_ebp;
    /* 00629b72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629b73: ret  */ FN_RET(0x00629b00); r_esp += 4; return;
}

void f_00629b80(void) /* sciListBoxItem::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629b80);
    /* 00629b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00629b83: sub esp, 0x114 */ {  u32 a = r_esp; u32 b = 0x114u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629b89: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00629b8e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629b90: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00629b93: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 00629b99: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629b9d: jne 0x629bd0 */ if (!fZ) goto L_00629bd0;
L_00629b9f:; BB(0x00629b9f);
    /* 00629b9f: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00629ba5: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629ba9: je 0x629bd0 */ if (fZ) goto L_00629bd0;
L_00629bab:; BB(0x00629bab);
    /* 00629bab: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629baf: je 0x629bd0 */ if (fZ) goto L_00629bd0;
L_00629bb1:; BB(0x00629bb1);
    /* 00629bb1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00629bb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629bb5: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00629bbb: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00629bbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629bbf: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x629bc4u); f_00686ec0();
    /* 00629bc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629bc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629bc9: jne 0x629bd0 */ if (!fZ) goto L_00629bd0;
L_00629bcb:; BB(0x00629bcb);
    /* 00629bcb: jmp 0x629c60 */ goto L_00629c60;
L_00629bd0:; BB(0x00629bd0);
    /* 00629bd0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00629bd6: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629bda: je 0x629bfa */ if (fZ) goto L_00629bfa;
L_00629bdc:; BB(0x00629bdc);
    /* 00629bdc: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00629be2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00629be5: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00629beb: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00629bf1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629bf2: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x629bf7u); f_00686cae();
    /* 00629bf7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00629bfa:; BB(0x00629bfa);
    /* 00629bfa: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629bfe: je 0x629c60 */ if (fZ) goto L_00629c60;
L_00629c00:; BB(0x00629c00);
    /* 00629c00: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00629c03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629c04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00629c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629c08: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00629c0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629c0f: call 0x5eed70 */ r_esp -= 4; W32(r_esp, 0x629c14u); f_005eed70();
    /* 00629c14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629c17: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00629c1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629c1e: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x629c23u); f_00686ecc();
    /* 00629c23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629c26: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00629c29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629c2a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x629c2fu); f_00686d82();
    /* 00629c2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629c32: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 00629c38: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00629c3e: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 00629c44: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00629c47: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00629c4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629c4e: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00629c54: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00629c57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629c58: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x629c5du); f_00686d8e();
    /* 00629c5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00629c60:; BB(0x00629c60);
    /* 00629c60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629c63: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00629c65: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x629c6au); f_00686d72();
    /* 00629c6a: mov esp, ebp */ r_esp = r_ebp;
    /* 00629c6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629c6d: ret 8 */ FN_RET(0x00629b80); r_esp += 12; return;
}

void f_00629ca0(void) /* sciListBoxItem::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629ca0);
    /* 00629ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00629ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629ca4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629ca7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629caa: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00629cad: mov byte ptr [eax + 0xc], cl */ W8((u32)(r_eax+0xcu), (u8)r_ecx);
    /* 00629cb0: mov esp, ebp */ r_esp = r_ebp;
    /* 00629cb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629cb3: ret 4 */ FN_RET(0x00629ca0); r_esp += 8; return;
}

void f_00629ce0(void) /* sciListBoxItem::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629ce0);
    /* 00629ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00629ce3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629ce4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629ce7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629cea: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00629ced: mov byte ptr [eax + 0xd], cl */ W8((u32)(r_eax+0xdu), (u8)r_ecx);
    /* 00629cf0: mov esp, ebp */ r_esp = r_ebp;
    /* 00629cf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629cf3: ret 4 */ FN_RET(0x00629ce0); r_esp += 8; return;
}

