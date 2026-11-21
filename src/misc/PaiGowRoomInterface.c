#include "protos.h"

void f_0045ebb0(void) /* PaiGowRoomInterface::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ebb0);
    /* 0045ebb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ebb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ebb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ebb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ebb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ebba: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x45ebbfu); f_005e9e20();
    /* 0045ebbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ebc2: mov dword ptr [eax], 0x6b3374 */ W32((u32)(r_eax), 0x6b3374u);
    /* 0045ebc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ebcb: mov dword ptr [ecx], 0x6ba11c */ W32((u32)(r_ecx), 0x6ba11cu);
    /* 0045ebd1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ebd4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ebd7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0045ebda: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ebdd: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ebdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ebe0: ret 4 */ FN_RET(0x0045ebb0); r_esp += 8; return;
}

void f_0045ebf0(void) /* PaiGowRoomInterface::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ebf0);
    /* 0045ebf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ebf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ebf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045ebf5: push 0x69f30b */ { u32 v = 0x69f30bu; r_esp -= 4; W32(r_esp, v); }
    /* 0045ebfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045ec00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ec01: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ec04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045ec09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045ec0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ec0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045ec0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045ec15: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045ec18: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ec1d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x45ec22u); f_00686d82();
    /* 0045ec22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ec25: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045ec28: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045ec2f: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ec33: je 0x45ec42 */ if (fZ) goto L_0045ec42;
L_0045ec35:; BB(0x0045ec35);
    /* 0045ec35: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045ec38: call 0x45d1f0 */ r_esp -= 4; W32(r_esp, 0x45ec3du); f_0045d1f0();
    /* 0045ec3d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0045ec40: jmp 0x45ec49 */ goto L_0045ec49;
L_0045ec42:; BB(0x0045ec42);
    /* 0045ec42: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0045ec49:; BB(0x0045ec49);
    /* 0045ec49: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ec4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045ec4f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045ec56: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ec59: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045ec5c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045ec5f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045ec62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ec63: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ec66: call 0x45e8c0 */ r_esp -= 4; W32(r_esp, 0x45ec6bu); f_0045e8c0();
    /* 0045ec6b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045ec6e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ec71: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045ec78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045ec79: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ec7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ec7c: ret  */ FN_RET(0x0045ebf0); r_esp += 4; return;
}

void f_0045ec80(void) /* PaiGowRoomInterface::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ec80);
    /* 0045ec80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ec81: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ec83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ec86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ec89: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ec8d: jne 0x45ec93 */ if (!fZ) goto L_0045ec93;
L_0045ec8f:; BB(0x0045ec8f);
    /* 0045ec8f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045ec91: jmp 0x45ecda */ goto L_0045ecda;
L_0045ec93:; BB(0x0045ec93);
    /* 0045ec93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ec96: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045ec99: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045ec9c: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eca0: je 0x45ecbe */ if (fZ) goto L_0045ecbe;
L_0045eca2:; BB(0x0045eca2);
    /* 0045eca2: push 0x6b977c */ { u32 v = 0x6b977cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045eca7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45ecacu); f_00630f40();
    /* 0045ecac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ecaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ecb0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045ecb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ecb4: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45ecb9u); f_00686d8e();
    /* 0045ecb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ecbc: jmp 0x45ecd8 */ goto L_0045ecd8;
L_0045ecbe:; BB(0x0045ecbe);
    /* 0045ecbe: push 0x6b9768 */ { u32 v = 0x6b9768u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ecc3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45ecc8u); f_00630f40();
    /* 0045ecc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045eccb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045eccc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045eccf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ecd0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x45ecd5u); f_00686d8e();
    /* 0045ecd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045ecd8:; BB(0x0045ecd8);
    /* 0045ecd8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0045ecda:; BB(0x0045ecda);
    /* 0045ecda: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ecdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ecdd: ret 4 */ FN_RET(0x0045ec80); r_esp += 8; return;
}

void f_0045ece0(void) /* PaiGowRoomInterface::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ece0);
    /* 0045ece0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ece1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ece3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ece6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045ece9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045ecf0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ecf3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045ecf6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045ecf9: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ecfd: je 0x45ed11 */ if (fZ) goto L_0045ed11;
L_0045ecff:; BB(0x0045ecff);
    /* 0045ecff: push 0x6b977c */ { u32 v = 0x6b977cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045ed04: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45ed09u); f_00630f40();
    /* 0045ed09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ed0c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045ed0f: jmp 0x45ed21 */ goto L_0045ed21;
L_0045ed11:; BB(0x0045ed11);
    /* 0045ed11: push 0x6b9768 */ { u32 v = 0x6b9768u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ed16: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45ed1bu); f_00630f40();
    /* 0045ed1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ed1e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045ed21:; BB(0x0045ed21);
    /* 0045ed21: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ed24: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ed26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ed27: ret  */ FN_RET(0x0045ece0); r_esp += 4; return;
}

void f_0045ed30(void) /* PaiGowRoomInterface::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ed30);
    /* 0045ed30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ed31: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ed33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ed36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045ed39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045ed40: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ed43: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ed47: jne 0x45ed50 */ if (!fZ) goto L_0045ed50;
L_0045ed49:; BB(0x0045ed49);
    /* 0045ed49: mov dword ptr [ebp - 4], 0x30e3a0 */ W32((u32)(r_ebp+0xfffffffcu), 0x30e3a0u);
L_0045ed50:; BB(0x0045ed50);
    /* 0045ed50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ed53: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ed55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ed56: ret  */ FN_RET(0x0045ed30); r_esp += 4; return;
}

void f_0045ed60(void) /* PaiGowRoomInterface::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ed60);
    /* 0045ed60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ed61: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ed63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ed66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045ed69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045ed70: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ed73: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045ed76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045ed79: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ed7d: je 0x45ed88 */ if (fZ) goto L_0045ed88;
L_0045ed7f:; BB(0x0045ed7f);
    /* 0045ed7f: mov dword ptr [ebp - 4], 0x6ba27c */ W32((u32)(r_ebp+0xfffffffcu), 0x6ba27cu);
    /* 0045ed86: jmp 0x45ed8f */ goto L_0045ed8f;
L_0045ed88:; BB(0x0045ed88);
    /* 0045ed88: mov dword ptr [ebp - 4], 0x6ba274 */ W32((u32)(r_ebp+0xfffffffcu), 0x6ba274u);
L_0045ed8f:; BB(0x0045ed8f);
    /* 0045ed8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ed92: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ed94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ed95: ret  */ FN_RET(0x0045ed60); r_esp += 4; return;
}

void f_0045edb0(void) /* PaiGowRoomInterface::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045edb0);
    /* 0045edb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045edb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045edb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045edb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045edb7: mov eax, 0x71b00c */ r_eax = 0x71b00cu;
    /* 0045edbc: mov esp, ebp */ r_esp = r_ebp;
    /* 0045edbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045edbf: ret  */ FN_RET(0x0045edb0); r_esp += 4; return;
}

void f_0045edc0(void) /* PaiGowRoomInterface::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045edc0);
    /* 0045edc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045edc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045edc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045edc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045edc7: mov eax, 0x71b018 */ r_eax = 0x71b018u;
    /* 0045edcc: mov esp, ebp */ r_esp = r_ebp;
    /* 0045edce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045edcf: ret  */ FN_RET(0x0045edc0); r_esp += 4; return;
}

void f_0045edf0(void) /* PaiGowRoomInterface::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045edf0);
    /* 0045edf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045edf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045edf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045edf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045edf7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045edfb: jne 0x45ee01 */ if (!fZ) goto L_0045ee01;
L_0045edfd:; BB(0x0045edfd);
    /* 0045edfd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045edff: jmp 0x45ee48 */ goto L_0045ee48;
L_0045ee01:; BB(0x0045ee01);
    /* 0045ee01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ee04: mov dword ptr [eax], 4 */ W32((u32)(r_eax), 0x4u);
    /* 0045ee0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ee0d: mov dword ptr [ecx + 4], 1 */ W32((u32)(r_ecx+0x4u), 0x1u);
    /* 0045ee14: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045ee17: mov dword ptr [edx + 8], 4 */ W32((u32)(r_edx+0x8u), 0x4u);
    /* 0045ee1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ee21: mov dword ptr [eax + 0xc], 1 */ W32((u32)(r_eax+0xcu), 0x1u);
    /* 0045ee28: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045ee2b: mov dword ptr [ecx + 0x10], 4 */ W32((u32)(r_ecx+0x10u), 0x4u);
    /* 0045ee32: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045ee35: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0045ee3c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ee3f: mov dword ptr [eax + 0x18], 3 */ W32((u32)(r_eax+0x18u), 0x3u);
    /* 0045ee46: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0045ee48:; BB(0x0045ee48);
    /* 0045ee48: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ee4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ee4b: ret 8 */ FN_RET(0x0045edf0); r_esp += 12; return;
}

void f_0045ee50(void) /* PaiGowRoomInterface::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ee50);
    /* 0045ee50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee51: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ee53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ee57: mov eax, 0x18 */ r_eax = 0x18u;
    /* 0045ee5c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ee5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ee5f: ret  */ FN_RET(0x0045ee50); r_esp += 4; return;
}

void f_0045ee60(void) /* PaiGowRoomInterface::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ee60);
    /* 0045ee60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ee61: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ee63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ee66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045ee69: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ee6d: jne 0x45ee73 */ if (!fZ) goto L_0045ee73;
L_0045ee6f:; BB(0x0045ee6f);
    /* 0045ee6f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045ee71: jmp 0x45ee9d */ goto L_0045ee9d;
L_0045ee73:; BB(0x0045ee73);
    /* 0045ee73: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ee76: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045ee79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ee7c: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 0045ee7f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ee82: mov byte ptr [edx + 1], 1 */ W8((u32)(r_edx+0x1u), 0x1u);
    /* 0045ee86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ee89: mov byte ptr [eax + 2], 1 */ W8((u32)(r_eax+0x2u), 0x1u);
    /* 0045ee8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ee90: mov byte ptr [ecx + 3], 1 */ W8((u32)(r_ecx+0x3u), 0x1u);
    /* 0045ee94: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ee97: mov byte ptr [edx + 4], 0 */ W8((u32)(r_edx+0x4u), 0x0u);
    /* 0045ee9b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0045ee9d:; BB(0x0045ee9d);
    /* 0045ee9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ee9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045eea0: ret 4 */ FN_RET(0x0045ee60); r_esp += 8; return;
}

void f_0045eeb0(void) /* PaiGowRoomInterface::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045eeb0);
    /* 0045eeb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045eeb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045eeb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045eeb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045eeb9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045eebb: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045eec1: call 0x5de600 */ r_esp -= 4; W32(r_esp, 0x45eec6u); f_005de600();
    /* 0045eec6: mov ecx, eax */ r_ecx = r_eax;
    /* 0045eec8: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x45eecdu); f_0063aae0();
    /* 0045eecd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045eed0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045eed3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045eed6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eeda: je 0x45eee2 */ if (fZ) goto L_0045eee2;
L_0045eedc:; BB(0x0045eedc);
    /* 0045eedc: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045eee0: jne 0x45eee6 */ if (!fZ) goto L_0045eee6;
L_0045eee2:; BB(0x0045eee2);
    /* 0045eee2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045eee4: jmp 0x45ef22 */ goto L_0045ef22;
L_0045eee6:; BB(0x0045eee6);
    /* 0045eee6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eee9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045eeec: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0045eeee: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0045eef0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eef3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045eef6: mov al, byte ptr [edx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1u))) & 0xffu);
    /* 0045eef9: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 0045eefc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eeff: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ef02: mov al, byte ptr [edx + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 0045ef05: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0045ef08: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ef0b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ef0e: mov al, byte ptr [edx + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x3u))) & 0xffu);
    /* 0045ef11: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 0045ef14: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ef17: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045ef1a: mov al, byte ptr [edx + 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4u))) & 0xffu);
    /* 0045ef1d: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 0045ef20: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0045ef22:; BB(0x0045ef22);
    /* 0045ef22: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ef24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ef25: ret 4 */ FN_RET(0x0045eeb0); r_esp += 8; return;
}

void f_0045ef30(void) /* PaiGowRoomInterface::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ef30);
    /* 0045ef30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef31: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ef33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ef36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045ef39: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ef3d: jne 0x45ef43 */ if (!fZ) goto L_0045ef43;
L_0045ef3f:; BB(0x0045ef3f);
    /* 0045ef3f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045ef41: jmp 0x45ef73 */ goto L_0045ef73;
L_0045ef43:; BB(0x0045ef43);
    /* 0045ef43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ef46: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045ef49: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ef4c: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0045ef53: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ef56: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0045ef5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ef60: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0045ef67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045ef6a: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0045ef71: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0045ef73:; BB(0x0045ef73);
    /* 0045ef73: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ef75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ef76: ret 4 */ FN_RET(0x0045ef30); r_esp += 8; return;
}

void f_0045ef90(void) /* PaiGowRoomInterface::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045ef90);
    /* 0045ef90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef91: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ef93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ef94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045ef97: mov eax, 9 */ r_eax = 0x9u;
    /* 0045ef9c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ef9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ef9f: ret  */ FN_RET(0x0045ef90); r_esp += 4; return;
}

void f_0045efa0(void) /* PaiGowRoomInterface::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045efa0);
    /* 0045efa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045efa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045efa3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045efa6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045efa9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045efac: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045efaf: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0045efb1: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0045efb3: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045efb6: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045efb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045efba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045efbd: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x45efc2u); f_0063aae0();
    /* 0045efc2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045efc5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045efc8: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0045efcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045efce: add eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045efd1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045efd4: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045efd6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045efd9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0045efdb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045efde: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045efe1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045efe4: add eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045efe7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045efea: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0045efed: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045eff0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0045eff2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045eff5: add ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045eff8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0045effb: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0045effd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045f000: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0045f003: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f006: add edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045f009: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045f00c: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0045f00f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045f012: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045f014: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f017: add eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045f01a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045f01d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0045f01f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045f022: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045f025: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f028: add ecx, dword ptr [edx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f02b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0045f02e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0045f031: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f033: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f039: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045f03b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f041: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0045f047: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45f049u); call_ind(t); }
    /* 0045f049: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045f04c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f04e: je 0x45f0e1 */ if (fZ) goto L_0045f0e1;
L_0045f054:; BB(0x0045f054);
    /* 0045f054: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045f05a: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x45f05fu); f_005f3bf0();
    /* 0045f05f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045f062: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0045f065: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0045f067: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0045f069: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f06c: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f06f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f071: jne 0x45f0e1 */ if (!fZ) goto L_0045f0e1;
L_0045f073:; BB(0x0045f073);
    /* 0045f073: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 0045f076: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f077: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 0045f07a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f07b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045f07e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f07f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f085: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x45f08au); f_005e0c40();
    /* 0045f08a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045f08d: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045f090: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045f093: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045f095: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045f098: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0045f09a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045f09d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045f0a0: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045f0a3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045f0a6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0045f0a9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045f0ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045f0ae: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045f0b1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045f0b4: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0045f0b6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0045f0b9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045f0bc: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045f0bf: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0045f0c2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0045f0c5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045f0c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045f0ca: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045f0cd: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045f0d0: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0045f0d2: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0045f0d5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0045f0d8: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045f0db: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0045f0de: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_0045f0e1:; BB(0x0045f0e1);
    /* 0045f0e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f0e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f0e4: ret 0x10 */ FN_RET(0x0045efa0); r_esp += 20; return;
}

void f_0045f0f0(void) /* PaiGowRoomInterface::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f0f0);
    /* 0045f0f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f0f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f0f3: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f0f9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045f0fe: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045f100: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0045f103: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0045f109: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0045f10f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045f112: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0045f114: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0045f116: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f119: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f11c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f11d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045f120: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x45f125u); f_0063aae0();
    /* 0045f125: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0045f128: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f12a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f12c: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45f131u); f_0064c8a0();
    /* 0045f131: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f134: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0045f137: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0045f13a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0045f13d: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0045f140: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0045f143: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0045f146: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f148: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f14a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x45f14fu); f_0064c8a0();
    /* 0045f14f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f152: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0045f155: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0045f158: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0045f15b: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0045f15e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0045f161: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0045f164: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045f167: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f168: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045f16b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f16c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f172: call 0x5e0690 */ r_esp -= 4; W32(r_esp, 0x45f177u); f_005e0690();
    /* 0045f177: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0045f17d: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x45f182u); f_005f3bf0();
    /* 0045f182: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0045f188: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0045f18b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0045f18d: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0045f18f: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f192: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f195: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f197: jne 0x45f1b0 */ if (!fZ) goto L_0045f1b0;
L_0045f199:; BB(0x0045f199);
    /* 0045f199: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0045f19c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f19d: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0045f1a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1a1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045f1a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1a5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f1ab: call 0x5e0c40 */ r_esp -= 4; W32(r_esp, 0x45f1b0u); f_005e0c40();
L_0045f1b0:; BB(0x0045f1b0);
    /* 0045f1b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1b6: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0045f1b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1ba: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045f1bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1be: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045f1c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1c2: lea edx, [ebp - 0x74] */ r_edx = (u32)(r_ebp+0xffffff8cu);
    /* 0045f1c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1c6: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045f1c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1ca: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045f1cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1ce: lea edx, [ebp - 0x6c] */ r_edx = (u32)(r_ebp+0xffffff94u);
    /* 0045f1d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1d2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045f1d5: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0045f1d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1d9: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0045f1dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1dd: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 0045f1e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1e1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045f1e4: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f1e7: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x45f1ecu); f_0064c5c0();
    /* 0045f1ec: mov ecx, eax */ r_ecx = r_eax;
    /* 0045f1ee: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x45f1f3u); f_0064c5c0();
    /* 0045f1f3: mov ecx, eax */ r_ecx = r_eax;
    /* 0045f1f5: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x45f1fau); f_0064c5c0();
    /* 0045f1fa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045f1fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f1fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045f200: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f201: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x45f206u); f_0064c8d0();
    /* 0045f206: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f209: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0045f20c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f20d: push 0x6b3590 */ { u32 v = 0x6b3590u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f212: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45f217u); f_00630f40();
    /* 0045f217: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f21a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f21b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f21d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045f220: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x45f225u); f_00654390();
    /* 0045f225: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f227: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f229: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f22b: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0045f22e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f22f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0045f232: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f233: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0045f236: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f237: lea ecx, [ebp - 0x7c] */ r_ecx = (u32)(r_ebp+0xffffff84u);
    /* 0045f23a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f23b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045f23e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f241: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x45f246u); f_0064c5c0();
    /* 0045f246: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0045f249: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f24a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0045f24c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f24d: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x45f252u); f_0064c8d0();
    /* 0045f252: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f255: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0045f258: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f259: push 0x6b356c */ { u32 v = 0x6b356cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f25e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45f263u); f_00630f40();
    /* 0045f263: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f266: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f267: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f269: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045f26c: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x45f271u); f_00654390();
    /* 0045f271: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f273: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f275: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f277: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0045f27a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f27b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0045f27e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f27f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0045f282: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f283: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 0045f289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f28a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0045f28d: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f290: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x45f295u); f_0064c5c0();
    /* 0045f295: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045f298: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f299: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045f29b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f29c: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x45f2a1u); f_0064c8d0();
    /* 0045f2a1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f2a4: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0045f2a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2a8: push 0x6b3548 */ { u32 v = 0x6b3548u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2ad: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x45f2b2u); f_00630f40();
    /* 0045f2b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045f2b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2b6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045f2bb: call 0x654390 */ r_esp -= 4; W32(r_esp, 0x45f2c0u); f_00654390();
    /* 0045f2c0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f2c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f2c5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f2c7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x45f2ccu); f_00686d72();
    /* 0045f2cc: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f2ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f2cf: ret 8 */ FN_RET(0x0045f0f0); r_esp += 12; return;
}

void f_0045f2e0(void) /* PaiGowRoomInterface::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f2e0);
    /* 0045f2e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f2e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f2e7: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2ec: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045f2f1: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x45f2f6u); f_005fb5a0();
    /* 0045f2f6: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2fb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f2fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045f300: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x45f305u); f_005fb5a0();
    /* 0045f305: push 0x6b35b0 */ { u32 v = 0x6b35b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f30a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f30c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045f30f: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x45f314u); f_005fb5a0();
    /* 0045f314: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f316: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f318: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f319: ret 4 */ FN_RET(0x0045f2e0); r_esp += 8; return;
}

void f_0045f320(void) /* PaiGowRoomInterface::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f320);
    /* 0045f320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f321: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f327: cmp dword ptr [ebp + 8], 0x30e3a0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e3a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f32e: jne 0x45f341 */ if (!fZ) goto L_0045f341;
L_0045f330:; BB(0x0045f330);
    /* 0045f330: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0045f332: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 0045f338: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x45f33du); f_00653bd0();
    /* 0045f33d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f33f: jmp 0x45f35d */ goto L_0045f35d;
L_0045f341:; BB(0x0045f341);
    /* 0045f341: cmp dword ptr [ebp + 8], 0x30e3a4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e3a4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f348: jne 0x45f35b */ if (!fZ) goto L_0045f35b;
L_0045f34a:; BB(0x0045f34a);
    /* 0045f34a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f34c: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 0045f352: call 0x653bd0 */ r_esp -= 4; W32(r_esp, 0x45f357u); f_00653bd0();
    /* 0045f357: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f359: jmp 0x45f35d */ goto L_0045f35d;
L_0045f35b:; BB(0x0045f35b);
    /* 0045f35b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0045f35d:; BB(0x0045f35d);
    /* 0045f35d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f35f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f360: ret 4 */ FN_RET(0x0045f320); r_esp += 8; return;
}

void f_0045f370(void) /* PaiGowRoomInterface::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f370);
    /* 0045f370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f371: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f377: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045f379: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f37b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f37c: ret 4 */ FN_RET(0x0045f370); r_esp += 8; return;
}

void f_0045f380(void) /* PaiGowRoomInterface::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f380);
    /* 0045f380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f381: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045f387: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045f389: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f38b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f38c: ret 4 */ FN_RET(0x0045f380); r_esp += 8; return;
}

void f_0045f390(void) /* PaiGowRoomInterface::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f390);
    /* 0045f390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f391: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f393: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f396: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045f399: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045f3a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045f3a3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045f3a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045f3a9: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f3ad: je 0x45f3b8 */ if (fZ) goto L_0045f3b8;
L_0045f3af:; BB(0x0045f3af);
    /* 0045f3af: mov dword ptr [ebp - 4], 0x71b03c */ W32((u32)(r_ebp+0xfffffffcu), 0x71b03cu);
    /* 0045f3b6: jmp 0x45f3bf */ goto L_0045f3bf;
L_0045f3b8:; BB(0x0045f3b8);
    /* 0045f3b8: mov dword ptr [ebp - 4], 0x71b01c */ W32((u32)(r_ebp+0xfffffffcu), 0x71b01cu);
L_0045f3bf:; BB(0x0045f3bf);
    /* 0045f3bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f3c2: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f3c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f3c5: ret  */ FN_RET(0x0045f390); r_esp += 4; return;
}

void f_0045f3d0(void) /* PaiGowRoomInterface::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f3d0);
    /* 0045f3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f3d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f3d5: push 0x69f334 */ { u32 v = 0x69f334u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f3da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045f3e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f3e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f3e2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045f3e7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045f3e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f3ea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045f3ed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0045f3f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045f3f6: mov eax, dword ptr [0x790748] */ r_eax = R32((u32)(0x790748u));
    /* 0045f3fb: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0045f3fe: jne 0x45f469 */ if (!fZ) goto L_0045f469;
L_0045f400:; BB(0x0045f400);
    /* 0045f400: mov ecx, dword ptr [0x790748] */ r_ecx = R32((u32)(0x790748u));
    /* 0045f406: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0045f409: mov dword ptr [0x790748], ecx */ W32((u32)(0x790748u), r_ecx);
    /* 0045f40f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045f416: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0045f41c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045f41e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f424: mov edx, dword ptr [eax + 0x23c] */ r_edx = R32((u32)(r_eax+0x23cu));
    /* 0045f42a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45f42cu); call_ind(t); }
    /* 0045f42c: mov dword ptr [0x71b060], eax */ W32((u32)(0x71b060u), r_eax);
    /* 0045f431: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0045f436: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045f438: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f43e: mov eax, dword ptr [edx + 0x23c] */ r_eax = R32((u32)(r_edx+0x23cu));
    /* 0045f444: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45f446u); call_ind(t); }
    /* 0045f446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f447: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f44d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045f44f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f455: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0045f45b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45f45du); call_ind(t); }
    /* 0045f45d: mov dword ptr [0x71b064], eax */ W32((u32)(0x71b064u), r_eax);
    /* 0045f462: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0045f469:; BB(0x0045f469);
    /* 0045f469: cmp dword ptr [ebp + 8], 0x30e3a1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e3a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f470: jne 0x45f47b */ if (!fZ) goto L_0045f47b;
L_0045f472:; BB(0x0045f472);
    /* 0045f472: mov eax, 0x71b05c */ r_eax = 0x71b05cu;
    /* 0045f477: jmp 0x45f47d */ goto L_0045f47d;
L_0045f47b:; BB(0x0045f47b);
    /* 0045f47b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0045f47d:; BB(0x0045f47d);
    /* 0045f47d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045f480: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045f487: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045f488: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f48a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f48b: ret 4 */ FN_RET(0x0045f3d0); r_esp += 8; return;
}

void f_0045f490(void) /* PaiGowRoomInterface::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f490);
    /* 0045f490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f491: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f493: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f496: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045f499: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045f4a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045f4a3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045f4a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045f4a9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f4ad: je 0x45f4b7 */ if (fZ) goto L_0045f4b7;
L_0045f4af:; BB(0x0045f4af);
    /* 0045f4af: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f4b3: je 0x45f4c0 */ if (fZ) goto L_0045f4c0;
L_0045f4b5:; BB(0x0045f4b5);
    /* 0045f4b5: jmp 0x45f4c7 */ goto L_0045f4c7;
L_0045f4b7:; BB(0x0045f4b7);
    /* 0045f4b7: mov dword ptr [ebp - 4], 0x71a588 */ W32((u32)(r_ebp+0xfffffffcu), 0x71a588u);
    /* 0045f4be: jmp 0x45f4c7 */ goto L_0045f4c7;
L_0045f4c0:; BB(0x0045f4c0);
    /* 0045f4c0: mov dword ptr [ebp - 4], 0x71aa48 */ W32((u32)(r_ebp+0xfffffffcu), 0x71aa48u);
L_0045f4c7:; BB(0x0045f4c7);
    /* 0045f4c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f4ca: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f4cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f4cd: ret  */ FN_RET(0x0045f490); r_esp += 4; return;
}

void f_0045f4d0(void) /* PaiGowRoomInterface::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f4d0);
    /* 0045f4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f4d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f4d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045f4d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045f4e0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045f4e3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0045f4e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045f4e9: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f4ed: je 0x45f4f7 */ if (fZ) goto L_0045f4f7;
L_0045f4ef:; BB(0x0045f4ef);
    /* 0045f4ef: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f4f3: je 0x45f500 */ if (fZ) goto L_0045f500;
L_0045f4f5:; BB(0x0045f4f5);
    /* 0045f4f5: jmp 0x45f507 */ goto L_0045f507;
L_0045f4f7:; BB(0x0045f4f7);
    /* 0045f4f7: mov dword ptr [ebp - 4], 0x71af08 */ W32((u32)(r_ebp+0xfffffffcu), 0x71af08u);
    /* 0045f4fe: jmp 0x45f507 */ goto L_0045f507;
L_0045f500:; BB(0x0045f500);
    /* 0045f500: mov dword ptr [ebp - 4], 0x71af78 */ W32((u32)(r_ebp+0xfffffffcu), 0x71af78u);
L_0045f507:; BB(0x0045f507);
    /* 0045f507: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f50a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f50c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f50d: ret  */ FN_RET(0x0045f4d0); r_esp += 4; return;
}

void f_0045f510(void) /* PaiGowRoomInterface::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045f510);
    /* 0045f510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045f511: mov ebp, esp */ r_ebp = r_esp;
    /* 0045f513: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045f516: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045f519: cmp dword ptr [ebp + 0xc], 0x30e3a0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x30e3a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f520: je 0x45f52f */ if (fZ) goto L_0045f52f;
L_0045f522:; BB(0x0045f522);
    /* 0045f522: cmp dword ptr [ebp + 0xc], 0x30e3a4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x30e3a4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f529: jne 0x45f624 */ if (!fZ) goto L_0045f624;
L_0045f52f:; BB(0x0045f52f);
    /* 0045f52f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045f536: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045f539: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0045f53c: cmp dword ptr [ebp - 0xc], 0x30e3a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x30e3a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f543: je 0x45f550 */ if (fZ) goto L_0045f550;
L_0045f545:; BB(0x0045f545);
    /* 0045f545: cmp dword ptr [ebp - 0xc], 0x30e3a4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x30e3a4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f54c: je 0x45f559 */ if (fZ) goto L_0045f559;
L_0045f54e:; BB(0x0045f54e);
    /* 0045f54e: jmp 0x45f560 */ goto L_0045f560;
L_0045f550:; BB(0x0045f550);
    /* 0045f550: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0045f557: jmp 0x45f560 */ goto L_0045f560;
L_0045f559:; BB(0x0045f559);
    /* 0045f559: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
L_0045f560:; BB(0x0045f560);
    /* 0045f560: cmp dword ptr [ebp + 8], 0x1397 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1397u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f567: jne 0x45f581 */ if (!fZ) goto L_0045f581;
L_0045f569:; BB(0x0045f569);
    /* 0045f569: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f56b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f56e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045f56f: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 0045f575: call 0x5dbd00 */ r_esp -= 4; W32(r_esp, 0x45f57au); f_005dbd00();
    /* 0045f57a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f57c: jmp 0x45f673 */ goto L_0045f673;
L_0045f581:; BB(0x0045f581);
    /* 0045f581: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f587: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x45f58cu); f_005e2f90();
    /* 0045f58c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045f58f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0045f592: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f595: sub eax, 0x1392 */ {  u32 a = r_eax; u32 b = 0x1392u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045f59a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0045f59d: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045f5a1: ja 0x45f5f2 */ if ((!fC&&!fZ)) goto L_0045f5f2;
L_0045f5a3:; BB(0x0045f5a3);
    /* 0045f5a3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045f5a6: jmp dword ptr [ecx*4 + 0x45f67c] */ { u32 t = R32((u32)(r_ecx*4+0x45f67cu)); switch (t) { case 0x45f5adu: goto L_0045f5ad; case 0x45f5bfu: goto L_0045f5bf; case 0x45f5d0u: goto L_0045f5d0; case 0x45f5e2u: goto L_0045f5e2; default: UNSUP(0x0045f5a6, "jump table entry is not a known target"); } }
L_0045f5ad:; BB(0x0045f5ad);
    /* 0045f5ad: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0045f5b3: mov dword ptr [edx + 0x4f0c], 5 */ W32((u32)(r_edx+0x4f0cu), 0x5u);
    /* 0045f5bd: jmp 0x45f5f2 */ goto L_0045f5f2;
L_0045f5bf:; BB(0x0045f5bf);
    /* 0045f5bf: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0045f5c4: mov dword ptr [eax + 0x4f0c], 0xa */ W32((u32)(r_eax+0x4f0cu), 0xau);
    /* 0045f5ce: jmp 0x45f5f2 */ goto L_0045f5f2;
L_0045f5d0:; BB(0x0045f5d0);
    /* 0045f5d0: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f5d6: mov dword ptr [ecx + 0x4f0c], 0x19 */ W32((u32)(r_ecx+0x4f0cu), 0x19u);
    /* 0045f5e0: jmp 0x45f5f2 */ goto L_0045f5f2;
L_0045f5e2:; BB(0x0045f5e2);
    /* 0045f5e2: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0045f5e8: mov dword ptr [edx + 0x4f0c], 0x64 */ W32((u32)(r_edx+0x4f0cu), 0x64u);
L_0045f5f2:; BB(0x0045f5f2);
    /* 0045f5f2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f5f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045f5f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045f5f8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f5fe: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0045f600: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f606: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0045f60c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45f60eu); call_ind(t); }
    /* 0045f60e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045f611: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f613: jne 0x45f620 */ if (!fZ) goto L_0045f620;
L_0045f615:; BB(0x0045f615);
    /* 0045f615: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f61b: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x45f620u); f_005e3130();
L_0045f620:; BB(0x0045f620);
    /* 0045f620: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f622: jmp 0x45f673 */ goto L_0045f673;
L_0045f624:; BB(0x0045f624);
    /* 0045f624: cmp dword ptr [ebp + 8], 0x30e3a0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e3a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f62b: jne 0x45f64b */ if (!fZ) goto L_0045f64b;
L_0045f62d:; BB(0x0045f62d);
    /* 0045f62d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f62f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0045f631: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0045f637: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045f639: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f63f: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 0045f645: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x45f647u); call_ind(t); }
    /* 0045f647: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f649: jmp 0x45f673 */ goto L_0045f673;
L_0045f64b:; BB(0x0045f64b);
    /* 0045f64b: cmp dword ptr [ebp + 8], 0x30e3a4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e3a4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045f652: jne 0x45f671 */ if (!fZ) goto L_0045f671;
L_0045f654:; BB(0x0045f654);
    /* 0045f654: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045f656: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0045f658: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0045f65d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045f65f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0045f665: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0045f66b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45f66du); call_ind(t); }
    /* 0045f66d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045f66f: jmp 0x45f673 */ goto L_0045f673;
L_0045f671:; BB(0x0045f671);
    /* 0045f671: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0045f673:; BB(0x0045f673);
    /* 0045f673: mov esp, ebp */ r_esp = r_ebp;
    /* 0045f675: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045f676: ret 8 */ FN_RET(0x0045f510); r_esp += 12; return;
}

