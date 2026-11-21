#include "protos.h"

void f_0044e770(void) /* PaiGowAI::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e770);
    /* 0044e770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e771: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e773: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e776: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0044e779: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e77c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x44e781u); f_005e9e20();
    /* 0044e781: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e784: mov dword ptr [eax], 0x6b949c */ W32((u32)(r_eax), 0x6b949cu);
    /* 0044e78a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044e791: jmp 0x44e79c */ goto L_0044e79c;
L_0044e793:; BB(0x0044e793);
    /* 0044e793: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e796: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044e799: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0044e79c:; BB(0x0044e79c);
    /* 0044e79c: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e7a0: jge 0x44e7b1 */ if ((fS==fO)) goto L_0044e7b1;
L_0044e7a2:; BB(0x0044e7a2);
    /* 0044e7a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e7a5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e7a8: mov word ptr [eax + edx*2 + 4], 0 */ W16((u32)(r_eax+r_edx*2+0x4u), 0x0u);
    /* 0044e7af: jmp 0x44e793 */ goto L_0044e793;
L_0044e7b1:; BB(0x0044e7b1);
    /* 0044e7b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e7b4: mov dword ptr [ecx + 0x14], 0xffffffff */ W32((u32)(r_ecx+0x14u), 0xffffffffu);
    /* 0044e7bb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e7be: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e7c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e7c1: ret  */ FN_RET(0x0044e770); r_esp += 4; return;
}

void f_0044e7f0(void) /* paigowai::func_0044e7f0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044e7f0);
    /* 0044e7f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044e7f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044e7f3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044e7f6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044e7f9: mov eax, dword ptr [0x790734] */ r_eax = R32((u32)(0x790734u));
    /* 0044e7fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044e800: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044e806: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0044e80c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44e80eu); call_ind(t); }
    /* 0044e80e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044e811: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044e817: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044e819: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044e81f: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0044e825: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44e827u); call_ind(t); }
    /* 0044e827: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044e82a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044e82d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e82e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e833u); f_005dcb00();
    /* 0044e833: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e836: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 0044e83c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0044e83f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044e842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044e843: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x44e848u); f_005dcb00();
    /* 0044e848: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e84b: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e84d: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x44e852u); f_005d5a50();
    /* 0044e852: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044e855: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044e858: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0044e85b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044e85e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e85f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044e862: call 0x44e970 */ r_esp -= 4; W32(r_esp, 0x44e867u); f_0044e970();
    /* 0044e867: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044e86a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e86d: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e870: jge 0x44e886 */ if ((fS==fO)) goto L_0044e886;
L_0044e872:; BB(0x0044e872);
    /* 0044e872: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e874: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e879: push 0x6b26f8 */ { u32 v = 0x6b26f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e87e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44e883u); f_005e9f20();
    /* 0044e883: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044e886:; BB(0x0044e886);
    /* 0044e886: cmp dword ptr [ebp - 0x10], -4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e88a: jge 0x44e89e */ if ((fS==fO)) goto L_0044e89e;
L_0044e88c:; BB(0x0044e88c);
    /* 0044e88c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e88e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44e893u); f_0062fbf0();
    /* 0044e893: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e896: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0044e899: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0044e89b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0044e89e:; BB(0x0044e89e);
    /* 0044e89e: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0044e8a4: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x44e8a9u); f_005da7b0();
    /* 0044e8a9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0044e8ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044e8ae: je 0x44e8c1 */ if (fZ) goto L_0044e8c1;
L_0044e8b0:; BB(0x0044e8b0);
    /* 0044e8b0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044e8b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e8b4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044e8b7: call 0x44edb0 */ r_esp -= 4; W32(r_esp, 0x44e8bcu); f_0044edb0();
    /* 0044e8bc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044e8bf: jmp 0x44e937 */ goto L_0044e937;
L_0044e8c1:; BB(0x0044e8c1);
    /* 0044e8c1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e8c3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44e8c8u); f_0062fbf0();
    /* 0044e8c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e8cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044e8ce: imul eax, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044e8d2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044e8d5: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 0044e8d8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e8da: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0044e8dd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44e8e2u); f_0062fbf0();
    /* 0044e8e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e8e5: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e8e7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044e8ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044e8ed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044e8ee: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044e8ee, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044e8ee, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044e8f0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0044e8f3: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0044e8f6: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 0044e8f9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0044e8fc: imul edx, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044e900: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0044e903: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0044e906: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e908: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044e90a: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0044e90d: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0044e910: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44e915u); f_0062fbf0();
    /* 0044e915: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e918: mov ecx, eax */ r_ecx = r_eax;
    /* 0044e91a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044e91d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044e920: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044e921: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044e921, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044e921, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044e923: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044e926: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0044e929: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0044e92c: fadd qword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc8u));
    /* 0044e92f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x44e934u); f_00686cc0();
    /* 0044e934: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0044e937:; BB(0x0044e937);
    /* 0044e937: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044e93a: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e93d: jle 0x44e945 */ if ((fZ||fS!=fO)) goto L_0044e945;
L_0044e93f:; BB(0x0044e93f);
    /* 0044e93f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044e942: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0044e945:; BB(0x0044e945);
    /* 0044e945: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044e948: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e94b: jle 0x44e953 */ if ((fZ||fS!=fO)) goto L_0044e953;
L_0044e94d:; BB(0x0044e94d);
    /* 0044e94d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0044e950: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_0044e953:; BB(0x0044e953);
    /* 0044e953: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044e956: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044e959: jge 0x44e961 */ if ((fS==fO)) goto L_0044e961;
L_0044e95b:; BB(0x0044e95b);
    /* 0044e95b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044e95e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0044e961:; BB(0x0044e961);
    /* 0044e961: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044e964: mov esp, ebp */ r_esp = r_ebp;
    /* 0044e966: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e967: ret 4 */ FN_RET(0x0044e7f0); r_esp += 8; return;
}

void f_0044f700(void) /* paigowai::func_0044f700 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f700);
    /* 0044f700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f701: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f707: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f70b: jle 0x44f713 */ if ((fZ||fS!=fO)) goto L_0044f713;
L_0044f70d:; BB(0x0044f70d);
    /* 0044f70d: cmp dword ptr [ebp + 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f711: jl 0x44f72a */ if ((fS!=fO)) goto L_0044f72a;
L_0044f713:; BB(0x0044f713);
    /* 0044f713: push 0x152 */ { u32 v = 0x152u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f718: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f71d: push 0x6b94b8 */ { u32 v = 0x6b94b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f722: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44f727u); f_005e9f20();
    /* 0044f727: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f72a:; BB(0x0044f72a);
    /* 0044f72a: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f72e: jne 0x44f737 */ if (!fZ) goto L_0044f737;
L_0044f730:; BB(0x0044f730);
    /* 0044f730: mov dword ptr [ebp + 8], 0xe */ W32((u32)(r_ebp+0x8u), 0xeu);
L_0044f737:; BB(0x0044f737);
    /* 0044f737: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044f73a: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f73d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f740: mov eax, dword ptr [edx + ecx + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx+0x18u));
    /* 0044f744: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f746: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f747: ret 4 */ FN_RET(0x0044f700); r_esp += 8; return;
}

void f_0044f750(void) /* paigowai::func_0044f750 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f750);
    /* 0044f750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f751: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f753: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f757: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f75b: jle 0x44f763 */ if ((fZ||fS!=fO)) goto L_0044f763;
L_0044f75d:; BB(0x0044f75d);
    /* 0044f75d: cmp dword ptr [ebp + 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f761: jl 0x44f77a */ if ((fS!=fO)) goto L_0044f77a;
L_0044f763:; BB(0x0044f763);
    /* 0044f763: push 0x15b */ { u32 v = 0x15bu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f768: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f76d: push 0x6b94b8 */ { u32 v = 0x6b94b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f772: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44f777u); f_005e9f20();
    /* 0044f777: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f77a:; BB(0x0044f77a);
    /* 0044f77a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f77e: jle 0x44f786 */ if ((fZ||fS!=fO)) goto L_0044f786;
L_0044f780:; BB(0x0044f780);
    /* 0044f780: cmp dword ptr [ebp + 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f784: jl 0x44f79d */ if ((fS!=fO)) goto L_0044f79d;
L_0044f786:; BB(0x0044f786);
    /* 0044f786: push 0x15c */ { u32 v = 0x15cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044f78b: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f790: push 0x6b94d0 */ { u32 v = 0x6b94d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f795: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44f79au); f_005e9f20();
    /* 0044f79a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f79d:; BB(0x0044f79d);
    /* 0044f79d: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f7a1: jne 0x44f7aa */ if (!fZ) goto L_0044f7aa;
L_0044f7a3:; BB(0x0044f7a3);
    /* 0044f7a3: mov dword ptr [ebp + 8], 0xe */ W32((u32)(r_ebp+0x8u), 0xeu);
L_0044f7aa:; BB(0x0044f7aa);
    /* 0044f7aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044f7ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f7ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f7b1: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x44f7b6u); f_0044f700();
    /* 0044f7b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f7b8: je 0x44f7d5 */ if (fZ) goto L_0044f7d5;
L_0044f7ba:; BB(0x0044f7ba);
    /* 0044f7ba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f7bd: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f7c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f7c3: lea edx, [ecx + eax + 0x18] */ r_edx = (u32)(r_ecx+r_eax+0x18u);
    /* 0044f7c7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0044f7ca: cmp dword ptr [edx + eax*4 + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f7cf: je 0x44f7d5 */ if (fZ) goto L_0044f7d5;
L_0044f7d1:; BB(0x0044f7d1);
    /* 0044f7d1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0044f7d3: jmp 0x44f7d7 */ goto L_0044f7d7;
L_0044f7d5:; BB(0x0044f7d5);
    /* 0044f7d5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0044f7d7:; BB(0x0044f7d7);
    /* 0044f7d7: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f7d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f7da: ret 8 */ FN_RET(0x0044f750); r_esp += 12; return;
}

void f_0044f7e0(void) /* paigowai::func_0044f7e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f7e0);
    /* 0044f7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f7e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f7e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f7e7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f7eb: jle 0x44f7f3 */ if ((fZ||fS!=fO)) goto L_0044f7f3;
L_0044f7ed:; BB(0x0044f7ed);
    /* 0044f7ed: cmp dword ptr [ebp + 8], 0xf */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f7f1: jl 0x44f80a */ if ((fS!=fO)) goto L_0044f80a;
L_0044f7f3:; BB(0x0044f7f3);
    /* 0044f7f3: push 0x169 */ { u32 v = 0x169u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f7f8: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f7fd: push 0x6b94b8 */ { u32 v = 0x6b94b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f802: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44f807u); f_005e9f20();
    /* 0044f807: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f80a:; BB(0x0044f80a);
    /* 0044f80a: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044f80e: jne 0x44f817 */ if (!fZ) goto L_0044f817;
L_0044f810:; BB(0x0044f810);
    /* 0044f810: mov dword ptr [ebp + 8], 0xe */ W32((u32)(r_ebp+0x8u), 0xeu);
L_0044f817:; BB(0x0044f817);
    /* 0044f817: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044f81a: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044f81d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f820: lea eax, [edx + ecx + 0x18] */ r_eax = (u32)(r_edx+r_ecx+0x18u);
    /* 0044f824: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044f827: mov eax, dword ptr [eax + ecx*4 + 0x18] */ r_eax = R32((u32)(r_eax+r_ecx*4+0x18u));
    /* 0044f82b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f82d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f82e: ret 8 */ FN_RET(0x0044f7e0); r_esp += 12; return;
}

void f_0044f840(void) /* paigowai::func_0044f840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0044f840);
    /* 0044f840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044f841: mov ebp, esp */ r_ebp = r_esp;
    /* 0044f843: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f844: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044f845: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0044f848: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f84c: jle 0x44f854 */ if ((fZ||fS!=fO)) goto L_0044f854;
L_0044f84e:; BB(0x0044f84e);
    /* 0044f84e: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f852: jl 0x44f86b */ if ((fS!=fO)) goto L_0044f86b;
L_0044f854:; BB(0x0044f854);
    /* 0044f854: push 0x172 */ { u32 v = 0x172u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f859: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f85e: push 0x6b9504 */ { u32 v = 0x6b9504u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f863: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44f868u); f_005e9f20();
    /* 0044f868: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f86b:; BB(0x0044f86b);
    /* 0044f86b: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f86f: jle 0x44f877 */ if ((fZ||fS!=fO)) goto L_0044f877;
L_0044f871:; BB(0x0044f871);
    /* 0044f871: cmp dword ptr [ebp + 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f875: jl 0x44f88e */ if ((fS!=fO)) goto L_0044f88e;
L_0044f877:; BB(0x0044f877);
    /* 0044f877: push 0x173 */ { u32 v = 0x173u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f87c: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f881: push 0x6b94e8 */ { u32 v = 0x6b94e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044f886: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44f88bu); f_005e9f20();
    /* 0044f88b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044f88e:; BB(0x0044f88e);
    /* 0044f88e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044f891: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f894: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0044f899: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f89a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f89d: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x44f8a2u); f_0044f680();
    /* 0044f8a2: mov esi, eax */ r_esi = r_eax;
    /* 0044f8a4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044f8a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f8aa: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0044f8af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044f8b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f8b3: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x44f8b8u); f_0044f680();
    /* 0044f8b8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044f8ba: jl 0x44f8e0 */ if ((fS!=fO)) goto L_0044f8e0;
L_0044f8bc:; BB(0x0044f8bc);
    /* 0044f8bc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044f8bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f8c2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f8c5: mov ax, word ptr [ecx + eax*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0044f8ca: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0044f8cd: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0044f8d0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044f8d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f8d6: mov dx, word ptr [eax + edx*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0044f8db: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0044f8de: jmp 0x44f902 */ goto L_0044f902;
L_0044f8e0:; BB(0x0044f8e0);
    /* 0044f8e0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0044f8e3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0044f8e6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f8e9: mov cx, word ptr [edx + ecx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0044f8ee: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0044f8f1: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0044f8f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044f8f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0044f8fa: mov ax, word ptr [ecx + eax*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0044f8ff: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_0044f902:; BB(0x0044f902);
    /* 0044f902: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044f903: mov esp, ebp */ r_esp = r_ebp;
    /* 0044f905: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044f906: ret 0x10 */ FN_RET(0x0044f840); r_esp += 20; return;
}

void f_004512c0(void) /* paigowai::func_004512c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004512c0);
    /* 004512c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004512c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004512c3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004512c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004512c9: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 004512cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004512cd: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 004512d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004512d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004512d4: call 0x450e70 */ r_esp -= 4; W32(r_esp, 0x4512d9u); f_00450e70();
    /* 004512d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004512dc: cmp dword ptr [edx + 0x2f4], 7 */ {  u32 a = R32((u32)(r_edx+0x2f4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004512e3: jne 0x45142a */ if (!fZ) goto L_0045142a;
L_004512e9:; BB(0x004512e9);
    /* 004512e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004512ec: movzx ecx, byte ptr [eax + 0x2be] */ r_ecx = (u32)R8((u32)(r_eax+0x2beu));
    /* 004512f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004512f5: je 0x45131f */ if (fZ) goto L_0045131f;
L_004512f7:; BB(0x004512f7);
    /* 004512f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004512fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004512fd: mov ecx, dword ptr [edx + 0x2fc] */ r_ecx = R32((u32)(r_edx+0x2fcu));
    /* 00451303: cmp ecx, dword ptr [eax + 0x2f0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451309: je 0x45131f */ if (fZ) goto L_0045131f;
L_0045130b:; BB(0x0045130b);
    /* 0045130b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045130e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00451311: mov ecx, dword ptr [edx + 0x2fc] */ r_ecx = R32((u32)(r_edx+0x2fcu));
    /* 00451317: cmp ecx, dword ptr [eax + 0x2ec] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045131d: jne 0x451336 */ if (!fZ) goto L_00451336;
L_0045131f:; BB(0x0045131f);
    /* 0045131f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00451322: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00451328: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045132b: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00451331: jmp 0x45142a */ goto L_0045142a;
L_00451336:; BB(0x00451336);
    /* 00451336: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451339: mov dx, word ptr [ecx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x4u))) & 0xffffu);
    /* 0045133d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045133e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451341: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x451346u); f_0044f6c0();
    /* 00451346: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00451348: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045134b: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0045134e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00451351: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451354: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00451357: mov ecx, dword ptr [edx + 0x2fc] */ r_ecx = R32((u32)(r_edx+0x2fcu));
    /* 0045135d: cmp ecx, dword ptr [eax + 0x2e8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451363: je 0x45138d */ if (fZ) goto L_0045138d;
L_00451365:; BB(0x00451365);
    /* 00451365: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451368: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045136b: mov ecx, dword ptr [edx + 0x2fc] */ r_ecx = R32((u32)(r_edx+0x2fcu));
    /* 00451371: cmp ecx, dword ptr [eax + 0x2e4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2e4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451377: je 0x45138d */ if (fZ) goto L_0045138d;
L_00451379:; BB(0x00451379);
    /* 00451379: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045137c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045137f: mov ecx, dword ptr [edx + 0x2fc] */ r_ecx = R32((u32)(r_edx+0x2fcu));
    /* 00451385: cmp ecx, dword ptr [eax + 0x2e0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045138b: jne 0x4513a9 */ if (!fZ) goto L_004513a9;
L_0045138d:; BB(0x0045138d);
    /* 0045138d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045138f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451393: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00451396: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451399: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0045139b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045139e: mov dword ptr [ecx], 2 */ W32((u32)(r_ecx), 0x2u);
    /* 004513a4: jmp 0x45142a */ goto L_0045142a;
L_004513a9:; BB(0x004513a9);
    /* 004513a9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004513ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004513af: mov ecx, dword ptr [edx + 0x2fc] */ r_ecx = R32((u32)(r_edx+0x2fcu));
    /* 004513b5: cmp ecx, dword ptr [eax + 0x2dc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004513bb: je 0x4513d4 */ if (fZ) goto L_004513d4;
L_004513bd:; BB(0x004513bd);
    /* 004513bd: push 0x45c */ { u32 v = 0x45cu; r_esp -= 4; W32(r_esp, v); }
    /* 004513c2: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004513c7: push 0x6b9520 */ { u32 v = 0x6b9520u; r_esp -= 4; W32(r_esp, v); }
    /* 004513cc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4513d1u); f_005e9f20();
    /* 004513d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004513d4:; BB(0x004513d4);
    /* 004513d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004513d7: cmp dword ptr [eax + 0x2d8], 1 */ {  u32 a = R32((u32)(r_eax+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004513de: jne 0x4513f4 */ if (!fZ) goto L_004513f4;
L_004513e0:; BB(0x004513e0);
    /* 004513e0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004513e3: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004513e9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004513ec: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 004513f2: jmp 0x45142a */ goto L_0045142a;
L_004513f4:; BB(0x004513f4);
    /* 004513f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004513f7: cmp dword ptr [eax + 0x2f0], 0xe */ {  u32 a = R32((u32)(r_eax+0x2f0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004513fe: jne 0x451419 */ if (!fZ) goto L_00451419;
L_00451400:; BB(0x00451400);
    /* 00451400: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00451402: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451406: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00451409: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045140c: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0045140e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451411: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
    /* 00451417: jmp 0x45142a */ goto L_0045142a;
L_00451419:; BB(0x00451419);
    /* 00451419: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045141c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045141f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00451421: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00451424: mov dword ptr [eax], 6 */ W32((u32)(r_eax), 0x6u);
L_0045142a:; BB(0x0045142a);
    /* 0045142a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045142d: cmp dword ptr [ecx + 0x2f4], 6 */ {  u32 a = R32((u32)(r_ecx+0x2f4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451434: jne 0x451511 */ if (!fZ) goto L_00451511;
L_0045143a:; BB(0x0045143a);
    /* 0045143a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045143d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451440: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451442: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451445: cmp dword ptr [ecx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045144c: jne 0x451497 */ if (!fZ) goto L_00451497;
L_0045144e:; BB(0x0045144e);
    /* 0045144e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00451455: jmp 0x451460 */ goto L_00451460;
L_00451457:; BB(0x00451457);
    /* 00451457: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045145a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045145d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00451460:; BB(0x00451460);
    /* 00451460: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00451464: jge 0x451495 */ if ((fS==fO)) goto L_00451495;
L_00451466:; BB(0x00451466);
    /* 00451466: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451469: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045146c: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00451471: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00451472: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451475: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45147au); f_0044f680();
    /* 0045147a: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045147d: jne 0x451493 */ if (!fZ) goto L_00451493;
L_0045147f:; BB(0x0045147f);
    /* 0045147f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00451482: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00451485: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451487: je 0x451493 */ if (fZ) goto L_00451493;
L_00451489:; BB(0x00451489);
    /* 00451489: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045148c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045148f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451491: jmp 0x451495 */ goto L_00451495;
L_00451493:; BB(0x00451493);
    /* 00451493: jmp 0x451457 */ goto L_00451457;
L_00451495:; BB(0x00451495);
    /* 00451495: jmp 0x451511 */ goto L_00451511;
L_00451497:; BB(0x00451497);
    /* 00451497: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0045149e: jmp 0x4514a9 */ goto L_004514a9;
L_004514a0:; BB(0x004514a0);
    /* 004514a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004514a3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004514a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004514a9:; BB(0x004514a9);
    /* 004514a9: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004514ad: jge 0x451511 */ if ((fS==fO)) goto L_00451511;
L_004514af:; BB(0x004514af);
    /* 004514af: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004514b2: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004514b5: jne 0x4514b9 */ if (!fZ) goto L_004514b9;
L_004514b7:; BB(0x004514b7);
    /* 004514b7: jmp 0x4514a0 */ goto L_004514a0;
L_004514b9:; BB(0x004514b9);
    /* 004514b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004514bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004514bf: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 004514c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004514c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004514c8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4514cdu); f_0044f680();
    /* 004514cd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004514d0: cmp eax, dword ptr [ecx + 0x2ec] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004514d6: je 0x451505 */ if (fZ) goto L_00451505;
L_004514d8:; BB(0x004514d8);
    /* 004514d8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004514db: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004514de: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004514e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004514e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004514e7: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x4514ecu); f_0044f6c0();
    /* 004514ec: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004514ef: jne 0x45150f */ if (!fZ) goto L_0045150f;
L_004514f1:; BB(0x004514f1);
    /* 004514f1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004514f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004514f7: mov ecx, dword ptr [edx + 0x2fc] */ r_ecx = R32((u32)(r_edx+0x2fcu));
    /* 004514fd: cmp ecx, dword ptr [eax + 0x2ec] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00451503: jne 0x45150f */ if (!fZ) goto L_0045150f;
L_00451505:; BB(0x00451505);
    /* 00451505: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00451508: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045150b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0045150d: jmp 0x451511 */ goto L_00451511;
L_0045150f:; BB(0x0045150f);
    /* 0045150f: jmp 0x4514a0 */ goto L_004514a0;
L_00451511:; BB(0x00451511);
    /* 00451511: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00451514: cmp dword ptr [ecx + 0x2f4], 5 */ {  u32 a = R32((u32)(r_ecx+0x2f4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045151b: jne 0x45152d */ if (!fZ) goto L_0045152d;
L_0045151d:; BB(0x0045151d);
    /* 0045151d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00451520: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00451523: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00451525: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00451528: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045152b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0045152d:; BB(0x0045152d);
    /* 0045152d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045152f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00451530: ret 8 */ FN_RET(0x004512c0); r_esp += 12; return;
}

void f_00452a40(void) /* paigowai::func_00452a40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00452a40);
    /* 00452a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00452a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00452a43: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00452a46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00452a47: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00452a4a: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00452a50: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00452a56: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00452a59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452a5a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452a5d: call 0x44efd0 */ r_esp -= 4; W32(r_esp, 0x452a62u); f_0044efd0();
    /* 00452a62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452a65: call 0x4520c0 */ r_esp -= 4; W32(r_esp, 0x452a6au); f_004520c0();
    /* 00452a6a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452a6d: mov dword ptr [ecx + 0x2b0], eax */ W32((u32)(r_ecx+0x2b0u), r_eax);
    /* 00452a73: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00452a79: jmp 0x452a87 */ goto L_00452a87;
L_00452a7b:; BB(0x00452a7b);
    /* 00452a7b: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00452a7f: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00452a83: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00452a87:; BB(0x00452a87);
    /* 00452a87: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00452a8b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452a8e: jge 0x452db3 */ if ((fS==fO)) goto L_00452db3;
L_00452a94:; BB(0x00452a94);
    /* 00452a94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452a97: mov edx, dword ptr [ecx + 0x2b0] */ r_edx = R32((u32)(r_ecx+0x2b0u));
    /* 00452a9d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00452aa0: cmp dword ptr [ebp - 0x18], 0x1b */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00452aa4: ja 0x452cee */ if ((!fC&&!fZ)) goto L_00452cee;
L_00452aaa:; BB(0x00452aaa);
    /* 00452aaa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00452aad: jmp dword ptr [eax*4 + 0x452e74] */ { u32 t = R32((u32)(r_eax*4+0x452e74u)); switch (t) { case 0x452ab4u: goto L_00452ab4; case 0x452ac9u: goto L_00452ac9; case 0x452adeu: goto L_00452ade; case 0x452af3u: goto L_00452af3; case 0x452b08u: goto L_00452b08; case 0x452b1du: goto L_00452b1d; case 0x452b32u: goto L_00452b32; case 0x452b47u: goto L_00452b47; case 0x452b5cu: goto L_00452b5c; case 0x452b71u: goto L_00452b71; case 0x452b86u: goto L_00452b86; case 0x452b9bu: goto L_00452b9b; case 0x452bb0u: goto L_00452bb0; case 0x452bc5u: goto L_00452bc5; case 0x452bdau: goto L_00452bda; case 0x452befu: goto L_00452bef; case 0x452c04u: goto L_00452c04; case 0x452c19u: goto L_00452c19; case 0x452c2eu: goto L_00452c2e; case 0x452c43u: goto L_00452c43; case 0x452c58u: goto L_00452c58; case 0x452c6du: goto L_00452c6d; case 0x452c82u: goto L_00452c82; case 0x452c94u: goto L_00452c94; case 0x452ca6u: goto L_00452ca6; case 0x452cb8u: goto L_00452cb8; case 0x452ccau: goto L_00452cca; case 0x452cdcu: goto L_00452cdc; default: UNSUP(0x00452aad, "jump table entry is not a known target"); } }
L_00452ab4:; BB(0x00452ab4);
    /* 00452ab4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452ab7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452ab8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452abb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452abc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452abf: call 0x453d30 */ r_esp -= 4; W32(r_esp, 0x452ac4u); f_00453d30();
    /* 00452ac4: jmp 0x452d09 */ goto L_00452d09;
L_00452ac9:; BB(0x00452ac9);
    /* 00452ac9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452acd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452ad0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452ad1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452ad4: call 0x453d70 */ r_esp -= 4; W32(r_esp, 0x452ad9u); f_00453d70();
    /* 00452ad9: jmp 0x452d09 */ goto L_00452d09;
L_00452ade:; BB(0x00452ade);
    /* 00452ade: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452ae1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452ae2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452ae5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452ae6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452ae9: call 0x453e00 */ r_esp -= 4; W32(r_esp, 0x452aeeu); f_00453e00();
    /* 00452aee: jmp 0x452d09 */ goto L_00452d09;
L_00452af3:; BB(0x00452af3);
    /* 00452af3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452af6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452af7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452afa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452afb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452afe: call 0x454200 */ r_esp -= 4; W32(r_esp, 0x452b03u); f_00454200();
    /* 00452b03: jmp 0x452d09 */ goto L_00452d09;
L_00452b08:; BB(0x00452b08);
    /* 00452b08: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452b0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452b0c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452b0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b10: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452b13: call 0x454250 */ r_esp -= 4; W32(r_esp, 0x452b18u); f_00454250();
    /* 00452b18: jmp 0x452d09 */ goto L_00452d09;
L_00452b1d:; BB(0x00452b1d);
    /* 00452b1d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452b20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b21: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452b25: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452b28: call 0x4543a0 */ r_esp -= 4; W32(r_esp, 0x452b2du); f_004543a0();
    /* 00452b2d: jmp 0x452d09 */ goto L_00452d09;
L_00452b32:; BB(0x00452b32);
    /* 00452b32: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452b35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b36: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452b39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b3a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452b3d: call 0x4543f0 */ r_esp -= 4; W32(r_esp, 0x452b42u); f_004543f0();
    /* 00452b42: jmp 0x452d09 */ goto L_00452d09;
L_00452b47:; BB(0x00452b47);
    /* 00452b47: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452b4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452b4b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452b4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452b52: call 0x454440 */ r_esp -= 4; W32(r_esp, 0x452b57u); f_00454440();
    /* 00452b57: jmp 0x452d09 */ goto L_00452d09;
L_00452b5c:; BB(0x00452b5c);
    /* 00452b5c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452b5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b60: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452b64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452b67: call 0x454560 */ r_esp -= 4; W32(r_esp, 0x452b6cu); f_00454560();
    /* 00452b6c: jmp 0x452d09 */ goto L_00452d09;
L_00452b71:; BB(0x00452b71);
    /* 00452b71: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452b74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b75: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452b78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452b7c: call 0x454960 */ r_esp -= 4; W32(r_esp, 0x452b81u); f_00454960();
    /* 00452b81: jmp 0x452d09 */ goto L_00452d09;
L_00452b86:; BB(0x00452b86);
    /* 00452b86: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452b89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452b8a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452b8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b8e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452b91: call 0x454d60 */ r_esp -= 4; W32(r_esp, 0x452b96u); f_00454d60();
    /* 00452b96: jmp 0x452d09 */ goto L_00452d09;
L_00452b9b:; BB(0x00452b9b);
    /* 00452b9b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452b9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452b9f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452ba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452ba3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452ba6: call 0x455060 */ r_esp -= 4; W32(r_esp, 0x452babu); f_00455060();
    /* 00452bab: jmp 0x452d09 */ goto L_00452d09;
L_00452bb0:; BB(0x00452bb0);
    /* 00452bb0: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452bb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452bb4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452bb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452bb8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452bbb: call 0x455740 */ r_esp -= 4; W32(r_esp, 0x452bc0u); f_00455740();
    /* 00452bc0: jmp 0x452d09 */ goto L_00452d09;
L_00452bc5:; BB(0x00452bc5);
    /* 00452bc5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452bc9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452bcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452bcd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452bd0: call 0x4558f0 */ r_esp -= 4; W32(r_esp, 0x452bd5u); f_004558f0();
    /* 00452bd5: jmp 0x452d09 */ goto L_00452d09;
L_00452bda:; BB(0x00452bda);
    /* 00452bda: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452bdd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452bde: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452be1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452be2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452be5: call 0x4559c0 */ r_esp -= 4; W32(r_esp, 0x452beau); f_004559c0();
    /* 00452bea: jmp 0x452d09 */ goto L_00452d09;
L_00452bef:; BB(0x00452bef);
    /* 00452bef: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452bf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452bf3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452bf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452bf7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452bfa: call 0x455ac0 */ r_esp -= 4; W32(r_esp, 0x452bffu); f_00455ac0();
    /* 00452bff: jmp 0x452d09 */ goto L_00452d09;
L_00452c04:; BB(0x00452c04);
    /* 00452c04: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452c08: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452c0b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c0c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c0f: call 0x455cb0 */ r_esp -= 4; W32(r_esp, 0x452c14u); f_00455cb0();
    /* 00452c14: jmp 0x452d09 */ goto L_00452d09;
L_00452c19:; BB(0x00452c19);
    /* 00452c19: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452c1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c1d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452c20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452c21: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c24: call 0x456000 */ r_esp -= 4; W32(r_esp, 0x452c29u); f_00456000();
    /* 00452c29: jmp 0x452d09 */ goto L_00452d09;
L_00452c2e:; BB(0x00452c2e);
    /* 00452c2e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452c31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c32: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452c35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c36: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c39: call 0x456020 */ r_esp -= 4; W32(r_esp, 0x452c3eu); f_00456020();
    /* 00452c3e: jmp 0x452d09 */ goto L_00452d09;
L_00452c43:; BB(0x00452c43);
    /* 00452c43: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452c46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452c47: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452c4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c4b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c4e: call 0x4560e0 */ r_esp -= 4; W32(r_esp, 0x452c53u); f_004560e0();
    /* 00452c53: jmp 0x452d09 */ goto L_00452d09;
L_00452c58:; BB(0x00452c58);
    /* 00452c58: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452c5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c5c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452c5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452c60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c63: call 0x456420 */ r_esp -= 4; W32(r_esp, 0x452c68u); f_00456420();
    /* 00452c68: jmp 0x452d09 */ goto L_00452d09;
L_00452c6d:; BB(0x00452c6d);
    /* 00452c6d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452c70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c71: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452c74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c78: call 0x4567c0 */ r_esp -= 4; W32(r_esp, 0x452c7du); f_004567c0();
    /* 00452c7d: jmp 0x452d09 */ goto L_00452d09;
L_00452c82:; BB(0x00452c82);
    /* 00452c82: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452c86: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452c89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c8a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c8d: call 0x456890 */ r_esp -= 4; W32(r_esp, 0x452c92u); f_00456890();
    /* 00452c92: jmp 0x452d09 */ goto L_00452d09;
L_00452c94:; BB(0x00452c94);
    /* 00452c94: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452c97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452c98: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452c9c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452c9f: call 0x456920 */ r_esp -= 4; W32(r_esp, 0x452ca4u); f_00456920();
    /* 00452ca4: jmp 0x452d09 */ goto L_00452d09;
L_00452ca6:; BB(0x00452ca6);
    /* 00452ca6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452ca9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452caa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452cad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452cae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452cb1: call 0x456b30 */ r_esp -= 4; W32(r_esp, 0x452cb6u); f_00456b30();
    /* 00452cb6: jmp 0x452d09 */ goto L_00452d09;
L_00452cb8:; BB(0x00452cb8);
    /* 00452cb8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452cbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452cbc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452cbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452cc0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452cc3: call 0x456ca0 */ r_esp -= 4; W32(r_esp, 0x452cc8u); f_00456ca0();
    /* 00452cc8: jmp 0x452d09 */ goto L_00452d09;
L_00452cca:; BB(0x00452cca);
    /* 00452cca: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452ccd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452cce: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452cd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452cd2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452cd5: call 0x456e10 */ r_esp -= 4; W32(r_esp, 0x452cdau); f_00456e10();
    /* 00452cda: jmp 0x452d09 */ goto L_00452d09;
L_00452cdc:; BB(0x00452cdc);
    /* 00452cdc: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452cdf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452ce0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452ce3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452ce4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452ce7: call 0x456e50 */ r_esp -= 4; W32(r_esp, 0x452cecu); f_00456e50();
    /* 00452cec: jmp 0x452d09 */ goto L_00452d09;
L_00452cee:; BB(0x00452cee);
    /* 00452cee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00452cf0: jne 0x452d09 */ if (!fZ) goto L_00452d09;
L_00452cf2:; BB(0x00452cf2);
    /* 00452cf2: push 0x6dd */ { u32 v = 0x6ddu; r_esp -= 4; W32(r_esp, v); }
    /* 00452cf7: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00452cfc: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00452d01: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x452d06u); f_005e9f20();
    /* 00452d06: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00452d09:; BB(0x00452d09);
    /* 00452d09: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452d0c: cmp dword ptr [edx + 0x31c], 5 */ {  u32 a = R32((u32)(r_edx+0x31cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452d13: jl 0x452dac */ if ((fS!=fO)) goto L_00452dac;
L_00452d19:; BB(0x00452d19);
    /* 00452d19: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00452d1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452d1f: jne 0x452dac */ if (!fZ) goto L_00452dac;
L_00452d25:; BB(0x00452d25);
    /* 00452d25: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00452d2b: jmp 0x452d39 */ goto L_00452d39;
L_00452d2d:; BB(0x00452d2d);
    /* 00452d2d: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00452d31: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00452d35: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_00452d39:; BB(0x00452d39);
    /* 00452d39: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00452d3d: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452d40: jge 0x452d60 */ if ((fS==fO)) goto L_00452d60;
L_00452d42:; BB(0x00452d42);
    /* 00452d42: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00452d46: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00452d4a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452d4d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00452d50: mov eax, dword ptr [esi + eax*4 + 0x300] */ r_eax = R32((u32)(r_esi+r_eax*4+0x300u));
    /* 00452d57: mov dword ptr [edx + ecx*4 + 0x2d8], eax */ W32((u32)(r_edx+r_ecx*4+0x2d8u), r_eax);
    /* 00452d5e: jmp 0x452d2d */ goto L_00452d2d;
L_00452d60:; BB(0x00452d60);
    /* 00452d60: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452d63: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452d66: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 00452d6c: mov dword ptr [ecx + 0x2f4], eax */ W32((u32)(r_ecx+0x2f4u), r_eax);
    /* 00452d72: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452d75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452d78: mov eax, dword ptr [edx + 0x320] */ r_eax = R32((u32)(r_edx+0x320u));
    /* 00452d7e: mov dword ptr [ecx + 0x2f8], eax */ W32((u32)(r_ecx+0x2f8u), r_eax);
    /* 00452d84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452d87: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452d8a: mov eax, dword ptr [edx + 0x324] */ r_eax = R32((u32)(r_edx+0x324u));
    /* 00452d90: mov dword ptr [ecx + 0x2fc], eax */ W32((u32)(r_ecx+0x2fcu), r_eax);
    /* 00452d96: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00452d99: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00452d9c: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
    /* 00452da0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00452da3: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00452da6: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 00452daa: jmp 0x452dae */ goto L_00452dae;
L_00452dac:; BB(0x00452dac);
    /* 00452dac: jmp 0x452db3 */ goto L_00452db3;
L_00452dae:; BB(0x00452dae);
    /* 00452dae: jmp 0x452a7b */ goto L_00452a7b;
L_00452db3:; BB(0x00452db3);
    /* 00452db3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00452db6: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00452db9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452dba: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452dbd: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x452dc2u); f_0044f680();
    /* 00452dc2: mov esi, eax */ r_esi = r_eax;
    /* 00452dc4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452dc7: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00452dca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452dcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452dce: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x452dd3u); f_0044f680();
    /* 00452dd3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452dd5: jge 0x452dee */ if ((fS==fO)) goto L_00452dee;
L_00452dd7:; BB(0x00452dd7);
    /* 00452dd7: push 0x6ee */ { u32 v = 0x6eeu; r_esp -= 4; W32(r_esp, v); }
    /* 00452ddc: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00452de1: push 0x6b9570 */ { u32 v = 0x6b9570u; r_esp -= 4; W32(r_esp, v); }
    /* 00452de6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x452debu); f_005e9f20();
    /* 00452deb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00452dee:; BB(0x00452dee);
    /* 00452dee: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452df1: cmp dword ptr [ecx + 0x31c], 5 */ {  u32 a = R32((u32)(r_ecx+0x31cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452df8: jl 0x452e6c */ if ((fS!=fO)) goto L_00452e6c;
L_00452dfa:; BB(0x00452dfa);
    /* 00452dfa: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00452dfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452dff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452e02: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x452e07u); f_0044f680();
    /* 00452e07: mov esi, eax */ r_esi = r_eax;
    /* 00452e09: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00452e0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452e0e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452e11: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x452e16u); f_0044f680();
    /* 00452e16: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00452e18: jge 0x452e31 */ if ((fS==fO)) goto L_00452e31;
L_00452e1a:; BB(0x00452e1a);
    /* 00452e1a: push 0x6f2 */ { u32 v = 0x6f2u; r_esp -= 4; W32(r_esp, v); }
    /* 00452e1f: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00452e24: push 0x6b9544 */ { u32 v = 0x6b9544u; r_esp -= 4; W32(r_esp, v); }
    /* 00452e29: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x452e2eu); f_005e9f20();
    /* 00452e2e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00452e31:; BB(0x00452e31);
    /* 00452e31: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00452e35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452e36: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00452e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00452e3b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00452e3e: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00452e41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00452e42: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452e45: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00452e48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00452e49: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00452e4c: call 0x456f70 */ r_esp -= 4; W32(r_esp, 0x452e51u); f_00456f70();
    /* 00452e51: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00452e54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00452e56: jne 0x452e6c */ if (!fZ) goto L_00452e6c;
L_00452e58:; BB(0x00452e58);
    /* 00452e58: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00452e5b: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00452e5f: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00452e62: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00452e65: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00452e69: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_00452e6c:; BB(0x00452e6c);
    /* 00452e6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00452e6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00452e6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00452e70: ret 0xc */ FN_RET(0x00452a40); r_esp += 16; return;
}

void f_00453550(void) /* paigowai::func_00453550 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453550);
    /* 00453550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453551: mov ebp, esp */ r_ebp = r_esp;
    /* 00453553: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453556: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00453559: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045355c: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045355f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00453562: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00453565: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453567: jle 0x453570 */ if ((fZ||fS!=fO)) goto L_00453570;
L_00453569:; BB(0x00453569);
    /* 00453569: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045356b: jmp 0x4536bb */ goto L_004536bb;
L_00453570:; BB(0x00453570);
    /* 00453570: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00453573: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00453576: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00453579: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0045357c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045357e: jne 0x4536b9 */ if (!fZ) goto L_004536b9;
L_00453584:; BB(0x00453584);
    /* 00453584: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453587: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0045358a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0045358d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00453590: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00453593: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00453596: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045359a: ja 0x45369e */ if ((!fC&&!fZ)) goto L_0045369e;
L_004535a0:; BB(0x004535a0);
    /* 004535a0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004535a3: jmp dword ptr [edx*4 + 0x4536c4] */ { u32 t = R32((u32)(r_edx*4+0x4536c4u)); switch (t) { case 0x4535aau: goto L_004535aa; case 0x4535bfu: goto L_004535bf; case 0x4535d4u: goto L_004535d4; case 0x4535e9u: goto L_004535e9; case 0x453609u: goto L_00453609; default: UNSUP(0x004535a3, "jump table entry is not a known target"); } }
L_004535aa:; BB(0x004535aa);
    /* 004535aa: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004535ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004535ae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004535b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004535b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004535b5: call 0x4536f0 */ r_esp -= 4; W32(r_esp, 0x4535bau); f_004536f0();
    /* 004535ba: jmp 0x4536bb */ goto L_004536bb;
L_004535bf:; BB(0x004535bf);
    /* 004535bf: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004535c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004535c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004535c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004535c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004535ca: call 0x453760 */ r_esp -= 4; W32(r_esp, 0x4535cfu); f_00453760();
    /* 004535cf: jmp 0x4536bb */ goto L_004536bb;
L_004535d4:; BB(0x004535d4);
    /* 004535d4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004535d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004535d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004535db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004535dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004535df: call 0x4537b0 */ r_esp -= 4; W32(r_esp, 0x4535e4u); f_004537b0();
    /* 004535e4: jmp 0x4536bb */ goto L_004536bb;
L_004535e9:; BB(0x004535e9);
    /* 004535e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004535ec: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 004535f0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004535f3: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 004535f7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004535f9: jle 0x453602 */ if ((fZ||fS!=fO)) goto L_00453602;
L_004535fb:; BB(0x004535fb);
    /* 004535fb: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004535fd: jmp 0x4536bb */ goto L_004536bb;
L_00453602:; BB(0x00453602);
    /* 00453602: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00453604: jmp 0x4536bb */ goto L_004536bb;
L_00453609:; BB(0x00453609);
    /* 00453609: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045360c: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 00453610: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00453613: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 00453617: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453619: jne 0x453624 */ if (!fZ) goto L_00453624;
L_0045361b:; BB(0x0045361b);
    /* 0045361b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0045361d: jmp 0x4536bb */ goto L_004536bb;
L_00453624:; BB(0x00453624);
    /* 00453624: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 0045362a: call 0x45f940 */ r_esp -= 4; W32(r_esp, 0x45362fu); f_0045f940();
    /* 0045362f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00453632: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453634: je 0x453684 */ if (fZ) goto L_00453684;
L_00453636:; BB(0x00453636);
    /* 00453636: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453639: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0045363d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00453640: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 00453644: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453646: jle 0x453666 */ if ((fZ||fS!=fO)) goto L_00453666;
L_00453648:; BB(0x00453648);
    /* 00453648: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045364b: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 0045364f: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453652: je 0x453660 */ if (fZ) goto L_00453660;
L_00453654:; BB(0x00453654);
    /* 00453654: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00453657: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0045365b: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045365e: je 0x453664 */ if (fZ) goto L_00453664;
L_00453660:; BB(0x00453660);
    /* 00453660: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00453662: jmp 0x4536bb */ goto L_004536bb;
L_00453664:; BB(0x00453664);
    /* 00453664: jmp 0x453682 */ goto L_00453682;
L_00453666:; BB(0x00453666);
    /* 00453666: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00453669: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 0045366d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453670: jne 0x453682 */ if (!fZ) goto L_00453682;
L_00453672:; BB(0x00453672);
    /* 00453672: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00453675: movsx edx, byte ptr [ecx + 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 00453679: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045367c: je 0x453682 */ if (fZ) goto L_00453682;
L_0045367e:; BB(0x0045367e);
    /* 0045367e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00453680: jmp 0x4536bb */ goto L_004536bb;
L_00453682:; BB(0x00453682);
    /* 00453682: jmp 0x45369a */ goto L_0045369a;
L_00453684:; BB(0x00453684);
    /* 00453684: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00453687: movsx ecx, byte ptr [eax + 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0045368b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0045368e: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 00453692: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453694: jle 0x45369a */ if ((fZ||fS!=fO)) goto L_0045369a;
L_00453696:; BB(0x00453696);
    /* 00453696: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00453698: jmp 0x4536bb */ goto L_004536bb;
L_0045369a:; BB(0x0045369a);
    /* 0045369a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045369c: jmp 0x4536bb */ goto L_004536bb;
L_0045369e:; BB(0x0045369e);
    /* 0045369e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004536a0: jne 0x4536b9 */ if (!fZ) goto L_004536b9;
L_004536a2:; BB(0x004536a2);
    /* 004536a2: push 0x81c */ { u32 v = 0x81cu; r_esp -= 4; W32(r_esp, v); }
    /* 004536a7: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004536ac: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004536b1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4536b6u); f_005e9f20();
    /* 004536b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004536b9:; BB(0x004536b9);
    /* 004536b9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004536bb:; BB(0x004536bb);
    /* 004536bb: mov esp, ebp */ r_esp = r_ebp;
    /* 004536bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004536be: ret 8 */ FN_RET(0x00453550); r_esp += 12; return;
}

void f_00453e00(void) /* paigowai::func_00453e00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00453e00);
    /* 00453e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00453e03: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453e06: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00453e09: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 00453e10: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00453e17: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00453e1e: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00453e25: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00453e2c: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00453e33: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00453e3a: mov dword ptr [ebp - 0x34], 0xffffffff */ W32((u32)(r_ebp+0xffffffccu), 0xffffffffu);
    /* 00453e41: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00453e48: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 00453e4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453e51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453e53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453e55: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00453e58: call 0x450cd0 */ r_esp -= 4; W32(r_esp, 0x453e5du); f_00450cd0();
    /* 00453e5d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00453e60: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00453e63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453e64: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00453e67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453e68: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00453e6a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00453e6d: call 0x450cd0 */ r_esp -= 4; W32(r_esp, 0x453e72u); f_00450cd0();
    /* 00453e72: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00453e75: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e79: je 0x453e81 */ if (fZ) goto L_00453e81;
L_00453e7b:; BB(0x00453e7b);
    /* 00453e7b: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e7f: jne 0x453e98 */ if (!fZ) goto L_00453e98;
L_00453e81:; BB(0x00453e81);
    /* 00453e81: push 0x909 */ { u32 v = 0x909u; r_esp -= 4; W32(r_esp, v); }
    /* 00453e86: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00453e8b: push 0x6b959c */ { u32 v = 0x6b959cu; r_esp -= 4; W32(r_esp, v); }
    /* 00453e90: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x453e95u); f_005e9f20();
    /* 00453e95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00453e98:; BB(0x00453e98);
    /* 00453e98: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00453e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453e9c: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00453e9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00453ea0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00453ea2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00453ea5: call 0x450c50 */ r_esp -= 4; W32(r_esp, 0x453eaau); f_00450c50();
    /* 00453eaa: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 00453ead: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453eae: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00453eb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453eb2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00453eb4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00453eb7: call 0x450c50 */ r_esp -= 4; W32(r_esp, 0x453ebcu); f_00450c50();
    /* 00453ebc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00453ebf: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00453ec2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00453ec5: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00453ec8: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00453ecb: cmp dword ptr [ebp - 0x3c], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00453ecf: ja 0x454169 */ if ((!fC&&!fZ)) goto L_00454169;
L_00453ed5:; BB(0x00453ed5);
    /* 00453ed5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00453ed8: jmp dword ptr [eax*4 + 0x4541cc] */ { u32 t = R32((u32)(r_eax*4+0x4541ccu)); switch (t) { case 0x453edfu: goto L_00453edf; case 0x453ef2u: goto L_00453ef2; case 0x453f05u: goto L_00453f05; case 0x453f36u: goto L_00453f36; case 0x453f67u: goto L_00453f67; case 0x453f99u: goto L_00453f99; case 0x453fefu: goto L_00453fef; case 0x454036u: goto L_00454036; case 0x454094u: goto L_00454094; case 0x4540f7u: goto L_004540f7; case 0x454143u: goto L_00454143; case 0x454162u: goto L_00454162; default: UNSUP(0x00453ed8, "jump table entry is not a known target"); } }
L_00453edf:; BB(0x00453edf);
    /* 00453edf: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00453ee6: mov dword ptr [ebp - 0x10], 0xa */ W32((u32)(r_ebp+0xfffffff0u), 0xau);
    /* 00453eed: jmp 0x454169 */ goto L_00454169;
L_00453ef2:; BB(0x00453ef2);
    /* 00453ef2: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00453ef9: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 00453f00: jmp 0x454169 */ goto L_00454169;
L_00453f05:; BB(0x00453f05);
    /* 00453f05: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453f09: jg 0x453f23 */ if ((!fZ&&fS==fO)) goto L_00453f23;
L_00453f0b:; BB(0x00453f0b);
    /* 00453f0b: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00453f12: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00453f14: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f18: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00453f1b: add ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453f1e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00453f21: jmp 0x453f31 */ goto L_00453f31;
L_00453f23:; BB(0x00453f23);
    /* 00453f23: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00453f2a: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
L_00453f31:; BB(0x00453f31);
    /* 00453f31: jmp 0x454169 */ goto L_00454169;
L_00453f36:; BB(0x00453f36);
    /* 00453f36: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f3a: jne 0x453f4c */ if (!fZ) goto L_00453f4c;
L_00453f3c:; BB(0x00453f3c);
    /* 00453f3c: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00453f43: mov dword ptr [ebp - 0x10], 0xb */ W32((u32)(r_ebp+0xfffffff0u), 0xbu);
    /* 00453f4a: jmp 0x453f62 */ goto L_00453f62;
L_00453f4c:; BB(0x00453f4c);
    /* 00453f4c: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00453f53: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00453f55: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f59: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00453f5c: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00453f5f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00453f62:; BB(0x00453f62);
    /* 00453f62: jmp 0x454169 */ goto L_00454169;
L_00453f67:; BB(0x00453f67);
    /* 00453f67: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00453f6e: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453f72: jg 0x453f85 */ if ((!fZ&&fS==fO)) goto L_00453f85;
L_00453f74:; BB(0x00453f74);
    /* 00453f74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00453f76: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f7a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00453f7d: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00453f80: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00453f83: jmp 0x453f94 */ goto L_00453f94;
L_00453f85:; BB(0x00453f85);
    /* 00453f85: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00453f87: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f8b: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00453f8e: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453f91: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00453f94:; BB(0x00453f94);
    /* 00453f94: jmp 0x454169 */ goto L_00454169;
L_00453f99:; BB(0x00453f99);
    /* 00453f99: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453f9d: jg 0x453fdc */ if ((!fZ&&fS==fO)) goto L_00453fdc;
L_00453f9f:; BB(0x00453f9f);
    /* 00453f9f: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00453fa6: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453faa: jne 0x453fb5 */ if (!fZ) goto L_00453fb5;
L_00453fac:; BB(0x00453fac);
    /* 00453fac: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 00453fb3: jmp 0x453fda */ goto L_00453fda;
L_00453fb5:; BB(0x00453fb5);
    /* 00453fb5: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453fb9: jne 0x453fc4 */ if (!fZ) goto L_00453fc4;
L_00453fbb:; BB(0x00453fbb);
    /* 00453fbb: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 00453fc2: jmp 0x453fda */ goto L_00453fda;
L_00453fc4:; BB(0x00453fc4);
    /* 00453fc4: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453fc8: jne 0x453fd3 */ if (!fZ) goto L_00453fd3;
L_00453fca:; BB(0x00453fca);
    /* 00453fca: mov dword ptr [ebp - 0x10], 0xb */ W32((u32)(r_ebp+0xfffffff0u), 0xbu);
    /* 00453fd1: jmp 0x453fda */ goto L_00453fda;
L_00453fd3:; BB(0x00453fd3);
    /* 00453fd3: mov dword ptr [ebp - 0x10], 0xc */ W32((u32)(r_ebp+0xfffffff0u), 0xcu);
L_00453fda:; BB(0x00453fda);
    /* 00453fda: jmp 0x453fea */ goto L_00453fea;
L_00453fdc:; BB(0x00453fdc);
    /* 00453fdc: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00453fe3: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
L_00453fea:; BB(0x00453fea);
    /* 00453fea: jmp 0x454169 */ goto L_00454169;
L_00453fef:; BB(0x00453fef);
    /* 00453fef: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453ff3: jg 0x454023 */ if ((!fZ&&fS==fO)) goto L_00454023;
L_00453ff5:; BB(0x00453ff5);
    /* 00453ff5: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00453ffc: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454000: jne 0x45400b */ if (!fZ) goto L_0045400b;
L_00454002:; BB(0x00454002);
    /* 00454002: mov dword ptr [ebp - 0x10], 0xa */ W32((u32)(r_ebp+0xfffffff0u), 0xau);
    /* 00454009: jmp 0x454021 */ goto L_00454021;
L_0045400b:; BB(0x0045400b);
    /* 0045400b: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045400f: jne 0x45401a */ if (!fZ) goto L_0045401a;
L_00454011:; BB(0x00454011);
    /* 00454011: mov dword ptr [ebp - 0x10], 0xb */ W32((u32)(r_ebp+0xfffffff0u), 0xbu);
    /* 00454018: jmp 0x454021 */ goto L_00454021;
L_0045401a:; BB(0x0045401a);
    /* 0045401a: mov dword ptr [ebp - 0x10], 0xc */ W32((u32)(r_ebp+0xfffffff0u), 0xcu);
L_00454021:; BB(0x00454021);
    /* 00454021: jmp 0x454031 */ goto L_00454031;
L_00454023:; BB(0x00454023);
    /* 00454023: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0045402a: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
L_00454031:; BB(0x00454031);
    /* 00454031: jmp 0x454169 */ goto L_00454169;
L_00454036:; BB(0x00454036);
    /* 00454036: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045403a: jne 0x45404c */ if (!fZ) goto L_0045404c;
L_0045403c:; BB(0x0045403c);
    /* 0045403c: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00454043: mov dword ptr [ebp - 0x10], 0xc */ W32((u32)(r_ebp+0xfffffff0u), 0xcu);
    /* 0045404a: jmp 0x45408f */ goto L_0045408f;
L_0045404c:; BB(0x0045404c);
    /* 0045404c: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00454053: cmp dword ptr [ebp - 0x20], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00454057: jg 0x45406a */ if ((!fZ&&fS==fO)) goto L_0045406a;
L_00454059:; BB(0x00454059);
    /* 00454059: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0045405b: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045405f: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00454062: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00454065: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00454068: jmp 0x45408f */ goto L_0045408f;
L_0045406a:; BB(0x0045406a);
    /* 0045406a: cmp dword ptr [ebp - 0x20], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045406e: jne 0x454079 */ if (!fZ) goto L_00454079;
L_00454070:; BB(0x00454070);
    /* 00454070: mov dword ptr [ebp - 0x10], 5 */ W32((u32)(r_ebp+0xfffffff0u), 0x5u);
    /* 00454077: jmp 0x45408f */ goto L_0045408f;
L_00454079:; BB(0x00454079);
    /* 00454079: cmp dword ptr [ebp - 0x20], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045407d: jne 0x454088 */ if (!fZ) goto L_00454088;
L_0045407f:; BB(0x0045407f);
    /* 0045407f: mov dword ptr [ebp - 0x10], 0xb */ W32((u32)(r_ebp+0xfffffff0u), 0xbu);
    /* 00454086: jmp 0x45408f */ goto L_0045408f;
L_00454088:; BB(0x00454088);
    /* 00454088: mov dword ptr [ebp - 0x10], 0xc */ W32((u32)(r_ebp+0xfffffff0u), 0xcu);
L_0045408f:; BB(0x0045408f);
    /* 0045408f: jmp 0x454169 */ goto L_00454169;
L_00454094:; BB(0x00454094);
    /* 00454094: cmp dword ptr [ebp - 0x20], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454098: jne 0x4540a3 */ if (!fZ) goto L_004540a3;
L_0045409a:; BB(0x0045409a);
    /* 0045409a: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 004540a1: jmp 0x4540f5 */ goto L_004540f5;
L_004540a3:; BB(0x004540a3);
    /* 004540a3: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 004540aa: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004540ae: jg 0x4540c1 */ if ((!fZ&&fS==fO)) goto L_004540c1;
L_004540b0:; BB(0x004540b0);
    /* 004540b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004540b2: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004540b6: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 004540b9: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004540bc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004540bf: jmp 0x4540f5 */ goto L_004540f5;
L_004540c1:; BB(0x004540c1);
    /* 004540c1: cmp dword ptr [ebp - 0x20], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004540c5: jne 0x4540d0 */ if (!fZ) goto L_004540d0;
L_004540c7:; BB(0x004540c7);
    /* 004540c7: mov dword ptr [ebp - 0x10], 9 */ W32((u32)(r_ebp+0xfffffff0u), 0x9u);
    /* 004540ce: jmp 0x4540f5 */ goto L_004540f5;
L_004540d0:; BB(0x004540d0);
    /* 004540d0: cmp dword ptr [ebp - 0x20], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004540d4: jne 0x4540df */ if (!fZ) goto L_004540df;
L_004540d6:; BB(0x004540d6);
    /* 004540d6: mov dword ptr [ebp - 0x10], 0xa */ W32((u32)(r_ebp+0xfffffff0u), 0xau);
    /* 004540dd: jmp 0x4540f5 */ goto L_004540f5;
L_004540df:; BB(0x004540df);
    /* 004540df: cmp dword ptr [ebp - 0x20], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004540e3: jne 0x4540ee */ if (!fZ) goto L_004540ee;
L_004540e5:; BB(0x004540e5);
    /* 004540e5: mov dword ptr [ebp - 0x10], 0xc */ W32((u32)(r_ebp+0xfffffff0u), 0xcu);
    /* 004540ec: jmp 0x4540f5 */ goto L_004540f5;
L_004540ee:; BB(0x004540ee);
    /* 004540ee: mov dword ptr [ebp - 0x10], 0xd */ W32((u32)(r_ebp+0xfffffff0u), 0xdu);
L_004540f5:; BB(0x004540f5);
    /* 004540f5: jmp 0x454169 */ goto L_00454169;
L_004540f7:; BB(0x004540f7);
    /* 004540f7: cmp dword ptr [ebp - 0x20], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004540fb: jl 0x454106 */ if ((fS!=fO)) goto L_00454106;
L_004540fd:; BB(0x004540fd);
    /* 004540fd: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 00454104: jmp 0x454141 */ goto L_00454141;
L_00454106:; BB(0x00454106);
    /* 00454106: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0045410d: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454111: jne 0x45411c */ if (!fZ) goto L_0045411c;
L_00454113:; BB(0x00454113);
    /* 00454113: mov dword ptr [ebp - 0x10], 8 */ W32((u32)(r_ebp+0xfffffff0u), 0x8u);
    /* 0045411a: jmp 0x454141 */ goto L_00454141;
L_0045411c:; BB(0x0045411c);
    /* 0045411c: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454120: jne 0x45412b */ if (!fZ) goto L_0045412b;
L_00454122:; BB(0x00454122);
    /* 00454122: mov dword ptr [ebp - 0x10], 0xa */ W32((u32)(r_ebp+0xfffffff0u), 0xau);
    /* 00454129: jmp 0x454141 */ goto L_00454141;
L_0045412b:; BB(0x0045412b);
    /* 0045412b: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045412f: jne 0x45413a */ if (!fZ) goto L_0045413a;
L_00454131:; BB(0x00454131);
    /* 00454131: mov dword ptr [ebp - 0x10], 0xb */ W32((u32)(r_ebp+0xfffffff0u), 0xbu);
    /* 00454138: jmp 0x454141 */ goto L_00454141;
L_0045413a:; BB(0x0045413a);
    /* 0045413a: mov dword ptr [ebp - 0x10], 0xd */ W32((u32)(r_ebp+0xfffffff0u), 0xdu);
L_00454141:; BB(0x00454141);
    /* 00454141: jmp 0x454169 */ goto L_00454169;
L_00454143:; BB(0x00454143);
    /* 00454143: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454147: jne 0x454159 */ if (!fZ) goto L_00454159;
L_00454149:; BB(0x00454149);
    /* 00454149: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00454150: mov dword ptr [ebp - 0x10], 0xc */ W32((u32)(r_ebp+0xfffffff0u), 0xcu);
    /* 00454157: jmp 0x454160 */ goto L_00454160;
L_00454159:; BB(0x00454159);
    /* 00454159: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
L_00454160:; BB(0x00454160);
    /* 00454160: jmp 0x454169 */ goto L_00454169;
L_00454162:; BB(0x00454162);
    /* 00454162: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
L_00454169:; BB(0x00454169);
    /* 00454169: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045416c: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045416f: jg 0x454181 */ if ((!fZ&&fS==fO)) goto L_00454181;
L_00454171:; BB(0x00454171);
    /* 00454171: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00454174: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00454177: jne 0x454195 */ if (!fZ) goto L_00454195;
L_00454179:; BB(0x00454179);
    /* 00454179: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045417c: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045417f: jl 0x454195 */ if ((fS!=fO)) goto L_00454195;
L_00454181:; BB(0x00454181);
    /* 00454181: mov word ptr [ebp - 0x24], 1 */ W16((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00454187: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045418a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0045418d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00454190: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00454193: jmp 0x4541a7 */ goto L_004541a7;
L_00454195:; BB(0x00454195);
    /* 00454195: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0045419b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045419e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004541a1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004541a4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_004541a7:; BB(0x004541a7);
    /* 004541a7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004541aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004541ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004541ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004541af: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004541b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004541b3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004541b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004541b7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004541ba: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4541bfu); f_0044f840();
    /* 004541bf: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004541c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004541c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004541c6: ret 8 */ FN_RET(0x00453e00); r_esp += 12; return;
}

void f_00455060(void) /* paigowai::func_00455060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00455060);
    /* 00455060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455061: mov ebp, esp */ r_ebp = r_esp;
    /* 00455063: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455066: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00455069: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 00455070: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00455077: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045507a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045507b: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0045507e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045507f: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00455082: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455083: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455086: call 0x4517a0 */ r_esp -= 4; W32(r_esp, 0x45508bu); f_004517a0();
    /* 0045508b: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0045508e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045508f: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00455092: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455093: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455096: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455097: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045509a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045509b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045509e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045509f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004550a2: call 0x451c20 */ r_esp -= 4; W32(r_esp, 0x4550a7u); f_00451c20();
    /* 004550a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004550aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004550ac: je 0x4550ce */ if (fZ) goto L_004550ce;
L_004550ae:; BB(0x004550ae);
    /* 004550ae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004550b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004550b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004550b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004550b6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004550b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004550ba: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004550bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004550be: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004550c1: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4550c6u); f_0044f840();
    /* 004550c6: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004550c9: jmp 0x45572d */ goto L_0045572d;
L_004550ce:; BB(0x004550ce);
    /* 004550ce: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004550d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004550d2: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 004550d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004550d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004550d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004550da: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004550dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004550de: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004550e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004550e2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004550e5: call 0x451870 */ r_esp -= 4; W32(r_esp, 0x4550eau); f_00451870();
    /* 004550ea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004550ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004550ef: je 0x455111 */ if (fZ) goto L_00455111;
L_004550f1:; BB(0x004550f1);
    /* 004550f1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004550f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004550f5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004550f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004550f9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004550fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004550fd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455100: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455101: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455104: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455109u); f_0044f840();
    /* 00455109: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0045510c: jmp 0x45572d */ goto L_0045572d;
L_00455111:; BB(0x00455111);
    /* 00455111: mov dword ptr [ebp - 0x34], 0xffffffff */ W32((u32)(r_ebp+0xffffffccu), 0xffffffffu);
    /* 00455118: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045511f: jmp 0x45512a */ goto L_0045512a;
L_00455121:; BB(0x00455121);
    /* 00455121: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455124: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455127: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0045512a:; BB(0x0045512a);
    /* 0045512a: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045512e: jge 0x455196 */ if ((fS==fO)) goto L_00455196;
L_00455130:; BB(0x00455130);
    /* 00455130: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455133: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455136: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045513b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045513c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045513f: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x455144u); f_0044f6c0();
    /* 00455144: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455147: je 0x455194 */ if (fZ) goto L_00455194;
L_00455149:; BB(0x00455149);
    /* 00455149: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045514c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045514f: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455154: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455155: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455158: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x45515du); f_0044f6c0();
    /* 0045515d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455160: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455166: je 0x455194 */ if (fZ) goto L_00455194;
L_00455168:; BB(0x00455168);
    /* 00455168: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045516b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045516e: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455174: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455177: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45517cu); f_0044f680();
    /* 0045517c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045517d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455180: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x455185u); f_00450c20();
    /* 00455185: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00455188: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045518a: jne 0x455194 */ if (!fZ) goto L_00455194;
L_0045518c:; BB(0x0045518c);
    /* 0045518c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045518f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00455192: jmp 0x455196 */ goto L_00455196;
L_00455194:; BB(0x00455194);
    /* 00455194: jmp 0x455121 */ goto L_00455121;
L_00455196:; BB(0x00455196);
    /* 00455196: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 0045519a: mov byte ptr [ebp - 0x2d], 1 */ W8((u32)(r_ebp+0xffffffd3u), 0x1u);
    /* 0045519e: cmp dword ptr [ebp - 0xc], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004551a2: jne 0x45548c */ if (!fZ) goto L_0045548c;
L_004551a8:; BB(0x004551a8);
    /* 004551a8: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004551ab: mov edx, dword ptr [ecx + 0x2d0] */ r_edx = R32((u32)(r_ecx+0x2d0u));
    /* 004551b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004551b2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004551b4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004551b7: call 0x44f750 */ r_esp -= 4; W32(r_esp, 0x4551bcu); f_0044f750();
    /* 004551bc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004551bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004551c1: je 0x4551cf */ if (fZ) goto L_004551cf;
L_004551c3:; BB(0x004551c3);
    /* 004551c3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004551c6: cmp dword ptr [ecx + 0x2d4], 5 */ {  u32 a = R32((u32)(r_ecx+0x2d4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004551cd: jl 0x4551d3 */ if ((fS!=fO)) goto L_004551d3;
L_004551cf:; BB(0x004551cf);
    /* 004551cf: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
L_004551d3:; BB(0x004551d3);
    /* 004551d3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004551d6: cmp dword ptr [edx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_edx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004551dd: je 0x4551f5 */ if (fZ) goto L_004551f5;
L_004551df:; BB(0x004551df);
    /* 004551df: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004551e2: mov ecx, dword ptr [eax + 0x2f4] */ r_ecx = R32((u32)(r_eax+0x2f4u));
    /* 004551e8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004551eb: cmp dword ptr [edx + ecx*4 + 0x2d4], 0xe */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x2d4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004551f3: jne 0x455201 */ if (!fZ) goto L_00455201;
L_004551f5:; BB(0x004551f5);
    /* 004551f5: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004551f8: cmp dword ptr [eax + 0x2f4], 5 */ {  u32 a = R32((u32)(r_eax+0x2f4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004551ff: jle 0x455205 */ if ((fZ||fS!=fO)) goto L_00455205;
L_00455201:; BB(0x00455201);
    /* 00455201: mov byte ptr [ebp - 0x2d], 0 */ W8((u32)(r_ebp+0xffffffd3u), 0x0u);
L_00455205:; BB(0x00455205);
    /* 00455205: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00455209: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045520b: je 0x455219 */ if (fZ) goto L_00455219;
L_0045520d:; BB(0x0045520d);
    /* 0045520d: movzx edx, byte ptr [ebp - 0x2d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 00455211: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455213: jne 0x455446 */ if (!fZ) goto L_00455446;
L_00455219:; BB(0x00455219);
    /* 00455219: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045521c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0045521f: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00455223: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455225: jne 0x455273 */ if (!fZ) goto L_00455273;
L_00455227:; BB(0x00455227);
    /* 00455227: movzx edx, byte ptr [ebp - 0x2d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 0045522b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045522d: je 0x455273 */ if (fZ) goto L_00455273;
L_0045522f:; BB(0x0045522f);
    /* 0045522f: cmp dword ptr [ebp - 0x34], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455233: jne 0x45524c */ if (!fZ) goto L_0045524c;
L_00455235:; BB(0x00455235);
    /* 00455235: push 0xbeb */ { u32 v = 0xbebu; r_esp -= 4; W32(r_esp, v); }
    /* 0045523a: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045523f: push 0x6b95c0 */ { u32 v = 0x6b95c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455244: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x455249u); f_005e9f20();
    /* 00455249: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045524c:; BB(0x0045524c);
    /* 0045524c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045524f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00455252: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00455255: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455256: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00455259: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045525a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045525d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045525e: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455261: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455262: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455265: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x45526au); f_0044f840();
    /* 0045526a: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 0045526e: jmp 0x45572d */ goto L_0045572d;
L_00455273:; BB(0x00455273);
    /* 00455273: movzx eax, byte ptr [ebp - 0x2d] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 00455277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455279: jne 0x45541b */ if (!fZ) goto L_0045541b;
L_0045527f:; BB(0x0045527f);
    /* 0045527f: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00455283: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455285: je 0x45541b */ if (fZ) goto L_0045541b;
L_0045528b:; BB(0x0045528b);
    /* 0045528b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045528e: cmp dword ptr [edx + 0x2f4], 5 */ {  u32 a = R32((u32)(r_edx+0x2f4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455295: jle 0x45539a */ if ((fZ||fS!=fO)) goto L_0045539a;
L_0045529b:; BB(0x0045529b);
    /* 0045529b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045529e: cmp dword ptr [eax + 0x2f4], 6 */ {  u32 a = R32((u32)(r_eax+0x2f4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a5: jne 0x455348 */ if (!fZ) goto L_00455348;
L_004552ab:; BB(0x004552ab);
    /* 004552ab: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004552ae: cmp dword ptr [ecx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552b5: je 0x4552c3 */ if (fZ) goto L_004552c3;
L_004552b7:; BB(0x004552b7);
    /* 004552b7: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004552ba: cmp dword ptr [edx + 0x2ec], 0xe */ {  u32 a = R32((u32)(r_edx+0x2ecu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552c1: jne 0x455325 */ if (!fZ) goto L_00455325;
L_004552c3:; BB(0x004552c3);
    /* 004552c3: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 004552ca: jmp 0x4552d5 */ goto L_004552d5;
L_004552cc:; BB(0x004552cc);
    /* 004552cc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004552cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004552d2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004552d5:; BB(0x004552d5);
    /* 004552d5: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552d9: jge 0x455323 */ if ((fS==fO)) goto L_00455323;
L_004552db:; BB(0x004552db);
    /* 004552db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004552de: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004552e1: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004552e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004552e7: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004552ea: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4552efu); f_0044f680();
    /* 004552ef: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004552f2: cmp eax, dword ptr [ecx + 0x2ec] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552f8: jg 0x455319 */ if ((!fZ&&fS==fO)) goto L_00455319;
L_004552fa:; BB(0x004552fa);
    /* 004552fa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004552fd: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455300: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455305: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455306: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455309: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45530eu); f_0044f680();
    /* 0045530e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455311: cmp eax, dword ptr [edx + 0x2d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455317: jge 0x455321 */ if ((fS==fO)) goto L_00455321;
L_00455319:; BB(0x00455319);
    /* 00455319: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045531c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045531f: jmp 0x455323 */ goto L_00455323;
L_00455321:; BB(0x00455321);
    /* 00455321: jmp 0x4552cc */ goto L_004552cc;
L_00455323:; BB(0x00455323);
    /* 00455323: jmp 0x455346 */ goto L_00455346;
L_00455325:; BB(0x00455325);
    /* 00455325: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455327: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045532a: mov edx, dword ptr [ecx + 0x2f4] */ r_edx = R32((u32)(r_ecx+0x2f4u));
    /* 00455330: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455333: mov ecx, dword ptr [eax + edx*4 + 0x2d4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2d4u));
    /* 0045533a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045533b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045533e: call 0x44f7e0 */ r_esp -= 4; W32(r_esp, 0x455343u); f_0044f7e0();
    /* 00455343: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00455346:; BB(0x00455346);
    /* 00455346: jmp 0x455398 */ goto L_00455398;
L_00455348:; BB(0x00455348);
    /* 00455348: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045534b: cmp dword ptr [edx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_edx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455352: jne 0x455377 */ if (!fZ) goto L_00455377;
L_00455354:; BB(0x00455354);
    /* 00455354: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455356: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455359: mov ecx, dword ptr [eax + 0x2f4] */ r_ecx = R32((u32)(r_eax+0x2f4u));
    /* 0045535f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455362: mov eax, dword ptr [edx + ecx*4 + 0x2d4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x2d4u));
    /* 00455369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045536a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045536d: call 0x44f7e0 */ r_esp -= 4; W32(r_esp, 0x455372u); f_0044f7e0();
    /* 00455372: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00455375: jmp 0x455398 */ goto L_00455398;
L_00455377:; BB(0x00455377);
    /* 00455377: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455379: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045537c: mov edx, dword ptr [ecx + 0x2f4] */ r_edx = R32((u32)(r_ecx+0x2f4u));
    /* 00455382: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455385: mov ecx, dword ptr [eax + edx*4 + 0x2d0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x2d0u));
    /* 0045538c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045538d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455390: call 0x44f7e0 */ r_esp -= 4; W32(r_esp, 0x455395u); f_0044f7e0();
    /* 00455395: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00455398:; BB(0x00455398);
    /* 00455398: jmp 0x4553fa */ goto L_004553fa;
L_0045539a:; BB(0x0045539a);
    /* 0045539a: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 004553a1: jmp 0x4553ac */ goto L_004553ac;
L_004553a3:; BB(0x004553a3);
    /* 004553a3: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004553a6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004553a9: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_004553ac:; BB(0x004553ac);
    /* 004553ac: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004553b0: jge 0x4553fa */ if ((fS==fO)) goto L_004553fa;
L_004553b2:; BB(0x004553b2);
    /* 004553b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004553b5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004553b8: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 004553bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004553be: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004553c1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4553c6u); f_0044f680();
    /* 004553c6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004553c9: cmp eax, dword ptr [ecx + 0x2e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004553cf: jg 0x4553f0 */ if ((!fZ&&fS==fO)) goto L_004553f0;
L_004553d1:; BB(0x004553d1);
    /* 004553d1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004553d4: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004553d7: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004553dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004553dd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004553e0: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4553e5u); f_0044f680();
    /* 004553e5: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004553e8: cmp eax, dword ptr [edx + 0x2d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004553ee: jge 0x4553f8 */ if ((fS==fO)) goto L_004553f8;
L_004553f0:; BB(0x004553f0);
    /* 004553f0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004553f3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004553f6: jmp 0x4553fa */ goto L_004553fa;
L_004553f8:; BB(0x004553f8);
    /* 004553f8: jmp 0x4553a3 */ goto L_004553a3;
L_004553fa:; BB(0x004553fa);
    /* 004553fa: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004553fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004553fe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455401: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00455405: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455406: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455409: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045540a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045540d: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455412u); f_0044f840();
    /* 00455412: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 00455416: jmp 0x45572d */ goto L_0045572d;
L_0045541b:; BB(0x0045541b);
    /* 0045541b: movzx edx, byte ptr [ebp - 5] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0045541f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455421: jne 0x455444 */ if (!fZ) goto L_00455444;
L_00455423:; BB(0x00455423);
    /* 00455423: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00455427: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455429: jne 0x455444 */ if (!fZ) goto L_00455444;
L_0045542b:; BB(0x0045542b);
    /* 0045542b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045542e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045542f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455432: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455433: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455436: call 0x455740 */ r_esp -= 4; W32(r_esp, 0x45543bu); f_00455740();
    /* 0045543b: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 0045543f: jmp 0x45572d */ goto L_0045572d;
L_00455444:; BB(0x00455444);
    /* 00455444: jmp 0x45548c */ goto L_0045548c;
L_00455446:; BB(0x00455446);
    /* 00455446: mov dword ptr [ebp - 0x2c], 2 */ W32((u32)(r_ebp+0xffffffd4u), 0x2u);
    /* 0045544d: mov dword ptr [ebp - 0x1c], 3 */ W32((u32)(r_ebp+0xffffffe4u), 0x3u);
    /* 00455454: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00455457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455458: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045545b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045545c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045545f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455460: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455464: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455467: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x45546cu); f_0044f840();
    /* 0045546c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045546f: cmp dword ptr [ecx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455476: jne 0x455483 */ if (!fZ) goto L_00455483;
L_00455478:; BB(0x00455478);
    /* 00455478: mov ax, 3 */ r_eax = (r_eax & 0xffff0000u) | ((0x3u) & 0xffffu);
    /* 0045547c: jmp 0x45572d */ goto L_0045572d;
L_00455483:; BB(0x00455483);
    /* 00455483: mov ax, 2 */ r_eax = (r_eax & 0xffff0000u) | ((0x2u) & 0xffffu);
    /* 00455487: jmp 0x45572d */ goto L_0045572d;
L_0045548c:; BB(0x0045548c);
    /* 0045548c: cmp dword ptr [ebp - 0x34], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455490: jne 0x455530 */ if (!fZ) goto L_00455530;
L_00455496:; BB(0x00455496);
    /* 00455496: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455499: cmp dword ptr [edx + 0x2f4], 5 */ {  u32 a = R32((u32)(r_edx+0x2f4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004554a0: jne 0x455504 */ if (!fZ) goto L_00455504;
L_004554a2:; BB(0x004554a2);
    /* 004554a2: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 004554a9: jmp 0x4554b4 */ goto L_004554b4;
L_004554ab:; BB(0x004554ab);
    /* 004554ab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004554ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004554b1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004554b4:; BB(0x004554b4);
    /* 004554b4: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004554b8: jge 0x455502 */ if ((fS==fO)) goto L_00455502;
L_004554ba:; BB(0x004554ba);
    /* 004554ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004554bd: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004554c0: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004554c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004554c6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004554c9: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4554ceu); f_0044f680();
    /* 004554ce: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004554d1: cmp eax, dword ptr [ecx + 0x2e8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2e8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004554d7: jg 0x4554f8 */ if ((!fZ&&fS==fO)) goto L_004554f8;
L_004554d9:; BB(0x004554d9);
    /* 004554d9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004554dc: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004554df: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004554e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004554e5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004554e8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4554edu); f_0044f680();
    /* 004554ed: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004554f0: cmp eax, dword ptr [edx + 0x2d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x2d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004554f6: jge 0x455500 */ if ((fS==fO)) goto L_00455500;
L_004554f8:; BB(0x004554f8);
    /* 004554f8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004554fb: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004554fe: jmp 0x455502 */ goto L_00455502;
L_00455500:; BB(0x00455500);
    /* 00455500: jmp 0x4554ab */ goto L_004554ab;
L_00455502:; BB(0x00455502);
    /* 00455502: jmp 0x455530 */ goto L_00455530;
L_00455504:; BB(0x00455504);
    /* 00455504: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455507: cmp dword ptr [ecx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045550e: jne 0x455519 */ if (!fZ) goto L_00455519;
L_00455510:; BB(0x00455510);
    /* 00455510: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00455517: jmp 0x455530 */ goto L_00455530;
L_00455519:; BB(0x00455519);
    /* 00455519: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045551b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045551e: mov eax, dword ptr [edx + 0x2ec] */ r_eax = R32((u32)(r_edx+0x2ecu));
    /* 00455524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455525: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455528: call 0x44f7e0 */ r_esp -= 4; W32(r_esp, 0x45552du); f_0044f7e0();
    /* 0045552d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00455530:; BB(0x00455530);
    /* 00455530: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455533: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455536: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0045553b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045553c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045553f: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x455544u); f_0044f6c0();
    /* 00455544: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455547: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045554d: je 0x455557 */ if (fZ) goto L_00455557;
L_0045554f:; BB(0x0045554f);
    /* 0045554f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00455552: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00455555: jmp 0x45555d */ goto L_0045555d;
L_00455557:; BB(0x00455557);
    /* 00455557: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045555a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0045555d:; BB(0x0045555d);
    /* 0045555d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00455560: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00455563: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0045556a: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00455571: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00455578: jmp 0x455583 */ goto L_00455583;
L_0045557a:; BB(0x0045557a);
    /* 0045557a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045557d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455580: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00455583:; BB(0x00455583);
    /* 00455583: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455587: jge 0x4555f1 */ if ((fS==fO)) goto L_004555f1;
L_00455589:; BB(0x00455589);
    /* 00455589: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045558c: mov ecx, dword ptr [eax + 0x344] */ r_ecx = R32((u32)(r_eax+0x344u));
    /* 00455592: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00455595: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00455598: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045559b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045559e: mov ecx, dword ptr [edx + ecx*4 + 0x328] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x328u));
    /* 004555a5: cmp ecx, dword ptr [eax + 0x2fc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2fcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004555ab: je 0x4555ef */ if (fZ) goto L_004555ef;
L_004555ad:; BB(0x004555ad);
    /* 004555ad: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004555b1: jne 0x4555d1 */ if (!fZ) goto L_004555d1;
L_004555b3:; BB(0x004555b3);
    /* 004555b3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004555b6: mov eax, dword ptr [edx + 0x344] */ r_eax = R32((u32)(r_edx+0x344u));
    /* 004555bc: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004555bf: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004555c2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004555c5: mov edx, dword ptr [ecx + eax*4 + 0x328] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x328u));
    /* 004555cc: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004555cf: jmp 0x4555ef */ goto L_004555ef;
L_004555d1:; BB(0x004555d1);
    /* 004555d1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004555d4: mov ecx, dword ptr [eax + 0x344] */ r_ecx = R32((u32)(r_eax+0x344u));
    /* 004555da: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004555dd: sub ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004555e0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004555e3: mov eax, dword ptr [edx + ecx*4 + 0x328] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x328u));
    /* 004555ea: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004555ed: jmp 0x4555f1 */ goto L_004555f1;
L_004555ef:; BB(0x004555ef);
    /* 004555ef: jmp 0x45557a */ goto L_0045557a;
L_004555f1:; BB(0x004555f1);
    /* 004555f1: mov word ptr [ebp - 0x28], 3 */ W16((u32)(r_ebp+0xffffffd8u), 0x3u);
    /* 004555f7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004555fa: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004555fd: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00455600: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00455603: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455607: jle 0x455711 */ if ((fZ||fS!=fO)) goto L_00455711;
L_0045560d:; BB(0x0045560d);
    /* 0045560d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455610: mov ecx, dword ptr [eax + 0x344] */ r_ecx = R32((u32)(r_eax+0x344u));
    /* 00455616: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455619: cmp dword ptr [edx + ecx*4 + 0x324], 0xa */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x324u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455621: jle 0x455711 */ if ((fZ||fS!=fO)) goto L_00455711;
L_00455627:; BB(0x00455627);
    /* 00455627: cmp dword ptr [ebp - 0x24], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045562b: jne 0x45563f */ if (!fZ) goto L_0045563f;
L_0045562d:; BB(0x0045562d);
    /* 0045562d: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455631: jne 0x45563f */ if (!fZ) goto L_0045563f;
L_00455633:; BB(0x00455633);
    /* 00455633: cmp dword ptr [ebp - 0xc], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455637: jl 0x45563f */ if ((fS!=fO)) goto L_0045563f;
L_00455639:; BB(0x00455639);
    /* 00455639: cmp dword ptr [ebp - 0xc], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045563d: jle 0x4556a9 */ if ((fZ||fS!=fO)) goto L_004556a9;
L_0045563f:; BB(0x0045563f);
    /* 0045563f: cmp dword ptr [ebp - 0x24], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455643: jne 0x455657 */ if (!fZ) goto L_00455657;
L_00455645:; BB(0x00455645);
    /* 00455645: cmp dword ptr [ebp - 0x14], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455649: jne 0x455657 */ if (!fZ) goto L_00455657;
L_0045564b:; BB(0x0045564b);
    /* 0045564b: cmp dword ptr [ebp - 0xc], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045564f: jl 0x455657 */ if ((fS!=fO)) goto L_00455657;
L_00455651:; BB(0x00455651);
    /* 00455651: cmp dword ptr [ebp - 0xc], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455655: jle 0x4556a9 */ if ((fZ||fS!=fO)) goto L_004556a9;
L_00455657:; BB(0x00455657);
    /* 00455657: cmp dword ptr [ebp - 0x24], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045565b: jne 0x45567c */ if (!fZ) goto L_0045567c;
L_0045565d:; BB(0x0045565d);
    /* 0045565d: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455661: jl 0x45567c */ if ((fS!=fO)) goto L_0045567c;
L_00455663:; BB(0x00455663);
    /* 00455663: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00455666: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455669: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045566e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045566f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455672: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455677u); f_0044f680();
    /* 00455677: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045567a: jl 0x4556a9 */ if ((fS!=fO)) goto L_004556a9;
L_0045567c:; BB(0x0045567c);
    /* 0045567c: cmp dword ptr [ebp - 0x24], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455680: jne 0x455711 */ if (!fZ) goto L_00455711;
L_00455686:; BB(0x00455686);
    /* 00455686: cmp dword ptr [ebp - 0xc], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045568a: jle 0x455711 */ if ((fZ||fS!=fO)) goto L_00455711;
L_00455690:; BB(0x00455690);
    /* 00455690: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00455693: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455696: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045569b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045569c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045569f: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4556a4u); f_0044f680();
    /* 004556a4: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004556a7: jge 0x455711 */ if ((fS==fO)) goto L_00455711;
L_004556a9:; BB(0x004556a9);
    /* 004556a9: mov word ptr [ebp - 0x28], 4 */ W16((u32)(r_ebp+0xffffffd8u), 0x4u);
    /* 004556af: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 004556b6: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 004556bd: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004556c4: jmp 0x4556cf */ goto L_004556cf;
L_004556c6:; BB(0x004556c6);
    /* 004556c6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004556c9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004556cc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004556cf:; BB(0x004556cf);
    /* 004556cf: cmp dword ptr [ebp - 0x10], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004556d3: jge 0x455711 */ if ((fS==fO)) goto L_00455711;
L_004556d5:; BB(0x004556d5);
    /* 004556d5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004556d8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004556db: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004556e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004556e1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004556e4: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4556e9u); f_0044f680();
    /* 004556e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004556ea: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004556ed: call 0x450c20 */ r_esp -= 4; W32(r_esp, 0x4556f2u); f_00450c20();
    /* 004556f2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004556f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004556f7: jne 0x45570f */ if (!fZ) goto L_0045570f;
L_004556f9:; BB(0x004556f9);
    /* 004556f9: cmp dword ptr [ebp - 0x2c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004556fd: jne 0x455707 */ if (!fZ) goto L_00455707;
L_004556ff:; BB(0x004556ff);
    /* 004556ff: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00455702: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00455705: jmp 0x45570f */ goto L_0045570f;
L_00455707:; BB(0x00455707);
    /* 00455707: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045570a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045570d: jmp 0x455711 */ goto L_00455711;
L_0045570f:; BB(0x0045570f);
    /* 0045570f: jmp 0x4556c6 */ goto L_004556c6;
L_00455711:; BB(0x00455711);
    /* 00455711: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00455714: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455715: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00455718: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455719: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045571c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045571d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00455720: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455721: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00455724: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x455729u); f_0044f840();
    /* 00455729: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
L_0045572d:; BB(0x0045572d);
    /* 0045572d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045572f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455730: ret 8 */ FN_RET(0x00455060); r_esp += 12; return;
}

void f_00455740(void) /* paigowai::func_00455740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00455740);
    /* 00455740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455741: mov ebp, esp */ r_ebp = r_esp;
    /* 00455743: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455746: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455747: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045574a: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00455751: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00455758: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0045575b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045575c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0045575f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455760: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00455763: call 0x4516a0 */ r_esp -= 4; W32(r_esp, 0x455768u); f_004516a0();
    /* 00455768: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0045576b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045576c: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0045576f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455770: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00455773: call 0x4512c0 */ r_esp -= 4; W32(r_esp, 0x455778u); f_004512c0();
    /* 00455778: cmp dword ptr [ebp - 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045577c: je 0x455790 */ if (fZ) goto L_00455790;
L_0045577e:; BB(0x0045577e);
    /* 0045577e: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455782: je 0x455790 */ if (fZ) goto L_00455790;
L_00455784:; BB(0x00455784);
    /* 00455784: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455788: je 0x455790 */ if (fZ) goto L_00455790;
L_0045578a:; BB(0x0045578a);
    /* 0045578a: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045578e: jne 0x4557a7 */ if (!fZ) goto L_004557a7;
L_00455790:; BB(0x00455790);
    /* 00455790: push 0xca5 */ { u32 v = 0xca5u; r_esp -= 4; W32(r_esp, v); }
    /* 00455795: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045579a: push 0x6b95e0 */ { u32 v = 0x6b95e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045579f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4557a4u); f_005e9f20();
    /* 004557a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004557a7:; BB(0x004557a7);
    /* 004557a7: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004557ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004557b0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004557b3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004557b6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004557b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004557bc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004557bf: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004557c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004557c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004557c8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4557cdu); f_0044f680();
    /* 004557cd: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004557d0: jl 0x455812 */ if ((fS!=fO)) goto L_00455812;
L_004557d2:; BB(0x004557d2);
    /* 004557d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004557d5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004557d8: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004557dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004557de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004557e1: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4557e6u); f_0044f680();
    /* 004557e6: mov esi, eax */ r_esi = r_eax;
    /* 004557e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004557eb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004557ee: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004557f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004557f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004557f7: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4557fcu); f_0044f680();
    /* 004557fc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004557fe: jle 0x455812 */ if ((fZ||fS!=fO)) goto L_00455812;
L_00455800:; BB(0x00455800);
    /* 00455800: mov word ptr [ebp - 0x18], 1 */ W16((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 00455806: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455809: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045580c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045580f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00455812:; BB(0x00455812);
    /* 00455812: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455815: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00455818: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045581d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045581e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00455821: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455826u); f_0044f680();
    /* 00455826: mov esi, eax */ r_esi = r_eax;
    /* 00455828: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045582b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045582e: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455833: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455834: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00455837: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45583cu); f_0044f680();
    /* 0045583c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045583e: jne 0x4558cc */ if (!fZ) goto L_004558cc;
L_00455844:; BB(0x00455844);
    /* 00455844: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00455847: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045584a: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045584f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455850: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00455853: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455858u); f_0044f680();
    /* 00455858: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045585b: jne 0x455888 */ if (!fZ) goto L_00455888;
L_0045585d:; BB(0x0045585d);
    /* 0045585d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455860: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00455863: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00455868: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455869: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045586c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x455871u); f_0044f680();
    /* 00455871: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455874: jl 0x455888 */ if ((fS!=fO)) goto L_00455888;
L_00455876:; BB(0x00455876);
    /* 00455876: mov word ptr [ebp - 0x18], 1 */ W16((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0045587c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045587f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00455882: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00455885: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00455888:; BB(0x00455888);
    /* 00455888: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045588b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045588e: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00455893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00455894: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00455897: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45589cu); f_0044f680();
    /* 0045589c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045589f: jge 0x4558cc */ if ((fS==fO)) goto L_004558cc;
L_004558a1:; BB(0x004558a1);
    /* 004558a1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004558a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004558a7: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004558ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004558ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004558b0: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4558b5u); f_0044f680();
    /* 004558b5: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004558b8: jl 0x4558cc */ if ((fS!=fO)) goto L_004558cc;
L_004558ba:; BB(0x004558ba);
    /* 004558ba: mov word ptr [ebp - 0x18], 1 */ W16((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 004558c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004558c3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004558c6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004558c9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004558cc:; BB(0x004558cc);
    /* 004558cc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004558cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004558d0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004558d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004558d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004558d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004558d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004558db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004558dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004558df: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4558e4u); f_0044f840();
    /* 004558e4: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004558e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004558e9: mov esp, ebp */ r_esp = r_ebp;
    /* 004558eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004558ec: ret 8 */ FN_RET(0x00455740); r_esp += 12; return;
}

void f_00456020(void) /* paigowai::func_00456020 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456020);
    /* 00456020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456021: mov ebp, esp */ r_ebp = r_esp;
    /* 00456023: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456026: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00456027: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0045602a: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00456031: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00456038: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045603b: movzx ecx, byte ptr [eax + 0x2c2] */ r_ecx = (u32)R8((u32)(r_eax+0x2c2u));
    /* 00456042: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456044: je 0x456058 */ if (fZ) goto L_00456058;
L_00456046:; BB(0x00456046);
    /* 00456046: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 00456049: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045604a: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0045604d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045604e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456051: call 0x4516a0 */ r_esp -= 4; W32(r_esp, 0x456056u); f_004516a0();
    /* 00456056: jmp 0x456068 */ goto L_00456068;
L_00456058:; BB(0x00456058);
    /* 00456058: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0045605b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045605c: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0045605f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456060: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456063: call 0x4512c0 */ r_esp -= 4; W32(r_esp, 0x456068u); f_004512c0();
L_00456068:; BB(0x00456068);
    /* 00456068: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045606b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045606c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045606f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456070: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456073: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456074: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456078: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045607b: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x456080u); f_0044f840();
    /* 00456080: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00456083: mov dx, word ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00456086: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456087: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045608a: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45608fu); f_0044f680();
    /* 0045608f: mov esi, eax */ r_esi = r_eax;
    /* 00456091: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00456094: mov cx, word ptr [eax] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00456097: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456098: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045609b: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4560a0u); f_0044f680();
    /* 004560a0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004560a2: je 0x4560d5 */ if (fZ) goto L_004560d5;
L_004560a4:; BB(0x004560a4);
    /* 004560a4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004560a7: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 004560aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004560ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004560ae: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4560b3u); f_0044f680();
    /* 004560b3: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004560b6: je 0x4560cf */ if (fZ) goto L_004560cf;
L_004560b8:; BB(0x004560b8);
    /* 004560b8: push 0xdf8 */ { u32 v = 0xdf8u; r_esp -= 4; W32(r_esp, v); }
    /* 004560bd: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004560c2: push 0x6b9654 */ { u32 v = 0x6b9654u; r_esp -= 4; W32(r_esp, v); }
    /* 004560c7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4560ccu); f_005e9f20();
    /* 004560cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004560cf:; BB(0x004560cf);
    /* 004560cf: mov ax, 1 */ r_eax = (r_eax & 0xffff0000u) | ((0x1u) & 0xffffu);
    /* 004560d3: jmp 0x4560d8 */ goto L_004560d8;
L_004560d5:; BB(0x004560d5);
    /* 004560d5: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_004560d8:; BB(0x004560d8);
    /* 004560d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004560d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004560db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004560dc: ret 8 */ FN_RET(0x00456020); r_esp += 12; return;
}

void f_004560e0(void) /* paigowai::func_004560e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004560e0);
    /* 004560e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004560e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004560e3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004560e6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004560e9: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004560f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004560f7: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 004560fe: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00456105: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 0045610c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00456113: jmp 0x45611e */ goto L_0045611e;
L_00456115:; BB(0x00456115);
    /* 00456115: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456118: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045611b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0045611e:; BB(0x0045611e);
    /* 0045611e: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456122: jge 0x4561b1 */ if ((fS==fO)) goto L_004561b1;
L_00456128:; BB(0x00456128);
    /* 00456128: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045612c: jne 0x45616d */ if (!fZ) goto L_0045616d;
L_0045612e:; BB(0x0045612e);
    /* 0045612e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456131: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456134: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045613a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045613d: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456142u); f_0044f680();
    /* 00456142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456143: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456146: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x45614bu); f_0044f700();
    /* 0045614b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045614e: jne 0x45616d */ if (!fZ) goto L_0045616d;
L_00456150:; BB(0x00456150);
    /* 00456150: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456153: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456156: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0045615b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045615c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045615f: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456164u); f_0044f680();
    /* 00456164: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00456167: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045616a: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0045616d:; BB(0x0045616d);
    /* 0045616d: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456171: jne 0x4561ac */ if (!fZ) goto L_004561ac;
L_00456173:; BB(0x00456173);
    /* 00456173: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456176: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456179: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 0045617e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045617f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456182: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456187u); f_0044f680();
    /* 00456187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456188: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045618b: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456190u); f_0044f700();
    /* 00456190: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456193: jne 0x4561ac */ if (!fZ) goto L_004561ac;
L_00456195:; BB(0x00456195);
    /* 00456195: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456198: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045619b: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004561a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004561a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004561a4: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4561a9u); f_0044f680();
    /* 004561a9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004561ac:; BB(0x004561ac);
    /* 004561ac: jmp 0x456115 */ goto L_00456115;
L_004561b1:; BB(0x004561b1);
    /* 004561b1: cmp dword ptr [ebp - 0x14], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004561b5: jne 0x4561e6 */ if (!fZ) goto L_004561e6;
L_004561b7:; BB(0x004561b7);
    /* 004561b7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004561ba: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 004561bd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004561c0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004561c3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004561c6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004561c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004561ca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004561cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004561ce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004561d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004561d2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004561d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004561d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004561d9: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4561deu); f_0044f840();
    /* 004561de: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004561e1: jmp 0x45641a */ goto L_0045641a;
L_004561e6:; BB(0x004561e6);
    /* 004561e6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004561e9: movzx eax, byte ptr [edx + 0x2c8] */ r_eax = (u32)R8((u32)(r_edx+0x2c8u));
    /* 004561f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004561f2: je 0x4562b7 */ if (fZ) goto L_004562b7;
L_004561f8:; BB(0x004561f8);
    /* 004561f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004561fb: cmp dword ptr [ecx + 0x2d8], 1 */ {  u32 a = R32((u32)(r_ecx+0x2d8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456202: jne 0x45621a */ if (!fZ) goto L_0045621a;
L_00456204:; BB(0x00456204);
    /* 00456204: mov word ptr [ebp - 0x18], 1 */ W16((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 0045620a: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00456211: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00456218: jmp 0x456296 */ goto L_00456296;
L_0045621a:; BB(0x0045621a);
    /* 0045621a: mov word ptr [ebp - 0x18], 2 */ W16((u32)(r_ebp+0xffffffe8u), 0x2u);
    /* 00456220: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00456227: jmp 0x456232 */ goto L_00456232;
L_00456229:; BB(0x00456229);
    /* 00456229: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045622c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045622f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00456232:; BB(0x00456232);
    /* 00456232: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456236: jge 0x456296 */ if ((fS==fO)) goto L_00456296;
L_00456238:; BB(0x00456238);
    /* 00456238: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045623b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045623c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045623f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456240: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456243: call 0x44f7e0 */ r_esp -= 4; W32(r_esp, 0x456248u); f_0044f7e0();
    /* 00456248: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045624b: mov ax, word ptr [edx + eax*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_eax*2+0x4u))) & 0xffffu);
    /* 00456250: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456251: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456254: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x456259u); f_0044f6c0();
    /* 00456259: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045625c: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456262: je 0x456294 */ if (fZ) goto L_00456294;
L_00456264:; BB(0x00456264);
    /* 00456264: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456268: jne 0x45627f */ if (!fZ) goto L_0045627f;
L_0045626a:; BB(0x0045626a);
    /* 0045626a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045626d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045626e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00456271: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456272: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456275: call 0x44f7e0 */ r_esp -= 4; W32(r_esp, 0x45627au); f_0044f7e0();
    /* 0045627a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045627d: jmp 0x456294 */ goto L_00456294;
L_0045627f:; BB(0x0045627f);
    /* 0045627f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456282: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456283: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00456286: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456287: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045628a: call 0x44f7e0 */ r_esp -= 4; W32(r_esp, 0x45628fu); f_0044f7e0();
    /* 0045628f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00456292: jmp 0x456296 */ goto L_00456296;
L_00456294:; BB(0x00456294);
    /* 00456294: jmp 0x456229 */ goto L_00456229;
L_00456296:; BB(0x00456296);
    /* 00456296: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00456299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045629a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045629d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045629e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004562a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004562a2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004562a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004562a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004562a9: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4562aeu); f_0044f840();
    /* 004562ae: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004562b2: jmp 0x45641a */ goto L_0045641a;
L_004562b7:; BB(0x004562b7);
    /* 004562b7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004562ba: movzx edx, byte ptr [ecx + 0x2c2] */ r_edx = (u32)R8((u32)(r_ecx+0x2c2u));
    /* 004562c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004562c3: je 0x456374 */ if (fZ) goto L_00456374;
L_004562c9:; BB(0x004562c9);
    /* 004562c9: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004562cd: jl 0x45633f */ if ((fS!=fO)) goto L_0045633f;
L_004562cf:; BB(0x004562cf);
    /* 004562cf: mov word ptr [ebp - 0x18], 6 */ W16((u32)(r_ebp+0xffffffe8u), 0x6u);
    /* 004562d5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004562dc: jmp 0x4562e7 */ goto L_004562e7;
L_004562de:; BB(0x004562de);
    /* 004562de: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004562e1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004562e4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004562e7:; BB(0x004562e7);
    /* 004562e7: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004562eb: jge 0x45633d */ if ((fS==fO)) goto L_0045633d;
L_004562ed:; BB(0x004562ed);
    /* 004562ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004562f0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004562f3: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004562f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004562f9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004562fc: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456301u); f_0044f680();
    /* 00456301: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456304: jne 0x45633b */ if (!fZ) goto L_0045633b;
L_00456306:; BB(0x00456306);
    /* 00456306: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456309: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045630c: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456311: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456312: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456315: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x45631au); f_0044f6c0();
    /* 0045631a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045631d: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456323: je 0x45633b */ if (fZ) goto L_0045633b;
L_00456325:; BB(0x00456325);
    /* 00456325: cmp dword ptr [ebp - 0x1c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456329: jne 0x456333 */ if (!fZ) goto L_00456333;
L_0045632b:; BB(0x0045632b);
    /* 0045632b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045632e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00456331: jmp 0x45633b */ goto L_0045633b;
L_00456333:; BB(0x00456333);
    /* 00456333: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456336: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00456339: jmp 0x45633d */ goto L_0045633d;
L_0045633b:; BB(0x0045633b);
    /* 0045633b: jmp 0x4562de */ goto L_004562de;
L_0045633d:; BB(0x0045633d);
    /* 0045633d: jmp 0x456353 */ goto L_00456353;
L_0045633f:; BB(0x0045633f);
    /* 0045633f: mov word ptr [ebp - 0x18], 5 */ W16((u32)(r_ebp+0xffffffe8u), 0x5u);
    /* 00456345: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0045634c: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_00456353:; BB(0x00456353);
    /* 00456353: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00456356: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456357: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045635a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045635b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045635e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045635f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00456362: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456363: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456366: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x45636bu); f_0044f840();
    /* 0045636b: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 0045636f: jmp 0x45641a */ goto L_0045641a;
L_00456374:; BB(0x00456374);
    /* 00456374: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456377: movzx eax, byte ptr [edx + 0x2c5] */ r_eax = (u32)R8((u32)(r_edx+0x2c5u));
    /* 0045637e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456380: je 0x4563e4 */ if (fZ) goto L_004563e4;
L_00456382:; BB(0x00456382);
    /* 00456382: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456386: jle 0x4563b2 */ if ((fZ||fS!=fO)) goto L_004563b2;
L_00456388:; BB(0x00456388);
    /* 00456388: mov word ptr [ebp - 0x18], 4 */ W16((u32)(r_ebp+0xffffffe8u), 0x4u);
    /* 0045638e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00456390: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00456393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456394: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456397: call 0x44f7e0 */ r_esp -= 4; W32(r_esp, 0x45639cu); f_0044f7e0();
    /* 0045639c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045639f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004563a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004563a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004563a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004563a8: call 0x44f7e0 */ r_esp -= 4; W32(r_esp, 0x4563adu); f_0044f7e0();
    /* 004563ad: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004563b0: jmp 0x4563c6 */ goto L_004563c6;
L_004563b2:; BB(0x004563b2);
    /* 004563b2: mov word ptr [ebp - 0x18], 3 */ W16((u32)(r_ebp+0xffffffe8u), 0x3u);
    /* 004563b8: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004563bf: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_004563c6:; BB(0x004563c6);
    /* 004563c6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004563c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004563ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004563cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004563ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004563d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004563d2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004563d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004563d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004563d9: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4563deu); f_0044f840();
    /* 004563de: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 004563e2: jmp 0x45641a */ goto L_0045641a;
L_004563e4:; BB(0x004563e4);
    /* 004563e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004563e6: jne 0x4563ff */ if (!fZ) goto L_004563ff;
L_004563e8:; BB(0x004563e8);
    /* 004563e8: push 0xe6e */ { u32 v = 0xe6eu; r_esp -= 4; W32(r_esp, v); }
    /* 004563ed: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004563f2: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004563f7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4563fcu); f_005e9f20();
    /* 004563fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004563ff:; BB(0x004563ff);
    /* 004563ff: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00456402: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456403: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00456406: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456407: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045640a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045640b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045640e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045640f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456412: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x456417u); f_0044f840();
    /* 00456417: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_0045641a:; BB(0x0045641a);
    /* 0045641a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045641c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045641d: ret 8 */ FN_RET(0x004560e0); r_esp += 12; return;
}

void f_00456f70(void) /* paigowai::func_00456f70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456f70);
    /* 00456f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00456f73: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456f76: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00456f7b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00456f7d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00456f80: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00456f83: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00456f89: jmp 0x456f97 */ goto L_00456f97;
L_00456f8b:; BB(0x00456f8b);
    /* 00456f8b: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00456f8f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00456f93: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_00456f97:; BB(0x00456f97);
    /* 00456f97: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00456f9b: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456f9e: jge 0x456fb7 */ if ((fS==fO)) goto L_00456fb7;
L_00456fa0:; BB(0x00456fa0);
    /* 00456fa0: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00456fa4: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00456fa8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00456fab: mov dx, word ptr [ecx + edx*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_edx*2+0x4u))) & 0xffffu);
    /* 00456fb0: mov word ptr [ebp + eax*2 - 0x20], dx */ W16((u32)(r_ebp+r_eax*2+0xffffffe0u), (u16)r_edx);
    /* 00456fb5: jmp 0x456f8b */ goto L_00456f8b;
L_00456fb7:; BB(0x00456fb7);
    /* 00456fb7: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00456fba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456fbb: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00456fbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456fc0: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00456fc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456fc5: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00456fc8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00456fcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456fcc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00456fcf: call 0x4530b0 */ r_esp -= 4; W32(r_esp, 0x456fd4u); f_004530b0();
    /* 00456fd4: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00456fd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456fd8: mov ax, word ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x14u))) & 0xffffu);
    /* 00456fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456fdd: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00456fe1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456fe2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00456fe5: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00456fe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456fe9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00456fec: call 0x4530b0 */ r_esp -= 4; W32(r_esp, 0x456ff1u); f_004530b0();
    /* 00456ff1: movsx ecx, byte ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd8u));
    /* 00456ff5: movsx edx, byte ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 00456ff9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456ffb: jne 0x457005 */ if (!fZ) goto L_00457005;
L_00456ffd:; BB(0x00456ffd);
    /* 00456ffd: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00457003: jmp 0x45702a */ goto L_0045702a;
L_00457005:; BB(0x00457005);
    /* 00457005: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00457008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457009: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 0045700c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045700d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00457010: call 0x453550 */ r_esp -= 4; W32(r_esp, 0x457015u); f_00453550();
    /* 00457015: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00457018: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045701a: je 0x457024 */ if (fZ) goto L_00457024;
L_0045701c:; BB(0x0045701c);
    /* 0045701c: mov word ptr [ebp - 0x2c], 0xffff */ W16((u32)(r_ebp+0xffffffd4u), 0xffffu);
    /* 00457022: jmp 0x45702a */ goto L_0045702a;
L_00457024:; BB(0x00457024);
    /* 00457024: mov word ptr [ebp - 0x2c], 1 */ W16((u32)(r_ebp+0xffffffd4u), 0x1u);
L_0045702a:; BB(0x0045702a);
    /* 0045702a: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0045702d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045702e: mov cx, word ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00457032: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457033: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00457037: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457038: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0045703b: call 0x452fd0 */ r_esp -= 4; W32(r_esp, 0x457040u); f_00452fd0();
    /* 00457040: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00457043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00457044: mov cx, word ptr [ebp + 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x14u))) & 0xffffu);
    /* 00457048: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457049: mov dx, word ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 0045704d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045704e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00457051: call 0x452fd0 */ r_esp -= 4; W32(r_esp, 0x457056u); f_00452fd0();
    /* 00457056: movsx eax, byte ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd8u));
    /* 0045705a: movsx ecx, byte ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 0045705e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457060: jle 0x45706b */ if ((fZ||fS!=fO)) goto L_0045706b;
L_00457062:; BB(0x00457062);
    /* 00457062: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00457064: jmp 0x457100 */ goto L_00457100;
L_0045706b:; BB(0x0045706b);
    /* 0045706b: movsx edx, byte ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff4u));
    /* 0045706f: movsx eax, byte ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd8u));
    /* 00457073: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457075: jle 0x457080 */ if ((fZ||fS!=fO)) goto L_00457080;
L_00457077:; BB(0x00457077);
    /* 00457077: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00457079: jmp 0x457100 */ goto L_00457100;
L_00457080:; BB(0x00457080);
    /* 00457080: movsx ecx, byte ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd8u));
    /* 00457084: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457087: jne 0x4570a1 */ if (!fZ) goto L_004570a1;
L_00457089:; BB(0x00457089);
    /* 00457089: movsx edx, byte ptr [ebp - 0x25] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdbu));
    /* 0045708d: movsx eax, byte ptr [ebp - 9] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff7u));
    /* 00457091: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457093: jl 0x45709b */ if ((fS!=fO)) goto L_0045709b;
L_00457095:; BB(0x00457095);
    /* 00457095: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00457097: jmp 0x457100 */ goto L_00457100;
L_0045709b:; BB(0x0045709b);
    /* 0045709b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045709d: jmp 0x457100 */ goto L_00457100;
L_004570a1:; BB(0x004570a1);
    /* 004570a1: movsx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdbu));
    /* 004570a5: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004570a8: jge 0x4570bb */ if ((fS==fO)) goto L_004570bb;
L_004570aa:; BB(0x004570aa);
    /* 004570aa: movsx edx, byte ptr [ebp - 9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff7u));
    /* 004570ae: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004570b1: jge 0x4570bb */ if ((fS==fO)) goto L_004570bb;
L_004570b3:; BB(0x004570b3);
    /* 004570b3: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004570b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004570b9: jne 0x4570d3 */ if (!fZ) goto L_004570d3;
L_004570bb:; BB(0x004570bb);
    /* 004570bb: movsx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdbu));
    /* 004570bf: movsx edx, byte ptr [ebp - 9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xfffffff7u));
    /* 004570c3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004570c5: jl 0x4570cd */ if ((fS!=fO)) goto L_004570cd;
L_004570c7:; BB(0x004570c7);
    /* 004570c7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004570c9: jmp 0x457100 */ goto L_00457100;
L_004570cd:; BB(0x004570cd);
    /* 004570cd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004570cf: jmp 0x457100 */ goto L_00457100;
L_004570d3:; BB(0x004570d3);
    /* 004570d3: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004570d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004570d9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004570dc: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004570df: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 004570e1: jmp 0x457100 */ goto L_00457100;
L_00457100:; BB(0x00457100);
    /* 00457100: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457103: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00457105: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x45710au); f_00686d72();
    /* 0045710a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045710c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045710d: ret 0x10 */ FN_RET(0x00456f70); r_esp += 20; return;
}

void f_00457110(void) /* paigowai::func_00457110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457110);
    /* 00457110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457111: mov ebp, esp */ r_ebp = r_esp;
    /* 00457113: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457116: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0045711b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045711d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00457120: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00457123: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0045712a: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00457131: jmp 0x45713c */ goto L_0045713c;
L_00457133:; BB(0x00457133);
    /* 00457133: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457136: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457139: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0045713c:; BB(0x0045713c);
    /* 0045713c: cmp dword ptr [ebp - 0x18], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457140: jge 0x45714e */ if ((fS==fO)) goto L_0045714e;
L_00457142:; BB(0x00457142);
    /* 00457142: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457145: mov word ptr [ebp + ecx*2 - 0x14], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffecu), 0x0u);
    /* 0045714c: jmp 0x457133 */ goto L_00457133;
L_0045714e:; BB(0x0045714e);
    /* 0045714e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00457155: jmp 0x457160 */ goto L_00457160;
L_00457157:; BB(0x00457157);
    /* 00457157: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045715a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045715d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_00457160:; BB(0x00457160);
    /* 00457160: cmp dword ptr [ebp - 0x18], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00457164: jge 0x4571a3 */ if ((fS==fO)) goto L_004571a3;
L_00457166:; BB(0x00457166);
    /* 00457166: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00457169: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045716c: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00457171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457172: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00457175: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x45717au); f_0044f6c0();
    /* 0045717a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045717d: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457183: je 0x4571a1 */ if (fZ) goto L_004571a1;
L_00457185:; BB(0x00457185);
    /* 00457185: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00457188: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045718b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045718e: mov ax, word ptr [ecx + eax*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00457193: mov word ptr [ebp + edx*2 - 0x14], ax */ W16((u32)(r_ebp+r_edx*2+0xffffffecu), (u16)r_eax);
    /* 00457198: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045719b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045719e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_004571a1:; BB(0x004571a1);
    /* 004571a1: jmp 0x457157 */ goto L_00457157;
L_004571a3:; BB(0x004571a3);
    /* 004571a3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004571a6: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 004571aa: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004571ad: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 004571b0: mov dx, word ptr [ebp - 0x12] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 004571b4: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 004571b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004571ba: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 004571bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004571bf: je 0x4571cb */ if (fZ) goto L_004571cb;
L_004571c1:; BB(0x004571c1);
    /* 004571c1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004571c4: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 004571c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004571c9: jne 0x4571e2 */ if (!fZ) goto L_004571e2;
L_004571cb:; BB(0x004571cb);
    /* 004571cb: push 0x1076 */ { u32 v = 0x1076u; r_esp -= 4; W32(r_esp, v); }
    /* 004571d0: push 0x6b94a0 */ { u32 v = 0x6b94a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004571d5: push 0x6b966c */ { u32 v = 0x6b966cu; r_esp -= 4; W32(r_esp, v); }
    /* 004571da: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4571dfu); f_005e9f20();
    /* 004571df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004571e2:; BB(0x004571e2);
    /* 004571e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004571e5: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004571e7: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4571ecu); f_00686d72();
    /* 004571ec: mov esp, ebp */ r_esp = r_ebp;
    /* 004571ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004571ef: ret 8 */ FN_RET(0x00457110); r_esp += 12; return;
}

