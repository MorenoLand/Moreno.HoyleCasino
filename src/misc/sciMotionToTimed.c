#include "protos.h"

void f_00606f60(void) /* sciMotionToTimed::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606f60);
    /* 00606f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00606f63: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606f66: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00606f69: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606f6c: cmp dword ptr [eax + 0x2c], -1 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606f70: jne 0x606f87 */ if (!fZ) goto L_00606f87;
L_00606f72:; BB(0x00606f72);
    /* 00606f72: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00606f75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606f76: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00606f79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00606f7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606f7d: call 0x606bc0 */ r_esp -= 4; W32(r_esp, 0x606f82u); f_00606bc0();
    /* 00606f82: jmp 0x60711b */ goto L_0060711b;
L_00606f87:; BB(0x00606f87);
    /* 00606f87: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606f8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00606f8d: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00606f90: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606f93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00606f96: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00606f99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606f9c: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606fa0: jne 0x606fa7 */ if (!fZ) goto L_00606fa7;
L_00606fa2:; BB(0x00606fa2);
    /* 00606fa2: jmp 0x60711b */ goto L_0060711b;
L_00606fa7:; BB(0x00606fa7);
    /* 00606fa7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606faa: mov byte ptr [edx + 0xc], 1 */ W8((u32)(r_edx+0xcu), 0x1u);
    /* 00606fae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606fb1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00606fb4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606fb7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00606fba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00606fbc: mov ecx, eax */ r_ecx = r_eax;
    /* 00606fbe: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00606fc1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606fc3u); call_ind(t); }
    /* 00606fc3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00606fc6: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 00606fc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606fcc: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 00606fcf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606fd2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00606fd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606fd8: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00606fdb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00606fdd: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00606fe0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x606fe2u); call_ind(t); }
    /* 00606fe2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00606fe5: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 00606fe8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606feb: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00606fee: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606ff1: fild dword ptr [edx + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x10u)));
    /* 00606ff4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606ff7: fsub dword ptr [eax + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x18u));
    /* 00606ffa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606ffd: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 00607000: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607003: fild dword ptr [edx + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x14u)));
    /* 00607006: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607009: fsub dword ptr [eax + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x1cu));
    /* 0060700c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060700f: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 00607012: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607015: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 00607018: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 0060701e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00607020: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00607023: jp 0x607032 */ if (fP) goto L_00607032;
L_00607025:; BB(0x00607025);
    /* 00607025: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607028: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 0060702b: fchs  */ ST(0) = -ST(0);
    /* 0060702d: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00607030: jmp 0x60703b */ goto L_0060703b;
L_00607032:; BB(0x00607032);
    /* 00607032: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607035: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00607038: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_0060703b:; BB(0x0060703b);
    /* 0060703b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060703e: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00607041: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00607047: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00607049: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0060704c: jp 0x60705b */ if (fP) goto L_0060705b;
L_0060704e:; BB(0x0060704e);
    /* 0060704e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607051: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 00607054: fchs  */ ST(0) = -ST(0);
    /* 00607056: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 00607059: jmp 0x607064 */ goto L_00607064;
L_0060705b:; BB(0x0060705b);
    /* 0060705b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060705e: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 00607061: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
L_00607064:; BB(0x00607064);
    /* 00607064: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00607067: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0060706a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0060706c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0060706e: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00607071: jne 0x60707e */ if (!fZ) goto L_0060707e;
L_00607073:; BB(0x00607073);
    /* 00607073: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607076: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 00607079: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0060707c: jmp 0x607087 */ goto L_00607087;
L_0060707e:; BB(0x0060707e);
    /* 0060707e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607081: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 00607084: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_00607087:; BB(0x00607087);
    /* 00607087: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060708a: fild dword ptr [ecx + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x2cu)));
    /* 0060708d: fdivr dword ptr [ebp - 0x20] */ ST(0) = R_F32((u32)(r_ebp+0xffffffe0u)) / ST(0);
    /* 00607090: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00607093: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00607096: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 0060709c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0060709e: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006070a1: jp 0x6070ad */ if (fP) goto L_006070ad;
L_006070a3:; BB(0x006070a3);
    /* 006070a3: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 006070a6: fchs  */ ST(0) = -ST(0);
    /* 006070a8: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006070ab: jmp 0x6070b3 */ goto L_006070b3;
L_006070ad:; BB(0x006070ad);
    /* 006070ad: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 006070b0: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
L_006070b3:; BB(0x006070b3);
    /* 006070b3: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006070b6: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 006070b9: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 006070bc: fadd qword ptr [0x6b2c48] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c48u));
    /* 006070c2: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6070c7u); f_00686cc0();
    /* 006070c7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006070ca: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006070cd: mov dword ptr [ecx + 0x188], eax */ W32((u32)(r_ecx+0x188u), r_eax);
    /* 006070d3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006070d6: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006070d9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006070dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006070df: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006070e2: mov dword ptr [edx + 0x184], 1 */ W32((u32)(r_edx+0x184u), 0x1u);
    /* 006070ec: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 006070ef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006070f2: fdivr dword ptr [eax + 0x20] */ ST(0) = R_F32((u32)(r_eax+0x20u)) / ST(0);
    /* 006070f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006070f8: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 006070fb: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 006070fe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607101: fdivr dword ptr [edx + 0x24] */ ST(0) = R_F32((u32)(r_edx+0x24u)) / ST(0);
    /* 00607104: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607107: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0060710a: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00607110: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x607115u); f_005f3e50();
    /* 00607115: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607118: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
L_0060711b:; BB(0x0060711b);
    /* 0060711b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060711d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060711e: ret 8 */ FN_RET(0x00606f60); r_esp += 12; return;
}

