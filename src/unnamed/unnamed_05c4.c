#include "protos.h"

void f_005c42d0(void) /* sub_5C42D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c42d0);
    /* 005c42d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c42d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c42d3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c42d6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c42d9: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 005c42dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c42df: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 005c42e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c42e5: cmp dword ptr [ecx + 0x1c], 5 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c42e9: jne 0x5c43e8 */ if (!fZ) goto L_005c43e8;
L_005c42ef:; BB(0x005c42ef);
    /* 005c42ef: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c42f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c42f4: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c42f7: fld dword ptr [ecx + 0x7c] */ FPUSH(R_F32((u32)(r_ecx+0x7cu)));
    /* 005c42fa: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 005c42fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4300: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005c4303: fdiv dword ptr [ebp - 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffffcu));
    /* 005c4306: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 005c4309: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c430c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c430e: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c4311: fld dword ptr [edx + 0x7c] */ FPUSH(R_F32((u32)(r_edx+0x7cu)));
    /* 005c4314: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 005c4317: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 005c431a: fmul qword ptr [0x6b2c38] */ ST(0) = ST(0) * R_F64((u32)(0x6b2c38u));
    /* 005c4320: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005c4323: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4326: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 005c4329: fadd dword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe8u));
    /* 005c432c: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005c432f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4332: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c4334: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c4337: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c433a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c433d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c4340: imul eax, eax, 0x7c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c4343: mov ecx, dword ptr [ecx + eax + 0x20] */ r_ecx = R32((u32)(r_ecx+r_eax+0x20u));
    /* 005c4347: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_005c434a:; BB(0x005c434a);
    /* 005c434a: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 005c434d: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 005c4353: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c4355: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005c4358: jp 0x5c4365 */ if (fP) goto L_005c4365;
L_005c435a:; BB(0x005c435a);
    /* 005c435a: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 005c435d: fadd dword ptr [ebp - 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffecu));
    /* 005c4360: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005c4363: jmp 0x5c434a */ goto L_005c434a;
L_005c4365:; BB(0x005c4365);
    /* 005c4365: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 005c4368: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 005c436b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005c436d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c436f: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c4372: jne 0x5c437f */ if (!fZ) goto L_005c437f;
L_005c4374:; BB(0x005c4374);
    /* 005c4374: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 005c4377: fsubr dword ptr [ebp - 0x14] */ ST(0) = R_F32((u32)(r_ebp+0xffffffecu)) - ST(0);
    /* 005c437a: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005c437d: jmp 0x5c4365 */ goto L_005c4365;
L_005c437f:; BB(0x005c437f);
    /* 005c437f: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 005c4382: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4385: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005c4388: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005c438a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c438c: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005c438f: jp 0x5c439a */ if (fP) goto L_005c439a;
L_005c4391:; BB(0x005c4391);
    /* 005c4391: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 005c4394: fsubr dword ptr [ebp - 0x14] */ ST(0) = R_F32((u32)(r_ebp+0xffffffecu)) - ST(0);
    /* 005c4397: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
L_005c439a:; BB(0x005c439a);
    /* 005c439a: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 005c439d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c43a0: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 005c43a3: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005c43a6: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 005c43a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c43ac: fdiv dword ptr [ecx + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ecx+0xcu));
    /* 005c43af: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c43b2: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 005c43b5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c43b8: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 005c43bb: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 005c43c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c43c3: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005c43c6: jp 0x5c43d0 */ if (fP) goto L_005c43d0;
L_005c43c8:; BB(0x005c43c8);
    /* 005c43c8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c43cb: fldz  */ FPUSH(0.0);
    /* 005c43cd: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
L_005c43d0:; BB(0x005c43d0);
    /* 005c43d0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c43d3: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 005c43d6: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 005c43dc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c43df: fsubr dword ptr [eax + 0x14] */ ST(0) = R_F32((u32)(r_eax+0x14u)) - ST(0);
    /* 005c43e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c43e5: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
L_005c43e8:; BB(0x005c43e8);
    /* 005c43e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005c43ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c43eb: ret 4 */ FN_RET(0x005c42d0); r_esp += 8; return;
}

void f_005c47b0(void) /* sub_5C47B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c47b0);
    /* 005c47b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c47b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c47b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c47b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c47b9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c47bc: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c47c1u); f_005c9140();
    /* 005c47c1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c47c4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c47c7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005c47ca: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 005c47cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c47ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c47d0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5c47d5u); f_005dcb00();
    /* 005c47d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c47d8: mov ecx, eax */ r_ecx = r_eax;
    /* 005c47da: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5c47dfu); f_005d5a90();
    /* 005c47df: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c47e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c47e3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c47e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c47e6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c47e9: call 0x5d0d30 */ r_esp -= 4; W32(r_esp, 0x5c47eeu); f_005d0d30();
    /* 005c47ee: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c47f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005c47f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c47f4: ret  */ FN_RET(0x005c47b0); r_esp += 4; return;
}

void f_005c4900(void) /* sub_5C4900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4900);
    /* 005c4900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4901: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4903: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4906: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c4909: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c490c: call 0x5c4920 */ r_esp -= 4; W32(r_esp, 0x5c4911u); f_005c4920();
    /* 005c4911: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4913: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4914: ret  */ FN_RET(0x005c4900); r_esp += 4; return;
}

void f_005c4920(void) /* sub_5C4920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4920);
    /* 005c4920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4921: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4923: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4926: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c4929: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c492c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4930: je 0x5c49c4 */ if (fZ) goto L_005c49c4;
L_005c4936:; BB(0x005c4936);
    /* 005c4936: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4939: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c493c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005c493f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4942: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c4945: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c4948: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c494b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c494e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c4951: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c4954: mov cl, byte ptr [ebp - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005c4957: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005c495a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c495d: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005c4960: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4963: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c4966: jmp 0x5c4971 */ goto L_005c4971;
L_005c4968:; BB(0x005c4968);
    /* 005c4968: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c496b: add ecx, 0x34 */ {  u32 a = r_ecx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c496e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005c4971:; BB(0x005c4971);
    /* 005c4971: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4974: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4977: je 0x5c4996 */ if (fZ) goto L_005c4996;
L_005c4979:; BB(0x005c4979);
    /* 005c4979: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c497c: call 0x5c3980 */ r_esp -= 4; W32(r_esp, 0x5c4981u); f_005c3980();
    /* 005c4981: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c4983: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005c4986: je 0x5c4994 */ if (fZ) goto L_005c4994;
L_005c4988:; BB(0x005c4988);
    /* 005c4988: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c498b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c498c: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c4991u); f_00686cae();
    /* 005c4991: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c4994:; BB(0x005c4994);
    /* 005c4994: jmp 0x5c4968 */ goto L_005c4968;
L_005c4996:; BB(0x005c4996);
    /* 005c4996: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4999: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c499c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005c499f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c49a2: mov eax, ecx */ r_eax = r_ecx;
    /* 005c49a4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c49a5: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c49aa: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c49aa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c49aa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c49ac: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c49af: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c49b2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c49b5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c49b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c49bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c49bc: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c49c1u); f_00686cae();
    /* 005c49c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c49c4:; BB(0x005c49c4);
    /* 005c49c4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c49c7: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005c49ce: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c49d1: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005c49d8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c49db: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005c49e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005c49e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c49e5: ret  */ FN_RET(0x005c4920); r_esp += 4; return;
}

void f_005c49f0(void) /* sub_5C49F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c49f0);
    /* 005c49f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c49f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c49f3: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c49f9: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005c49fc: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c49ff: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4a03: jne 0x5c4a0e */ if (!fZ) goto L_005c4a0e;
L_005c4a05:; BB(0x005c4a05);
    /* 005c4a05: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005c4a0c: jmp 0x5c4a20 */ goto L_005c4a20;
L_005c4a0e:; BB(0x005c4a0e);
    /* 005c4a0e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4a11: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4a14: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c4a17: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4a1a: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c4a1d: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
L_005c4a20:; BB(0x005c4a20);
    /* 005c4a20: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c4a23: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4a26: jae 0x5c4aae */ if (!fC) goto L_005c4aae;
L_005c4a2c:; BB(0x005c4a2c);
    /* 005c4a2c: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4a2f: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4a33: jne 0x5c4a3e */ if (!fZ) goto L_005c4a3e;
L_005c4a35:; BB(0x005c4a35);
    /* 005c4a35: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 005c4a3c: jmp 0x5c4a50 */ goto L_005c4a50;
L_005c4a3e:; BB(0x005c4a3e);
    /* 005c4a3e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4a41: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4a44: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c4a47: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c4a4a: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c4a4d: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
L_005c4a50:; BB(0x005c4a50);
    /* 005c4a50: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4a53: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c4a56: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005c4a59: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c4a60: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4a64: je 0x5c4a7c */ if (fZ) goto L_005c4a7c;
L_005c4a66:; BB(0x005c4a66);
    /* 005c4a66: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4a69: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c4a6c: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4a6f: ja 0x5c4a7c */ if ((!fC&&!fZ)) goto L_005c4a7c;
L_005c4a71:; BB(0x005c4a71);
    /* 005c4a71: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4a74: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c4a77: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4a7a: jbe 0x5c4a82 */ if ((fC||fZ)) goto L_005c4a82;
L_005c4a7c:; BB(0x005c4a7c);
    /* 005c4a7c: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c4a82u); call_ind(t); }
L_005c4a82:; BB(0x005c4a82);
    /* 005c4a82: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4a85: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c4a88: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c4a8b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4a8e: lea edx, [ebp + 0xc] */ r_edx = (u32)(r_ebp+0xcu);
    /* 005c4a91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c4a95: sub eax, dword ptr [ebp - 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4a98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4a9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4a9d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4aa0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4aa1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4aa4: call 0x5c4e10 */ r_esp -= 4; W32(r_esp, 0x5c4aa9u); f_005c4e10();
    /* 005c4aa9: jmp 0x5c4b9a */ goto L_005c4b9a;
L_005c4aae:; BB(0x005c4aae);
    /* 005c4aae: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4ab1: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4ab5: jne 0x5c4ac0 */ if (!fZ) goto L_005c4ac0;
L_005c4ab7:; BB(0x005c4ab7);
    /* 005c4ab7: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 005c4abe: jmp 0x5c4ad2 */ goto L_005c4ad2;
L_005c4ac0:; BB(0x005c4ac0);
    /* 005c4ac0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4ac3: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4ac6: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c4ac9: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4acc: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c4acf: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
L_005c4ad2:; BB(0x005c4ad2);
    /* 005c4ad2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c4ad5: cmp ecx, dword ptr [ebp - 0x80] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff80u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4ad8: jae 0x5c4b9a */ if (!fC) goto L_005c4b9a;
L_005c4ade:; BB(0x005c4ade);
    /* 005c4ade: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4ae1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c4ae4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c4ae7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c4aee: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4af2: je 0x5c4b0a */ if (fZ) goto L_005c4b0a;
L_005c4af4:; BB(0x005c4af4);
    /* 005c4af4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4af7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c4afa: cmp edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4afd: ja 0x5c4b0a */ if ((!fC&&!fZ)) goto L_005c4b0a;
L_005c4aff:; BB(0x005c4aff);
    /* 005c4aff: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4b02: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c4b05: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4b08: jbe 0x5c4b10 */ if ((fC||fZ)) goto L_005c4b10;
L_005c4b0a:; BB(0x005c4b0a);
    /* 005c4b0a: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c4b10u); call_ind(t); }
L_005c4b10:; BB(0x005c4b10);
    /* 005c4b10: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4b13: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c4b16: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c4b19: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c4b1c: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4b1f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c4b22: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005c4b25: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005c4b2c: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4b30: je 0x5c4b48 */ if (fZ) goto L_005c4b48;
L_005c4b32:; BB(0x005c4b32);
    /* 005c4b32: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4b35: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c4b38: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4b3b: ja 0x5c4b48 */ if ((!fC&&!fZ)) goto L_005c4b48;
L_005c4b3d:; BB(0x005c4b3d);
    /* 005c4b3d: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4b40: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c4b43: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4b46: jbe 0x5c4b4e */ if ((fC||fZ)) goto L_005c4b4e;
L_005c4b48:; BB(0x005c4b48);
    /* 005c4b48: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c4b4eu); call_ind(t); }
L_005c4b4e:; BB(0x005c4b4e);
    /* 005c4b4e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4b51: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c4b54: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c4b57: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c4b5a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c4b5d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c4b60: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c4b63: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005c4b66: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c4b69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b6a: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 005c4b6d: call 0x5beeb0 */ r_esp -= 4; W32(r_esp, 0x5c4b72u); f_005beeb0();
    /* 005c4b72: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c4b75: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c4b78: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c4b7b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c4b7e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c4b81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b82: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4b85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b86: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4b89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b8a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c4b8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b8e: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 005c4b91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4b92: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c4b95: call 0x5bc490 */ r_esp -= 4; W32(r_esp, 0x5c4b9au); f_005bc490();
L_005c4b9a:; BB(0x005c4b9a);
    /* 005c4b9a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4b9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4b9d: ret 8 */ FN_RET(0x005c49f0); r_esp += 12; return;
}

void f_005c4ba0(void) /* sub_5C4BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4ba0);
    /* 005c4ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4ba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ba5: push 0x6a86c8 */ { u32 v = 0x6a86c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4baa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c4bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bb1: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4bb7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c4bbc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c4bbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4bbf: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c4bc2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c4bc8: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005c4bce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c4bd5: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4bdb: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4bdf: jne 0x5c4bed */ if (!fZ) goto L_005c4bed;
L_005c4be1:; BB(0x005c4be1);
    /* 005c4be1: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 005c4beb: jmp 0x5c4c0d */ goto L_005c4c0d;
L_005c4bed:; BB(0x005c4bed);
    /* 005c4bed: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4bf3: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4bf9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c4bfc: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4bff: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c4c00: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c4c05: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c4c05, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c4c05, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c4c07: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
L_005c4c0d:; BB(0x005c4c0d);
    /* 005c4c0d: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005c4c13: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4c16: jae 0x5c4cc7 */ if (!fC) goto L_005c4cc7;
L_005c4c1c:; BB(0x005c4c1c);
    /* 005c4c1c: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4c22: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4c26: jne 0x5c4c34 */ if (!fZ) goto L_005c4c34;
L_005c4c28:; BB(0x005c4c28);
    /* 005c4c28: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 005c4c32: jmp 0x5c4c54 */ goto L_005c4c54;
L_005c4c34:; BB(0x005c4c34);
    /* 005c4c34: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4c3a: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4c40: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c4c43: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4c46: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c4c47: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c4c4c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c4c4c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c4c4c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c4c4e: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
L_005c4c54:; BB(0x005c4c54);
    /* 005c4c54: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4c5a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c4c5d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c4c60: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005c4c67: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4c6e: je 0x5c4c8c */ if (fZ) goto L_005c4c8c;
L_005c4c70:; BB(0x005c4c70);
    /* 005c4c70: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4c76: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c4c79: cmp edx, dword ptr [ebp - 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4c7c: ja 0x5c4c8c */ if ((!fC&&!fZ)) goto L_005c4c8c;
L_005c4c7e:; BB(0x005c4c7e);
    /* 005c4c7e: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4c84: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c4c87: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4c8a: jbe 0x5c4c92 */ if ((fC||fZ)) goto L_005c4c92;
L_005c4c8c:; BB(0x005c4c8c);
    /* 005c4c8c: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c4c92u); call_ind(t); }
L_005c4c92:; BB(0x005c4c92);
    /* 005c4c92: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4c98: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c4c9b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c4c9e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005c4ca1: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 005c4ca4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ca5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c4ca8: sub edx, dword ptr [ebp - 0x9c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff64u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c4cae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4caf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4cb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4cb3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c4cb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4cb7: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4cbd: call 0x5c5670 */ r_esp -= 4; W32(r_esp, 0x5c4cc2u); f_005c5670();
    /* 005c4cc2: jmp 0x5c4deb */ goto L_005c4deb;
L_005c4cc7:; BB(0x005c4cc7);
    /* 005c4cc7: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4ccd: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4cd1: jne 0x5c4cdf */ if (!fZ) goto L_005c4cdf;
L_005c4cd3:; BB(0x005c4cd3);
    /* 005c4cd3: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 005c4cdd: jmp 0x5c4cff */ goto L_005c4cff;
L_005c4cdf:; BB(0x005c4cdf);
    /* 005c4cdf: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4ce5: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4ceb: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005c4cee: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4cf1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c4cf2: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c4cf7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c4cf7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c4cf7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c4cf9: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
L_005c4cff:; BB(0x005c4cff);
    /* 005c4cff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c4d02: cmp edx, dword ptr [ebp - 0xa0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4d08: jae 0x5c4deb */ if (!fC) goto L_005c4deb;
L_005c4d0e:; BB(0x005c4d0e);
    /* 005c4d0e: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4d14: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c4d17: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005c4d1a: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005c4d21: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4d28: je 0x5c4d46 */ if (fZ) goto L_005c4d46;
L_005c4d2a:; BB(0x005c4d2a);
    /* 005c4d2a: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4d30: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c4d33: cmp eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4d36: ja 0x5c4d46 */ if ((!fC&&!fZ)) goto L_005c4d46;
L_005c4d38:; BB(0x005c4d38);
    /* 005c4d38: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4d3e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c4d41: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4d44: jbe 0x5c4d4c */ if ((fC||fZ)) goto L_005c4d4c;
L_005c4d46:; BB(0x005c4d46);
    /* 005c4d46: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c4d4cu); call_ind(t); }
L_005c4d4c:; BB(0x005c4d4c);
    /* 005c4d4c: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4d52: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c4d55: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c4d58: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c4d5b: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4d61: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c4d64: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c4d67: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c4d6e: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4d75: je 0x5c4d93 */ if (fZ) goto L_005c4d93;
L_005c4d77:; BB(0x005c4d77);
    /* 005c4d77: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4d7d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c4d80: cmp edx, dword ptr [ebp - 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4d83: ja 0x5c4d93 */ if ((!fC&&!fZ)) goto L_005c4d93;
L_005c4d85:; BB(0x005c4d85);
    /* 005c4d85: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4d8b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c4d8e: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4d91: jbe 0x5c4d99 */ if ((fC||fZ)) goto L_005c4d99;
L_005c4d93:; BB(0x005c4d93);
    /* 005c4d93: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c4d99u); call_ind(t); }
L_005c4d99:; BB(0x005c4d99);
    /* 005c4d99: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4d9f: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005c4da2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c4da5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c4da8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c4dab: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c4dae: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005c4db1: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005c4db4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c4db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4db8: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 005c4dbb: call 0x5c6160 */ r_esp -= 4; W32(r_esp, 0x5c4dc0u); f_005c6160();
    /* 005c4dc0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c4dc3: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c4dc6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005c4dc9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005c4dcc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c4dcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4dd0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4dd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4dd4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4dd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4dd8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c4ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4ddc: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 005c4ddf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4de0: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c4de6: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x5c4debu); f_005c55a0();
L_005c4deb:; BB(0x005c4deb);
    /* 005c4deb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c4df2: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 005c4df5: call 0x5c3980 */ r_esp -= 4; W32(r_esp, 0x5c4dfau); f_005c3980();
    /* 005c4dfa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c4dfd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c4e04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c4e05: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4e07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4e08: ret 0x38 */ FN_RET(0x005c4ba0); r_esp += 60; return;
}

void f_005c4e10(void) /* sub_5C4E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4e10);
    /* 005c4e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e11: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4e13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e15: push 0x6a86f0 */ { u32 v = 0x6a86f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c4e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e22: sub esp, 0x220 */ {  u32 a = r_esp; u32 b = 0x220u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4e28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e2b: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c4e30: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c4e32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c4e33: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c4e36: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c4e3c: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c4e3f: mov dword ptr [ebp - 0x208], ecx */ W32((u32)(r_ebp+0xfffffdf8u), r_ecx);
    /* 005c4e45: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005c4e48: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c4e4a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c4e4d: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4e53: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4e57: jne 0x5c4e65 */ if (!fZ) goto L_005c4e65;
L_005c4e59:; BB(0x005c4e59);
    /* 005c4e59: mov dword ptr [ebp - 0x20c], 0 */ W32((u32)(r_ebp+0xfffffdf4u), 0x0u);
    /* 005c4e63: jmp 0x5c4e80 */ goto L_005c4e80;
L_005c4e65:; BB(0x005c4e65);
    /* 005c4e65: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4e6b: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4e71: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005c4e74: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c4e77: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c4e7a: mov dword ptr [ebp - 0x20c], edx */ W32((u32)(r_ebp+0xfffffdf4u), r_edx);
L_005c4e80:; BB(0x005c4e80);
    /* 005c4e80: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005c4e86: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c4e89: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4e8d: jne 0x5c4e94 */ if (!fZ) goto L_005c4e94;
L_005c4e8f:; BB(0x005c4e8f);
    /* 005c4e8f: jmp 0x5c5581 */ goto L_005c5581;
L_005c4e94:; BB(0x005c4e94);
    /* 005c4e94: mov dword ptr [ebp - 0x28], 0x3fffffff */ W32((u32)(r_ebp+0xffffffd8u), 0x3fffffffu);
    /* 005c4e9b: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4e9f: jbe 0x5c4eac */ if ((fC||fZ)) goto L_005c4eac;
L_005c4ea1:; BB(0x005c4ea1);
    /* 005c4ea1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4ea4: mov dword ptr [ebp - 0x210], ecx */ W32((u32)(r_ebp+0xfffffdf0u), r_ecx);
    /* 005c4eaa: jmp 0x5c4eb6 */ goto L_005c4eb6;
L_005c4eac:; BB(0x005c4eac);
    /* 005c4eac: mov dword ptr [ebp - 0x210], 1 */ W32((u32)(r_ebp+0xfffffdf0u), 0x1u);
L_005c4eb6:; BB(0x005c4eb6);
    /* 005c4eb6: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4ebc: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4ec0: jne 0x5c4ece */ if (!fZ) goto L_005c4ece;
L_005c4ec2:; BB(0x005c4ec2);
    /* 005c4ec2: mov dword ptr [ebp - 0x214], 0 */ W32((u32)(r_ebp+0xfffffdecu), 0x0u);
    /* 005c4ecc: jmp 0x5c4ee9 */ goto L_005c4ee9;
L_005c4ece:; BB(0x005c4ece);
    /* 005c4ece: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4ed4: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4eda: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c4edd: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c4ee0: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c4ee3: mov dword ptr [ebp - 0x214], edx */ W32((u32)(r_ebp+0xfffffdecu), r_edx);
L_005c4ee9:; BB(0x005c4ee9);
    /* 005c4ee9: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 005c4eef: sub eax, dword ptr [ebp - 0x214] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4ef5: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4ef8: jae 0x5c4f04 */ if (!fC) goto L_005c4f04;
L_005c4efa:; BB(0x005c4efa);
    /* 005c4efa: call 0x5c6020 */ r_esp -= 4; W32(r_esp, 0x5c4effu); f_005c6020();
    /* 005c4eff: jmp 0x5c5581 */ goto L_005c5581;
L_005c4f04:; BB(0x005c4f04);
    /* 005c4f04: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4f0a: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4f0e: jne 0x5c4f1c */ if (!fZ) goto L_005c4f1c;
L_005c4f10:; BB(0x005c4f10);
    /* 005c4f10: mov dword ptr [ebp - 0x218], 0 */ W32((u32)(r_ebp+0xfffffde8u), 0x0u);
    /* 005c4f1a: jmp 0x5c4f37 */ goto L_005c4f37;
L_005c4f1c:; BB(0x005c4f1c);
    /* 005c4f1c: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4f22: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4f28: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c4f2b: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4f2e: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c4f31: mov dword ptr [ebp - 0x218], ecx */ W32((u32)(r_ebp+0xfffffde8u), r_ecx);
L_005c4f37:; BB(0x005c4f37);
    /* 005c4f37: mov edx, dword ptr [ebp - 0x218] */ r_edx = R32((u32)(r_ebp+0xfffffde8u));
    /* 005c4f3d: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c4f40: cmp dword ptr [ebp - 0x18], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4f43: jae 0x5c52fb */ if (!fC) goto L_005c52fb;
L_005c4f49:; BB(0x005c4f49);
    /* 005c4f49: mov dword ptr [ebp - 0x70], 0x3fffffff */ W32((u32)(r_ebp+0xffffff90u), 0x3fffffffu);
    /* 005c4f50: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c4f54: jbe 0x5c4f61 */ if ((fC||fZ)) goto L_005c4f61;
L_005c4f56:; BB(0x005c4f56);
    /* 005c4f56: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005c4f59: mov dword ptr [ebp - 0x21c], eax */ W32((u32)(r_ebp+0xfffffde4u), r_eax);
    /* 005c4f5f: jmp 0x5c4f6b */ goto L_005c4f6b;
L_005c4f61:; BB(0x005c4f61);
    /* 005c4f61: mov dword ptr [ebp - 0x21c], 1 */ W32((u32)(r_ebp+0xfffffde4u), 0x1u);
L_005c4f6b:; BB(0x005c4f6b);
    /* 005c4f6b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c4f6e: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005c4f70: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 005c4f76: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c4f78: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4f7b: jae 0x5c4f89 */ if (!fC) goto L_005c4f89;
L_005c4f7d:; BB(0x005c4f7d);
    /* 005c4f7d: mov dword ptr [ebp - 0x220], 0 */ W32((u32)(r_ebp+0xfffffde0u), 0x0u);
    /* 005c4f87: jmp 0x5c4f97 */ goto L_005c4f97;
L_005c4f89:; BB(0x005c4f89);
    /* 005c4f89: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c4f8c: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005c4f8e: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4f91: mov dword ptr [ebp - 0x220], eax */ W32((u32)(r_ebp+0xfffffde0u), r_eax);
L_005c4f97:; BB(0x005c4f97);
    /* 005c4f97: mov ecx, dword ptr [ebp - 0x220] */ r_ecx = R32((u32)(r_ebp+0xfffffde0u));
    /* 005c4f9d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c4fa0: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4fa6: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4faa: jne 0x5c4fb8 */ if (!fZ) goto L_005c4fb8;
L_005c4fac:; BB(0x005c4fac);
    /* 005c4fac: mov dword ptr [ebp - 0x224], 0 */ W32((u32)(r_ebp+0xfffffddcu), 0x0u);
    /* 005c4fb6: jmp 0x5c4fd3 */ goto L_005c4fd3;
L_005c4fb8:; BB(0x005c4fb8);
    /* 005c4fb8: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4fbe: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4fc4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005c4fc7: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c4fca: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c4fcd: mov dword ptr [ebp - 0x224], edx */ W32((u32)(r_ebp+0xfffffddcu), r_edx);
L_005c4fd3:; BB(0x005c4fd3);
    /* 005c4fd3: mov eax, dword ptr [ebp - 0x224] */ r_eax = R32((u32)(r_ebp+0xfffffddcu));
    /* 005c4fd9: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4fdc: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4fdf: jae 0x5c5020 */ if (!fC) goto L_005c5020;
L_005c4fe1:; BB(0x005c4fe1);
    /* 005c4fe1: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4fe7: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4feb: jne 0x5c4ff9 */ if (!fZ) goto L_005c4ff9;
L_005c4fed:; BB(0x005c4fed);
    /* 005c4fed: mov dword ptr [ebp - 0x228], 0 */ W32((u32)(r_ebp+0xfffffdd8u), 0x0u);
    /* 005c4ff7: jmp 0x5c5014 */ goto L_005c5014;
L_005c4ff9:; BB(0x005c4ff9);
    /* 005c4ff9: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c4fff: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5005: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c5008: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c500b: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c500e: mov dword ptr [ebp - 0x228], ecx */ W32((u32)(r_ebp+0xfffffdd8u), r_ecx);
L_005c5014:; BB(0x005c5014);
    /* 005c5014: mov edx, dword ptr [ebp - 0x228] */ r_edx = R32((u32)(r_ebp+0xfffffdd8u));
    /* 005c501a: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c501d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005c5020:; BB(0x005c5020);
    /* 005c5020: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c5022: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c5025: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5026: call 0x5c6310 */ r_esp -= 4; W32(r_esp, 0x5c502bu); f_005c6310();
    /* 005c502b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c502e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c5031: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c5034: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c5037: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c503e: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5044: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c5047: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005c504d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c5050: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005c5056: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c5059: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005c505f: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005c5065: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005c506b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c506d: mov byte ptr [ebp - 0x71], cl */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_ecx);
    /* 005c5070: mov dl, byte ptr [ebp - 0x73] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff8du))) & 0xffu);
    /* 005c5073: mov byte ptr [ebp - 0x72], dl */ W8((u32)(r_ebp+0xffffff8eu), (u8)r_edx);
    /* 005c5076: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005c507c: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005c507f: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005c5085: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005c5088: mov dl, byte ptr [ebp - 0x71] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff8fu))) & 0xffu);
    /* 005c508b: mov byte ptr [ebp - 0x85], dl */ W8((u32)(r_ebp+0xffffff7bu), (u8)r_edx);
    /* 005c5091: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005c5097: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005c509d: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c50a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c50a4: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005c50aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c50ab: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c50ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c50af: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005c50b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c50b3: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5c50b8u); f_005bf010();
    /* 005c50b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c50bb: mov dword ptr [ebp - 0x22c], eax */ W32((u32)(r_ebp+0xfffffdd4u), r_eax);
    /* 005c50c1: mov edx, dword ptr [ebp - 0x22c] */ r_edx = R32((u32)(r_ebp+0xfffffdd4u));
    /* 005c50c7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005c50ca: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c50cd: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005c50d3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c50d5: mov byte ptr [ebp - 0x99], cl */ W8((u32)(r_ebp+0xffffff67u), (u8)r_ecx);
    /* 005c50db: mov dl, byte ptr [ebp - 0x9b] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff65u))) & 0xffu);
    /* 005c50e1: mov byte ptr [ebp - 0x9a], dl */ W8((u32)(r_ebp+0xffffff66u), (u8)r_edx);
    /* 005c50e7: mov al, byte ptr [ebp - 0x99] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff67u))) & 0xffu);
    /* 005c50ed: mov byte ptr [ebp - 0xa1], al */ W8((u32)(r_ebp+0xffffff5fu), (u8)r_eax);
    /* 005c50f3: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c50f9: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 005c50ff: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 005c5102: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5103: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c5106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5107: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005c510d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c510e: call 0x5c0910 */ r_esp -= 4; W32(r_esp, 0x5c5113u); f_005c0910();
    /* 005c5113: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5116: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c5119: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c511c: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 005c511f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c5122: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5128: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c512b: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005c5131: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c5134: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005c513a: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 005c5140: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005c5146: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c5149: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005c514f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5151: mov byte ptr [ebp - 0xa9], cl */ W8((u32)(r_ebp+0xffffff57u), (u8)r_ecx);
    /* 005c5157: mov dl, byte ptr [ebp - 0xab] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff55u))) & 0xffu);
    /* 005c515d: mov byte ptr [ebp - 0xaa], dl */ W8((u32)(r_ebp+0xffffff56u), (u8)r_edx);
    /* 005c5163: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005c5169: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005c516f: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005c5175: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 005c517b: mov dl, byte ptr [ebp - 0xa9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff57u))) & 0xffu);
    /* 005c5181: mov byte ptr [ebp - 0xbd], dl */ W8((u32)(r_ebp+0xffffff43u), (u8)r_edx);
    /* 005c5187: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005c518d: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005c5193: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5199: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c519a: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005c51a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c51a1: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005c51a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c51a8: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c51ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c51af: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5c51b4u); f_005bf010();
    /* 005c51b4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c51b7: jmp 0x5c51f9 */ goto L_005c51f9;
L_005c51f9:; BB(0x005c51f9);
    /* 005c51f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c5200: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5206: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c520a: jne 0x5c5218 */ if (!fZ) goto L_005c5218;
L_005c520c:; BB(0x005c520c);
    /* 005c520c: mov dword ptr [ebp - 0x230], 0 */ W32((u32)(r_ebp+0xfffffdd0u), 0x0u);
    /* 005c5216: jmp 0x5c5233 */ goto L_005c5233;
L_005c5218:; BB(0x005c5218);
    /* 005c5218: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c521e: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5224: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c5227: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c522a: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c522d: mov dword ptr [ebp - 0x230], eax */ W32((u32)(r_ebp+0xfffffdd0u), r_eax);
L_005c5233:; BB(0x005c5233);
    /* 005c5233: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c5236: add ecx, dword ptr [ebp - 0x230] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffdd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c523c: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 005c523f: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5245: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5249: je 0x5c52c6 */ if (fZ) goto L_005c52c6;
L_005c524b:; BB(0x005c524b);
    /* 005c524b: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5251: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c5254: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 005c525a: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5260: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c5263: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005c5269: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005c526f: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 005c5275: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005c527b: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 005c5281: mov al, byte ptr [ebp - 0xde] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff22u))) & 0xffu);
    /* 005c5287: mov byte ptr [ebp - 0xdd], al */ W8((u32)(r_ebp+0xffffff23u), (u8)r_eax);
    /* 005c528d: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5293: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5299: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005c529c: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c529f: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c52a2: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005c52a8: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c52ae: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c52b1: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 005c52b7: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 005c52bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c52be: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5c52c3u); f_00686cae();
    /* 005c52c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c52c6:; BB(0x005c52c6);
    /* 005c52c6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c52c9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c52cc: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005c52cf: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c52d5: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005c52d8: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c52db: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c52de: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 005c52e1: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c52e7: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005c52ea: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c52f0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c52f3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005c52f6: jmp 0x5c5581 */ goto L_005c5581;
L_005c52fb:; BB(0x005c52fb);
    /* 005c52fb: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5301: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c5304: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c5307: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c530a: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c530d: jae 0x5c5457 */ if (!fC) goto L_005c5457;
L_005c5313:; BB(0x005c5313);
    /* 005c5313: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5319: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c531c: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 005c5322: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5329: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005c532c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c532f: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005c5332: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5333: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 005c5339: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c533a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c533d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c533e: call 0x5befc0 */ r_esp -= 4; W32(r_esp, 0x5c5343u); f_005befc0();
    /* 005c5343: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5346: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005c534d: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005c5350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5351: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5357: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c535a: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c535d: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005c5360: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c5363: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c5365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c5366: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c536c: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c536f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5370: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5376: call 0x5c5fd0 */ r_esp -= 4; W32(r_esp, 0x5c537bu); f_005c5fd0();
    /* 005c537b: jmp 0x5c53cf */ goto L_005c53cf;
L_005c53cf:; BB(0x005c53cf);
    /* 005c53cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c53d6: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c53dc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c53df: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c53e2: lea eax, [ecx + edx*4] */ r_eax = (u32)(r_ecx+r_edx*4);
    /* 005c53e5: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c53eb: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005c53ee: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c53f1: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005c53f4: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c53fa: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c53fd: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c53ff: mov dword ptr [ebp - 0x170], ecx */ W32((u32)(r_ebp+0xfffffe90u), r_ecx);
    /* 005c5405: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c5408: mov dword ptr [ebp - 0x16c], edx */ W32((u32)(r_ebp+0xfffffe94u), r_edx);
    /* 005c540e: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 005c5414: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 005c541a: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 005c5420: mov dword ptr [ebp - 0x168], ecx */ W32((u32)(r_ebp+0xfffffe98u), r_ecx);
    /* 005c5426: jmp 0x5c5437 */ goto L_005c5437;
L_005c5428:; BB(0x005c5428);
    /* 005c5428: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005c542e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c5431: mov dword ptr [ebp - 0x168], edx */ W32((u32)(r_ebp+0xfffffe98u), r_edx);
L_005c5437:; BB(0x005c5437);
    /* 005c5437: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 005c543d: cmp eax, dword ptr [ebp - 0x160] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffea0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5443: je 0x5c5452 */ if (fZ) goto L_005c5452;
L_005c5445:; BB(0x005c5445);
    /* 005c5445: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005c544b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c544e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005c5450: jmp 0x5c5428 */ goto L_005c5428;
L_005c5452:; BB(0x005c5452);
    /* 005c5452: jmp 0x5c5581 */ goto L_005c5581;
L_005c5457:; BB(0x005c5457);
    /* 005c5457: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c545d: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c5460: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c5463: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5469: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c546c: mov dword ptr [ebp - 0x1b8], eax */ W32((u32)(r_ebp+0xfffffe48u), r_eax);
    /* 005c5472: mov ecx, dword ptr [ebp - 0x1b8] */ r_ecx = R32((u32)(r_ebp+0xfffffe48u));
    /* 005c5478: mov dword ptr [ebp - 0x1b4], ecx */ W32((u32)(r_ebp+0xfffffe4cu), r_ecx);
    /* 005c547e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c5481: mov dword ptr [ebp - 0x1b0], edx */ W32((u32)(r_ebp+0xfffffe50u), r_edx);
    /* 005c5487: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c548a: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005c548d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c5490: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5492: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 005c5498: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c549a: mov byte ptr [ebp - 0x171], dl */ W8((u32)(r_ebp+0xfffffe8fu), (u8)r_edx);
    /* 005c54a0: mov al, byte ptr [ebp - 0x173] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe8du))) & 0xffu);
    /* 005c54a6: mov byte ptr [ebp - 0x172], al */ W8((u32)(r_ebp+0xfffffe8eu), (u8)r_eax);
    /* 005c54ac: mov ecx, dword ptr [ebp - 0x1b0] */ r_ecx = R32((u32)(r_ebp+0xfffffe50u));
    /* 005c54b2: mov dword ptr [ebp - 0x178], ecx */ W32((u32)(r_ebp+0xfffffe88u), r_ecx);
    /* 005c54b8: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 005c54be: mov dword ptr [ebp - 0x180], edx */ W32((u32)(r_ebp+0xfffffe80u), r_edx);
    /* 005c54c4: mov al, byte ptr [ebp - 0x171] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe8fu))) & 0xffu);
    /* 005c54ca: mov byte ptr [ebp - 0x1a5], al */ W8((u32)(r_ebp+0xfffffe5bu), (u8)r_eax);
    /* 005c54d0: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 005c54d6: mov dword ptr [ebp - 0x1a4], ecx */ W32((u32)(r_ebp+0xfffffe5cu), r_ecx);
    /* 005c54dc: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c54e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c54e3: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 005c54e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c54ea: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 005c54f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c54f1: mov edx, dword ptr [ebp - 0x180] */ r_edx = R32((u32)(r_ebp+0xfffffe80u));
    /* 005c54f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c54f8: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5c54fdu); f_005bf010();
    /* 005c54fd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5500: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005c5506: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005c5509: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c550c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c550d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c5510: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005c5513: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c5516: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c5518: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c5519: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c551c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c551d: call 0x5c61d0 */ r_esp -= 4; W32(r_esp, 0x5c5522u); f_005c61d0();
    /* 005c5522: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c5525: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c5528: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005c552b: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 005c552e: mov dword ptr [ebp - 0x204], edx */ W32((u32)(r_ebp+0xfffffdfcu), r_edx);
    /* 005c5534: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c5537: mov dword ptr [ebp - 0x200], eax */ W32((u32)(r_ebp+0xfffffe00u), r_eax);
    /* 005c553d: mov ecx, dword ptr [ebp - 0x204] */ r_ecx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 005c5543: mov dword ptr [ebp - 0x1f4], ecx */ W32((u32)(r_ebp+0xfffffe0cu), r_ecx);
    /* 005c5549: mov edx, dword ptr [ebp - 0x200] */ r_edx = R32((u32)(r_ebp+0xfffffe00u));
    /* 005c554f: mov dword ptr [ebp - 0x1fc], edx */ W32((u32)(r_ebp+0xfffffe04u), r_edx);
    /* 005c5555: jmp 0x5c5566 */ goto L_005c5566;
L_005c5557:; BB(0x005c5557);
    /* 005c5557: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 005c555d: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c5560: mov dword ptr [ebp - 0x1fc], eax */ W32((u32)(r_ebp+0xfffffe04u), r_eax);
L_005c5566:; BB(0x005c5566);
    /* 005c5566: mov ecx, dword ptr [ebp - 0x1fc] */ r_ecx = R32((u32)(r_ebp+0xfffffe04u));
    /* 005c556c: cmp ecx, dword ptr [ebp - 0x1f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffe0cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c5572: je 0x5c5581 */ if (fZ) goto L_005c5581;
L_005c5574:; BB(0x005c5574);
    /* 005c5574: mov edx, dword ptr [ebp - 0x1fc] */ r_edx = R32((u32)(r_ebp+0xfffffe04u));
    /* 005c557a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c557d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005c557f: jmp 0x5c5557 */ goto L_005c5557;
L_005c5581:; BB(0x005c5581);
    /* 005c5581: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c5584: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c558b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c558c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c558d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c558e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c558f: mov esp, ebp */ r_esp = r_ebp;
    /* 005c5591: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c5592: ret 0x10 */ FN_RET(0x005c4e10); r_esp += 20; return;
}

