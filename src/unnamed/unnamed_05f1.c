#include "protos.h"

void f_005f1ad0(void) /* sub_5F1AD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f1ad0);
    /* 005f1ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1ad3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1ad6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f1ad9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f1adc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f1adf: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 005f1ae2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ae4: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1aea: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1aed: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f1af2u); f_0060ca40();
    /* 005f1af2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f1af5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1af9: je 0x5f1b09 */ if (fZ) goto L_005f1b09;
L_005f1afb:; BB(0x005f1afb);
    /* 005f1afb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1afd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f1b00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1b04: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x5f1b09u); f_005f83d0();
L_005f1b09:; BB(0x005f1b09);
    /* 005f1b09: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1b0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1b0c: ret 4 */ FN_RET(0x005f1ad0); r_esp += 8; return;
}

void f_005f1b10(void) /* sub_5F1B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f1b10);
    /* 005f1b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1b13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1b16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f1b19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b1b: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1b21: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1b24: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f1b29u); f_0060ca40();
    /* 005f1b29: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f1b2c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1b30: je 0x5f1b46 */ if (fZ) goto L_005f1b46;
L_005f1b32:; BB(0x005f1b32);
    /* 005f1b32: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005f1b35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b36: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005f1b39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b3a: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005f1b3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1b41: call 0x5f8a40 */ r_esp -= 4; W32(r_esp, 0x5f1b46u); f_005f8a40();
L_005f1b46:; BB(0x005f1b46);
    /* 005f1b46: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1b48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1b49: ret 0xc */ FN_RET(0x005f1b10); r_esp += 16; return;
}

void f_005f1b70(void) /* sub_5F1B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f1b70);
    /* 005f1b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b71: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1b73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1b76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f1b79: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1b7c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1b80: je 0x5f1bb1 */ if (fZ) goto L_005f1bb1;
L_005f1b82:; BB(0x005f1b82);
    /* 005f1b82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1b85: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005f1b88: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f1b8b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f1b8e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f1b91: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1b95: je 0x5f1baa */ if (fZ) goto L_005f1baa;
L_005f1b97:; BB(0x005f1b97);
    /* 005f1b97: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1b9c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f1b9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1ba1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f1ba3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1ba5u); call_ind(t); }
    /* 005f1ba5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f1ba8: jmp 0x5f1bb1 */ goto L_005f1bb1;
L_005f1baa:; BB(0x005f1baa);
    /* 005f1baa: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005f1bb1:; BB(0x005f1bb1);
    /* 005f1bb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1bb4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f1bb7: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005f1bba: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1bbd: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1bc1: je 0x5f1bd2 */ if (fZ) goto L_005f1bd2;
L_005f1bc3:; BB(0x005f1bc3);
    /* 005f1bc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1bc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1bc7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1bca: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f1bcd: call 0x5fc220 */ r_esp -= 4; W32(r_esp, 0x5f1bd2u); f_005fc220();
L_005f1bd2:; BB(0x005f1bd2);
    /* 005f1bd2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1bd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1bd5: ret 4 */ FN_RET(0x005f1b70); r_esp += 8; return;
}

void f_005f1df0(void) /* sub_5F1DF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f1df0);
    /* 005f1df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1df1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1df3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1df6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f1df9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1e00: jmp 0x5f1e0b */ goto L_005f1e0b;
L_005f1e02:; BB(0x005f1e02);
    /* 005f1e02: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1e05: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f1e08: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f1e0b:; BB(0x005f1e0b);
    /* 005f1e0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f1e0e: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1e11: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f1e16u); f_0060c9a0();
    /* 005f1e16: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f1e19: jge 0x5f1e49 */ if ((fS==fO)) goto L_005f1e49;
L_005f1e1b:; BB(0x005f1e1b);
    /* 005f1e1b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1e1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f1e22: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1e25: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f1e2au); f_0060ca40();
    /* 005f1e2a: mov ecx, eax */ r_ecx = r_eax;
    /* 005f1e2c: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5f1e31u); f_005f5400();
    /* 005f1e31: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1e34: jne 0x5f1e47 */ if (!fZ) goto L_005f1e47;
L_005f1e36:; BB(0x005f1e36);
    /* 005f1e36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f1e39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e3a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f1e3d: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1e40: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f1e45u); f_0060ca40();
    /* 005f1e45: jmp 0x5f1e4b */ goto L_005f1e4b;
L_005f1e47:; BB(0x005f1e47);
    /* 005f1e47: jmp 0x5f1e02 */ goto L_005f1e02;
L_005f1e49:; BB(0x005f1e49);
    /* 005f1e49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f1e4b:; BB(0x005f1e4b);
    /* 005f1e4b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1e4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1e4e: ret 4 */ FN_RET(0x005f1df0); r_esp += 8; return;
}

