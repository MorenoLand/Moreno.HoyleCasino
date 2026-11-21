#include "protos.h"

void f_0069d0b0(void) /* sub_69D0B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d0b0);
    /* 0069d0b0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069d0b3: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0069d0b7: fmul qword ptr [0x6e57e8] */ ST(0) = ST(0) * R_F64((u32)(0x6e57e8u));
    /* 0069d0bd: fst qword ptr [esp] */ W_F64((u32)(r_esp), ST(0));
    /* 0069d0c1: fsub qword ptr [0x6b2c38] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c38u));
    /* 0069d0c7: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0069d0cb: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 0069d0cf: fistp dword ptr [esp + 0x14] */ W32((u32)(r_esp+0x14u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d0d3: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069d0d7: fld dword ptr [ecx*4 + 0x78fd6c] */ FPUSH(R_F32((u32)(r_ecx*4+0x78fd6cu)));
    /* 0069d0de: fsub dword ptr [ecx*4 + 0x78fd68] */ ST(0) = ST(0) - R_F32((u32)(r_ecx*4+0x78fd68u));
    /* 0069d0e5: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0069d0e9: lea eax, [ecx*4 + 0x78fd68] */ r_eax = (u32)(r_ecx*4+0x78fd68u);
    /* 0069d0f0: fsubr qword ptr [esp] */ ST(0) = R_F64((u32)(r_esp)) - ST(0);
    /* 0069d0f4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069d0f6: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0069d0f8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d0fb: ret  */ FN_RET(0x0069d0b0); r_esp += 4; return;
}

void f_0069d100(void) /* sub_69D100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d100);
    /* 0069d100: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069d103: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0069d107: fmul dword ptr [0x6e57f4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57f4u));
    /* 0069d10d: fsub dword ptr [0x6e57f0] */ ST(0) = ST(0) - R_F32((u32)(0x6e57f0u));
    /* 0069d113: fst qword ptr [esp] */ W_F64((u32)(r_esp), ST(0));
    /* 0069d117: fsub qword ptr [0x6b2c38] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c38u));
    /* 0069d11d: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0069d121: fld qword ptr [esp + 8] */ FPUSH(R_F64((u32)(r_esp+0x8u)));
    /* 0069d125: fistp dword ptr [esp + 0x14] */ W32((u32)(r_esp+0x14u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d129: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069d12d: fld dword ptr [ecx*4 + 0x78ff74] */ FPUSH(R_F32((u32)(r_ecx*4+0x78ff74u)));
    /* 0069d134: fsub dword ptr [ecx*4 + 0x78ff70] */ ST(0) = ST(0) - R_F32((u32)(r_ecx*4+0x78ff70u));
    /* 0069d13b: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0069d13f: lea eax, [ecx*4 + 0x78ff70] */ r_eax = (u32)(r_ecx*4+0x78ff70u);
    /* 0069d146: fsubr qword ptr [esp] */ ST(0) = R_F64((u32)(r_esp)) - ST(0);
    /* 0069d14a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069d14c: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0069d14e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d151: ret  */ FN_RET(0x0069d100); r_esp += 4; return;
}

void f_0069d160(void) /* sub_69D160 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d160);
    /* 0069d160: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0069d164: fld dword ptr [eax*4 + 0x790078] */ FPUSH(R_F32((u32)(r_eax*4+0x790078u)));
    /* 0069d16b: ret  */ FN_RET(0x0069d160); r_esp += 4; return;
}

void f_0069d170(void) /* sub_69D170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d170);
    /* 0069d170: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069d173: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0069d177: fmul dword ptr [0x6e57f8] */ ST(0) = ST(0) * R_F32((u32)(0x6e57f8u));
    /* 0069d17d: fsub dword ptr [0x6b3654] */ ST(0) = ST(0) - R_F32((u32)(0x6b3654u));
    /* 0069d183: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0069d187: fld qword ptr [esp] */ FPUSH(R_F64((u32)(r_esp)));
    /* 0069d18b: fistp dword ptr [esp + 0xc] */ W32((u32)(r_esp+0xcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0069d18f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069d193: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069d195: jge 0x69d1a1 */ if ((fS==fO)) goto L_0069d1a1;
L_0069d197:; BB(0x0069d197);
    /* 0069d197: fld dword ptr [0x6b3650] */ FPUSH(R_F32((u32)(0x6b3650u)));
    /* 0069d19d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d1a0: ret  */ FN_RET(0x0069d170); r_esp += 4; return;
L_0069d1a1:; BB(0x0069d1a1);
    /* 0069d1a1: cmp eax, 0x460 */ {  u32 a = r_eax; u32 b = 0x460u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d1a6: jl 0x69d1b2 */ if ((fS!=fO)) goto L_0069d1b2;
L_0069d1a8:; BB(0x0069d1a8);
    /* 0069d1a8: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 0069d1ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d1b1: ret  */ FN_RET(0x0069d170); r_esp += 4; return;
L_0069d1b2:; BB(0x0069d1b2);
    /* 0069d1b2: mov ecx, eax */ r_ecx = r_eax;
    /* 0069d1b4: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d1b7: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069d1ba: fld dword ptr [ecx*4 + 0x790190] */ FPUSH(R_F32((u32)(r_ecx*4+0x790190u)));
    /* 0069d1c1: fmul dword ptr [eax*4 + 0x790100] */ ST(0) = ST(0) * R_F32((u32)(r_eax*4+0x790100u));
    /* 0069d1c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d1cb: ret  */ FN_RET(0x0069d170); r_esp += 4; return;
}

void f_0069d1d0(void) /* sub_69D1D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d1d0);
    /* 0069d1d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d1d1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0069d1d5: mov ecx, esi */ r_ecx = r_esi;
    /* 0069d1d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069d1d9: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d1de: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0069d1e0: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0069d1e3: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0069d1e6: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0069d1e9: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0069d1ec: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x69d1f1u); f_006872fa();
    /* 0069d1f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d1f4: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0069d1f7: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0069d1fa: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 0069d1fd: mov dword ptr [esi + 0x10], 0x100 */ W32((u32)(r_esi+0x10u), 0x100u);
    /* 0069d204: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d205: ret  */ FN_RET(0x0069d1d0); r_esp += 4; return;
}

void f_0069d210(void) /* sub_69D210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d210);
    /* 0069d210: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d211: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069d212: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d213: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0069d217: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d218: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0069d21a: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0069d21d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d220: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d222: jl 0x69d24c */ if ((fS!=fO)) goto L_0069d24c;
L_0069d224:; BB(0x0069d224);
    /* 0069d224: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0069d227: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d22c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d22d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d22e: call 0x68744a */ r_esp -= 4; W32(r_esp, 0x69d233u); f_0068744a();
    /* 0069d233: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 0069d236: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0069d238: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d23b: add edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069d241: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d243: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0069d246: mov dword ptr [esi + 0x10], edi */ W32((u32)(r_esi+0x10u), r_edi);
    /* 0069d249: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
L_0069d24c:; BB(0x0069d24c);
    /* 0069d24c: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0069d250: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069d254: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 0069d257: mov edx, dword ptr [edi*4 + 0x790210] */ r_edx = R32((u32)(r_edi*4+0x790210u));
    /* 0069d25e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069d260: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d262: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0069d265: mov bl, al */ r_ebx = (r_ebx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 0069d267: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069d269: shl bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0069d26b: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0069d26d: or cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069d26f: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d272: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 0069d274: jl 0x69d2e0 */ if ((fS!=fO)) goto L_0069d2e0;
L_0069d276:; BB(0x0069d276);
    /* 0069d276: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 0069d279: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0069d27e: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d280: mov edx, eax */ r_edx = r_eax;
    /* 0069d282: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0069d284: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0069d287: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d28a: mov byte ptr [ecx + 1], dl */ W8((u32)(r_ecx+0x1u), (u8)r_edx);
    /* 0069d28d: jl 0x69d2e0 */ if ((fS!=fO)) goto L_0069d2e0;
L_0069d28f:; BB(0x0069d28f);
    /* 0069d28f: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 0069d292: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 0069d297: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d299: mov edx, eax */ r_edx = r_eax;
    /* 0069d29b: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0069d29d: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0069d2a0: cmp edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d2a3: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 0069d2a6: jl 0x69d2e0 */ if ((fS!=fO)) goto L_0069d2e0;
L_0069d2a8:; BB(0x0069d2a8);
    /* 0069d2a8: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 0069d2ab: mov ecx, 0x18 */ r_ecx = 0x18u;
    /* 0069d2b0: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d2b2: mov edx, eax */ r_edx = r_eax;
    /* 0069d2b4: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0069d2b6: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0069d2b9: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d2bc: mov byte ptr [ecx + 3], dl */ W8((u32)(r_ecx+0x3u), (u8)r_edx);
    /* 0069d2bf: jl 0x69d2e0 */ if ((fS!=fO)) goto L_0069d2e0;
L_0069d2c1:; BB(0x0069d2c1);
    /* 0069d2c1: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0069d2c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d2c6: je 0x69d2d9 */ if (fZ) goto L_0069d2d9;
L_0069d2c8:; BB(0x0069d2c8);
    /* 0069d2c8: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 0069d2cd: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d2cf: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0069d2d2: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0069d2d4: mov byte ptr [edx + 4], al */ W8((u32)(r_edx+0x4u), (u8)r_eax);
    /* 0069d2d7: jmp 0x69d2e0 */ goto L_0069d2e0;
L_0069d2d9:; BB(0x0069d2d9);
    /* 0069d2d9: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0069d2dc: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
L_0069d2e0:; BB(0x0069d2e0);
    /* 0069d2e0: mov eax, edi */ r_eax = r_edi;
    /* 0069d2e2: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0069d2e5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069d2e6: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069d2e9: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0069d2ec: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d2ee: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0069d2f0: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069d2f3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069d2f5: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d2f7: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0069d2fa: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0069d2fc: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 0069d2ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069d300: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d301: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069d302: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d303: ret  */ FN_RET(0x0069d210); r_esp += 4; return;
}

void f_0069d310(void) /* sub_69D310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d310);
    /* 0069d310: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0069d314: mov eax, 8 */ r_eax = 0x8u;
    /* 0069d319: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069d31c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d31f: jge 0x69d32d */ if ((fS==fO)) goto L_0069d32d;
L_0069d321:; BB(0x0069d321);
    /* 0069d321: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d322: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069d324: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d325: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69d32au); f_0069d210();
    /* 0069d32a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069d32d:; BB(0x0069d32d);
    /* 0069d32d: ret  */ FN_RET(0x0069d310); r_esp += 4; return;
}

void f_0069d330(void) /* sub_69D330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d330);
    /* 0069d330: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d331: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0069d335: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069d338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d339: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69d33eu); f_00687300();
    /* 0069d33e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d340: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069d343: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0069d345: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0069d348: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 0069d34b: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 0069d34e: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 0069d351: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d352: ret  */ FN_RET(0x0069d330); r_esp += 4; return;
}

void f_0069d360(void) /* sub_69D360 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d360);
    /* 0069d360: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0069d364: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d366: mov edx, eax */ r_edx = r_eax;
    /* 0069d368: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0069d36a: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0069d36d: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0069d370: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0069d373: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0069d376: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0069d37a: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0069d37d: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0069d380: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0069d384: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0069d387: ret  */ FN_RET(0x0069d360); r_esp += 4; return;
}

void f_0069d390(void) /* sub_69D390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d390);
    /* 0069d390: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0069d394: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0069d398: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d399: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069d39a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069d39c: mov ebp, dword ptr [edx*4 + 0x790210] */ r_ebp = R32((u32)(r_edx*4+0x790210u));
    /* 0069d3a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3a4: mov esi, dword ptr [ecx + 0x10] */ r_esi = R32((u32)(r_ecx+0x10u));
    /* 0069d3a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d3a8: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0069d3ab: lea ebx, [eax + 4] */ r_ebx = (u32)(r_eax+0x4u);
    /* 0069d3ae: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069d3b0: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d3b2: jl 0x69d3c6 */ if ((fS!=fO)) goto L_0069d3c6;
L_0069d3b4:; BB(0x0069d3b4);
    /* 0069d3b4: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 0069d3b7: shl esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0069d3ba: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d3bc: jle 0x69d3c6 */ if ((fZ||fS!=fO)) goto L_0069d3c6;
L_0069d3be:; BB(0x0069d3be);
    /* 0069d3be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069d3bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d3c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069d3c1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d3c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d3c5: ret  */ FN_RET(0x0069d390); r_esp += 4; return;
L_0069d3c6:; BB(0x0069d3c6);
    /* 0069d3c6: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 0069d3c9: mov cl, byte ptr [ecx + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4u))) & 0xffu);
    /* 0069d3cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069d3ce: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0069d3d0: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0069d3d2: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d3d5: jle 0x69d430 */ if ((fZ||fS!=fO)) goto L_0069d430;
L_0069d3d7:; BB(0x0069d3d7);
    /* 0069d3d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d3d9: mov cl, byte ptr [esi + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 0069d3dc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069d3de: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0069d3e3: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d3e5: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0069d3e7: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d3e9: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d3ec: jle 0x69d430 */ if ((fZ||fS!=fO)) goto L_0069d430;
L_0069d3ee:; BB(0x0069d3ee);
    /* 0069d3ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d3f0: mov cl, byte ptr [esi + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 0069d3f3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069d3f5: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 0069d3fa: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d3fc: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0069d3fe: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d400: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d403: jle 0x69d430 */ if ((fZ||fS!=fO)) goto L_0069d430;
L_0069d405:; BB(0x0069d405);
    /* 0069d405: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d407: mov cl, byte ptr [esi + 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 0069d40a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069d40c: mov ecx, 0x18 */ r_ecx = 0x18u;
    /* 0069d411: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d413: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0069d415: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069d417: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d41a: jle 0x69d430 */ if ((fZ||fS!=fO)) goto L_0069d430;
L_0069d41c:; BB(0x0069d41c);
    /* 0069d41c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d41e: je 0x69d430 */ if (fZ) goto L_0069d430;
L_0069d420:; BB(0x0069d420);
    /* 0069d420: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069d422: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 0069d427: mov dl, byte ptr [esi + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+0x4u))) & 0xffu);
    /* 0069d42a: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d42c: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069d42e: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0069d430:; BB(0x0069d430);
    /* 0069d430: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069d431: and eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069d433: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d434: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069d435: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d436: ret  */ FN_RET(0x0069d390); r_esp += 4; return;
}

void f_0069d440(void) /* sub_69D440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d440);
    /* 0069d440: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0069d444: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d445: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0069d449: add esi, dword ptr [ecx + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069d44c: mov eax, esi */ r_eax = r_esi;
    /* 0069d44e: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0069d451: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069d452: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069d455: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 0069d458: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d45a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0069d45d: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069d460: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069d462: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d463: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0069d466: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069d468: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069d46a: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0069d46c: ret  */ FN_RET(0x0069d440); r_esp += 4; return;
}

void f_0069d470(void) /* sub_69D470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d470);
    /* 0069d470: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069d471: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0069d475: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069d476: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d477: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0069d47b: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0069d47e: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0069d481: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069d482: mov eax, dword ptr [esi*4 + 0x790210] */ r_eax = R32((u32)(r_esi*4+0x790210u));
    /* 0069d489: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069d48b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069d48f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0069d491: lea edx, [eax + 4] */ r_edx = (u32)(r_eax+0x4u);
    /* 0069d494: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d496: jl 0x69d4a5 */ if ((fS!=fO)) goto L_0069d4a5;
L_0069d498:; BB(0x0069d498);
    /* 0069d498: lea eax, [esi + eax*8] */ r_eax = (u32)(r_esi+r_eax*8);
    /* 0069d49b: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0069d49e: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069d4a1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d4a3: jg 0x69d517 */ if ((!fZ&&fS==fO)) goto L_0069d517;
L_0069d4a5:; BB(0x0069d4a5);
    /* 0069d4a5: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0069d4a8: mov cl, byte ptr [ebx + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx+0x4u))) & 0xffu);
    /* 0069d4ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069d4ad: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0069d4af: mov edi, edx */ r_edi = r_edx;
    /* 0069d4b1: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0069d4b3: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d4b6: jle 0x69d513 */ if ((fZ||fS!=fO)) goto L_0069d513;
L_0069d4b8:; BB(0x0069d4b8);
    /* 0069d4b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d4ba: mov cl, byte ptr [eax + 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0069d4bd: mov edx, ecx */ r_edx = r_ecx;
    /* 0069d4bf: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0069d4c4: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d4c6: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069d4c8: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0069d4ca: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d4cd: jle 0x69d513 */ if ((fZ||fS!=fO)) goto L_0069d513;
L_0069d4cf:; BB(0x0069d4cf);
    /* 0069d4cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d4d1: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 0069d4d4: mov edx, ecx */ r_edx = r_ecx;
    /* 0069d4d6: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 0069d4db: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d4dd: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069d4df: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0069d4e1: cmp esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d4e4: jle 0x69d513 */ if ((fZ||fS!=fO)) goto L_0069d513;
L_0069d4e6:; BB(0x0069d4e6);
    /* 0069d4e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d4e8: mov cl, byte ptr [eax + 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 0069d4eb: mov edx, ecx */ r_edx = r_ecx;
    /* 0069d4ed: mov ecx, 0x18 */ r_ecx = 0x18u;
    /* 0069d4f2: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d4f4: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069d4f6: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0069d4f8: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069d4fb: jle 0x69d513 */ if ((fZ||fS!=fO)) goto L_0069d513;
L_0069d4fd:; BB(0x0069d4fd);
    /* 0069d4fd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069d4ff: je 0x69d513 */ if (fZ) goto L_0069d513;
L_0069d501:; BB(0x0069d501);
    /* 0069d501: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d503: mov cl, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 0069d506: mov edx, ecx */ r_edx = r_ecx;
    /* 0069d508: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 0069d50d: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069d50f: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069d511: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_0069d513:; BB(0x0069d513);
    /* 0069d513: and edi, dword ptr [esp + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
L_0069d517:; BB(0x0069d517);
    /* 0069d517: mov eax, esi */ r_eax = r_esi;
    /* 0069d519: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 0069d51c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069d51d: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069d520: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0069d523: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d525: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 0069d528: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069d52b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069d52d: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 0069d530: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0069d532: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d534: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0069d536: mov eax, edi */ r_eax = r_edi;
    /* 0069d538: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069d539: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069d53a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069d53b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069d53c: ret  */ FN_RET(0x0069d470); r_esp += 4; return;
}

void f_0069d540(void) /* sub_69D540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d540);
    /* 0069d540: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0069d544: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0069d547: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d54a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069d54b: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069d54e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d550: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069d552: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069d555: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069d557: ret  */ FN_RET(0x0069d540); r_esp += 4; return;
}

void f_0069d560(void) /* ClosePrinter */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d560);
    /* 0069d560: jmp dword ptr [0x6b24a4] */ { u32 t = R32((u32)(0x6b24a4u)); call_ind(t); return; }
}

void f_0069d566(void) /* DocumentPropertiesA */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d566);
    /* 0069d566: jmp dword ptr [0x6b24a0] */ { u32 t = R32((u32)(0x6b24a0u)); call_ind(t); return; }
}

void f_0069d56c(void) /* OpenPrinterA */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d56c);
    /* 0069d56c: jmp dword ptr [0x6b24a8] */ { u32 t = R32((u32)(0x6b24a8u)); call_ind(t); return; }
}

void f_0069d572(void) /* ldexp */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d572);
    /* 0069d572: jmp dword ptr [0x6b2200] */ { u32 t = R32((u32)(0x6b2200u)); call_ind(t); return; }
}

void f_0069d578(void) /* _CIpow */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d578);
    /* 0069d578: jmp dword ptr [0x6b2204] */ { u32 t = R32((u32)(0x6b2204u)); call_ind(t); return; }
}

void f_0069d57e(void) /* frexp */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d57e);
    /* 0069d57e: jmp dword ptr [0x6b2208] */ { u32 t = R32((u32)(0x6b2208u)); call_ind(t); return; }
}

void f_0069d590(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d590);
    /* 0069d590: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0069d593: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_0069d6a0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d6a0);
    /* 0069d6a0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069d6a3: jmp 0x5cc230 */ f_005cc230(); return;
}

void f_0069d730(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d730);
    /* 0069d730: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0069d733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d734: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x69d739u); f_00686cae();
    /* 0069d739: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069d73a: ret  */ FN_RET(0x0069d730); r_esp += 4; return;
}

void f_0069d760(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d760);
    /* 0069d760: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0069d763: jmp 0x5d7bd0 */ f_005d7bd0(); return;
}

void f_0069d850(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d850);
    /* 0069d850: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069d853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d854: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x69d859u); f_00686cae();
    /* 0069d859: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069d85a: ret  */ FN_RET(0x0069d850); r_esp += 4; return;
}

void f_0069d880(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d880);
    /* 0069d880: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069d883: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069d884: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x69d889u); f_00686cae();
    /* 0069d889: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069d88a: ret  */ FN_RET(0x0069d880); r_esp += 4; return;
}

void f_0069d8d0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d8d0);
    /* 0069d8d0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069d8d3: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_0069d970(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069d970);
    /* 0069d970: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0069d973: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_0069da70(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069da70);
    /* 0069da70: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0069da73: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_0069db00(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069db00);
    /* 0069db00: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069db03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069db04: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x69db09u); f_00686cae();
    /* 0069db09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069db0a: ret  */ FN_RET(0x0069db00); r_esp += 4; return;
}

void f_0069dc50(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069dc50);
    /* 0069dc50: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069dc53: jmp 0x5fc150 */ f_005fc150(); return;
}

void f_0069dcf0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069dcf0);
    /* 0069dcf0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069dcf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069dcf4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x69dcf9u); f_00686cae();
    /* 0069dcf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069dcfa: ret  */ FN_RET(0x0069dcf0); r_esp += 4; return;
}

void f_0069dd70(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069dd70);
    /* 0069dd70: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069dd73: jmp 0x5d7bd0 */ f_005d7bd0(); return;
}

void f_0069de40(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069de40);
    /* 0069de40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069de43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069de44: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x69de49u); f_00686cae();
    /* 0069de49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069de4a: ret  */ FN_RET(0x0069de40); r_esp += 4; return;
}

void f_0069de90(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069de90);
    /* 0069de90: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0069de93: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_0069def0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069def0);
    /* 0069def0: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0069def3: jmp 0x5e9e40 */ f_005e9e40(); return;
}

void f_0069df40(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0069df40);
    /* 0069df40: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 0069df46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069df47: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x69df4cu); f_00686cae();
    /* 0069df4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069df4d: ret  */ FN_RET(0x0069df40); r_esp += 4; return;
}

