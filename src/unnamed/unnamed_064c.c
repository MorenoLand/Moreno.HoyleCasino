#include "protos.h"

void f_0064c450(void) /* sub_64C450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c450);
    /* 0064c450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c451: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c453: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c456: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0064c459: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0064c45d: fldz  */ FPUSH(0.0);
    /* 0064c45f: fcomp qword ptr [ebp + 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0x8u))); FPOP();
    /* 0064c462: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064c464: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064c467: jne 0x64c479 */ if (!fZ) goto L_0064c479;
L_0064c469:; BB(0x0064c469);
    /* 0064c469: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0064c46d: fld qword ptr [ebp + 8] */ FPUSH(R_F64((u32)(r_ebp+0x8u)));
    /* 0064c470: fmul qword ptr [0x6dcd70] */ ST(0) = ST(0) * R_F64((u32)(0x6dcd70u));
    /* 0064c476: fstp qword ptr [ebp + 8] */ W_F64((u32)(r_ebp+0x8u), ST(0)); FPOP();
L_0064c479:; BB(0x0064c479);
    /* 0064c479: fld qword ptr [0x6dcd68] */ FPUSH(R_F64((u32)(0x6dcd68u)));
    /* 0064c47f: fcomp qword ptr [ebp + 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0x8u))); FPOP();
    /* 0064c482: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064c484: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0064c487: jp 0x64c492 */ if (fP) goto L_0064c492;
L_0064c489:; BB(0x0064c489);
    /* 0064c489: fld qword ptr [0x6dcd68] */ FPUSH(R_F64((u32)(0x6dcd68u)));
    /* 0064c48f: fstp qword ptr [ebp + 8] */ W_F64((u32)(r_ebp+0x8u), ST(0)); FPOP();
L_0064c492:; BB(0x0064c492);
    /* 0064c492: fld qword ptr [0x6dcd60] */ FPUSH(R_F64((u32)(0x6dcd60u)));
    /* 0064c498: fcomp qword ptr [ebp + 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0x8u))); FPOP();
    /* 0064c49b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064c49d: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064c4a0: jne 0x64c4ab */ if (!fZ) goto L_0064c4ab;
L_0064c4a2:; BB(0x0064c4a2);
    /* 0064c4a2: fld qword ptr [0x6dcd60] */ FPUSH(R_F64((u32)(0x6dcd60u)));
    /* 0064c4a8: fstp qword ptr [ebp + 8] */ W_F64((u32)(r_ebp+0x8u), ST(0)); FPOP();
L_0064c4ab:; BB(0x0064c4ab);
    /* 0064c4ab: fld qword ptr [ebp + 8] */ FPUSH(R_F64((u32)(r_ebp+0x8u)));
    /* 0064c4ae: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0064c4b4: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x64c4b9u); f_00686cc0();
    /* 0064c4b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c4bc: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0064c4be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c4c1: fild dword ptr [edx] */ FPUSH((long double)(i32)R32((u32)(r_edx)));
    /* 0064c4c3: fmul qword ptr [0x6b4b00] */ ST(0) = ST(0) * R_F64((u32)(0x6b4b00u));
    /* 0064c4c9: fsubr qword ptr [ebp + 8] */ ST(0) = R_F64((u32)(r_ebp+0x8u)) - ST(0);
    /* 0064c4cc: fstp qword ptr [ebp + 8] */ W_F64((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0064c4cf: fld qword ptr [ebp + 8] */ FPUSH(R_F64((u32)(r_ebp+0x8u)));
    /* 0064c4d2: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x64c4d7u); f_00686cc0();
    /* 0064c4d7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c4d8: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 0064c4dd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c4dd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c4dd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c4df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c4e2: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0064c4e5: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0064c4e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c4eb: je 0x64c509 */ if (fZ) goto L_0064c509;
L_0064c4ed:; BB(0x0064c4ed);
    /* 0064c4ed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c4f0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064c4f2: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064c4f5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c4f8: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0064c4fa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c4fd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064c500: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064c503: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c506: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_0064c509:; BB(0x0064c509);
    /* 0064c509: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c50b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c50c: ret 8 */ FN_RET(0x0064c450); r_esp += 12; return;
}

void f_0064c510(void) /* sub_64C510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c510);
    /* 0064c510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c511: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c514: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c517: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c51a: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0064c51c: fmul qword ptr [0x6b4b00] */ ST(0) = ST(0) * R_F64((u32)(0x6b4b00u));
    /* 0064c522: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c525: fiadd dword ptr [ecx + 4] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_ecx+0x4u));
    /* 0064c528: fadd qword ptr [ebp + 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0x8u));
    /* 0064c52b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c52e: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0064c531: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c534: call 0x64c450 */ r_esp -= 4; W32(r_esp, 0x64c539u); f_0064c450();
    /* 0064c539: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c53b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c53c: ret 8 */ FN_RET(0x0064c510); r_esp += 12; return;
}

void f_0064c540(void) /* sub_64C540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c540);
    /* 0064c540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c541: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c543: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c547: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c54a: fldz  */ FPUSH(0.0);
    /* 0064c54c: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0064c54f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c552: call 0x64c510 */ r_esp -= 4; W32(r_esp, 0x64c557u); f_0064c510();
    /* 0064c557: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c559: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c55a: ret  */ FN_RET(0x0064c540); r_esp += 4; return;
}

void f_0064c560(void) /* sub_64C560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c560);
    /* 0064c560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c561: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c563: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c566: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064c569: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c56c: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0064c56e: fmul qword ptr [0x6b4b00] */ ST(0) = ST(0) * R_F64((u32)(0x6b4b00u));
    /* 0064c574: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c577: fiadd dword ptr [ecx + 4] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_ecx+0x4u));
    /* 0064c57a: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0064c57d: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 0064c580: fmul qword ptr [ebp + 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0x8u));
    /* 0064c583: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0064c586: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c589: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 0064c58c: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0064c58f: call dword ptr [0x6b2244] */ { u32 t = R32((u32)(0x6b2244u)); r_esp -= 4; W32(r_esp, 0x64c595u); call_ind(t); }
    /* 0064c595: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c598: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0064c59b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c59e: fld qword ptr [ebp - 8] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff8u)));
    /* 0064c5a1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0064c5a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c5a7: call 0x64c450 */ r_esp -= 4; W32(r_esp, 0x64c5acu); f_0064c450();
    /* 0064c5ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c5ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c5af: ret 8 */ FN_RET(0x0064c560); r_esp += 12; return;
}

void f_0064c5c0(void) /* sub_64C5C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c5c0);
    /* 0064c5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c5c3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c5c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064c5c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064c5cc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064c5cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c5d0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064c5d3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064c5d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c5d6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x64c5dbu); f_0064c8a0();
    /* 0064c5db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c5de: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064c5e1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0064c5e4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064c5e7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0064c5ea: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c5ed: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0064c5f0: fild dword ptr [ebp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xcu)));
    /* 0064c5f3: fmul qword ptr [0x6b4b00] */ ST(0) = ST(0) * R_F64((u32)(0x6b4b00u));
    /* 0064c5f9: fiadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_ebp+0x10u));
    /* 0064c5fc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c5ff: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0064c602: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0064c605: call 0x64c510 */ r_esp -= 4; W32(r_esp, 0x64c60au); f_0064c510();
    /* 0064c60a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c60d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c610: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0064c612: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c615: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0064c618: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c61b: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c61d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c61e: ret 0xc */ FN_RET(0x0064c5c0); r_esp += 16; return;
}

void f_0064c630(void) /* sub_64C630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c630);
    /* 0064c630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c631: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c633: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c636: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064c639: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064c63c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064c63f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c640: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064c643: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064c645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c646: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x64c64bu); f_0064c8a0();
    /* 0064c64b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c64e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064c651: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0064c654: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064c657: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0064c65a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c65d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0064c660: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064c663: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0064c665: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064c668: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 0064c66b: fmul qword ptr [0x6b4b00] */ ST(0) = ST(0) * R_F64((u32)(0x6b4b00u));
    /* 0064c671: fisub dword ptr [ebp + 0x10] */ ST(0) = ST(0) - (long double)(i32)R32((u32)(r_ebp+0x10u));
    /* 0064c674: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c677: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0064c67a: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0064c67d: call 0x64c510 */ r_esp -= 4; W32(r_esp, 0x64c682u); f_0064c510();
    /* 0064c682: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064c685: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c688: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0064c68a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c68d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0064c690: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c693: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c695: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c696: ret 0xc */ FN_RET(0x0064c630); r_esp += 16; return;
}

void f_0064c6a0(void) /* sub_64C6A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c6a0);
    /* 0064c6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c6a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c6a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c6a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c6aa: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064c6ac: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c6af: jge 0x64c6b5 */ if ((fS==fO)) goto L_0064c6b5;
L_0064c6b1:; BB(0x0064c6b1);
    /* 0064c6b1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064c6b3: jmp 0x64c6d4 */ goto L_0064c6d4;
L_0064c6b5:; BB(0x0064c6b5);
    /* 0064c6b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c6b8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064c6ba: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c6bd: jle 0x64c6c3 */ if ((fZ||fS!=fO)) goto L_0064c6c3;
L_0064c6bf:; BB(0x0064c6bf);
    /* 0064c6bf: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0064c6c1: jmp 0x64c6d4 */ goto L_0064c6d4;
L_0064c6c3:; BB(0x0064c6c3);
    /* 0064c6c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c6c6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064c6c9: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c6cc: jge 0x64c6d2 */ if ((fS==fO)) goto L_0064c6d2;
L_0064c6ce:; BB(0x0064c6ce);
    /* 0064c6ce: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064c6d0: jmp 0x64c6d4 */ goto L_0064c6d4;
L_0064c6d2:; BB(0x0064c6d2);
    /* 0064c6d2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0064c6d4:; BB(0x0064c6d4);
    /* 0064c6d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c6d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c6d7: ret 8 */ FN_RET(0x0064c6a0); r_esp += 12; return;
}

void f_0064c6e0(void) /* sub_64C6E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c6e0);
    /* 0064c6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c6e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c6e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c6e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c6ea: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064c6ec: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c6ef: jle 0x64c6f5 */ if ((fZ||fS!=fO)) goto L_0064c6f5;
L_0064c6f1:; BB(0x0064c6f1);
    /* 0064c6f1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064c6f3: jmp 0x64c714 */ goto L_0064c714;
L_0064c6f5:; BB(0x0064c6f5);
    /* 0064c6f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c6f8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064c6fa: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c6fd: jge 0x64c703 */ if ((fS==fO)) goto L_0064c703;
L_0064c6ff:; BB(0x0064c6ff);
    /* 0064c6ff: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0064c701: jmp 0x64c714 */ goto L_0064c714;
L_0064c703:; BB(0x0064c703);
    /* 0064c703: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c706: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064c709: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c70c: jle 0x64c712 */ if ((fZ||fS!=fO)) goto L_0064c712;
L_0064c70e:; BB(0x0064c70e);
    /* 0064c70e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064c710: jmp 0x64c714 */ goto L_0064c714;
L_0064c712:; BB(0x0064c712);
    /* 0064c712: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0064c714:; BB(0x0064c714);
    /* 0064c714: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c716: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c717: ret 8 */ FN_RET(0x0064c6e0); r_esp += 12; return;
}

void f_0064c720(void) /* sub_64C720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c720);
    /* 0064c720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c721: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c723: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c726: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c729: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c72c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064c72e: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c731: jne 0x64c747 */ if (!fZ) goto L_0064c747;
L_0064c733:; BB(0x0064c733);
    /* 0064c733: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c736: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064c739: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c73c: jne 0x64c747 */ if (!fZ) goto L_0064c747;
L_0064c73e:; BB(0x0064c73e);
    /* 0064c73e: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 0064c745: jmp 0x64c74e */ goto L_0064c74e;
L_0064c747:; BB(0x0064c747);
    /* 0064c747: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_0064c74e:; BB(0x0064c74e);
    /* 0064c74e: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0064c751: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c753: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c754: ret 8 */ FN_RET(0x0064c720); r_esp += 12; return;
}

void f_0064c760(void) /* sub_64C760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c760);
    /* 0064c760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c761: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c763: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c766: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064c769: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c76c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064c76e: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c771: jne 0x64c787 */ if (!fZ) goto L_0064c787;
L_0064c773:; BB(0x0064c773);
    /* 0064c773: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c776: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064c779: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c77c: jne 0x64c787 */ if (!fZ) goto L_0064c787;
L_0064c77e:; BB(0x0064c77e);
    /* 0064c77e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0064c785: jmp 0x64c78e */ goto L_0064c78e;
L_0064c787:; BB(0x0064c787);
    /* 0064c787: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0064c78e:; BB(0x0064c78e);
    /* 0064c78e: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0064c791: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c794: ret 8 */ FN_RET(0x0064c760); r_esp += 12; return;
}

void f_0064c7a0(void) /* sub_64C7A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c7a0);
    /* 0064c7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c7a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c7a6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064c7a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064c7ac: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064c7af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c7b0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064c7b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064c7b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c7b6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x64c7bbu); f_0064c8a0();
    /* 0064c7bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c7be: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064c7c1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0064c7c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064c7c7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0064c7ca: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c7cd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0064c7d0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064c7d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c7d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064c7d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c7d8: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0064c7db: call 0x64c6e0 */ r_esp -= 4; W32(r_esp, 0x64c7e0u); f_0064c6e0();
    /* 0064c7e0: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0064c7e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c7e5: jne 0x64c807 */ if (!fZ) goto L_0064c807;
L_0064c7e7:; BB(0x0064c7e7);
    /* 0064c7e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064c7ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c7eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064c7ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c7ef: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0064c7f2: call 0x64c720 */ r_esp -= 4; W32(r_esp, 0x64c7f7u); f_0064c720();
    /* 0064c7f7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0064c7fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c7fc: jne 0x64c807 */ if (!fZ) goto L_0064c807;
L_0064c7fe:; BB(0x0064c7fe);
    /* 0064c7fe: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0064c805: jmp 0x64c80e */ goto L_0064c80e;
L_0064c807:; BB(0x0064c807);
    /* 0064c807: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0064c80e:; BB(0x0064c80e);
    /* 0064c80e: mov al, byte ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
    /* 0064c811: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c813: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c814: ret 8 */ FN_RET(0x0064c7a0); r_esp += 12; return;
}

void f_0064c820(void) /* sub_64C820 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c820);
    /* 0064c820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c821: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c823: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c826: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064c829: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064c82c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064c82f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c830: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064c833: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064c835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c836: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x64c83bu); f_0064c8a0();
    /* 0064c83b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c83e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064c841: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0064c844: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064c847: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0064c84a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064c84d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0064c850: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064c853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c854: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064c857: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c858: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0064c85b: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x64c860u); f_0064c6a0();
    /* 0064c860: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0064c863: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c865: jne 0x64c887 */ if (!fZ) goto L_0064c887;
L_0064c867:; BB(0x0064c867);
    /* 0064c867: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064c86a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c86b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064c86e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c86f: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0064c872: call 0x64c720 */ r_esp -= 4; W32(r_esp, 0x64c877u); f_0064c720();
    /* 0064c877: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0064c87a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c87c: jne 0x64c887 */ if (!fZ) goto L_0064c887;
L_0064c87e:; BB(0x0064c87e);
    /* 0064c87e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0064c885: jmp 0x64c88e */ goto L_0064c88e;
L_0064c887:; BB(0x0064c887);
    /* 0064c887: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0064c88e:; BB(0x0064c88e);
    /* 0064c88e: mov al, byte ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
    /* 0064c891: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c893: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c894: ret 8 */ FN_RET(0x0064c820); r_esp += 12; return;
}

void f_0064c8a0(void) /* sub_64C8A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c8a0);
    /* 0064c8a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c8a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c8a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c8a6: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 0064c8a9: fmul qword ptr [0x6b4b00] */ ST(0) = ST(0) * R_F64((u32)(0x6b4b00u));
    /* 0064c8af: fiadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 0064c8b2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c8b5: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0064c8b8: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0064c8bb: call 0x64c450 */ r_esp -= 4; W32(r_esp, 0x64c8c0u); f_0064c450();
    /* 0064c8c0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064c8c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c8c6: mov esp, ebp */ r_esp = r_ebp;
    /* 0064c8c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064c8c9: ret  */ FN_RET(0x0064c8a0); r_esp += 4; return;
}

void f_0064c8d0(void) /* sub_64C8D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064c8d0);
    /* 0064c8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064c8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064c8d3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064c8d6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064c8db: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064c8dd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064c8e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064c8e3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064c8e6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064c8e9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0064c8ec: movzx edx, byte ptr [ebp + 0x1c] */ r_edx = (u32)R8((u32)(r_ebp+0x1cu));
    /* 0064c8f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c8f2: je 0x64c92e */ if (fZ) goto L_0064c92e;
L_0064c8f4:; BB(0x0064c8f4);
    /* 0064c8f4: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c8f8: jl 0x64c900 */ if ((fS!=fO)) goto L_0064c900;
L_0064c8fa:; BB(0x0064c8fa);
    /* 0064c8fa: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c8fe: jge 0x64c92e */ if ((fS==fO)) goto L_0064c92e;
L_0064c900:; BB(0x0064c900);
    /* 0064c900: movzx eax, byte ptr [ebp + 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0x18u));
    /* 0064c904: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c906: je 0x64c91b */ if (fZ) goto L_0064c91b;
L_0064c908:; BB(0x0064c908);
    /* 0064c908: push 0x6dcdb0 */ { u32 v = 0x6dcdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c90d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0064c910: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c911: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x64c916u); f_00686d8e();
    /* 0064c916: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c919: jmp 0x64c92c */ goto L_0064c92c;
L_0064c91b:; BB(0x0064c91b);
    /* 0064c91b: push 0x6dcdac */ { u32 v = 0x6dcdacu; r_esp -= 4; W32(r_esp, v); }
    /* 0064c920: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0064c923: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c924: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x64c929u); f_00686d8e();
    /* 0064c929: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064c92c:; BB(0x0064c92c);
    /* 0064c92c: jmp 0x64c947 */ goto L_0064c947;
L_0064c92e:; BB(0x0064c92e);
    /* 0064c92e: movzx eax, byte ptr [ebp + 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0x18u));
    /* 0064c932: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064c934: je 0x64c947 */ if (fZ) goto L_0064c947;
L_0064c936:; BB(0x0064c936);
    /* 0064c936: push 0x6b8328 */ { u32 v = 0x6b8328u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c93b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0064c93e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c93f: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x64c944u); f_00686d8e();
    /* 0064c944: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064c947:; BB(0x0064c947);
    /* 0064c947: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c94b: jge 0x64c956 */ if ((fS==fO)) goto L_0064c956;
L_0064c94d:; BB(0x0064c94d);
    /* 0064c94d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c950: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064c953: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0064c956:; BB(0x0064c956);
    /* 0064c956: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c95a: jge 0x64c965 */ if ((fS==fO)) goto L_0064c965;
L_0064c95c:; BB(0x0064c95c);
    /* 0064c95c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064c95f: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064c962: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0064c965:; BB(0x0064c965);
    /* 0064c965: cmp dword ptr [ebp - 4], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c96c: jle 0x64c9c9 */ if ((fZ||fS!=fO)) goto L_0064c9c9;
L_0064c96e:; BB(0x0064c96e);
    /* 0064c96e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c971: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c972: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0064c977: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c977, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c977, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c979: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c97a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c97d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c97e: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0064c983: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c983, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c983, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c985: mov eax, edx */ r_eax = r_edx;
    /* 0064c987: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c988: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0064c98d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c98d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c98d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c98f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c990: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c993: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c994: mov ecx, 0x3b9aca00 */ r_ecx = 0x3b9aca00u;
    /* 0064c999: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c999, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c999, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c99b: mov eax, edx */ r_eax = r_edx;
    /* 0064c99d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c99e: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0064c9a3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c9a3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c9a3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c9a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c9a9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c9aa: mov ecx, 0x3b9aca00 */ r_ecx = 0x3b9aca00u;
    /* 0064c9af: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c9af, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c9af, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c9b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9b2: push 0x6dcd98 */ { u32 v = 0x6dcd98u; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9b7: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 0064c9ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9bb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x64c9c1u); call_ind(t); }
    /* 0064c9c1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064c9c4: jmp 0x64ca5f */ goto L_0064ca5f;
L_0064c9c9:; BB(0x0064c9c9);
    /* 0064c9c9: cmp dword ptr [ebp - 4], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064c9d0: jle 0x64ca14 */ if ((fZ||fS!=fO)) goto L_0064ca14;
L_0064c9d2:; BB(0x0064c9d2);
    /* 0064c9d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c9d5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c9d6: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0064c9db: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c9db, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c9db, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c9dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c9e1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c9e2: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0064c9e7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c9e7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c9e7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c9e9: mov eax, edx */ r_eax = r_edx;
    /* 0064c9eb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c9ec: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0064c9f1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c9f1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c9f1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c9f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064c9f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064c9f7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064c9f8: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 0064c9fd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064c9fd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064c9fd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064c9ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca00: push 0x6dcd88 */ { u32 v = 0x6dcd88u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca05: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 0064ca08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca09: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x64ca0fu); call_ind(t); }
    /* 0064ca0f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ca12: jmp 0x64ca5f */ goto L_0064ca5f;
L_0064ca14:; BB(0x0064ca14);
    /* 0064ca14: cmp dword ptr [ebp - 4], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064ca1b: jle 0x64ca49 */ if ((fZ||fS!=fO)) goto L_0064ca49;
L_0064ca1d:; BB(0x0064ca1d);
    /* 0064ca1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ca20: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064ca21: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0064ca26: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064ca26, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064ca26, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064ca28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ca2c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0064ca2d: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 0064ca32: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0064ca32, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0064ca32, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0064ca34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca35: push 0x6dcd80 */ { u32 v = 0x6dcd80u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca3a: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 0064ca3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca3e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x64ca44u); call_ind(t); }
    /* 0064ca44: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ca47: jmp 0x64ca5f */ goto L_0064ca5f;
L_0064ca49:; BB(0x0064ca49);
    /* 0064ca49: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ca4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca4d: push 0x6b2828 */ { u32 v = 0x6b2828u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca52: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0064ca55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca56: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x64ca5cu); call_ind(t); }
    /* 0064ca5c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064ca5f:; BB(0x0064ca5f);
    /* 0064ca5f: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 0064ca62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca63: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0064ca66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca67: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x64ca6cu); f_00686ec6();
    /* 0064ca6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ca6f: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 0064ca73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ca75: je 0x64ca9d */ if (fZ) goto L_0064ca9d;
L_0064ca77:; BB(0x0064ca77);
    /* 0064ca77: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ca7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca7b: push 0x6dcd78 */ { u32 v = 0x6dcd78u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca80: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 0064ca83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca84: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x64ca8au); call_ind(t); }
    /* 0064ca8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064ca8d: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0064ca90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca91: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0064ca94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ca95: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x64ca9au); f_00686ec6();
    /* 0064ca9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064ca9d:; BB(0x0064ca9d);
    /* 0064ca9d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0064caa0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064caa3: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064caa5: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x64caaau); f_00686d72();
    /* 0064caaa: mov esp, ebp */ r_esp = r_ebp;
    /* 0064caac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064caad: ret  */ FN_RET(0x0064c8d0); r_esp += 4; return;
}

void f_0064cab0(void) /* sub_64CAB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064cab0);
    /* 0064cab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064cab1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064cab3: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064cab6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064cabb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064cabd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064cac0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cac4: jne 0x64cae3 */ if (!fZ) goto L_0064cae3;
L_0064cac6:; BB(0x0064cac6);
    /* 0064cac6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cac8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064caca: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x64cacfu); f_0064c8a0();
    /* 0064cacf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064cad2: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0064cad5: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0064cad8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0064cadb: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064cade: jmp 0x64cbca */ goto L_0064cbca;
L_0064cae3:; BB(0x0064cae3);
    /* 0064cae3: mov byte ptr [ebp - 0x35], 0 */ W8((u32)(r_ebp+0xffffffcbu), 0x0u);
    /* 0064cae7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064caea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064caeb: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x64caf0u); f_00686ecc();
    /* 0064caf0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064caf3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064caf6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064cafd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064cb04: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0064cb0b: jmp 0x64cb16 */ goto L_0064cb16;
L_0064cb0d:; BB(0x0064cb0d);
    /* 0064cb0d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064cb10: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cb13: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_0064cb16:; BB(0x0064cb16);
    /* 0064cb16: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0064cb19: cmp edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064cb1c: jge 0x64cb8a */ if ((fS==fO)) goto L_0064cb8a;
L_0064cb1e:; BB(0x0064cb1e);
    /* 0064cb1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064cb21: add eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064cb24: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0064cb27: cmp ecx, 0x2e */ {  u32 a = r_ecx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cb2a: jne 0x64cb32 */ if (!fZ) goto L_0064cb32;
L_0064cb2c:; BB(0x0064cb2c);
    /* 0064cb2c: mov byte ptr [ebp - 0x35], 1 */ W8((u32)(r_ebp+0xffffffcbu), 0x1u);
    /* 0064cb30: jmp 0x64cb88 */ goto L_0064cb88;
L_0064cb32:; BB(0x0064cb32);
    /* 0064cb32: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064cb35: add edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064cb38: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0064cb3b: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064cb3e: jl 0x64cb88 */ if ((fS!=fO)) goto L_0064cb88;
L_0064cb40:; BB(0x0064cb40);
    /* 0064cb40: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064cb43: add ecx, dword ptr [ebp - 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cb46: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0064cb49: cmp edx, 0x39 */ {  u32 a = r_edx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064cb4c: jg 0x64cb88 */ if ((!fZ&&fS==fO)) goto L_0064cb88;
L_0064cb4e:; BB(0x0064cb4e);
    /* 0064cb4e: movzx eax, byte ptr [ebp - 0x35] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 0064cb52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cb54: je 0x64cb70 */ if (fZ) goto L_0064cb70;
L_0064cb56:; BB(0x0064cb56);
    /* 0064cb56: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064cb59: add ecx, dword ptr [ebp - 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cb5c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064cb5f: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0064cb61: mov byte ptr [ebp + edx - 0x34], al */ W8((u32)(r_ebp+r_edx+0xffffffccu), (u8)r_eax);
    /* 0064cb65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064cb68: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cb6b: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0064cb6e: jmp 0x64cb88 */ goto L_0064cb88;
L_0064cb70:; BB(0x0064cb70);
    /* 0064cb70: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064cb73: add edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064cb76: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064cb79: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0064cb7b: mov byte ptr [ebp + eax - 0x20], cl */ W8((u32)(r_ebp+r_eax+0xffffffe0u), (u8)r_ecx);
    /* 0064cb7f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064cb82: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064cb85: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_0064cb88:; BB(0x0064cb88);
    /* 0064cb88: jmp 0x64cb0d */ goto L_0064cb0d;
L_0064cb8a:; BB(0x0064cb8a);
    /* 0064cb8a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0064cb8d: mov byte ptr [ebp + eax - 0x20], 0 */ W8((u32)(r_ebp+r_eax+0xffffffe0u), 0x0u);
    /* 0064cb92: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064cb95: mov byte ptr [ebp + ecx - 0x34], 0 */ W8((u32)(r_ebp+r_ecx+0xffffffccu), 0x0u);
    /* 0064cb9a: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0064cb9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cb9e: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x64cba4u); call_ind(t); }
    /* 0064cba4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064cba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064cba8: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 0064cbab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064cbac: call dword ptr [0x6b223c] */ { u32 t = R32((u32)(0x6b223cu)); r_esp -= 4; W32(r_esp, 0x64cbb2u); call_ind(t); }
    /* 0064cbb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064cbb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064cbb6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x64cbbbu); f_0064c8a0();
    /* 0064cbbb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064cbbe: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0064cbc1: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0064cbc4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064cbc7: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
L_0064cbca:; BB(0x0064cbca);
    /* 0064cbca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cbcd: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064cbcf: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x64cbd4u); f_00686d72();
    /* 0064cbd4: mov esp, ebp */ r_esp = r_ebp;
    /* 0064cbd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064cbd7: ret  */ FN_RET(0x0064cab0); r_esp += 4; return;
}

void f_0064cfa0(void) /* sub_64CFA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064cfa0);
    /* 0064cfa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064cfa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064cfa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064cfa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064cfa7: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0064cfac: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0064cfaf: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0064cfb5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0064cfb8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064cfba: mov ecx, eax */ r_ecx = r_eax;
    /* 0064cfbc: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0064cfbf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64cfc1u); call_ind(t); }
    /* 0064cfc1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064cfc4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cfc6: je 0x64d010 */ if (fZ) goto L_0064d010;
L_0064cfc8:; BB(0x0064cfc8);
    /* 0064cfc8: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0064cfce: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0064cfd1: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0064cfd7: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0064cfda: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064cfdc: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0064cfdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64cfe1u); call_ind(t); }
    /* 0064cfe1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064cfe4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064cfe6: jne 0x64cffc */ if (!fZ) goto L_0064cffc;
L_0064cfe8:; BB(0x0064cfe8);
    /* 0064cfe8: push 0x186c7 */ { u32 v = 0x186c7u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cfed: push 0x186c9 */ { u32 v = 0x186c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0064cff2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064cff5: call 0x5f2ae0 */ r_esp -= 4; W32(r_esp, 0x64cffau); f_005f2ae0();
    /* 0064cffa: jmp 0x64d00e */ goto L_0064d00e;
L_0064cffc:; BB(0x0064cffc);
    /* 0064cffc: push 0x186c7 */ { u32 v = 0x186c7u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d001: push 0x186c8 */ { u32 v = 0x186c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d006: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d009: call 0x5f2ae0 */ r_esp -= 4; W32(r_esp, 0x64d00eu); f_005f2ae0();
L_0064d00e:; BB(0x0064d00e);
    /* 0064d00e: jmp 0x64d022 */ goto L_0064d022;
L_0064d010:; BB(0x0064d010);
    /* 0064d010: push 0x186c8 */ { u32 v = 0x186c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d015: push 0x186c7 */ { u32 v = 0x186c7u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d01a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d01d: call 0x5f2ae0 */ r_esp -= 4; W32(r_esp, 0x64d022u); f_005f2ae0();
L_0064d022:; BB(0x0064d022);
    /* 0064d022: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064d024: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d026: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d027: ret  */ FN_RET(0x0064cfa0); r_esp += 4; return;
}

