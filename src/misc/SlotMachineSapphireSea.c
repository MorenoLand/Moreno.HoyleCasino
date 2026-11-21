#include "protos.h"

void f_00534790(void) /* SlotMachineSapphireSea::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534790);
    /* 00534790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534791: mov ebp, esp */ r_ebp = r_esp;
    /* 00534793: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00534796: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00534799: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053479c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053479f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005347a2: sub ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005347a5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005347a8: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005347ac: ja 0x5347c4 */ if ((!fC&&!fZ)) goto L_005347c4;
L_005347ae:; BB(0x005347ae);
    /* 005347ae: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005347b1: jmp dword ptr [edx*4 + 0x5347cc] */ { u32 t = R32((u32)(r_edx*4+0x5347ccu)); switch (t) { case 0x5347bdu: goto L_005347bd; case 0x5347b8u: goto L_005347b8; default: UNSUP(0x005347b1, "jump table entry is not a known target"); } }
L_005347b8:; BB(0x005347b8);
    /* 005347b8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005347bb: jmp 0x5347c6 */ goto L_005347c6;
L_005347bd:; BB(0x005347bd);
    /* 005347bd: mov eax, 1 */ r_eax = 0x1u;
    /* 005347c2: jmp 0x5347c6 */ goto L_005347c6;
L_005347c4:; BB(0x005347c4);
    /* 005347c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005347c6:; BB(0x005347c6);
    /* 005347c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005347c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005347c9: ret 4 */ FN_RET(0x00534790); r_esp += 8; return;
}

void f_005347f0(void) /* SlotMachineSapphireSea::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005347f0);
    /* 005347f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005347f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005347f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005347f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005347f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005347fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005347ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00534802: sub ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00534805: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00534808: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0053480c: ja 0x53482d */ if ((!fC&&!fZ)) goto L_0053482d;
L_0053480e:; BB(0x0053480e);
    /* 0053480e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00534811: jmp dword ptr [edx*4 + 0x534838] */ { u32 t = R32((u32)(r_edx*4+0x534838u)); switch (t) { case 0x534826u: goto L_00534826; case 0x53481fu: goto L_0053481f; case 0x534818u: goto L_00534818; default: UNSUP(0x00534811, "jump table entry is not a known target"); } }
L_00534818:; BB(0x00534818);
    /* 00534818: mov eax, 4 */ r_eax = 0x4u;
    /* 0053481d: jmp 0x534830 */ goto L_00534830;
L_0053481f:; BB(0x0053481f);
    /* 0053481f: mov eax, 3 */ r_eax = 0x3u;
    /* 00534824: jmp 0x534830 */ goto L_00534830;
L_00534826:; BB(0x00534826);
    /* 00534826: mov eax, 2 */ r_eax = 0x2u;
    /* 0053482b: jmp 0x534830 */ goto L_00534830;
L_0053482d:; BB(0x0053482d);
    /* 0053482d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00534830:; BB(0x00534830);
    /* 00534830: mov esp, ebp */ r_esp = r_ebp;
    /* 00534832: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00534833: ret 4 */ FN_RET(0x005347f0); r_esp += 8; return;
}

void f_00538ba0(void) /* SlotMachineSapphireSea::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538ba0);
    /* 00538ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538ba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538ba7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538baa: imul eax, eax, 0x58 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x58u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538bad: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538bb0: mov eax, dword ptr [eax + ecx*4 + 0x72de10] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72de10u));
    /* 00538bb7: mov esp, ebp */ r_esp = r_ebp;
    /* 00538bb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538bba: ret 8 */ FN_RET(0x00538ba0); r_esp += 12; return;
}

void f_00538bc0(void) /* SlotMachineSapphireSea::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538bc0);
    /* 00538bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538bc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538bc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538bc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538bc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538bca: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00538bcd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538bd0: mov eax, dword ptr [eax + ecx*4 + 0x72df18] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72df18u));
    /* 00538bd7: mov esp, ebp */ r_esp = r_ebp;
    /* 00538bd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538bda: ret 8 */ FN_RET(0x00538bc0); r_esp += 12; return;
}

void f_00538be0(void) /* SlotMachineSapphireSea::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538be0);
    /* 00538be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538be1: mov ebp, esp */ r_ebp = r_esp;
    /* 00538be3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538be4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538be7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538bea: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00538bed: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538bf0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00538bf3: mov eax, dword ptr [eax + ecx*4 + 0x72d9c0] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x72d9c0u));
    /* 00538bfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00538bfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538bfd: ret 8 */ FN_RET(0x00538be0); r_esp += 12; return;
}

void f_00538c00(void) /* SlotMachineSapphireSea::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538c00);
    /* 00538c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00538c03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538c04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538c07: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538c0a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538c0d: mov eax, dword ptr [eax + 0x72da98] */ r_eax = R32((u32)(r_eax+0x72da98u));
    /* 00538c13: mov esp, ebp */ r_esp = r_ebp;
    /* 00538c15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538c16: ret 4 */ FN_RET(0x00538c00); r_esp += 8; return;
}

void f_00538c20(void) /* SlotMachineSapphireSea::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538c20);
    /* 00538c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00538c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538c27: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00538c2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00538c2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538c2f: ret  */ FN_RET(0x00538c20); r_esp += 4; return;
}

void f_00538c30(void) /* SlotMachineSapphireSea::vfunc26 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00538c30);
    /* 00538c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00538c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00538c33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00538c34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00538c37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00538c3a: imul eax, eax, 0x28 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x28u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00538c3d: add eax, 0x72da78 */ {  u32 a = r_eax; u32 b = 0x72da78u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00538c42: mov esp, ebp */ r_esp = r_ebp;
    /* 00538c44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00538c45: ret 4 */ FN_RET(0x00538c30); r_esp += 8; return;
}

