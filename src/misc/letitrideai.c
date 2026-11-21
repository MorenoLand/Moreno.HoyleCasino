#include "protos.h"

void f_00446160(void) /* letitrideai::func_00446160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446160);
    /* 00446160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446161: mov ebp, esp */ r_ebp = r_esp;
    /* 00446163: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00446166: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00446169: mov eax, dword ptr [0x79070c] */ r_eax = R32((u32)(0x79070cu));
    /* 0044616e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00446170: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00446176: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0044617c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44617eu); call_ind(t); }
    /* 0044617e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00446181: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00446187: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00446189: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 0044618f: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 00446195: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x446197u); call_ind(t); }
    /* 00446197: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044619a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044619d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044619e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4461a3u); f_005dcb00();
    /* 004461a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004461a6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004461a9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004461ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004461ae: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004461b1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004461b4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4461b6u); call_ind(t); }
    /* 004461b6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004461b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004461bc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004461bf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004461c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004461c3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4461c8u); f_005dcb00();
    /* 004461c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004461cb: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 004461d1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004461d4: cmp dword ptr [ebp - 0x10], -4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004461d8: jge 0x4461ec */ if ((fS==fO)) goto L_004461ec;
L_004461da:; BB(0x004461da);
    /* 004461da: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004461dc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4461e1u); f_0062fbf0();
    /* 004461e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004461e4: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004461e7: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004461e9: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004461ec:; BB(0x004461ec);
    /* 004461ec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004461ee: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4461f3u); f_0062fbf0();
    /* 004461f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004461f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004461f9: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004461fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00446200: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 00446203: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00446205: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00446208: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44620du); f_0062fbf0();
    /* 0044620d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446210: mov ecx, eax */ r_ecx = r_eax;
    /* 00446212: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00446215: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00446218: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00446219: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00446219, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00446219, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044621b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0044621e: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00446221: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 00446224: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00446227: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044622b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0044622e: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00446231: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00446233: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00446235: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00446238: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0044623b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x446240u); f_0062fbf0();
    /* 00446240: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446243: mov ecx, eax */ r_ecx = r_eax;
    /* 00446245: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00446248: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044624b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044624c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044624c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044624c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044624e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00446251: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 00446254: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 00446257: fadd qword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc8u));
    /* 0044625a: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x44625fu); f_00686cc0();
    /* 0044625f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00446262: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446265: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00446266: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0044626b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0044626b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044626b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044626d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00446270:; BB(0x00446270);
    /* 00446270: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446273: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00446274: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00446279: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00446279, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00446279, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044627b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044627d: je 0x44628a */ if (fZ) goto L_0044628a;
L_0044627f:; BB(0x0044627f);
    /* 0044627f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446282: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00446285: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00446288: jmp 0x446270 */ goto L_00446270;
L_0044628a:; BB(0x0044628a);
    /* 0044628a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044628d: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446290: jge 0x446298 */ if ((fS==fO)) goto L_00446298;
L_00446292:; BB(0x00446292);
    /* 00446292: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00446295: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00446298:; BB(0x00446298);
    /* 00446298: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044629b: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044629e: jle 0x4462a6 */ if ((fZ||fS!=fO)) goto L_004462a6;
L_004462a0:; BB(0x004462a0);
    /* 004462a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004462a3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004462a6:; BB(0x004462a6);
    /* 004462a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004462a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004462aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004462ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004462ae: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004462b1: call 0x446680 */ r_esp -= 4; W32(r_esp, 0x4462b6u); f_00446680();
    /* 004462b6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004462b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004462bb: jne 0x4462c8 */ if (!fZ) goto L_004462c8;
L_004462bd:; BB(0x004462bd);
    /* 004462bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004462c0: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004462c3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004462c6: jmp 0x4462a6 */ goto L_004462a6;
L_004462c8:; BB(0x004462c8);
    /* 004462c8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004462cb: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004462ce: jl 0x4462d8 */ if ((fS!=fO)) goto L_004462d8;
L_004462d0:; BB(0x004462d0);
    /* 004462d0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004462d3: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004462d6: jle 0x4462ec */ if ((fZ||fS!=fO)) goto L_004462ec;
L_004462d8:; BB(0x004462d8);
    /* 004462d8: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 004462da: push 0x6b899c */ { u32 v = 0x6b899cu; r_esp -= 4; W32(r_esp, v); }
    /* 004462df: push 0x6b5afc */ { u32 v = 0x6b5afcu; r_esp -= 4; W32(r_esp, v); }
    /* 004462e4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4462e9u); f_005e9f20();
    /* 004462e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004462ec:; BB(0x004462ec);
    /* 004462ec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004462ef: mov esp, ebp */ r_esp = r_ebp;
    /* 004462f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004462f2: ret 4 */ FN_RET(0x00446160); r_esp += 8; return;
}

void f_00446300(void) /* letitrideai::func_00446300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00446300);
    /* 00446300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00446301: mov ebp, esp */ r_ebp = r_esp;
    /* 00446303: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00446306: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00446307: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0044630a: mov eax, dword ptr [0x79070c] */ r_eax = R32((u32)(0x79070cu));
    /* 0044630f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00446311: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00446317: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0044631d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44631fu); call_ind(t); }
    /* 0044631f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00446322: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00446328: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0044632a: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00446330: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 00446336: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x446338u); call_ind(t); }
    /* 00446338: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0044633b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044633e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044633f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x446344u); f_005dcb00();
    /* 00446344: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446347: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0044634a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0044634d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044634f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00446352: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00446355: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x446357u); call_ind(t); }
    /* 00446357: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044635a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044635d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044635e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x446363u); f_005dcb00();
    /* 00446363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446366: mov ecx, eax */ r_ecx = r_eax;
    /* 00446368: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x44636du); f_005d5a50();
    /* 0044636d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00446370: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00446376: call 0x5da8e0 */ r_esp -= 4; W32(r_esp, 0x44637bu); f_005da8e0();
    /* 0044637b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0044637e: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00446384: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x446389u); f_005dac90();
    /* 00446389: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0044638c: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0044638f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446390: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00446396: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x44639bu); f_005daa20();
    /* 0044639b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0044639d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004463a0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004463a3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004463a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004463a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004463aa: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4463afu); f_005dcb00();
    /* 004463af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004463b2: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 004463b8: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004463bb: cmp dword ptr [ebp - 0x24], -4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004463bf: jge 0x4463d3 */ if ((fS==fO)) goto L_004463d3;
L_004463c1:; BB(0x004463c1);
    /* 004463c1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004463c3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4463c8u); f_0062fbf0();
    /* 004463c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004463cb: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004463ce: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004463d0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_004463d3:; BB(0x004463d3);
    /* 004463d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004463d6: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004463d9: cmp dword ptr [ebp - 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004463dc: jge 0x4463f2 */ if ((fS==fO)) goto L_004463f2;
L_004463de:; BB(0x004463de);
    /* 004463de: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004463e0: push 0x6b899c */ { u32 v = 0x6b899cu; r_esp -= 4; W32(r_esp, v); }
    /* 004463e5: push 0x6b5b44 */ { u32 v = 0x6b5b44u; r_esp -= 4; W32(r_esp, v); }
    /* 004463ea: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4463efu); f_005e9f20();
    /* 004463ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004463f2:; BB(0x004463f2);
    /* 004463f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004463f5: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004463f8: jl 0x446402 */ if ((fS!=fO)) goto L_00446402;
L_004463fa:; BB(0x004463fa);
    /* 004463fa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004463fd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00446400: jmp 0x446408 */ goto L_00446408;
L_00446402:; BB(0x00446402);
    /* 00446402: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00446405: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00446408:; BB(0x00446408);
    /* 00446408: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044640c: jge 0x446540 */ if ((fS==fO)) goto L_00446540;
L_00446412:; BB(0x00446412);
    /* 00446412: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446416: jne 0x446439 */ if (!fZ) goto L_00446439;
L_00446418:; BB(0x00446418);
    /* 00446418: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044641b: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044641e: jge 0x446437 */ if ((fS==fO)) goto L_00446437;
L_00446420:; BB(0x00446420);
    /* 00446420: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00446423: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00446426: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446429: jg 0x446437 */ if ((!fZ&&fS==fO)) goto L_00446437;
L_0044642b:; BB(0x0044642b);
    /* 0044642b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044642e: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00446431: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446434: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00446437:; BB(0x00446437);
    /* 00446437: jmp 0x4464a8 */ goto L_004464a8;
L_00446439:; BB(0x00446439);
    /* 00446439: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044643c: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044643f: jge 0x4464a8 */ if ((fS==fO)) goto L_004464a8;
L_00446441:; BB(0x00446441);
    /* 00446441: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00446444: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00446447: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044644a: jg 0x44646b */ if ((!fZ&&fS==fO)) goto L_0044646b;
L_0044644c:; BB(0x0044644c);
    /* 0044644c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044644f: sub esi, dword ptr [ebp - 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00446452: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00446454: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x446459u); f_0062fbf0();
    /* 00446459: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044645c: mov ecx, eax */ r_ecx = r_eax;
    /* 0044645e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00446461: mov eax, esi */ r_eax = r_esi;
    /* 00446463: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00446464: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00446464, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00446464, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00446466: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00446469: jmp 0x4464a8 */ goto L_004464a8;
L_0044646b:; BB(0x0044646b);
    /* 0044646b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044646e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044646f: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00446472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446473: mov ecx, dword ptr [0x79070c] */ r_ecx = R32((u32)(0x79070cu));
    /* 00446479: call 0x5dac40 */ r_esp -= 4; W32(r_esp, 0x44647eu); f_005dac40();
    /* 0044647e: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 00446480: fidiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xffffffe8u));
    /* 00446483: fcomp qword ptr [0x6b2c38] */ fx_compare(ST(0), R_F64((u32)(0x6b2c38u))); FPOP();
    /* 00446489: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044648b: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044648e: jne 0x4464a8 */ if (!fZ) goto L_004464a8;
L_00446490:; BB(0x00446490);
    /* 00446490: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00446492: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x446497u); f_0062fbf0();
    /* 00446497: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044649a: mov ecx, eax */ r_ecx = r_eax;
    /* 0044649c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044649f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004464a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004464a3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004464a3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004464a3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004464a5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004464a8:; BB(0x004464a8);
    /* 004464a8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004464ab: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004464ac: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004464b1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004464b1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004464b1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004464b3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004464b6:; BB(0x004464b6);
    /* 004464b6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004464b9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004464ba: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004464bf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004464bf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004464bf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004464c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004464c3: je 0x4464d0 */ if (fZ) goto L_004464d0;
L_004464c5:; BB(0x004464c5);
    /* 004464c5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004464c8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004464cb: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004464ce: jmp 0x4464b6 */ goto L_004464b6;
L_004464d0:; BB(0x004464d0);
    /* 004464d0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004464d3: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004464d6: jge 0x4464de */ if ((fS==fO)) goto L_004464de;
L_004464d8:; BB(0x004464d8);
    /* 004464d8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004464db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_004464de:; BB(0x004464de);
    /* 004464de: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004464e1: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004464e4: jle 0x4464ec */ if ((fZ||fS!=fO)) goto L_004464ec;
L_004464e6:; BB(0x004464e6);
    /* 004464e6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004464e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004464ec:; BB(0x004464ec);
    /* 004464ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004464ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004464f0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004464f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004464f4: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004464f7: call 0x446680 */ r_esp -= 4; W32(r_esp, 0x4464fcu); f_00446680();
    /* 004464fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004464ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446501: jne 0x44650e */ if (!fZ) goto L_0044650e;
L_00446503:; BB(0x00446503);
    /* 00446503: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00446506: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00446509: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044650c: jmp 0x4464ec */ goto L_004464ec;
L_0044650e:; BB(0x0044650e);
    /* 0044650e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00446511: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446514: jl 0x44651e */ if ((fS!=fO)) goto L_0044651e;
L_00446516:; BB(0x00446516);
    /* 00446516: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00446519: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044651c: jle 0x446532 */ if ((fZ||fS!=fO)) goto L_00446532;
L_0044651e:; BB(0x0044651e);
    /* 0044651e: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00446520: push 0x6b899c */ { u32 v = 0x6b899cu; r_esp -= 4; W32(r_esp, v); }
    /* 00446525: push 0x6b5afc */ { u32 v = 0x6b5afcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044652a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44652fu); f_005e9f20();
    /* 0044652f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00446532:; BB(0x00446532);
    /* 00446532: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446536: je 0x446540 */ if (fZ) goto L_00446540;
L_00446538:; BB(0x00446538);
    /* 00446538: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044653b: jmp 0x446672 */ goto L_00446672;
L_00446540:; BB(0x00446540);
    /* 00446540: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00446543: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446544: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x446549u); f_005dcb00();
    /* 00446549: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044654c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0044654f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00446552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446553: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x446558u); f_005dcb00();
    /* 00446558: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044655b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0044655e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00446560: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x446565u); f_0062fbf0();
    /* 00446565: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446568: mov esi, eax */ r_esi = r_eax;
    /* 0044656a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0044656d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00446570: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00446572: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00446575: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00446578: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x44657au); call_ind(t); }
    /* 0044657a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0044657b: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0044657b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0044657b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0044657d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00446580: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 00446583: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00446586: imul ecx, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044658a: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0044658d: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00446590: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00446592: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00446594: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00446597: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x44659cu); f_0062fbf0();
    /* 0044659c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044659f: mov esi, eax */ r_esi = r_eax;
    /* 004465a1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004465a4: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004465a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004465a9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004465ac: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004465af: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4465b1u); call_ind(t); }
    /* 004465b1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004465b2: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x004465b2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004465b2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004465b4: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004465b7: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 004465ba: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004465bc: fstp qword ptr [ebp - 0x64] */ W_F64((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 004465bf: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4465c4u); f_0062fbf0();
    /* 004465c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004465c7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004465ca: imul eax, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004465ce: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 004465d1: fild dword ptr [ebp - 0x68] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff98u)));
    /* 004465d4: fmul qword ptr [ebp - 0x64] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffff9cu));
    /* 004465d7: fadd qword ptr [ebp - 0x58] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa8u));
    /* 004465da: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x4465dfu); f_00686cc0();
    /* 004465df: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004465e2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004465e5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004465e6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004465eb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004465eb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004465eb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004465ed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004465f0:; BB(0x004465f0);
    /* 004465f0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004465f3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004465f4: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004465f9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004465f9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004465f9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004465fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004465fd: je 0x44660a */ if (fZ) goto L_0044660a;
L_004465ff:; BB(0x004465ff);
    /* 004465ff: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00446602: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00446605: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00446608: jmp 0x4465f0 */ goto L_004465f0;
L_0044660a:; BB(0x0044660a);
    /* 0044660a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044660d: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446610: jge 0x446618 */ if ((fS==fO)) goto L_00446618;
L_00446612:; BB(0x00446612);
    /* 00446612: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00446615: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_00446618:; BB(0x00446618);
    /* 00446618: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044661b: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044661e: jle 0x446626 */ if ((fZ||fS!=fO)) goto L_00446626;
L_00446620:; BB(0x00446620);
    /* 00446620: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446623: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00446626:; BB(0x00446626);
    /* 00446626: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00446629: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044662a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044662d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044662e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00446631: call 0x446680 */ r_esp -= 4; W32(r_esp, 0x446636u); f_00446680();
    /* 00446636: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00446639: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044663b: jne 0x446648 */ if (!fZ) goto L_00446648;
L_0044663d:; BB(0x0044663d);
    /* 0044663d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00446640: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00446643: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00446646: jmp 0x446626 */ goto L_00446626;
L_00446648:; BB(0x00446648);
    /* 00446648: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044664b: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044664e: jl 0x446658 */ if ((fS!=fO)) goto L_00446658;
L_00446650:; BB(0x00446650);
    /* 00446650: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00446653: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446656: jle 0x44666f */ if ((fZ||fS!=fO)) goto L_0044666f;
L_00446658:; BB(0x00446658);
    /* 00446658: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0044665d: push 0x6b899c */ { u32 v = 0x6b899cu; r_esp -= 4; W32(r_esp, v); }
    /* 00446662: push 0x6b5afc */ { u32 v = 0x6b5afcu; r_esp -= 4; W32(r_esp, v); }
    /* 00446667: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x44666cu); f_005e9f20();
    /* 0044666c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044666f:; BB(0x0044666f);
    /* 0044666f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00446672:; BB(0x00446672);
    /* 00446672: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00446673: mov esp, ebp */ r_esp = r_ebp;
    /* 00446675: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00446676: ret 4 */ FN_RET(0x00446300); r_esp += 8; return;
}

