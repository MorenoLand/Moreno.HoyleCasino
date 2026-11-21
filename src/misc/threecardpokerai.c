#include "protos.h"

void f_00539ae0(void) /* threecardpokerai::func_00539ae0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539ae0);
    /* 00539ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00539ae3: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00539ae6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00539ae9: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 00539aee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00539af0: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00539af6: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00539afc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x539afeu); call_ind(t); }
    /* 00539afe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00539b01: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00539b07: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00539b09: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00539b0f: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 00539b15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x539b17u); call_ind(t); }
    /* 00539b17: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00539b1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539b1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539b1e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x539b23u); f_005dcb00();
    /* 00539b23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539b26: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00539b29: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00539b2c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00539b2e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00539b31: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00539b34: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x539b36u); call_ind(t); }
    /* 00539b36: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00539b39: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00539b3c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00539b3f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539b42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539b43: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x539b48u); f_005dcb00();
    /* 00539b48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539b4b: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 00539b51: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00539b54: cmp dword ptr [ebp - 0x10], -4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539b58: jge 0x539b6c */ if ((fS==fO)) goto L_00539b6c;
L_00539b5a:; BB(0x00539b5a);
    /* 00539b5a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00539b5c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x539b61u); f_0062fbf0();
    /* 00539b61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539b64: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00539b67: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00539b69: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00539b6c:; BB(0x00539b6c);
    /* 00539b6c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00539b6e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x539b73u); f_0062fbf0();
    /* 00539b73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539b76: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539b79: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539b7d: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00539b80: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00539b83: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00539b85: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00539b88: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x539b8du); f_0062fbf0();
    /* 00539b8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539b90: mov ecx, eax */ r_ecx = r_eax;
    /* 00539b92: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00539b95: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00539b98: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00539b99: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00539b99, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00539b99, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00539b9b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00539b9e: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00539ba1: fmul qword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd0u));
    /* 00539ba4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00539ba7: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539bab: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00539bae: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 00539bb1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00539bb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539bb5: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00539bb8: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00539bbb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x539bc0u); f_0062fbf0();
    /* 00539bc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539bc3: mov ecx, eax */ r_ecx = r_eax;
    /* 00539bc5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00539bc8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00539bcb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00539bcc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00539bcc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00539bcc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00539bce: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00539bd1: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00539bd4: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 00539bd7: fadd qword ptr [ebp - 0x40] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc0u));
    /* 00539bda: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x539bdfu); f_00686cc0();
    /* 00539bdf: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00539be2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539be5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00539be6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00539be8: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00539bea: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00539bed:; BB(0x00539bed);
    /* 00539bed: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539bf0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00539bf1: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00539bf6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00539bf6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00539bf6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00539bf8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539bfa: je 0x539c07 */ if (fZ) goto L_00539c07;
L_00539bfc:; BB(0x00539bfc);
    /* 00539bfc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539bff: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00539c02: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00539c05: jmp 0x539bed */ goto L_00539bed;
L_00539c07:; BB(0x00539c07);
    /* 00539c07: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539c0a: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539c0d: jge 0x539c15 */ if ((fS==fO)) goto L_00539c15;
L_00539c0f:; BB(0x00539c0f);
    /* 00539c0f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00539c12: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00539c15:; BB(0x00539c15);
    /* 00539c15: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539c18: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539c1b: jle 0x539c23 */ if ((fZ||fS!=fO)) goto L_00539c23;
L_00539c1d:; BB(0x00539c1d);
    /* 00539c1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539c20: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00539c23:; BB(0x00539c23);
    /* 00539c23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539c27: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00539c2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539c2b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00539c2e: call 0x539ed0 */ r_esp -= 4; W32(r_esp, 0x539c33u); f_00539ed0();
    /* 00539c33: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00539c36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539c38: jne 0x539c45 */ if (!fZ) goto L_00539c45;
L_00539c3a:; BB(0x00539c3a);
    /* 00539c3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539c3d: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00539c40: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00539c43: jmp 0x539c23 */ goto L_00539c23;
L_00539c45:; BB(0x00539c45);
    /* 00539c45: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539c48: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539c4b: jge 0x539c54 */ if ((fS==fO)) goto L_00539c54;
L_00539c4d:; BB(0x00539c4d);
    /* 00539c4d: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00539c54:; BB(0x00539c54);
    /* 00539c54: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539c57: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539c5a: jle 0x539c70 */ if ((fZ||fS!=fO)) goto L_00539c70;
L_00539c5c:; BB(0x00539c5c);
    /* 00539c5c: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00539c5e: push 0x6c59c8 */ { u32 v = 0x6c59c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00539c63: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00539c68: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x539c6du); f_005e9f20();
    /* 00539c6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00539c70:; BB(0x00539c70);
    /* 00539c70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00539c72: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539c75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539c76: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x539c7bu); f_0064c8a0();
    /* 00539c7b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539c7e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00539c81: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00539c84: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00539c87: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00539c8a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00539c8c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00539c8f: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00539c92: mov esp, ebp */ r_esp = r_ebp;
    /* 00539c94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539c95: ret 8 */ FN_RET(0x00539ae0); r_esp += 12; return;
}

void f_00539ca0(void) /* threecardpokerai::func_00539ca0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00539ca0);
    /* 00539ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00539ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00539ca3: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00539ca6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00539ca9: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 00539cae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00539cb0: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00539cb6: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 00539cbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x539cbeu); call_ind(t); }
    /* 00539cbe: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00539cc1: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00539cc7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00539cc9: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 00539ccf: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 00539cd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x539cd7u); call_ind(t); }
    /* 00539cd7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00539cda: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539cdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539cde: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x539ce3u); f_005dcb00();
    /* 00539ce3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539ce6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00539ce9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00539cec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00539cee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00539cf1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00539cf4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x539cf6u); call_ind(t); }
    /* 00539cf6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00539cf9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00539cfc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00539cff: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539d02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539d03: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x539d08u); f_005dcb00();
    /* 00539d08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539d0b: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 00539d11: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00539d14: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00539d16: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x539d1bu); f_0062fbf0();
    /* 00539d1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539d1e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539d21: jl 0x539d2f */ if ((fS!=fO)) goto L_00539d2f;
L_00539d23:; BB(0x00539d23);
    /* 00539d23: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00539d26: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539d29: jne 0x539e80 */ if (!fZ) goto L_00539e80;
L_00539d2f:; BB(0x00539d2f);
    /* 00539d2f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00539d31: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x539d36u); f_0062fbf0();
    /* 00539d36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539d39: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00539d3c: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539d40: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00539d43: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00539d46: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00539d48: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00539d4b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x539d50u); f_0062fbf0();
    /* 00539d50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539d53: mov ecx, eax */ r_ecx = r_eax;
    /* 00539d55: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00539d58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00539d5b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00539d5c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00539d5c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00539d5c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00539d5e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00539d61: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00539d64: fmul qword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd0u));
    /* 00539d67: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00539d6a: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00539d6e: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00539d71: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 00539d74: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00539d76: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00539d78: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00539d7b: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00539d7e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x539d83u); f_0062fbf0();
    /* 00539d83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539d86: mov ecx, eax */ r_ecx = r_eax;
    /* 00539d88: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00539d8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00539d8e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00539d8f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00539d8f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00539d8f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00539d91: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00539d94: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00539d97: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 00539d9a: fadd qword ptr [ebp - 0x40] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc0u));
    /* 00539d9d: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x539da2u); f_00686cc0();
    /* 00539da2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00539da5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00539da7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x539dacu); f_0062fbf0();
    /* 00539dac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539daf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539db2: jne 0x539dc4 */ if (!fZ) goto L_00539dc4;
L_00539db4:; BB(0x00539db4);
    /* 00539db4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539db7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00539db8: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00539dbd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00539dbd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00539dbd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00539dbf: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00539dc2: jmp 0x539dcf */ goto L_00539dcf;
L_00539dc4:; BB(0x00539dc4);
    /* 00539dc4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539dc7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00539dc8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00539dca: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00539dcc: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_00539dcf:; BB(0x00539dcf);
    /* 00539dcf: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00539dd2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00539dd5:; BB(0x00539dd5);
    /* 00539dd5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539dd8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00539dd9: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00539dde: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00539dde, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00539dde, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00539de0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539de2: je 0x539def */ if (fZ) goto L_00539def;
L_00539de4:; BB(0x00539de4);
    /* 00539de4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539de7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00539dea: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00539ded: jmp 0x539dd5 */ goto L_00539dd5;
L_00539def:; BB(0x00539def);
    /* 00539def: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539df2: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539df5: jge 0x539dfd */ if ((fS==fO)) goto L_00539dfd;
L_00539df7:; BB(0x00539df7);
    /* 00539df7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00539dfa: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00539dfd:; BB(0x00539dfd);
    /* 00539dfd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539e00: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539e03: jle 0x539e0b */ if ((fZ||fS!=fO)) goto L_00539e0b;
L_00539e05:; BB(0x00539e05);
    /* 00539e05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00539e08: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00539e0b:; BB(0x00539e0b);
    /* 00539e0b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00539e0e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00539e10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00539e11: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539e14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00539e15: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00539e18: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539e19: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00539e1c: call 0x539f00 */ r_esp -= 4; W32(r_esp, 0x539e21u); f_00539f00();
    /* 00539e21: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00539e24: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00539e26: jne 0x539e33 */ if (!fZ) goto L_00539e33;
L_00539e28:; BB(0x00539e28);
    /* 00539e28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539e2b: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00539e2e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00539e31: jmp 0x539e0b */ goto L_00539e0b;
L_00539e33:; BB(0x00539e33);
    /* 00539e33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539e36: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539e39: jge 0x539e42 */ if ((fS==fO)) goto L_00539e42;
L_00539e3b:; BB(0x00539e3b);
    /* 00539e3b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00539e42:; BB(0x00539e42);
    /* 00539e42: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539e45: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539e48: jle 0x539e5e */ if ((fZ||fS!=fO)) goto L_00539e5e;
L_00539e4a:; BB(0x00539e4a);
    /* 00539e4a: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00539e4c: push 0x6c59c8 */ { u32 v = 0x6c59c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00539e51: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00539e56: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x539e5bu); f_005e9f20();
    /* 00539e5b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00539e5e:; BB(0x00539e5e);
    /* 00539e5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00539e60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00539e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00539e64: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x539e69u); f_0064c8a0();
    /* 00539e69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539e6c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00539e6f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00539e72: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00539e75: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00539e78: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00539e7a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00539e7d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_00539e80:; BB(0x00539e80);
    /* 00539e80: mov esp, ebp */ r_esp = r_ebp;
    /* 00539e82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00539e83: ret 0xc */ FN_RET(0x00539ca0); r_esp += 16; return;
}

void f_0053a1d0(void) /* threecardpokerai::func_0053a1d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053a1d0);
    /* 0053a1d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a1d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a1d3: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a1d6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053a1d9: mov eax, dword ptr [0x7933e8] */ r_eax = R32((u32)(0x7933e8u));
    /* 0053a1de: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053a1e0: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a1e6: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0053a1ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53a1eeu); call_ind(t); }
    /* 0053a1ee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053a1f1: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a1f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053a1f9: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a1ff: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0053a205: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53a207u); call_ind(t); }
    /* 0053a207: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053a20a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053a20d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a20e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53a213u); f_005dcb00();
    /* 0053a213: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a216: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053a219: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a21c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053a21e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053a221: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0053a224: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x53a226u); call_ind(t); }
    /* 0053a226: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053a229: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a22c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053a22f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053a232: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a233: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53a238u); f_005dcb00();
    /* 0053a238: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a23b: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 0053a241: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0053a244: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0053a246: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a24bu); f_0062fbf0();
    /* 0053a24b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a24e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a251: jl 0x53a25f */ if ((fS!=fO)) goto L_0053a25f;
L_0053a253:; BB(0x0053a253);
    /* 0053a253: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0053a256: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a259: jne 0x53a3b3 */ if (!fZ) goto L_0053a3b3;
L_0053a25f:; BB(0x0053a25f);
    /* 0053a25f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a261: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a266u); f_0062fbf0();
    /* 0053a266: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a269: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a26c: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053a270: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0053a273: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0053a276: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a278: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0053a27b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a280u); f_0062fbf0();
    /* 0053a280: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a283: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a285: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a288: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053a28b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a28c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a28c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a28c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a28e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053a291: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0053a294: fmul qword ptr [ebp - 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd0u));
    /* 0053a297: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a29a: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053a29e: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0053a2a1: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0053a2a4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a2a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053a2a8: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0053a2ab: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0053a2ae: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a2b3u); f_0062fbf0();
    /* 0053a2b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a2b6: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a2b8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a2bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053a2be: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a2bf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a2bf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a2bf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a2c1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0053a2c4: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0053a2c7: fmul qword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffb8u));
    /* 0053a2ca: fadd qword ptr [ebp - 0x40] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0053a2cd: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x53a2d2u); f_00686cc0();
    /* 0053a2d2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053a2d5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a2d7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a2dcu); f_0062fbf0();
    /* 0053a2dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a2df: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a2e2: jne 0x53a2f4 */ if (!fZ) goto L_0053a2f4;
L_0053a2e4:; BB(0x0053a2e4);
    /* 0053a2e4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a2e7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a2e8: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0053a2ed: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a2ed, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a2ed, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a2ef: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0053a2f2: jmp 0x53a2ff */ goto L_0053a2ff;
L_0053a2f4:; BB(0x0053a2f4);
    /* 0053a2f4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a2f7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a2f8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053a2fa: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0053a2fc: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_0053a2ff:; BB(0x0053a2ff);
    /* 0053a2ff: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053a302: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0053a305:; BB(0x0053a305);
    /* 0053a305: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a308: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a309: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0053a30e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a30e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a30e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a310: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a312: je 0x53a31f */ if (fZ) goto L_0053a31f;
L_0053a314:; BB(0x0053a314);
    /* 0053a314: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a317: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053a31a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0053a31d: jmp 0x53a305 */ goto L_0053a305;
L_0053a31f:; BB(0x0053a31f);
    /* 0053a31f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a322: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a325: jge 0x53a32d */ if ((fS==fO)) goto L_0053a32d;
L_0053a327:; BB(0x0053a327);
    /* 0053a327: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a32a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0053a32d:; BB(0x0053a32d);
    /* 0053a32d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a330: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a333: jle 0x53a33b */ if ((fZ||fS!=fO)) goto L_0053a33b;
L_0053a335:; BB(0x0053a335);
    /* 0053a335: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a338: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0053a33b:; BB(0x0053a33b);
    /* 0053a33b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0053a33e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053a340: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a341: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a345: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0053a348: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a349: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a34c: call 0x539f00 */ r_esp -= 4; W32(r_esp, 0x53a351u); f_00539f00();
    /* 0053a351: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0053a354: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a356: jne 0x53a363 */ if (!fZ) goto L_0053a363;
L_0053a358:; BB(0x0053a358);
    /* 0053a358: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a35b: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053a35e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053a361: jmp 0x53a33b */ goto L_0053a33b;
L_0053a363:; BB(0x0053a363);
    /* 0053a363: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a366: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a369: jge 0x53a372 */ if ((fS==fO)) goto L_0053a372;
L_0053a36b:; BB(0x0053a36b);
    /* 0053a36b: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0053a372:; BB(0x0053a372);
    /* 0053a372: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a375: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a378: jle 0x53a391 */ if ((fZ||fS!=fO)) goto L_0053a391;
L_0053a37a:; BB(0x0053a37a);
    /* 0053a37a: push 0xe3 */ { u32 v = 0xe3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a37f: push 0x6c59c8 */ { u32 v = 0x6c59c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a384: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a389: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x53a38eu); f_005e9f20();
    /* 0053a38e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053a391:; BB(0x0053a391);
    /* 0053a391: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a393: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a397: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x53a39cu); f_0064c8a0();
    /* 0053a39c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a39f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053a3a2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0053a3a5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0053a3a8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053a3ab: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0053a3ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053a3b0: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_0053a3b3:; BB(0x0053a3b3);
    /* 0053a3b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a3b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a3b6: ret 0xc */ FN_RET(0x0053a1d0); r_esp += 16; return;
}

void f_0053a3c0(void) /* threecardpokerai::func_0053a3c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0053a3c0);
    /* 0053a3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053a3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0053a3c3: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053a3c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053a3c7: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0053a3ca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053a3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a3ce: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53a3d3u); f_005dcb00();
    /* 0053a3d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a3d6: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a3d8: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x53a3ddu); f_005d5a50();
    /* 0053a3dd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0053a3e0: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a3e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053a3e8: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a3ee: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0053a3f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53a3f6u); call_ind(t); }
    /* 0053a3f6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053a3f9: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a3ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053a401: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a407: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0053a40d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53a40fu); call_ind(t); }
    /* 0053a40f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0053a412: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a418: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x53a41du); f_005da8a0();
    /* 0053a41d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0053a420: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a426: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x53a42bu); f_005dac90();
    /* 0053a42b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0053a42e: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a434: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x53a439u); f_005da8c0();
    /* 0053a439: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053a43c: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0053a43f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a440: mov ecx, dword ptr [0x7933e8] */ r_ecx = R32((u32)(0x7933e8u));
    /* 0053a446: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x53a44bu); f_005daa20();
    /* 0053a44b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053a44d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0053a450: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0053a453: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053a454: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53a459u); f_005dcb00();
    /* 0053a459: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a45c: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 0053a462: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0053a465: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0053a46c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0053a473: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053a476: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a477: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x53a47cu); f_005dcb00();
    /* 0053a47c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a47f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0053a482: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053a485: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053a487: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053a48a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0053a48d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53a48fu); call_ind(t); }
    /* 0053a48f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053a492: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053a495: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053a498: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a49b: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a49e: jl 0x53a4a8 */ if ((fS!=fO)) goto L_0053a4a8;
L_0053a4a0:; BB(0x0053a4a0);
    /* 0053a4a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a4a3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0053a4a6: jmp 0x53a4ae */ goto L_0053a4ae;
L_0053a4a8:; BB(0x0053a4a8);
    /* 0053a4a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a4ab: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0053a4ae:; BB(0x0053a4ae);
    /* 0053a4ae: cmp dword ptr [ebp - 0x28], -4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a4b2: jge 0x53a4c6 */ if ((fS==fO)) goto L_0053a4c6;
L_0053a4b4:; BB(0x0053a4b4);
    /* 0053a4b4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a4b6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a4bbu); f_0062fbf0();
    /* 0053a4bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a4be: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053a4c1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0053a4c3: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_0053a4c6:; BB(0x0053a4c6);
    /* 0053a4c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a4c9: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053a4cc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a4cf: jge 0x53a60b */ if ((fS==fO)) goto L_0053a60b;
L_0053a4d5:; BB(0x0053a4d5);
    /* 0053a4d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0053a4d8: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a4db: jne 0x53a4fe */ if (!fZ) goto L_0053a4fe;
L_0053a4dd:; BB(0x0053a4dd);
    /* 0053a4dd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a4e0: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a4e3: jge 0x53a4fc */ if ((fS==fO)) goto L_0053a4fc;
L_0053a4e5:; BB(0x0053a4e5);
    /* 0053a4e5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053a4e8: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053a4eb: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a4ee: jg 0x53a4fc */ if ((!fZ&&fS==fO)) goto L_0053a4fc;
L_0053a4f0:; BB(0x0053a4f0);
    /* 0053a4f0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053a4f3: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a4f6: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a4f9: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0053a4fc:; BB(0x0053a4fc);
    /* 0053a4fc: jmp 0x53a55b */ goto L_0053a55b;
L_0053a4fe:; BB(0x0053a4fe);
    /* 0053a4fe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053a501: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a504: jge 0x53a55b */ if ((fS==fO)) goto L_0053a55b;
L_0053a506:; BB(0x0053a506);
    /* 0053a506: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053a509: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053a50c: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a50f: jg 0x53a530 */ if ((!fZ&&fS==fO)) goto L_0053a530;
L_0053a511:; BB(0x0053a511);
    /* 0053a511: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053a514: sub esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0053a517: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a519: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a51eu); f_0062fbf0();
    /* 0053a51e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a521: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a523: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a526: mov eax, esi */ r_eax = r_esi;
    /* 0053a528: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a529: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a529, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a529, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a52b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0053a52e: jmp 0x53a55b */ goto L_0053a55b;
L_0053a530:; BB(0x0053a530);
    /* 0053a530: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053a533: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a534: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053a537: call 0x53a140 */ r_esp -= 4; W32(r_esp, 0x53a53cu); f_0053a140();
    /* 0053a53c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053a53f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a541: je 0x53a55b */ if (fZ) goto L_0053a55b;
L_0053a543:; BB(0x0053a543);
    /* 0053a543: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a545: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a54au); f_0062fbf0();
    /* 0053a54a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a54d: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a54f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a552: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053a555: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a556: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a556, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a556, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a558: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0053a55b:; BB(0x0053a55b);
    /* 0053a55b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a55e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a55f: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0053a564: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a564, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a564, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a566: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a568: je 0x53a575 */ if (fZ) goto L_0053a575;
L_0053a56a:; BB(0x0053a56a);
    /* 0053a56a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a56d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053a570: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0053a573: jmp 0x53a55b */ goto L_0053a55b;
L_0053a575:; BB(0x0053a575);
    /* 0053a575: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a579: je 0x53a60b */ if (fZ) goto L_0053a60b;
L_0053a57f:; BB(0x0053a57f);
    /* 0053a57f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a582: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a585: jge 0x53a58d */ if ((fS==fO)) goto L_0053a58d;
L_0053a587:; BB(0x0053a587);
    /* 0053a587: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053a58a: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_0053a58d:; BB(0x0053a58d);
    /* 0053a58d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a590: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a593: jle 0x53a59b */ if ((fZ||fS!=fO)) goto L_0053a59b;
L_0053a595:; BB(0x0053a595);
    /* 0053a595: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a598: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0053a59b:; BB(0x0053a59b);
    /* 0053a59b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a59e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a59f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053a5a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5a3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053a5a6: call 0x539ed0 */ r_esp -= 4; W32(r_esp, 0x53a5abu); f_00539ed0();
    /* 0053a5ab: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053a5ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a5b0: jne 0x53a5bd */ if (!fZ) goto L_0053a5bd;
L_0053a5b2:; BB(0x0053a5b2);
    /* 0053a5b2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a5b5: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a5b8: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0053a5bb: jmp 0x53a59b */ goto L_0053a59b;
L_0053a5bd:; BB(0x0053a5bd);
    /* 0053a5bd: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a5c0: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a5c3: jl 0x53a5cd */ if ((fS!=fO)) goto L_0053a5cd;
L_0053a5c5:; BB(0x0053a5c5);
    /* 0053a5c5: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a5c8: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a5cb: jle 0x53a5e4 */ if ((fZ||fS!=fO)) goto L_0053a5e4;
L_0053a5cd:; BB(0x0053a5cd);
    /* 0053a5cd: push 0x123 */ { u32 v = 0x123u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5d2: push 0x6c59c8 */ { u32 v = 0x6c59c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5d7: push 0x6c5a6c */ { u32 v = 0x6c5a6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5dc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x53a5e1u); f_005e9f20();
    /* 0053a5e1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053a5e4:; BB(0x0053a5e4);
    /* 0053a5e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5e6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0053a5e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a5ea: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x53a5efu); f_0064c8a0();
    /* 0053a5ef: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a5f2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0053a5f5: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0053a5f8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053a5fb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0053a5fe: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0053a600: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0053a603: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0053a606: jmp 0x53a734 */ goto L_0053a734;
L_0053a60b:; BB(0x0053a60b);
    /* 0053a60b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a60d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a612u); f_0062fbf0();
    /* 0053a612: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a615: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053a618: imul eax, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053a61c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0053a61f: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0053a622: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a624: fstp qword ptr [ebp - 0x5c] */ W_F64((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 0053a627: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a62cu); f_0062fbf0();
    /* 0053a62c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a62f: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a631: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a634: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053a637: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a638: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a638, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a638, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a63a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0053a63d: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 0053a640: fmul qword ptr [ebp - 0x5c] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffa4u));
    /* 0053a643: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053a646: imul edx, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053a64a: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0053a64d: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 0053a650: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a652: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053a654: fstp qword ptr [ebp - 0x6c] */ W_F64((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 0053a657: fstp qword ptr [ebp - 0x74] */ W_F64((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 0053a65a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x53a65fu); f_0062fbf0();
    /* 0053a65f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a662: mov ecx, eax */ r_ecx = r_eax;
    /* 0053a664: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a667: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053a66a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a66b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a66b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a66b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a66d: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0053a670: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 0053a673: fmul qword ptr [ebp - 0x74] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffff8cu));
    /* 0053a676: fadd qword ptr [ebp - 0x6c] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff94u));
    /* 0053a679: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x53a67eu); f_00686cc0();
    /* 0053a67e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0053a681: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a684: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a685: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0053a687: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0053a689: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0053a68c:; BB(0x0053a68c);
    /* 0053a68c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a68f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0053a690: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0053a695: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0053a695, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0053a695, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0053a697: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a699: je 0x53a6a6 */ if (fZ) goto L_0053a6a6;
L_0053a69b:; BB(0x0053a69b);
    /* 0053a69b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a69e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053a6a1: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053a6a4: jmp 0x53a68c */ goto L_0053a68c;
L_0053a6a6:; BB(0x0053a6a6);
    /* 0053a6a6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a6a9: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a6ac: jge 0x53a6b4 */ if ((fS==fO)) goto L_0053a6b4;
L_0053a6ae:; BB(0x0053a6ae);
    /* 0053a6ae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053a6b1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0053a6b4:; BB(0x0053a6b4);
    /* 0053a6b4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a6b7: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a6ba: jle 0x53a6c2 */ if ((fZ||fS!=fO)) goto L_0053a6c2;
L_0053a6bc:; BB(0x0053a6bc);
    /* 0053a6bc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0053a6bf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0053a6c2:; BB(0x0053a6c2);
    /* 0053a6c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a6c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a6c6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053a6c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a6ca: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053a6cd: call 0x539ed0 */ r_esp -= 4; W32(r_esp, 0x53a6d2u); f_00539ed0();
    /* 0053a6d2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0053a6d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053a6d7: jne 0x53a6e4 */ if (!fZ) goto L_0053a6e4;
L_0053a6d9:; BB(0x0053a6d9);
    /* 0053a6d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a6dc: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0053a6df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053a6e2: jmp 0x53a6c2 */ goto L_0053a6c2;
L_0053a6e4:; BB(0x0053a6e4);
    /* 0053a6e4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a6e7: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a6ea: jge 0x53a6f3 */ if ((fS==fO)) goto L_0053a6f3;
L_0053a6ec:; BB(0x0053a6ec);
    /* 0053a6ec: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0053a6f3:; BB(0x0053a6f3);
    /* 0053a6f3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a6f6: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053a6f9: jle 0x53a712 */ if ((fZ||fS!=fO)) goto L_0053a712;
L_0053a6fb:; BB(0x0053a6fb);
    /* 0053a6fb: push 0x13e */ { u32 v = 0x13eu; r_esp -= 4; W32(r_esp, v); }
    /* 0053a700: push 0x6c59c8 */ { u32 v = 0x6c59c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a705: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a70a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x53a70fu); f_005e9f20();
    /* 0053a70f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053a712:; BB(0x0053a712);
    /* 0053a712: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053a714: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053a717: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053a718: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x53a71du); f_0064c8a0();
    /* 0053a71d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053a720: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0053a723: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0053a726: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053a729: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053a72c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0053a72e: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0053a731: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0053a734:; BB(0x0053a734);
    /* 0053a734: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053a735: mov esp, ebp */ r_esp = r_ebp;
    /* 0053a737: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053a738: ret 8 */ FN_RET(0x0053a3c0); r_esp += 12; return;
}

