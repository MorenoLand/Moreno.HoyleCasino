#include "protos.h"

void f_00679aa0(void) /* sub_679AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00679aa0);
    /* 00679aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00679aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00679aa3: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00679aa9: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 00679aaf: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679ab5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679ab7: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679abd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00679ac0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679ac2u); call_ind(t); }
    /* 00679ac2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679ac4: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679aca: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x679acfu); f_005f5d50();
    /* 00679acf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00679ad1: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679ad7: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x679adcu); f_005f5df0();
    /* 00679adc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00679ae2: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x679ae7u); f_00637670();
    /* 00679ae7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00679aea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679aec: je 0x679b15 */ if (fZ) goto L_00679b15;
L_00679aee:; BB(0x00679aee);
    /* 00679aee: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679af4: cmp dword ptr [edx + 0x2a4], -1 */ {  u32 a = R32((u32)(r_edx+0x2a4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679afb: je 0x679b15 */ if (fZ) goto L_00679b15;
L_00679afd:; BB(0x00679afd);
    /* 00679afd: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679b03: mov ecx, dword ptr [eax + 0x2a4] */ r_ecx = R32((u32)(r_eax+0x2a4u));
    /* 00679b09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00679b0a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00679b10: call 0x5f47a0 */ r_esp -= 4; W32(r_esp, 0x679b15u); f_005f47a0();
L_00679b15:; BB(0x00679b15);
    /* 00679b15: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679b1b: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00679b21: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00679b24: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00679b27: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00679b2a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679b2e: je 0x679b46 */ if (fZ) goto L_00679b46;
L_00679b30:; BB(0x00679b30);
    /* 00679b30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679b32: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00679b35: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679b37: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00679b3a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679b3c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x679b3eu); call_ind(t); }
    /* 00679b3e: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00679b44: jmp 0x679b50 */ goto L_00679b50;
L_00679b46:; BB(0x00679b46);
    /* 00679b46: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_00679b50:; BB(0x00679b50);
    /* 00679b50: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679b56: mov dword ptr [eax + 0x194], 0 */ W32((u32)(r_eax+0x194u), 0x0u);
    /* 00679b60: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679b67: jmp 0x679b72 */ goto L_00679b72;
L_00679b69:; BB(0x00679b69);
    /* 00679b69: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679b6c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00679b6f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00679b72:; BB(0x00679b72);
    /* 00679b72: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00679b76: jge 0x679c27 */ if ((fS==fO)) goto L_00679c27;
L_00679b7c:; BB(0x00679b7c);
    /* 00679b7c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679b7f: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679b85: mov ecx, dword ptr [eax + edx*4 + 0x198] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x198u));
    /* 00679b8c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00679b8f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00679b92: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00679b95: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679b99: je 0x679bb1 */ if (fZ) goto L_00679bb1;
L_00679b9b:; BB(0x00679b9b);
    /* 00679b9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679b9d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00679ba0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679ba2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00679ba5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679ba7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679ba9u); call_ind(t); }
    /* 00679ba9: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00679baf: jmp 0x679bbb */ goto L_00679bbb;
L_00679bb1:; BB(0x00679bb1);
    /* 00679bb1: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_00679bbb:; BB(0x00679bbb);
    /* 00679bbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679bbe: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679bc4: mov dword ptr [edx + ecx*4 + 0x198], 0 */ W32((u32)(r_edx+r_ecx*4+0x198u), 0x0u);
    /* 00679bcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679bd2: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679bd8: mov edx, dword ptr [ecx + eax*4 + 0x1c8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 00679bdf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00679be2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00679be5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00679be8: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679bec: je 0x679c04 */ if (fZ) goto L_00679c04;
L_00679bee:; BB(0x00679bee);
    /* 00679bee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679bf0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679bf3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00679bf5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00679bf8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679bfa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679bfcu); call_ind(t); }
    /* 00679bfc: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00679c02: jmp 0x679c0e */ goto L_00679c0e;
L_00679c04:; BB(0x00679c04);
    /* 00679c04: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_00679c0e:; BB(0x00679c0e);
    /* 00679c0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679c11: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679c17: mov dword ptr [edx + ecx*4 + 0x1c8], 0 */ W32((u32)(r_edx+r_ecx*4+0x1c8u), 0x0u);
    /* 00679c22: jmp 0x679b69 */ goto L_00679b69;
L_00679c27:; BB(0x00679c27);
    /* 00679c27: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679c2e: jmp 0x679c39 */ goto L_00679c39;
L_00679c30:; BB(0x00679c30);
    /* 00679c30: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679c33: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00679c36: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00679c39:; BB(0x00679c39);
    /* 00679c39: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00679c3d: jge 0x679ca7 */ if ((fS==fO)) goto L_00679ca7;
L_00679c3f:; BB(0x00679c3f);
    /* 00679c3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679c42: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679c48: cmp dword ptr [edx + ecx*4 + 0x1f8], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679c50: je 0x679ca5 */ if (fZ) goto L_00679ca5;
L_00679c52:; BB(0x00679c52);
    /* 00679c52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679c55: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679c5b: mov edx, dword ptr [ecx + eax*4 + 0x1f8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1f8u));
    /* 00679c62: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00679c65: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00679c68: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00679c6b: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679c6f: je 0x679c87 */ if (fZ) goto L_00679c87;
L_00679c71:; BB(0x00679c71);
    /* 00679c71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679c73: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679c76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00679c78: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00679c7b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679c7d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679c7fu); call_ind(t); }
    /* 00679c7f: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00679c85: jmp 0x679c91 */ goto L_00679c91;
L_00679c87:; BB(0x00679c87);
    /* 00679c87: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_00679c91:; BB(0x00679c91);
    /* 00679c91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679c94: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679c9a: mov dword ptr [edx + ecx*4 + 0x1f8], 0 */ W32((u32)(r_edx+r_ecx*4+0x1f8u), 0x0u);
L_00679ca5:; BB(0x00679ca5);
    /* 00679ca5: jmp 0x679c30 */ goto L_00679c30;
L_00679ca7:; BB(0x00679ca7);
    /* 00679ca7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679cae: jmp 0x679cb9 */ goto L_00679cb9;
L_00679cb0:; BB(0x00679cb0);
    /* 00679cb0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679cb3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00679cb6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00679cb9:; BB(0x00679cb9);
    /* 00679cb9: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00679cbd: jge 0x679dfa */ if ((fS==fO)) goto L_00679dfa;
L_00679cc3:; BB(0x00679cc3);
    /* 00679cc3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679cc6: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679ccc: cmp dword ptr [edx + ecx*4 + 0x20c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x20cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679cd4: je 0x679d29 */ if (fZ) goto L_00679d29;
L_00679cd6:; BB(0x00679cd6);
    /* 00679cd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679cd9: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679cdf: mov edx, dword ptr [ecx + eax*4 + 0x20c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x20cu));
    /* 00679ce6: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00679ce9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00679cec: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00679cef: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679cf3: je 0x679d0b */ if (fZ) goto L_00679d0b;
L_00679cf5:; BB(0x00679cf5);
    /* 00679cf5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679cf7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00679cfa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00679cfc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00679cff: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679d01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679d03u); call_ind(t); }
    /* 00679d03: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00679d09: jmp 0x679d15 */ goto L_00679d15;
L_00679d0b:; BB(0x00679d0b);
    /* 00679d0b: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_00679d15:; BB(0x00679d15);
    /* 00679d15: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679d18: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679d1e: mov dword ptr [edx + ecx*4 + 0x20c], 0 */ W32((u32)(r_edx+r_ecx*4+0x20cu), 0x0u);
L_00679d29:; BB(0x00679d29);
    /* 00679d29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679d2c: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679d32: cmp dword ptr [ecx + eax*4 + 0x21c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x21cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679d3a: je 0x679d8f */ if (fZ) goto L_00679d8f;
L_00679d3c:; BB(0x00679d3c);
    /* 00679d3c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679d3f: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679d45: mov ecx, dword ptr [eax + edx*4 + 0x21c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 00679d4c: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00679d4f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00679d52: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00679d55: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679d59: je 0x679d71 */ if (fZ) goto L_00679d71;
L_00679d5b:; BB(0x00679d5b);
    /* 00679d5b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679d5d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00679d60: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679d62: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00679d65: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679d67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679d69u); call_ind(t); }
    /* 00679d69: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00679d6f: jmp 0x679d7b */ goto L_00679d7b;
L_00679d71:; BB(0x00679d71);
    /* 00679d71: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_00679d7b:; BB(0x00679d7b);
    /* 00679d7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679d7e: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679d84: mov dword ptr [edx + ecx*4 + 0x21c], 0 */ W32((u32)(r_edx+r_ecx*4+0x21cu), 0x0u);
L_00679d8f:; BB(0x00679d8f);
    /* 00679d8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679d92: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679d98: cmp dword ptr [ecx + eax*4 + 0x25c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x25cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679da0: je 0x679df5 */ if (fZ) goto L_00679df5;
L_00679da2:; BB(0x00679da2);
    /* 00679da2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679da5: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679dab: mov ecx, dword ptr [eax + edx*4 + 0x25c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x25cu));
    /* 00679db2: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00679db5: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00679db8: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00679dbb: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679dbf: je 0x679dd7 */ if (fZ) goto L_00679dd7;
L_00679dc1:; BB(0x00679dc1);
    /* 00679dc1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679dc3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679dc6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679dc8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00679dcb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679dcd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679dcfu); call_ind(t); }
    /* 00679dcf: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00679dd5: jmp 0x679de1 */ goto L_00679de1;
L_00679dd7:; BB(0x00679dd7);
    /* 00679dd7: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_00679de1:; BB(0x00679de1);
    /* 00679de1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679de4: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679dea: mov dword ptr [edx + ecx*4 + 0x25c], 0 */ W32((u32)(r_edx+r_ecx*4+0x25cu), 0x0u);
L_00679df5:; BB(0x00679df5);
    /* 00679df5: jmp 0x679cb0 */ goto L_00679cb0;
L_00679dfa:; BB(0x00679dfa);
    /* 00679dfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679e01: jmp 0x679e0c */ goto L_00679e0c;
L_00679e03:; BB(0x00679e03);
    /* 00679e03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679e06: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00679e09: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00679e0c:; BB(0x00679e0c);
    /* 00679e0c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00679e10: jge 0x679e67 */ if ((fS==fO)) goto L_00679e67;
L_00679e12:; BB(0x00679e12);
    /* 00679e12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679e15: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679e1b: mov eax, dword ptr [edx + ecx*4 + 0x248] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x248u));
    /* 00679e22: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00679e25: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00679e28: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00679e2b: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679e2f: je 0x679e47 */ if (fZ) goto L_00679e47;
L_00679e31:; BB(0x00679e31);
    /* 00679e31: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679e33: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00679e36: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679e38: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00679e3b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679e3d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x679e3fu); call_ind(t); }
    /* 00679e3f: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00679e45: jmp 0x679e51 */ goto L_00679e51;
L_00679e47:; BB(0x00679e47);
    /* 00679e47: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_00679e51:; BB(0x00679e51);
    /* 00679e51: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679e54: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679e5a: mov dword ptr [ecx + eax*4 + 0x248], 0 */ W32((u32)(r_ecx+r_eax*4+0x248u), 0x0u);
    /* 00679e65: jmp 0x679e03 */ goto L_00679e03;
L_00679e67:; BB(0x00679e67);
    /* 00679e67: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679e6d: mov eax, dword ptr [edx + 0x22c] */ r_eax = R32((u32)(r_edx+0x22cu));
    /* 00679e73: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00679e76: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00679e79: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00679e7c: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679e80: je 0x679e98 */ if (fZ) goto L_00679e98;
L_00679e82:; BB(0x00679e82);
    /* 00679e82: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679e84: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00679e87: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679e89: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00679e8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679e8e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x679e90u); call_ind(t); }
    /* 00679e90: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00679e96: jmp 0x679ea2 */ goto L_00679ea2;
L_00679e98:; BB(0x00679e98);
    /* 00679e98: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_00679ea2:; BB(0x00679ea2);
    /* 00679ea2: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679ea8: mov dword ptr [eax + 0x22c], 0 */ W32((u32)(r_eax+0x22cu), 0x0u);
    /* 00679eb2: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679eb8: mov edx, dword ptr [ecx + 0x230] */ r_edx = R32((u32)(r_ecx+0x230u));
    /* 00679ebe: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00679ec1: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00679ec4: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00679ec7: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679ecb: je 0x679ee3 */ if (fZ) goto L_00679ee3;
L_00679ecd:; BB(0x00679ecd);
    /* 00679ecd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679ecf: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00679ed2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00679ed4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00679ed7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679ed9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679edbu); call_ind(t); }
    /* 00679edb: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00679ee1: jmp 0x679eed */ goto L_00679eed;
L_00679ee3:; BB(0x00679ee3);
    /* 00679ee3: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_00679eed:; BB(0x00679eed);
    /* 00679eed: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679ef3: mov dword ptr [ecx + 0x230], 0 */ W32((u32)(r_ecx+0x230u), 0x0u);
    /* 00679efd: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679f03: mov eax, dword ptr [edx + 0x240] */ r_eax = R32((u32)(r_edx+0x240u));
    /* 00679f09: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00679f0c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00679f0f: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00679f12: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679f16: je 0x679f2e */ if (fZ) goto L_00679f2e;
L_00679f18:; BB(0x00679f18);
    /* 00679f18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679f1a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00679f1d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679f1f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00679f22: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679f24: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x679f26u); call_ind(t); }
    /* 00679f26: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00679f2c: jmp 0x679f38 */ goto L_00679f38;
L_00679f2e:; BB(0x00679f2e);
    /* 00679f2e: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_00679f38:; BB(0x00679f38);
    /* 00679f38: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679f3e: mov dword ptr [eax + 0x240], 0 */ W32((u32)(r_eax+0x240u), 0x0u);
    /* 00679f48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00679f4f: jmp 0x679f5a */ goto L_00679f5a;
L_00679f51:; BB(0x00679f51);
    /* 00679f51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679f54: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00679f57: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00679f5a:; BB(0x00679f5a);
    /* 00679f5a: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00679f5e: jge 0x679fb5 */ if ((fS==fO)) goto L_00679fb5;
L_00679f60:; BB(0x00679f60);
    /* 00679f60: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679f63: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679f69: mov ecx, dword ptr [eax + edx*4 + 0x234] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x234u));
    /* 00679f70: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 00679f73: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00679f76: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00679f79: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679f7d: je 0x679f95 */ if (fZ) goto L_00679f95;
L_00679f7f:; BB(0x00679f7f);
    /* 00679f7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679f81: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00679f84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679f86: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00679f89: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679f8b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679f8du); call_ind(t); }
    /* 00679f8d: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00679f93: jmp 0x679f9f */ goto L_00679f9f;
L_00679f95:; BB(0x00679f95);
    /* 00679f95: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_00679f9f:; BB(0x00679f9f);
    /* 00679f9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00679fa2: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679fa8: mov dword ptr [edx + ecx*4 + 0x234], 0 */ W32((u32)(r_edx+r_ecx*4+0x234u), 0x0u);
    /* 00679fb3: jmp 0x679f51 */ goto L_00679f51;
L_00679fb5:; BB(0x00679fb5);
    /* 00679fb5: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679fbb: mov ecx, dword ptr [eax + 0x244] */ r_ecx = R32((u32)(r_eax+0x244u));
    /* 00679fc1: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00679fc4: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00679fc7: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00679fca: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679fce: je 0x679fe6 */ if (fZ) goto L_00679fe6;
L_00679fd0:; BB(0x00679fd0);
    /* 00679fd0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679fd2: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00679fd5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679fd7: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00679fda: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679fdc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679fdeu); call_ind(t); }
    /* 00679fde: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00679fe4: jmp 0x679ff0 */ goto L_00679ff0;
L_00679fe6:; BB(0x00679fe6);
    /* 00679fe6: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_00679ff0:; BB(0x00679ff0);
    /* 00679ff0: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00679ff6: mov dword ptr [ecx + 0x244], 0 */ W32((u32)(r_ecx+0x244u), 0x0u);
    /* 0067a000: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a006: mov eax, dword ptr [edx + 0x26c] */ r_eax = R32((u32)(r_edx+0x26cu));
    /* 0067a00c: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0067a00f: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0067a012: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0067a015: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a019: je 0x67a031 */ if (fZ) goto L_0067a031;
L_0067a01b:; BB(0x0067a01b);
    /* 0067a01b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a01d: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 0067a020: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a022: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0067a025: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067a027: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67a029u); call_ind(t); }
    /* 0067a029: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0067a02f: jmp 0x67a03b */ goto L_0067a03b;
L_0067a031:; BB(0x0067a031);
    /* 0067a031: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_0067a03b:; BB(0x0067a03b);
    /* 0067a03b: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a041: mov dword ptr [eax + 0x26c], 0 */ W32((u32)(r_eax+0x26cu), 0x0u);
    /* 0067a04b: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a051: mov edx, dword ptr [ecx + 0x270] */ r_edx = R32((u32)(r_ecx+0x270u));
    /* 0067a057: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0067a05a: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067a05d: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0067a060: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a064: je 0x67a07c */ if (fZ) goto L_0067a07c;
L_0067a066:; BB(0x0067a066);
    /* 0067a066: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a068: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0067a06b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a06d: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0067a070: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a072: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a074u); call_ind(t); }
    /* 0067a074: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0067a07a: jmp 0x67a086 */ goto L_0067a086;
L_0067a07c:; BB(0x0067a07c);
    /* 0067a07c: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_0067a086:; BB(0x0067a086);
    /* 0067a086: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a08c: mov dword ptr [ecx + 0x270], 0 */ W32((u32)(r_ecx+0x270u), 0x0u);
    /* 0067a096: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a09d: jmp 0x67a0a8 */ goto L_0067a0a8;
L_0067a09f:; BB(0x0067a09f);
    /* 0067a09f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067a0a2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067a0a5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0067a0a8:; BB(0x0067a0a8);
    /* 0067a0a8: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067a0ac: jge 0x67a109 */ if ((fS==fO)) goto L_0067a109;
L_0067a0ae:; BB(0x0067a0ae);
    /* 0067a0ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067a0b1: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a0b7: mov edx, dword ptr [ecx + eax*4 + 0x274] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x274u));
    /* 0067a0be: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0067a0c4: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0067a0ca: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0067a0cd: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a0d1: je 0x67a0e9 */ if (fZ) goto L_0067a0e9;
L_0067a0d3:; BB(0x0067a0d3);
    /* 0067a0d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a0d5: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0067a0d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a0da: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0067a0dd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a0df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a0e1u); call_ind(t); }
    /* 0067a0e1: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0067a0e7: jmp 0x67a0f3 */ goto L_0067a0f3;
L_0067a0e9:; BB(0x0067a0e9);
    /* 0067a0e9: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_0067a0f3:; BB(0x0067a0f3);
    /* 0067a0f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067a0f6: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a0fc: mov dword ptr [edx + ecx*4 + 0x274], 0 */ W32((u32)(r_edx+r_ecx*4+0x274u), 0x0u);
    /* 0067a107: jmp 0x67a09f */ goto L_0067a09f;
L_0067a109:; BB(0x0067a109);
    /* 0067a109: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067a110: jmp 0x67a11b */ goto L_0067a11b;
L_0067a112:; BB(0x0067a112);
    /* 0067a112: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067a115: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067a118: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0067a11b:; BB(0x0067a11b);
    /* 0067a11b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067a11f: jge 0x67a1f4 */ if ((fS==fO)) goto L_0067a1f4;
L_0067a125:; BB(0x0067a125);
    /* 0067a125: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067a128: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a12e: mov eax, dword ptr [edx + ecx*4 + 0x280] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x280u));
    /* 0067a135: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0067a13b: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0067a141: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0067a147: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a14e: je 0x67a16c */ if (fZ) goto L_0067a16c;
L_0067a150:; BB(0x0067a150);
    /* 0067a150: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a152: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0067a158: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a15a: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0067a160: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067a162: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67a164u); call_ind(t); }
    /* 0067a164: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0067a16a: jmp 0x67a176 */ goto L_0067a176;
L_0067a16c:; BB(0x0067a16c);
    /* 0067a16c: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0067a176:; BB(0x0067a176);
    /* 0067a176: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067a179: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a17f: mov dword ptr [ecx + eax*4 + 0x280], 0 */ W32((u32)(r_ecx+r_eax*4+0x280u), 0x0u);
    /* 0067a18a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067a18d: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a193: mov ecx, dword ptr [eax + edx*4 + 0x288] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x288u));
    /* 0067a19a: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 0067a1a0: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0067a1a6: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0067a1ac: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a1b3: je 0x67a1d1 */ if (fZ) goto L_0067a1d1;
L_0067a1b5:; BB(0x0067a1b5);
    /* 0067a1b5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a1b7: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0067a1bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067a1bf: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0067a1c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a1c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a1c9u); call_ind(t); }
    /* 0067a1c9: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0067a1cf: jmp 0x67a1db */ goto L_0067a1db;
L_0067a1d1:; BB(0x0067a1d1);
    /* 0067a1d1: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_0067a1db:; BB(0x0067a1db);
    /* 0067a1db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067a1de: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a1e4: mov dword ptr [edx + ecx*4 + 0x288], 0 */ W32((u32)(r_edx+r_ecx*4+0x288u), 0x0u);
    /* 0067a1ef: jmp 0x67a112 */ goto L_0067a112;
L_0067a1f4:; BB(0x0067a1f4);
    /* 0067a1f4: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a1fa: mov ecx, dword ptr [eax + 0x290] */ r_ecx = R32((u32)(r_eax+0x290u));
    /* 0067a200: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0067a206: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0067a20c: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0067a212: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a219: je 0x67a237 */ if (fZ) goto L_0067a237;
L_0067a21b:; BB(0x0067a21b);
    /* 0067a21b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a21d: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0067a223: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067a225: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0067a22b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a22d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a22fu); call_ind(t); }
    /* 0067a22f: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0067a235: jmp 0x67a241 */ goto L_0067a241;
L_0067a237:; BB(0x0067a237);
    /* 0067a237: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_0067a241:; BB(0x0067a241);
    /* 0067a241: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a247: mov dword ptr [ecx + 0x290], 0 */ W32((u32)(r_ecx+0x290u), 0x0u);
    /* 0067a251: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a257: mov eax, dword ptr [edx + 0x294] */ r_eax = R32((u32)(r_edx+0x294u));
    /* 0067a25d: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0067a263: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0067a269: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 0067a26f: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a276: je 0x67a294 */ if (fZ) goto L_0067a294;
L_0067a278:; BB(0x0067a278);
    /* 0067a278: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a27a: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0067a280: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a282: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0067a288: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067a28a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67a28cu); call_ind(t); }
    /* 0067a28c: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 0067a292: jmp 0x67a29e */ goto L_0067a29e;
L_0067a294:; BB(0x0067a294);
    /* 0067a294: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_0067a29e:; BB(0x0067a29e);
    /* 0067a29e: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a2a4: mov dword ptr [eax + 0x294], 0 */ W32((u32)(r_eax+0x294u), 0x0u);
    /* 0067a2ae: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a2b4: mov edx, dword ptr [ecx + 0x298] */ r_edx = R32((u32)(r_ecx+0x298u));
    /* 0067a2ba: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0067a2c0: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0067a2c6: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0067a2cc: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a2d3: je 0x67a2f1 */ if (fZ) goto L_0067a2f1;
L_0067a2d5:; BB(0x0067a2d5);
    /* 0067a2d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a2d7: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0067a2dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a2df: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0067a2e5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067a2e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a2e9u); call_ind(t); }
    /* 0067a2e9: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 0067a2ef: jmp 0x67a2fb */ goto L_0067a2fb;
L_0067a2f1:; BB(0x0067a2f1);
    /* 0067a2f1: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_0067a2fb:; BB(0x0067a2fb);
    /* 0067a2fb: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a301: mov dword ptr [ecx + 0x298], 0 */ W32((u32)(r_ecx+0x298u), 0x0u);
    /* 0067a30b: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a311: cmp dword ptr [edx + 0x190], 0 */ {  u32 a = R32((u32)(r_edx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067a318: je 0x67a33d */ if (fZ) goto L_0067a33d;
L_0067a31a:; BB(0x0067a31a);
    /* 0067a31a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067a31c: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a322: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0067a328: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a32e: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0067a334: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067a336: mov ecx, eax */ r_ecx = r_eax;
    /* 0067a338: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0067a33b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67a33du); call_ind(t); }
L_0067a33d:; BB(0x0067a33d);
    /* 0067a33d: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a343: mov dword ptr [ecx + 0x190], 0 */ W32((u32)(r_ecx+0x190u), 0x0u);
    /* 0067a34d: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0067a353: mov byte ptr [edx + 0x2ac], 0 */ W8((u32)(r_edx+0x2acu), 0x0u);
    /* 0067a35a: mov esp, ebp */ r_esp = r_ebp;
    /* 0067a35c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067a35d: ret 4 */ FN_RET(0x00679aa0); r_esp += 8; return;
}

