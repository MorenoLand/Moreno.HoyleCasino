#include "protos.h"

void f_00534d60(void) /* SlotMachineSugarDaddy::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534d60);
    /* 00534d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00534d63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00534d64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534d67: mov eax, 0x30f08b */ r_eax = 0x30f08bu;
    /* 00534d6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00534d6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534d6f: ret  */ FN_RET(0x00534d60); r_esp += 4; return;
}

void f_00534dd0(void) /* SlotMachineSugarDaddy::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534dd0);
    /* 00534dd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534dd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00534dd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00534dd6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534dd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00534ddc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00534ddf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00534de2: sub ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00534de5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00534de8: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00534dec: ja 0x534e04 */ if ((!fC&&!fZ)) goto L_00534e04;
L_00534dee:; BB(0x00534dee);
    /* 00534dee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00534df1: jmp dword ptr [edx*4 + 0x534e0c] */ { u32 t = R32((u32)(r_edx*4+0x534e0cu)); switch (t) { case 0x534df8u: goto L_00534df8; case 0x534dfdu: goto L_00534dfd; default: UNSUP(0x00534df1, "jump table entry is not a known target"); } }
L_00534df8:; BB(0x00534df8);
    /* 00534df8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00534dfb: jmp 0x534e06 */ goto L_00534e06;
L_00534dfd:; BB(0x00534dfd);
    /* 00534dfd: mov eax, 1 */ r_eax = 0x1u;
    /* 00534e02: jmp 0x534e06 */ goto L_00534e06;
L_00534e04:; BB(0x00534e04);
    /* 00534e04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00534e06:; BB(0x00534e06);
    /* 00534e06: mov esp, ebp */ r_esp = r_ebp;
    /* 00534e08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534e09: ret 4 */ FN_RET(0x00534dd0); r_esp += 8; return;
}

void f_00534e30(void) /* SlotMachineSugarDaddy::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534e30);
    /* 00534e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00534e33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00534e36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534e39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00534e3c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00534e3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00534e42: sub ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00534e45: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00534e48: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00534e4c: ja 0x534e6d */ if ((!fC&&!fZ)) goto L_00534e6d;
L_00534e4e:; BB(0x00534e4e);
    /* 00534e4e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00534e51: jmp dword ptr [edx*4 + 0x534e78] */ { u32 t = R32((u32)(r_edx*4+0x534e78u)); switch (t) { case 0x534e58u: goto L_00534e58; case 0x534e5fu: goto L_00534e5f; case 0x534e66u: goto L_00534e66; default: UNSUP(0x00534e51, "jump table entry is not a known target"); } }
L_00534e58:; BB(0x00534e58);
    /* 00534e58: mov eax, 4 */ r_eax = 0x4u;
    /* 00534e5d: jmp 0x534e70 */ goto L_00534e70;
L_00534e5f:; BB(0x00534e5f);
    /* 00534e5f: mov eax, 3 */ r_eax = 0x3u;
    /* 00534e64: jmp 0x534e70 */ goto L_00534e70;
L_00534e66:; BB(0x00534e66);
    /* 00534e66: mov eax, 2 */ r_eax = 0x2u;
    /* 00534e6b: jmp 0x534e70 */ goto L_00534e70;
L_00534e6d:; BB(0x00534e6d);
    /* 00534e6d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00534e70:; BB(0x00534e70);
    /* 00534e70: mov esp, ebp */ r_esp = r_ebp;
    /* 00534e72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534e73: ret 4 */ FN_RET(0x00534e30); r_esp += 8; return;
}

void f_00539330(void) /* SlotMachineSugarDaddy::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539330);
    /* 00539330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539331: mov ebp, esp */ r_ebp = r_esp;
    /* 00539333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539337: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053933a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0053933d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539340: mov eax, dword ptr [eax + ecx*4 + 0x733678] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x733678u));
    /* 00539347: mov esp, ebp */ r_esp = r_ebp;
    /* 00539349: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053934a: ret 8 */ FN_RET(0x00539330); r_esp += 12; return;
}

void f_00539350(void) /* SlotMachineSugarDaddy::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539350);
    /* 00539350: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539351: mov ebp, esp */ r_ebp = r_esp;
    /* 00539353: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539357: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053935a: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053935d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00539360: mov eax, dword ptr [eax + ecx*4 + 0x733570] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x733570u));
    /* 00539367: mov esp, ebp */ r_esp = r_ebp;
    /* 00539369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053936a: ret 8 */ FN_RET(0x00539350); r_esp += 12; return;
}

void f_00539370(void) /* SlotMachineSugarDaddy::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539370);
    /* 00539370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539371: mov ebp, esp */ r_ebp = r_esp;
    /* 00539373: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539374: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539377: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053937a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053937d: mov eax, dword ptr [eax + 0x7331f8] */ r_eax = R32((u32)(r_eax+0x7331f8u));
    /* 00539383: mov esp, ebp */ r_esp = r_ebp;
    /* 00539385: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539386: ret 4 */ FN_RET(0x00539370); r_esp += 8; return;
}

void f_00539390(void) /* SlotMachineSugarDaddy::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539390);
    /* 00539390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539391: mov ebp, esp */ r_ebp = r_esp;
    /* 00539393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00539397: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053939a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053939d: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005393a0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005393a3: mov eax, dword ptr [eax + ecx*4 + 0x733180] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x733180u));
    /* 005393aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005393ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005393ad: ret 8 */ FN_RET(0x00539390); r_esp += 12; return;
}

void f_005393b0(void) /* SlotMachineSugarDaddy::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005393b0);
    /* 005393b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005393b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005393b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005393b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005393b7: mov eax, 0x17 */ r_eax = 0x17u;
    /* 005393bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005393be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005393bf: ret  */ FN_RET(0x005393b0); r_esp += 4; return;
}

void f_005393c0(void) /* SlotMachineSugarDaddy::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005393c0);
    /* 005393c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005393c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005393c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005393c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005393c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005393ca: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005393cd: add eax, 0x7331d8 */ {  u32 a = r_eax; u32 b = 0x7331d8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005393d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005393d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005393d5: ret 4 */ FN_RET(0x005393c0); r_esp += 8; return;
}

