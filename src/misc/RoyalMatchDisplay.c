#include "protos.h"

void f_005a6c80(void) /* RoyalMatchDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a6c80);
    /* 005a6c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6c81: mov ebp, esp */ r_ebp = r_esp;
    /* 005a6c83: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a6c86: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005a6c89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6c8c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5a6c91u); f_005e9e20();
    /* 005a6c91: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6c94: mov dword ptr [eax], 0x6cf81c */ W32((u32)(r_eax), 0x6cf81cu);
    /* 005a6c9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a6ca1: jmp 0x5a6cac */ goto L_005a6cac;
L_005a6ca3:; BB(0x005a6ca3);
    /* 005a6ca3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a6ca6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6ca9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005a6cac:; BB(0x005a6cac);
    /* 005a6cac: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6cb0: jge 0x5a6cc2 */ if ((fS==fO)) goto L_005a6cc2;
L_005a6cb2:; BB(0x005a6cb2);
    /* 005a6cb2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a6cb5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6cb8: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 005a6cc0: jmp 0x5a6ca3 */ goto L_005a6ca3;
L_005a6cc2:; BB(0x005a6cc2);
    /* 005a6cc2: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a6cc9: jmp 0x5a6cd4 */ goto L_005a6cd4;
L_005a6ccb:; BB(0x005a6ccb);
    /* 005a6ccb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6cce: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6cd1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005a6cd4:; BB(0x005a6cd4);
    /* 005a6cd4: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6cd8: jge 0x5a6d06 */ if ((fS==fO)) goto L_005a6d06;
L_005a6cda:; BB(0x005a6cda);
    /* 005a6cda: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6cdd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6ce0: mov dword ptr [eax + edx*4 + 0x18], 0 */ W32((u32)(r_eax+r_edx*4+0x18u), 0x0u);
    /* 005a6ce8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6ceb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6cee: mov dword ptr [edx + ecx*4 + 0x48], 0 */ W32((u32)(r_edx+r_ecx*4+0x48u), 0x0u);
    /* 005a6cf6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005a6cf9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6cfc: mov dword ptr [ecx + eax*4 + 0x58], 0 */ W32((u32)(r_ecx+r_eax*4+0x58u), 0x0u);
    /* 005a6d04: jmp 0x5a6ccb */ goto L_005a6ccb;
L_005a6d06:; BB(0x005a6d06);
    /* 005a6d06: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6d09: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 005a6d10: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6d13: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 005a6d1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6d1d: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 005a6d24: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6d27: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
    /* 005a6d2e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6d31: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
    /* 005a6d38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6d3b: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 005a6d42: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6d45: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 005a6d4c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6d4f: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005a6d56: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a6d59: mov esp, ebp */ r_esp = r_ebp;
    /* 005a6d5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a6d5c: ret  */ FN_RET(0x005a6c80); r_esp += 4; return;
}

void f_005a6d60(void) /* RoyalMatchDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a6d60);
    /* 005a6d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d61: mov ebp, esp */ r_ebp = r_esp;
    /* 005a6d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d65: push 0x6a78e8 */ { u32 v = 0x6a78e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a6d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d71: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a6d77: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005a6d7c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a6d7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a6d7f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005a6d82: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005a6d88: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005a6d8b: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6d8e: mov dword ptr [eax], 0x6cf81c */ W32((u32)(r_eax), 0x6cf81cu);
    /* 005a6d94: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a6d9b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005a6da2: jmp 0x5a6dad */ goto L_005a6dad;
L_005a6da4:; BB(0x005a6da4);
    /* 005a6da4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a6da7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6daa: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005a6dad:; BB(0x005a6dad);
    /* 005a6dad: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6db1: jge 0x5a6de8 */ if ((fS==fO)) goto L_005a6de8;
L_005a6db3:; BB(0x005a6db3);
    /* 005a6db3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005a6db6: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6db9: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 005a6dbd: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005a6dc0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a6dc3: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005a6dc6: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6dca: je 0x5a6ddf */ if (fZ) goto L_005a6ddf;
L_005a6dcc:; BB(0x005a6dcc);
    /* 005a6dcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6dce: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a6dd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a6dd3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a6dd6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6dd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6ddau); call_ind(t); }
    /* 005a6dda: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005a6ddd: jmp 0x5a6de6 */ goto L_005a6de6;
L_005a6ddf:; BB(0x005a6ddf);
    /* 005a6ddf: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005a6de6:; BB(0x005a6de6);
    /* 005a6de6: jmp 0x5a6da4 */ goto L_005a6da4;
L_005a6de8:; BB(0x005a6de8);
    /* 005a6de8: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005a6def: jmp 0x5a6dfa */ goto L_005a6dfa;
L_005a6df1:; BB(0x005a6df1);
    /* 005a6df1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a6df4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a6df7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005a6dfa:; BB(0x005a6dfa);
    /* 005a6dfa: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a6dfe: jge 0x5a6eae */ if ((fS==fO)) goto L_005a6eae;
L_005a6e04:; BB(0x005a6e04);
    /* 005a6e04: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a6e07: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6e0a: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005a6e0e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a6e11: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a6e14: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005a6e17: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6e1b: je 0x5a6e30 */ if (fZ) goto L_005a6e30;
L_005a6e1d:; BB(0x005a6e1d);
    /* 005a6e1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6e1f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a6e22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a6e24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a6e27: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6e29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6e2bu); call_ind(t); }
    /* 005a6e2b: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 005a6e2e: jmp 0x5a6e37 */ goto L_005a6e37;
L_005a6e30:; BB(0x005a6e30);
    /* 005a6e30: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_005a6e37:; BB(0x005a6e37);
    /* 005a6e37: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a6e3a: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6e3d: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005a6e41: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a6e44: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005a6e47: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005a6e4a: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6e4e: je 0x5a6e66 */ if (fZ) goto L_005a6e66;
L_005a6e50:; BB(0x005a6e50);
    /* 005a6e50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6e52: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a6e55: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6e57: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a6e5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a6e5c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a6e5eu); call_ind(t); }
    /* 005a6e5e: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005a6e64: jmp 0x5a6e70 */ goto L_005a6e70;
L_005a6e66:; BB(0x005a6e66);
    /* 005a6e66: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_005a6e70:; BB(0x005a6e70);
    /* 005a6e70: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a6e73: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6e76: mov edx, dword ptr [ecx + eax*4 + 0x58] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x58u));
    /* 005a6e7a: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005a6e7d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005a6e80: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005a6e83: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6e87: je 0x5a6e9f */ if (fZ) goto L_005a6e9f;
L_005a6e89:; BB(0x005a6e89);
    /* 005a6e89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6e8b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a6e8e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a6e90: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005a6e93: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6e95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6e97u); call_ind(t); }
    /* 005a6e97: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 005a6e9d: jmp 0x5a6ea9 */ goto L_005a6ea9;
L_005a6e9f:; BB(0x005a6e9f);
    /* 005a6e9f: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_005a6ea9:; BB(0x005a6ea9);
    /* 005a6ea9: jmp 0x5a6df1 */ goto L_005a6df1;
L_005a6eae:; BB(0x005a6eae);
    /* 005a6eae: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6eb1: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005a6eb4: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005a6eb7: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005a6eba: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005a6ebd: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6ec1: je 0x5a6ed9 */ if (fZ) goto L_005a6ed9;
L_005a6ec3:; BB(0x005a6ec3);
    /* 005a6ec3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6ec5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a6ec8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a6eca: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005a6ecd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6ecf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6ed1u); call_ind(t); }
    /* 005a6ed1: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005a6ed7: jmp 0x5a6ee3 */ goto L_005a6ee3;
L_005a6ed9:; BB(0x005a6ed9);
    /* 005a6ed9: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_005a6ee3:; BB(0x005a6ee3);
    /* 005a6ee3: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6ee6: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 005a6ee9: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005a6eec: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005a6eef: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005a6ef2: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6ef6: je 0x5a6f0e */ if (fZ) goto L_005a6f0e;
L_005a6ef8:; BB(0x005a6ef8);
    /* 005a6ef8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6efa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a6efd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a6eff: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005a6f02: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6f04: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6f06u); call_ind(t); }
    /* 005a6f06: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005a6f0c: jmp 0x5a6f18 */ goto L_005a6f18;
L_005a6f0e:; BB(0x005a6f0e);
    /* 005a6f0e: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_005a6f18:; BB(0x005a6f18);
    /* 005a6f18: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6f1b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 005a6f1e: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005a6f21: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005a6f24: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005a6f27: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6f2b: je 0x5a6f43 */ if (fZ) goto L_005a6f43;
L_005a6f2d:; BB(0x005a6f2d);
    /* 005a6f2d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f2f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a6f32: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a6f34: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005a6f37: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6f39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6f3bu); call_ind(t); }
    /* 005a6f3b: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005a6f41: jmp 0x5a6f4d */ goto L_005a6f4d;
L_005a6f43:; BB(0x005a6f43);
    /* 005a6f43: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_005a6f4d:; BB(0x005a6f4d);
    /* 005a6f4d: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6f50: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005a6f53: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005a6f56: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005a6f59: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005a6f5c: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6f60: je 0x5a6f78 */ if (fZ) goto L_005a6f78;
L_005a6f62:; BB(0x005a6f62);
    /* 005a6f62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f64: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a6f67: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a6f69: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005a6f6c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6f6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6f70u); call_ind(t); }
    /* 005a6f70: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005a6f76: jmp 0x5a6f82 */ goto L_005a6f82;
L_005a6f78:; BB(0x005a6f78);
    /* 005a6f78: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005a6f82:; BB(0x005a6f82);
    /* 005a6f82: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6f85: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 005a6f88: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005a6f8b: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005a6f8e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005a6f91: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6f95: je 0x5a6fad */ if (fZ) goto L_005a6fad;
L_005a6f97:; BB(0x005a6f97);
    /* 005a6f97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6f99: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005a6f9c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a6f9e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005a6fa1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6fa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6fa5u); call_ind(t); }
    /* 005a6fa5: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005a6fab: jmp 0x5a6fb7 */ goto L_005a6fb7;
L_005a6fad:; BB(0x005a6fad);
    /* 005a6fad: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_005a6fb7:; BB(0x005a6fb7);
    /* 005a6fb7: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6fba: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005a6fbd: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005a6fc0: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 005a6fc3: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005a6fc6: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6fca: je 0x5a6fe2 */ if (fZ) goto L_005a6fe2;
L_005a6fcc:; BB(0x005a6fcc);
    /* 005a6fcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a6fce: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005a6fd1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a6fd3: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005a6fd6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a6fd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a6fdau); call_ind(t); }
    /* 005a6fda: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005a6fe0: jmp 0x5a6fec */ goto L_005a6fec;
L_005a6fe2:; BB(0x005a6fe2);
    /* 005a6fe2: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_005a6fec:; BB(0x005a6fec);
    /* 005a6fec: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a6fef: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005a6ff2: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 005a6ff5: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005a6ff8: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005a6ffb: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a6fff: je 0x5a7017 */ if (fZ) goto L_005a7017;
L_005a7001:; BB(0x005a7001);
    /* 005a7001: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7003: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a7006: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a7008: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005a700b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a700d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a700fu); call_ind(t); }
    /* 005a700f: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005a7015: jmp 0x5a7021 */ goto L_005a7021;
L_005a7017:; BB(0x005a7017);
    /* 005a7017: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_005a7021:; BB(0x005a7021);
    /* 005a7021: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a7024: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 005a7027: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 005a702a: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005a702d: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005a7030: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a7034: je 0x5a704c */ if (fZ) goto L_005a704c;
L_005a7036:; BB(0x005a7036);
    /* 005a7036: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a7038: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005a703b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a703d: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005a7040: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a7042: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a7044u); call_ind(t); }
    /* 005a7044: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005a704a: jmp 0x5a7056 */ goto L_005a7056;
L_005a704c:; BB(0x005a704c);
    /* 005a704c: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_005a7056:; BB(0x005a7056);
    /* 005a7056: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a705d: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005a7060: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5a7065u); f_005e9e40();
    /* 005a7065: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a7068: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a706f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a7070: mov esp, ebp */ r_esp = r_ebp;
    /* 005a7072: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a7073: ret  */ FN_RET(0x005a6d60); r_esp += 4; return;
}

void f_005a82a0(void) /* royalmatchdisplay::func_005a82a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a82a0);
    /* 005a82a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a82a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005a82a3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a82a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a82a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005a82aa: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 005a82b1: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 005a82b8: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 005a82bf: mov dword ptr [ebp - 0xc], 3 */ W32((u32)(r_ebp+0xfffffff4u), 0x3u);
    /* 005a82c6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005a82cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a82d0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a82d3: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 005a82d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a82da: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a82dd: lea ecx, [edx + eax + 0x28] */ r_ecx = (u32)(r_edx+r_eax+0x28u);
    /* 005a82e1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a82e4: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005a82e7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005a82ea: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a82ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a82ee: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a82f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a82f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a82f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a82f6: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a82fc: call 0x5b5c60 */ r_esp -= 4; W32(r_esp, 0x5a8301u); f_005b5c60();
    /* 005a8301: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 005a8305: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a8308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8309: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a830c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a830d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8311: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8314: call 0x5a71d0 */ r_esp -= 4; W32(r_esp, 0x5a8319u); f_005a71d0();
    /* 005a8319: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a831a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a831d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5a8322u); f_005eaf00();
    /* 005a8322: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a8325: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8326: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a8329: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a832a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a832d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a832e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8331: call 0x5a7460 */ r_esp -= 4; W32(r_esp, 0x5a8336u); f_005a7460();
    /* 005a8336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8337: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a833a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a833b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a833e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a833f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8343: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8346: call 0x5a7240 */ r_esp -= 4; W32(r_esp, 0x5a834bu); f_005a7240();
    /* 005a834b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a834c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a834f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a8351: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8354: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005a8357: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a8359u); call_ind(t); }
    /* 005a8359: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 005a835d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a835e: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5a8363u); f_00641290();
    /* 005a8363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a8366: mov esi, dword ptr [ebp + eax*4 - 0x18] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 005a836a: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a836d: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 005a8371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8372: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5a8377u); f_00641280();
    /* 005a8377: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a837a: lea eax, [esi + eax - 1] */ r_eax = (u32)(r_esi+r_eax+0xffffffffu);
    /* 005a837e: cmp eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8381: jl 0x5a839a */ if ((fS!=fO)) goto L_005a839a;
L_005a8383:; BB(0x005a8383);
    /* 005a8383: push 0x170 */ { u32 v = 0x170u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8388: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005a838d: push 0x6cf8f8 */ { u32 v = 0x6cf8f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8392: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5a8397u); f_005e9f20();
    /* 005a8397: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a839a:; BB(0x005a839a);
    /* 005a839a: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 005a839e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a839f: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5a83a4u); f_00641290();
    /* 005a83a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a83a7: mov esi, dword ptr [ebp + eax*4 - 0x18] */ r_esi = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 005a83ab: imul esi, esi, 0xd */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xdu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a83ae: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 005a83b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a83b3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5a83b8u); f_00641280();
    /* 005a83b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a83bb: lea ecx, [esi + eax - 1] */ r_ecx = (u32)(r_esi+r_eax+0xffffffffu);
    /* 005a83bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a83c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a83c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005a83c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a83c8: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005a83ce: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5a83d0u); call_ind(t); }
    /* 005a83d0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a83d3: imul eax, eax, 7 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a83d6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a83d9: lea edx, [eax + ecx + 5] */ r_edx = (u32)(r_eax+r_ecx+0x5u);
    /* 005a83dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a83de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a83e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a83e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a83e6: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005a83e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a83ebu); call_ind(t); }
    /* 005a83eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a83ee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005a83f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a83f3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005a83f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a83f8u); call_ind(t); }
    /* 005a83f8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a83fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a83fc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a83ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8400: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8403: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8404: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a8407: call 0x5a7d40 */ r_esp -= 4; W32(r_esp, 0x5a840cu); f_005a7d40();
    /* 005a840c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a840f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8411: je 0x5a842f */ if (fZ) goto L_005a842f;
L_005a8413:; BB(0x005a8413);
    /* 005a8413: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005a8417: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8419: jne 0x5a842f */ if (!fZ) goto L_005a842f;
L_005a841b:; BB(0x005a841b);
    /* 005a841b: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005a841d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8420: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005a8422: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8425: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005a842b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5a842du); call_ind(t); }
    /* 005a842d: jmp 0x5a8464 */ goto L_005a8464;
L_005a842f:; BB(0x005a842f);
    /* 005a842f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005a8432: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8433: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005a8436: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8437: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a843a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a843b: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8441: call 0x5b84f0 */ r_esp -= 4; W32(r_esp, 0x5a8446u); f_005b84f0();
    /* 005a8446: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005a8449: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a844b: jne 0x5a8464 */ if (!fZ) goto L_005a8464;
L_005a844d:; BB(0x005a844d);
    /* 005a844d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005a8450: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8451: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a8454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8455: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a8458: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a8459: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a845f: call 0x5b3240 */ r_esp -= 4; W32(r_esp, 0x5a8464u); f_005b3240();
L_005a8464:; BB(0x005a8464);
    /* 005a8464: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a8468: jge 0x5a849e */ if ((fS==fO)) goto L_005a849e;
L_005a846a:; BB(0x005a846a);
    /* 005a846a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a846d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a846e: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8474: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5a8479u); f_005b4e50();
    /* 005a8479: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a847c: je 0x5a849e */ if (fZ) goto L_005a849e;
L_005a847e:; BB(0x005a847e);
    /* 005a847e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a8481: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a8482: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a8488: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5a848du); f_005b4e50();
    /* 005a848d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a8490: je 0x5a849e */ if (fZ) goto L_005a849e;
L_005a8492:; BB(0x005a8492);
    /* 005a8492: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005a8494: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a8497: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5a849cu); f_005eb5d0();
    /* 005a849c: jmp 0x5a84ab */ goto L_005a84ab;
L_005a849e:; BB(0x005a849e);
    /* 005a849e: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a84a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005a84a6: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5a84abu); f_005eb5d0();
L_005a84ab:; BB(0x005a84ab);
    /* 005a84ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a84ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005a84ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a84af: ret 0x10 */ FN_RET(0x005a82a0); r_esp += 20; return;
}

void f_005a9750(void) /* royalmatchdisplay::func_005a9750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9750);
    /* 005a9750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9751: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9753: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9759: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 005a975f: mov dword ptr [ebp - 0x100], 0x167 */ W32((u32)(r_ebp+0xffffff00u), 0x167u);
    /* 005a9769: mov dword ptr [ebp - 0xfc], 0x13c */ W32((u32)(r_ebp+0xffffff04u), 0x13cu);
    /* 005a9773: mov dword ptr [ebp - 0xf8], 0x12c */ W32((u32)(r_ebp+0xffffff08u), 0x12cu);
    /* 005a977d: mov dword ptr [ebp - 0xf4], 0x110 */ W32((u32)(r_ebp+0xffffff0cu), 0x110u);
    /* 005a9787: mov dword ptr [ebp - 0xf0], 0x17a */ W32((u32)(r_ebp+0xffffff10u), 0x17au);
    /* 005a9791: mov dword ptr [ebp - 0xec], 0x110 */ W32((u32)(r_ebp+0xffffff14u), 0x110u);
    /* 005a979b: mov dword ptr [ebp - 0xe8], 0x15e */ W32((u32)(r_ebp+0xffffff18u), 0x15eu);
    /* 005a97a5: mov dword ptr [ebp - 0xe4], 0xb8 */ W32((u32)(r_ebp+0xffffff1cu), 0xb8u);
    /* 005a97af: mov dword ptr [ebp - 0xe0], 0x12c */ W32((u32)(r_ebp+0xffffff20u), 0x12cu);
    /* 005a97b9: mov dword ptr [ebp - 0xdc], 0xb8 */ W32((u32)(r_ebp+0xffffff24u), 0xb8u);
    /* 005a97c3: mov dword ptr [ebp - 0xd8], 0x17a */ W32((u32)(r_ebp+0xffffff28u), 0x17au);
    /* 005a97cd: mov dword ptr [ebp - 0xd4], 0xb8 */ W32((u32)(r_ebp+0xffffff2cu), 0xb8u);
    /* 005a97d7: mov dword ptr [ebp - 0xd0], 0xe2 */ W32((u32)(r_ebp+0xffffff30u), 0xe2u);
    /* 005a97e1: mov dword ptr [ebp - 0xcc], 0x13f */ W32((u32)(r_ebp+0xffffff34u), 0x13fu);
    /* 005a97eb: mov dword ptr [ebp - 0xc8], 0x7a */ W32((u32)(r_ebp+0xffffff38u), 0x7au);
    /* 005a97f5: mov dword ptr [ebp - 0xc4], 0x110 */ W32((u32)(r_ebp+0xffffff3cu), 0x110u);
    /* 005a97ff: mov dword ptr [ebp - 0xc0], 0xc8 */ W32((u32)(r_ebp+0xffffff40u), 0xc8u);
    /* 005a9809: mov dword ptr [ebp - 0xbc], 0x110 */ W32((u32)(r_ebp+0xffffff44u), 0x110u);
    /* 005a9813: mov dword ptr [ebp - 0xb8], 0xb1 */ W32((u32)(r_ebp+0xffffff48u), 0xb1u);
    /* 005a981d: mov dword ptr [ebp - 0xb4], 0xb8 */ W32((u32)(r_ebp+0xffffff4cu), 0xb8u);
    /* 005a9827: mov dword ptr [ebp - 0xb0], 0x83 */ W32((u32)(r_ebp+0xffffff50u), 0x83u);
    /* 005a9831: mov dword ptr [ebp - 0xac], 0xb8 */ W32((u32)(r_ebp+0xffffff54u), 0xb8u);
    /* 005a983b: mov dword ptr [ebp - 0xa8], 0xd1 */ W32((u32)(r_ebp+0xffffff58u), 0xd1u);
    /* 005a9845: mov dword ptr [ebp - 0xa4], 0xb8 */ W32((u32)(r_ebp+0xffffff5cu), 0xb8u);
    /* 005a984f: mov dword ptr [ebp - 0xa0], 0x1e9 */ W32((u32)(r_ebp+0xffffff60u), 0x1e9u);
    /* 005a9859: mov dword ptr [ebp - 0x9c], 0x109 */ W32((u32)(r_ebp+0xffffff64u), 0x109u);
    /* 005a9863: mov dword ptr [ebp - 0x98], 0x1c5 */ W32((u32)(r_ebp+0xffffff68u), 0x1c5u);
    /* 005a986d: mov dword ptr [ebp - 0x94], 0xcb */ W32((u32)(r_ebp+0xffffff6cu), 0xcbu);
    /* 005a9877: mov dword ptr [ebp - 0x90], 0x214 */ W32((u32)(r_ebp+0xffffff70u), 0x214u);
    /* 005a9881: mov dword ptr [ebp - 0x8c], 0xcb */ W32((u32)(r_ebp+0xffffff74u), 0xcbu);
    /* 005a988b: mov dword ptr [ebp - 0x88], 0x1f3 */ W32((u32)(r_ebp+0xffffff78u), 0x1f3u);
    /* 005a9895: mov dword ptr [ebp - 0x84], 0x78 */ W32((u32)(r_ebp+0xffffff7cu), 0x78u);
    /* 005a989f: mov dword ptr [ebp - 0x80], 0x1c2 */ W32((u32)(r_ebp+0xffffff80u), 0x1c2u);
    /* 005a98a6: mov dword ptr [ebp - 0x7c], 0x78 */ W32((u32)(r_ebp+0xffffff84u), 0x78u);
    /* 005a98ad: mov dword ptr [ebp - 0x78], 0x211 */ W32((u32)(r_ebp+0xffffff88u), 0x211u);
    /* 005a98b4: mov dword ptr [ebp - 0x74], 0x78 */ W32((u32)(r_ebp+0xffffff8cu), 0x78u);
    /* 005a98bb: mov dword ptr [ebp - 0x70], 0x5a */ W32((u32)(r_ebp+0xffffff90u), 0x5au);
    /* 005a98c2: mov dword ptr [ebp - 0x6c], 0x111 */ W32((u32)(r_ebp+0xffffff94u), 0x111u);
    /* 005a98c9: mov dword ptr [ebp - 0x68], 0xffffffee */ W32((u32)(r_ebp+0xffffff98u), 0xffffffeeu);
    /* 005a98d0: mov dword ptr [ebp - 0x64], 0xcb */ W32((u32)(r_ebp+0xffffff9cu), 0xcbu);
    /* 005a98d7: mov dword ptr [ebp - 0x60], 0x3d */ W32((u32)(r_ebp+0xffffffa0u), 0x3du);
    /* 005a98de: mov dword ptr [ebp - 0x5c], 0xcb */ W32((u32)(r_ebp+0xffffffa4u), 0xcbu);
    /* 005a98e5: mov dword ptr [ebp - 0x58], 0x24 */ W32((u32)(r_ebp+0xffffffa8u), 0x24u);
    /* 005a98ec: mov dword ptr [ebp - 0x54], 0x78 */ W32((u32)(r_ebp+0xffffffacu), 0x78u);
    /* 005a98f3: mov dword ptr [ebp - 0x50], 0xffffffee */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffeeu);
    /* 005a98fa: mov dword ptr [ebp - 0x4c], 0x78 */ W32((u32)(r_ebp+0xffffffb4u), 0x78u);
    /* 005a9901: mov dword ptr [ebp - 0x48], 0x3d */ W32((u32)(r_ebp+0xffffffb8u), 0x3du);
    /* 005a9908: mov dword ptr [ebp - 0x44], 0x78 */ W32((u32)(r_ebp+0xffffffbcu), 0x78u);
    /* 005a990f: mov dword ptr [ebp - 0x20], 0x143 */ W32((u32)(r_ebp+0xffffffe0u), 0x143u);
    /* 005a9916: mov dword ptr [ebp - 0x1c], 0x131 */ W32((u32)(r_ebp+0xffffffe4u), 0x131u);
    /* 005a991d: mov dword ptr [ebp - 0x18], 0xf3 */ W32((u32)(r_ebp+0xffffffe8u), 0xf3u);
    /* 005a9924: mov dword ptr [ebp - 0x14], 0x132 */ W32((u32)(r_ebp+0xffffffecu), 0x132u);
    /* 005a992b: mov dword ptr [ebp - 0x10], 0x1c7 */ W32((u32)(r_ebp+0xfffffff0u), 0x1c7u);
    /* 005a9932: mov dword ptr [ebp - 0xc], 0xeb */ W32((u32)(r_ebp+0xfffffff4u), 0xebu);
    /* 005a9939: mov dword ptr [ebp - 8], 0x6e */ W32((u32)(r_ebp+0xfffffff8u), 0x6eu);
    /* 005a9940: mov dword ptr [ebp - 4], 0xea */ W32((u32)(r_ebp+0xfffffffcu), 0xeau);
    /* 005a9947: mov dword ptr [ebp - 0x40], 0x186 */ W32((u32)(r_ebp+0xffffffc0u), 0x186u);
    /* 005a994e: mov dword ptr [ebp - 0x3c], 0x110 */ W32((u32)(r_ebp+0xffffffc4u), 0x110u);
    /* 005a9955: mov dword ptr [ebp - 0x38], 0x10f */ W32((u32)(r_ebp+0xffffffc8u), 0x10fu);
    /* 005a995c: mov dword ptr [ebp - 0x34], 0x123 */ W32((u32)(r_ebp+0xffffffccu), 0x123u);
    /* 005a9963: mov dword ptr [ebp - 0x30], 0x1f5 */ W32((u32)(r_ebp+0xffffffd0u), 0x1f5u);
    /* 005a996a: mov dword ptr [ebp - 0x2c], 0xdd */ W32((u32)(r_ebp+0xffffffd4u), 0xddu);
    /* 005a9971: mov dword ptr [ebp - 0x28], 0x8d */ W32((u32)(r_ebp+0xffffffd8u), 0x8du);
    /* 005a9978: mov dword ptr [ebp - 0x24], 0x10b */ W32((u32)(r_ebp+0xffffffdcu), 0x10bu);
    /* 005a997f: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005a9985: cmp dword ptr [eax + 0xcc0], 0x65 */ {  u32 a = R32((u32)(r_eax+0xcc0u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a998c: jne 0x5a999a */ if (!fZ) goto L_005a999a;
L_005a998e:; BB(0x005a998e);
    /* 005a998e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9991: mov eax, dword ptr [ebp + ecx*8 - 0x40] */ r_eax = R32((u32)(r_ebp+r_ecx*8+0xffffffc0u));
    /* 005a9995: jmp 0x5a9a94 */ goto L_005a9a94;
L_005a999a:; BB(0x005a999a);
    /* 005a999a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a999d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a999e: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005a99a4: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005a99aa: call 0x5cb820 */ r_esp -= 4; W32(r_esp, 0x5a99afu); f_005cb820();
    /* 005a99af: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 005a99b5: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005a99bb: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a99be: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 005a99c4: cmp dword ptr [ebp - 0x108], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005a99cb: ja 0x5a9a77 */ if ((!fC&&!fZ)) goto L_005a9a77;
L_005a99d1:; BB(0x005a99d1);
    /* 005a99d1: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005a99d7: jmp dword ptr [edx*4 + 0x5a9a9c] */ { u32 t = R32((u32)(r_edx*4+0x5a9a9cu)); switch (t) { case 0x5a99deu: goto L_005a99de; case 0x5a99f0u: goto L_005a99f0; case 0x5a9a2du: goto L_005a9a2d; case 0x5a9a43u: goto L_005a9a43; default: UNSUP(0x005a99d7, "jump table entry is not a known target"); } }
L_005a99de:; BB(0x005a99de);
    /* 005a99de: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a99e1: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a99e4: mov eax, dword ptr [ebp + eax - 0x100] */ r_eax = R32((u32)(r_ebp+r_eax+0xffffff00u));
    /* 005a99eb: jmp 0x5a9a94 */ goto L_005a9a94;
L_005a99f0:; BB(0x005a99f0);
    /* 005a99f0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a99f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a99f4: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a99fa: call 0x5b6660 */ r_esp -= 4; W32(r_esp, 0x5a99ffu); f_005b6660();
    /* 005a99ff: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a9a02: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9a04: je 0x5a9a17 */ if (fZ) goto L_005a9a17;
L_005a9a06:; BB(0x005a9a06);
    /* 005a9a06: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9a0a: jne 0x5a9a17 */ if (!fZ) goto L_005a9a17;
L_005a9a0c:; BB(0x005a9a0c);
    /* 005a9a0c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a9a0f: mov eax, dword ptr [ebp + eax*8 - 0x20] */ r_eax = R32((u32)(r_ebp+r_eax*8+0xffffffe0u));
    /* 005a9a13: jmp 0x5a9a94 */ goto L_005a9a94;
L_005a9a17:; BB(0x005a9a17);
    /* 005a9a17: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9a1a: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9a1d: lea edx, [ebp + ecx - 0x100] */ r_edx = (u32)(r_ebp+r_ecx+0xffffff00u);
    /* 005a9a24: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9a27: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 005a9a2b: jmp 0x5a9a94 */ goto L_005a9a94;
L_005a9a2d:; BB(0x005a9a2d);
    /* 005a9a2d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9a30: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9a33: lea edx, [ebp + ecx - 0x100] */ r_edx = (u32)(r_ebp+r_ecx+0xffffff00u);
    /* 005a9a3a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9a3d: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 005a9a41: jmp 0x5a9a94 */ goto L_005a9a94;
L_005a9a43:; BB(0x005a9a43);
    /* 005a9a43: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a9a47: jge 0x5a9a61 */ if ((fS==fO)) goto L_005a9a61;
L_005a9a49:; BB(0x005a9a49);
    /* 005a9a49: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9a4c: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9a4f: lea edx, [ebp + ecx - 0x100] */ r_edx = (u32)(r_ebp+r_ecx+0xffffff00u);
    /* 005a9a56: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9a59: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 005a9a5d: jmp 0x5a9a94 */ goto L_005a9a94;
L_005a9a61:; BB(0x005a9a61);
    /* 005a9a61: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9a64: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9a67: lea edx, [ebp + ecx - 0x100] */ r_edx = (u32)(r_ebp+r_ecx+0xffffff00u);
    /* 005a9a6e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9a71: mov eax, dword ptr [edx + eax*8 + 0x10] */ r_eax = R32((u32)(r_edx+r_eax*8+0x10u));
    /* 005a9a75: jmp 0x5a9a94 */ goto L_005a9a94;
L_005a9a77:; BB(0x005a9a77);
    /* 005a9a77: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005a9a79: jne 0x5a9a92 */ if (!fZ) goto L_005a9a92;
L_005a9a7b:; BB(0x005a9a7b);
    /* 005a9a7b: push 0x31e */ { u32 v = 0x31eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9a80: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9a85: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9a8a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5a9a8fu); f_005e9f20();
    /* 005a9a8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a9a92:; BB(0x005a9a92);
    /* 005a9a92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a9a94:; BB(0x005a9a94);
    /* 005a9a94: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9a96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9a97: ret 8 */ FN_RET(0x005a9750); r_esp += 12; return;
}

void f_005a9b10(void) /* royalmatchdisplay::func_005a9b10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005a9b10);
    /* 005a9b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a9b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005a9b13: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a9b19: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 005a9b1f: mov dword ptr [ebp - 0x100], 0x167 */ W32((u32)(r_ebp+0xffffff00u), 0x167u);
    /* 005a9b29: mov dword ptr [ebp - 0xfc], 0x13c */ W32((u32)(r_ebp+0xffffff04u), 0x13cu);
    /* 005a9b33: mov dword ptr [ebp - 0xf8], 0x12c */ W32((u32)(r_ebp+0xffffff08u), 0x12cu);
    /* 005a9b3d: mov dword ptr [ebp - 0xf4], 0x110 */ W32((u32)(r_ebp+0xffffff0cu), 0x110u);
    /* 005a9b47: mov dword ptr [ebp - 0xf0], 0x17a */ W32((u32)(r_ebp+0xffffff10u), 0x17au);
    /* 005a9b51: mov dword ptr [ebp - 0xec], 0x110 */ W32((u32)(r_ebp+0xffffff14u), 0x110u);
    /* 005a9b5b: mov dword ptr [ebp - 0xe8], 0x15e */ W32((u32)(r_ebp+0xffffff18u), 0x15eu);
    /* 005a9b65: mov dword ptr [ebp - 0xe4], 0xb8 */ W32((u32)(r_ebp+0xffffff1cu), 0xb8u);
    /* 005a9b6f: mov dword ptr [ebp - 0xe0], 0x12c */ W32((u32)(r_ebp+0xffffff20u), 0x12cu);
    /* 005a9b79: mov dword ptr [ebp - 0xdc], 0xb8 */ W32((u32)(r_ebp+0xffffff24u), 0xb8u);
    /* 005a9b83: mov dword ptr [ebp - 0xd8], 0x17a */ W32((u32)(r_ebp+0xffffff28u), 0x17au);
    /* 005a9b8d: mov dword ptr [ebp - 0xd4], 0xb8 */ W32((u32)(r_ebp+0xffffff2cu), 0xb8u);
    /* 005a9b97: mov dword ptr [ebp - 0xd0], 0xe2 */ W32((u32)(r_ebp+0xffffff30u), 0xe2u);
    /* 005a9ba1: mov dword ptr [ebp - 0xcc], 0x13f */ W32((u32)(r_ebp+0xffffff34u), 0x13fu);
    /* 005a9bab: mov dword ptr [ebp - 0xc8], 0x7a */ W32((u32)(r_ebp+0xffffff38u), 0x7au);
    /* 005a9bb5: mov dword ptr [ebp - 0xc4], 0x110 */ W32((u32)(r_ebp+0xffffff3cu), 0x110u);
    /* 005a9bbf: mov dword ptr [ebp - 0xc0], 0xc8 */ W32((u32)(r_ebp+0xffffff40u), 0xc8u);
    /* 005a9bc9: mov dword ptr [ebp - 0xbc], 0x110 */ W32((u32)(r_ebp+0xffffff44u), 0x110u);
    /* 005a9bd3: mov dword ptr [ebp - 0xb8], 0xb1 */ W32((u32)(r_ebp+0xffffff48u), 0xb1u);
    /* 005a9bdd: mov dword ptr [ebp - 0xb4], 0xb8 */ W32((u32)(r_ebp+0xffffff4cu), 0xb8u);
    /* 005a9be7: mov dword ptr [ebp - 0xb0], 0x83 */ W32((u32)(r_ebp+0xffffff50u), 0x83u);
    /* 005a9bf1: mov dword ptr [ebp - 0xac], 0xb8 */ W32((u32)(r_ebp+0xffffff54u), 0xb8u);
    /* 005a9bfb: mov dword ptr [ebp - 0xa8], 0xd1 */ W32((u32)(r_ebp+0xffffff58u), 0xd1u);
    /* 005a9c05: mov dword ptr [ebp - 0xa4], 0xb8 */ W32((u32)(r_ebp+0xffffff5cu), 0xb8u);
    /* 005a9c0f: mov dword ptr [ebp - 0xa0], 0x1e9 */ W32((u32)(r_ebp+0xffffff60u), 0x1e9u);
    /* 005a9c19: mov dword ptr [ebp - 0x9c], 0x109 */ W32((u32)(r_ebp+0xffffff64u), 0x109u);
    /* 005a9c23: mov dword ptr [ebp - 0x98], 0x1c5 */ W32((u32)(r_ebp+0xffffff68u), 0x1c5u);
    /* 005a9c2d: mov dword ptr [ebp - 0x94], 0xcb */ W32((u32)(r_ebp+0xffffff6cu), 0xcbu);
    /* 005a9c37: mov dword ptr [ebp - 0x90], 0x214 */ W32((u32)(r_ebp+0xffffff70u), 0x214u);
    /* 005a9c41: mov dword ptr [ebp - 0x8c], 0xcb */ W32((u32)(r_ebp+0xffffff74u), 0xcbu);
    /* 005a9c4b: mov dword ptr [ebp - 0x88], 0x1f3 */ W32((u32)(r_ebp+0xffffff78u), 0x1f3u);
    /* 005a9c55: mov dword ptr [ebp - 0x84], 0x78 */ W32((u32)(r_ebp+0xffffff7cu), 0x78u);
    /* 005a9c5f: mov dword ptr [ebp - 0x80], 0x1c2 */ W32((u32)(r_ebp+0xffffff80u), 0x1c2u);
    /* 005a9c66: mov dword ptr [ebp - 0x7c], 0x78 */ W32((u32)(r_ebp+0xffffff84u), 0x78u);
    /* 005a9c6d: mov dword ptr [ebp - 0x78], 0x211 */ W32((u32)(r_ebp+0xffffff88u), 0x211u);
    /* 005a9c74: mov dword ptr [ebp - 0x74], 0x78 */ W32((u32)(r_ebp+0xffffff8cu), 0x78u);
    /* 005a9c7b: mov dword ptr [ebp - 0x70], 0x5a */ W32((u32)(r_ebp+0xffffff90u), 0x5au);
    /* 005a9c82: mov dword ptr [ebp - 0x6c], 0x111 */ W32((u32)(r_ebp+0xffffff94u), 0x111u);
    /* 005a9c89: mov dword ptr [ebp - 0x68], 0xffffffee */ W32((u32)(r_ebp+0xffffff98u), 0xffffffeeu);
    /* 005a9c90: mov dword ptr [ebp - 0x64], 0xcb */ W32((u32)(r_ebp+0xffffff9cu), 0xcbu);
    /* 005a9c97: mov dword ptr [ebp - 0x60], 0x3d */ W32((u32)(r_ebp+0xffffffa0u), 0x3du);
    /* 005a9c9e: mov dword ptr [ebp - 0x5c], 0xcb */ W32((u32)(r_ebp+0xffffffa4u), 0xcbu);
    /* 005a9ca5: mov dword ptr [ebp - 0x58], 0x24 */ W32((u32)(r_ebp+0xffffffa8u), 0x24u);
    /* 005a9cac: mov dword ptr [ebp - 0x54], 0x78 */ W32((u32)(r_ebp+0xffffffacu), 0x78u);
    /* 005a9cb3: mov dword ptr [ebp - 0x50], 0xffffffee */ W32((u32)(r_ebp+0xffffffb0u), 0xffffffeeu);
    /* 005a9cba: mov dword ptr [ebp - 0x4c], 0x78 */ W32((u32)(r_ebp+0xffffffb4u), 0x78u);
    /* 005a9cc1: mov dword ptr [ebp - 0x48], 0x3d */ W32((u32)(r_ebp+0xffffffb8u), 0x3du);
    /* 005a9cc8: mov dword ptr [ebp - 0x44], 0x78 */ W32((u32)(r_ebp+0xffffffbcu), 0x78u);
    /* 005a9ccf: mov dword ptr [ebp - 0x20], 0x143 */ W32((u32)(r_ebp+0xffffffe0u), 0x143u);
    /* 005a9cd6: mov dword ptr [ebp - 0x1c], 0x131 */ W32((u32)(r_ebp+0xffffffe4u), 0x131u);
    /* 005a9cdd: mov dword ptr [ebp - 0x18], 0xf3 */ W32((u32)(r_ebp+0xffffffe8u), 0xf3u);
    /* 005a9ce4: mov dword ptr [ebp - 0x14], 0x132 */ W32((u32)(r_ebp+0xffffffecu), 0x132u);
    /* 005a9ceb: mov dword ptr [ebp - 0x10], 0x1c7 */ W32((u32)(r_ebp+0xfffffff0u), 0x1c7u);
    /* 005a9cf2: mov dword ptr [ebp - 0xc], 0xeb */ W32((u32)(r_ebp+0xfffffff4u), 0xebu);
    /* 005a9cf9: mov dword ptr [ebp - 8], 0x6e */ W32((u32)(r_ebp+0xfffffff8u), 0x6eu);
    /* 005a9d00: mov dword ptr [ebp - 4], 0xea */ W32((u32)(r_ebp+0xfffffffcu), 0xeau);
    /* 005a9d07: mov dword ptr [ebp - 0x40], 0x186 */ W32((u32)(r_ebp+0xffffffc0u), 0x186u);
    /* 005a9d0e: mov dword ptr [ebp - 0x3c], 0x110 */ W32((u32)(r_ebp+0xffffffc4u), 0x110u);
    /* 005a9d15: mov dword ptr [ebp - 0x38], 0x10f */ W32((u32)(r_ebp+0xffffffc8u), 0x10fu);
    /* 005a9d1c: mov dword ptr [ebp - 0x34], 0x123 */ W32((u32)(r_ebp+0xffffffccu), 0x123u);
    /* 005a9d23: mov dword ptr [ebp - 0x30], 0x1f5 */ W32((u32)(r_ebp+0xffffffd0u), 0x1f5u);
    /* 005a9d2a: mov dword ptr [ebp - 0x2c], 0xdd */ W32((u32)(r_ebp+0xffffffd4u), 0xddu);
    /* 005a9d31: mov dword ptr [ebp - 0x28], 0x8d */ W32((u32)(r_ebp+0xffffffd8u), 0x8du);
    /* 005a9d38: mov dword ptr [ebp - 0x24], 0x10b */ W32((u32)(r_ebp+0xffffffdcu), 0x10bu);
    /* 005a9d3f: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005a9d45: cmp dword ptr [eax + 0xcc0], 0x65 */ {  u32 a = R32((u32)(r_eax+0xcc0u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9d4c: jne 0x5a9d5a */ if (!fZ) goto L_005a9d5a;
L_005a9d4e:; BB(0x005a9d4e);
    /* 005a9d4e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9d51: mov eax, dword ptr [ebp + ecx*8 - 0x3c] */ r_eax = R32((u32)(r_ebp+r_ecx*8+0xffffffc4u));
    /* 005a9d55: jmp 0x5a9e54 */ goto L_005a9e54;
L_005a9d5a:; BB(0x005a9d5a);
    /* 005a9d5a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005a9d5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9d5e: mov eax, dword ptr [ebp - 0x104] */ r_eax = R32((u32)(r_ebp+0xfffffefcu));
    /* 005a9d64: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005a9d6a: call 0x5cb820 */ r_esp -= 4; W32(r_esp, 0x5a9d6fu); f_005cb820();
    /* 005a9d6f: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 005a9d75: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005a9d7b: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005a9d7e: mov dword ptr [ebp - 0x108], ecx */ W32((u32)(r_ebp+0xfffffef8u), r_ecx);
    /* 005a9d84: cmp dword ptr [ebp - 0x108], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005a9d8b: ja 0x5a9e37 */ if ((!fC&&!fZ)) goto L_005a9e37;
L_005a9d91:; BB(0x005a9d91);
    /* 005a9d91: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 005a9d97: jmp dword ptr [edx*4 + 0x5a9e5c] */ { u32 t = R32((u32)(r_edx*4+0x5a9e5cu)); switch (t) { case 0x5a9d9eu: goto L_005a9d9e; case 0x5a9db0u: goto L_005a9db0; case 0x5a9dedu: goto L_005a9ded; case 0x5a9e03u: goto L_005a9e03; default: UNSUP(0x005a9d97, "jump table entry is not a known target"); } }
L_005a9d9e:; BB(0x005a9d9e);
    /* 005a9d9e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a9da1: imul eax, eax, 0x30 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x30u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9da4: mov eax, dword ptr [ebp + eax - 0xfc] */ r_eax = R32((u32)(r_ebp+r_eax+0xffffff04u));
    /* 005a9dab: jmp 0x5a9e54 */ goto L_005a9e54;
L_005a9db0:; BB(0x005a9db0);
    /* 005a9db0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a9db4: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005a9dba: call 0x5b6660 */ r_esp -= 4; W32(r_esp, 0x5a9dbfu); f_005b6660();
    /* 005a9dbf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005a9dc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9dc4: je 0x5a9dd7 */ if (fZ) goto L_005a9dd7;
L_005a9dc6:; BB(0x005a9dc6);
    /* 005a9dc6: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a9dca: jne 0x5a9dd7 */ if (!fZ) goto L_005a9dd7;
L_005a9dcc:; BB(0x005a9dcc);
    /* 005a9dcc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a9dcf: mov eax, dword ptr [ebp + eax*8 - 0x1c] */ r_eax = R32((u32)(r_ebp+r_eax*8+0xffffffe4u));
    /* 005a9dd3: jmp 0x5a9e54 */ goto L_005a9e54;
L_005a9dd7:; BB(0x005a9dd7);
    /* 005a9dd7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9dda: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9ddd: lea edx, [ebp + ecx - 0x100] */ r_edx = (u32)(r_ebp+r_ecx+0xffffff00u);
    /* 005a9de4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9de7: mov eax, dword ptr [edx + eax*8 + 0xc] */ r_eax = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 005a9deb: jmp 0x5a9e54 */ goto L_005a9e54;
L_005a9ded:; BB(0x005a9ded);
    /* 005a9ded: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9df0: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9df3: lea edx, [ebp + ecx - 0x100] */ r_edx = (u32)(r_ebp+r_ecx+0xffffff00u);
    /* 005a9dfa: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9dfd: mov eax, dword ptr [edx + eax*8 + 0xc] */ r_eax = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 005a9e01: jmp 0x5a9e54 */ goto L_005a9e54;
L_005a9e03:; BB(0x005a9e03);
    /* 005a9e03: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a9e07: jge 0x5a9e21 */ if ((fS==fO)) goto L_005a9e21;
L_005a9e09:; BB(0x005a9e09);
    /* 005a9e09: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9e0c: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9e0f: lea edx, [ebp + ecx - 0x100] */ r_edx = (u32)(r_ebp+r_ecx+0xffffff00u);
    /* 005a9e16: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9e19: mov eax, dword ptr [edx + eax*8 + 0xc] */ r_eax = R32((u32)(r_edx+r_eax*8+0xcu));
    /* 005a9e1d: jmp 0x5a9e54 */ goto L_005a9e54;
L_005a9e21:; BB(0x005a9e21);
    /* 005a9e21: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005a9e24: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005a9e27: lea edx, [ebp + ecx - 0x100] */ r_edx = (u32)(r_ebp+r_ecx+0xffffff00u);
    /* 005a9e2e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005a9e31: mov eax, dword ptr [edx + eax*8 + 0x14] */ r_eax = R32((u32)(r_edx+r_eax*8+0x14u));
    /* 005a9e35: jmp 0x5a9e54 */ goto L_005a9e54;
L_005a9e37:; BB(0x005a9e37);
    /* 005a9e37: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005a9e39: jne 0x5a9e52 */ if (!fZ) goto L_005a9e52;
L_005a9e3b:; BB(0x005a9e3b);
    /* 005a9e3b: push 0x35f */ { u32 v = 0x35fu; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e40: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e45: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005a9e4a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5a9e4fu); f_005e9f20();
    /* 005a9e4f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a9e52:; BB(0x005a9e52);
    /* 005a9e52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005a9e54:; BB(0x005a9e54);
    /* 005a9e54: mov esp, ebp */ r_esp = r_ebp;
    /* 005a9e56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a9e57: ret 8 */ FN_RET(0x005a9b10); r_esp += 12; return;
}

void f_005ab4b0(void) /* royalmatchdisplay::func_005ab4b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ab4b0);
    /* 005ab4b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ab4b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ab4b3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ab4b6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ab4b9: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab4bf: call 0x5b4f00 */ r_esp -= 4; W32(r_esp, 0x5ab4c4u); f_005b4f00();
    /* 005ab4c4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ab4c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab4ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab4cb: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab4d1: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5ab4d6u); f_005b4e50();
    /* 005ab4d6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ab4d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ab4dc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ab4df: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 005ab4e2: sub eax, dword ptr [edx + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x48u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ab4e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab4e6: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x5ab4ebu); f_00686eba();
    /* 005ab4eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ab4ee: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005ab4f1: cmp dword ptr [ebp - 0x10], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab4f5: jge 0x5ab4fe */ if ((fS==fO)) goto L_005ab4fe;
L_005ab4f7:; BB(0x005ab4f7);
    /* 005ab4f7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005ab4fe:; BB(0x005ab4fe);
    /* 005ab4fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ab501: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ab504: mov eax, dword ptr [ecx + 0x54] */ r_eax = R32((u32)(r_ecx+0x54u));
    /* 005ab507: sub eax, dword ptr [edx + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ab50a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005ab50d: cmp dword ptr [ebp - 8], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab511: jge 0x5ab51a */ if ((fS==fO)) goto L_005ab51a;
L_005ab513:; BB(0x005ab513);
    /* 005ab513: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005ab51a:; BB(0x005ab51a);
    /* 005ab51a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ab51d: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005ab520: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005ab523: cmp dword ptr [ebp - 0x18], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab527: je 0x5ab534 */ if (fZ) goto L_005ab534;
L_005ab529:; BB(0x005ab529);
    /* 005ab529: cmp dword ptr [ebp - 0x18], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab52d: je 0x5ab5ab */ if (fZ) goto L_005ab5ab;
L_005ab52f:; BB(0x005ab52f);
    /* 005ab52f: jmp 0x5ab639 */ goto L_005ab639;
L_005ab534:; BB(0x005ab534);
    /* 005ab534: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab537: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab53a: jle 0x5ab563 */ if ((fZ||fS!=fO)) goto L_005ab563;
L_005ab53c:; BB(0x005ab53c);
    /* 005ab53c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab53e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab540: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab544: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005ab54a: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5ab54fu); f_005ad1f0();
    /* 005ab54f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005ab552: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab554: je 0x5ab563 */ if (fZ) goto L_005ab563;
L_005ab556:; BB(0x005ab556);
    /* 005ab556: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ab55c: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5ab561u); f_005a7080();
    /* 005ab561: jmp 0x5ab5a6 */ goto L_005ab5a6;
L_005ab563:; BB(0x005ab563);
    /* 005ab563: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ab566: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab569: jle 0x5ab5a6 */ if ((fZ||fS!=fO)) goto L_005ab5a6;
L_005ab56b:; BB(0x005ab56b);
    /* 005ab56b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab56e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab56f: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab575: call 0x5b6170 */ r_esp -= 4; W32(r_esp, 0x5ab57au); f_005b6170();
    /* 005ab57a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005ab57d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab57f: jne 0x5ab5a6 */ if (!fZ) goto L_005ab5a6;
L_005ab581:; BB(0x005ab581);
    /* 005ab581: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab583: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab585: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab589: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005ab58f: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5ab594u); f_005ad1f0();
    /* 005ab594: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ab597: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab599: je 0x5ab5a6 */ if (fZ) goto L_005ab5a6;
L_005ab59b:; BB(0x005ab59b);
    /* 005ab59b: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ab5a1: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5ab5a6u); f_005a7080();
L_005ab5a6:; BB(0x005ab5a6);
    /* 005ab5a6: jmp 0x5ab654 */ goto L_005ab654;
L_005ab5ab:; BB(0x005ab5ab);
    /* 005ab5ab: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ab5ae: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab5b1: jle 0x5ab5f4 */ if ((fZ||fS!=fO)) goto L_005ab5f4;
L_005ab5b3:; BB(0x005ab5b3);
    /* 005ab5b3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ab5b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab5b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab5ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab5bb: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab5c1: call 0x5b3710 */ r_esp -= 4; W32(r_esp, 0x5ab5c6u); f_005b3710();
    /* 005ab5c6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005ab5c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab5cb: je 0x5ab5f4 */ if (fZ) goto L_005ab5f4;
L_005ab5cd:; BB(0x005ab5cd);
    /* 005ab5cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab5cf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab5d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab5d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab5d5: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005ab5db: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5ab5e0u); f_005ad1f0();
    /* 005ab5e0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ab5e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab5e5: je 0x5ab5f4 */ if (fZ) goto L_005ab5f4;
L_005ab5e7:; BB(0x005ab5e7);
    /* 005ab5e7: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ab5ed: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5ab5f2u); f_005a7080();
    /* 005ab5f2: jmp 0x5ab637 */ goto L_005ab637;
L_005ab5f4:; BB(0x005ab5f4);
    /* 005ab5f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ab5f7: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ab5fa: jle 0x5ab637 */ if ((fZ||fS!=fO)) goto L_005ab637;
L_005ab5fc:; BB(0x005ab5fc);
    /* 005ab5fc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab5ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ab600: mov ecx, dword ptr [0x793604] */ r_ecx = R32((u32)(0x793604u));
    /* 005ab606: call 0x5b3430 */ r_esp -= 4; W32(r_esp, 0x5ab60bu); f_005b3430();
    /* 005ab60b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ab60e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab610: je 0x5ab637 */ if (fZ) goto L_005ab637;
L_005ab612:; BB(0x005ab612);
    /* 005ab612: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab614: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab616: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ab619: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ab61a: mov ecx, dword ptr [0x7935fc] */ r_ecx = R32((u32)(0x7935fcu));
    /* 005ab620: call 0x5ad1f0 */ r_esp -= 4; W32(r_esp, 0x5ab625u); f_005ad1f0();
    /* 005ab625: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ab628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ab62a: je 0x5ab637 */ if (fZ) goto L_005ab637;
L_005ab62c:; BB(0x005ab62c);
    /* 005ab62c: mov ecx, dword ptr [0x7935f8] */ r_ecx = R32((u32)(0x7935f8u));
    /* 005ab632: call 0x5a7080 */ r_esp -= 4; W32(r_esp, 0x5ab637u); f_005a7080();
L_005ab637:; BB(0x005ab637);
    /* 005ab637: jmp 0x5ab654 */ goto L_005ab654;
L_005ab639:; BB(0x005ab639);
    /* 005ab639: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005ab63b: jne 0x5ab654 */ if (!fZ) goto L_005ab654;
L_005ab63d:; BB(0x005ab63d);
    /* 005ab63d: push 0x576 */ { u32 v = 0x576u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab642: push 0x6cf934 */ { u32 v = 0x6cf934u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab647: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005ab64c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5ab651u); f_005e9f20();
    /* 005ab651: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ab654:; BB(0x005ab654);
    /* 005ab654: mov esp, ebp */ r_esp = r_ebp;
    /* 005ab656: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ab657: ret  */ FN_RET(0x005ab4b0); r_esp += 4; return;
}

