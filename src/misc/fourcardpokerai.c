#include "protos.h"

void f_0058ff40(void) /* fourcardpokerai::func_0058ff40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0058ff40);
    /* 0058ff40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058ff41: mov ebp, esp */ r_ebp = r_esp;
    /* 0058ff43: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058ff46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058ff47: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0058ff4a: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 0058ff4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058ff51: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0058ff57: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0058ff5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ff5fu); call_ind(t); }
    /* 0058ff5f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0058ff62: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0058ff68: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058ff6a: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 0058ff70: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0058ff76: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58ff78u); call_ind(t); }
    /* 0058ff78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0058ff7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058ff7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ff7f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x58ff84u); f_005dcb00();
    /* 0058ff84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ff87: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0058ff8a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058ff8d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0058ff8f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058ff92: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0058ff95: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58ff97u); call_ind(t); }
    /* 0058ff97: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058ff9a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ff9d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0058ffa0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0058ffa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ffa4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x58ffa9u); f_005dcb00();
    /* 0058ffa9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ffac: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 0058ffb2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0058ffb5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0058ffb7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x58ffbcu); f_0062fbf0();
    /* 0058ffbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ffbf: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058ffc2: jl 0x58ffd0 */ if ((fS!=fO)) goto L_0058ffd0;
L_0058ffc4:; BB(0x0058ffc4);
    /* 0058ffc4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0058ffc7: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ffca: jne 0x59012a */ if (!fZ) goto L_0059012a;
L_0058ffd0:; BB(0x0058ffd0);
    /* 0058ffd0: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058ffd3: imul esi, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ffd7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ffd9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x58ffdeu); f_0062fbf0();
    /* 0058ffde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ffe1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058ffe4: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0058ffe7: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0058ffea: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 0058ffed: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ffef: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0058fff2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x58fff7u); f_0062fbf0();
    /* 0058fff7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058fffa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058fffd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00590000: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00590003: fdivr qword ptr [ebp - 0x30] */ ST(0) = R_F64((u32)(r_ebp+0xffffffd0u)) / ST(0);
    /* 00590006: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00590009: imul ecx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059000d: imul ecx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590011: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00590014: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 00590017: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00590019: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059001b: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0059001e: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00590021: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x590026u); f_0062fbf0();
    /* 00590026: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590029: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059002c: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0059002f: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00590032: fdivr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) / ST(0);
    /* 00590035: fadd qword ptr [ebp - 0x40] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc0u));
    /* 00590038: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x59003du); f_00686cc0();
    /* 0059003d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00590040: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00590042: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x590047u); f_0062fbf0();
    /* 00590047: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059004a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059004d: jne 0x59005f */ if (!fZ) goto L_0059005f;
L_0059004f:; BB(0x0059004f);
    /* 0059004f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590052: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00590053: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00590058: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00590058, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00590058, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059005a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0059005d: jmp 0x59006a */ goto L_0059006a;
L_0059005f:; BB(0x0059005f);
    /* 0059005f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590062: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00590063: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00590065: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00590067: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_0059006a:; BB(0x0059006a);
    /* 0059006a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059006d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00590070: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590073: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00590074: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00590079: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00590079, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00590079, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059007b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059007d: je 0x590097 */ if (fZ) goto L_00590097;
L_0059007f:; BB(0x0059007f);
    /* 0059007f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590082: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00590083: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00590088: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00590088, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00590088, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059008a: mov eax, 5 */ r_eax = 0x5u;
    /* 0059008f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00590091: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590094: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00590097:; BB(0x00590097);
    /* 00590097: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059009a: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059009d: jge 0x5900a7 */ if ((fS==fO)) goto L_005900a7;
L_0059009f:; BB(0x0059009f);
    /* 0059009f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005900a2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005900a5: jmp 0x5900b5 */ goto L_005900b5;
L_005900a7:; BB(0x005900a7);
    /* 005900a7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005900aa: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005900ad: jle 0x5900b5 */ if ((fZ||fS!=fO)) goto L_005900b5;
L_005900af:; BB(0x005900af);
    /* 005900af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005900b2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005900b5:; BB(0x005900b5);
    /* 005900b5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005900b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005900ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005900bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005900be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005900bf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005900c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005900c3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005900c6: call 0x58feb0 */ r_esp -= 4; W32(r_esp, 0x5900cbu); f_0058feb0();
    /* 005900cb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005900ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005900d0: jne 0x5900dd */ if (!fZ) goto L_005900dd;
L_005900d2:; BB(0x005900d2);
    /* 005900d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005900d5: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005900d8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005900db: jmp 0x5900b5 */ goto L_005900b5;
L_005900dd:; BB(0x005900dd);
    /* 005900dd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005900e0: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005900e3: jge 0x5900ec */ if ((fS==fO)) goto L_005900ec;
L_005900e5:; BB(0x005900e5);
    /* 005900e5: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005900ec:; BB(0x005900ec);
    /* 005900ec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005900ef: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005900f2: jle 0x590108 */ if ((fZ||fS!=fO)) goto L_00590108;
L_005900f4:; BB(0x005900f4);
    /* 005900f4: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 005900f6: push 0x6cdf4c */ { u32 v = 0x6cdf4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005900fb: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00590100: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x590105u); f_005e9f20();
    /* 00590105: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00590108:; BB(0x00590108);
    /* 00590108: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059010a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059010d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059010e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x590113u); f_0064c8a0();
    /* 00590113: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590116: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00590119: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0059011c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059011f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590122: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00590124: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00590127: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_0059012a:; BB(0x0059012a);
    /* 0059012a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0059012b: mov esp, ebp */ r_esp = r_ebp;
    /* 0059012d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059012e: ret 0xc */ FN_RET(0x0058ff40); r_esp += 16; return;
}

void f_00590140(void) /* fourcardpokerai::func_00590140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590140);
    /* 00590140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590141: mov ebp, esp */ r_ebp = r_esp;
    /* 00590143: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590146: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00590147: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0059014a: mov eax, dword ptr [0x7935a4] */ r_eax = R32((u32)(0x7935a4u));
    /* 0059014f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00590151: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00590157: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0059015d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59015fu); call_ind(t); }
    /* 0059015f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00590162: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00590168: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059016a: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00590170: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 00590176: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x590178u); call_ind(t); }
    /* 00590178: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0059017b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059017e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059017f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x590184u); f_005dcb00();
    /* 00590184: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590187: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0059018a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059018d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059018f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00590192: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00590195: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x590197u); call_ind(t); }
    /* 00590197: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0059019a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059019d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005901a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005901a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005901a4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5901a9u); f_005dcb00();
    /* 005901a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005901ac: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 005901b2: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005901b5: cmp dword ptr [ebp - 0x10], -4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005901b9: jge 0x5901cd */ if ((fS==fO)) goto L_005901cd;
L_005901bb:; BB(0x005901bb);
    /* 005901bb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005901bd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5901c2u); f_0062fbf0();
    /* 005901c2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005901c5: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005901c8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005901ca: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005901cd:; BB(0x005901cd);
    /* 005901cd: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 005901d0: imul esi, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005901d4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005901d6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5901dbu); f_0062fbf0();
    /* 005901db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005901de: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005901e1: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005901e4: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005901e7: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 005901ea: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005901ec: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 005901ef: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5901f4u); f_0062fbf0();
    /* 005901f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005901f7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005901fa: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005901fd: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00590200: fdivr qword ptr [ebp - 0x30] */ ST(0) = R_F64((u32)(r_ebp+0xffffffd0u)) / ST(0);
    /* 00590203: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00590206: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059020a: imul edx, dword ptr [ebp - 0x14] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xffffffecu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0059020e: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00590211: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 00590214: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00590216: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00590218: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0059021b: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0059021e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x590223u); f_0062fbf0();
    /* 00590223: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590226: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590229: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0059022c: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0059022f: fdivr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) / ST(0);
    /* 00590232: fadd qword ptr [ebp - 0x40] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc0u));
    /* 00590235: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x59023au); f_00686cc0();
    /* 0059023a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059023b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059023d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0059023f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00590242: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590245: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00590246: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059024b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059024b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059024b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059024d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059024f: je 0x590269 */ if (fZ) goto L_00590269;
L_00590251:; BB(0x00590251);
    /* 00590251: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590254: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00590255: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059025a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059025a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059025a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059025c: mov eax, 5 */ r_eax = 0x5u;
    /* 00590261: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00590263: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590266: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00590269:; BB(0x00590269);
    /* 00590269: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059026c: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059026f: jge 0x590279 */ if ((fS==fO)) goto L_00590279;
L_00590271:; BB(0x00590271);
    /* 00590271: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00590274: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00590277: jmp 0x590287 */ goto L_00590287;
L_00590279:; BB(0x00590279);
    /* 00590279: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059027c: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059027f: jle 0x590287 */ if ((fZ||fS!=fO)) goto L_00590287;
L_00590281:; BB(0x00590281);
    /* 00590281: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590284: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00590287:; BB(0x00590287);
    /* 00590287: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059028a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059028b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059028e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059028f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590292: call 0x58fe80 */ r_esp -= 4; W32(r_esp, 0x590297u); f_0058fe80();
    /* 00590297: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059029a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059029c: jne 0x5902a9 */ if (!fZ) goto L_005902a9;
L_0059029e:; BB(0x0059029e);
    /* 0059029e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005902a1: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005902a4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005902a7: jmp 0x590287 */ goto L_00590287;
L_005902a9:; BB(0x005902a9);
    /* 005902a9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005902ac: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005902af: jge 0x5902b8 */ if ((fS==fO)) goto L_005902b8;
L_005902b1:; BB(0x005902b1);
    /* 005902b1: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_005902b8:; BB(0x005902b8);
    /* 005902b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005902bb: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005902be: jle 0x5902d4 */ if ((fZ||fS!=fO)) goto L_005902d4;
L_005902c0:; BB(0x005902c0);
    /* 005902c0: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 005902c2: push 0x6cdf4c */ { u32 v = 0x6cdf4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005902c7: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005902cc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5902d1u); f_005e9f20();
    /* 005902d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005902d4:; BB(0x005902d4);
    /* 005902d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005902d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005902d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005902da: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5902dfu); f_0064c8a0();
    /* 005902df: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005902e2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005902e5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005902e8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005902eb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005902ee: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005902f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005902f3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005902f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005902f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005902f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005902fa: ret 8 */ FN_RET(0x00590140); r_esp += 12; return;
}

void f_00590480(void) /* fourcardpokerai::func_00590480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00590480);
    /* 00590480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00590481: mov ebp, esp */ r_ebp = r_esp;
    /* 00590483: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00590486: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00590487: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0059048a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059048d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059048e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x590493u); f_005dcb00();
    /* 00590493: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590496: mov ecx, eax */ r_ecx = r_eax;
    /* 00590498: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x59049du); f_005d5a50();
    /* 0059049d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005904a0: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005904a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005904a8: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005904ae: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 005904b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5904b6u); call_ind(t); }
    /* 005904b6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005904b9: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005904bf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005904c1: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005904c7: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 005904cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5904cfu); call_ind(t); }
    /* 005904cf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005904d2: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005904d8: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x5904ddu); f_005da8a0();
    /* 005904dd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005904e0: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005904e6: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5904ebu); f_005dac90();
    /* 005904eb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005904ee: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 005904f4: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x5904f9u); f_005da8c0();
    /* 005904f9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005904fc: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005904ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00590500: mov ecx, dword ptr [0x7935a4] */ r_ecx = R32((u32)(0x7935a4u));
    /* 00590506: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x59050bu); f_005daa20();
    /* 0059050b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059050d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00590510: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00590513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590514: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x590519u); f_005dcb00();
    /* 00590519: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059051c: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 00590522: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00590525: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0059052c: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00590533: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00590536: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590537: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x59053cu); f_005dcb00();
    /* 0059053c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059053f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00590542: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00590545: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00590547: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0059054a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0059054d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59054fu); call_ind(t); }
    /* 0059054f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00590552: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590555: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00590558: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059055b: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059055e: jl 0x590568 */ if ((fS!=fO)) goto L_00590568;
L_00590560:; BB(0x00590560);
    /* 00590560: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00590563: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00590566: jmp 0x59056e */ goto L_0059056e;
L_00590568:; BB(0x00590568);
    /* 00590568: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059056b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0059056e:; BB(0x0059056e);
    /* 0059056e: cmp dword ptr [ebp - 0x28], -4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590572: jge 0x590586 */ if ((fS==fO)) goto L_00590586;
L_00590574:; BB(0x00590574);
    /* 00590574: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00590576: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59057bu); f_0062fbf0();
    /* 0059057b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059057e: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00590581: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00590583: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00590586:; BB(0x00590586);
    /* 00590586: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590589: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059058c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059058f: jge 0x5906d8 */ if ((fS==fO)) goto L_005906d8;
L_00590595:; BB(0x00590595);
    /* 00590595: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00590598: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059059b: jne 0x5905be */ if (!fZ) goto L_005905be;
L_0059059d:; BB(0x0059059d);
    /* 0059059d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005905a0: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005905a3: jge 0x5905be */ if ((fS==fO)) goto L_005905be;
L_005905a5:; BB(0x005905a5);
    /* 005905a5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005905a8: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005905ab: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005905ae: jg 0x5905be */ if ((!fZ&&fS==fO)) goto L_005905be;
L_005905b0:; BB(0x005905b0);
    /* 005905b0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005905b3: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005905b6: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005905b9: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005905bc: jmp 0x59061b */ goto L_0059061b;
L_005905be:; BB(0x005905be);
    /* 005905be: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005905c1: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005905c4: jge 0x59061b */ if ((fS==fO)) goto L_0059061b;
L_005905c6:; BB(0x005905c6);
    /* 005905c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005905c9: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005905cc: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005905cf: jg 0x5905f0 */ if ((!fZ&&fS==fO)) goto L_005905f0;
L_005905d1:; BB(0x005905d1);
    /* 005905d1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005905d4: sub esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005905d7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005905d9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5905deu); f_0062fbf0();
    /* 005905de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005905e1: mov ecx, eax */ r_ecx = r_eax;
    /* 005905e3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005905e6: mov eax, esi */ r_eax = r_esi;
    /* 005905e8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005905e9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005905e9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005905e9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005905eb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005905ee: jmp 0x59061b */ goto L_0059061b;
L_005905f0:; BB(0x005905f0);
    /* 005905f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005905f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005905f4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005905f7: call 0x590980 */ r_esp -= 4; W32(r_esp, 0x5905fcu); f_00590980();
    /* 005905fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005905ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590601: je 0x59061b */ if (fZ) goto L_0059061b;
L_00590603:; BB(0x00590603);
    /* 00590603: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00590605: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59060au); f_0062fbf0();
    /* 0059060a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059060d: mov ecx, eax */ r_ecx = r_eax;
    /* 0059060f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00590612: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590615: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00590616: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00590616, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00590616, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00590618: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_0059061b:; BB(0x0059061b);
    /* 0059061b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059061e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059061f: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00590624: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00590624, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00590624, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00590626: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590628: je 0x590642 */ if (fZ) goto L_00590642;
L_0059062a:; BB(0x0059062a);
    /* 0059062a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059062d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059062e: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00590633: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00590633, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00590633, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00590635: mov eax, 5 */ r_eax = 0x5u;
    /* 0059063a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059063c: add eax, dword ptr [ebp - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059063f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00590642:; BB(0x00590642);
    /* 00590642: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590646: jle 0x5906d8 */ if ((fZ||fS!=fO)) goto L_005906d8;
L_0059064c:; BB(0x0059064c);
    /* 0059064c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059064f: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590652: jge 0x59065a */ if ((fS==fO)) goto L_0059065a;
L_00590654:; BB(0x00590654);
    /* 00590654: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590657: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
L_0059065a:; BB(0x0059065a);
    /* 0059065a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059065d: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590660: jle 0x590668 */ if ((fZ||fS!=fO)) goto L_00590668;
L_00590662:; BB(0x00590662);
    /* 00590662: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00590665: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_00590668:; BB(0x00590668);
    /* 00590668: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059066b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059066c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059066f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590670: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590673: call 0x58fe80 */ r_esp -= 4; W32(r_esp, 0x590678u); f_0058fe80();
    /* 00590678: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0059067b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059067d: jne 0x59068a */ if (!fZ) goto L_0059068a;
L_0059067f:; BB(0x0059067f);
    /* 0059067f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00590682: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00590685: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00590688: jmp 0x590668 */ goto L_00590668;
L_0059068a:; BB(0x0059068a);
    /* 0059068a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0059068d: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590690: jl 0x59069a */ if ((fS!=fO)) goto L_0059069a;
L_00590692:; BB(0x00590692);
    /* 00590692: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00590695: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590698: jle 0x5906b1 */ if ((fZ||fS!=fO)) goto L_005906b1;
L_0059069a:; BB(0x0059069a);
    /* 0059069a: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059069f: push 0x6cdf4c */ { u32 v = 0x6cdf4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005906a4: push 0x6c5a6c */ { u32 v = 0x6c5a6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005906a9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5906aeu); f_005e9f20();
    /* 005906ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005906b1:; BB(0x005906b1);
    /* 005906b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005906b3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005906b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005906b7: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5906bcu); f_0064c8a0();
    /* 005906bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005906bf: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005906c2: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005906c5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005906c8: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005906cb: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005906cd: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005906d0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005906d3: jmp 0x590808 */ goto L_00590808;
L_005906d8:; BB(0x005906d8);
    /* 005906d8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005906db: imul esi, dword ptr [ebp - 0x2c] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xffffffd4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005906df: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005906e1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5906e6u); f_0062fbf0();
    /* 005906e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005906e9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005906ec: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005906ef: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 005906f2: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 005906f5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005906f7: fstp qword ptr [ebp - 0x5c] */ W_F64((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 005906fa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5906ffu); f_0062fbf0();
    /* 005906ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590702: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590705: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00590708: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 0059070b: fdivr qword ptr [ebp - 0x5c] */ ST(0) = R_F64((u32)(r_ebp+0xffffffa4u)) / ST(0);
    /* 0059070e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00590711: imul ecx, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590715: imul ecx, dword ptr [ebp - 0x2c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffd4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00590719: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0059071c: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 0059071f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00590721: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00590723: fstp qword ptr [ebp - 0x6c] */ W_F64((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00590726: fstp qword ptr [ebp - 0x74] */ W_F64((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 00590729: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x59072eu); f_0062fbf0();
    /* 0059072e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590731: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590734: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00590737: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 0059073a: fdivr qword ptr [ebp - 0x74] */ ST(0) = R_F64((u32)(r_ebp+0xffffff8cu)) / ST(0);
    /* 0059073d: fadd qword ptr [ebp - 0x6c] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff94u));
    /* 00590740: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x590745u); f_00686cc0();
    /* 00590745: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00590748: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059074b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0059074c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0059074e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00590750: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00590753: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590756: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00590757: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059075c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059075c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059075c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059075e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590760: je 0x59077a */ if (fZ) goto L_0059077a;
L_00590762:; BB(0x00590762);
    /* 00590762: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590765: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00590766: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0059076b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0059076b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0059076b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0059076d: mov eax, 5 */ r_eax = 0x5u;
    /* 00590772: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00590774: add eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590777: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0059077a:; BB(0x0059077a);
    /* 0059077a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059077d: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590780: jge 0x590788 */ if ((fS==fO)) goto L_00590788;
L_00590782:; BB(0x00590782);
    /* 00590782: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590785: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00590788:; BB(0x00590788);
    /* 00590788: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059078b: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059078e: jle 0x590796 */ if ((fZ||fS!=fO)) goto L_00590796;
L_00590790:; BB(0x00590790);
    /* 00590790: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00590793: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00590796:; BB(0x00590796);
    /* 00590796: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590799: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059079a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059079d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059079e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005907a1: call 0x58fe80 */ r_esp -= 4; W32(r_esp, 0x5907a6u); f_0058fe80();
    /* 005907a6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005907a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907ab: jne 0x5907b8 */ if (!fZ) goto L_005907b8;
L_005907ad:; BB(0x005907ad);
    /* 005907ad: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005907b0: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005907b3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005907b6: jmp 0x590796 */ goto L_00590796;
L_005907b8:; BB(0x005907b8);
    /* 005907b8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005907bb: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005907be: jge 0x5907c7 */ if ((fS==fO)) goto L_005907c7;
L_005907c0:; BB(0x005907c0);
    /* 005907c0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005907c7:; BB(0x005907c7);
    /* 005907c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005907ca: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005907cd: jle 0x5907e6 */ if ((fZ||fS!=fO)) goto L_005907e6;
L_005907cf:; BB(0x005907cf);
    /* 005907cf: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005907d4: push 0x6cdf4c */ { u32 v = 0x6cdf4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005907d9: push 0x6c59b4 */ { u32 v = 0x6c59b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005907de: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5907e3u); f_005e9f20();
    /* 005907e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005907e6:; BB(0x005907e6);
    /* 005907e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005907e8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005907eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005907ec: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5907f1u); f_0064c8a0();
    /* 005907f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907f4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005907f7: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005907fa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005907fd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00590800: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00590802: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00590805: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_00590808:; BB(0x00590808);
    /* 00590808: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00590809: mov esp, ebp */ r_esp = r_ebp;
    /* 0059080b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059080c: ret 8 */ FN_RET(0x00590480); r_esp += 12; return;
}

