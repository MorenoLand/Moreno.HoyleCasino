#include "protos.h"

void f_004b7670(void) /* sub_4B7670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b7670);
    /* 004b7670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b7671: mov ebp, esp */ r_ebp = r_esp;
    /* 004b7673: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b7676: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b7677: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b767d: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4b7682u); f_0047e420();
    /* 004b7682: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004b7685: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004b768b: mov word ptr [ebp - 0x38], 0 */ W16((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 004b7691: jmp 0x4b769f */ goto L_004b769f;
L_004b7693:; BB(0x004b7693);
    /* 004b7693: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 004b7697: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b769b: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
L_004b769f:; BB(0x004b769f);
    /* 004b769f: movsx esi, word ptr [ebp - 0x38] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004b76a3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b76a9: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4b76aeu); f_0047f950();
    /* 004b76ae: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b76b0: jge 0x4b774a */ if ((fS==fO)) goto L_004b774a;
L_004b76b6:; BB(0x004b76b6);
    /* 004b76b6: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004b76ba: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b76bd: jne 0x4b76c1 */ if (!fZ) goto L_004b76c1;
L_004b76bf:; BB(0x004b76bf);
    /* 004b76bf: jmp 0x4b7693 */ goto L_004b7693;
L_004b76c1:; BB(0x004b76c1);
    /* 004b76c1: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004b76c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b76c6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b76cc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b76d1u); f_0047e390();
    /* 004b76d1: mov ecx, eax */ r_ecx = r_eax;
    /* 004b76d3: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4b76d8u); f_004c7010();
    /* 004b76d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b76db: jne 0x4b7745 */ if (!fZ) goto L_004b7745;
L_004b76dd:; BB(0x004b76dd);
    /* 004b76dd: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004b76e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b76e2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b76e8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b76edu); f_0047e390();
    /* 004b76ed: mov ecx, eax */ r_ecx = r_eax;
    /* 004b76ef: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4b76f4u); f_004c7050();
    /* 004b76f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b76f5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b76fb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b76fe: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x4b7703u); f_004f69e0();
    /* 004b7703: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004b7706: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b770a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b770c: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 004b7710: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004b7714: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7715: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b771b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4b7720u); f_0047e390();
    /* 004b7720: mov ecx, eax */ r_ecx = r_eax;
    /* 004b7722: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4b7727u); f_004c7050();
    /* 004b7727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7728: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b772e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b7731: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x4b7736u); f_004f6880();
    /* 004b7736: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004b7739: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b773b: jle 0x4b7745 */ if ((fZ||fS!=fO)) goto L_004b7745;
L_004b773d:; BB(0x004b773d);
    /* 004b773d: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004b7743: jmp 0x4b774a */ goto L_004b774a;
L_004b7745:; BB(0x004b7745);
    /* 004b7745: jmp 0x4b7693 */ goto L_004b7693;
L_004b774a:; BB(0x004b774a);
    /* 004b774a: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004b7750: call 0x4f0ac0 */ r_esp -= 4; W32(r_esp, 0x4b7755u); f_004f0ac0();
    /* 004b7755: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004b7758: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b775b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b775c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7761u); f_0062fbf0();
    /* 004b7761: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7764: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 004b7768: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b776b: movsx ecx, word ptr [eax*2 + 0x791798] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791798u));
    /* 004b7773: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b7777: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004b777b: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b777e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b7780: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7783: jle 0x4b77ba */ if ((fZ||fS!=fO)) goto L_004b77ba;
L_004b7785:; BB(0x004b7785);
    /* 004b7785: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b7788: movsx edx, word ptr [ecx*2 + 0x791798] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791798u));
    /* 004b7790: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004b7794: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004b7798: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004b779b: lea edx, [edx + eax - 0xa] */ r_edx = (u32)(r_edx+r_eax+0xfffffff6u);
    /* 004b779f: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004b77a2: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004b77a5: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b77ab: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b77ae: fadd qword ptr [eax*8 + 0x791d90] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x791d90u));
    /* 004b77b5: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004b77b8: jmp 0x4b77c7 */ goto L_004b77c7;
L_004b77ba:; BB(0x004b77ba);
    /* 004b77ba: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b77bd: fld qword ptr [ecx*8 + 0x791d90] */ FPUSH(R_F64((u32)(r_ecx*8+0x791d90u)));
    /* 004b77c4: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_004b77c7:; BB(0x004b77c7);
    /* 004b77c7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004b77c9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004b77cf: call 0x4f1900 */ r_esp -= 4; W32(r_esp, 0x4b77d4u); f_004f1900();
    /* 004b77d4: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 004b77d8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004b77da: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004b77e0: call 0x4f1900 */ r_esp -= 4; W32(r_esp, 0x4b77e5u); f_004f1900();
    /* 004b77e5: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 004b77e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004b77eb: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004b77f1: call 0x4f1900 */ r_esp -= 4; W32(r_esp, 0x4b77f6u); f_004f1900();
    /* 004b77f6: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 004b77fa: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004b7800: call 0x4f1bf0 */ r_esp -= 4; W32(r_esp, 0x4b7805u); f_004f1bf0();
    /* 004b7805: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004b7809: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b780d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b780e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7813u); f_0062fbf0();
    /* 004b7813: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7816: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b7819: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 004b781c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b7822: fld1  */ FPUSH(1.0);
    /* 004b7824: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b7826: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b782a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b782b: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 004b782e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7833u); f_0062fbf0();
    /* 004b7833: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7836: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b7839: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 004b783c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b7842: fsubr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) - ST(0);
    /* 004b7845: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 004b7848: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004b784b: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b784f: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004b7852: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 004b7855: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b785b: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b785e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b7861: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004b7868: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b786a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b786d: jp 0x4b7888 */ if (fP) goto L_004b7888;
L_004b786f:; BB(0x004b786f);
    /* 004b786f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b7872: mov word ptr [eax*2 + 0x791768], 5 */ W16((u32)(r_eax*2+0x791768u), 0x5u);
    /* 004b787c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b787e: jmp 0x4b7992 */ goto L_004b7992;
L_004b7888:; BB(0x004b7888);
    /* 004b7888: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004b788c: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004b788f: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 004b7892: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b7898: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b789b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b789e: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004b78a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b78a7: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b78aa: jp 0x4b78c5 */ if (fP) goto L_004b78c5;
L_004b78ac:; BB(0x004b78ac);
    /* 004b78ac: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b78af: mov word ptr [eax*2 + 0x791768], 4 */ W16((u32)(r_eax*2+0x791768u), 0x4u);
    /* 004b78b9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b78bb: jmp 0x4b7992 */ goto L_004b7992;
L_004b78c5:; BB(0x004b78c5);
    /* 004b78c5: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b78c9: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004b78cc: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 004b78cf: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b78d5: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b78d8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b78db: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004b78e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b78e4: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b78e7: jp 0x4b7902 */ if (fP) goto L_004b7902;
L_004b78e9:; BB(0x004b78e9);
    /* 004b78e9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b78ec: mov word ptr [eax*2 + 0x791768], 3 */ W16((u32)(r_eax*2+0x791768u), 0x3u);
    /* 004b78f6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b78f8: jmp 0x4b7992 */ goto L_004b7992;
L_004b7902:; BB(0x004b7902);
    /* 004b7902: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b7906: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004b7909: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 004b790c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b7912: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b7915: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004b7918: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b791a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b791d: jp 0x4b7932 */ if (fP) goto L_004b7932;
L_004b791f:; BB(0x004b791f);
    /* 004b791f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b7922: mov word ptr [edx*2 + 0x791768], 0xc */ W16((u32)(r_edx*2+0x791768u), 0xcu);
    /* 004b792c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b792e: jmp 0x4b7992 */ goto L_004b7992;
L_004b7932:; BB(0x004b7932);
    /* 004b7932: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004b7936: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004b7939: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 004b793c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b7942: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b7945: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004b7948: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b794a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b794d: jp 0x4b7962 */ if (fP) goto L_004b7962;
L_004b794f:; BB(0x004b794f);
    /* 004b794f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b7952: mov word ptr [ecx*2 + 0x791768], 0xb */ W16((u32)(r_ecx*2+0x791768u), 0xbu);
    /* 004b795c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b795e: jmp 0x4b7992 */ goto L_004b7992;
L_004b7962:; BB(0x004b7962);
    /* 004b7962: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b7966: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004b7969: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 004b796c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b7972: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b7975: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004b7978: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b797a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b797d: jp 0x4b7990 */ if (fP) goto L_004b7990;
L_004b797f:; BB(0x004b797f);
    /* 004b797f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b7982: mov word ptr [eax*2 + 0x791768], 0xa */ W16((u32)(r_eax*2+0x791768u), 0xau);
    /* 004b798c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b798e: jmp 0x4b7992 */ goto L_004b7992;
L_004b7990:; BB(0x004b7990);
    /* 004b7990: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004b7992:; BB(0x004b7992);
    /* 004b7992: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b7993: mov esp, ebp */ r_esp = r_ebp;
    /* 004b7995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b7996: ret  */ FN_RET(0x004b7670); r_esp += 4; return;
}

void f_004b79a0(void) /* sub_4B79A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b79a0);
    /* 004b79a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b79a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b79a3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b79a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004b79a7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b79ad: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4b79b2u); f_0047e420();
    /* 004b79b2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004b79b5: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b79b7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b79bcu); f_0062fbf0();
    /* 004b79bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b79bf: mov esi, eax */ r_esi = r_eax;
    /* 004b79c1: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b79c3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b79c8u); f_0062fbf0();
    /* 004b79c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b79cb: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 004b79cf: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b79d1: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b79d6u); f_0062fbf0();
    /* 004b79d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b79d9: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b79db: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b79dd: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b79e2u); f_0062fbf0();
    /* 004b79e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b79e5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b79e7: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 004b79ea: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 004b79ed: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004b79f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b79f6: fstp qword ptr [eax*8 + 0x791dd0] */ W_F64((u32)(r_eax*8+0x791dd0u), ST(0)); FPOP();
    /* 004b79fd: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b79ff: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7a04u); f_0062fbf0();
    /* 004b7a04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7a07: mov esi, eax */ r_esi = r_eax;
    /* 004b7a09: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a0b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7a10u); f_0062fbf0();
    /* 004b7a10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7a13: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 004b7a17: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a19: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7a1eu); f_0062fbf0();
    /* 004b7a1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7a21: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b7a23: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a25: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7a2au); f_0062fbf0();
    /* 004b7a2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7a2d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b7a2f: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 004b7a32: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 004b7a35: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004b7a3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b7a3e: fstp qword ptr [ecx*8 + 0x791520] */ W_F64((u32)(r_ecx*8+0x791520u), ST(0)); FPOP();
    /* 004b7a45: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004b7a4b: jmp 0x4b7a59 */ goto L_004b7a59;
L_004b7a4d:; BB(0x004b7a4d);
    /* 004b7a4d: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 004b7a51: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004b7a55: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_004b7a59:; BB(0x004b7a59);
    /* 004b7a59: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b7a5d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7a63: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4b7a68u); f_0047f950();
    /* 004b7a68: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7a6a: jge 0x4b7ab1 */ if ((fS==fO)) goto L_004b7ab1;
L_004b7a6c:; BB(0x004b7a6c);
    /* 004b7a6c: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a6e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7a73u); f_0062fbf0();
    /* 004b7a73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7a76: mov esi, eax */ r_esi = r_eax;
    /* 004b7a78: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a7a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7a7fu); f_0062fbf0();
    /* 004b7a7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7a82: lea esi, [esi + eax + 0x19] */ r_esi = (u32)(r_esi+r_eax+0x19u);
    /* 004b7a86: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004b7a88: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b7a8du); f_0062fbf0();
    /* 004b7a8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b7a90: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b7a92: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 004b7a95: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004b7a98: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004b7a9e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004b7aa1: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004b7aa4: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004b7aa8: fstp qword ptr [eax + ecx*8 + 0x791ae0] */ W_F64((u32)(r_eax+r_ecx*8+0x791ae0u), ST(0)); FPOP();
    /* 004b7aaf: jmp 0x4b7a4d */ goto L_004b7a4d;
L_004b7ab1:; BB(0x004b7ab1);
    /* 004b7ab1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b7ab2: mov esp, ebp */ r_esp = r_ebp;
    /* 004b7ab4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b7ab5: ret  */ FN_RET(0x004b79a0); r_esp += 4; return;
}

void f_004b7ac0(void) /* sub_4B7AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b7ac0);
    /* 004b7ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b7ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 004b7ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7ac4: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004b7ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b7ac9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004b7acf: call 0x4f0870 */ r_esp -= 4; W32(r_esp, 0x4b7ad4u); f_004f0870();
    /* 004b7ad4: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004b7ad8: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7adc: jne 0x4b7b0d */ if (!fZ) goto L_004b7b0d;
L_004b7ade:; BB(0x004b7ade);
    /* 004b7ade: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7ae4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b7ae7: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4b7aecu); f_004f6640();
    /* 004b7aec: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004b7aef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7af1: je 0x4b7b0d */ if (fZ) goto L_004b7b0d;
L_004b7af3:; BB(0x004b7af3);
    /* 004b7af3: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b7af7: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b7afb: mov eax, 0x64 */ r_eax = 0x64u;
    /* 004b7b00: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b7b02: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004b7b03: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004b7b05: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004b7b07: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b7b09: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004b7b0d:; BB(0x004b7b0d);
    /* 004b7b0d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004b7b11: mov esp, ebp */ r_esp = r_ebp;
    /* 004b7b13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b7b14: ret  */ FN_RET(0x004b7ac0); r_esp += 4; return;
}

void f_004b7d90(void) /* sub_4B7D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004b7d90);
    /* 004b7d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b7d91: mov ebp, esp */ r_ebp = r_esp;
    /* 004b7d93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7d99: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4b7d9eu); f_0047e190();
    /* 004b7d9e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7da1: jne 0x4b7db8 */ if (!fZ) goto L_004b7db8;
L_004b7da3:; BB(0x004b7da3);
    /* 004b7da3: cmp dword ptr [0x791e74], 1 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7daa: jle 0x4b7db2 */ if ((fZ||fS!=fO)) goto L_004b7db2;
L_004b7dac:; BB(0x004b7dac);
    /* 004b7dac: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b7dae: jmp 0x4b7dee */ goto L_004b7dee;
L_004b7db2:; BB(0x004b7db2);
    /* 004b7db2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004b7db4: jmp 0x4b7dee */ goto L_004b7dee;
L_004b7db8:; BB(0x004b7db8);
    /* 004b7db8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004b7dbe: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4b7dc3u); f_0047e190();
    /* 004b7dc3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b7dc6: jne 0x4b7ddd */ if (!fZ) goto L_004b7ddd;
L_004b7dc8:; BB(0x004b7dc8);
    /* 004b7dc8: cmp dword ptr [0x791e74], 2 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7dcf: jle 0x4b7dd7 */ if ((fZ||fS!=fO)) goto L_004b7dd7;
L_004b7dd1:; BB(0x004b7dd1);
    /* 004b7dd1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b7dd3: jmp 0x4b7dee */ goto L_004b7dee;
L_004b7dd7:; BB(0x004b7dd7);
    /* 004b7dd7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004b7dd9: jmp 0x4b7dee */ goto L_004b7dee;
L_004b7ddd:; BB(0x004b7ddd);
    /* 004b7ddd: cmp dword ptr [0x791e74], 3 */ {  u32 a = R32((u32)(0x791e74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7de4: jle 0x4b7dec */ if ((fZ||fS!=fO)) goto L_004b7dec;
L_004b7de6:; BB(0x004b7de6);
    /* 004b7de6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b7de8: jmp 0x4b7dee */ goto L_004b7dee;
L_004b7dec:; BB(0x004b7dec);
    /* 004b7dec: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004b7dee:; BB(0x004b7dee);
    /* 004b7dee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b7def: ret  */ FN_RET(0x004b7d90); r_esp += 4; return;
}

