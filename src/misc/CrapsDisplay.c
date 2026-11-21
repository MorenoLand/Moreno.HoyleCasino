#include "protos.h"

void f_00428c20(void) /* CrapsDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428c20);
    /* 00428c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00428c23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428c26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00428c29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428c2c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x428c31u); f_005e9e20();
    /* 00428c31: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428c34: mov dword ptr [eax], 0x6b6984 */ W32((u32)(r_eax), 0x6b6984u);
    /* 00428c3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00428c41: jmp 0x428c4c */ goto L_00428c4c;
L_00428c43:; BB(0x00428c43);
    /* 00428c43: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428c46: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428c49: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00428c4c:; BB(0x00428c4c);
    /* 00428c4c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428c50: jge 0x428c62 */ if ((fS==fO)) goto L_00428c62;
L_00428c52:; BB(0x00428c52);
    /* 00428c52: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428c55: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428c58: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 00428c60: jmp 0x428c43 */ goto L_00428c43;
L_00428c62:; BB(0x00428c62);
    /* 00428c62: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00428c69: jmp 0x428c74 */ goto L_00428c74;
L_00428c6b:; BB(0x00428c6b);
    /* 00428c6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428c6e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428c71: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00428c74:; BB(0x00428c74);
    /* 00428c74: cmp dword ptr [ebp - 4], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428c78: jge 0x428c8a */ if ((fS==fO)) goto L_00428c8a;
L_00428c7a:; BB(0x00428c7a);
    /* 00428c7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428c7d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428c80: mov dword ptr [eax + edx*4 + 0x14], 0 */ W32((u32)(r_eax+r_edx*4+0x14u), 0x0u);
    /* 00428c88: jmp 0x428c6b */ goto L_00428c6b;
L_00428c8a:; BB(0x00428c8a);
    /* 00428c8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00428c91: jmp 0x428c9c */ goto L_00428c9c;
L_00428c93:; BB(0x00428c93);
    /* 00428c93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428c96: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428c99: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00428c9c:; BB(0x00428c9c);
    /* 00428c9c: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428ca0: jge 0x428cc6 */ if ((fS==fO)) goto L_00428cc6;
L_00428ca2:; BB(0x00428ca2);
    /* 00428ca2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428ca5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428ca8: mov dword ptr [eax + edx*4 + 0x148], 0 */ W32((u32)(r_eax+r_edx*4+0x148u), 0x0u);
    /* 00428cb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00428cb6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428cb9: mov dword ptr [edx + ecx*4 + 0x150], 0 */ W32((u32)(r_edx+r_ecx*4+0x150u), 0x0u);
    /* 00428cc4: jmp 0x428c93 */ goto L_00428c93;
L_00428cc6:; BB(0x00428cc6);
    /* 00428cc6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428cc9: mov dword ptr [eax + 0x144], 0 */ W32((u32)(r_eax+0x144u), 0x0u);
    /* 00428cd3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428cd6: mov dword ptr [ecx + 0x158], 0 */ W32((u32)(r_ecx+0x158u), 0x0u);
    /* 00428ce0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428ce3: mov dword ptr [edx + 0x15c], 0 */ W32((u32)(r_edx+0x15cu), 0x0u);
    /* 00428ced: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428cf0: mov dword ptr [eax + 0x160], 0 */ W32((u32)(r_eax+0x160u), 0x0u);
    /* 00428cfa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428cfd: mov dword ptr [ecx + 0x164], 0 */ W32((u32)(r_ecx+0x164u), 0x0u);
    /* 00428d07: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428d0a: mov dword ptr [edx + 0x168], 0 */ W32((u32)(r_edx+0x168u), 0x0u);
    /* 00428d14: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00428d17: mov esp, ebp */ r_esp = r_ebp;
    /* 00428d19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428d1a: ret  */ FN_RET(0x00428c20); r_esp += 4; return;
}

void f_00428d20(void) /* CrapsDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00428d20);
    /* 00428d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00428d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00428d23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00428d25: push 0x69e408 */ { u32 v = 0x69e408u; r_esp -= 4; W32(r_esp, v); }
    /* 00428d2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00428d30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428d31: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00428d37: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00428d3c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00428d3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00428d3f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00428d42: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00428d48: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00428d4b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428d4e: mov dword ptr [eax], 0x6b6984 */ W32((u32)(r_eax), 0x6b6984u);
    /* 00428d54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00428d5b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00428d62: jmp 0x428d6d */ goto L_00428d6d;
L_00428d64:; BB(0x00428d64);
    /* 00428d64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428d67: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428d6a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00428d6d:; BB(0x00428d6d);
    /* 00428d6d: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428d71: jge 0x428da8 */ if ((fS==fO)) goto L_00428da8;
L_00428d73:; BB(0x00428d73);
    /* 00428d73: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428d76: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428d79: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00428d7d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00428d80: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00428d83: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00428d86: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428d8a: je 0x428d9f */ if (fZ) goto L_00428d9f;
L_00428d8c:; BB(0x00428d8c);
    /* 00428d8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428d8e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00428d91: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428d93: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00428d96: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428d98: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428d9au); call_ind(t); }
    /* 00428d9a: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00428d9d: jmp 0x428da6 */ goto L_00428da6;
L_00428d9f:; BB(0x00428d9f);
    /* 00428d9f: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00428da6:; BB(0x00428da6);
    /* 00428da6: jmp 0x428d64 */ goto L_00428d64;
L_00428da8:; BB(0x00428da8);
    /* 00428da8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00428daf: jmp 0x428dba */ goto L_00428dba;
L_00428db1:; BB(0x00428db1);
    /* 00428db1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428db4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428db7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00428dba:; BB(0x00428dba);
    /* 00428dba: cmp dword ptr [ebp - 0x10], 0x4c */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428dbe: jge 0x428df5 */ if ((fS==fO)) goto L_00428df5;
L_00428dc0:; BB(0x00428dc0);
    /* 00428dc0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428dc3: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428dc6: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00428dca: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00428dcd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00428dd0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00428dd3: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428dd7: je 0x428dec */ if (fZ) goto L_00428dec;
L_00428dd9:; BB(0x00428dd9);
    /* 00428dd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ddb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00428dde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428de0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00428de3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428de5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428de7u); call_ind(t); }
    /* 00428de7: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00428dea: jmp 0x428df3 */ goto L_00428df3;
L_00428dec:; BB(0x00428dec);
    /* 00428dec: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00428df3:; BB(0x00428df3);
    /* 00428df3: jmp 0x428db1 */ goto L_00428db1;
L_00428df5:; BB(0x00428df5);
    /* 00428df5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00428dfc: jmp 0x428e07 */ goto L_00428e07;
L_00428dfe:; BB(0x00428dfe);
    /* 00428dfe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428e01: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00428e04: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00428e07:; BB(0x00428e07);
    /* 00428e07: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00428e0b: jge 0x428e7b */ if ((fS==fO)) goto L_00428e7b;
L_00428e0d:; BB(0x00428e0d);
    /* 00428e0d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428e10: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428e13: mov ecx, dword ptr [eax + edx*4 + 0x148] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x148u));
    /* 00428e1a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00428e1d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00428e20: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00428e23: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428e27: je 0x428e3c */ if (fZ) goto L_00428e3c;
L_00428e29:; BB(0x00428e29);
    /* 00428e29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e2b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428e2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428e30: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00428e33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428e35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428e37u); call_ind(t); }
    /* 00428e37: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00428e3a: jmp 0x428e43 */ goto L_00428e43;
L_00428e3c:; BB(0x00428e3c);
    /* 00428e3c: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00428e43:; BB(0x00428e43);
    /* 00428e43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00428e46: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428e49: mov eax, dword ptr [edx + ecx*4 + 0x150] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x150u));
    /* 00428e50: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00428e53: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00428e56: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00428e59: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428e5d: je 0x428e72 */ if (fZ) goto L_00428e72;
L_00428e5f:; BB(0x00428e5f);
    /* 00428e5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e61: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e64: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428e66: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00428e69: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428e6b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x428e6du); call_ind(t); }
    /* 00428e6d: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00428e70: jmp 0x428e79 */ goto L_00428e79;
L_00428e72:; BB(0x00428e72);
    /* 00428e72: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00428e79:; BB(0x00428e79);
    /* 00428e79: jmp 0x428dfe */ goto L_00428dfe;
L_00428e7b:; BB(0x00428e7b);
    /* 00428e7b: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428e7e: mov ecx, dword ptr [eax + 0x144] */ r_ecx = R32((u32)(r_eax+0x144u));
    /* 00428e84: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00428e87: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00428e8a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00428e8d: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428e91: je 0x428ea6 */ if (fZ) goto L_00428ea6;
L_00428e93:; BB(0x00428e93);
    /* 00428e93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428e95: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00428e98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00428e9a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00428e9d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428e9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428ea1u); call_ind(t); }
    /* 00428ea1: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00428ea4: jmp 0x428ead */ goto L_00428ead;
L_00428ea6:; BB(0x00428ea6);
    /* 00428ea6: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00428ead:; BB(0x00428ead);
    /* 00428ead: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428eb0: mov edx, dword ptr [ecx + 0x158] */ r_edx = R32((u32)(r_ecx+0x158u));
    /* 00428eb6: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00428eb9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00428ebc: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00428ebf: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428ec3: je 0x428ed8 */ if (fZ) goto L_00428ed8;
L_00428ec5:; BB(0x00428ec5);
    /* 00428ec5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ec7: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00428eca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00428ecc: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00428ecf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428ed1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428ed3u); call_ind(t); }
    /* 00428ed3: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00428ed6: jmp 0x428edf */ goto L_00428edf;
L_00428ed8:; BB(0x00428ed8);
    /* 00428ed8: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00428edf:; BB(0x00428edf);
    /* 00428edf: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428ee2: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 00428ee8: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00428eeb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00428eee: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00428ef1: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428ef5: je 0x428f0a */ if (fZ) goto L_00428f0a;
L_00428ef7:; BB(0x00428ef7);
    /* 00428ef7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428ef9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00428efc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00428efe: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00428f01: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428f03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428f05u); call_ind(t); }
    /* 00428f05: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00428f08: jmp 0x428f11 */ goto L_00428f11;
L_00428f0a:; BB(0x00428f0a);
    /* 00428f0a: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00428f11:; BB(0x00428f11);
    /* 00428f11: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428f14: mov edx, dword ptr [ecx + 0x160] */ r_edx = R32((u32)(r_ecx+0x160u));
    /* 00428f1a: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00428f1d: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00428f20: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00428f23: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428f27: je 0x428f3f */ if (fZ) goto L_00428f3f;
L_00428f29:; BB(0x00428f29);
    /* 00428f29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428f2b: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428f2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00428f30: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00428f33: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428f35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428f37u); call_ind(t); }
    /* 00428f37: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00428f3d: jmp 0x428f49 */ goto L_00428f49;
L_00428f3f:; BB(0x00428f3f);
    /* 00428f3f: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00428f49:; BB(0x00428f49);
    /* 00428f49: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428f4c: mov edx, dword ptr [ecx + 0x164] */ r_edx = R32((u32)(r_ecx+0x164u));
    /* 00428f52: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00428f55: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00428f58: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00428f5b: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428f5f: je 0x428f77 */ if (fZ) goto L_00428f77;
L_00428f61:; BB(0x00428f61);
    /* 00428f61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428f63: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00428f66: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00428f68: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00428f6b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428f6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428f6fu); call_ind(t); }
    /* 00428f6f: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00428f75: jmp 0x428f81 */ goto L_00428f81;
L_00428f77:; BB(0x00428f77);
    /* 00428f77: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00428f81:; BB(0x00428f81);
    /* 00428f81: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428f84: mov edx, dword ptr [ecx + 0x168] */ r_edx = R32((u32)(r_ecx+0x168u));
    /* 00428f8a: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00428f8d: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00428f90: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00428f93: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00428f97: je 0x428faf */ if (fZ) goto L_00428faf;
L_00428f99:; BB(0x00428f99);
    /* 00428f99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00428f9b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00428f9e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00428fa0: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00428fa3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00428fa5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x428fa7u); call_ind(t); }
    /* 00428fa7: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00428fad: jmp 0x428fb9 */ goto L_00428fb9;
L_00428faf:; BB(0x00428faf);
    /* 00428faf: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_00428fb9:; BB(0x00428fb9);
    /* 00428fb9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00428fc0: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00428fc3: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x428fc8u); f_005e9e40();
    /* 00428fc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00428fcb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00428fd2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00428fd3: mov esp, ebp */ r_esp = r_ebp;
    /* 00428fd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00428fd6: ret  */ FN_RET(0x00428d20); r_esp += 4; return;
}

void f_0042c4b0(void) /* crapsdisplay::func_0042c4b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c4b0);
    /* 0042c4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c4b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042c4b5: push 0x69e58e */ { u32 v = 0x69e58eu; r_esp -= 4; W32(r_esp, v); }
    /* 0042c4ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042c4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c4c1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042c4c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042c4c5: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042c4ca: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042c4cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c4cd: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042c4d0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042c4d6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0042c4d9: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042c4de: mov ecx, dword ptr [eax + 0xad8] */ r_ecx = R32((u32)(r_eax+0xad8u));
    /* 0042c4e4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042c4e7: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c4eb: jne 0x42c504 */ if (!fZ) goto L_0042c504;
L_0042c4ed:; BB(0x0042c4ed);
    /* 0042c4ed: push 0x454 */ { u32 v = 0x454u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c4f2: push 0x6b6c70 */ { u32 v = 0x6b6c70u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c4f7: push 0x6b6c68 */ { u32 v = 0x6b6c68u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c4fc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x42c501u); f_005e9f20();
    /* 0042c501: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042c504:; BB(0x0042c504);
    /* 0042c504: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c507: cmp dword ptr [eax + 0xae8], 0 */ {  u32 a = R32((u32)(r_eax+0xae8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c50e: je 0x42c5e0 */ if (fZ) goto L_0042c5e0;
L_0042c514:; BB(0x0042c514);
    /* 0042c514: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c516: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c519: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c51a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c51d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c51f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c522: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0042c528: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c52au); call_ind(t); }
    /* 0042c52a: mov esi, eax */ r_esi = r_eax;
    /* 0042c52c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c52f: mov ecx, dword ptr [eax + 0xae8] */ r_ecx = R32((u32)(r_eax+0xae8u));
    /* 0042c535: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x42c53au); f_005f5590();
    /* 0042c53a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042c53b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042c53d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0042c53f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0042c541: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042c542: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c544: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c547: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c548: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c54b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c54d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c550: mov edx, dword ptr [eax + 0xd4] */ r_edx = R32((u32)(r_eax+0xd4u));
    /* 0042c556: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c558u); call_ind(t); }
    /* 0042c558: mov esi, eax */ r_esi = r_eax;
    /* 0042c55a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c55d: mov ecx, dword ptr [eax + 0xae8] */ r_ecx = R32((u32)(r_eax+0xae8u));
    /* 0042c563: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x42c568u); f_005f5550();
    /* 0042c568: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0042c569: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0042c56b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0042c56d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0042c56f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042c570: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c573: mov edx, dword ptr [ecx + 0xae8] */ r_edx = R32((u32)(r_ecx+0xae8u));
    /* 0042c579: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c57c: mov ecx, dword ptr [eax + 0xae8] */ r_ecx = R32((u32)(r_eax+0xae8u));
    /* 0042c582: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042c584: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0042c587: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c589u); call_ind(t); }
    /* 0042c589: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c58b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42c590u); f_00686d82();
    /* 0042c590: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042c593: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042c596: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042c59d: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c5a1: je 0x42c5ba */ if (fZ) goto L_0042c5ba;
L_0042c5a3:; BB(0x0042c5a3);
    /* 0042c5a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c5a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c5a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c5a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c5ab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c5ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042c5b0: call 0x601110 */ r_esp -= 4; W32(r_esp, 0x42c5b5u); f_00601110();
    /* 0042c5b5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0042c5b8: jmp 0x42c5c1 */ goto L_0042c5c1;
L_0042c5ba:; BB(0x0042c5ba);
    /* 0042c5ba: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0042c5c1:; BB(0x0042c5c1);
    /* 0042c5c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042c5c4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042c5c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042c5ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c5d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c5d2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c5d5: mov ecx, dword ptr [eax + 0xae8] */ r_ecx = R32((u32)(r_eax+0xae8u));
    /* 0042c5db: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x42c5e0u); f_005f5d50();
L_0042c5e0:; BB(0x0042c5e0);
    /* 0042c5e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c5e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042c5ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042c5eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c5ec: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c5ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c5ef: ret  */ FN_RET(0x0042c4b0); r_esp += 4; return;
}

void f_0042c5f0(void) /* crapsdisplay::func_0042c5f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042c5f0);
    /* 0042c5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042c5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042c5f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042c5f5: push 0x69e5b4 */ { u32 v = 0x69e5b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c5fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0042c600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c601: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042c604: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042c605: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0042c60a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042c60c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c60d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0042c610: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0042c616: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0042c619: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c61b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c61e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c61f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c622: call 0x5ccdf0 */ r_esp -= 4; W32(r_esp, 0x42c627u); f_005ccdf0();
    /* 0042c627: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0042c62a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0042c631: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042c634: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0042c637: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042c63a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042c63d: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0042c640: cmp dword ptr [ebp - 0x2c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042c644: ja 0x42c670 */ if ((!fC&&!fZ)) goto L_0042c670;
L_0042c646:; BB(0x0042c646);
    /* 0042c646: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042c649: jmp dword ptr [eax*4 + 0x42c88c] */ { u32 t = R32((u32)(r_eax*4+0x42c88cu)); switch (t) { case 0x42c66bu: goto L_0042c66b; case 0x42c659u: goto L_0042c659; case 0x42c650u: goto L_0042c650; case 0x42c670u: goto L_0042c670; case 0x42c662u: goto L_0042c662; default: UNSUP(0x0042c649, "jump table entry is not a known target"); } }
L_0042c650:; BB(0x0042c650);
    /* 0042c650: mov dword ptr [ebp - 0x10], 0xfc8 */ W32((u32)(r_ebp+0xfffffff0u), 0xfc8u);
    /* 0042c657: jmp 0x42c68b */ goto L_0042c68b;
L_0042c659:; BB(0x0042c659);
    /* 0042c659: mov dword ptr [ebp - 0x10], 0xfca */ W32((u32)(r_ebp+0xfffffff0u), 0xfcau);
    /* 0042c660: jmp 0x42c68b */ goto L_0042c68b;
L_0042c662:; BB(0x0042c662);
    /* 0042c662: mov dword ptr [ebp - 0x10], 0xfc9 */ W32((u32)(r_ebp+0xfffffff0u), 0xfc9u);
    /* 0042c669: jmp 0x42c68b */ goto L_0042c68b;
L_0042c66b:; BB(0x0042c66b);
    /* 0042c66b: jmp 0x42c878 */ goto L_0042c878;
L_0042c670:; BB(0x0042c670);
    /* 0042c670: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0042c672: jne 0x42c68b */ if (!fZ) goto L_0042c68b;
L_0042c674:; BB(0x0042c674);
    /* 0042c674: push 0x468 */ { u32 v = 0x468u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c679: push 0x6b6c70 */ { u32 v = 0x6b6c70u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c67e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c683: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x42c688u); f_005e9f20();
    /* 0042c688: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042c68b:; BB(0x0042c68b);
    /* 0042c68b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c68e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c691: cmp dword ptr [ecx + eax*4 + 0xafc], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0xafcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c699: jne 0x42c6e9 */ if (!fZ) goto L_0042c6e9;
L_0042c69b:; BB(0x0042c69b);
    /* 0042c69b: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c6a0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x42c6a5u); f_00686d82();
    /* 0042c6a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042c6a8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0042c6ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0042c6b2: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c6b6: je 0x42c6c5 */ if (fZ) goto L_0042c6c5;
L_0042c6b8:; BB(0x0042c6b8);
    /* 0042c6b8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042c6bb: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x42c6c0u); f_005eaaf0();
    /* 0042c6c0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0042c6c3: jmp 0x42c6cc */ goto L_0042c6cc;
L_0042c6c5:; BB(0x0042c6c5);
    /* 0042c6c5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0042c6cc:; BB(0x0042c6cc);
    /* 0042c6cc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042c6cf: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0042c6d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042c6d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c6dc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c6df: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042c6e2: mov dword ptr [ecx + eax*4 + 0xafc], edx */ W32((u32)(r_ecx+r_eax*4+0xafcu), r_edx);
L_0042c6e9:; BB(0x0042c6e9);
    /* 0042c6e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c6ec: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c6ef: mov edx, dword ptr [ecx + eax*4 + 0xafc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xafcu));
    /* 0042c6f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c6f9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c6fc: mov ecx, dword ptr [ecx + eax*4 + 0xafc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xafcu));
    /* 0042c703: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042c705: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0042c708: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c70au); call_ind(t); }
    /* 0042c70a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042c70d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c70e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042c711: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c714: mov ecx, dword ptr [eax + edx*4 + 0xafc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xafcu));
    /* 0042c71b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x42c720u); f_005eaf00();
    /* 0042c720: cmp dword ptr [ebp - 0x18], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042c724: jne 0x42c73d */ if (!fZ) goto L_0042c73d;
L_0042c726:; BB(0x0042c726);
    /* 0042c726: push 0x471 */ { u32 v = 0x471u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c72b: push 0x6b6c70 */ { u32 v = 0x6b6c70u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c730: push 0x6b6c8c */ { u32 v = 0x6b6c8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042c735: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x42c73au); f_005e9f20();
    /* 0042c73a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042c73d:; BB(0x0042c73d);
    /* 0042c73d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042c740: imul edx, edx, 0x1e0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1e0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042c746: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c749: lea ecx, [eax + edx + 0x17c] */ r_ecx = (u32)(r_eax+r_edx+0x17cu);
    /* 0042c750: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042c753: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0042c756: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c759: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042c75f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c762: lea ecx, [edx + ecx + 0x17c] */ r_ecx = (u32)(r_edx+r_ecx+0x17cu);
    /* 0042c769: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042c76c: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0042c76f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042c771: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0042c774: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c776u); call_ind(t); }
    /* 0042c776: mov esi, eax */ r_esi = r_eax;
    /* 0042c778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c77a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c77d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c77e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c781: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042c783: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c786: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0042c78c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c78eu); call_ind(t); }
    /* 0042c78e: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042c790: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0042c793: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c796: imul ecx, ecx, 0x1e0 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1e0u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042c79c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c79f: lea eax, [edx + ecx + 0x17c] */ r_eax = (u32)(r_edx+r_ecx+0x17cu);
    /* 0042c7a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042c7a9: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0042c7ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c7af: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042c7b5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c7b8: lea eax, [ecx + eax + 0x17c] */ r_eax = (u32)(r_ecx+r_eax+0x17cu);
    /* 0042c7bf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042c7c2: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0042c7c5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042c7c7: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0042c7ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c7ccu); call_ind(t); }
    /* 0042c7cc: mov esi, eax */ r_esi = r_eax;
    /* 0042c7ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042c7d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c7d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c7d4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c7d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042c7d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c7dc: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0042c7e2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c7e4u); call_ind(t); }
    /* 0042c7e4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0042c7e6: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0042c7e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c7ec: imul eax, eax, 0x1e0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1e0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0042c7f2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c7f5: lea edx, [ecx + eax + 0x17c] */ r_edx = (u32)(r_ecx+r_eax+0x17cu);
    /* 0042c7fc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042c7ff: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0042c802: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x42c807u); f_005f53c0();
    /* 0042c807: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042c80a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c80b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c80e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c811: mov eax, dword ptr [edx + ecx*4 + 0xafc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xafcu));
    /* 0042c818: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042c81b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c81e: mov ecx, dword ptr [edx + ecx*4 + 0xafc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xafcu));
    /* 0042c825: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0042c827: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0042c82a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c82cu); call_ind(t); }
    /* 0042c82c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0042c82f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042c830: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042c833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042c834: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042c837: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c83a: mov ecx, dword ptr [eax + edx*4 + 0xafc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xafcu));
    /* 0042c841: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042c844: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c847: mov edx, dword ptr [eax + edx*4 + 0xafc] */ r_edx = R32((u32)(r_eax+r_edx*4+0xafcu));
    /* 0042c84e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042c850: mov ecx, edx */ r_ecx = r_edx;
    /* 0042c852: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0042c855: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42c857u); call_ind(t); }
    /* 0042c857: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c85a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c85d: mov edx, dword ptr [ecx + eax*4 + 0xafc] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xafcu));
    /* 0042c864: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042c867: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042c86a: mov ecx, dword ptr [ecx + eax*4 + 0xafc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xafcu));
    /* 0042c871: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0042c873: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0042c876: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42c878u); call_ind(t); }
L_0042c878:; BB(0x0042c878);
    /* 0042c878: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042c87b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042c882: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042c883: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042c884: mov esp, ebp */ r_esp = r_ebp;
    /* 0042c886: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042c887: ret 8 */ FN_RET(0x0042c5f0); r_esp += 12; return;
}

void f_0042e4d0(void) /* crapsdisplay::func_0042e4d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042e4d0);
    /* 0042e4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042e4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042e4d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042e4d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042e4d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e4db: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042e4de: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042e4e4: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0042e4eb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0042e4ee: mov eax, 1 */ r_eax = 0x1u;
    /* 0042e4f3: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042e4f6: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042e4fc: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0042e503: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0042e506: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042e509: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042e50c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042e50f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042e512: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042e515: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042e518: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042e51c: ja 0x42e7ff */ if ((!fC&&!fZ)) goto L_0042e7ff;
L_0042e522:; BB(0x0042e522);
    /* 0042e522: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042e525: jmp dword ptr [edx*4 + 0x42e84c] */ { u32 t = R32((u32)(r_edx*4+0x42e84cu)); switch (t) { case 0x42e52cu: goto L_0042e52c; case 0x42e56eu: goto L_0042e56e; case 0x42e5b0u: goto L_0042e5b0; case 0x42e5f2u: goto L_0042e5f2; case 0x42e634u: goto L_0042e634; case 0x42e676u: goto L_0042e676; case 0x42e6b8u: goto L_0042e6b8; case 0x42e6fau: goto L_0042e6fa; case 0x42e73cu: goto L_0042e73c; case 0x42e77eu: goto L_0042e77e; case 0x42e7c0u: goto L_0042e7c0; default: UNSUP(0x0042e525, "jump table entry is not a known target"); } }
L_0042e52c:; BB(0x0042e52c);
    /* 0042e52c: push 0x6b7114 */ { u32 v = 0x6b7114u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e531: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e536u); f_0062fde0();
    /* 0042e536: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e539: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e53d: je 0x42e556 */ if (fZ) goto L_0042e556;
L_0042e53f:; BB(0x0042e53f);
    /* 0042e53f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042e542: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e545: je 0x42e556 */ if (fZ) goto L_0042e556;
L_0042e547:; BB(0x0042e547);
    /* 0042e547: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e549: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e54c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042e54e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e551: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e554: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e556u); call_ind(t); }
L_0042e556:; BB(0x0042e556);
    /* 0042e556: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e558: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e55b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e55c: push 0xd07f */ { u32 v = 0xd07fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e561: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e564: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e569u); f_005cd800();
    /* 0042e569: jmp 0x42e846 */ goto L_0042e846;
L_0042e56e:; BB(0x0042e56e);
    /* 0042e56e: push 0x6b70f0 */ { u32 v = 0x6b70f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e573: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e578u); f_0062fde0();
    /* 0042e578: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e57b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e57f: je 0x42e598 */ if (fZ) goto L_0042e598;
L_0042e581:; BB(0x0042e581);
    /* 0042e581: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e584: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e587: je 0x42e598 */ if (fZ) goto L_0042e598;
L_0042e589:; BB(0x0042e589);
    /* 0042e589: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e58b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e58e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e590: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e593: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e596: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e598u); call_ind(t); }
L_0042e598:; BB(0x0042e598);
    /* 0042e598: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e59a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e59d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e59e: push 0xd0b1 */ { u32 v = 0xd0b1u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e5a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e5a6: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e5abu); f_005cd800();
    /* 0042e5ab: jmp 0x42e846 */ goto L_0042e846;
L_0042e5b0:; BB(0x0042e5b0);
    /* 0042e5b0: push 0x6b70cc */ { u32 v = 0x6b70ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e5b5: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e5bau); f_0062fde0();
    /* 0042e5ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e5bd: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e5c1: je 0x42e5da */ if (fZ) goto L_0042e5da;
L_0042e5c3:; BB(0x0042e5c3);
    /* 0042e5c3: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e5c6: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e5c9: je 0x42e5da */ if (fZ) goto L_0042e5da;
L_0042e5cb:; BB(0x0042e5cb);
    /* 0042e5cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e5cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e5d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e5d2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e5d5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e5d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e5dau); call_ind(t); }
L_0042e5da:; BB(0x0042e5da);
    /* 0042e5da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e5dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e5df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e5e0: push 0xd12e */ { u32 v = 0xd12eu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e5e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e5e8: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e5edu); f_005cd800();
    /* 0042e5ed: jmp 0x42e846 */ goto L_0042e846;
L_0042e5f2:; BB(0x0042e5f2);
    /* 0042e5f2: push 0x6b70a8 */ { u32 v = 0x6b70a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e5f7: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e5fcu); f_0062fde0();
    /* 0042e5fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e5ff: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e603: je 0x42e61c */ if (fZ) goto L_0042e61c;
L_0042e605:; BB(0x0042e605);
    /* 0042e605: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e608: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e60b: je 0x42e61c */ if (fZ) goto L_0042e61c;
L_0042e60d:; BB(0x0042e60d);
    /* 0042e60d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e60f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e612: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e614: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e617: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e61a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e61cu); call_ind(t); }
L_0042e61c:; BB(0x0042e61c);
    /* 0042e61c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e61e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e621: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e622: push 0xd192 */ { u32 v = 0xd192u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e627: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e62a: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e62fu); f_005cd800();
    /* 0042e62f: jmp 0x42e846 */ goto L_0042e846;
L_0042e634:; BB(0x0042e634);
    /* 0042e634: push 0x6b7084 */ { u32 v = 0x6b7084u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e639: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e63eu); f_0062fde0();
    /* 0042e63e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e641: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e645: je 0x42e65e */ if (fZ) goto L_0042e65e;
L_0042e647:; BB(0x0042e647);
    /* 0042e647: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e64a: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e64d: je 0x42e65e */ if (fZ) goto L_0042e65e;
L_0042e64f:; BB(0x0042e64f);
    /* 0042e64f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e651: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e654: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e656: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e659: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e65c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e65eu); call_ind(t); }
L_0042e65e:; BB(0x0042e65e);
    /* 0042e65e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e660: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e664: push 0xd1dd */ { u32 v = 0xd1ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e669: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e66c: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e671u); f_005cd800();
    /* 0042e671: jmp 0x42e846 */ goto L_0042e846;
L_0042e676:; BB(0x0042e676);
    /* 0042e676: push 0x6b7060 */ { u32 v = 0x6b7060u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e67b: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e680u); f_0062fde0();
    /* 0042e680: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e683: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e687: je 0x42e6a0 */ if (fZ) goto L_0042e6a0;
L_0042e689:; BB(0x0042e689);
    /* 0042e689: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e68c: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e68f: je 0x42e6a0 */ if (fZ) goto L_0042e6a0;
L_0042e691:; BB(0x0042e691);
    /* 0042e691: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e693: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e696: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e698: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e69b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e69e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e6a0u); call_ind(t); }
L_0042e6a0:; BB(0x0042e6a0);
    /* 0042e6a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e6a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6a6: push 0xcfb7 */ { u32 v = 0xcfb7u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e6ae: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e6b3u); f_005cd800();
    /* 0042e6b3: jmp 0x42e846 */ goto L_0042e846;
L_0042e6b8:; BB(0x0042e6b8);
    /* 0042e6b8: push 0x6b703c */ { u32 v = 0x6b703cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6bd: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e6c2u); f_0062fde0();
    /* 0042e6c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e6c5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e6c9: je 0x42e6e2 */ if (fZ) goto L_0042e6e2;
L_0042e6cb:; BB(0x0042e6cb);
    /* 0042e6cb: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e6ce: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e6d1: je 0x42e6e2 */ if (fZ) goto L_0042e6e2;
L_0042e6d3:; BB(0x0042e6d3);
    /* 0042e6d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6d5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e6d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e6da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e6dd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e6e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e6e2u); call_ind(t); }
L_0042e6e2:; BB(0x0042e6e2);
    /* 0042e6e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e6e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6e8: push 0xd241 */ { u32 v = 0xd241u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e6f0: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e6f5u); f_005cd800();
    /* 0042e6f5: jmp 0x42e846 */ goto L_0042e846;
L_0042e6fa:; BB(0x0042e6fa);
    /* 0042e6fa: push 0x6b7018 */ { u32 v = 0x6b7018u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e6ff: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e704u); f_0062fde0();
    /* 0042e704: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e707: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e70b: je 0x42e724 */ if (fZ) goto L_0042e724;
L_0042e70d:; BB(0x0042e70d);
    /* 0042e70d: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e710: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e713: je 0x42e724 */ if (fZ) goto L_0042e724;
L_0042e715:; BB(0x0042e715);
    /* 0042e715: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e717: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e71a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e71c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e71f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e722: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e724u); call_ind(t); }
L_0042e724:; BB(0x0042e724);
    /* 0042e724: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e726: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e729: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e72a: push 0xd2a5 */ { u32 v = 0xd2a5u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e72f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e732: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e737u); f_005cd800();
    /* 0042e737: jmp 0x42e846 */ goto L_0042e846;
L_0042e73c:; BB(0x0042e73c);
    /* 0042e73c: push 0x6b6ff4 */ { u32 v = 0x6b6ff4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e741: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e746u); f_0062fde0();
    /* 0042e746: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e749: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e74d: je 0x42e766 */ if (fZ) goto L_0042e766;
L_0042e74f:; BB(0x0042e74f);
    /* 0042e74f: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e752: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e755: je 0x42e766 */ if (fZ) goto L_0042e766;
L_0042e757:; BB(0x0042e757);
    /* 0042e757: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e759: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e75c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e75e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e761: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e764: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e766u); call_ind(t); }
L_0042e766:; BB(0x0042e766);
    /* 0042e766: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e768: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e76b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e76c: push 0xd2f0 */ { u32 v = 0xd2f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e771: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e774: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e779u); f_005cd800();
    /* 0042e779: jmp 0x42e846 */ goto L_0042e846;
L_0042e77e:; BB(0x0042e77e);
    /* 0042e77e: push 0x6b6fcc */ { u32 v = 0x6b6fccu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e783: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e788u); f_0062fde0();
    /* 0042e788: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e78b: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e78f: je 0x42e7a8 */ if (fZ) goto L_0042e7a8;
L_0042e791:; BB(0x0042e791);
    /* 0042e791: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e794: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e797: je 0x42e7a8 */ if (fZ) goto L_0042e7a8;
L_0042e799:; BB(0x0042e799);
    /* 0042e799: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e79b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e79e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e7a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e7a3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e7a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e7a8u); call_ind(t); }
L_0042e7a8:; BB(0x0042e7a8);
    /* 0042e7a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e7aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e7ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e7ae: push 0xcfd0 */ { u32 v = 0xcfd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e7b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e7b6: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e7bbu); f_005cd800();
    /* 0042e7bb: jmp 0x42e846 */ goto L_0042e846;
L_0042e7c0:; BB(0x0042e7c0);
    /* 0042e7c0: push 0x6b6fa8 */ { u32 v = 0x6b6fa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e7c5: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e7cau); f_0062fde0();
    /* 0042e7ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e7cd: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e7d1: je 0x42e7ea */ if (fZ) goto L_0042e7ea;
L_0042e7d3:; BB(0x0042e7d3);
    /* 0042e7d3: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e7d6: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e7d9: je 0x42e7ea */ if (fZ) goto L_0042e7ea;
L_0042e7db:; BB(0x0042e7db);
    /* 0042e7db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e7dd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e7e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e7e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e7e5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e7e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e7eau); call_ind(t); }
L_0042e7ea:; BB(0x0042e7ea);
    /* 0042e7ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e7ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e7ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e7f0: push 0xd0e3 */ { u32 v = 0xd0e3u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e7f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e7f8: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e7fdu); f_005cd800();
    /* 0042e7fd: jmp 0x42e846 */ goto L_0042e846;
L_0042e7ff:; BB(0x0042e7ff);
    /* 0042e7ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0042e801: jne 0x42e81a */ if (!fZ) goto L_0042e81a;
L_0042e803:; BB(0x0042e803);
    /* 0042e803: push 0x6bd */ { u32 v = 0x6bdu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e808: push 0x6b6c70 */ { u32 v = 0x6b6c70u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e80d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e812: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x42e817u); f_005e9f20();
    /* 0042e817: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042e81a:; BB(0x0042e81a);
    /* 0042e81a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e81e: je 0x42e846 */ if (fZ) goto L_0042e846;
L_0042e820:; BB(0x0042e820);
    /* 0042e820: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e824: je 0x42e837 */ if (fZ) goto L_0042e837;
L_0042e826:; BB(0x0042e826);
    /* 0042e826: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042e829: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e82a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042e82d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042e82f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e832: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0042e835: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42e837u); call_ind(t); }
L_0042e837:; BB(0x0042e837);
    /* 0042e837: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e839: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e83c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e83e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e841: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042e844: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e846u); call_ind(t); }
L_0042e846:; BB(0x0042e846);
    /* 0042e846: mov esp, ebp */ r_esp = r_ebp;
    /* 0042e848: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042e849: ret 8 */ FN_RET(0x0042e4d0); r_esp += 12; return;
}

void f_0042e880(void) /* crapsdisplay::func_0042e880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042e880);
    /* 0042e880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042e881: mov ebp, esp */ r_ebp = r_esp;
    /* 0042e883: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042e886: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0042e889: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042e88b: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042e88e: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042e894: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0042e89b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0042e89e: mov eax, 1 */ r_eax = 0x1u;
    /* 0042e8a3: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0042e8a6: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042e8ac: mov edx, dword ptr [ecx + eax + 0xacc] */ r_edx = R32((u32)(r_ecx+r_eax+0xaccu));
    /* 0042e8b3: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0042e8b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0042e8b9: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042e8bc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0042e8bf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042e8c2: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042e8c5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0042e8c8: cmp dword ptr [ebp - 0x30], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042e8cc: ja 0x42ee69 */ if ((!fC&&!fZ)) goto L_0042ee69;
L_0042e8d2:; BB(0x0042e8d2);
    /* 0042e8d2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0042e8d5: jmp dword ptr [edx*4 + 0x42eeb8] */ { u32 t = R32((u32)(r_edx*4+0x42eeb8u)); switch (t) { case 0x42e8dcu: goto L_0042e8dc; case 0x42e971u: goto L_0042e971; case 0x42ea06u: goto L_0042ea06; case 0x42eac4u: goto L_0042eac4; case 0x42eb06u: goto L_0042eb06; case 0x42ebc4u: goto L_0042ebc4; case 0x42ec06u: goto L_0042ec06; case 0x42ecc4u: goto L_0042ecc4; case 0x42ed06u: goto L_0042ed06; case 0x42edc4u: goto L_0042edc4; case 0x42ee06u: goto L_0042ee06; default: UNSUP(0x0042e8d5, "jump table entry is not a known target"); } }
L_0042e8dc:; BB(0x0042e8dc);
    /* 0042e8dc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e8de: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042e8e4: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x42e8e9u); f_00436a00();
    /* 0042e8e9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0042e8ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e8ee: je 0x42e92f */ if (fZ) goto L_0042e92f;
L_0042e8f0:; BB(0x0042e8f0);
    /* 0042e8f0: push 0x6b7304 */ { u32 v = 0x6b7304u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e8f5: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e8fau); f_0062fde0();
    /* 0042e8fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e8fd: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e901: je 0x42e91a */ if (fZ) goto L_0042e91a;
L_0042e903:; BB(0x0042e903);
    /* 0042e903: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0042e906: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e909: je 0x42e91a */ if (fZ) goto L_0042e91a;
L_0042e90b:; BB(0x0042e90b);
    /* 0042e90b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e90d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042e910: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042e912: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e915: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0042e918: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42e91au); call_ind(t); }
L_0042e91a:; BB(0x0042e91a);
    /* 0042e91a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e91c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e91f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e920: push 0xd0fc */ { u32 v = 0xd0fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e925: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042e928: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e92du); f_005cd800();
    /* 0042e92d: jmp 0x42e96c */ goto L_0042e96c;
L_0042e92f:; BB(0x0042e92f);
    /* 0042e92f: push 0x6b72e4 */ { u32 v = 0x6b72e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e934: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e939u); f_0062fde0();
    /* 0042e939: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e93c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e940: je 0x42e959 */ if (fZ) goto L_0042e959;
L_0042e942:; BB(0x0042e942);
    /* 0042e942: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0042e945: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e948: je 0x42e959 */ if (fZ) goto L_0042e959;
L_0042e94a:; BB(0x0042e94a);
    /* 0042e94a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e94c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042e94f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042e951: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e954: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0042e957: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42e959u); call_ind(t); }
L_0042e959:; BB(0x0042e959);
    /* 0042e959: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e95b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e95e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e95f: push 0xd066 */ { u32 v = 0xd066u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e964: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042e967: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e96cu); f_005cd800();
L_0042e96c:; BB(0x0042e96c);
    /* 0042e96c: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042e971:; BB(0x0042e971);
    /* 0042e971: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e973: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042e979: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x42e97eu); f_00436a00();
    /* 0042e97e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042e981: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e983: je 0x42e9c4 */ if (fZ) goto L_0042e9c4;
L_0042e985:; BB(0x0042e985);
    /* 0042e985: push 0x6b7304 */ { u32 v = 0x6b7304u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e98a: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e98fu); f_0062fde0();
    /* 0042e98f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e992: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e996: je 0x42e9af */ if (fZ) goto L_0042e9af;
L_0042e998:; BB(0x0042e998);
    /* 0042e998: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e99b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e99e: je 0x42e9af */ if (fZ) goto L_0042e9af;
L_0042e9a0:; BB(0x0042e9a0);
    /* 0042e9a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e9a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e9a7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e9aa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e9ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e9afu); call_ind(t); }
L_0042e9af:; BB(0x0042e9af);
    /* 0042e9af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e9b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9b5: push 0xd0fc */ { u32 v = 0xd0fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9ba: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042e9bd: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e9c2u); f_005cd800();
    /* 0042e9c2: jmp 0x42ea01 */ goto L_0042ea01;
L_0042e9c4:; BB(0x0042e9c4);
    /* 0042e9c4: push 0x6b72c0 */ { u32 v = 0x6b72c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9c9: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e9ceu); f_0062fde0();
    /* 0042e9ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e9d1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e9d5: je 0x42e9ee */ if (fZ) goto L_0042e9ee;
L_0042e9d7:; BB(0x0042e9d7);
    /* 0042e9d7: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e9da: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e9dd: je 0x42e9ee */ if (fZ) goto L_0042e9ee;
L_0042e9df:; BB(0x0042e9df);
    /* 0042e9df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e9e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e9e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e9e9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e9ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e9eeu); call_ind(t); }
L_0042e9ee:; BB(0x0042e9ee);
    /* 0042e9ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9f0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e9f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9f4: push 0xd098 */ { u32 v = 0xd098u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e9f9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042e9fc: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ea01u); f_005cd800();
L_0042ea01:; BB(0x0042ea01);
    /* 0042ea01: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042ea06:; BB(0x0042ea06);
    /* 0042ea06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042ea08: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042ea0b: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042ea10: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042ea17: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042ea1a: mov edx, 1 */ r_edx = 0x1u;
    /* 0042ea1f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042ea22: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042ea27: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042ea2e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042ea31: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042ea34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042ea36: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea39: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042ea3c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042ea3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea41: je 0x42ea82 */ if (fZ) goto L_0042ea82;
L_0042ea43:; BB(0x0042ea43);
    /* 0042ea43: push 0x6b72a0 */ { u32 v = 0x6b72a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ea48: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42ea4du); f_0062fde0();
    /* 0042ea4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ea50: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea54: je 0x42ea6d */ if (fZ) goto L_0042ea6d;
L_0042ea56:; BB(0x0042ea56);
    /* 0042ea56: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042ea59: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea5c: je 0x42ea6d */ if (fZ) goto L_0042ea6d;
L_0042ea5e:; BB(0x0042ea5e);
    /* 0042ea5e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ea60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ea63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042ea65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ea68: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ea6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ea6du); call_ind(t); }
L_0042ea6d:; BB(0x0042ea6d);
    /* 0042ea6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ea6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ea72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ea73: push 0xd160 */ { u32 v = 0xd160u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ea78: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ea7b: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ea80u); f_005cd800();
    /* 0042ea80: jmp 0x42eabf */ goto L_0042eabf;
L_0042ea82:; BB(0x0042ea82);
    /* 0042ea82: push 0x6b7280 */ { u32 v = 0x6b7280u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ea87: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42ea8cu); f_0062fde0();
    /* 0042ea8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ea8f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea93: je 0x42eaac */ if (fZ) goto L_0042eaac;
L_0042ea95:; BB(0x0042ea95);
    /* 0042ea95: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042ea98: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ea9b: je 0x42eaac */ if (fZ) goto L_0042eaac;
L_0042ea9d:; BB(0x0042ea9d);
    /* 0042ea9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ea9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042eaa2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042eaa4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eaa7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042eaaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42eaacu); call_ind(t); }
L_0042eaac:; BB(0x0042eaac);
    /* 0042eaac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eaae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eab1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042eab2: push 0xd115 */ { u32 v = 0xd115u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eab7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042eaba: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42eabfu); f_005cd800();
L_0042eabf:; BB(0x0042eabf);
    /* 0042eabf: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042eac4:; BB(0x0042eac4);
    /* 0042eac4: push 0x6b7260 */ { u32 v = 0x6b7260u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eac9: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42eaceu); f_0062fde0();
    /* 0042eace: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ead1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ead5: je 0x42eaee */ if (fZ) goto L_0042eaee;
L_0042ead7:; BB(0x0042ead7);
    /* 0042ead7: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042eada: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eadd: je 0x42eaee */ if (fZ) goto L_0042eaee;
L_0042eadf:; BB(0x0042eadf);
    /* 0042eadf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042eae1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042eae4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042eae6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eae9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042eaec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42eaeeu); call_ind(t); }
L_0042eaee:; BB(0x0042eaee);
    /* 0042eaee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eaf0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eaf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042eaf4: push 0xd179 */ { u32 v = 0xd179u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eaf9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042eafc: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42eb01u); f_005cd800();
    /* 0042eb01: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042eb06:; BB(0x0042eb06);
    /* 0042eb06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042eb08: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042eb0b: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042eb10: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042eb17: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0042eb1a: mov edx, 1 */ r_edx = 0x1u;
    /* 0042eb1f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042eb22: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042eb27: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042eb2e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0042eb31: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042eb34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042eb36: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eb39: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042eb3c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042eb3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eb41: je 0x42eb82 */ if (fZ) goto L_0042eb82;
L_0042eb43:; BB(0x0042eb43);
    /* 0042eb43: push 0x6b7240 */ { u32 v = 0x6b7240u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb48: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42eb4du); f_0062fde0();
    /* 0042eb4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042eb50: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eb54: je 0x42eb6d */ if (fZ) goto L_0042eb6d;
L_0042eb56:; BB(0x0042eb56);
    /* 0042eb56: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042eb59: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eb5c: je 0x42eb6d */ if (fZ) goto L_0042eb6d;
L_0042eb5e:; BB(0x0042eb5e);
    /* 0042eb5e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042eb63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042eb65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eb68: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042eb6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42eb6du); call_ind(t); }
L_0042eb6d:; BB(0x0042eb6d);
    /* 0042eb6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eb72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb73: push 0xd20f */ { u32 v = 0xd20fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb78: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042eb7b: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42eb80u); f_005cd800();
    /* 0042eb80: jmp 0x42ebbf */ goto L_0042ebbf;
L_0042eb82:; BB(0x0042eb82);
    /* 0042eb82: push 0x6b7220 */ { u32 v = 0x6b7220u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb87: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42eb8cu); f_0062fde0();
    /* 0042eb8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042eb8f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eb93: je 0x42ebac */ if (fZ) goto L_0042ebac;
L_0042eb95:; BB(0x0042eb95);
    /* 0042eb95: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042eb98: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eb9b: je 0x42ebac */ if (fZ) goto L_0042ebac;
L_0042eb9d:; BB(0x0042eb9d);
    /* 0042eb9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042eb9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042eba2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042eba4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eba7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ebaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ebacu); call_ind(t); }
L_0042ebac:; BB(0x0042ebac);
    /* 0042ebac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ebb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebb2: push 0xd1c4 */ { u32 v = 0xd1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebb7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ebba: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ebbfu); f_005cd800();
L_0042ebbf:; BB(0x0042ebbf);
    /* 0042ebbf: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042ebc4:; BB(0x0042ebc4);
    /* 0042ebc4: push 0x6b7200 */ { u32 v = 0x6b7200u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebc9: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42ebceu); f_0062fde0();
    /* 0042ebce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ebd1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ebd5: je 0x42ebee */ if (fZ) goto L_0042ebee;
L_0042ebd7:; BB(0x0042ebd7);
    /* 0042ebd7: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042ebda: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ebdd: je 0x42ebee */ if (fZ) goto L_0042ebee;
L_0042ebdf:; BB(0x0042ebdf);
    /* 0042ebdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebe1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ebe4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042ebe6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ebe9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ebec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ebeeu); call_ind(t); }
L_0042ebee:; BB(0x0042ebee);
    /* 0042ebee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebf0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ebf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebf4: push 0xd034 */ { u32 v = 0xd034u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ebf9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ebfc: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ec01u); f_005cd800();
    /* 0042ec01: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042ec06:; BB(0x0042ec06);
    /* 0042ec06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042ec08: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042ec0b: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042ec10: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042ec17: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0042ec1a: mov edx, 1 */ r_edx = 0x1u;
    /* 0042ec1f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042ec22: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042ec27: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042ec2e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042ec31: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042ec34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042ec36: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec39: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042ec3c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042ec3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec41: je 0x42ec82 */ if (fZ) goto L_0042ec82;
L_0042ec43:; BB(0x0042ec43);
    /* 0042ec43: push 0x6b71dc */ { u32 v = 0x6b71dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ec48: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42ec4du); f_0062fde0();
    /* 0042ec4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ec50: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec54: je 0x42ec6d */ if (fZ) goto L_0042ec6d;
L_0042ec56:; BB(0x0042ec56);
    /* 0042ec56: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042ec59: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec5c: je 0x42ec6d */ if (fZ) goto L_0042ec6d;
L_0042ec5e:; BB(0x0042ec5e);
    /* 0042ec5e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ec60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ec63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042ec65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ec68: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ec6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ec6du); call_ind(t); }
L_0042ec6d:; BB(0x0042ec6d);
    /* 0042ec6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ec6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ec72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ec73: push 0xd273 */ { u32 v = 0xd273u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ec78: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ec7b: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ec80u); f_005cd800();
    /* 0042ec80: jmp 0x42ecbf */ goto L_0042ecbf;
L_0042ec82:; BB(0x0042ec82);
    /* 0042ec82: push 0x6b71b8 */ { u32 v = 0x6b71b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ec87: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42ec8cu); f_0062fde0();
    /* 0042ec8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ec8f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec93: je 0x42ecac */ if (fZ) goto L_0042ecac;
L_0042ec95:; BB(0x0042ec95);
    /* 0042ec95: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042ec98: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ec9b: je 0x42ecac */ if (fZ) goto L_0042ecac;
L_0042ec9d:; BB(0x0042ec9d);
    /* 0042ec9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ec9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042eca2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042eca4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eca7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ecaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ecacu); call_ind(t); }
L_0042ecac:; BB(0x0042ecac);
    /* 0042ecac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ecae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ecb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ecb2: push 0xd228 */ { u32 v = 0xd228u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ecb7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ecba: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ecbfu); f_005cd800();
L_0042ecbf:; BB(0x0042ecbf);
    /* 0042ecbf: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042ecc4:; BB(0x0042ecc4);
    /* 0042ecc4: push 0x6b7198 */ { u32 v = 0x6b7198u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ecc9: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42ecceu); f_0062fde0();
    /* 0042ecce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ecd1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ecd5: je 0x42ecee */ if (fZ) goto L_0042ecee;
L_0042ecd7:; BB(0x0042ecd7);
    /* 0042ecd7: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042ecda: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ecdd: je 0x42ecee */ if (fZ) goto L_0042ecee;
L_0042ecdf:; BB(0x0042ecdf);
    /* 0042ecdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ece1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ece4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042ece6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ece9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ecec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42eceeu); call_ind(t); }
L_0042ecee:; BB(0x0042ecee);
    /* 0042ecee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ecf0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ecf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ecf4: push 0xd28c */ { u32 v = 0xd28cu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ecf9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ecfc: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ed01u); f_005cd800();
    /* 0042ed01: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042ed06:; BB(0x0042ed06);
    /* 0042ed06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042ed08: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042ed0b: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042ed10: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042ed17: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0042ed1a: mov edx, 1 */ r_edx = 0x1u;
    /* 0042ed1f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0042ed22: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042ed27: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0042ed2e: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0042ed31: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042ed34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042ed36: cmp edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ed39: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0042ed3c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0042ed3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ed41: je 0x42ed82 */ if (fZ) goto L_0042ed82;
L_0042ed43:; BB(0x0042ed43);
    /* 0042ed43: push 0x6b7178 */ { u32 v = 0x6b7178u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ed48: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42ed4du); f_0062fde0();
    /* 0042ed4d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ed50: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ed54: je 0x42ed6d */ if (fZ) goto L_0042ed6d;
L_0042ed56:; BB(0x0042ed56);
    /* 0042ed56: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042ed59: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ed5c: je 0x42ed6d */ if (fZ) goto L_0042ed6d;
L_0042ed5e:; BB(0x0042ed5e);
    /* 0042ed5e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ed60: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ed63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042ed65: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ed68: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ed6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ed6du); call_ind(t); }
L_0042ed6d:; BB(0x0042ed6d);
    /* 0042ed6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ed6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ed72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ed73: push 0xd322 */ { u32 v = 0xd322u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ed78: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ed7b: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ed80u); f_005cd800();
    /* 0042ed80: jmp 0x42edbf */ goto L_0042edbf;
L_0042ed82:; BB(0x0042ed82);
    /* 0042ed82: push 0x6b7158 */ { u32 v = 0x6b7158u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ed87: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42ed8cu); f_0062fde0();
    /* 0042ed8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ed8f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ed93: je 0x42edac */ if (fZ) goto L_0042edac;
L_0042ed95:; BB(0x0042ed95);
    /* 0042ed95: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042ed98: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ed9b: je 0x42edac */ if (fZ) goto L_0042edac;
L_0042ed9d:; BB(0x0042ed9d);
    /* 0042ed9d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ed9f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042eda2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042eda4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eda7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042edaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42edacu); call_ind(t); }
L_0042edac:; BB(0x0042edac);
    /* 0042edac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042edae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042edb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042edb2: push 0xd2d7 */ { u32 v = 0xd2d7u; r_esp -= 4; W32(r_esp, v); }
    /* 0042edb7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042edba: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42edbfu); f_005cd800();
L_0042edbf:; BB(0x0042edbf);
    /* 0042edbf: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042edc4:; BB(0x0042edc4);
    /* 0042edc4: push 0x6b7134 */ { u32 v = 0x6b7134u; r_esp -= 4; W32(r_esp, v); }
    /* 0042edc9: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42edceu); f_0062fde0();
    /* 0042edce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042edd1: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042edd5: je 0x42edee */ if (fZ) goto L_0042edee;
L_0042edd7:; BB(0x0042edd7);
    /* 0042edd7: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042edda: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042eddd: je 0x42edee */ if (fZ) goto L_0042edee;
L_0042eddf:; BB(0x0042eddf);
    /* 0042eddf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ede1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ede4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042ede6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ede9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042edec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42edeeu); call_ind(t); }
L_0042edee:; BB(0x0042edee);
    /* 0042edee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042edf0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042edf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042edf4: push 0xd33b */ { u32 v = 0xd33bu; r_esp -= 4; W32(r_esp, v); }
    /* 0042edf9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042edfc: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ee01u); f_005cd800();
    /* 0042ee01: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042ee06:; BB(0x0042ee06);
    /* 0042ee06: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee08: mov ecx, dword ptr [0x7906d4] */ r_ecx = R32((u32)(0x7906d4u));
    /* 0042ee0e: call 0x436a00 */ r_esp -= 4; W32(r_esp, 0x42ee13u); f_00436a00();
    /* 0042ee13: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0042ee16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ee18: je 0x42ee59 */ if (fZ) goto L_0042ee59;
L_0042ee1a:; BB(0x0042ee1a);
    /* 0042ee1a: push 0x6b7304 */ { u32 v = 0x6b7304u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee1f: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42ee24u); f_0062fde0();
    /* 0042ee24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042ee27: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ee2b: je 0x42ee44 */ if (fZ) goto L_0042ee44;
L_0042ee2d:; BB(0x0042ee2d);
    /* 0042ee2d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042ee30: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ee33: je 0x42ee44 */ if (fZ) goto L_0042ee44;
L_0042ee35:; BB(0x0042ee35);
    /* 0042ee35: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ee3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042ee3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ee3f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ee42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42ee44u); call_ind(t); }
L_0042ee44:; BB(0x0042ee44);
    /* 0042ee44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee46: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ee49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee4a: push 0xd0fc */ { u32 v = 0xd0fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee4f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ee52: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42ee57u); f_005cd800();
    /* 0042ee57: jmp 0x42ee67 */ goto L_0042ee67;
L_0042ee59:; BB(0x0042ee59);
    /* 0042ee59: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee5b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042ee5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee5f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042ee62: call 0x42f040 */ r_esp -= 4; W32(r_esp, 0x42ee67u); f_0042f040();
L_0042ee67:; BB(0x0042ee67);
    /* 0042ee67: jmp 0x42eeb0 */ goto L_0042eeb0;
L_0042ee69:; BB(0x0042ee69);
    /* 0042ee69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0042ee6b: jne 0x42ee84 */ if (!fZ) goto L_0042ee84;
L_0042ee6d:; BB(0x0042ee6d);
    /* 0042ee6d: push 0x711 */ { u32 v = 0x711u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee72: push 0x6b6c70 */ { u32 v = 0x6b6c70u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee77: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee7c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x42ee81u); f_005e9f20();
    /* 0042ee81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0042ee84:; BB(0x0042ee84);
    /* 0042ee84: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ee88: je 0x42eeb0 */ if (fZ) goto L_0042eeb0;
L_0042ee8a:; BB(0x0042ee8a);
    /* 0042ee8a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ee8e: je 0x42eea1 */ if (fZ) goto L_0042eea1;
L_0042ee90:; BB(0x0042ee90);
    /* 0042ee90: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042ee93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ee94: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042ee97: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042ee99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042ee9c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042ee9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42eea1u); call_ind(t); }
L_0042eea1:; BB(0x0042eea1);
    /* 0042eea1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042eea3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eea6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042eea8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042eeab: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0042eeae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42eeb0u); call_ind(t); }
L_0042eeb0:; BB(0x0042eeb0);
    /* 0042eeb0: mov esp, ebp */ r_esp = r_ebp;
    /* 0042eeb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042eeb3: ret 8 */ FN_RET(0x0042e880); r_esp += 12; return;
}

