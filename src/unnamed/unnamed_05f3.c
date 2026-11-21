#include "protos.h"

void f_005f3100(void) /* sub_5F3100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f3100);
    /* 005f3100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3101: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3103: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3104: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f3107:; BB(0x005f3107);
    /* 005f3107: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f310a: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 005f310e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3110: jne 0x5f3121 */ if (!fZ) goto L_005f3121;
L_005f3112:; BB(0x005f3112);
    /* 005f3112: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3115: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3117: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f311a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005f311d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f311fu); call_ind(t); }
    /* 005f311f: jmp 0x5f3107 */ goto L_005f3107;
L_005f3121:; BB(0x005f3121);
    /* 005f3121: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3123: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3124: ret  */ FN_RET(0x005f3100); r_esp += 4; return;
}

void f_005f38b0(void) /* sub_5F38B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f38b0);
    /* 005f38b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f38b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f38b3: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f38b9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f38be: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f38c0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f38c3: mov dword ptr [ebp - 0x10c], ecx */ W32((u32)(r_ebp+0xfffffef4u), r_ecx);
    /* 005f38c9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f38cd: je 0x5f391f */ if (fZ) goto L_005f391f;
L_005f38cf:; BB(0x005f38cf);
    /* 005f38cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f38d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f38d3: push 0x795738 */ { u32 v = 0x795738u; r_esp -= 4; W32(r_esp, v); }
    /* 005f38d8: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005f38de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f38e0: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 005f38e6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005f38e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f38ebu); call_ind(t); }
    /* 005f38eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f38ec: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 005f38f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f38f3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5f38f9u); call_ind(t); }
    /* 005f38f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f38fc: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 005f3902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3903: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f3908: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f390b: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f3911: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005f3914: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f3916: mov ecx, eax */ r_ecx = r_eax;
    /* 005f3918: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f391b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f391du); call_ind(t); }
    /* 005f391d: jmp 0x5f393c */ goto L_005f393c;
L_005f391f:; BB(0x005f391f);
    /* 005f391f: push 0x795738 */ { u32 v = 0x795738u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3924: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005f392a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005f392d: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f3932: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f3935: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005f3937: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f393a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f393cu); call_ind(t); }
L_005f393c:; BB(0x005f393c);
    /* 005f393c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f393f: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f3941: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5f3946u); f_00686d72();
    /* 005f3946: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3948: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3949: ret 4 */ FN_RET(0x005f38b0); r_esp += 8; return;
}

void f_005f3b50(void) /* sub_5F3B50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f3b50);
    /* 005f3b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3b51: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3b53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3b56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f3b59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3b5c: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 005f3b60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3b62: jne 0x5f3b7c */ if (!fZ) goto L_005f3b7c;
L_005f3b64:; BB(0x005f3b64);
    /* 005f3b64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3b67: call 0x5f3bb0 */ r_esp -= 4; W32(r_esp, 0x5f3b6cu); f_005f3bb0();
    /* 005f3b6c: cmp eax, 0x44c */ {  u32 a = r_eax; u32 b = 0x44cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3b71: je 0x5f3b7c */ if (fZ) goto L_005f3b7c;
L_005f3b73:; BB(0x005f3b73);
    /* 005f3b73: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005f3b7a: jmp 0x5f3b83 */ goto L_005f3b83;
L_005f3b7c:; BB(0x005f3b7c);
    /* 005f3b7c: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005f3b83:; BB(0x005f3b83);
    /* 005f3b83: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005f3b86: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3b88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3b89: ret  */ FN_RET(0x005f3b50); r_esp += 4; return;
}

void f_005f3c30(void) /* sub_5F3C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f3c30);
    /* 005f3c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c31: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3c33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f3c37: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3c3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3c3d: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005f3c40: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 005f3c43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3c46: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f3c49: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 005f3c4c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3c4f: mov dword ptr [edx + 0x2c], 0xffffffff */ W32((u32)(r_edx+0x2cu), 0xffffffffu);
    /* 005f3c56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3c59: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005f3c5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3c5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3c60: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3c62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3c65: mov edx, dword ptr [eax + 0x90] */ r_edx = R32((u32)(r_eax+0x90u));
    /* 005f3c6b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3c6du); call_ind(t); }
    /* 005f3c6d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3c6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3c70: ret 4 */ FN_RET(0x005f3c30); r_esp += 8; return;
}

void f_005f3de0(void) /* sub_5F3DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f3de0);
    /* 005f3de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3de1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3de3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3de6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f3de9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3dec: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3df0: je 0x5f3e21 */ if (fZ) goto L_005f3e21;
L_005f3df2:; BB(0x005f3df2);
    /* 005f3df2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3df5: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 005f3df8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f3dfb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f3dfe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f3e01: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3e05: je 0x5f3e1a */ if (fZ) goto L_005f3e1a;
L_005f3e07:; BB(0x005f3e07);
    /* 005f3e07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3e09: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3e0c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f3e0e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3e11: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3e13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f3e15u); call_ind(t); }
    /* 005f3e15: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f3e18: jmp 0x5f3e21 */ goto L_005f3e21;
L_005f3e1a:; BB(0x005f3e1a);
    /* 005f3e1a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005f3e21:; BB(0x005f3e21);
    /* 005f3e21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3e24: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f3e27: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 005f3e2a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3e2d: cmp dword ptr [eax + 0x28], 0 */ {  u32 a = R32((u32)(r_eax+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3e31: je 0x5f3e42 */ if (fZ) goto L_005f3e42;
L_005f3e33:; BB(0x005f3e33);
    /* 005f3e33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3e36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3e37: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f3e3a: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 005f3e3d: call 0x5fc220 */ r_esp -= 4; W32(r_esp, 0x5f3e42u); f_005fc220();
L_005f3e42:; BB(0x005f3e42);
    /* 005f3e42: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3e44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3e45: ret 4 */ FN_RET(0x005f3de0); r_esp += 8; return;
}

void f_005f3e70(void) /* sub_5F3E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f3e70);
    /* 005f3e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3e71: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f3e77: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005f3e7c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005f3e7f: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005f3e85: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005f3e88: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f3e8a: mov ecx, eax */ r_ecx = r_eax;
    /* 005f3e8c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005f3e8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f3e91u); call_ind(t); }
    /* 005f3e91: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3e93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3e94: ret  */ FN_RET(0x005f3e70); r_esp += 4; return;
}

void f_005f3f90(void) /* sub_5F3F90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f3f90);
    /* 005f3f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3f91: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f3f97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3f9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f3f9d: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005f3fa0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3fa3: cmp dword ptr [edx + 0x3c], 0 */ {  u32 a = R32((u32)(r_edx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f3fa7: je 0x5f3fcd */ if (fZ) goto L_005f3fcd;
L_005f3fa9:; BB(0x005f3fa9);
    /* 005f3fa9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3fab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3fae: call 0x5f41c0 */ r_esp -= 4; W32(r_esp, 0x5f3fb3u); f_005f41c0();
    /* 005f3fb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3fb6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f3fb8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3fbb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005f3fbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f3fc0u); call_ind(t); }
    /* 005f3fc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3fc3: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 005f3fc6: call 0x5f8720 */ r_esp -= 4; W32(r_esp, 0x5f3fcbu); f_005f8720();
    /* 005f3fcb: jmp 0x5f3fda */ goto L_005f3fda;
L_005f3fcd:; BB(0x005f3fcd);
    /* 005f3fcd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3fd0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f3fd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3fd5: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005f3fd8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f3fdau); call_ind(t); }
L_005f3fda:; BB(0x005f3fda);
    /* 005f3fda: mov esp, ebp */ r_esp = r_ebp;
    /* 005f3fdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f3fdd: ret 4 */ FN_RET(0x005f3f90); r_esp += 8; return;
}

