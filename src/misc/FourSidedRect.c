#include "protos.h"

void f_005f6c70(void) /* FourSidedRect::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6c70);
    /* 005f6c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c71: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c75: push 0x6a9f98 */ { u32 v = 0x6a9f98u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c81: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6c84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f6c89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f6c8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6c8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f6c8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f6c95: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005f6c98: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6c9b: mov dword ptr [eax], 0x6d6bac */ W32((u32)(r_eax), 0x6d6bacu);
    /* 005f6ca1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f6ca8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005f6caf: jmp 0x5f6cba */ goto L_005f6cba;
L_005f6cb1:; BB(0x005f6cb1);
    /* 005f6cb1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f6cb4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6cb7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005f6cba:; BB(0x005f6cba);
    /* 005f6cba: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f6cbe: jge 0x5f6d10 */ if ((fS==fO)) goto L_005f6d10;
L_005f6cc0:; BB(0x005f6cc0);
    /* 005f6cc0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f6cc3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6cc6: cmp dword ptr [eax + edx*4 + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6ccb: je 0x5f6d0e */ if (fZ) goto L_005f6d0e;
L_005f6ccd:; BB(0x005f6ccd);
    /* 005f6ccd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f6cd0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6cd3: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005f6cd7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f6cda: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f6cdd: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f6ce0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6ce4: je 0x5f6cf9 */ if (fZ) goto L_005f6cf9;
L_005f6ce6:; BB(0x005f6ce6);
    /* 005f6ce6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ce8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f6ceb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f6ced: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f6cf0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f6cf2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f6cf4u); call_ind(t); }
    /* 005f6cf4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f6cf7: jmp 0x5f6d00 */ goto L_005f6d00;
L_005f6cf9:; BB(0x005f6cf9);
    /* 005f6cf9: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005f6d00:; BB(0x005f6d00);
    /* 005f6d00: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f6d03: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6d06: mov dword ptr [ecx + eax*4 + 0x48], 0 */ W32((u32)(r_ecx+r_eax*4+0x48u), 0x0u);
L_005f6d0e:; BB(0x005f6d0e);
    /* 005f6d0e: jmp 0x5f6cb1 */ goto L_005f6cb1;
L_005f6d10:; BB(0x005f6d10);
    /* 005f6d10: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f6d17: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6d1a: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x5f6d1fu); f_005f4ad0();
    /* 005f6d1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6d22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6d29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6d2a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6d2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6d2d: ret  */ FN_RET(0x005f6c70); r_esp += 4; return;
}

void f_005f6d30(void) /* FourSidedRect::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6d30);
    /* 005f6d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d31: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6d33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d35: push 0x6a9fbe */ { u32 v = 0x6a9fbeu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f6d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d41: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6d44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f6d49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f6d4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f6d4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f6d55: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005f6d58: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6d5b: call 0x5f5010 */ r_esp -= 4; W32(r_esp, 0x5f6d60u); f_005f5010();
    /* 005f6d60: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005f6d67: jmp 0x5f6d72 */ goto L_005f6d72;
L_005f6d69:; BB(0x005f6d69);
    /* 005f6d69: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f6d6c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f6d6f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005f6d72:; BB(0x005f6d72);
    /* 005f6d72: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f6d76: jge 0x5f6df3 */ if ((fS==fO)) goto L_005f6df3;
L_005f6d78:; BB(0x005f6d78);
    /* 005f6d78: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6d7a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f6d7fu); f_00686d82();
    /* 005f6d7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f6d82: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f6d85: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f6d8c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6d90: je 0x5f6d9f */ if (fZ) goto L_005f6d9f;
L_005f6d92:; BB(0x005f6d92);
    /* 005f6d92: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f6d95: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x5f6d9au); f_005f6130();
    /* 005f6d9a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f6d9d: jmp 0x5f6da6 */ goto L_005f6da6;
L_005f6d9f:; BB(0x005f6d9f);
    /* 005f6d9f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005f6da6:; BB(0x005f6da6);
    /* 005f6da6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6da9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f6dac: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f6db3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f6db6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6db9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f6dbc: mov dword ptr [eax + edx*4 + 0x48], ecx */ W32((u32)(r_eax+r_edx*4+0x48u), r_ecx);
    /* 005f6dc0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f6dc3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6dc6: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005f6dca: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6dcd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f6dd0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005f6dd3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f6dd6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6dd9: mov eax, dword ptr [edx + ecx*4 + 0x48] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005f6ddd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f6de0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6de3: mov ecx, dword ptr [edx + ecx*4 + 0x48] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x48u));
    /* 005f6de7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005f6de9: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 005f6dec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f6deeu); call_ind(t); }
    /* 005f6dee: jmp 0x5f6d69 */ goto L_005f6d69;
L_005f6df3:; BB(0x005f6df3);
    /* 005f6df3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6df6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6dfd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6dfe: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6e00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6e01: ret  */ FN_RET(0x005f6d30); r_esp += 4; return;
}

void f_005f6e10(void) /* FourSidedRect::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6e10);
    /* 005f6e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e11: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6e17: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f6e1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f6e1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e22: call 0x5f5500 */ r_esp -= 4; W32(r_esp, 0x5f6e27u); f_005f5500();
    /* 005f6e27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e2a: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f6e2fu); f_005f54a0();
    /* 005f6e2f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005f6e32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6e34: je 0x5f6e43 */ if (fZ) goto L_005f6e43;
L_005f6e36:; BB(0x005f6e36);
    /* 005f6e36: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f6e3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e3e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f6e41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6e43u); call_ind(t); }
L_005f6e43:; BB(0x005f6e43);
    /* 005f6e43: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6e45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6e46: ret 8 */ FN_RET(0x005f6e10); r_esp += 12; return;
}

void f_005f6e50(void) /* FourSidedRect::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6e50);
    /* 005f6e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6e53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6e57: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f6e5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f6e5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e62: call 0x5f5110 */ r_esp -= 4; W32(r_esp, 0x5f6e67u); f_005f5110();
    /* 005f6e67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e6a: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5f6e6fu); f_005f5590();
    /* 005f6e6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e73: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5f6e78u); f_005f5550();
    /* 005f6e78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6e79: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e7c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f6e7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e81: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 005f6e84: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f6e86u); call_ind(t); }
    /* 005f6e86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e89: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f6e8eu); f_005f54a0();
    /* 005f6e8e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f6e91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6e93: je 0x5f6ea2 */ if (fZ) goto L_005f6ea2;
L_005f6e95:; BB(0x005f6e95);
    /* 005f6e95: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e98: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f6e9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6e9d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f6ea0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6ea2u); call_ind(t); }
L_005f6ea2:; BB(0x005f6ea2);
    /* 005f6ea2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6ea4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6ea5: ret 8 */ FN_RET(0x005f6e50); r_esp += 12; return;
}

void f_005f6eb0(void) /* FourSidedRect::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6eb0);
    /* 005f6eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6eb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6eb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f6eb9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ebd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6ec0: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x5f6ec5u); f_005f5300();
    /* 005f6ec5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f6ecc: jmp 0x5f6ed7 */ goto L_005f6ed7;
L_005f6ece:; BB(0x005f6ece);
    /* 005f6ece: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6ed1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f6ed7:; BB(0x005f6ed7);
    /* 005f6ed7: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f6edb: jge 0x5f6f10 */ if ((fS==fO)) goto L_005f6f10;
L_005f6edd:; BB(0x005f6edd);
    /* 005f6edd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6ee0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6ee3: cmp dword ptr [eax + edx*4 + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6ee8: je 0x5f6f0e */ if (fZ) goto L_005f6f0e;
L_005f6eea:; BB(0x005f6eea);
    /* 005f6eea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f6eed: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6ef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ef1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6ef4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6ef7: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005f6efb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6efe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f01: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005f6f05: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005f6f07: mov ecx, edx */ r_ecx = r_edx;
    /* 005f6f09: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005f6f0c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f6f0eu); call_ind(t); }
L_005f6f0e:; BB(0x005f6f0e);
    /* 005f6f0e: jmp 0x5f6ece */ goto L_005f6ece;
L_005f6f10:; BB(0x005f6f10);
    /* 005f6f10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f13: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f6f18u); f_005f54a0();
    /* 005f6f18: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f6f1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6f1d: je 0x5f6f2c */ if (fZ) goto L_005f6f2c;
L_005f6f1f:; BB(0x005f6f1f);
    /* 005f6f1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f22: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f6f24: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f27: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005f6f2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6f2cu); call_ind(t); }
L_005f6f2c:; BB(0x005f6f2c);
    /* 005f6f2c: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6f2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6f2f: ret 4 */ FN_RET(0x005f6eb0); r_esp += 8; return;
}

void f_005f6f40(void) /* FourSidedRect::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6f40);
    /* 005f6f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f41: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6f43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6f46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f6f49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f4c: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x5f6f51u); f_005f5440();
    /* 005f6f51: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f54: cmp dword ptr [eax + 0x48], 0 */ {  u32 a = R32((u32)(r_eax+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6f58: je 0x5f70a1 */ if (fZ) goto L_005f70a1;
L_005f6f5e:; BB(0x005f6f5e);
    /* 005f6f5e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f61: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f6f64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f65: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f68: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f6f6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f6c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f6f: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005f6f72: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f75: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 005f6f78: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f6f7a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f6f7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6f7fu); call_ind(t); }
    /* 005f6f7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f85: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005f6f88: sub eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f6f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6f8e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f91: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 005f6f94: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6f97: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 005f6f9a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f6f9c: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005f6f9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6fa1u); call_ind(t); }
    /* 005f6fa1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fa4: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f6fa7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6fa8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fab: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f6fae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6faf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fb2: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f6fb5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fb8: mov ecx, dword ptr [ecx + 0x4c] */ r_ecx = R32((u32)(r_ecx+0x4cu));
    /* 005f6fbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f6fbd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f6fc0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6fc2u); call_ind(t); }
    /* 005f6fc2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f6fc4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fc7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fca: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005f6fcd: sub eax, dword ptr [edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f6fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6fd1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fd4: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 005f6fd7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fda: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 005f6fdd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f6fdf: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005f6fe2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f6fe4u); call_ind(t); }
    /* 005f6fe4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fe7: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005f6fea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6feb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6fee: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f6ff1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ff2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6ff5: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005f6ff8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6ffb: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 005f6ffe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f7000: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f7003: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7005u); call_ind(t); }
    /* 005f7005: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7008: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f700b: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 005f700e: sub eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f7011: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7012: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f7014: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7017: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005f701a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f701d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005f7020: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f7022: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005f7025: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7027u); call_ind(t); }
    /* 005f7027: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f702a: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f702d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f702e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7031: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f7034: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f7035: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7038: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005f703b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f703e: mov ecx, dword ptr [ecx + 0x54] */ r_ecx = R32((u32)(r_ecx+0x54u));
    /* 005f7041: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f7043: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f7046: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7048u); call_ind(t); }
    /* 005f7048: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f704a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f704d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7050: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005f7053: sub eax, dword ptr [edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f7056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f7057: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f705a: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005f705d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7060: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005f7063: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f7065: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005f7068: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f706au); call_ind(t); }
    /* 005f706a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f7071: jmp 0x5f707c */ goto L_005f707c;
L_005f7073:; BB(0x005f7073);
    /* 005f7073: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7076: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f7079: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f707c:; BB(0x005f707c);
    /* 005f707c: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f7080: jge 0x5f70a1 */ if ((fS==fO)) goto L_005f70a1;
L_005f7082:; BB(0x005f7082);
    /* 005f7082: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f7085: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7088: mov ecx, dword ptr [eax + edx*4 + 0x48] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005f708c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f708f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f7092: mov edx, dword ptr [eax + edx*4 + 0x48] */ r_edx = R32((u32)(r_eax+r_edx*4+0x48u));
    /* 005f7096: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005f7098: mov ecx, edx */ r_ecx = r_edx;
    /* 005f709a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005f709d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f709fu); call_ind(t); }
    /* 005f709f: jmp 0x5f7073 */ goto L_005f7073;
L_005f70a1:; BB(0x005f70a1);
    /* 005f70a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005f70a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f70a4: ret  */ FN_RET(0x005f6f40); r_esp += 4; return;
}

void f_005f70b0(void) /* FourSidedRect::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f70b0);
    /* 005f70b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f70b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f70b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f70b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f70b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f70bc: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x5f70c1u); f_005f5420();
    /* 005f70c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f70c8: jmp 0x5f70d3 */ goto L_005f70d3;
L_005f70ca:; BB(0x005f70ca);
    /* 005f70ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f70cd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f70d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f70d3:; BB(0x005f70d3);
    /* 005f70d3: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f70d7: jge 0x5f7103 */ if ((fS==fO)) goto L_005f7103;
L_005f70d9:; BB(0x005f70d9);
    /* 005f70d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f70dc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f70df: cmp dword ptr [edx + ecx*4 + 0x48], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f70e4: je 0x5f7101 */ if (fZ) goto L_005f7101;
L_005f70e6:; BB(0x005f70e6);
    /* 005f70e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f70e9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f70ec: mov edx, dword ptr [ecx + eax*4 + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005f70f0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f70f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f70f6: mov ecx, dword ptr [ecx + eax*4 + 0x48] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x48u));
    /* 005f70fa: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f70fc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005f70ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f7101u); call_ind(t); }
L_005f7101:; BB(0x005f7101);
    /* 005f7101: jmp 0x5f70ca */ goto L_005f70ca;
L_005f7103:; BB(0x005f7103);
    /* 005f7103: mov esp, ebp */ r_esp = r_ebp;
    /* 005f7105: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f7106: ret  */ FN_RET(0x005f70b0); r_esp += 4; return;
}

