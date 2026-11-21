#include "protos.h"

void f_004f9b90(void) /* PokerRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9b90);
    /* 004f9b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b91: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9b93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b95: push 0x6a26f8 */ { u32 v = 0x6a26f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f9ba0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9ba1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9ba2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004f9ba7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9baa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004f9bad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004f9bb3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004f9bb6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9bb9: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_005d7b60();
    /* 004f9bbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bc5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9bc8: mov dword ptr [eax], 0x6c03bc */ W32((u32)(r_eax), 0x6c03bcu);
    /* 004f9bce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9bd1: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4f9bd6u); f_005da830();
    /* 004f9bd6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004f9bd9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9bdb: je 0x4f9bf8 */ if (fZ) goto L_004f9bf8;
L_004f9bdd:; BB(0x004f9bdd);
    /* 004f9bdd: push 0x6c03a4 */ { u32 v = 0x6c03a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9be2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4f9be7u); f_00630f40();
    /* 004f9be7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9bea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9beb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004f9bf1: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x4f9bf6u); f_005f38b0();
    /* 004f9bf6: jmp 0x4f9c0c */ goto L_004f9c0c;
L_004f9bf8:; BB(0x004f9bf8);
    /* 004f9bf8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9bfb: call 0x4fa1a0 */ r_esp -= 4; W32(r_esp, 0x4f9c00u); f_004fa1a0();
    /* 004f9c00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c01: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004f9c07: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_005f38b0();
L_004f9c0c:; BB(0x004f9c0c);
    /* 004f9c0c: push 0x186a3 */ { u32 v = 0x186a3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c11: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9c14: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x4f9c19u); f_005f1ad0();
    /* 004f9c19: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9c1c: mov dword ptr [0x791eb8], edx */ W32((u32)(0x791eb8u), r_edx);
    /* 004f9c22: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9c25: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 004f9c2f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9c32: mov byte ptr [ecx + 0xa8], 0 */ W8((u32)(r_ecx+0xa8u), 0x0u);
    /* 004f9c39: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9c3c: mov byte ptr [edx + 0x94], 0 */ W8((u32)(r_edx+0x94u), 0x0u);
    /* 004f9c43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9c46: call 0x4fc210 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_004fc210();
    /* 004f9c4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c52: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9c55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9c58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9c5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c60: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9c62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9c63: ret  */ FN_RET(0x004f9b90); r_esp += 4; return;
}

void f_004f9c70(void) /* PokerRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9c70);
    /* 004f9c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c71: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9c77: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004f9c7d: call 0x47a340 */ r_esp -= 4; W32(r_esp, 0x4f9c82u); f_0047a340();
    /* 004f9c82: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9c84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9c85: ret  */ FN_RET(0x004f9c70); r_esp += 4; return;
}

void f_004f9c90(void) /* PokerRoom::vfunc41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9c90);
    /* 004f9c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9c97: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004f9c9c: movzx ecx, byte ptr [eax + 0x4ee9] */ r_ecx = (u32)R8((u32)(r_eax+0x4ee9u));
    /* 004f9ca3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9ca5: je 0x4f9cab */ if (fZ) goto L_004f9cab;
L_004f9ca7:; BB(0x004f9ca7);
    /* 004f9ca7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f9ca9: jmp 0x4f9cad */ goto L_004f9cad;
L_004f9cab:; BB(0x004f9cab);
    /* 004f9cab: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004f9cad:; BB(0x004f9cad);
    /* 004f9cad: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9caf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9cb0: ret  */ FN_RET(0x004f9c90); r_esp += 4; return;
}

void f_004f9cc0(void) /* PokerRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9cc0);
    /* 004f9cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9cc5: push 0x6a271b */ { u32 v = 0x6a271bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9cca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f9cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9cd1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9cd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004f9cd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9cdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9cdc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004f9cdf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004f9ce5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004f9ce8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9ceb: mov dword ptr [eax], 0x6c03bc */ W32((u32)(r_eax), 0x6c03bcu);
    /* 004f9cf1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9cf8: call 0x520d60 */ r_esp -= 4; W32(r_esp, 0x4f9cfdu); f_00520d60();
    /* 004f9cfd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004f9d00: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004f9d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9d04: call 0x5209d0 */ r_esp -= 4; W32(r_esp, 0x4f9d09u); f_005209d0();
    /* 004f9d09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9d0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9d0e: call 0x520510 */ r_esp -= 4; W32(r_esp, 0x4f9d13u); f_00520510();
    /* 004f9d13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9d16: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9d19: call 0x4fc790 */ r_esp -= 4; W32(r_esp, 0x4f9d1eu); f_004fc790();
    /* 004f9d1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9d20: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004f9d26: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x4f9d2bu); f_005f38b0();
    /* 004f9d2b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9d2e: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004f9d31: call 0x4fd030 */ r_esp -= 4; W32(r_esp, 0x4f9d36u); f_004fd030();
    /* 004f9d36: mov dword ptr [0x791eb8], 0 */ W32((u32)(0x791eb8u), 0x0u);
    /* 004f9d40: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9d47: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9d4a: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x4f9d4fu); f_005d7bd0();
    /* 004f9d4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9d52: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9d59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9d5a: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9d5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9d5d: ret  */ FN_RET(0x004f9cc0); r_esp += 4; return;
}

void f_004f9d60(void) /* PokerRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9d60);
    /* 004f9d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9d61: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9d67: mov eax, 0x416 */ r_eax = 0x416u;
    /* 004f9d6c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9d6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9d6f: ret 4 */ FN_RET(0x004f9d60); r_esp += 8; return;
}

void f_004f9d80(void) /* PokerRoom::vfunc155 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9d80);
    /* 004f9d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9d81: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9d83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9d86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004f9d89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004f9d8c: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004f9d92: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004f9d95: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9d9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9d9e: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4f9da3u); f_005da830();
    /* 004f9da3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004f9da6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9da8: je 0x4f9e8e */ if (fZ) goto L_004f9e8e;
L_004f9dae:; BB(0x004f9dae);
    /* 004f9dae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9db1: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x4f9db6u); f_005da880();
    /* 004f9db6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004f9db9: cmp dword ptr [ebp - 8], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9dc0: jg 0x4f9ddf */ if ((!fZ&&fS==fO)) goto L_004f9ddf;
L_004f9dc2:; BB(0x004f9dc2);
    /* 004f9dc2: cmp dword ptr [ebp - 8], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9dc9: je 0x4f9e09 */ if (fZ) goto L_004f9e09;
L_004f9dcb:; BB(0x004f9dcb);
    /* 004f9dcb: cmp dword ptr [ebp - 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9dd2: je 0x4f9df3 */ if (fZ) goto L_004f9df3;
L_004f9dd4:; BB(0x004f9dd4);
    /* 004f9dd4: cmp dword ptr [ebp - 8], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9ddb: je 0x4f9dfe */ if (fZ) goto L_004f9dfe;
L_004f9ddd:; BB(0x004f9ddd);
    /* 004f9ddd: jmp 0x4f9e28 */ goto L_004f9e28;
L_004f9ddf:; BB(0x004f9ddf);
    /* 004f9ddf: cmp dword ptr [ebp - 8], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9de6: je 0x4f9e14 */ if (fZ) goto L_004f9e14;
L_004f9de8:; BB(0x004f9de8);
    /* 004f9de8: cmp dword ptr [ebp - 8], 0x7a120 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9def: je 0x4f9e1f */ if (fZ) goto L_004f9e1f;
L_004f9df1:; BB(0x004f9df1);
    /* 004f9df1: jmp 0x4f9e28 */ goto L_004f9e28;
L_004f9df3:; BB(0x004f9df3);
    /* 004f9df3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004f9df6: mov dword ptr [eax], 0x19 */ W32((u32)(r_eax), 0x19u);
    /* 004f9dfc: jmp 0x4f9e28 */ goto L_004f9e28;
L_004f9dfe:; BB(0x004f9dfe);
    /* 004f9dfe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9e01: mov dword ptr [ecx], 0x64 */ W32((u32)(r_ecx), 0x64u);
    /* 004f9e07: jmp 0x4f9e28 */ goto L_004f9e28;
L_004f9e09:; BB(0x004f9e09);
    /* 004f9e09: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004f9e0c: mov dword ptr [edx], 0x1f4 */ W32((u32)(r_edx), 0x1f4u);
    /* 004f9e12: jmp 0x4f9e28 */ goto L_004f9e28;
L_004f9e14:; BB(0x004f9e14);
    /* 004f9e14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004f9e17: mov dword ptr [eax], 0x9c4 */ W32((u32)(r_eax), 0x9c4u);
    /* 004f9e1d: jmp 0x4f9e28 */ goto L_004f9e28;
L_004f9e1f:; BB(0x004f9e1f);
    /* 004f9e1f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9e22: mov dword ptr [ecx], 0x2710 */ W32((u32)(r_ecx), 0x2710u);
L_004f9e28:; BB(0x004f9e28);
    /* 004f9e28: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004f9e2b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004f9e2d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004f9e2f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004f9e32: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 004f9e34: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004f9e3a: cmp dword ptr [edx + 0x4f18], 5 */ {  u32 a = R32((u32)(r_edx+0x4f18u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e41: je 0x4f9e51 */ if (fZ) goto L_004f9e51;
L_004f9e43:; BB(0x004f9e43);
    /* 004f9e43: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004f9e48: cmp dword ptr [eax + 0x4f18], 6 */ {  u32 a = R32((u32)(r_eax+0x4f18u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e4f: jne 0x4f9e8c */ if (!fZ) goto L_004f9e8c;
L_004f9e51:; BB(0x004f9e51);
    /* 004f9e51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9e54: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x4f9e59u); f_005da880();
    /* 004f9e59: cmp eax, 0x1388 */ {  u32 a = r_eax; u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9e5e: jne 0x4f9e74 */ if (!fZ) goto L_004f9e74;
L_004f9e60:; BB(0x004f9e60);
    /* 004f9e60: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9e63: mov dword ptr [ecx], 0xfa */ W32((u32)(r_ecx), 0xfau);
    /* 004f9e69: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004f9e6c: mov dword ptr [edx], 0x1f4 */ W32((u32)(r_edx), 0x1f4u);
    /* 004f9e72: jmp 0x4f9e8c */ goto L_004f9e8c;
L_004f9e74:; BB(0x004f9e74);
    /* 004f9e74: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004f9e77: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004f9e79: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f9e7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004f9e7e: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 004f9e80: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004f9e83: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004f9e85: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f9e87: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004f9e8a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_004f9e8c:; BB(0x004f9e8c);
    /* 004f9e8c: jmp 0x4f9eb1 */ goto L_004f9eb1;
L_004f9e8e:; BB(0x004f9e8e);
    /* 004f9e8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004f9e91: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004f9e97: mov edx, dword ptr [ecx + 0x4f0c] */ r_edx = R32((u32)(r_ecx+0x4f0cu));
    /* 004f9e9d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004f9e9f: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004f9ea4: mov ecx, dword ptr [eax + 0x4f0c] */ r_ecx = R32((u32)(r_eax+0x4f0cu));
    /* 004f9eaa: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f9eac: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004f9eaf: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_004f9eb1:; BB(0x004f9eb1);
    /* 004f9eb1: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9eb4: ret 8 */ FN_RET(0x004f9d80); r_esp += 12; return;
}

void f_004f9ec0(void) /* PokerRoom::vfunc153 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004f9ec0);
    /* 004f9ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f9ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f9ec3: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f9ec6: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004f9ec9: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004f9ecc: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4f9ed1u); f_005da830();
    /* 004f9ed1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004f9ed4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9ed6: je 0x4f9f2e */ if (fZ) goto L_004f9f2e;
L_004f9ed8:; BB(0x004f9ed8);
    /* 004f9ed8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9edb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9edc: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004f9edf: call 0x5d9670 */ r_esp -= 4; W32(r_esp, 0x4f9ee4u); f_005d9670();
    /* 004f9ee4: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 004f9ee7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9ee8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9eeb: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x4f9ef0u); f_005d5a90();
    /* 004f9ef0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004f9ef2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004f9ef5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004f9ef8: mov dword ptr [eax + 0x4e4], ecx */ W32((u32)(r_eax+0x4e4u), r_ecx);
    /* 004f9efe: mov dword ptr [eax + 0x4e8], edx */ W32((u32)(r_eax+0x4e8u), r_edx);
    /* 004f9f04: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004f9f07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9f08: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9f0b: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x4f9f10u); f_005d5a90();
    /* 004f9f10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f9f12: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004f9f15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9f18: mov dword ptr [ecx + 0x4ec], edx */ W32((u32)(r_ecx+0x4ecu), r_edx);
    /* 004f9f1e: mov dword ptr [ecx + 0x4f0], eax */ W32((u32)(r_ecx+0x4f0u), r_eax);
    /* 004f9f24: jmp 0x4fa096 */ goto L_004fa096;
L_004f9f2e:; BB(0x004f9f2e);
    /* 004f9f2e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9f31: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4f9f36u); f_0063aac0();
    /* 004f9f36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f9f38: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004f9f3b: cmp dword ptr [ebp - 0x4c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9f3f: je 0x4f9f5d */ if (fZ) goto L_004f9f5d;
L_004f9f41:; BB(0x004f9f41);
    /* 004f9f41: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9f44: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4f9f49u); f_0063aac0();
    /* 004f9f49: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004f9f4b: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004f9f4e: cmp dword ptr [ebp - 0x50], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9f52: je 0x4f9f5d */ if (fZ) goto L_004f9f5d;
L_004f9f54:; BB(0x004f9f54);
    /* 004f9f54: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 004f9f5b: jmp 0x4f9f64 */ goto L_004f9f64;
L_004f9f5d:; BB(0x004f9f5d);
    /* 004f9f5d: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
L_004f9f64:; BB(0x004f9f64);
    /* 004f9f64: movzx ecx, byte ptr [ebp - 0x58] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffa8u));
    /* 004f9f68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9f6a: jne 0x4fa056 */ if (!fZ) goto L_004fa056;
L_004f9f70:; BB(0x004f9f70);
    /* 004f9f70: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 004f9f73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9f74: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 004f9f77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9f78: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004f9f7b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004f9f7d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004f9f80: mov eax, dword ptr [edx + 0x26c] */ r_eax = R32((u32)(r_edx+0x26cu));
    /* 004f9f86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4f9f88u); call_ind(t); }
    /* 004f9f88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004f9f8b: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004f9f8e: cmp dword ptr [ebp - 0x5c], 0xfa */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9f95: jg 0x4f9fae */ if ((!fZ&&fS==fO)) goto L_004f9fae;
L_004f9f97:; BB(0x004f9f97);
    /* 004f9f97: cmp dword ptr [ebp - 0x5c], 0xfa */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9f9e: je 0x4fa00a */ if (fZ) goto L_004fa00a;
L_004f9fa0:; BB(0x004f9fa0);
    /* 004f9fa0: cmp dword ptr [ebp - 0x5c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9fa4: je 0x4f9fbc */ if (fZ) goto L_004f9fbc;
L_004f9fa6:; BB(0x004f9fa6);
    /* 004f9fa6: cmp dword ptr [ebp - 0x5c], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9faa: je 0x4f9fe3 */ if (fZ) goto L_004f9fe3;
L_004f9fac:; BB(0x004f9fac);
    /* 004f9fac: jmp 0x4f9fb7 */ goto L_004f9fb7;
L_004f9fae:; BB(0x004f9fae);
    /* 004f9fae: cmp dword ptr [ebp - 0x5c], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9fb5: je 0x4fa031 */ if (fZ) goto L_004fa031;
L_004f9fb7:; BB(0x004f9fb7);
    /* 004f9fb7: jmp 0x4fa056 */ goto L_004fa056;
L_004f9fbc:; BB(0x004f9fbc);
    /* 004f9fbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9fbe: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9fc3: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4f9fc8u); f_0064c8a0();
    /* 004f9fc8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9fcb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9fce: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004f9fd1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9fd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9fd5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9fd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9fd9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004f9fdc: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x4f9fe1u); f_005d5af0();
    /* 004f9fe1: jmp 0x4fa056 */ goto L_004fa056;
L_004f9fe3:; BB(0x004f9fe3);
    /* 004f9fe3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9fe5: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9fea: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4f9fefu); f_0064c8a0();
    /* 004f9fef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9ff2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004f9ff5: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004f9ff8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9ffb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9ffc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9fff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa000: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa003: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x4fa008u); f_005d5af0();
    /* 004fa008: jmp 0x4fa056 */ goto L_004fa056;
L_004fa00a:; BB(0x004fa00a);
    /* 004fa00a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa00c: push 0x61a8 */ { u32 v = 0x61a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa011: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4fa016u); f_0064c8a0();
    /* 004fa016: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa019: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004fa01c: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004fa01f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fa022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa023: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fa026: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa027: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa02a: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x4fa02fu); f_005d5af0();
    /* 004fa02f: jmp 0x4fa056 */ goto L_004fa056;
L_004fa031:; BB(0x004fa031);
    /* 004fa031: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa033: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa038: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4fa03du); f_0064c8a0();
    /* 004fa03d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa040: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004fa043: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004fa046: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004fa049: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa04a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fa04d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa04e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa051: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x4fa056u); f_005d5af0();
L_004fa056:; BB(0x004fa056);
    /* 004fa056: lea ecx, [ebp - 0x40] */ r_ecx = (u32)(r_ebp+0xffffffc0u);
    /* 004fa059: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa05a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa05d: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x4fa062u); f_005d5a90();
    /* 004fa062: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fa064: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004fa067: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa06a: mov dword ptr [ecx + 0x4e4], edx */ W32((u32)(r_ecx+0x4e4u), r_edx);
    /* 004fa070: mov dword ptr [ecx + 0x4e8], eax */ W32((u32)(r_ecx+0x4e8u), r_eax);
    /* 004fa076: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 004fa079: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa07a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa07d: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x4fa082u); f_005d5a90();
    /* 004fa082: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004fa084: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fa087: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa08a: mov dword ptr [eax + 0x4ec], ecx */ W32((u32)(r_eax+0x4ecu), r_ecx);
    /* 004fa090: mov dword ptr [eax + 0x4f0], edx */ W32((u32)(r_eax+0x4f0u), r_edx);
L_004fa096:; BB(0x004fa096);
    /* 004fa096: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa098: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa099: ret 4 */ FN_RET(0x004f9ec0); r_esp += 8; return;
}

void f_004fa0a0(void) /* PokerRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa0a0);
    /* 004fa0a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa0a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa0a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa0a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa0a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa0ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa0b0: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x4fa0b5u); f_005d7f40();
    /* 004fa0b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa0b8: cmp dword ptr [ecx + 0x18], 4 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa0bc: jne 0x4fa18b */ if (!fZ) goto L_004fa18b;
L_004fa0c2:; BB(0x004fa0c2);
    /* 004fa0c2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fa0c5: movzx eax, byte ptr [edx + 4] */ r_eax = (u32)R8((u32)(r_edx+0x4u));
    /* 004fa0c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa0cb: jne 0x4fa18b */ if (!fZ) goto L_004fa18b;
L_004fa0d1:; BB(0x004fa0d1);
    /* 004fa0d1: cmp dword ptr [0x791364], 0 */ {  u32 a = R32((u32)(0x791364u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa0d8: je 0x4fa18b */ if (fZ) goto L_004fa18b;
L_004fa0de:; BB(0x004fa0de);
    /* 004fa0de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa0e1: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fa0e6u); f_005da7b0();
    /* 004fa0e6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fa0e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa0eb: je 0x4fa18b */ if (fZ) goto L_004fa18b;
L_004fa0f1:; BB(0x004fa0f1);
    /* 004fa0f1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fa0f4: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 004fa0f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa0f9: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x4fa0ffu); call_ind(t); }
    /* 004fa0ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa102: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fa105: cmp dword ptr [ebp - 8], 0x69 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa109: je 0x4fa113 */ if (fZ) goto L_004fa113;
L_004fa10b:; BB(0x004fa10b);
    /* 004fa10b: cmp dword ptr [ebp - 8], 0x78 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa10f: je 0x4fa150 */ if (fZ) goto L_004fa150;
L_004fa111:; BB(0x004fa111);
    /* 004fa111: jmp 0x4fa18b */ goto L_004fa18b;
L_004fa113:; BB(0x004fa113);
    /* 004fa113: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa115: push 0x30e7a2 */ { u32 v = 0x30e7a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa11a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 004fa120: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x4fa125u); f_005f2a60();
    /* 004fa125: mov ecx, eax */ r_ecx = r_eax;
    /* 004fa127: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x4fa12cu); f_006026d0();
    /* 004fa12c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fa12f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa131: je 0x4fa14e */ if (fZ) goto L_004fa14e;
L_004fa133:; BB(0x004fa133);
    /* 004fa133: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa135: push 0x30e7a2 */ { u32 v = 0x30e7a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa13a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa13d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fa13f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa142: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004fa145: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fa147u); call_ind(t); }
    /* 004fa147: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa14a: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_004fa14e:; BB(0x004fa14e);
    /* 004fa14e: jmp 0x4fa18b */ goto L_004fa18b;
L_004fa150:; BB(0x004fa150);
    /* 004fa150: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa152: push 0x30e7a3 */ { u32 v = 0x30e7a3u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa157: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 004fa15d: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x4fa162u); f_005f2a60();
    /* 004fa162: mov ecx, eax */ r_ecx = r_eax;
    /* 004fa164: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x4fa169u); f_006026d0();
    /* 004fa169: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fa16c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa16e: je 0x4fa18b */ if (fZ) goto L_004fa18b;
L_004fa170:; BB(0x004fa170);
    /* 004fa170: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa172: push 0x30e7a3 */ { u32 v = 0x30e7a3u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa177: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa17a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fa17c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa17f: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004fa182: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fa184u); call_ind(t); }
    /* 004fa184: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa187: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
L_004fa18b:; BB(0x004fa18b);
    /* 004fa18b: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa18d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa18e: ret 4 */ FN_RET(0x004fa0a0); r_esp += 8; return;
}

void f_004fa1d0(void) /* PokerRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa1d0);
    /* 004fa1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa1d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa1d5: push 0x6a2741 */ { u32 v = 0x6a2741u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa1da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fa1e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa1e1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa1e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fa1e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fa1eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa1ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fa1ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fa1f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004fa1f8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fa1fb: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x4fa200u); f_005d8230();
    /* 004fa200: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fa203: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x4fa208u); f_005d85e0();
    /* 004fa208: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 004fa20e: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x4fa213u); f_0057ae30();
    /* 004fa213: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fa216: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 004fa220: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa222: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fa227u); f_00686d82();
    /* 004fa227: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa22a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fa22d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fa234: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa238: je 0x4fa255 */ if (fZ) goto L_004fa255;
L_004fa23a:; BB(0x004fa23a);
    /* 004fa23a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa23c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fa23f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x4fa244u); f_005fc0d0();
    /* 004fa244: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fa247: mov dword ptr [ecx], 0x6c07a8 */ W32((u32)(r_ecx), 0x6c07a8u);
    /* 004fa24d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fa250: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004fa253: jmp 0x4fa25c */ goto L_004fa25c;
L_004fa255:; BB(0x004fa255);
    /* 004fa255: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004fa25c:; BB(0x004fa25c);
    /* 004fa25c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fa25f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004fa262: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fa269: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fa26c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa26d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fa270: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x4fa275u); f_005f1b70();
    /* 004fa275: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fa278: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fa27f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fa280: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa282: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa283: ret  */ FN_RET(0x004fa1d0); r_esp += 4; return;
}

void f_004fa290(void) /* PokerRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa290);
    /* 004fa290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa291: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa294: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa297: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa29a: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa2a1: je 0x4fa2b2 */ if (fZ) goto L_004fa2b2;
L_004fa2a3:; BB(0x004fa2a3);
    /* 004fa2a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa2a6: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 004fa2ac: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa2b0: jne 0x4fa2b6 */ if (!fZ) goto L_004fa2b6;
L_004fa2b2:; BB(0x004fa2b2);
    /* 004fa2b2: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fa2b4: jmp 0x4fa2d9 */ goto L_004fa2d9;
L_004fa2b6:; BB(0x004fa2b6);
    /* 004fa2b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa2b9: movzx ecx, byte ptr [eax + 0xa8] */ r_ecx = (u32)R8((u32)(r_eax+0xa8u));
    /* 004fa2c0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa2c2: jne 0x4fa2c8 */ if (!fZ) goto L_004fa2c8;
L_004fa2c4:; BB(0x004fa2c4);
    /* 004fa2c4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fa2c6: jmp 0x4fa2d9 */ goto L_004fa2d9;
L_004fa2c8:; BB(0x004fa2c8);
    /* 004fa2c8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa2cb: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004fa2d1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004fa2d4: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x4fa2d9u); f_005f8910();
L_004fa2d9:; BB(0x004fa2d9);
    /* 004fa2d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa2db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa2dc: ret  */ FN_RET(0x004fa290); r_esp += 4; return;
}

void f_004fa370(void) /* PokerRoom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa370);
    /* 004fa370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa371: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa374: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa375: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa378: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa37b: call 0x5d8020 */ r_esp -= 4; W32(r_esp, 0x4fa380u); f_005d8020();
    /* 004fa380: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa383: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa38a: je 0x4fa3fc */ if (fZ) goto L_004fa3fc;
L_004fa38c:; BB(0x004fa38c);
    /* 004fa38c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa38f: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 004fa395: movzx eax, byte ptr [edx + 0xe8] */ r_eax = (u32)R8((u32)(r_edx+0xe8u));
    /* 004fa39c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa39e: je 0x4fa3fc */ if (fZ) goto L_004fa3fc;
L_004fa3a0:; BB(0x004fa3a0);
    /* 004fa3a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa3a3: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 004fa3a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa3ac: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 004fa3b2: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4fa3b7u); f_0047e420();
    /* 004fa3b7: mov ecx, dword ptr [0x791ebc] */ r_ecx = R32((u32)(0x791ebcu));
    /* 004fa3bd: cmp ecx, dword ptr [esi + eax*4 + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+r_eax*4+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa3c1: je 0x4fa3fa */ if (fZ) goto L_004fa3fa;
L_004fa3c3:; BB(0x004fa3c3);
    /* 004fa3c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa3c6: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 004fa3cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa3cf: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004fa3d5: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4fa3dau); f_0047e420();
    /* 004fa3da: mov ecx, dword ptr [esi + eax*4 + 4] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x4u));
    /* 004fa3de: mov dword ptr [0x791ebc], ecx */ W32((u32)(0x791ebcu), r_ecx);
    /* 004fa3e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa3e6: mov edx, dword ptr [0x791ebc] */ r_edx = R32((u32)(0x791ebcu));
    /* 004fa3ec: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fa3ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa3f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa3f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa3f5: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x4fa3fau); f_005d8a20();
L_004fa3fa:; BB(0x004fa3fa);
    /* 004fa3fa: jmp 0x4fa41d */ goto L_004fa41d;
L_004fa3fc:; BB(0x004fa3fc);
    /* 004fa3fc: cmp dword ptr [0x791ebc], 0 */ {  u32 a = R32((u32)(0x791ebcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa403: je 0x4fa41d */ if (fZ) goto L_004fa41d;
L_004fa405:; BB(0x004fa405);
    /* 004fa405: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa407: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa40b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa40e: call 0x5d8a20 */ r_esp -= 4; W32(r_esp, 0x4fa413u); f_005d8a20();
    /* 004fa413: mov dword ptr [0x791ebc], 0 */ W32((u32)(0x791ebcu), 0x0u);
L_004fa41d:; BB(0x004fa41d);
    /* 004fa41d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa41e: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa420: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa421: ret  */ FN_RET(0x004fa370); r_esp += 4; return;
}

void f_004fa4c0(void) /* PokerRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa4c0);
    /* 004fa4c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa4c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa4c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa4c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004fa4c9: mov dword ptr [ebp - 0x20], 0x141 */ W32((u32)(r_ebp+0xffffffe0u), 0x141u);
    /* 004fa4d0: mov dword ptr [ebp - 0x1c], 0xe */ W32((u32)(r_ebp+0xffffffe4u), 0xeu);
    /* 004fa4d7: mov dword ptr [ebp - 0x18], 0xda */ W32((u32)(r_ebp+0xffffffe8u), 0xdau);
    /* 004fa4de: mov dword ptr [ebp - 0x14], 0x212 */ W32((u32)(r_ebp+0xffffffecu), 0x212u);
    /* 004fa4e5: mov dword ptr [ebp - 0x10], 0x212 */ W32((u32)(r_ebp+0xfffffff0u), 0x212u);
    /* 004fa4ec: mov dword ptr [ebp - 0xc], 0x212 */ W32((u32)(r_ebp+0xfffffff4u), 0x212u);
    /* 004fa4f3: mov dword ptr [ebp - 8], 0xe */ W32((u32)(r_ebp+0xfffffff8u), 0xeu);
    /* 004fa4fa: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 004fa501: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa504: mov eax, dword ptr [ebp + eax*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 004fa508: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa50a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa50b: ret 4 */ FN_RET(0x004fa4c0); r_esp += 8; return;
}

void f_004fa510(void) /* PokerRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa510);
    /* 004fa510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa511: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa513: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa516: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004fa519: mov dword ptr [ebp - 0x20], 0x136 */ W32((u32)(r_ebp+0xffffffe0u), 0x136u);
    /* 004fa520: mov dword ptr [ebp - 0x1c], 0x1e */ W32((u32)(r_ebp+0xffffffe4u), 0x1eu);
    /* 004fa527: mov dword ptr [ebp - 0x18], 0x1e */ W32((u32)(r_ebp+0xffffffe8u), 0x1eu);
    /* 004fa52e: mov dword ptr [ebp - 0x14], 0x1e */ W32((u32)(r_ebp+0xffffffecu), 0x1eu);
    /* 004fa535: mov dword ptr [ebp - 0x10], 0xaa */ W32((u32)(r_ebp+0xfffffff0u), 0xaau);
    /* 004fa53c: mov dword ptr [ebp - 0xc], 0x136 */ W32((u32)(r_ebp+0xfffffff4u), 0x136u);
    /* 004fa543: mov dword ptr [ebp - 8], 0x136 */ W32((u32)(r_ebp+0xfffffff8u), 0x136u);
    /* 004fa54a: mov dword ptr [ebp - 4], 0xaa */ W32((u32)(r_ebp+0xfffffffcu), 0xaau);
    /* 004fa551: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa554: mov eax, dword ptr [ebp + eax*4 - 0x20] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffe0u));
    /* 004fa558: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa55a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa55b: ret 4 */ FN_RET(0x004fa510); r_esp += 8; return;
}

void f_004fa560(void) /* PokerRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa560);
    /* 004fa560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa561: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa564: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fa565: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa568: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa56b: cmp dword ptr [eax + 0xa4], 0 */ {  u32 a = R32((u32)(r_eax+0xa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa572: je 0x4fa59d */ if (fZ) goto L_004fa59d;
L_004fa574:; BB(0x004fa574);
    /* 004fa574: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa577: mov esi, dword ptr [ecx + 0xa4] */ r_esi = R32((u32)(r_ecx+0xa4u));
    /* 004fa57d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa580: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 004fa586: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4fa58bu); f_0047e420();
    /* 004fa58b: mov eax, dword ptr [esi + eax*4 + 4] */ r_eax = R32((u32)(r_esi+r_eax*4+0x4u));
    /* 004fa58f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fa592: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa593: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fa598u); f_005dcb00();
    /* 004fa598: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa59b: jmp 0x4fa59f */ goto L_004fa59f;
L_004fa59d:; BB(0x004fa59d);
    /* 004fa59d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fa59f:; BB(0x004fa59f);
    /* 004fa59f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fa5a0: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa5a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa5a3: ret  */ FN_RET(0x004fa560); r_esp += 4; return;
}

void f_004fa5b0(void) /* PokerRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa5b0);
    /* 004fa5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa5b3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa5b6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004fa5b9: mov dword ptr [ebp - 0x24], 5 */ W32((u32)(r_ebp+0xffffffdcu), 0x5u);
    /* 004fa5c0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 004fa5c7: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 004fa5ce: mov dword ptr [ebp - 0x18], 2 */ W32((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 004fa5d5: mov dword ptr [ebp - 0x14], 3 */ W32((u32)(r_ebp+0xffffffecu), 0x3u);
    /* 004fa5dc: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 004fa5e3: mov dword ptr [ebp - 0xc], 6 */ W32((u32)(r_ebp+0xfffffff4u), 0x6u);
    /* 004fa5ea: mov dword ptr [ebp - 8], 7 */ W32((u32)(r_ebp+0xfffffff8u), 0x7u);
    /* 004fa5f1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fa5f4: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004fa5fa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004fa5fd: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 004fa604: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fa607: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fa609: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fa60c: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 004fa612: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fa614u); call_ind(t); }
    /* 004fa614: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fa617: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa619: je 0x4fa61d */ if (fZ) goto L_004fa61d;
L_004fa61b:; BB(0x004fa61b);
    /* 004fa61b: jmp 0x4fa659 */ goto L_004fa659;
L_004fa61d:; BB(0x004fa61d);
    /* 004fa61d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa620: mov edx, dword ptr [ebp + ecx*4 - 0x24] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffdcu));
    /* 004fa624: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa625: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fa62b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4fa630u); f_0047e390();
    /* 004fa630: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fa633: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa636: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4fa63bu); f_004c7050();
    /* 004fa63b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004fa63e: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004fa642: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa643: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fa646: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 004fa64c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fa64f: call 0x4f6c40 */ r_esp -= 4; W32(r_esp, 0x4fa654u); f_004f6c40();
    /* 004fa654: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fa657: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_004fa659:; BB(0x004fa659);
    /* 004fa659: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa65b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa65c: ret 8 */ FN_RET(0x004fa5b0); r_esp += 12; return;
}

void f_004fa660(void) /* PokerRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa660);
    /* 004fa660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa661: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa663: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa666: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004fa669: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa66b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fa671: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x4fa676u); f_006375d0();
    /* 004fa676: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fa679: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa67c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa67d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fa682u); f_005dcb00();
    /* 004fa682: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa685: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 004fa68b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa68c: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 004fa692: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa693: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fa696: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa697: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa69a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fa69d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4fa6a2u); f_0064c5c0();
    /* 004fa6a2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004fa6a4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fa6a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa6aa: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004fa6ad: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 004fa6b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa6b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6b4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fa6b9u); f_005dcb00();
    /* 004fa6b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fa6bc: mov ecx, eax */ r_ecx = r_eax;
    /* 004fa6be: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x4fa6c3u); f_0063b0a0();
    /* 004fa6c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa6c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa6c6: ret 4 */ FN_RET(0x004fa660); r_esp += 8; return;
}

void f_004fa6d0(void) /* PokerRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa6d0);
    /* 004fa6d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa6d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa6d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa6d6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa6d9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fa6dc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fa6df: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa6e6: je 0x4fa707 */ if (fZ) goto L_004fa707;
L_004fa6e8:; BB(0x004fa6e8);
    /* 004fa6e8: cmp dword ptr [ebp - 8], 0x186c3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186c3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa6ef: je 0x4fa778 */ if (fZ) goto L_004fa778;
L_004fa6f5:; BB(0x004fa6f5);
    /* 004fa6f5: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa6fc: je 0x4fa7c2 */ if (fZ) goto L_004fa7c2;
L_004fa702:; BB(0x004fa702);
    /* 004fa702: jmp 0x4fa85d */ goto L_004fa85d;
L_004fa707:; BB(0x004fa707);
    /* 004fa707: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa70a: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4fa70fu); f_005da830();
    /* 004fa70f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fa712: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa714: je 0x4fa724 */ if (fZ) goto L_004fa724;
L_004fa716:; BB(0x004fa716);
    /* 004fa716: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa718: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa71a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa71d: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa722u); f_005fe640();
    /* 004fa722: jmp 0x4fa737 */ goto L_004fa737;
L_004fa724:; BB(0x004fa724);
    /* 004fa724: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa726: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa728: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa72a: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa72f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa732: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4fa737u); f_005fe240();
L_004fa737:; BB(0x004fa737);
    /* 004fa737: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa739: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa73e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa741: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa746u); f_005fe640();
    /* 004fa746: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa748: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa74d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa750: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa755u); f_005fe640();
    /* 004fa755: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa757: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa75c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa75f: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa764u); f_005fe640();
    /* 004fa764: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa766: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa76b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa76e: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa773u); f_005fe640();
    /* 004fa773: jmp 0x4fa85d */ goto L_004fa85d;
L_004fa778:; BB(0x004fa778);
    /* 004fa778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa77a: push 0x186c6 */ { u32 v = 0x186c6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa77f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa782: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa787u); f_005fe640();
    /* 004fa787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa78a: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4fa78fu); f_005da830();
    /* 004fa78f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004fa792: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa794: je 0x4fa7bd */ if (fZ) goto L_004fa7bd;
L_004fa796:; BB(0x004fa796);
    /* 004fa796: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa798: push 0x186c5 */ { u32 v = 0x186c5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa79d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa7a0: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa7a5u); f_005fe640();
    /* 004fa7a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7a7: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa7ac: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa7b1u); f_005fe640();
    /* 004fa7b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7b3: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7b5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa7b8: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa7bdu); f_005fe640();
L_004fa7bd:; BB(0x004fa7bd);
    /* 004fa7bd: jmp 0x4fa85d */ goto L_004fa85d;
L_004fa7c2:; BB(0x004fa7c2);
    /* 004fa7c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7c4: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa7cc: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa7d1u); f_005fe640();
    /* 004fa7d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7d5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7d7: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa7df: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4fa7e4u); f_005fe240();
    /* 004fa7e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7e6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7ea: push 0x139c */ { u32 v = 0x139cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa7f2: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4fa7f7u); f_005fe240();
    /* 004fa7f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7f9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa7fd: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa802: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa805: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4fa80au); f_005fe240();
    /* 004fa80a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa80d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4fa812u); f_005da830();
    /* 004fa812: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fa815: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa817: je 0x4fa85d */ if (fZ) goto L_004fa85d;
L_004fa819:; BB(0x004fa819);
    /* 004fa819: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa81b: push 0x186d9 */ { u32 v = 0x186d9u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa820: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa823: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa828u); f_005fe640();
    /* 004fa828: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa82a: push 0x186d6 */ { u32 v = 0x186d6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa82f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa832: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4fa837u); f_005fe640();
    /* 004fa837: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa839: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa83b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa83d: push 0x30e7a4 */ { u32 v = 0x30e7a4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa842: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa845: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4fa84au); f_005fe240();
    /* 004fa84a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa84c: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa84e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fa850: push 0x186d6 */ { u32 v = 0x186d6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fa855: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa858: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4fa85du); f_005fe240();
L_004fa85d:; BB(0x004fa85d);
    /* 004fa85d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004fa860: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa861: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fa864: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa865: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa868: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x4fa86du); f_005d8670();
    /* 004fa86d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fa86f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fa870: ret 8 */ FN_RET(0x004fa6d0); r_esp += 12; return;
}

void f_004fa880(void) /* PokerRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fa880);
    /* 004fa880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fa881: mov ebp, esp */ r_ebp = r_esp;
    /* 004fa883: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fa886: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fa889: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa88c: movzx ecx, byte ptr [eax + 0x38] */ r_ecx = (u32)R8((u32)(r_eax+0x38u));
    /* 004fa890: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa892: jne 0x4fa8bb */ if (!fZ) goto L_004fa8bb;
L_004fa894:; BB(0x004fa894);
    /* 004fa894: cmp dword ptr [ebp + 8], 0x186f9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x186f9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa89b: jl 0x4fa8bb */ if ((fS!=fO)) goto L_004fa8bb;
L_004fa89d:; BB(0x004fa89d);
    /* 004fa89d: cmp dword ptr [ebp + 8], 0x18702 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x18702u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fa8a4: jg 0x4fa8bb */ if ((!fZ&&fS==fO)) goto L_004fa8bb;
L_004fa8a6:; BB(0x004fa8a6);
    /* 004fa8a6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fa8a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fa8aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fa8ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fa8ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa8b1: call 0x4fb640 */ r_esp -= 4; W32(r_esp, 0x4fa8b6u); f_004fb640();
    /* 004fa8b6: jmp 0x4faa44 */ goto L_004faa44;
L_004fa8bb:; BB(0x004fa8bb);
    /* 004fa8bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fa8be: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fa8c1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fa8c4: sub edx, 0x30e79e */ {  u32 a = r_edx; u32 b = 0x30e79eu; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004fa8ca: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004fa8cd: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fa8d1: ja 0x4faa34 */ if ((!fC&&!fZ)) goto L_004faa34;
L_004fa8d7:; BB(0x004fa8d7);
    /* 004fa8d7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fa8da: jmp dword ptr [eax*4 + 0x4faa4c] */ { u32 t = R32((u32)(r_eax*4+0x4faa4cu)); switch (t) { case 0x4fa8e1u: goto L_004fa8e1; case 0x4fa947u: goto L_004fa947; case 0x4fa9adu: goto L_004fa9ad; case 0x4faa34u: goto L_004faa34; case 0x4faa10u: goto L_004faa10; case 0x4faa1au: goto L_004faa1a; case 0x4faa27u: goto L_004faa27; default: UNSUP(0x004fa8da, "jump table entry is not a known target"); } }
L_004fa8e1:; BB(0x004fa8e1);
    /* 004fa8e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa8e4: cmp dword ptr [ecx + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8eb: je 0x4fa942 */ if (fZ) goto L_004fa942;
L_004fa8ed:; BB(0x004fa8ed);
    /* 004fa8ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa8f0: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004fa8f6: cmp dword ptr [eax + 0x1e0], 0 */ {  u32 a = R32((u32)(r_eax+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa8fd: je 0x4fa942 */ if (fZ) goto L_004fa942;
L_004fa8ff:; BB(0x004fa8ff);
    /* 004fa8ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa902: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fa908: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 004fa90e: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x4fa913u); f_006026d0();
    /* 004fa913: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fa916: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa918: je 0x4fa942 */ if (fZ) goto L_004fa942;
L_004fa91a:; BB(0x004fa91a);
    /* 004fa91a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa91d: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fa923: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 004fa929: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa92c: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fa932: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 004fa938: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fa93a: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 004fa940: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fa942u); call_ind(t); }
L_004fa942:; BB(0x004fa942);
    /* 004fa942: jmp 0x4faa44 */ goto L_004faa44;
L_004fa947:; BB(0x004fa947);
    /* 004fa947: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa94a: cmp dword ptr [eax + 0x9c], 0 */ {  u32 a = R32((u32)(r_eax+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa951: je 0x4fa9a8 */ if (fZ) goto L_004fa9a8;
L_004fa953:; BB(0x004fa953);
    /* 004fa953: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa956: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fa95c: cmp dword ptr [edx + 0x1e4], 0 */ {  u32 a = R32((u32)(r_edx+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa963: je 0x4fa9a8 */ if (fZ) goto L_004fa9a8;
L_004fa965:; BB(0x004fa965);
    /* 004fa965: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa968: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fa96e: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 004fa974: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x4fa979u); f_006026d0();
    /* 004fa979: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004fa97c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa97e: je 0x4fa9a8 */ if (fZ) goto L_004fa9a8;
L_004fa980:; BB(0x004fa980);
    /* 004fa980: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa983: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fa989: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 004fa98f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa992: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fa998: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 004fa99e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fa9a0: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 004fa9a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fa9a8u); call_ind(t); }
L_004fa9a8:; BB(0x004fa9a8);
    /* 004fa9a8: jmp 0x4faa44 */ goto L_004faa44;
L_004fa9ad:; BB(0x004fa9ad);
    /* 004fa9ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa9b0: cmp dword ptr [ecx + 0x9c], 0 */ {  u32 a = R32((u32)(r_ecx+0x9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa9b7: je 0x4faa0e */ if (fZ) goto L_004faa0e;
L_004fa9b9:; BB(0x004fa9b9);
    /* 004fa9b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa9bc: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004fa9c2: cmp dword ptr [eax + 0x1e8], 0 */ {  u32 a = R32((u32)(r_eax+0x1e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa9c9: je 0x4faa0e */ if (fZ) goto L_004faa0e;
L_004fa9cb:; BB(0x004fa9cb);
    /* 004fa9cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa9ce: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fa9d4: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 004fa9da: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x4fa9dfu); f_006026d0();
    /* 004fa9df: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fa9e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fa9e4: je 0x4faa0e */ if (fZ) goto L_004faa0e;
L_004fa9e6:; BB(0x004fa9e6);
    /* 004fa9e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa9e9: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fa9ef: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 004fa9f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fa9f8: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fa9fe: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 004faa04: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004faa06: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 004faa0c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4faa0eu); call_ind(t); }
L_004faa0e:; BB(0x004faa0e);
    /* 004faa0e: jmp 0x4faa44 */ goto L_004faa44;
L_004faa10:; BB(0x004faa10);
    /* 004faa10: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faa13: call 0x4fc7d0 */ r_esp -= 4; W32(r_esp, 0x4faa18u); f_004fc7d0();
    /* 004faa18: jmp 0x4faa44 */ goto L_004faa44;
L_004faa1a:; BB(0x004faa1a);
    /* 004faa1a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004faa20: call 0x4803d0 */ r_esp -= 4; W32(r_esp, 0x4faa25u); f_004803d0();
    /* 004faa25: jmp 0x4faa44 */ goto L_004faa44;
L_004faa27:; BB(0x004faa27);
    /* 004faa27: push 0x2f7471 */ { u32 v = 0x2f7471u; r_esp -= 4; W32(r_esp, v); }
    /* 004faa2c: call 0x60cce0 */ r_esp -= 4; W32(r_esp, 0x4faa31u); f_0060cce0();
    /* 004faa31: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004faa34:; BB(0x004faa34);
    /* 004faa34: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004faa37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faa38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004faa3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004faa3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faa3f: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x4faa44u); f_005dc7d0();
L_004faa44:; BB(0x004faa44);
    /* 004faa44: mov esp, ebp */ r_esp = r_ebp;
    /* 004faa46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faa47: ret 8 */ FN_RET(0x004fa880); r_esp += 12; return;
}

void f_004faa70(void) /* PokerRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faa70);
    /* 004faa70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faa71: mov ebp, esp */ r_ebp = r_esp;
    /* 004faa73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004faa76: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004faa79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004faa80: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004faa85: movzx ecx, byte ptr [eax + 0x4ee9] */ r_ecx = (u32)R8((u32)(r_eax+0x4ee9u));
    /* 004faa8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faa8e: je 0x4faa99 */ if (fZ) goto L_004faa99;
L_004faa90:; BB(0x004faa90);
    /* 004faa90: mov dword ptr [ebp - 4], 0x30e7a1 */ W32((u32)(r_ebp+0xfffffffcu), 0x30e7a1u);
    /* 004faa97: jmp 0x4faaa0 */ goto L_004faaa0;
L_004faa99:; BB(0x004faa99);
    /* 004faa99: mov dword ptr [ebp - 4], 0x30e79d */ W32((u32)(r_ebp+0xfffffffcu), 0x30e79du);
L_004faaa0:; BB(0x004faaa0);
    /* 004faaa0: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 004faaa5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004faaab: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x4faab0u); f_005df2e0();
    /* 004faab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faab1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004faab4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004faab5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004faab8: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x4faabdu); f_005f1e60();
    /* 004faabd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004faac0: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x4faac5u); f_0064e430();
    /* 004faac5: mov esp, ebp */ r_esp = r_ebp;
    /* 004faac7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004faac8: ret  */ FN_RET(0x004faa70); r_esp += 4; return;
}

void f_004faad0(void) /* PokerRoom::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004faad0);
    /* 004faad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004faad1: mov ebp, esp */ r_ebp = r_esp;
    /* 004faad3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004faad6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004faad9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004faae0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004faae7: mov eax, dword ptr [0x793578] */ r_eax = R32((u32)(0x793578u));
    /* 004faaec: cmp dword ptr [eax + 0x1c0], 0 */ {  u32 a = R32((u32)(r_eax+0x1c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faaf3: jne 0x4facd2 */ if (!fZ) goto L_004facd2;
L_004faaf9:; BB(0x004faaf9);
    /* 004faaf9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faafc: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fab02: movsx eax, word ptr [edx + 0x1f4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x1f4u));
    /* 004fab09: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004fab0c: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fab10: je 0x4fab27 */ if (fZ) goto L_004fab27;
L_004fab12:; BB(0x004fab12);
    /* 004fab12: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fab16: je 0x4fab7c */ if (fZ) goto L_004fab7c;
L_004fab18:; BB(0x004fab18);
    /* 004fab18: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fab1c: je 0x4fabce */ if (fZ) goto L_004fabce;
L_004fab22:; BB(0x004fab22);
    /* 004fab22: jmp 0x4fac20 */ goto L_004fac20;
L_004fab27:; BB(0x004fab27);
    /* 004fab27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fab2a: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fab30: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 004fab36: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fab39: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fab3f: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 004fab45: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fab47: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004fab4a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fab4cu); call_ind(t); }
    /* 004fab4c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fab4f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fab52: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fab58: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 004fab5e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fab61: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fab67: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 004fab6d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fab6f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004fab72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fab74u); call_ind(t); }
    /* 004fab74: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fab77: jmp 0x4fac3b */ goto L_004fac3b;
L_004fab7c:; BB(0x004fab7c);
    /* 004fab7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fab7f: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fab85: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 004fab8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fab8e: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fab94: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 004fab9a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fab9c: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004fab9f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4faba1u); call_ind(t); }
    /* 004faba1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004faba4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faba7: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fabad: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 004fabb3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fabb6: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fabbc: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 004fabc2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fabc4: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004fabc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fabc9u); call_ind(t); }
    /* 004fabc9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fabcc: jmp 0x4fac3b */ goto L_004fac3b;
L_004fabce:; BB(0x004fabce);
    /* 004fabce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fabd1: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fabd7: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 004fabdd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fabe0: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004fabe6: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 004fabec: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fabee: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004fabf1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fabf3u); call_ind(t); }
    /* 004fabf3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fabf6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fabf9: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fabff: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 004fac05: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fac08: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fac0e: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 004fac14: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fac16: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 004fac19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fac1bu); call_ind(t); }
    /* 004fac1b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fac1e: jmp 0x4fac3b */ goto L_004fac3b;
L_004fac20:; BB(0x004fac20);
    /* 004fac20: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004fac22: jne 0x4fac3b */ if (!fZ) goto L_004fac3b;
L_004fac24:; BB(0x004fac24);
    /* 004fac24: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac29: push 0x6c07c8 */ { u32 v = 0x6c07c8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac2e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac33: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4fac38u); f_005e9f20();
    /* 004fac38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fac3b:; BB(0x004fac3b);
    /* 004fac3b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fac3e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fac41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fac42: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fac45: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fac48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fac49: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fac4c: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004fac52: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 004fac58: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fac5b: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 004fac61: mov edx, dword ptr [eax + 0x1f8] */ r_edx = R32((u32)(r_eax+0x1f8u));
    /* 004fac67: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004fac69: mov ecx, edx */ r_ecx = r_edx;
    /* 004fac6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004fac6e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fac70u); call_ind(t); }
    /* 004fac70: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac72: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fac75: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fac7b: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 004fac81: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fac84: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004fac8a: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 004fac90: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fac92: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004fac95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fac97u); call_ind(t); }
    /* 004fac97: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004fac99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fac9c: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 004faca2: mov ecx, dword ptr [edx + 0x1f8] */ r_ecx = R32((u32)(r_edx+0x1f8u));
    /* 004faca8: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x4facadu); f_005eb5d0();
    /* 004facad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004facb0: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004facb6: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 004facbc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004facbf: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 004facc5: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 004faccb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004faccd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004facd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4facd2u); call_ind(t); }
L_004facd2:; BB(0x004facd2);
    /* 004facd2: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 004facd8: cmp dword ptr [ecx + 0x1c0], 1 */ {  u32 a = R32((u32)(r_ecx+0x1c0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004facdf: jne 0x4fb28d */ if (!fZ) goto L_004fb28d;
L_004face5:; BB(0x004face5);
    /* 004face5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004face8: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004facee: mov dword ptr [eax + 0x220], 0 */ W32((u32)(r_eax+0x220u), 0x0u);
    /* 004facf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004facfb: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fad01: movzx eax, byte ptr [edx + 0x228] */ r_eax = (u32)R8((u32)(r_edx+0x228u));
    /* 004fad08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fad0a: je 0x4fada4 */ if (fZ) goto L_004fada4;
L_004fad10:; BB(0x004fad10);
    /* 004fad10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fad13: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fad19: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 004fad1f: mov byte ptr [eax + 0x1dc], 1 */ W8((u32)(r_eax+0x1dcu), 0x1u);
    /* 004fad26: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 004fad2b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fad30u); f_00630f40();
    /* 004fad30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fad33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fad34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fad37: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fad3d: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 004fad43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fad46: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fad4c: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 004fad52: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fad54: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004fad5a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fad5cu); call_ind(t); }
    /* 004fad5c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fad5f: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fad65: mov edx, dword ptr [ecx + 0x208] */ r_edx = R32((u32)(r_ecx+0x208u));
    /* 004fad6b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fad6e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fad74: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 004fad7a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fad7c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004fad7f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fad81u); call_ind(t); }
    /* 004fad81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fad84: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fad8a: mov eax, dword ptr [edx + 0x220] */ r_eax = R32((u32)(r_edx+0x220u));
    /* 004fad90: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fad93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fad96: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fad9c: mov dword ptr [edx + 0x220], eax */ W32((u32)(r_edx+0x220u), r_eax);
    /* 004fada2: jmp 0x4fae15 */ goto L_004fae15;
L_004fada4:; BB(0x004fada4);
    /* 004fada4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fada7: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fadad: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 004fadb3: mov byte ptr [edx + 0x1dc], 0 */ W8((u32)(r_edx+0x1dcu), 0x0u);
    /* 004fadba: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fadbf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fadc4u); f_00630f40();
    /* 004fadc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fadc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fadc8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fadcb: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fadd1: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 004fadd7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fadda: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fade0: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 004fade6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fade8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004fadee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fadf0u); call_ind(t); }
    /* 004fadf0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fadf3: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fadf9: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 004fadff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fae02: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fae08: mov ecx, dword ptr [edx + 0x208] */ r_ecx = R32((u32)(r_edx+0x208u));
    /* 004fae0e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fae10: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004fae13: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fae15u); call_ind(t); }
L_004fae15:; BB(0x004fae15);
    /* 004fae15: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fae18: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fae1e: movzx edx, byte ptr [ecx + 0x227] */ r_edx = (u32)R8((u32)(r_ecx+0x227u));
    /* 004fae25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fae27: je 0x4faec1 */ if (fZ) goto L_004faec1;
L_004fae2d:; BB(0x004fae2d);
    /* 004fae2d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fae30: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fae36: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 004fae3c: mov byte ptr [edx + 0x1dc], 1 */ W8((u32)(r_edx+0x1dcu), 0x1u);
    /* 004fae43: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 004fae48: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fae4du); f_00630f40();
    /* 004fae4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fae50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fae51: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fae54: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fae5a: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 004fae60: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fae63: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fae69: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 004fae6f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fae71: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004fae77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fae79u); call_ind(t); }
    /* 004fae79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fae7c: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fae82: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 004fae88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fae8b: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fae91: mov ecx, dword ptr [edx + 0x20c] */ r_ecx = R32((u32)(r_edx+0x20cu));
    /* 004fae97: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fae99: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 004fae9c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fae9eu); call_ind(t); }
    /* 004fae9e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faea1: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004faea7: mov edx, dword ptr [ecx + 0x220] */ r_edx = R32((u32)(r_ecx+0x220u));
    /* 004faead: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004faeb0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faeb3: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004faeb9: mov dword ptr [ecx + 0x220], edx */ W32((u32)(r_ecx+0x220u), r_edx);
    /* 004faebf: jmp 0x4faf34 */ goto L_004faf34;
L_004faec1:; BB(0x004faec1);
    /* 004faec1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faec4: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004faeca: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 004faed0: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 004faed7: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faedc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4faee1u); f_00630f40();
    /* 004faee1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004faee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faee5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faee8: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004faeee: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 004faef4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faef7: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004faefd: mov edx, dword ptr [eax + 0x1f8] */ r_edx = R32((u32)(r_eax+0x1f8u));
    /* 004faf03: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004faf05: mov ecx, edx */ r_ecx = r_edx;
    /* 004faf07: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004faf0d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4faf0fu); call_ind(t); }
    /* 004faf0f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faf12: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004faf18: mov edx, dword ptr [ecx + 0x20c] */ r_edx = R32((u32)(r_ecx+0x20cu));
    /* 004faf1e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faf21: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004faf27: mov ecx, dword ptr [ecx + 0x20c] */ r_ecx = R32((u32)(r_ecx+0x20cu));
    /* 004faf2d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004faf2f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004faf32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4faf34u); call_ind(t); }
L_004faf34:; BB(0x004faf34);
    /* 004faf34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faf37: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004faf3d: movzx eax, byte ptr [edx + 0x226] */ r_eax = (u32)R8((u32)(r_edx+0x226u));
    /* 004faf44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004faf46: je 0x4fafe0 */ if (fZ) goto L_004fafe0;
L_004faf4c:; BB(0x004faf4c);
    /* 004faf4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faf4f: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004faf55: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 004faf5b: mov byte ptr [eax + 0x1dc], 1 */ W8((u32)(r_eax+0x1dcu), 0x1u);
    /* 004faf62: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 004faf67: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4faf6cu); f_00630f40();
    /* 004faf6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004faf6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004faf70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faf73: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004faf79: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 004faf7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faf82: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004faf88: mov ecx, dword ptr [edx + 0x1fc] */ r_ecx = R32((u32)(r_edx+0x1fcu));
    /* 004faf8e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004faf90: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004faf96: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4faf98u); call_ind(t); }
    /* 004faf98: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004faf9b: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fafa1: mov edx, dword ptr [ecx + 0x210] */ r_edx = R32((u32)(r_ecx+0x210u));
    /* 004fafa7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fafaa: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fafb0: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 004fafb6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fafb8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004fafbb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fafbdu); call_ind(t); }
    /* 004fafbd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fafc0: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fafc6: mov eax, dword ptr [edx + 0x220] */ r_eax = R32((u32)(r_edx+0x220u));
    /* 004fafcc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fafcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fafd2: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fafd8: mov dword ptr [edx + 0x220], eax */ W32((u32)(r_edx+0x220u), r_eax);
    /* 004fafde: jmp 0x4fb051 */ goto L_004fb051;
L_004fafe0:; BB(0x004fafe0);
    /* 004fafe0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fafe3: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fafe9: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 004fafef: mov byte ptr [edx + 0x1dc], 0 */ W8((u32)(r_edx+0x1dcu), 0x0u);
    /* 004faff6: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004faffb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fb000u); f_00630f40();
    /* 004fb000: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb004: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb007: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb00d: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 004fb013: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb016: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb01c: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 004fb022: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fb024: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004fb02a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fb02cu); call_ind(t); }
    /* 004fb02c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb02f: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb035: mov eax, dword ptr [edx + 0x210] */ r_eax = R32((u32)(r_edx+0x210u));
    /* 004fb03b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb03e: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb044: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 004fb04a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fb04c: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004fb04f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fb051u); call_ind(t); }
L_004fb051:; BB(0x004fb051);
    /* 004fb051: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb054: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb05a: movzx edx, byte ptr [ecx + 0x225] */ r_edx = (u32)R8((u32)(r_ecx+0x225u));
    /* 004fb061: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb063: je 0x4fb0fd */ if (fZ) goto L_004fb0fd;
L_004fb069:; BB(0x004fb069);
    /* 004fb069: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb06c: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb072: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 004fb078: mov byte ptr [edx + 0x1dc], 1 */ W8((u32)(r_edx+0x1dcu), 0x1u);
    /* 004fb07f: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb084: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fb089u); f_00630f40();
    /* 004fb089: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb08c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb08d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb090: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb096: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 004fb09c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb09f: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb0a5: mov ecx, dword ptr [ecx + 0x200] */ r_ecx = R32((u32)(r_ecx+0x200u));
    /* 004fb0ab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fb0ad: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004fb0b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fb0b5u); call_ind(t); }
    /* 004fb0b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb0b8: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb0be: mov eax, dword ptr [edx + 0x214] */ r_eax = R32((u32)(r_edx+0x214u));
    /* 004fb0c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb0c7: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb0cd: mov ecx, dword ptr [edx + 0x214] */ r_ecx = R32((u32)(r_edx+0x214u));
    /* 004fb0d3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fb0d5: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 004fb0d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fb0dau); call_ind(t); }
    /* 004fb0da: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb0dd: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb0e3: mov edx, dword ptr [ecx + 0x220] */ r_edx = R32((u32)(r_ecx+0x220u));
    /* 004fb0e9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fb0ec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb0ef: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb0f5: mov dword ptr [ecx + 0x220], edx */ W32((u32)(r_ecx+0x220u), r_edx);
    /* 004fb0fb: jmp 0x4fb170 */ goto L_004fb170;
L_004fb0fd:; BB(0x004fb0fd);
    /* 004fb0fd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb100: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004fb106: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 004fb10c: mov byte ptr [ecx + 0x1dc], 0 */ W8((u32)(r_ecx+0x1dcu), 0x0u);
    /* 004fb113: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb118: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fb11du); f_00630f40();
    /* 004fb11d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb121: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb124: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004fb12a: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 004fb130: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb133: mov eax, dword ptr [edx + 0xa0] */ r_eax = R32((u32)(r_edx+0xa0u));
    /* 004fb139: mov edx, dword ptr [eax + 0x200] */ r_edx = R32((u32)(r_eax+0x200u));
    /* 004fb13f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004fb141: mov ecx, edx */ r_ecx = r_edx;
    /* 004fb143: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004fb149: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fb14bu); call_ind(t); }
    /* 004fb14b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb14e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb154: mov edx, dword ptr [ecx + 0x214] */ r_edx = R32((u32)(r_ecx+0x214u));
    /* 004fb15a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb15d: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb163: mov ecx, dword ptr [ecx + 0x214] */ r_ecx = R32((u32)(r_ecx+0x214u));
    /* 004fb169: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fb16b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004fb16e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fb170u); call_ind(t); }
L_004fb170:; BB(0x004fb170);
    /* 004fb170: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb173: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb179: movzx eax, byte ptr [edx + 0x224] */ r_eax = (u32)R8((u32)(r_edx+0x224u));
    /* 004fb180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb182: je 0x4fb21c */ if (fZ) goto L_004fb21c;
L_004fb188:; BB(0x004fb188);
    /* 004fb188: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb18b: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb191: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 004fb197: mov byte ptr [eax + 0x1dc], 1 */ W8((u32)(r_eax+0x1dcu), 0x1u);
    /* 004fb19e: push 0x6bbdac */ { u32 v = 0x6bbdacu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1a3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fb1a8u); f_00630f40();
    /* 004fb1a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb1ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb1ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb1af: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb1b5: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 004fb1bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb1be: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb1c4: mov ecx, dword ptr [edx + 0x204] */ r_ecx = R32((u32)(r_edx+0x204u));
    /* 004fb1ca: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fb1cc: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004fb1d2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fb1d4u); call_ind(t); }
    /* 004fb1d4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb1d7: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb1dd: mov edx, dword ptr [ecx + 0x218] */ r_edx = R32((u32)(r_ecx+0x218u));
    /* 004fb1e3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb1e6: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb1ec: mov ecx, dword ptr [ecx + 0x218] */ r_ecx = R32((u32)(r_ecx+0x218u));
    /* 004fb1f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fb1f4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004fb1f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fb1f9u); call_ind(t); }
    /* 004fb1f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb1fc: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb202: mov eax, dword ptr [edx + 0x220] */ r_eax = R32((u32)(r_edx+0x220u));
    /* 004fb208: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fb20b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb20e: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb214: mov dword ptr [edx + 0x220], eax */ W32((u32)(r_edx+0x220u), r_eax);
    /* 004fb21a: jmp 0x4fb28d */ goto L_004fb28d;
L_004fb21c:; BB(0x004fb21c);
    /* 004fb21c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb21f: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb225: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 004fb22b: mov byte ptr [edx + 0x1dc], 0 */ W8((u32)(r_edx+0x1dcu), 0x0u);
    /* 004fb232: push 0x6bbaf0 */ { u32 v = 0x6bbaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb237: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fb23cu); f_00630f40();
    /* 004fb23c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb23f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb240: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb243: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb249: mov edx, dword ptr [ecx + 0x204] */ r_edx = R32((u32)(r_ecx+0x204u));
    /* 004fb24f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb252: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 004fb258: mov ecx, dword ptr [ecx + 0x204] */ r_ecx = R32((u32)(r_ecx+0x204u));
    /* 004fb25e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004fb260: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004fb266: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fb268u); call_ind(t); }
    /* 004fb268: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb26b: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb271: mov eax, dword ptr [edx + 0x218] */ r_eax = R32((u32)(r_edx+0x218u));
    /* 004fb277: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb27a: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 004fb280: mov ecx, dword ptr [edx + 0x218] */ r_ecx = R32((u32)(r_edx+0x218u));
    /* 004fb286: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fb288: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 004fb28b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fb28du); call_ind(t); }
L_004fb28d:; BB(0x004fb28d);
    /* 004fb28d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb28f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb290: ret 4 */ FN_RET(0x004faad0); r_esp += 8; return;
}

void f_004fb2a0(void) /* PokerRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb2a0);
    /* 004fb2a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb2a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb2a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb2aa: call 0x4fb580 */ r_esp -= 4; W32(r_esp, 0x4fb2afu); f_004fb580();
    /* 004fb2af: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb2b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb2b2: ret 8 */ FN_RET(0x004fb2a0); r_esp += 12; return;
}

void f_004fb2c0(void) /* PokerRoom::vfunc84 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb2c0);
    /* 004fb2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb2c3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb2c6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004fb2c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb2cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2cd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fb2d2u); f_005dcb00();
    /* 004fb2d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb2d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fb2d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fb2db: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004fb2de: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004fb2e1: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb2e5: je 0x4fb2f6 */ if (fZ) goto L_004fb2f6;
L_004fb2e7:; BB(0x004fb2e7);
    /* 004fb2e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fb2ea: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004fb2ed: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004fb2f0: cmp dword ptr [ebp - 0x18], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb2f4: jne 0x4fb30b */ if (!fZ) goto L_004fb30b;
L_004fb2f6:; BB(0x004fb2f6);
    /* 004fb2f6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fb2f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2fa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb2fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb2fe: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fb301: call 0x64da20 */ r_esp -= 4; W32(r_esp, 0x4fb306u); f_0064da20();
    /* 004fb306: jmp 0x4fb3f0 */ goto L_004fb3f0;
L_004fb30b:; BB(0x004fb30b);
    /* 004fb30b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb30d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004fb310: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb311: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fb314: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb315: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fb318: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fb31a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fb31d: mov eax, dword ptr [edx + 0x140] */ r_eax = R32((u32)(r_edx+0x140u));
    /* 004fb323: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fb325u); call_ind(t); }
    /* 004fb325: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fb328: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb32a: jne 0x4fb341 */ if (!fZ) goto L_004fb341;
L_004fb32c:; BB(0x004fb32c);
    /* 004fb32c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fb32f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb330: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb334: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fb337: call 0x64da20 */ r_esp -= 4; W32(r_esp, 0x4fb33cu); f_0064da20();
    /* 004fb33c: jmp 0x4fb3f0 */ goto L_004fb3f0;
L_004fb341:; BB(0x004fb341);
    /* 004fb341: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb345: jne 0x4fb35c */ if (!fZ) goto L_004fb35c;
L_004fb347:; BB(0x004fb347);
    /* 004fb347: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004fb34a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb34b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fb34e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb34f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fb352: call 0x64da20 */ r_esp -= 4; W32(r_esp, 0x4fb357u); f_0064da20();
    /* 004fb357: jmp 0x4fb3f0 */ goto L_004fb3f0;
L_004fb35c:; BB(0x004fb35c);
    /* 004fb35c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fb35f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb360: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fb363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb364: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fb367: call 0x64da20 */ r_esp -= 4; W32(r_esp, 0x4fb36cu); f_0064da20();
    /* 004fb36c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fb36f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004fb372: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fb375: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb378: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb37b: je 0x4fb3f0 */ if (fZ) goto L_004fb3f0;
L_004fb37d:; BB(0x004fb37d);
    /* 004fb37d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fb380: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004fb383: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fb386: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004fb38d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004fb394: jmp 0x4fb39f */ goto L_004fb39f;
L_004fb396:; BB(0x004fb396);
    /* 004fb396: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fb399: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fb39c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004fb39f:; BB(0x004fb39f);
    /* 004fb39f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb3a5: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4fb3aau); f_0047f950();
    /* 004fb3aa: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb3ad: jge 0x4fb3f0 */ if ((fS==fO)) goto L_004fb3f0;
L_004fb3af:; BB(0x004fb3af);
    /* 004fb3af: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fb3b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3b3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb3b9: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4fb3beu); f_0047e390();
    /* 004fb3be: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004fb3c1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb3c4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fb3c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb3c8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fb3cdu); f_005dcb00();
    /* 004fb3cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb3d0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004fb3d3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fb3d6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004fb3d9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004fb3dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fb3df: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb3e2: jne 0x4fb3ee */ if (!fZ) goto L_004fb3ee;
L_004fb3e4:; BB(0x004fb3e4);
    /* 004fb3e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb3e7: call 0x4c6550 */ r_esp -= 4; W32(r_esp, 0x4fb3ecu); f_004c6550();
    /* 004fb3ec: jmp 0x4fb3f0 */ goto L_004fb3f0;
L_004fb3ee:; BB(0x004fb3ee);
    /* 004fb3ee: jmp 0x4fb396 */ goto L_004fb396;
L_004fb3f0:; BB(0x004fb3f0);
    /* 004fb3f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb3f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb3f3: ret 8 */ FN_RET(0x004fb2c0); r_esp += 12; return;
}

void f_004fb400(void) /* PokerRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb400);
    /* 004fb400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb401: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb403: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb406: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004fb409: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fb40f: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x4fb414u); f_00636e70();
    /* 004fb414: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fb417: call 0x4fb580 */ r_esp -= 4; W32(r_esp, 0x4fb41cu); f_004fb580();
    /* 004fb41c: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb420: je 0x4fb48c */ if (fZ) goto L_004fb48c;
L_004fb422:; BB(0x004fb422);
    /* 004fb422: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb429: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fb430: jmp 0x4fb43b */ goto L_004fb43b;
L_004fb432:; BB(0x004fb432);
    /* 004fb432: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb435: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fb438: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004fb43b:; BB(0x004fb43b);
    /* 004fb43b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb441: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4fb446u); f_0047f950();
    /* 004fb446: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb449: jge 0x4fb48c */ if ((fS==fO)) goto L_004fb48c;
L_004fb44b:; BB(0x004fb44b);
    /* 004fb44b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb44e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb44f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fb455: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4fb45au); f_0047e390();
    /* 004fb45a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fb45d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb460: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fb463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb464: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fb469u); f_005dcb00();
    /* 004fb469: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fb46c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004fb46f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb472: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 004fb475: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004fb478: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fb47b: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb47e: jne 0x4fb48a */ if (!fZ) goto L_004fb48a;
L_004fb480:; BB(0x004fb480);
    /* 004fb480: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb483: call 0x4c6550 */ r_esp -= 4; W32(r_esp, 0x4fb488u); f_004c6550();
    /* 004fb488: jmp 0x4fb48c */ goto L_004fb48c;
L_004fb48a:; BB(0x004fb48a);
    /* 004fb48a: jmp 0x4fb432 */ goto L_004fb432;
L_004fb48c:; BB(0x004fb48c);
    /* 004fb48c: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb48e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb48f: ret 8 */ FN_RET(0x004fb400); r_esp += 12; return;
}

void f_004fb4a0(void) /* PokerRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb4a0);
    /* 004fb4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb4a3: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb4a6: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 004fb4a9: mov dword ptr [ebp - 0x48], 0xf0 */ W32((u32)(r_ebp+0xffffffb8u), 0xf0u);
    /* 004fb4b0: mov dword ptr [ebp - 0x44], 0xd2 */ W32((u32)(r_ebp+0xffffffbcu), 0xd2u);
    /* 004fb4b7: mov dword ptr [ebp - 0x40], 0x73 */ W32((u32)(r_ebp+0xffffffc0u), 0x73u);
    /* 004fb4be: mov dword ptr [ebp - 0x3c], 0x14 */ W32((u32)(r_ebp+0xffffffc4u), 0x14u);
    /* 004fb4c5: mov dword ptr [ebp - 0x38], 0x13b */ W32((u32)(r_ebp+0xffffffc8u), 0x13bu);
    /* 004fb4cc: mov dword ptr [ebp - 0x34], 0x14 */ W32((u32)(r_ebp+0xffffffccu), 0x14u);
    /* 004fb4d3: mov dword ptr [ebp - 0x30], 0x168 */ W32((u32)(r_ebp+0xffffffd0u), 0x168u);
    /* 004fb4da: mov dword ptr [ebp - 0x2c], 0x14 */ W32((u32)(r_ebp+0xffffffd4u), 0x14u);
    /* 004fb4e1: mov dword ptr [ebp - 0x28], 0x168 */ W32((u32)(r_ebp+0xffffffd8u), 0x168u);
    /* 004fb4e8: mov dword ptr [ebp - 0x24], 0xaa */ W32((u32)(r_ebp+0xffffffdcu), 0xaau);
    /* 004fb4ef: mov dword ptr [ebp - 0x20], 0x168 */ W32((u32)(r_ebp+0xffffffe0u), 0x168u);
    /* 004fb4f6: mov dword ptr [ebp - 0x1c], 0x136 */ W32((u32)(r_ebp+0xffffffe4u), 0x136u);
    /* 004fb4fd: mov dword ptr [ebp - 0x18], 0x73 */ W32((u32)(r_ebp+0xffffffe8u), 0x73u);
    /* 004fb504: mov dword ptr [ebp - 0x14], 0x136 */ W32((u32)(r_ebp+0xffffffecu), 0x136u);
    /* 004fb50b: mov dword ptr [ebp - 0x10], 0x73 */ W32((u32)(r_ebp+0xfffffff0u), 0x73u);
    /* 004fb512: mov dword ptr [ebp - 0xc], 0xaa */ W32((u32)(r_ebp+0xfffffff4u), 0xaau);
    /* 004fb519: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb520: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fb527: cmp dword ptr [ebp + 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb52b: jge 0x4fb545 */ if ((fS==fO)) goto L_004fb545;
L_004fb52d:; BB(0x004fb52d);
    /* 004fb52d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004fb530: mov ecx, dword ptr [ebp + eax*8 - 0x48] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffb8u));
    /* 004fb534: mov edx, dword ptr [ebp + eax*8 - 0x44] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffbcu));
    /* 004fb538: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb53b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004fb53d: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004fb540: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb543: jmp 0x4fb571 */ goto L_004fb571;
L_004fb545:; BB(0x004fb545);
    /* 004fb545: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004fb547: jne 0x4fb560 */ if (!fZ) goto L_004fb560;
L_004fb549:; BB(0x004fb549);
    /* 004fb549: push 0x261 */ { u32 v = 0x261u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb54e: push 0x6c07c8 */ { u32 v = 0x6c07c8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb553: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb558: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4fb55du); f_005e9f20();
    /* 004fb55d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fb560:; BB(0x004fb560);
    /* 004fb560: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb563: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb566: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004fb568: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb56b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004fb56e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_004fb571:; BB(0x004fb571);
    /* 004fb571: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb573: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb574: ret 8 */ FN_RET(0x004fb4a0); r_esp += 12; return;
}

void f_004fb640(void) /* PokerRoom::func_004fb640 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb640);
    /* 004fb640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb641: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb643: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb646: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fb649: cmp dword ptr [ebp + 8], 0x186f9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x186f9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb650: jl 0x4fb65b */ if ((fS!=fO)) goto L_004fb65b;
L_004fb652:; BB(0x004fb652);
    /* 004fb652: cmp dword ptr [ebp + 8], 0x18702 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x18702u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fb659: jle 0x4fb693 */ if ((fZ||fS!=fO)) goto L_004fb693;
L_004fb65b:; BB(0x004fb65b);
    /* 004fb65b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004fb65d: jne 0x4fb676 */ if (!fZ) goto L_004fb676;
L_004fb65f:; BB(0x004fb65f);
    /* 004fb65f: push 0x287 */ { u32 v = 0x287u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb664: push 0x6c07c8 */ { u32 v = 0x6c07c8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb669: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb66e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4fb673u); f_005e9f20();
    /* 004fb673: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fb676:; BB(0x004fb676);
    /* 004fb676: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb678: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004fb67e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fb680: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fb686: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 004fb68c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fb68eu); call_ind(t); }
    /* 004fb68e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fb691: jmp 0x4fb6b5 */ goto L_004fb6b5;
L_004fb693:; BB(0x004fb693);
    /* 004fb693: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fb696: sub eax, 0x186f9 */ {  u32 a = r_eax; u32 b = 0x186f9u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004fb69b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fb69c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fb6a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fb6a4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fb6aa: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 004fb6b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fb6b2u); call_ind(t); }
    /* 004fb6b2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004fb6b5:; BB(0x004fb6b5);
    /* 004fb6b5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004fb6b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb6b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb6bc: call 0x5f2c40 */ r_esp -= 4; W32(r_esp, 0x4fb6c1u); f_005f2c40();
    /* 004fb6c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fb6c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fb6c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb6c8: call 0x5f2cb0 */ r_esp -= 4; W32(r_esp, 0x4fb6cdu); f_005f2cb0();
    /* 004fb6cd: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb6cf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fb6d5: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x4fb6dau); f_006375d0();
    /* 004fb6da: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fb6dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb6e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb6e3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004fb6e6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fb6ec: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x4fb6f1u); f_00637610();
    /* 004fb6f1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fb6f4: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004fb6fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb6fd: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 004fb703: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb705: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb706: ret 8 */ FN_RET(0x004fb640); r_esp += 12; return;
}

void f_004fb7b0(void) /* PokerRoom::vfunc184 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb7b0);
    /* 004fb7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb7b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb7b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004fb7b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb7bc: call 0x5db2c0 */ r_esp -= 4; W32(r_esp, 0x4fb7c1u); f_005db2c0();
    /* 004fb7c1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb7c3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fb7c9: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x4fb7ceu); f_005df700();
    /* 004fb7ce: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004fb7d1: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 004fb7d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb7d7: je 0x4fb7ea */ if (fZ) goto L_004fb7ea;
L_004fb7d9:; BB(0x004fb7d9);
    /* 004fb7d9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fb7db: push 0x139c */ { u32 v = 0x139cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb7e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb7e3: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x4fb7e8u); f_005f2b20();
    /* 004fb7e8: jmp 0x4fb7f7 */ goto L_004fb7f7;
L_004fb7ea:; BB(0x004fb7ea);
    /* 004fb7ea: push 0x139c */ { u32 v = 0x139cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fb7ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fb7f2: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x4fb7f7u); f_005f2ba0();
L_004fb7f7:; BB(0x004fb7f7);
    /* 004fb7f7: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb7f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb7fa: ret  */ FN_RET(0x004fb7b0); r_esp += 4; return;
}

void f_004fb800(void) /* PokerRoom::vfunc64 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fb800);
    /* 004fb800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fb801: mov ebp, esp */ r_ebp = r_esp;
    /* 004fb803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fb806: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fb809: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb80c: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4fb811u); f_005da830();
    /* 004fb811: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fb814: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb816: jne 0x4fb830 */ if (!fZ) goto L_004fb830;
L_004fb818:; BB(0x004fb818);
    /* 004fb818: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fb81b: call 0x5d8c80 */ r_esp -= 4; W32(r_esp, 0x4fb820u); f_005d8c80();
    /* 004fb820: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fb823: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fb825: jne 0x4fb830 */ if (!fZ) goto L_004fb830;
L_004fb827:; BB(0x004fb827);
    /* 004fb827: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fb82e: jmp 0x4fb837 */ goto L_004fb837;
L_004fb830:; BB(0x004fb830);
    /* 004fb830: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_004fb837:; BB(0x004fb837);
    /* 004fb837: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 004fb83a: mov esp, ebp */ r_esp = r_ebp;
    /* 004fb83c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fb83d: ret  */ FN_RET(0x004fb800); r_esp += 4; return;
}

void f_004fc2d0(void) /* PokerRoom::vfunc90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc2d0);
    /* 004fc2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc2d3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc2d6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004fc2d9: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fc2de: mov cl, byte ptr [eax + 0x3d0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3d0u))) & 0xffu);
    /* 004fc2e4: mov byte ptr [ebp - 0xa], cl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_ecx);
    /* 004fc2e7: movzx edx, byte ptr [ebp - 0xa] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff6u));
    /* 004fc2eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc2ed: je 0x4fc2f6 */ if (fZ) goto L_004fc2f6;
L_004fc2ef:; BB(0x004fc2ef);
    /* 004fc2ef: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fc2f1: jmp 0x4fc43e */ goto L_004fc43e;
L_004fc2f6:; BB(0x004fc2f6);
    /* 004fc2f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fc2f9: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fc2feu); f_005da7b0();
    /* 004fc2fe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fc301: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc303: je 0x4fc436 */ if (fZ) goto L_004fc436;
L_004fc309:; BB(0x004fc309);
    /* 004fc309: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc30f: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x4fc314u); f_00480f80();
    /* 004fc314: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fc317: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc319: jne 0x4fc32c */ if (!fZ) goto L_004fc32c;
L_004fc31b:; BB(0x004fc31b);
    /* 004fc31b: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 004fc321: movzx eax, byte ptr [edx + 0x4f04] */ r_eax = (u32)R8((u32)(r_edx+0x4f04u));
    /* 004fc328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc32a: jne 0x4fc397 */ if (!fZ) goto L_004fc397;
L_004fc32c:; BB(0x004fc32c);
    /* 004fc32c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc332: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 004fc338: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004fc33b: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc33f: jne 0x4fc35a */ if (!fZ) goto L_004fc35a;
L_004fc341:; BB(0x004fc341);
    /* 004fc341: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fc346: movzx ecx, byte ptr [eax + 0x408] */ r_ecx = (u32)R8((u32)(r_eax+0x408u));
    /* 004fc34d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc34f: jne 0x4fc35a */ if (!fZ) goto L_004fc35a;
L_004fc351:; BB(0x004fc351);
    /* 004fc351: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 004fc358: jmp 0x4fc361 */ goto L_004fc361;
L_004fc35a:; BB(0x004fc35a);
    /* 004fc35a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_004fc361:; BB(0x004fc361);
    /* 004fc361: mov dl, byte ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 004fc364: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
    /* 004fc367: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 004fc36b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc36d: je 0x4fc383 */ if (fZ) goto L_004fc383;
L_004fc36f:; BB(0x004fc36f);
    /* 004fc36f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc371: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fc377: call 0x4fcb30 */ r_esp -= 4; W32(r_esp, 0x4fc37cu); f_004fcb30();
    /* 004fc37c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fc37e: jmp 0x4fc43e */ goto L_004fc43e;
L_004fc383:; BB(0x004fc383);
    /* 004fc383: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc385: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc38b: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x4fc390u); f_0047fb90();
    /* 004fc390: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fc392: jmp 0x4fc43e */ goto L_004fc43e;
L_004fc397:; BB(0x004fc397);
    /* 004fc397: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc39d: call 0x479930 */ r_esp -= 4; W32(r_esp, 0x4fc3a2u); f_00479930();
    /* 004fc3a2: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 004fc3a5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc3ab: call 0x479960 */ r_esp -= 4; W32(r_esp, 0x4fc3b0u); f_00479960();
    /* 004fc3b0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fc3b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc3b5: je 0x4fc3fb */ if (fZ) goto L_004fc3fb;
L_004fc3b7:; BB(0x004fc3b7);
    /* 004fc3b7: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 004fc3bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc3bd: jne 0x4fc3fb */ if (!fZ) goto L_004fc3fb;
L_004fc3bf:; BB(0x004fc3bf);
    /* 004fc3bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc3c1: push 0x6bcda0 */ { u32 v = 0x6bcda0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc3c6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fc3cbu); f_00630f40();
    /* 004fc3cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc3ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc3cf: push 0x6bcd74 */ { u32 v = 0x6bcd74u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc3d4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4fc3d9u); f_00630f40();
    /* 004fc3d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc3dd: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x4fc3e2u); f_0062ff10();
    /* 004fc3e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc3e5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc3e8: je 0x4fc3ee */ if (fZ) goto L_004fc3ee;
L_004fc3ea:; BB(0x004fc3ea);
    /* 004fc3ea: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fc3ec: jmp 0x4fc43e */ goto L_004fc43e;
L_004fc3ee:; BB(0x004fc3ee);
    /* 004fc3ee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc3f4: call 0x4815d0 */ r_esp -= 4; W32(r_esp, 0x4fc3f9u); f_004815d0();
    /* 004fc3f9: jmp 0x4fc418 */ goto L_004fc418;
L_004fc3fb:; BB(0x004fc3fb);
    /* 004fc3fb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc401: call 0x479960 */ r_esp -= 4; W32(r_esp, 0x4fc406u); f_00479960();
    /* 004fc406: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fc409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc40b: je 0x4fc418 */ if (fZ) goto L_004fc418;
L_004fc40d:; BB(0x004fc40d);
    /* 004fc40d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc413: call 0x4815d0 */ r_esp -= 4; W32(r_esp, 0x4fc418u); f_004815d0();
L_004fc418:; BB(0x004fc418);
    /* 004fc418: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004fc41a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc420: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x4fc425u); f_0047fb90();
    /* 004fc425: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 004fc42b: mov byte ptr [ecx + 0x4f04], 0 */ W8((u32)(r_ecx+0x4f04u), 0x0u);
    /* 004fc432: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fc434: jmp 0x4fc43e */ goto L_004fc43e;
L_004fc436:; BB(0x004fc436);
    /* 004fc436: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fc439: call 0x5d8710 */ r_esp -= 4; W32(r_esp, 0x4fc43eu); f_005d8710();
L_004fc43e:; BB(0x004fc43e);
    /* 004fc43e: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc441: ret  */ FN_RET(0x004fc2d0); r_esp += 4; return;
}

void f_004fc450(void) /* PokerRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc450);
    /* 004fc450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc451: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc453: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc456: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004fc459: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fc45b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fc461: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x4fc466u); f_006375d0();
    /* 004fc466: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004fc469: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc46b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc471: call 0x480920 */ r_esp -= 4; W32(r_esp, 0x4fc476u); f_00480920();
    /* 004fc476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc477: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4fc47cu); f_0064c8a0();
    /* 004fc47c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc47f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004fc482: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004fc485: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fc488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc489: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc48c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc48d: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 004fc490: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc491: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc494: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc497: call 0x64c630 */ r_esp -= 4; W32(r_esp, 0x4fc49cu); f_0064c630();
    /* 004fc49c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004fc49e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fc4a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc4a4: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 004fc4a7: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 004fc4aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004fc4ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc4ae: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fc4b3u); f_005dcb00();
    /* 004fc4b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc4b6: mov edx, dword ptr [eax + 0x4e0] */ r_edx = R32((u32)(r_eax+0x4e0u));
    /* 004fc4bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc4bd: mov eax, dword ptr [eax + 0x4dc] */ r_eax = R32((u32)(r_eax+0x4dcu));
    /* 004fc4c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fc4c4: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004fc4c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc4c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc4cb: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fc4ce: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x4fc4d3u); f_0064c5c0();
    /* 004fc4d3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fc4d5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004fc4d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc4db: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 004fc4de: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 004fc4e1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fc4e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc4e5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4fc4eau); f_005dcb00();
    /* 004fc4ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc4ed: mov ecx, eax */ r_ecx = r_eax;
    /* 004fc4ef: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x4fc4f4u); f_0063b0a0();
    /* 004fc4f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc4f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc4f7: ret 4 */ FN_RET(0x004fc450); r_esp += 8; return;
}

void f_004fc500(void) /* PokerRoom::vfunc181 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc500);
    /* 004fc500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc501: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc503: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc506: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004fc509: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fc50c: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fc511u); f_005da7b0();
    /* 004fc511: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fc514: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc516: jne 0x4fc51f */ if (!fZ) goto L_004fc51f;
L_004fc518:; BB(0x004fc518);
    /* 004fc518: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004fc51a: jmp 0x4fc638 */ goto L_004fc638;
L_004fc51f:; BB(0x004fc51f);
    /* 004fc51f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc525: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 004fc52b: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004fc52e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fc531: call 0x5daec0 */ r_esp -= 4; W32(r_esp, 0x4fc536u); f_005daec0();
    /* 004fc536: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc539: jg 0x4fc5a9 */ if ((!fZ&&fS==fO)) goto L_004fc5a9;
L_004fc53b:; BB(0x004fc53b);
    /* 004fc53b: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc53f: jl 0x4fc55f */ if ((fS!=fO)) goto L_004fc55f;
L_004fc541:; BB(0x004fc541);
    /* 004fc541: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc547: call 0x481690 */ r_esp -= 4; W32(r_esp, 0x4fc54cu); f_00481690();
    /* 004fc54c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc54e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fc551: call 0x4fcb30 */ r_esp -= 4; W32(r_esp, 0x4fc556u); f_004fcb30();
    /* 004fc556: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fc558: jmp 0x4fc638 */ goto L_004fc638;
L_004fc55f:; BB(0x004fc55f);
    /* 004fc55f: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc563: jne 0x4fc585 */ if (!fZ) goto L_004fc585;
L_004fc565:; BB(0x004fc565);
    /* 004fc565: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fc56a: cmp dword ptr [eax + 0x100], 0x29 */ {  u32 a = R32((u32)(r_eax+0x100u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc571: jge 0x4fc585 */ if ((fS==fO)) goto L_004fc585;
L_004fc573:; BB(0x004fc573);
    /* 004fc573: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc579: mov dword ptr [ecx + 0x100], 0x29 */ W32((u32)(r_ecx+0x100u), 0x29u);
    /* 004fc583: jmp 0x4fc5a9 */ goto L_004fc5a9;
L_004fc585:; BB(0x004fc585);
    /* 004fc585: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc589: jg 0x4fc5a9 */ if ((!fZ&&fS==fO)) goto L_004fc5a9;
L_004fc58b:; BB(0x004fc58b);
    /* 004fc58b: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fc591: cmp dword ptr [edx + 0x100], 0xd */ {  u32 a = R32((u32)(r_edx+0x100u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fc598: jge 0x4fc5a9 */ if ((fS==fO)) goto L_004fc5a9;
L_004fc59a:; BB(0x004fc59a);
    /* 004fc59a: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fc59f: mov dword ptr [eax + 0x100], 0xd */ W32((u32)(r_eax+0x100u), 0xdu);
L_004fc5a9:; BB(0x004fc5a9);
    /* 004fc5a9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc5af: call 0x481690 */ r_esp -= 4; W32(r_esp, 0x4fc5b4u); f_00481690();
    /* 004fc5b4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc5ba: movzx edx, byte ptr [ecx + 0x409] */ r_edx = (u32)R8((u32)(r_ecx+0x409u));
    /* 004fc5c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc5c3: jne 0x4fc5ef */ if (!fZ) goto L_004fc5ef;
L_004fc5c5:; BB(0x004fc5c5);
    /* 004fc5c5: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004fc5ca: movzx ecx, byte ptr [eax + 0x40b] */ r_ecx = (u32)R8((u32)(r_eax+0x40bu));
    /* 004fc5d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc5d3: jne 0x4fc5ef */ if (!fZ) goto L_004fc5ef;
L_004fc5d5:; BB(0x004fc5d5);
    /* 004fc5d5: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fc5db: movzx eax, byte ptr [edx + 0x40a] */ r_eax = (u32)R8((u32)(r_edx+0x40au));
    /* 004fc5e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc5e4: jne 0x4fc5ef */ if (!fZ) goto L_004fc5ef;
L_004fc5e6:; BB(0x004fc5e6);
    /* 004fc5e6: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004fc5ed: jmp 0x4fc5f6 */ goto L_004fc5f6;
L_004fc5ef:; BB(0x004fc5ef);
    /* 004fc5ef: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_004fc5f6:; BB(0x004fc5f6);
    /* 004fc5f6: mov cl, byte ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 004fc5f9: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 004fc5fc: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004fc602: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004fc608: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004fc60b: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 004fc60e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc60f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fc612: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc613: call 0x519f20 */ r_esp -= 4; W32(r_esp, 0x4fc618u); f_00519f20();
    /* 004fc618: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc61b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fc61e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fc620: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fc623: mov eax, dword ptr [edx + 0x2d0] */ r_eax = R32((u32)(r_edx+0x2d0u));
    /* 004fc629: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fc62bu); call_ind(t); }
    /* 004fc62b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fc62e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc630: je 0x4fc636 */ if (fZ) goto L_004fc636;
L_004fc632:; BB(0x004fc632);
    /* 004fc632: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004fc634: jmp 0x4fc638 */ goto L_004fc638;
L_004fc636:; BB(0x004fc636);
    /* 004fc636: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_004fc638:; BB(0x004fc638);
    /* 004fc638: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc63a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc63b: ret  */ FN_RET(0x004fc500); r_esp += 4; return;
}

void f_004fc640(void) /* PokerRoom::vfunc180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc640);
    /* 004fc640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc641: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc643: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fc646: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fc649: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc64c: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fc651u); f_005da7b0();
    /* 004fc651: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fc654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc656: je 0x4fc68f */ if (fZ) goto L_004fc68f;
L_004fc658:; BB(0x004fc658);
    /* 004fc658: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc65e: cmp dword ptr [ecx + 0xfc], 3 */ {  u32 a = R32((u32)(r_ecx+0xfcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc665: jne 0x4fc686 */ if (!fZ) goto L_004fc686;
L_004fc667:; BB(0x004fc667);
    /* 004fc667: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc66a: call 0x5daec0 */ r_esp -= 4; W32(r_esp, 0x4fc66fu); f_005daec0();
    /* 004fc66f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc672: je 0x4fc68f */ if (fZ) goto L_004fc68f;
L_004fc674:; BB(0x004fc674);
    /* 004fc674: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fc67a: call 0x480540 */ r_esp -= 4; W32(r_esp, 0x4fc67fu); f_00480540();
    /* 004fc67f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004fc682: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc684: jne 0x4fc68f */ if (!fZ) goto L_004fc68f;
L_004fc686:; BB(0x004fc686);
    /* 004fc686: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004fc68d: jmp 0x4fc696 */ goto L_004fc696;
L_004fc68f:; BB(0x004fc68f);
    /* 004fc68f: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_004fc696:; BB(0x004fc696);
    /* 004fc696: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 004fc699: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc69b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc69c: ret  */ FN_RET(0x004fc640); r_esp += 4; return;
}

void f_004fc920(void) /* PokerRoom::vfunc99 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fc920);
    /* 004fc920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fc921: mov ebp, esp */ r_ebp = r_esp;
    /* 004fc923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fc924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fc927: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc92a: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fc92fu); f_005da7b0();
    /* 004fc92f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fc932: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fc934: je 0x4fc942 */ if (fZ) goto L_004fc942;
L_004fc936:; BB(0x004fc936);
    /* 004fc936: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fc938: call 0x519d40 */ r_esp -= 4; W32(r_esp, 0x4fc93du); f_00519d40();
    /* 004fc93d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fc940: jmp 0x4fc94a */ goto L_004fc94a;
L_004fc942:; BB(0x004fc942);
    /* 004fc942: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fc945: call 0x64f290 */ r_esp -= 4; W32(r_esp, 0x4fc94au); f_0064f290();
L_004fc94a:; BB(0x004fc94a);
    /* 004fc94a: mov esp, ebp */ r_esp = r_ebp;
    /* 004fc94c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fc94d: ret  */ FN_RET(0x004fc920); r_esp += 4; return;
}

void f_004fcde0(void) /* PokerRoom::vfunc170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fcde0);
    /* 004fcde0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fcde1: mov ebp, esp */ r_ebp = r_esp;
    /* 004fcde3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fcde6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004fcde9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 004fcdec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fcded: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004fcdf0: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x4fcdf5u); f_005d5a90();
    /* 004fcdf5: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 004fcdfb: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fce00u); f_005da7b0();
    /* 004fce00: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fce03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fce05: je 0x4fce1c */ if (fZ) goto L_004fce1c;
L_004fce07:; BB(0x004fce07);
    /* 004fce07: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004fce0a: mov eax, dword ptr [edx + 0x4b4] */ r_eax = R32((u32)(r_edx+0x4b4u));
    /* 004fce10: mov ecx, dword ptr [edx + 0x4b8] */ r_ecx = R32((u32)(r_edx+0x4b8u));
    /* 004fce16: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004fce19: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_004fce1c:; BB(0x004fce1c);
    /* 004fce1c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004fce1f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004fce22: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 004fce24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004fce27: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 004fce2a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fce2d: mov esp, ebp */ r_esp = r_ebp;
    /* 004fce2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fce30: ret 8 */ FN_RET(0x004fcde0); r_esp += 12; return;
}

void f_004fce40(void) /* PokerRoom::vfunc182 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fce40);
    /* 004fce40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fce41: mov ebp, esp */ r_ebp = r_esp;
    /* 004fce43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fce44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004fce47: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 004fce4c: movzx ecx, byte ptr [eax + 0x4ee8] */ r_ecx = (u32)R8((u32)(r_eax+0x4ee8u));
    /* 004fce53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fce55: je 0x4fce76 */ if (fZ) goto L_004fce76;
L_004fce57:; BB(0x004fce57);
    /* 004fce57: cmp dword ptr [0x791eb8], 0 */ {  u32 a = R32((u32)(0x791eb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fce5e: je 0x4fce76 */ if (fZ) goto L_004fce76;
L_004fce60:; BB(0x004fce60);
    /* 004fce60: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fce66: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 004fce6c: call 0x47fdf0 */ r_esp -= 4; W32(r_esp, 0x4fce71u); f_0047fdf0();
    /* 004fce71: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fce74: jmp 0x4fce79 */ goto L_004fce79;
L_004fce76:; BB(0x004fce76);
    /* 004fce76: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004fce79:; BB(0x004fce79);
    /* 004fce79: mov esp, ebp */ r_esp = r_ebp;
    /* 004fce7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fce7c: ret  */ FN_RET(0x004fce40); r_esp += 4; return;
}

