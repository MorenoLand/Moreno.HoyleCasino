#include "protos.h"

void f_005e79e0(void) /* hof::func_005e79e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e79e0);
    /* 005e79e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e79e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e79e3: sub esp, 0x514 */ {  u32 a = r_esp; u32 b = 0x514u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e79e9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e79ee: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e79f0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e79f3: mov dword ptr [ebp - 0x514], ecx */ W32((u32)(r_ebp+0xfffffaecu), r_ecx);
    /* 005e79f9: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 005e7a00: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a07: lea eax, [ebp - 0x407] */ r_eax = (u32)(r_ebp+0xfffffbf9u);
    /* 005e7a0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a0e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x5e7a13u); f_00686fa2();
    /* 005e7a13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7a16: push 0x6d5d88 */ { u32 v = 0x6d5d88u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a1b: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 005e7a21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a22: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e7a27u); f_00686d8e();
    /* 005e7a27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7a2a: mov ecx, dword ptr [ebp - 0x514] */ r_ecx = R32((u32)(r_ebp+0xfffffaecu));
    /* 005e7a30: call 0x5e7ac0 */ r_esp -= 4; W32(r_esp, 0x5e7a35u); f_005e7ac0();
    /* 005e7a35: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a3a: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 005e7a40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a41: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x5e7a46u); f_005ea9c0();
    /* 005e7a46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7a49: mov dword ptr [ebp - 0x40c], eax */ W32((u32)(r_ebp+0xfffffbf4u), r_eax);
    /* 005e7a4f: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7a56: jne 0x5e7a6f */ if (!fZ) goto L_005e7a6f;
L_005e7a58:; BB(0x005e7a58);
    /* 005e7a58: push 0x1dd */ { u32 v = 0x1ddu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a5d: push 0x6d5d9c */ { u32 v = 0x6d5d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a62: push 0x6d5d94 */ { u32 v = 0x6d5d94u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a67: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e7a6cu); f_005e9f20();
    /* 005e7a6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e7a6f:; BB(0x005e7a6f);
    /* 005e7a6f: cmp dword ptr [ebp - 0x40c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7a76: jne 0x5e7a7a */ if (!fZ) goto L_005e7a7a;
L_005e7a78:; BB(0x005e7a78);
    /* 005e7a78: jmp 0x5e7aa6 */ goto L_005e7aa6;
L_005e7a7a:; BB(0x005e7a7a);
    /* 005e7a7a: mov ecx, dword ptr [ebp - 0x40c] */ r_ecx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005e7a80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a83: push 0x73c */ { u32 v = 0x73cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a88: push 0x794930 */ { u32 v = 0x794930u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a8d: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x5e7a93u); call_ind(t); }
    /* 005e7a93: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7a96: mov edx, dword ptr [ebp - 0x40c] */ r_edx = R32((u32)(r_ebp+0xfffffbf4u));
    /* 005e7a9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a9d: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x5e7aa3u); call_ind(t); }
    /* 005e7aa3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e7aa6:; BB(0x005e7aa6);
    /* 005e7aa6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7aa9: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7aab: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5e7ab0u); f_00686d72();
    /* 005e7ab0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7ab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7ab3: ret  */ FN_RET(0x005e79e0); r_esp += 4; return;
}

void f_005e7e90(void) /* hof::func_005e7e90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e7e90);
    /* 005e7e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7e91: mov ebp, esp */ r_ebp = r_esp;
    /* 005e7e93: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7e96: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e7e99: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7e9d: je 0x5e7eb6 */ if (fZ) goto L_005e7eb6;
L_005e7e9f:; BB(0x005e7e9f);
    /* 005e7e9f: push 0x22b */ { u32 v = 0x22bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ea4: push 0x6d5d9c */ { u32 v = 0x6d5d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ea9: push 0x6d5db0 */ { u32 v = 0x6d5db0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7eae: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e7eb3u); f_005e9f20();
    /* 005e7eb3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e7eb6:; BB(0x005e7eb6);
    /* 005e7eb6: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005e7eb9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e7ebc: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7ebe: jge 0x5e7ed3 */ if ((fS==fO)) goto L_005e7ed3;
L_005e7ec0:; BB(0x005e7ec0);
    /* 005e7ec0: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005e7ec3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e7ec6: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e7ec8: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005e7ecb: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005e7ece: jmp 0x5e7f82 */ goto L_005e7f82;
L_005e7ed3:; BB(0x005e7ed3);
    /* 005e7ed3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e7ed6: cmp eax, dword ptr [ebp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7ed9: jge 0x5e7ee0 */ if ((fS==fO)) goto L_005e7ee0;
L_005e7edb:; BB(0x005e7edb);
    /* 005e7edb: jmp 0x5e7f82 */ goto L_005e7f82;
L_005e7ee0:; BB(0x005e7ee0);
    /* 005e7ee0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e7ee7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ee9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7eeb: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e7ef0u); f_0064c8a0();
    /* 005e7ef0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7ef3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e7ef6: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005e7ef9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7efc: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e7eff: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e7f02: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005e7f05: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005e7f08: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e7f0b: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7f0d: jge 0x5e7f1c */ if ((fS==fO)) goto L_005e7f1c;
L_005e7f0f:; BB(0x005e7f0f);
    /* 005e7f0f: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005e7f12: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e7f14: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005e7f17: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e7f1a: jmp 0x5e7f27 */ goto L_005e7f27;
L_005e7f1c:; BB(0x005e7f1c);
    /* 005e7f1c: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005e7f1f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e7f22: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e7f24: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_005e7f27:; BB(0x005e7f27);
    /* 005e7f27: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e7f2a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e7f2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f2f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e7f32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f33: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5e7f38u); f_0064c8a0();
    /* 005e7f38: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7f3b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e7f3e: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005e7f41: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e7f44: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005e7f47: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7f4a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e7f4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7f50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f51: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7f54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f55: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e7f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e7f5c: call 0x5e7fc0 */ r_esp -= 4; W32(r_esp, 0x5e7f61u); f_005e7fc0();
    /* 005e7f61: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e7f64: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7f66: jne 0x5e7f6a */ if (!fZ) goto L_005e7f6a;
L_005e7f68:; BB(0x005e7f68);
    /* 005e7f68: jmp 0x5e7f82 */ goto L_005e7f82;
L_005e7f6a:; BB(0x005e7f6a);
    /* 005e7f6a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e7f6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f6e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e7f71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f72: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e7f75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f76: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e7f79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7f7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e7f7d: call 0x5e8120 */ r_esp -= 4; W32(r_esp, 0x5e7f82u); f_005e8120();
L_005e7f82:; BB(0x005e7f82);
    /* 005e7f82: mov esp, ebp */ r_esp = r_ebp;
    /* 005e7f84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7f85: ret 0x1c */ FN_RET(0x005e7e90); r_esp += 32; return;
}

void f_005e8020(void) /* hof::func_005e8020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8020);
    /* 005e8020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8021: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8023: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8026: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e8029: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e802d: jl 0x5e8035 */ if ((fS!=fO)) goto L_005e8035;
L_005e802f:; BB(0x005e802f);
    /* 005e802f: cmp dword ptr [ebp + 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8033: jl 0x5e804c */ if ((fS!=fO)) goto L_005e804c;
L_005e8035:; BB(0x005e8035);
    /* 005e8035: push 0x25b */ { u32 v = 0x25bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e803a: push 0x6d5d9c */ { u32 v = 0x6d5d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e803f: push 0x6d5df0 */ { u32 v = 0x6d5df0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8044: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e8049u); f_005e9f20();
    /* 005e8049: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e804c:; BB(0x005e804c);
    /* 005e804c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e804f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8050: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e8053: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8054: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8057: call 0x5e7f90 */ r_esp -= 4; W32(r_esp, 0x5e805cu); f_005e7f90();
    /* 005e805c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e805f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8061: jne 0x5e807a */ if (!fZ) goto L_005e807a;
L_005e8063:; BB(0x005e8063);
    /* 005e8063: push 0x25c */ { u32 v = 0x25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8068: push 0x6d5d9c */ { u32 v = 0x6d5d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e806d: push 0x6d5dd4 */ { u32 v = 0x6d5dd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8072: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e8077u); f_005e9f20();
    /* 005e8077: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e807a:; BB(0x005e807a);
    /* 005e807a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e807d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e807e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8081: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5e8086u); f_005e8590();
    /* 005e8086: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e8089: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e808a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e808c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e808f: call 0x5e8550 */ r_esp -= 4; W32(r_esp, 0x5e8094u); f_005e8550();
    /* 005e8094: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e8097: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e809d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e80a0: mov dword ptr [ecx + 0x79498c], edx */ W32((u32)(r_ecx+0x79498cu), r_edx);
    /* 005e80a6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e80a9: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e80af: add eax, 0x794974 */ {  u32 a = r_eax; u32 b = 0x794974u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e80b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e80b5: call dword ptr [0x6b22a4] */ { u32 t = R32((u32)(0x6b22a4u)); r_esp -= 4; W32(r_esp, 0x5e80bbu); call_ind(t); }
    /* 005e80bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e80be: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e80c4: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005e80c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e80ca: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e80cd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e80d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e80d3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e80d8u); f_0063aac0();
    /* 005e80d8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e80db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e80dc: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e80df: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e80e5: add edx, 0x794940 */ {  u32 a = r_edx; u32 b = 0x794940u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e80eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e80ec: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e80f1u); f_00686d8e();
    /* 005e80f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e80f4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e80f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e80f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e80fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e80fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e80ff: call 0x5e8230 */ r_esp -= 4; W32(r_esp, 0x5e8104u); f_005e8230();
    /* 005e8104: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e8107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8108: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e810b: call 0x5e8470 */ r_esp -= 4; W32(r_esp, 0x5e8110u); f_005e8470();
    /* 005e8110: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8113: call 0x5e79e0 */ r_esp -= 4; W32(r_esp, 0x5e8118u); f_005e79e0();
    /* 005e8118: mov esp, ebp */ r_esp = r_ebp;
    /* 005e811a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e811b: ret 0xc */ FN_RET(0x005e8020); r_esp += 16; return;
}

void f_005e8120(void) /* hof::func_005e8120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8120);
    /* 005e8120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8121: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8123: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8126: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e8129: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e812d: jl 0x5e8135 */ if ((fS!=fO)) goto L_005e8135;
L_005e812f:; BB(0x005e812f);
    /* 005e812f: cmp dword ptr [ebp + 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8133: jl 0x5e814c */ if ((fS!=fO)) goto L_005e814c;
L_005e8135:; BB(0x005e8135);
    /* 005e8135: push 0x26f */ { u32 v = 0x26fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e813a: push 0x6d5d9c */ { u32 v = 0x6d5d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e813f: push 0x6d5df0 */ { u32 v = 0x6d5df0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8144: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e8149u); f_005e9f20();
    /* 005e8149: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e814c:; BB(0x005e814c);
    /* 005e814c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005e814f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8150: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e8153: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8154: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e8157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8158: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e815b: call 0x5e7fc0 */ r_esp -= 4; W32(r_esp, 0x5e8160u); f_005e7fc0();
    /* 005e8160: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e8163: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8165: jne 0x5e817e */ if (!fZ) goto L_005e817e;
L_005e8167:; BB(0x005e8167);
    /* 005e8167: push 0x270 */ { u32 v = 0x270u; r_esp -= 4; W32(r_esp, v); }
    /* 005e816c: push 0x6d5d9c */ { u32 v = 0x6d5d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8171: push 0x6d5e14 */ { u32 v = 0x6d5e14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8176: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e817bu); f_005e9f20();
    /* 005e817b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e817e:; BB(0x005e817e);
    /* 005e817e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e8181: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8182: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8185: call 0x5e8590 */ r_esp -= 4; W32(r_esp, 0x5e818au); f_005e8590();
    /* 005e818a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e818d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e818e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8190: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8193: call 0x5e8550 */ r_esp -= 4; W32(r_esp, 0x5e8198u); f_005e8550();
    /* 005e8198: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e819b: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e81a1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e81a4: mov dword ptr [edx + 0x794984], eax */ W32((u32)(r_edx+0x794984u), r_eax);
    /* 005e81aa: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005e81ad: mov dword ptr [edx + 0x794988], ecx */ W32((u32)(r_edx+0x794988u), r_ecx);
    /* 005e81b3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e81b6: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e81bc: add edx, 0x794974 */ {  u32 a = r_edx; u32 b = 0x794974u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e81c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e81c3: call dword ptr [0x6b22a4] */ { u32 t = R32((u32)(0x6b22a4u)); r_esp -= 4; W32(r_esp, 0x5e81c9u); call_ind(t); }
    /* 005e81c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e81cc: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e81d1: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005e81d4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e81d7: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e81da: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005e81dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e81e0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e81e5u); f_0063aac0();
    /* 005e81e5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e81e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e81e9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e81ec: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e81f2: add ecx, 0x794940 */ {  u32 a = r_ecx; u32 b = 0x794940u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e81f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e81f9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x5e81feu); f_00686d8e();
    /* 005e81fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e8201: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e8204: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8205: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e8208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8209: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e820c: call 0x5e8230 */ r_esp -= 4; W32(r_esp, 0x5e8211u); f_005e8230();
    /* 005e8211: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e8214: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e8215: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8218: call 0x5e8470 */ r_esp -= 4; W32(r_esp, 0x5e821du); f_005e8470();
    /* 005e821d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8220: call 0x5e79e0 */ r_esp -= 4; W32(r_esp, 0x5e8225u); f_005e79e0();
    /* 005e8225: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8227: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8228: ret 0x10 */ FN_RET(0x005e8120); r_esp += 20; return;
}

void f_005e8230(void) /* hof::func_005e8230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8230);
    /* 005e8230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8231: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8235: push 0x6a9a0b */ { u32 v = 0x6a9a0bu; r_esp -= 4; W32(r_esp, v); }
    /* 005e823a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e8240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8241: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8244: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005e8249: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e824b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e824c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005e824f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005e8255: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005e8258: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005e825f: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005e8264: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005e8267: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e826a: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e826d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e8270: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e8273: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e8278u); f_0063aac0();
    /* 005e8278: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005e827a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e827d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e827f: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8283: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005e8286: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005e8289: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e828b: je 0x5e82fb */ if (fZ) goto L_005e82fb;
L_005e828d:; BB(0x005e828d);
    /* 005e828d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e8290: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e8296: mov byte ptr [ecx + 0x7949e8], 0 */ W8((u32)(r_ecx+0x7949e8u), 0x0u);
    /* 005e829d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e82a0: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e82a6: mov dword ptr [edx + 0x794980], 0xffffffff */ W32((u32)(r_edx+0x794980u), 0xffffffffu);
    /* 005e82b0: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005e82b5: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005e82b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e82bb: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e82be: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e82c1: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e82c7: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005e82ca: mov dword ptr [ecx + 0x7949ec], edx */ W32((u32)(r_ecx+0x7949ecu), r_edx);
    /* 005e82d0: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005e82d5: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005e82d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e82db: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005e82de: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e82e1: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005e82e4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e82e7: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e82ed: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e82f0: mov dword ptr [edx + 0x7949f0], eax */ W32((u32)(r_edx+0x7949f0u), r_eax);
    /* 005e82f6: jmp 0x5e8457 */ goto L_005e8457;
L_005e82fb:; BB(0x005e82fb);
    /* 005e82fb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e82fe: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e8304: mov byte ptr [ecx + 0x7949e8], 1 */ W8((u32)(r_ecx+0x7949e8u), 0x1u);
    /* 005e830b: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005e8311: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005e8314: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e8317: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005e831a: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005e831d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e8320: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e8325u); f_0063aac0();
    /* 005e8325: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005e8327: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005e832a: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e832e: jne 0x5e8366 */ if (!fZ) goto L_005e8366;
L_005e8330:; BB(0x005e8330);
    /* 005e8330: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8332: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e8338: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005e833b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e833e: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005e8341: call 0x4842b0 */ r_esp -= 4; W32(r_esp, 0x5e8346u); f_004842b0();
    /* 005e8346: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e8347: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e834d: call 0x6394c0 */ r_esp -= 4; W32(r_esp, 0x5e8352u); f_006394c0();
    /* 005e8352: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e8355: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e835b: mov dword ptr [ecx + 0x794980], eax */ W32((u32)(r_ecx+0x794980u), r_eax);
    /* 005e8361: jmp 0x5e8457 */ goto L_005e8457;
L_005e8366:; BB(0x005e8366);
    /* 005e8366: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e8369: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e836f: mov dword ptr [edx + 0x794980], 0xffffffff */ W32((u32)(r_edx+0x794980u), 0xffffffffu);
    /* 005e8379: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e837d: jne 0x5e83c3 */ if (!fZ) goto L_005e83c3;
L_005e837f:; BB(0x005e837f);
    /* 005e837f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8384: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5e8389u); f_00686d82();
    /* 005e8389: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e838c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e838f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e8396: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e839a: je 0x5e83a9 */ if (fZ) goto L_005e83a9;
L_005e839c:; BB(0x005e839c);
    /* 005e839c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e839f: call 0x6640c0 */ r_esp -= 4; W32(r_esp, 0x5e83a4u); f_006640c0();
    /* 005e83a4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e83a7: jmp 0x5e83b0 */ goto L_005e83b0;
L_005e83a9:; BB(0x005e83a9);
    /* 005e83a9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005e83b0:; BB(0x005e83b0);
    /* 005e83b0: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e83b3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e83b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e83bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e83c0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005e83c3:; BB(0x005e83c3);
    /* 005e83c3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005e83c9: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005e83cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e83cf: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005e83d2: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x5e83d7u); f_0057a470();
    /* 005e83d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e83d8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e83db: call 0x664300 */ r_esp -= 4; W32(r_esp, 0x5e83e0u); f_00664300();
    /* 005e83e0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e83e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e83e5: jne 0x5e8404 */ if (!fZ) goto L_005e8404;
L_005e83e7:; BB(0x005e83e7);
    /* 005e83e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e83e9: jne 0x5e8402 */ if (!fZ) goto L_005e8402;
L_005e83eb:; BB(0x005e83eb);
    /* 005e83eb: push 0x29f */ { u32 v = 0x29fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e83f0: push 0x6d5d9c */ { u32 v = 0x6d5d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e83f5: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005e83fa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e83ffu); f_005e9f20();
    /* 005e83ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e8402:; BB(0x005e8402);
    /* 005e8402: jmp 0x5e8424 */ goto L_005e8424;
L_005e8404:; BB(0x005e8404);
    /* 005e8404: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e8406: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8409: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e840c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e840d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e8410: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e8416: add eax, 0x79499c */ {  u32 a = r_eax; u32 b = 0x79499cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e841b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e841c: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5e8421u); f_00686fde();
    /* 005e8421: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e8424:; BB(0x005e8424);
    /* 005e8424: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e8427: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e842a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e842d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005e8430: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8434: je 0x5e8449 */ if (fZ) goto L_005e8449;
L_005e8436:; BB(0x005e8436);
    /* 005e8436: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e8438: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e843b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e843d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e8440: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e8442: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e8444u); call_ind(t); }
    /* 005e8444: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005e8447: jmp 0x5e8450 */ goto L_005e8450;
L_005e8449:; BB(0x005e8449);
    /* 005e8449: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005e8450:; BB(0x005e8450);
    /* 005e8450: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005e8457:; BB(0x005e8457);
    /* 005e8457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e845a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e8461: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e8462: mov esp, ebp */ r_esp = r_ebp;
    /* 005e8464: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e8465: ret 8 */ FN_RET(0x005e8230); r_esp += 12; return;
}

void f_005e8470(void) /* hof::func_005e8470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e8470);
    /* 005e8470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e8471: mov ebp, esp */ r_ebp = r_esp;
    /* 005e8473: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e8476: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e8479: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e847f: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5e8484u); f_005f3bf0();
    /* 005e8484: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e8487: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e848b: jl 0x5e8496 */ if ((fS!=fO)) goto L_005e8496;
L_005e848d:; BB(0x005e848d);
    /* 005e848d: cmp dword ptr [ebp - 8], 0x30d400 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x30d400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e8494: jl 0x5e84a4 */ if ((fS!=fO)) goto L_005e84a4;
L_005e8496:; BB(0x005e8496);
    /* 005e8496: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e849c: call 0x5f3bd0 */ r_esp -= 4; W32(r_esp, 0x5e84a1u); f_005f3bd0();
    /* 005e84a1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005e84a4:; BB(0x005e84a4);
    /* 005e84a4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e84a8: jl 0x5e84b0 */ if ((fS!=fO)) goto L_005e84b0;
L_005e84aa:; BB(0x005e84aa);
    /* 005e84aa: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e84ae: jl 0x5e84c7 */ if ((fS!=fO)) goto L_005e84c7;
L_005e84b0:; BB(0x005e84b0);
    /* 005e84b0: push 0x2b2 */ { u32 v = 0x2b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e84b5: push 0x6d5d9c */ { u32 v = 0x6d5d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e84ba: push 0x6d5e30 */ { u32 v = 0x6d5e30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e84bf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e84c4u); f_005e9f20();
    /* 005e84c4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e84c7:; BB(0x005e84c7);
    /* 005e84c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e84ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e84d1: imul ecx, ecx, 0xb8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xb8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e84d7: cmp byte ptr [ecx + 0x794990], 0 */ {  u32 a = R8((u32)(r_ecx+0x794990u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005e84de: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005e84e1: mov byte ptr [ebp - 9], dl */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_edx);
    /* 005e84e4: movzx eax, byte ptr [ebp - 9] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 005e84e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e84ea: jne 0x5e84fa */ if (!fZ) goto L_005e84fa;
L_005e84ec:; BB(0x005e84ec);
    /* 005e84ec: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 005e84f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005e84fa:; BB(0x005e84fa);
    /* 005e84fa: cmp dword ptr [ebp - 8], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e84fe: jne 0x5e8518 */ if (!fZ) goto L_005e8518;
L_005e8500:; BB(0x005e8500);
    /* 005e8500: cmp dword ptr [0x79338c], 0 */ {  u32 a = R32((u32)(0x79338cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e8507: je 0x5e8518 */ if (fZ) goto L_005e8518;
L_005e8509:; BB(0x005e8509);
    /* 005e8509: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005e850f: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 005e8515: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005e8518:; BB(0x005e8518);
    /* 005e8518: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e851b: imul eax, eax, 0xb8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e8521: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e8524: mov dword ptr [eax + 0x794994], ecx */ W32((u32)(r_eax+0x794994u), r_ecx);
    /* 005e852a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e852d: imul edx, edx, 0xb8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e8533: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e8536: mov dword ptr [edx + 0x794998], eax */ W32((u32)(r_edx+0x794998u), r_eax);
    /* 005e853c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e853e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e853f: ret 4 */ FN_RET(0x005e8470); r_esp += 8; return;
}

