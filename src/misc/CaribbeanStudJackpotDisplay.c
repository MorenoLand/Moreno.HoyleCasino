#include "protos.h"

void f_00420bb0(void) /* CaribbeanStudJackpotDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420bb0);
    /* 00420bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00420bb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420bb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00420bb9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420bbc: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x420bc1u); f_005e9e20();
    /* 00420bc1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420bc4: mov dword ptr [eax], 0x6b5ed4 */ W32((u32)(r_eax), 0x6b5ed4u);
    /* 00420bca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420bcd: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00420bd4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00420bdb: jmp 0x420be6 */ goto L_00420be6;
L_00420bdd:; BB(0x00420bdd);
    /* 00420bdd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420be0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420be3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00420be6:; BB(0x00420be6);
    /* 00420be6: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420bea: jge 0x420bfc */ if ((fS==fO)) goto L_00420bfc;
L_00420bec:; BB(0x00420bec);
    /* 00420bec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420bef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420bf2: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 00420bfa: jmp 0x420bdd */ goto L_00420bdd;
L_00420bfc:; BB(0x00420bfc);
    /* 00420bfc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00420c03: jmp 0x420c0e */ goto L_00420c0e;
L_00420c05:; BB(0x00420c05);
    /* 00420c05: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420c08: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00420c0b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00420c0e:; BB(0x00420c0e);
    /* 00420c0e: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420c12: jge 0x420c24 */ if ((fS==fO)) goto L_00420c24;
L_00420c14:; BB(0x00420c14);
    /* 00420c14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00420c17: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420c1a: mov dword ptr [ecx + eax*4 + 0x14], 0 */ W32((u32)(r_ecx+r_eax*4+0x14u), 0x0u);
    /* 00420c22: jmp 0x420c05 */ goto L_00420c05;
L_00420c24:; BB(0x00420c24);
    /* 00420c24: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420c27: mov dword ptr [edx + 0x44], 0 */ W32((u32)(r_edx+0x44u), 0x0u);
    /* 00420c2e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00420c31: mov esp, ebp */ r_esp = r_ebp;
    /* 00420c33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420c34: ret  */ FN_RET(0x00420bb0); r_esp += 4; return;
}

void f_00420c40(void) /* CaribbeanStudJackpotDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00420c40);
    /* 00420c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00420c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00420c43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00420c45: push 0x69e0f8 */ { u32 v = 0x69e0f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00420c4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00420c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420c51: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00420c54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00420c59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00420c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00420c5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00420c5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00420c65: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00420c68: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00420c6b: mov dword ptr [eax], 0x6b5ed4 */ W32((u32)(r_eax), 0x6b5ed4u);
    /* 00420c71: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00420c78: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00420c7b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00420c7e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00420c81: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00420c84: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00420c87: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420c8b: je 0x420ca0 */ if (fZ) goto L_00420ca0;
L_00420c8d:; BB(0x00420c8d);
    /* 00420c8d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420c8f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00420c92: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00420c94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00420c97: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00420c99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420c9bu); call_ind(t); }
    /* 00420c9b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00420c9e: jmp 0x420ca7 */ goto L_00420ca7;
L_00420ca0:; BB(0x00420ca0);
    /* 00420ca0: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00420ca7:; BB(0x00420ca7);
    /* 00420ca7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00420cae: jmp 0x420cb9 */ goto L_00420cb9;
L_00420cb0:; BB(0x00420cb0);
    /* 00420cb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00420cb3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00420cb6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00420cb9:; BB(0x00420cb9);
    /* 00420cb9: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420cbd: jge 0x420cf4 */ if ((fS==fO)) goto L_00420cf4;
L_00420cbf:; BB(0x00420cbf);
    /* 00420cbf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00420cc2: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00420cc5: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00420cc9: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00420ccc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00420ccf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00420cd2: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420cd6: je 0x420ceb */ if (fZ) goto L_00420ceb;
L_00420cd8:; BB(0x00420cd8);
    /* 00420cd8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420cda: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420cdd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00420cdf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00420ce2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00420ce4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420ce6u); call_ind(t); }
    /* 00420ce6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00420ce9: jmp 0x420cf2 */ goto L_00420cf2;
L_00420ceb:; BB(0x00420ceb);
    /* 00420ceb: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00420cf2:; BB(0x00420cf2);
    /* 00420cf2: jmp 0x420cb0 */ goto L_00420cb0;
L_00420cf4:; BB(0x00420cf4);
    /* 00420cf4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00420cfb: jmp 0x420d06 */ goto L_00420d06;
L_00420cfd:; BB(0x00420cfd);
    /* 00420cfd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00420d00: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00420d03: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00420d06:; BB(0x00420d06);
    /* 00420d06: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00420d0a: jge 0x420d41 */ if ((fS==fO)) goto L_00420d41;
L_00420d0c:; BB(0x00420d0c);
    /* 00420d0c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00420d0f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00420d12: mov ecx, dword ptr [eax + edx*4 + 0x14] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x14u));
    /* 00420d16: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00420d19: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00420d1c: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00420d1f: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420d23: je 0x420d38 */ if (fZ) goto L_00420d38;
L_00420d25:; BB(0x00420d25);
    /* 00420d25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420d27: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00420d2a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00420d2c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00420d2f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00420d31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420d33u); call_ind(t); }
    /* 00420d33: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00420d36: jmp 0x420d3f */ goto L_00420d3f;
L_00420d38:; BB(0x00420d38);
    /* 00420d38: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00420d3f:; BB(0x00420d3f);
    /* 00420d3f: jmp 0x420cfd */ goto L_00420cfd;
L_00420d41:; BB(0x00420d41);
    /* 00420d41: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00420d44: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 00420d47: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00420d4a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00420d4d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00420d50: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00420d54: je 0x420d69 */ if (fZ) goto L_00420d69;
L_00420d56:; BB(0x00420d56);
    /* 00420d56: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00420d58: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00420d5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00420d5d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00420d60: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00420d62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x420d64u); call_ind(t); }
    /* 00420d64: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00420d67: jmp 0x420d70 */ goto L_00420d70;
L_00420d69:; BB(0x00420d69);
    /* 00420d69: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00420d70:; BB(0x00420d70);
    /* 00420d70: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00420d77: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00420d7a: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x420d7fu); f_005e9e40();
    /* 00420d7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00420d82: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00420d89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00420d8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00420d8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00420d8d: ret  */ FN_RET(0x00420c40); r_esp += 4; return;
}

