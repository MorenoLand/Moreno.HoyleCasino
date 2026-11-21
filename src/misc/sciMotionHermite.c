#include "protos.h"

void f_006072c0(void) /* sciMotionHermite::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006072c0);
    /* 006072c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006072c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006072c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006072c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006072c9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006072cc: movzx ecx, byte ptr [eax + 0xc] */ r_ecx = (u32)R8((u32)(r_eax+0xcu));
    /* 006072d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006072d2: jne 0x6072d9 */ if (!fZ) goto L_006072d9;
L_006072d4:; BB(0x006072d4);
    /* 006072d4: jmp 0x607567 */ goto L_00607567;
L_006072d9:; BB(0x006072d9);
    /* 006072d9: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 006072df: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x6072e4u); f_005f3e50();
    /* 006072e4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006072e7: sub eax, dword ptr [edx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006072ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006072eb: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x6072f0u); f_00686eba();
    /* 006072f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006072f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006072f6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006072f9: cmp eax, dword ptr [edx + 0x184] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x184u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006072ff: jge 0x607306 */ if ((fS==fO)) goto L_00607306;
L_00607301:; BB(0x00607301);
    /* 00607301: jmp 0x607567 */ goto L_00607567;
L_00607306:; BB(0x00607306);
    /* 00607306: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 0060730c: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x607311u); f_005f3e50();
    /* 00607311: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607314: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00607317: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060731a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0060731d: cmp dword ptr [eax + 0x184], 0 */ {  u32 a = R32((u32)(r_eax+0x184u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00607324: jne 0x607349 */ if (!fZ) goto L_00607349;
L_00607326:; BB(0x00607326);
    /* 00607326: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607329: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0060732c: lea eax, [edx*4 - 4] */ r_eax = (u32)(r_edx*4+0xfffffffcu);
    /* 00607333: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607336: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00607339: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060733c: fld dword ptr [edx + 0x44] */ FPUSH(R_F32((u32)(r_edx+0x44u)));
    /* 0060733f: fld1  */ FPUSH(1.0);
    /* 00607341: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00607343: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607346: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
L_00607349:; BB(0x00607349);
    /* 00607349: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060734c: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0060734f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607352: fadd dword ptr [edx + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x44u));
    /* 00607355: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607358: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0060735b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060735e: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00607361: fcomp qword ptr [0x6b2c48] */ fx_compare(ST(0), R_F64((u32)(0x6b2c48u))); FPOP();
    /* 00607367: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00607369: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0060736c: jne 0x6073b9 */ if (!fZ) goto L_006073b9;
L_0060736e:; BB(0x0060736e);
    /* 0060736e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607371: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00607374: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00607377: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060737a: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0060737d: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00607380: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00607382: jge 0x6073a7 */ if ((fS==fO)) goto L_006073a7;
L_00607384:; BB(0x00607384);
    /* 00607384: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607387: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0060738a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060738d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607390: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 00607393: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607396: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00607399: fsub qword ptr [0x6b2c48] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c48u));
    /* 0060739f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073a2: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 006073a5: jmp 0x6073b9 */ goto L_006073b9;
L_006073a7:; BB(0x006073a7);
    /* 006073a7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006073ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073af: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006073b2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6073b4u); call_ind(t); }
    /* 006073b4: jmp 0x607567 */ goto L_00607567;
L_006073b9:; BB(0x006073b9);
    /* 006073b9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073bc: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 006073bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073c2: fmul dword ptr [ecx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x38u));
    /* 006073c5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073c8: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 006073cb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073ce: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 006073d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073d4: fmul dword ptr [ecx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x38u));
    /* 006073d7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073da: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 006073dd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073e0: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 006073e3: fmul qword ptr [0x6b3740] */ ST(0) = ST(0) * R_F64((u32)(0x6b3740u));
    /* 006073e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006073ec: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 006073ef: fmul qword ptr [0x6b9490] */ ST(0) = ST(0) * R_F64((u32)(0x6b9490u));
    /* 006073f5: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006073f7: fadd qword ptr [0x6b2c48] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c48u));
    /* 006073fd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607400: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00607403: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607406: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00607409: fimul dword ptr [edx + eax*8] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_edx+r_eax*8));
    /* 0060740c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060740f: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00607412: fmul qword ptr [0x6d7e38] */ ST(0) = ST(0) * R_F64((u32)(0x6d7e38u));
    /* 00607418: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060741b: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0060741e: fmul qword ptr [0x6b9490] */ ST(0) = ST(0) * R_F64((u32)(0x6b9490u));
    /* 00607424: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00607426: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607429: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0060742c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060742f: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00607432: fimul dword ptr [edx + eax*8 + 8] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_edx+r_eax*8+0x8u));
    /* 00607436: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00607438: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060743b: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0060743e: fmul qword ptr [0x6b3740] */ ST(0) = ST(0) * R_F64((u32)(0x6b3740u));
    /* 00607444: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607447: fsubr dword ptr [ecx + 0x40] */ ST(0) = R_F32((u32)(r_ecx+0x40u)) - ST(0);
    /* 0060744a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060744d: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00607450: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607453: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00607456: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607459: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0060745c: fimul dword ptr [eax + ecx*8 + 0x10] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_eax+r_ecx*8+0x10u));
    /* 00607460: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00607462: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607465: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 00607468: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060746b: fsub dword ptr [edx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x3cu));
    /* 0060746e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607471: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00607474: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607477: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0060747a: fimul dword ptr [eax + ecx*8 + 0x18] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_eax+r_ecx*8+0x18u));
    /* 0060747e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00607480: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607483: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 00607486: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607489: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 0060748c: fmul qword ptr [0x6b3740] */ ST(0) = ST(0) * R_F64((u32)(0x6b3740u));
    /* 00607492: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607495: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00607498: fmul qword ptr [0x6b9490] */ ST(0) = ST(0) * R_F64((u32)(0x6b9490u));
    /* 0060749e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006074a0: fadd qword ptr [0x6b2c48] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c48u));
    /* 006074a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074a9: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 006074ac: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074af: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006074b2: fimul dword ptr [ecx + edx*8 + 4] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ecx+r_edx*8+0x4u));
    /* 006074b6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074b9: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 006074bc: fmul qword ptr [0x6d7e38] */ ST(0) = ST(0) * R_F64((u32)(0x6d7e38u));
    /* 006074c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074c5: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 006074c8: fmul qword ptr [0x6b9490] */ ST(0) = ST(0) * R_F64((u32)(0x6b9490u));
    /* 006074ce: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006074d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074d3: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 006074d6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074d9: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006074dc: fimul dword ptr [ecx + edx*8 + 0xc] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ecx+r_edx*8+0xcu));
    /* 006074e0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006074e2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074e5: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 006074e8: fmul qword ptr [0x6b3740] */ ST(0) = ST(0) * R_F64((u32)(0x6b3740u));
    /* 006074ee: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074f1: fsubr dword ptr [eax + 0x40] */ ST(0) = R_F32((u32)(r_eax+0x40u)) - ST(0);
    /* 006074f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074f7: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 006074fa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006074fd: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00607500: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607503: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00607506: fimul dword ptr [edx + eax*8 + 0x14] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_edx+r_eax*8+0x14u));
    /* 0060750a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0060750c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060750f: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00607512: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607515: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 00607518: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060751b: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0060751e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607521: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00607524: fimul dword ptr [edx + eax*8 + 0x1c] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_edx+r_eax*8+0x1cu));
    /* 00607528: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0060752a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060752d: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00607530: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607533: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00607536: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x60753bu); f_00686cc0();
    /* 0060753b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060753e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607541: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 00607544: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x607549u); f_00686cc0();
    /* 00607549: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060754c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060754f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00607550: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00607553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00607554: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00607557: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0060755a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060755d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00607560: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00607562: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00607565: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x607567u); call_ind(t); }
L_00607567:; BB(0x00607567);
    /* 00607567: mov esp, ebp */ r_esp = r_ebp;
    /* 00607569: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060756a: ret  */ FN_RET(0x006072c0); r_esp += 4; return;
}

void f_006632a0(void) /* sciMotionHermite::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006632a0);
    /* 006632a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006632a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006632a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006632a5: push 0x6aca98 */ { u32 v = 0x6aca98u; r_esp -= 4; W32(r_esp, v); }
    /* 006632aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006632b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006632b1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006632b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006632b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006632bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006632bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006632bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006632c5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006632c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006632ca: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006632cd: lea ecx, [eax*4 - 4] */ r_ecx = (u32)(r_eax*4+0xfffffffcu);
    /* 006632d4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006632d7: mov eax, dword ptr [edx + ecx*8 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 006632db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006632dc: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006632df: lea edx, [ecx*4 - 4] */ r_edx = (u32)(r_ecx*4+0xfffffffcu);
    /* 006632e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006632e9: mov ecx, dword ptr [eax + edx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x8u));
    /* 006632ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006632ee: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006632f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006632f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006632f5: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x6632fau); f_00606e60();
    /* 006632fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00663304: mov dword ptr [eax], 0x6df6ec */ W32((u32)(r_eax), 0x6df6ecu);
    /* 0066330a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0066330d: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00663310: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00663312: mov edx, 8 */ r_edx = 0x8u;
    /* 00663317: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00663319: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0066331c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0066331e: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00663320: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00663321: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x663326u); f_00686d82();
    /* 00663326: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663329: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066332c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066332f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00663332: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 00663335: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00663338: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0066333b: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0066333e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066333f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00663342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663343: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00663346: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00663349: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066334a: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x66334fu); f_00686fde();
    /* 0066334f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663352: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00663355: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00663358: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0066335b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066335e: fldz  */ FPUSH(0.0);
    /* 00663360: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 00663363: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00663366: fldz  */ FPUSH(0.0);
    /* 00663368: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 0066336b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066336e: fldz  */ FPUSH(0.0);
    /* 00663370: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 00663373: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00663376: mov dword ptr [edx + 0x48], 0xa */ W32((u32)(r_edx+0x48u), 0xau);
    /* 0066337d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00663380: fild dword ptr [eax + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x48u)));
    /* 00663383: fld1  */ FPUSH(1.0);
    /* 00663385: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00663387: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066338a: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 0066338d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00663390: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00663397: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066339e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006633a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006633a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006633ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006633ac: mov esp, ebp */ r_esp = r_ebp;
    /* 006633ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006633af: ret 0xc */ FN_RET(0x006632a0); r_esp += 16; return;
}

void f_006633c0(void) /* sciMotionHermite::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006633c0);
    /* 006633c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006633c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006633c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006633c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006633c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006633cc: call 0x6633f0 */ r_esp -= 4; W32(r_esp, 0x6633d1u); f_006633f0();
    /* 006633d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006633d4: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006633d7: je 0x6633e5 */ if (fZ) goto L_006633e5;
L_006633d9:; BB(0x006633d9);
    /* 006633d9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006633dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006633dd: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x6633e2u); f_00686cae();
    /* 006633e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006633e5:; BB(0x006633e5);
    /* 006633e5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006633e8: mov esp, ebp */ r_esp = r_ebp;
    /* 006633ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006633eb: ret 4 */ FN_RET(0x006633c0); r_esp += 8; return;
}

void f_006633f0(void) /* sciMotionHermite::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006633f0);
    /* 006633f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006633f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006633f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006633f5: push 0x6acac8 */ { u32 v = 0x6acac8u; r_esp -= 4; W32(r_esp, v); }
    /* 006633fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00663400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00663401: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00663404: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00663409: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066340b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066340c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066340f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00663415: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00663418: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066341b: mov dword ptr [eax], 0x6df6ec */ W32((u32)(r_eax), 0x6df6ecu);
    /* 00663421: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00663428: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066342b: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066342f: je 0x663446 */ if (fZ) goto L_00663446;
L_00663431:; BB(0x00663431);
    /* 00663431: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00663434: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00663437: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0066343a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066343d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066343e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x663443u); f_00686cae();
    /* 00663443: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00663446:; BB(0x00663446);
    /* 00663446: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00663449: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 00663450: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00663457: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066345a: call 0x606ee0 */ r_esp -= 4; W32(r_esp, 0x66345fu); f_00606ee0();
    /* 0066345f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00663462: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00663469: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066346a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066346c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066346d: ret  */ FN_RET(0x006633f0); r_esp += 4; return;
}

