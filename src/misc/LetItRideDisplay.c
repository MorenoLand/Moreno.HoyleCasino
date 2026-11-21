#include "protos.h"

void f_00446af0(void) /* LetItRideDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446af0);
    /* 00446af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00446af3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00446af6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00446af9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446afc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x446b01u); f_005e9e20();
    /* 00446b01: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446b04: mov dword ptr [eax], 0x6b8a6c */ W32((u32)(r_eax), 0x6b8a6cu);
    /* 00446b0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00446b11: jmp 0x446b1c */ goto L_00446b1c;
L_00446b13:; BB(0x00446b13);
    /* 00446b13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446b16: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00446b19: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00446b1c:; BB(0x00446b1c);
    /* 00446b1c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446b20: jge 0x446b40 */ if ((fS==fO)) goto L_00446b40;
L_00446b22:; BB(0x00446b22);
    /* 00446b22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446b25: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446b28: mov dword ptr [eax + edx*4 + 4], 0 */ W32((u32)(r_eax+r_edx*4+0x4u), 0x0u);
    /* 00446b30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446b33: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446b36: mov dword ptr [edx + ecx*4 + 0x54], 0 */ W32((u32)(r_edx+r_ecx*4+0x54u), 0x0u);
    /* 00446b3e: jmp 0x446b13 */ goto L_00446b13;
L_00446b40:; BB(0x00446b40);
    /* 00446b40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00446b47: jmp 0x446b52 */ goto L_00446b52;
L_00446b49:; BB(0x00446b49);
    /* 00446b49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446b4c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446b4f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00446b52:; BB(0x00446b52);
    /* 00446b52: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446b56: jge 0x446b68 */ if ((fS==fO)) goto L_00446b68;
L_00446b58:; BB(0x00446b58);
    /* 00446b58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446b5b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446b5e: mov dword ptr [edx + ecx*4 + 0x14], 0 */ W32((u32)(r_edx+r_ecx*4+0x14u), 0x0u);
    /* 00446b66: jmp 0x446b49 */ goto L_00446b49;
L_00446b68:; BB(0x00446b68);
    /* 00446b68: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00446b6f: jmp 0x446b7a */ goto L_00446b7a;
L_00446b71:; BB(0x00446b71);
    /* 00446b71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446b74: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446b77: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00446b7a:; BB(0x00446b7a);
    /* 00446b7a: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446b7e: jge 0x446b90 */ if ((fS==fO)) goto L_00446b90;
L_00446b80:; BB(0x00446b80);
    /* 00446b80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00446b83: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446b86: mov dword ptr [edx + ecx*4 + 0x44], 0 */ W32((u32)(r_edx+r_ecx*4+0x44u), 0x0u);
    /* 00446b8e: jmp 0x446b71 */ goto L_00446b71;
L_00446b90:; BB(0x00446b90);
    /* 00446b90: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446b93: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
    /* 00446b9a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446b9d: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 00446ba4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446ba7: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
    /* 00446bae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446bb1: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 00446bb8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446bbb: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 00446bc2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446bc5: mov esp, ebp */ r_esp = r_ebp;
    /* 00446bc7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446bc8: ret  */ FN_RET(0x00446af0); r_esp += 4; return;
}

void f_00446bd0(void) /* LetItRideDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446bd0);
    /* 00446bd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446bd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00446bd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00446bd5: push 0x69eba8 */ { u32 v = 0x69eba8u; r_esp -= 4; W32(r_esp, v); }
    /* 00446bda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00446be0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446be1: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00446be4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00446be9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00446beb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446bec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00446bef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00446bf5: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00446bf8: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446bfb: mov dword ptr [eax], 0x6b8a6c */ W32((u32)(r_eax), 0x6b8a6cu);
    /* 00446c01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00446c08: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00446c0f: jmp 0x446c1a */ goto L_00446c1a;
L_00446c11:; BB(0x00446c11);
    /* 00446c11: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446c14: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00446c17: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00446c1a:; BB(0x00446c1a);
    /* 00446c1a: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446c1e: jge 0x446c88 */ if ((fS==fO)) goto L_00446c88;
L_00446c20:; BB(0x00446c20);
    /* 00446c20: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446c23: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446c26: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00446c2a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00446c2d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00446c30: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00446c33: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446c37: je 0x446c4c */ if (fZ) goto L_00446c4c;
L_00446c39:; BB(0x00446c39);
    /* 00446c39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446c3b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00446c3e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00446c40: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00446c43: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00446c45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x446c47u); call_ind(t); }
    /* 00446c47: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00446c4a: jmp 0x446c53 */ goto L_00446c53;
L_00446c4c:; BB(0x00446c4c);
    /* 00446c4c: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00446c53:; BB(0x00446c53);
    /* 00446c53: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446c56: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446c59: mov eax, dword ptr [edx + ecx*4 + 0x54] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x54u));
    /* 00446c5d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00446c60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00446c63: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00446c66: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446c6a: je 0x446c7f */ if (fZ) goto L_00446c7f;
L_00446c6c:; BB(0x00446c6c);
    /* 00446c6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446c6e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00446c71: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00446c73: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00446c76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00446c78: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x446c7au); call_ind(t); }
    /* 00446c7a: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00446c7d: jmp 0x446c86 */ goto L_00446c86;
L_00446c7f:; BB(0x00446c7f);
    /* 00446c7f: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00446c86:; BB(0x00446c86);
    /* 00446c86: jmp 0x446c11 */ goto L_00446c11;
L_00446c88:; BB(0x00446c88);
    /* 00446c88: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00446c8f: jmp 0x446c9a */ goto L_00446c9a;
L_00446c91:; BB(0x00446c91);
    /* 00446c91: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446c94: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446c97: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00446c9a:; BB(0x00446c9a);
    /* 00446c9a: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446c9e: jge 0x446cd5 */ if ((fS==fO)) goto L_00446cd5;
L_00446ca0:; BB(0x00446ca0);
    /* 00446ca0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446ca3: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446ca6: mov eax, dword ptr [edx + ecx*4 + 0x14] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x14u));
    /* 00446caa: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00446cad: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00446cb0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00446cb3: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446cb7: je 0x446ccc */ if (fZ) goto L_00446ccc;
L_00446cb9:; BB(0x00446cb9);
    /* 00446cb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446cbb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00446cbe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00446cc0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00446cc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00446cc5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x446cc7u); call_ind(t); }
    /* 00446cc7: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00446cca: jmp 0x446cd3 */ goto L_00446cd3;
L_00446ccc:; BB(0x00446ccc);
    /* 00446ccc: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00446cd3:; BB(0x00446cd3);
    /* 00446cd3: jmp 0x446c91 */ goto L_00446c91;
L_00446cd5:; BB(0x00446cd5);
    /* 00446cd5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00446cdc: jmp 0x446ce7 */ goto L_00446ce7;
L_00446cde:; BB(0x00446cde);
    /* 00446cde: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446ce1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446ce4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00446ce7:; BB(0x00446ce7);
    /* 00446ce7: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446ceb: jge 0x446d22 */ if ((fS==fO)) goto L_00446d22;
L_00446ced:; BB(0x00446ced);
    /* 00446ced: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446cf0: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446cf3: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 00446cf7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00446cfa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00446cfd: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00446d00: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446d04: je 0x446d19 */ if (fZ) goto L_00446d19;
L_00446d06:; BB(0x00446d06);
    /* 00446d06: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446d08: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00446d0b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00446d0d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00446d10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00446d12: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x446d14u); call_ind(t); }
    /* 00446d14: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00446d17: jmp 0x446d20 */ goto L_00446d20;
L_00446d19:; BB(0x00446d19);
    /* 00446d19: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00446d20:; BB(0x00446d20);
    /* 00446d20: jmp 0x446cde */ goto L_00446cde;
L_00446d22:; BB(0x00446d22);
    /* 00446d22: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446d25: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 00446d28: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00446d2b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00446d2e: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00446d31: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446d35: je 0x446d4a */ if (fZ) goto L_00446d4a;
L_00446d37:; BB(0x00446d37);
    /* 00446d37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446d39: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00446d3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00446d3e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00446d41: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00446d43: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x446d45u); call_ind(t); }
    /* 00446d45: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00446d48: jmp 0x446d51 */ goto L_00446d51;
L_00446d4a:; BB(0x00446d4a);
    /* 00446d4a: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00446d51:; BB(0x00446d51);
    /* 00446d51: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446d54: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00446d57: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00446d5a: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00446d5d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00446d60: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446d64: je 0x446d79 */ if (fZ) goto L_00446d79;
L_00446d66:; BB(0x00446d66);
    /* 00446d66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446d68: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00446d6b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00446d6d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00446d70: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00446d72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x446d74u); call_ind(t); }
    /* 00446d74: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00446d77: jmp 0x446d80 */ goto L_00446d80;
L_00446d79:; BB(0x00446d79);
    /* 00446d79: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00446d80:; BB(0x00446d80);
    /* 00446d80: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446d83: mov edx, dword ptr [ecx + 0x68] */ r_edx = R32((u32)(r_ecx+0x68u));
    /* 00446d86: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00446d89: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00446d8c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00446d8f: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446d93: je 0x446da8 */ if (fZ) goto L_00446da8;
L_00446d95:; BB(0x00446d95);
    /* 00446d95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446d97: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00446d9a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00446d9c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00446d9f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00446da1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x446da3u); call_ind(t); }
    /* 00446da3: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00446da6: jmp 0x446daf */ goto L_00446daf;
L_00446da8:; BB(0x00446da8);
    /* 00446da8: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00446daf:; BB(0x00446daf);
    /* 00446daf: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446db2: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00446db5: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00446db8: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00446dbb: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00446dbe: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446dc2: je 0x446dd7 */ if (fZ) goto L_00446dd7;
L_00446dc4:; BB(0x00446dc4);
    /* 00446dc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446dc6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00446dc9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00446dcb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00446dce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00446dd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x446dd2u); call_ind(t); }
    /* 00446dd2: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00446dd5: jmp 0x446dde */ goto L_00446dde;
L_00446dd7:; BB(0x00446dd7);
    /* 00446dd7: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00446dde:; BB(0x00446dde);
    /* 00446dde: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446de1: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00446de4: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00446de7: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00446dea: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00446ded: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446df1: je 0x446e06 */ if (fZ) goto L_00446e06;
L_00446df3:; BB(0x00446df3);
    /* 00446df3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00446df5: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446df8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00446dfa: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446dfd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00446dff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x446e01u); call_ind(t); }
    /* 00446e01: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00446e04: jmp 0x446e0d */ goto L_00446e0d;
L_00446e06:; BB(0x00446e06);
    /* 00446e06: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00446e0d:; BB(0x00446e0d);
    /* 00446e0d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00446e14: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446e17: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x446e1cu); f_005e9e40();
    /* 00446e1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446e1f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00446e26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00446e27: mov esp, ebp */ r_esp = r_ebp;
    /* 00446e29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446e2a: ret  */ FN_RET(0x00446bd0); r_esp += 4; return;
}

