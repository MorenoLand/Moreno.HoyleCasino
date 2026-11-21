#include "protos.h"

void f_005b4000(void) /* sub_5B4000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b4000);
    /* 005b4000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4001: mov ebp, esp */ r_ebp = r_esp;
    /* 005b4003: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b4006: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b4009: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005b400c: cmp dword ptr [eax + 0x5c4], 0 */ {  u32 a = R32((u32)(r_eax+0x5c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4013: jne 0x5b4019 */ if (!fZ) goto L_005b4019;
L_005b4015:; BB(0x005b4015);
    /* 005b4015: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b4017: jmp 0x5b408d */ goto L_005b408d;
L_005b4019:; BB(0x005b4019);
    /* 005b4019: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b401c: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5b4021u); f_005b58a0();
    /* 005b4021: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b4024: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b4027: sub eax, dword ptr [ecx + 0x5d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x5d0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b402d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b4030: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4034: jg 0x5b403b */ if ((!fZ&&fS==fO)) goto L_005b403b;
L_005b4036:; BB(0x005b4036);
    /* 005b4036: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b4039: jmp 0x5b408d */ goto L_005b408d;
L_005b403b:; BB(0x005b403b);
    /* 005b403b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b403e: call 0x5b58a0 */ r_esp -= 4; W32(r_esp, 0x5b4043u); f_005b58a0();
    /* 005b4043: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b4046: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b4049: sub eax, dword ptr [edx + 0x5c4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x5c4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b404f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b4052: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 005b4055: fidiv dword ptr [ebp - 4] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xfffffffcu));
    /* 005b4058: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005b405b: fld qword ptr [0x6b4b28] */ FPUSH(R_F64((u32)(0x6b4b28u)));
    /* 005b4061: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 005b4064: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b4066: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005b4069: jp 0x5b4072 */ if (fP) goto L_005b4072;
L_005b406b:; BB(0x005b406b);
    /* 005b406b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b406e: jmp 0x5b408d */ goto L_005b408d;
L_005b4072:; BB(0x005b4072);
    /* 005b4072: fld qword ptr [0x6b4b20] */ FPUSH(R_F64((u32)(0x6b4b20u)));
    /* 005b4078: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 005b407b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b407d: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b4080: jne 0x5b408b */ if (!fZ) goto L_005b408b;
L_005b4082:; BB(0x005b4082);
    /* 005b4082: mov eax, 1 */ r_eax = 0x1u;
    /* 005b4087: jmp 0x5b408d */ goto L_005b408d;
L_005b408b:; BB(0x005b408b);
    /* 005b408b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005b408d:; BB(0x005b408d);
    /* 005b408d: mov esp, ebp */ r_esp = r_ebp;
    /* 005b408f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4090: ret  */ FN_RET(0x005b4000); r_esp += 4; return;
}

void f_005b4e50(void) /* sub_5B4E50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b4e50);
    /* 005b4e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4e51: mov ebp, esp */ r_ebp = r_esp;
    /* 005b4e53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b4e56: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b4e59: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4e5d: jne 0x5b4e66 */ if (!fZ) goto L_005b4e66;
L_005b4e5f:; BB(0x005b4e5f);
    /* 005b4e5f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b4e62: jmp 0x5b4e8c */ goto L_005b4e8c;
L_005b4e66:; BB(0x005b4e66);
    /* 005b4e66: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4e6a: jne 0x5b4e75 */ if (!fZ) goto L_005b4e75;
L_005b4e6c:; BB(0x005b4e6c);
    /* 005b4e6c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b4e73: jmp 0x5b4e89 */ goto L_005b4e89;
L_005b4e75:; BB(0x005b4e75);
    /* 005b4e75: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4e78: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005b4e7e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b4e81: movsx edx, byte ptr [ecx + eax + 0x67] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x67u));
    /* 005b4e86: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005b4e89:; BB(0x005b4e89);
    /* 005b4e89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_005b4e8c:; BB(0x005b4e8c);
    /* 005b4e8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b4e8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4e8f: ret 4 */ FN_RET(0x005b4e50); r_esp += 8; return;
}

void f_005b4ea0(void) /* sub_5B4EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b4ea0);
    /* 005b4ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b4ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b4ea7: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b4ead: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b4eb2u); f_005da830();
    /* 005b4eb2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b4eb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4eb7: je 0x5b4ebf */ if (fZ) goto L_005b4ebf;
L_005b4eb9:; BB(0x005b4eb9);
    /* 005b4eb9: mov al, 4 */ r_eax = (r_eax & 0xffffff00u) | ((0x4u) & 0xffu);
    /* 005b4ebb: jmp 0x5b4ecc */ goto L_005b4ecc;
L_005b4ebf:; BB(0x005b4ebf);
    /* 005b4ebf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ec1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b4ec4: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b4ec9u); f_005b5fb0();
    /* 005b4ec9: mov al, byte ptr [eax + 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xdu))) & 0xffu);
L_005b4ecc:; BB(0x005b4ecc);
    /* 005b4ecc: mov esp, ebp */ r_esp = r_ebp;
    /* 005b4ece: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4ecf: ret  */ FN_RET(0x005b4ea0); r_esp += 4; return;
}

void f_005b4ed0(void) /* sub_5B4ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b4ed0);
    /* 005b4ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b4ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b4ed7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b4eda: cmp dword ptr [eax + 0x5b8], -1 */ {  u32 a = R32((u32)(r_eax+0x5b8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4ee1: jne 0x5b4ee9 */ if (!fZ) goto L_005b4ee9;
L_005b4ee3:; BB(0x005b4ee3);
    /* 005b4ee3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b4ee5: jmp 0x5b4efb */ goto L_005b4efb;
L_005b4ee9:; BB(0x005b4ee9);
    /* 005b4ee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b4eec: mov edx, dword ptr [ecx + 0x5b8] */ r_edx = R32((u32)(r_ecx+0x5b8u));
    /* 005b4ef2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4ef3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5b4ef8u); f_005dcb00();
    /* 005b4ef8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b4efb:; BB(0x005b4efb);
    /* 005b4efb: mov esp, ebp */ r_esp = r_ebp;
    /* 005b4efd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4efe: ret  */ FN_RET(0x005b4ed0); r_esp += 4; return;
}

void f_005b4f00(void) /* sub_5B4F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b4f00);
    /* 005b4f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f01: mov ebp, esp */ r_ebp = r_esp;
    /* 005b4f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b4f07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b4f0a: mov eax, dword ptr [eax + 0x5b8] */ r_eax = R32((u32)(r_eax+0x5b8u));
    /* 005b4f10: mov esp, ebp */ r_esp = r_ebp;
    /* 005b4f12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4f13: ret  */ FN_RET(0x005b4f00); r_esp += 4; return;
}

void f_005b4f20(void) /* sub_5B4F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b4f20);
    /* 005b4f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f21: mov ebp, esp */ r_ebp = r_esp;
    /* 005b4f23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b4f27: mov ecx, dword ptr [0x793600] */ r_ecx = R32((u32)(0x793600u));
    /* 005b4f2d: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5b4f32u); f_005da830();
    /* 005b4f32: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005b4f35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4f37: je 0x5b4f3f */ if (fZ) goto L_005b4f3f;
L_005b4f39:; BB(0x005b4f39);
    /* 005b4f39: mov al, 4 */ r_eax = (r_eax & 0xffffff00u) | ((0x4u) & 0xffu);
    /* 005b4f3b: jmp 0x5b4f4c */ goto L_005b4f4c;
L_005b4f3f:; BB(0x005b4f3f);
    /* 005b4f3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b4f44: call 0x5b5fb0 */ r_esp -= 4; W32(r_esp, 0x5b4f49u); f_005b5fb0();
    /* 005b4f49: mov al, byte ptr [eax + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x8u))) & 0xffu);
L_005b4f4c:; BB(0x005b4f4c);
    /* 005b4f4c: mov esp, ebp */ r_esp = r_ebp;
    /* 005b4f4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b4f4f: ret  */ FN_RET(0x005b4f20); r_esp += 4; return;
}

void f_005b4f50(void) /* sub_5B4F50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b4f50);
    /* 005b4f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005b4f53: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b4f56: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005b4f59: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4f5d: jne 0x5b4f6e */ if (!fZ) goto L_005b4f6e;
L_005b4f5f:; BB(0x005b4f5f);
    /* 005b4f5f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b4f62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f63: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b4f66: call 0x5b4e50 */ r_esp -= 4; W32(r_esp, 0x5b4f6bu); f_005b4e50();
    /* 005b4f6b: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_005b4f6e:; BB(0x005b4f6e);
    /* 005b4f6e: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005b4f75: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005b4f7c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b4f7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f80: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b4f83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4f84: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b4f87: call 0x5b5830 */ r_esp -= 4; W32(r_esp, 0x5b4f8cu); f_005b5830();
    /* 005b4f8c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005b4f8f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005b4f96: jmp 0x5b4fa1 */ goto L_005b4fa1;
L_005b4f98:; BB(0x005b4f98);
    /* 005b4f98: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b4f9b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b4f9e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005b4fa1:; BB(0x005b4fa1);
    /* 005b4fa1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b4fa4: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4fa7: jge 0x5b4fe1 */ if ((fS==fO)) goto L_005b4fe1;
L_005b4fa9:; BB(0x005b4fa9);
    /* 005b4fa9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b4fac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4fad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b4fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b4fb1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b4fb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b4fb5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b4fb8: call 0x5b5f60 */ r_esp -= 4; W32(r_esp, 0x5b4fbdu); f_005b5f60();
    /* 005b4fbd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005b4fc0: cmp dword ptr [ebp - 0x14], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b4fc4: jne 0x5b4fd6 */ if (!fZ) goto L_005b4fd6;
L_005b4fc6:; BB(0x005b4fc6);
    /* 005b4fc6: mov dword ptr [ebp - 0x14], 0xb */ W32((u32)(r_ebp+0xffffffecu), 0xbu);
    /* 005b4fcd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b4fd0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b4fd3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005b4fd6:; BB(0x005b4fd6);
    /* 005b4fd6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b4fd9: add eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b4fdc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005b4fdf: jmp 0x5b4f98 */ goto L_005b4f98;
L_005b4fe1:; BB(0x005b4fe1);
    /* 005b4fe1: cmp dword ptr [ebp - 8], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4fe5: jle 0x5b5001 */ if ((fZ||fS!=fO)) goto L_005b5001;
L_005b4fe7:; BB(0x005b4fe7);
    /* 005b4fe7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b4feb: jle 0x5b5001 */ if ((fZ||fS!=fO)) goto L_005b5001;
L_005b4fed:; BB(0x005b4fed);
    /* 005b4fed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b4ff0: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b4ff3: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b4ff6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b4ff9: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b4ffc: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005b4fff: jmp 0x5b4fe1 */ goto L_005b4fe1;
L_005b5001:; BB(0x005b5001);
    /* 005b5001: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b5004: mov esp, ebp */ r_esp = r_ebp;
    /* 005b5006: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b5007: ret 8 */ FN_RET(0x005b4f50); r_esp += 12; return;
}

