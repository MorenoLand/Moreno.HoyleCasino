#include "protos.h"

void f_004a63a0(void) /* sub_4A63A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a63a0);
    /* 004a63a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a63a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a63a3: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a63a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a63a7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a63ad: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4a63b2u); f_0047e420();
    /* 004a63b2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004a63b5: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004a63bb: mov word ptr [ebp - 0x38], 0 */ W16((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 004a63c1: jmp 0x4a63cf */ goto L_004a63cf;
L_004a63c3:; BB(0x004a63c3);
    /* 004a63c3: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 004a63c7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a63cb: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
L_004a63cf:; BB(0x004a63cf);
    /* 004a63cf: movsx esi, word ptr [ebp - 0x38] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a63d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a63d9: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a63deu); f_0047f950();
    /* 004a63de: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a63e0: jge 0x4a647a */ if ((fS==fO)) goto L_004a647a;
L_004a63e6:; BB(0x004a63e6);
    /* 004a63e6: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a63ea: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a63ed: jne 0x4a63f1 */ if (!fZ) goto L_004a63f1;
L_004a63ef:; BB(0x004a63ef);
    /* 004a63ef: jmp 0x4a63c3 */ goto L_004a63c3;
L_004a63f1:; BB(0x004a63f1);
    /* 004a63f1: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a63f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a63f6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a63fc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a6401u); f_0047e390();
    /* 004a6401: mov ecx, eax */ r_ecx = r_eax;
    /* 004a6403: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4a6408u); f_004c7010();
    /* 004a6408: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a640b: jne 0x4a6475 */ if (!fZ) goto L_004a6475;
L_004a640d:; BB(0x004a640d);
    /* 004a640d: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a6411: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6412: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a6418: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a641du); f_0047e390();
    /* 004a641d: mov ecx, eax */ r_ecx = r_eax;
    /* 004a641f: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a6424u); f_004c7050();
    /* 004a6424: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6425: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a642b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a642e: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x4a6433u); f_004f69e0();
    /* 004a6433: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6436: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a643a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a643c: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 004a6440: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a6444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6445: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a644b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a6450u); f_0047e390();
    /* 004a6450: mov ecx, eax */ r_ecx = r_eax;
    /* 004a6452: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a6457u); f_004c7050();
    /* 004a6457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6458: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a645e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6461: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x4a6466u); f_004f6880();
    /* 004a6466: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6469: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a646b: jle 0x4a6475 */ if ((fZ||fS!=fO)) goto L_004a6475;
L_004a646d:; BB(0x004a646d);
    /* 004a646d: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004a6473: jmp 0x4a647a */ goto L_004a647a;
L_004a6475:; BB(0x004a6475);
    /* 004a6475: jmp 0x4a63c3 */ goto L_004a63c3;
L_004a647a:; BB(0x004a647a);
    /* 004a647a: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6480: call 0x4d29a0 */ r_esp -= 4; W32(r_esp, 0x4a6485u); f_004d29a0();
    /* 004a6485: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6488: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a648b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a648c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6491u); f_0062fbf0();
    /* 004a6491: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6494: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a6497: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 004a649b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a649e: movsx ecx, word ptr [eax*2 + 0x791798] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791798u));
    /* 004a64a6: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a64aa: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a64ae: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a64b1: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a64b3: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a64b6: jle 0x4a64ed */ if ((fZ||fS!=fO)) goto L_004a64ed;
L_004a64b8:; BB(0x004a64b8);
    /* 004a64b8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a64bb: movsx edx, word ptr [ecx*2 + 0x791798] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791798u));
    /* 004a64c3: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a64c7: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a64cb: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a64ce: lea edx, [edx + eax - 0xa] */ r_edx = (u32)(r_edx+r_eax+0xfffffff6u);
    /* 004a64d2: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004a64d5: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004a64d8: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a64de: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a64e1: fadd qword ptr [eax*8 + 0x791d90] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x791d90u));
    /* 004a64e8: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004a64eb: jmp 0x4a64fa */ goto L_004a64fa;
L_004a64ed:; BB(0x004a64ed);
    /* 004a64ed: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a64f0: fld qword ptr [ecx*8 + 0x791d90] */ FPUSH(R_F64((u32)(r_ecx*8+0x791d90u)));
    /* 004a64f7: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_004a64fa:; BB(0x004a64fa);
    /* 004a64fa: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a64fc: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6502: call 0x4d2ae0 */ r_esp -= 4; W32(r_esp, 0x4a6507u); f_004d2ae0();
    /* 004a6507: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 004a650b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a650d: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6513: call 0x4d2ae0 */ r_esp -= 4; W32(r_esp, 0x4a6518u); f_004d2ae0();
    /* 004a6518: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 004a651c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a651e: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6524: call 0x4d2ae0 */ r_esp -= 4; W32(r_esp, 0x4a6529u); f_004d2ae0();
    /* 004a6529: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 004a652d: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6533: call 0x4d2dd0 */ r_esp -= 4; W32(r_esp, 0x4a6538u); f_004d2dd0();
    /* 004a6538: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004a653c: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a6540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6541: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6546u); f_0062fbf0();
    /* 004a6546: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6549: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004a654c: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 004a654f: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a6555: fld1  */ FPUSH(1.0);
    /* 004a6557: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a6559: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a655d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a655e: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 004a6561: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6566u); f_0062fbf0();
    /* 004a6566: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6569: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004a656c: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 004a656f: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a6575: fsubr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) - ST(0);
    /* 004a6578: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 004a657b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004a657e: movsx esi, word ptr [ebp - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a6582: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a6588: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a658du); f_0047ce60();
    /* 004a658d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a658e: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6592: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a6595: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6596: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a659c: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x4a65a1u); f_004c6f90();
    /* 004a65a1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a65a3: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 004a65a6: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 004a65a9: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a65af: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a65b2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a65b5: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004a65bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a65be: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a65c1: jp 0x4a65dc */ if (fP) goto L_004a65dc;
L_004a65c3:; BB(0x004a65c3);
    /* 004a65c3: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a65c6: mov word ptr [eax*2 + 0x791768], 5 */ W16((u32)(r_eax*2+0x791768u), 0x5u);
    /* 004a65d0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a65d2: jmp 0x4a674f */ goto L_004a674f;
L_004a65dc:; BB(0x004a65dc);
    /* 004a65dc: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004a65e0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a65e6: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a65ebu); f_0047ce60();
    /* 004a65eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a65ec: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a65f0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a65f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a65f4: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a65fa: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x4a65ffu); f_004c6f90();
    /* 004a65ff: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a6601: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 004a6604: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 004a6607: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a660d: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a6610: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a6613: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004a661a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a661c: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a661f: jp 0x4a663a */ if (fP) goto L_004a663a;
L_004a6621:; BB(0x004a6621);
    /* 004a6621: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a6624: mov word ptr [eax*2 + 0x791768], 4 */ W16((u32)(r_eax*2+0x791768u), 0x4u);
    /* 004a662e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a6630: jmp 0x4a674f */ goto L_004a674f;
L_004a663a:; BB(0x004a663a);
    /* 004a663a: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a663e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a6644: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a6649u); f_0047ce60();
    /* 004a6649: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a664a: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a664e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a6651: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6652: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6658: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x4a665du); f_004c6f90();
    /* 004a665d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a665f: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 004a6662: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 004a6665: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a666b: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a666e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a6671: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004a6678: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a667a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a667d: jp 0x4a6698 */ if (fP) goto L_004a6698;
L_004a667f:; BB(0x004a667f);
    /* 004a667f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a6682: mov word ptr [eax*2 + 0x791768], 3 */ W16((u32)(r_eax*2+0x791768u), 0x3u);
    /* 004a668c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a668e: jmp 0x4a674f */ goto L_004a674f;
L_004a6698:; BB(0x004a6698);
    /* 004a6698: movsx esi, word ptr [ebp - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a669c: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a66a2: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x4a66a7u); f_004c6fd0();
    /* 004a66a7: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a66a9: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 004a66ac: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 004a66af: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a66b5: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a66b8: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004a66bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a66bd: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a66c0: jp 0x4a66d5 */ if (fP) goto L_004a66d5;
L_004a66c2:; BB(0x004a66c2);
    /* 004a66c2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a66c5: mov word ptr [ecx*2 + 0x791768], 0xc */ W16((u32)(r_ecx*2+0x791768u), 0xcu);
    /* 004a66cf: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a66d1: jmp 0x4a674f */ goto L_004a674f;
L_004a66d5:; BB(0x004a66d5);
    /* 004a66d5: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004a66d9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a66df: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x4a66e4u); f_004c6fd0();
    /* 004a66e4: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a66e6: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 004a66e9: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 004a66ec: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a66f2: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a66f5: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004a66f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a66fa: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a66fd: jp 0x4a6712 */ if (fP) goto L_004a6712;
L_004a66ff:; BB(0x004a66ff);
    /* 004a66ff: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a6702: mov word ptr [edx*2 + 0x791768], 0xb */ W16((u32)(r_edx*2+0x791768u), 0xbu);
    /* 004a670c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a670e: jmp 0x4a674f */ goto L_004a674f;
L_004a6712:; BB(0x004a6712);
    /* 004a6712: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a6716: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a671c: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x4a6721u); f_004c6fd0();
    /* 004a6721: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a6723: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 004a6726: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 004a6729: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a672f: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a6732: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004a6735: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a6737: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a673a: jp 0x4a674d */ if (fP) goto L_004a674d;
L_004a673c:; BB(0x004a673c);
    /* 004a673c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a673f: mov word ptr [eax*2 + 0x791768], 0xa */ W16((u32)(r_eax*2+0x791768u), 0xau);
    /* 004a6749: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a674b: jmp 0x4a674f */ goto L_004a674f;
L_004a674d:; BB(0x004a674d);
    /* 004a674d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004a674f:; BB(0x004a674f);
    /* 004a674f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a6750: mov esp, ebp */ r_esp = r_ebp;
    /* 004a6752: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a6753: ret  */ FN_RET(0x004a63a0); r_esp += 4; return;
}

void f_004a6810(void) /* sub_4A6810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a6810);
    /* 004a6810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a6811: mov ebp, esp */ r_ebp = r_esp;
    /* 004a6813: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a6815: push 0x6a121c */ { u32 v = 0x6a121cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a681a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a6820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6821: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a6824: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a6825: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004a682a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a682c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a682d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004a6830: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004a6836: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a683c: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4a6841u); f_0047e420();
    /* 004a6841: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004a6844: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6847: movsx ecx, word ptr [eax*2 + 0x791d80] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791d80u));
    /* 004a684f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6851: je 0x4a6e48 */ if (fZ) goto L_004a6e48;
L_004a6857:; BB(0x004a6857);
    /* 004a6857: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a685d: call 0x4d56d0 */ r_esp -= 4; W32(r_esp, 0x4a6862u); f_004d56d0();
    /* 004a6862: mov word ptr [ebp - 0x50], ax */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_eax);
    /* 004a6866: movsx edx, word ptr [ebp - 0x50] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 004a686a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a686b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6870u); f_0062fbf0();
    /* 004a6870: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6873: mov esi, eax */ r_esi = r_eax;
    /* 004a6875: movsx eax, word ptr [ebp - 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 004a6879: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a687a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a687fu); f_0062fbf0();
    /* 004a687f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6882: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a6884: mov eax, esi */ r_eax = r_esi;
    /* 004a6886: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a6887: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a6889: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004a688b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a688e: mov word ptr [ecx*2 + 0x791798], ax */ W16((u32)(r_ecx*2+0x791798u), (u16)r_eax);
    /* 004a6896: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 004a6899: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a689a: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a68a0: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a68a5u); f_004c7c40();
    /* 004a68a5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a68ac: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a68af: mov word ptr [eax*2 + 0x791d80], 0 */ W16((u32)(r_eax*2+0x791d80u), 0x0u);
    /* 004a68b9: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 004a68bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a68bd: lea edx, [ebp - 0x60] */ r_edx = (u32)(r_ebp+0xffffffa0u);
    /* 004a68c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a68c1: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 004a68c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a68c5: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 004a68c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a68c9: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 004a68cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a68cd: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 004a68d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a68d1: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 004a68d4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a68d5: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 004a68d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a68d9: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004a68dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a68dd: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 004a68e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a68e1: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 004a68e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a68e5: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 004a68e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a68e9: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004a68ec: call 0x494b20 */ r_esp -= 4; W32(r_esp, 0x4a68f1u); f_00494b20();
    /* 004a68f1: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004a68f7: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a68fd: call 0x4d5ad0 */ r_esp -= 4; W32(r_esp, 0x4a6902u); f_004d5ad0();
    /* 004a6902: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 004a6906: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a690c: call 0x4d5af0 */ r_esp -= 4; W32(r_esp, 0x4a6911u); f_004d5af0();
    /* 004a6911: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 004a6915: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a691b: call 0x4d5b10 */ r_esp -= 4; W32(r_esp, 0x4a6920u); f_004d5b10();
    /* 004a6920: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 004a6924: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a692a: call 0x4d5b30 */ r_esp -= 4; W32(r_esp, 0x4a692fu); f_004d5b30();
    /* 004a692f: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 004a6933: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a6937: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a693b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a693c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004a693c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004a693c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004a693e: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6942: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a6944: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a6948: movsx eax, word ptr [ebp - 0x58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a694c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a694f: jne 0x4a6963 */ if (!fZ) goto L_004a6963;
L_004a6951:; BB(0x004a6951);
    /* 004a6951: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a6955: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6959: lea eax, [edx + ecx + 9] */ r_eax = (u32)(r_edx+r_ecx+0x9u);
    /* 004a695d: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a6961: jmp 0x4a69cb */ goto L_004a69cb;
L_004a6963:; BB(0x004a6963);
    /* 004a6963: movsx ecx, word ptr [ebp - 0x58] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a6967: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a696a: jne 0x4a697e */ if (!fZ) goto L_004a697e;
L_004a696c:; BB(0x004a696c);
    /* 004a696c: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a6970: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6974: lea ecx, [eax + edx + 7] */ r_ecx = (u32)(r_eax+r_edx+0x7u);
    /* 004a6978: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a697c: jmp 0x4a69cb */ goto L_004a69cb;
L_004a697e:; BB(0x004a697e);
    /* 004a697e: movsx edx, word ptr [ebp - 0x58] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a6982: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6985: jne 0x4a6999 */ if (!fZ) goto L_004a6999;
L_004a6987:; BB(0x004a6987);
    /* 004a6987: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a698b: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a698f: lea edx, [ecx + eax + 3] */ r_edx = (u32)(r_ecx+r_eax+0x3u);
    /* 004a6993: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a6997: jmp 0x4a69cb */ goto L_004a69cb;
L_004a6999:; BB(0x004a6999);
    /* 004a6999: movsx eax, word ptr [ebp - 0x58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a699d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a69a0: jle 0x4a69b4 */ if ((fZ||fS!=fO)) goto L_004a69b4;
L_004a69a2:; BB(0x004a69a2);
    /* 004a69a2: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a69a6: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a69aa: lea eax, [edx + ecx + 1] */ r_eax = (u32)(r_edx+r_ecx+0x1u);
    /* 004a69ae: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a69b2: jmp 0x4a69cb */ goto L_004a69cb;
L_004a69b4:; BB(0x004a69b4);
    /* 004a69b4: movsx ecx, word ptr [ebp - 0x58] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a69b8: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a69bb: jl 0x4a69cb */ if ((fS!=fO)) goto L_004a69cb;
L_004a69bd:; BB(0x004a69bd);
    /* 004a69bd: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a69c1: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a69c5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a69c7: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_004a69cb:; BB(0x004a69cb);
    /* 004a69cb: movsx ecx, word ptr [ebp - 0x70] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004a69cf: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a69d2: jne 0x4a69e6 */ if (!fZ) goto L_004a69e6;
L_004a69d4:; BB(0x004a69d4);
    /* 004a69d4: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a69d8: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a69dc: lea ecx, [eax + edx + 7] */ r_ecx = (u32)(r_eax+r_edx+0x7u);
    /* 004a69e0: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a69e4: jmp 0x4a6a33 */ goto L_004a6a33;
L_004a69e6:; BB(0x004a69e6);
    /* 004a69e6: movsx edx, word ptr [ebp - 0x70] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004a69ea: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a69ed: jne 0x4a6a01 */ if (!fZ) goto L_004a6a01;
L_004a69ef:; BB(0x004a69ef);
    /* 004a69ef: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a69f3: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a69f7: lea edx, [ecx + eax + 3] */ r_edx = (u32)(r_ecx+r_eax+0x3u);
    /* 004a69fb: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a69ff: jmp 0x4a6a33 */ goto L_004a6a33;
L_004a6a01:; BB(0x004a6a01);
    /* 004a6a01: movsx eax, word ptr [ebp - 0x70] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004a6a05: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6a08: jle 0x4a6a1c */ if ((fZ||fS!=fO)) goto L_004a6a1c;
L_004a6a0a:; BB(0x004a6a0a);
    /* 004a6a0a: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a6a0e: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6a12: lea eax, [edx + ecx + 1] */ r_eax = (u32)(r_edx+r_ecx+0x1u);
    /* 004a6a16: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a6a1a: jmp 0x4a6a33 */ goto L_004a6a33;
L_004a6a1c:; BB(0x004a6a1c);
    /* 004a6a1c: movsx ecx, word ptr [ebp - 0x70] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004a6a20: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6a23: jl 0x4a6a33 */ if ((fS!=fO)) goto L_004a6a33;
L_004a6a25:; BB(0x004a6a25);
    /* 004a6a25: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a6a29: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6a2d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a6a2f: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_004a6a33:; BB(0x004a6a33);
    /* 004a6a33: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a6a37: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a6a39: jle 0x4a6a53 */ if ((fZ||fS!=fO)) goto L_004a6a53;
L_004a6a3b:; BB(0x004a6a3b);
    /* 004a6a3b: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a6a3f: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a6a43: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a6a46: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a6a49: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6a4d: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6a4f: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
L_004a6a53:; BB(0x004a6a53);
    /* 004a6a53: movsx edx, word ptr [ebp - 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 004a6a57: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6a5a: jne 0x4a6a6e */ if (!fZ) goto L_004a6a6e;
L_004a6a5c:; BB(0x004a6a5c);
    /* 004a6a5c: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a6a60: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6a64: lea edx, [ecx + eax + 9] */ r_edx = (u32)(r_ecx+r_eax+0x9u);
    /* 004a6a68: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a6a6c: jmp 0x4a6abd */ goto L_004a6abd;
L_004a6a6e:; BB(0x004a6a6e);
    /* 004a6a6e: movsx eax, word ptr [ebp - 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 004a6a72: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6a75: jne 0x4a6a89 */ if (!fZ) goto L_004a6a89;
L_004a6a77:; BB(0x004a6a77);
    /* 004a6a77: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a6a7b: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6a7f: lea eax, [edx + ecx + 7] */ r_eax = (u32)(r_edx+r_ecx+0x7u);
    /* 004a6a83: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a6a87: jmp 0x4a6abd */ goto L_004a6abd;
L_004a6a89:; BB(0x004a6a89);
    /* 004a6a89: movsx ecx, word ptr [ebp - 0x64] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 004a6a8d: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6a90: jne 0x4a6aa4 */ if (!fZ) goto L_004a6aa4;
L_004a6a92:; BB(0x004a6a92);
    /* 004a6a92: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a6a96: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6a9a: lea ecx, [eax + edx + 3] */ r_ecx = (u32)(r_eax+r_edx+0x3u);
    /* 004a6a9e: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a6aa2: jmp 0x4a6abd */ goto L_004a6abd;
L_004a6aa4:; BB(0x004a6aa4);
    /* 004a6aa4: movsx edx, word ptr [ebp - 0x64] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 004a6aa8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6aab: jl 0x4a6abd */ if ((fS!=fO)) goto L_004a6abd;
L_004a6aad:; BB(0x004a6aad);
    /* 004a6aad: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a6ab1: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6ab5: lea edx, [ecx + eax + 1] */ r_edx = (u32)(r_ecx+r_eax+0x1u);
    /* 004a6ab9: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
L_004a6abd:; BB(0x004a6abd);
    /* 004a6abd: movsx eax, word ptr [ebp - 0x6c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 004a6ac1: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6ac4: jne 0x4a6ad8 */ if (!fZ) goto L_004a6ad8;
L_004a6ac6:; BB(0x004a6ac6);
    /* 004a6ac6: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a6aca: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6ace: lea eax, [edx + ecx + 9] */ r_eax = (u32)(r_edx+r_ecx+0x9u);
    /* 004a6ad2: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a6ad6: jmp 0x4a6b27 */ goto L_004a6b27;
L_004a6ad8:; BB(0x004a6ad8);
    /* 004a6ad8: movsx ecx, word ptr [ebp - 0x6c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 004a6adc: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6adf: jne 0x4a6af3 */ if (!fZ) goto L_004a6af3;
L_004a6ae1:; BB(0x004a6ae1);
    /* 004a6ae1: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a6ae5: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6ae9: lea ecx, [eax + edx + 7] */ r_ecx = (u32)(r_eax+r_edx+0x7u);
    /* 004a6aed: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a6af1: jmp 0x4a6b27 */ goto L_004a6b27;
L_004a6af3:; BB(0x004a6af3);
    /* 004a6af3: movsx edx, word ptr [ebp - 0x6c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 004a6af7: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6afa: jne 0x4a6b0e */ if (!fZ) goto L_004a6b0e;
L_004a6afc:; BB(0x004a6afc);
    /* 004a6afc: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a6b00: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6b04: lea edx, [ecx + eax + 3] */ r_edx = (u32)(r_ecx+r_eax+0x3u);
    /* 004a6b08: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a6b0c: jmp 0x4a6b27 */ goto L_004a6b27;
L_004a6b0e:; BB(0x004a6b0e);
    /* 004a6b0e: movsx eax, word ptr [ebp - 0x6c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 004a6b12: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6b15: jl 0x4a6b27 */ if ((fS!=fO)) goto L_004a6b27;
L_004a6b17:; BB(0x004a6b17);
    /* 004a6b17: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a6b1b: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6b1f: lea eax, [edx + ecx + 1] */ r_eax = (u32)(r_edx+r_ecx+0x1u);
    /* 004a6b23: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_004a6b27:; BB(0x004a6b27);
    /* 004a6b27: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a6b2b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a6b2d: jle 0x4a6b44 */ if ((fZ||fS!=fO)) goto L_004a6b44;
L_004a6b2f:; BB(0x004a6b2f);
    /* 004a6b2f: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a6b33: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a6b37: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a6b3a: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6b3e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6b40: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
L_004a6b44:; BB(0x004a6b44);
    /* 004a6b44: movsx edx, word ptr [ebp - 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 004a6b48: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6b4b: jne 0x4a6b5f */ if (!fZ) goto L_004a6b5f;
L_004a6b4d:; BB(0x004a6b4d);
    /* 004a6b4d: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a6b51: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6b55: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 004a6b59: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a6b5d: jmp 0x4a6b78 */ goto L_004a6b78;
L_004a6b5f:; BB(0x004a6b5f);
    /* 004a6b5f: movsx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 004a6b63: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6b66: jne 0x4a6b78 */ if (!fZ) goto L_004a6b78;
L_004a6b68:; BB(0x004a6b68);
    /* 004a6b68: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a6b6c: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6b70: lea eax, [edx + ecx + 2] */ r_eax = (u32)(r_edx+r_ecx+0x2u);
    /* 004a6b74: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_004a6b78:; BB(0x004a6b78);
    /* 004a6b78: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 004a6b7c: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6b7f: jne 0x4a6b93 */ if (!fZ) goto L_004a6b93;
L_004a6b81:; BB(0x004a6b81);
    /* 004a6b81: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a6b85: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6b89: lea ecx, [eax + edx + 2] */ r_ecx = (u32)(r_eax+r_edx+0x2u);
    /* 004a6b8d: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a6b91: jmp 0x4a6baa */ goto L_004a6baa;
L_004a6b93:; BB(0x004a6b93);
    /* 004a6b93: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 004a6b97: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6b9a: jne 0x4a6baa */ if (!fZ) goto L_004a6baa;
L_004a6b9c:; BB(0x004a6b9c);
    /* 004a6b9c: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a6ba0: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6ba4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6ba6: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
L_004a6baa:; BB(0x004a6baa);
    /* 004a6baa: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6bae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004a6bb0: jge 0x4a6bb8 */ if ((fS==fO)) goto L_004a6bb8;
L_004a6bb2:; BB(0x004a6bb2);
    /* 004a6bb2: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004a6bb8:; BB(0x004a6bb8);
    /* 004a6bb8: mov word ptr [ebp - 0x54], 0 */ W16((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 004a6bbe: movsx eax, word ptr [ebp - 0x68] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 004a6bc2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6bc5: jne 0x4a6be3 */ if (!fZ) goto L_004a6be3;
L_004a6bc7:; BB(0x004a6bc7);
    /* 004a6bc7: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6bcd: call 0x4d5b50 */ r_esp -= 4; W32(r_esp, 0x4a6bd2u); f_004d5b50();
    /* 004a6bd2: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6bd5: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6bd9: lea eax, [edx + ecx + 3] */ r_eax = (u32)(r_edx+r_ecx+0x3u);
    /* 004a6bdd: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 004a6be1: jmp 0x4a6c2b */ goto L_004a6c2b;
L_004a6be3:; BB(0x004a6be3);
    /* 004a6be3: movsx ecx, word ptr [ebp - 0x68] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 004a6be7: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6bea: jne 0x4a6c08 */ if (!fZ) goto L_004a6c08;
L_004a6bec:; BB(0x004a6bec);
    /* 004a6bec: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6bf2: call 0x4d5b50 */ r_esp -= 4; W32(r_esp, 0x4a6bf7u); f_004d5b50();
    /* 004a6bf7: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6bfa: movsx eax, word ptr [ebp - 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6bfe: lea ecx, [eax + edx + 6] */ r_ecx = (u32)(r_eax+r_edx+0x6u);
    /* 004a6c02: mov word ptr [ebp - 0x54], cx */ W16((u32)(r_ebp+0xffffffacu), (u16)r_ecx);
    /* 004a6c06: jmp 0x4a6c2b */ goto L_004a6c2b;
L_004a6c08:; BB(0x004a6c08);
    /* 004a6c08: movsx edx, word ptr [ebp - 0x68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 004a6c0c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6c0f: jne 0x4a6c2b */ if (!fZ) goto L_004a6c2b;
L_004a6c11:; BB(0x004a6c11);
    /* 004a6c11: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6c17: call 0x4d5b50 */ r_esp -= 4; W32(r_esp, 0x4a6c1cu); f_004d5b50();
    /* 004a6c1c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6c1f: movsx ecx, word ptr [ebp - 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6c23: lea edx, [ecx + eax + 8] */ r_edx = (u32)(r_ecx+r_eax+0x8u);
    /* 004a6c27: mov word ptr [ebp - 0x54], dx */ W16((u32)(r_ebp+0xffffffacu), (u16)r_edx);
L_004a6c2b:; BB(0x004a6c2b);
    /* 004a6c2b: movsx eax, word ptr [ebp - 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004a6c2f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6c32: jne 0x4a6c50 */ if (!fZ) goto L_004a6c50;
L_004a6c34:; BB(0x004a6c34);
    /* 004a6c34: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6c3a: call 0x4d5b50 */ r_esp -= 4; W32(r_esp, 0x4a6c3fu); f_004d5b50();
    /* 004a6c3f: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6c42: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6c46: lea eax, [edx + ecx + 8] */ r_eax = (u32)(r_edx+r_ecx+0x8u);
    /* 004a6c4a: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 004a6c4e: jmp 0x4a6c96 */ goto L_004a6c96;
L_004a6c50:; BB(0x004a6c50);
    /* 004a6c50: movsx ecx, word ptr [ebp - 0x60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004a6c54: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6c57: jne 0x4a6c75 */ if (!fZ) goto L_004a6c75;
L_004a6c59:; BB(0x004a6c59);
    /* 004a6c59: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6c5f: call 0x4d5b50 */ r_esp -= 4; W32(r_esp, 0x4a6c64u); f_004d5b50();
    /* 004a6c64: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6c67: movsx eax, word ptr [ebp - 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6c6b: lea ecx, [eax + edx + 4] */ r_ecx = (u32)(r_eax+r_edx+0x4u);
    /* 004a6c6f: mov word ptr [ebp - 0x54], cx */ W16((u32)(r_ebp+0xffffffacu), (u16)r_ecx);
    /* 004a6c73: jmp 0x4a6c96 */ goto L_004a6c96;
L_004a6c75:; BB(0x004a6c75);
    /* 004a6c75: movsx edx, word ptr [ebp - 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004a6c79: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6c7c: jne 0x4a6c96 */ if (!fZ) goto L_004a6c96;
L_004a6c7e:; BB(0x004a6c7e);
    /* 004a6c7e: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6c84: call 0x4d5b50 */ r_esp -= 4; W32(r_esp, 0x4a6c89u); f_004d5b50();
    /* 004a6c89: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6c8c: movsx ecx, word ptr [ebp - 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6c90: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6c92: mov word ptr [ebp - 0x54], cx */ W16((u32)(r_ebp+0xffffffacu), (u16)r_ecx);
L_004a6c96:; BB(0x004a6c96);
    /* 004a6c96: movsx edx, word ptr [ebp - 0x5c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004a6c9a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6c9d: jne 0x4a6cbb */ if (!fZ) goto L_004a6cbb;
L_004a6c9f:; BB(0x004a6c9f);
    /* 004a6c9f: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6ca5: call 0x4d5b50 */ r_esp -= 4; W32(r_esp, 0x4a6caau); f_004d5b50();
    /* 004a6caa: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6cad: movsx ecx, word ptr [ebp - 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6cb1: lea edx, [ecx + eax + 8] */ r_edx = (u32)(r_ecx+r_eax+0x8u);
    /* 004a6cb5: mov word ptr [ebp - 0x54], dx */ W16((u32)(r_ebp+0xffffffacu), (u16)r_edx);
    /* 004a6cb9: jmp 0x4a6d01 */ goto L_004a6d01;
L_004a6cbb:; BB(0x004a6cbb);
    /* 004a6cbb: movsx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004a6cbf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6cc2: jne 0x4a6ce0 */ if (!fZ) goto L_004a6ce0;
L_004a6cc4:; BB(0x004a6cc4);
    /* 004a6cc4: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6cca: call 0x4d5b50 */ r_esp -= 4; W32(r_esp, 0x4a6ccfu); f_004d5b50();
    /* 004a6ccf: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6cd2: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6cd6: lea eax, [edx + ecx + 4] */ r_eax = (u32)(r_edx+r_ecx+0x4u);
    /* 004a6cda: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
    /* 004a6cde: jmp 0x4a6d01 */ goto L_004a6d01;
L_004a6ce0:; BB(0x004a6ce0);
    /* 004a6ce0: movsx ecx, word ptr [ebp - 0x5c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004a6ce4: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6ce7: jne 0x4a6d01 */ if (!fZ) goto L_004a6d01;
L_004a6ce9:; BB(0x004a6ce9);
    /* 004a6ce9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6cef: call 0x4d5b50 */ r_esp -= 4; W32(r_esp, 0x4a6cf4u); f_004d5b50();
    /* 004a6cf4: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6cf7: movsx eax, word ptr [ebp - 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6cfb: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a6cfd: mov word ptr [ebp - 0x54], ax */ W16((u32)(r_ebp+0xffffffacu), (u16)r_eax);
L_004a6d01:; BB(0x004a6d01);
    /* 004a6d01: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6d05: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6d09: lea eax, [edx + ecx*2] */ r_eax = (u32)(r_edx+r_ecx*2);
    /* 004a6d0c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a6d0d: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 004a6d12: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004a6d12, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004a6d12, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004a6d14: mov word ptr [ebp - 0x40], ax */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_eax);
    /* 004a6d18: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a6d1c: movsx eax, word ptr [ebp - 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a6d20: lea eax, [eax + edx*2] */ r_eax = (u32)(r_eax+r_edx*2);
    /* 004a6d23: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a6d24: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004a6d29: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004a6d29, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004a6d29, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004a6d2b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004a6d2e: sub edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a6d31: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a6d33: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004a6d38: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6d3b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a6d3d: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 004a6d41: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6d47: call 0x4d4f20 */ r_esp -= 4; W32(r_esp, 0x4a6d4cu); f_004d4f20();
    /* 004a6d4c: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 004a6d50: mov word ptr [ebp - 0x74], 0 */ W16((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 004a6d56: jmp 0x4a6d64 */ goto L_004a6d64;
L_004a6d58:; BB(0x004a6d58);
    /* 004a6d58: mov dx, word ptr [ebp - 0x74] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff8cu))) & 0xffffu);
    /* 004a6d5c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a6d60: mov word ptr [ebp - 0x74], dx */ W16((u32)(r_ebp+0xffffff8cu), (u16)r_edx);
L_004a6d64:; BB(0x004a6d64);
    /* 004a6d64: movsx eax, word ptr [ebp - 0x74] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff8cu));
    /* 004a6d68: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004a6d6c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6d6e: jge 0x4a6da1 */ if ((fS==fO)) goto L_004a6da1;
L_004a6d70:; BB(0x004a6d70);
    /* 004a6d70: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004a6d74: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6d7a: call 0x4c6db0 */ r_esp -= 4; W32(r_esp, 0x4a6d7fu); f_004c6db0();
    /* 004a6d7f: mov edx, 0x64 */ r_edx = 0x64u;
    /* 004a6d84: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a6d86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6d87: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6d8cu); f_0062fbf0();
    /* 004a6d8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6d8f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6d91: jle 0x4a6d9f */ if ((fZ||fS!=fO)) goto L_004a6d9f;
L_004a6d93:; BB(0x004a6d93);
    /* 004a6d93: mov ax, word ptr [ebp - 0x40] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc0u))) & 0xffffu);
    /* 004a6d97: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a6d9b: mov word ptr [ebp - 0x40], ax */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_eax);
L_004a6d9f:; BB(0x004a6d9f);
    /* 004a6d9f: jmp 0x4a6d58 */ goto L_004a6d58;
L_004a6da1:; BB(0x004a6da1);
    /* 004a6da1: movsx ecx, word ptr [ebp - 0x40] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a6da5: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6da8: jl 0x4a6dc7 */ if ((fS!=fO)) goto L_004a6dc7;
L_004a6daa:; BB(0x004a6daa);
    /* 004a6daa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6dac: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6db1u); f_0062fbf0();
    /* 004a6db1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6db4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6db6: jne 0x4a6dc7 */ if (!fZ) goto L_004a6dc7;
L_004a6db8:; BB(0x004a6db8);
    /* 004a6db8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6dbb: mov word ptr [edx*2 + 0x791768], 5 */ W16((u32)(r_edx*2+0x791768u), 0x5u);
    /* 004a6dc5: jmp 0x4a6e39 */ goto L_004a6e39;
L_004a6dc7:; BB(0x004a6dc7);
    /* 004a6dc7: movsx eax, word ptr [ebp - 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a6dcb: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6dce: jl 0x4a6dee */ if ((fS!=fO)) goto L_004a6dee;
L_004a6dd0:; BB(0x004a6dd0);
    /* 004a6dd0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6dd2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6dd7u); f_0062fbf0();
    /* 004a6dd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6dda: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6ddd: jge 0x4a6dee */ if ((fS==fO)) goto L_004a6dee;
L_004a6ddf:; BB(0x004a6ddf);
    /* 004a6ddf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6de2: mov word ptr [ecx*2 + 0x791768], 4 */ W16((u32)(r_ecx*2+0x791768u), 0x4u);
    /* 004a6dec: jmp 0x4a6e39 */ goto L_004a6e39;
L_004a6dee:; BB(0x004a6dee);
    /* 004a6dee: movsx edx, word ptr [ebp - 0x40] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a6df2: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6df5: jl 0x4a6e14 */ if ((fS!=fO)) goto L_004a6e14;
L_004a6df7:; BB(0x004a6df7);
    /* 004a6df7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6df9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6dfeu); f_0062fbf0();
    /* 004a6dfe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6e01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6e03: jne 0x4a6e14 */ if (!fZ) goto L_004a6e14;
L_004a6e05:; BB(0x004a6e05);
    /* 004a6e05: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6e08: mov word ptr [eax*2 + 0x791768], 3 */ W16((u32)(r_eax*2+0x791768u), 0x3u);
    /* 004a6e12: jmp 0x4a6e39 */ goto L_004a6e39;
L_004a6e14:; BB(0x004a6e14);
    /* 004a6e14: movsx ecx, word ptr [ebp - 0x40] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a6e18: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6e1b: jl 0x4a6e2c */ if ((fS!=fO)) goto L_004a6e2c;
L_004a6e1d:; BB(0x004a6e1d);
    /* 004a6e1d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6e20: mov word ptr [edx*2 + 0x791768], 2 */ W16((u32)(r_edx*2+0x791768u), 0x2u);
    /* 004a6e2a: jmp 0x4a6e39 */ goto L_004a6e39;
L_004a6e2c:; BB(0x004a6e2c);
    /* 004a6e2c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6e2f: mov word ptr [eax*2 + 0x791768], 0 */ W16((u32)(r_eax*2+0x791768u), 0x0u);
L_004a6e39:; BB(0x004a6e39);
    /* 004a6e39: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a6e40: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004a6e43: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4a6e48u); f_00484470();
L_004a6e48:; BB(0x004a6e48);
    /* 004a6e48: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6e4b: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a6e53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6e55: jne 0x4a6e96 */ if (!fZ) goto L_004a6e96;
L_004a6e57:; BB(0x004a6e57);
    /* 004a6e57: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a6e5d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6e60: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a6e65u); f_004f6640();
    /* 004a6e65: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a6e68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6e6a: je 0x4a6e8a */ if (fZ) goto L_004a6e8a;
L_004a6e6c:; BB(0x004a6e6c);
    /* 004a6e6c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a6e72: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4a6e77u); f_0047d6b0();
    /* 004a6e77: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6e7a: jne 0x4a6e7e */ if (!fZ) goto L_004a6e7e;
L_004a6e7c:; BB(0x004a6e7c);
    /* 004a6e7c: jmp 0x4a6e88 */ goto L_004a6e88;
L_004a6e7e:; BB(0x004a6e7e);
    /* 004a6e7e: mov eax, 1 */ r_eax = 0x1u;
    /* 004a6e83: jmp 0x4a723d */ goto L_004a723d;
L_004a6e88:; BB(0x004a6e88);
    /* 004a6e88: jmp 0x4a6e91 */ goto L_004a6e91;
L_004a6e8a:; BB(0x004a6e8a);
    /* 004a6e8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a6e8c: jmp 0x4a723d */ goto L_004a723d;
L_004a6e91:; BB(0x004a6e91);
    /* 004a6e91: jmp 0x4a70d7 */ goto L_004a70d7;
L_004a6e96:; BB(0x004a6e96);
    /* 004a6e96: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6e99: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a6ea1: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6ea4: jne 0x4a6f58 */ if (!fZ) goto L_004a6f58;
L_004a6eaa:; BB(0x004a6eaa);
    /* 004a6eaa: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6eac: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6eb1u); f_0062fbf0();
    /* 004a6eb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6eb4: mov esi, eax */ r_esi = r_eax;
    /* 004a6eb6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6eb8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a6ebb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a6ebc: call 0x4a7250 */ r_esp -= 4; W32(r_esp, 0x4a6ec1u); f_004a7250();
    /* 004a6ec1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6ec4: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6ec7: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6ec9: jge 0x4a6f53 */ if ((fS==fO)) goto L_004a6f53;
L_004a6ecf:; BB(0x004a6ecf);
    /* 004a6ecf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6ed1: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6ed7: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a6edcu); f_004c79d0();
    /* 004a6edc: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6ede: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6ee3u); f_0062fbf0();
    /* 004a6ee3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6ee6: mov esi, eax */ r_esi = r_eax;
    /* 004a6ee8: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6eee: call 0x4d5590 */ r_esp -= 4; W32(r_esp, 0x4a6ef3u); f_004d5590();
    /* 004a6ef3: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6ef6: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6ef8: jge 0x4a6f07 */ if ((fS==fO)) goto L_004a6f07;
L_004a6efa:; BB(0x004a6efa);
    /* 004a6efa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6efd: mov word ptr [eax*2 + 0x791768], 4 */ W16((u32)(r_eax*2+0x791768u), 0x4u);
L_004a6f07:; BB(0x004a6f07);
    /* 004a6f07: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a6f0d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6f10: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a6f15u); f_004f6640();
    /* 004a6f15: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a6f18: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6f1a: je 0x4a6f28 */ if (fZ) goto L_004a6f28;
L_004a6f1c:; BB(0x004a6f1c);
    /* 004a6f1c: mov eax, 2 */ r_eax = 0x2u;
    /* 004a6f21: jmp 0x4a723d */ goto L_004a723d;
L_004a6f28:; BB(0x004a6f28);
    /* 004a6f28: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a6f2e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6f31: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a6f36u); f_004f66e0();
    /* 004a6f36: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a6f39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6f3b: je 0x4a6f49 */ if (fZ) goto L_004a6f49;
L_004a6f3d:; BB(0x004a6f3d);
    /* 004a6f3d: mov eax, 4 */ r_eax = 0x4u;
    /* 004a6f42: jmp 0x4a723d */ goto L_004a723d;
L_004a6f49:; BB(0x004a6f49);
    /* 004a6f49: mov eax, 3 */ r_eax = 0x3u;
    /* 004a6f4e: jmp 0x4a723d */ goto L_004a723d;
L_004a6f53:; BB(0x004a6f53);
    /* 004a6f53: jmp 0x4a70d7 */ goto L_004a70d7;
L_004a6f58:; BB(0x004a6f58);
    /* 004a6f58: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6f5b: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a6f63: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6f66: jne 0x4a701a */ if (!fZ) goto L_004a701a;
L_004a6f6c:; BB(0x004a6f6c);
    /* 004a6f6c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6f6e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6f73u); f_0062fbf0();
    /* 004a6f73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6f76: mov esi, eax */ r_esi = r_eax;
    /* 004a6f78: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6f7a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a6f7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a6f7e: call 0x4a7250 */ r_esp -= 4; W32(r_esp, 0x4a6f83u); f_004a7250();
    /* 004a6f83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6f86: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6f89: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6f8b: jge 0x4a7015 */ if ((fS==fO)) goto L_004a7015;
L_004a6f91:; BB(0x004a6f91);
    /* 004a6f91: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6f93: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6f99: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a6f9eu); f_004c79d0();
    /* 004a6f9e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a6fa0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a6fa5u); f_0062fbf0();
    /* 004a6fa5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a6fa8: mov esi, eax */ r_esi = r_eax;
    /* 004a6faa: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a6fb0: call 0x4d5590 */ r_esp -= 4; W32(r_esp, 0x4a6fb5u); f_004d5590();
    /* 004a6fb5: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a6fb8: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a6fba: jge 0x4a6fc9 */ if ((fS==fO)) goto L_004a6fc9;
L_004a6fbc:; BB(0x004a6fbc);
    /* 004a6fbc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a6fbf: mov word ptr [edx*2 + 0x791768], 3 */ W16((u32)(r_edx*2+0x791768u), 0x3u);
L_004a6fc9:; BB(0x004a6fc9);
    /* 004a6fc9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a6fcf: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6fd2: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a6fd7u); f_004f6640();
    /* 004a6fd7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a6fda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6fdc: je 0x4a6fea */ if (fZ) goto L_004a6fea;
L_004a6fde:; BB(0x004a6fde);
    /* 004a6fde: mov eax, 2 */ r_eax = 0x2u;
    /* 004a6fe3: jmp 0x4a723d */ goto L_004a723d;
L_004a6fea:; BB(0x004a6fea);
    /* 004a6fea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a6ff0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a6ff3: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a6ff8u); f_004f66e0();
    /* 004a6ff8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a6ffb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a6ffd: je 0x4a700b */ if (fZ) goto L_004a700b;
L_004a6fff:; BB(0x004a6fff);
    /* 004a6fff: mov eax, 4 */ r_eax = 0x4u;
    /* 004a7004: jmp 0x4a723d */ goto L_004a723d;
L_004a700b:; BB(0x004a700b);
    /* 004a700b: mov eax, 3 */ r_eax = 0x3u;
    /* 004a7010: jmp 0x4a723d */ goto L_004a723d;
L_004a7015:; BB(0x004a7015);
    /* 004a7015: jmp 0x4a70d7 */ goto L_004a70d7;
L_004a701a:; BB(0x004a701a);
    /* 004a701a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a701d: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a7025: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a7028: jne 0x4a70d7 */ if (!fZ) goto L_004a70d7;
L_004a702e:; BB(0x004a702e);
    /* 004a702e: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7030: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7035u); f_0062fbf0();
    /* 004a7035: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7038: mov esi, eax */ r_esi = r_eax;
    /* 004a703a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a703c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a703f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7040: call 0x4a7250 */ r_esp -= 4; W32(r_esp, 0x4a7045u); f_004a7250();
    /* 004a7045: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a7048: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a704b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a704d: jge 0x4a70d7 */ if ((fS==fO)) goto L_004a70d7;
L_004a7053:; BB(0x004a7053);
    /* 004a7053: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7055: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a705b: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a7060u); f_004c79d0();
    /* 004a7060: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7062: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a7067u); f_0062fbf0();
    /* 004a7067: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a706a: mov esi, eax */ r_esi = r_eax;
    /* 004a706c: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7072: call 0x4d5590 */ r_esp -= 4; W32(r_esp, 0x4a7077u); f_004d5590();
    /* 004a7077: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a707a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a707c: jge 0x4a708b */ if ((fS==fO)) goto L_004a708b;
L_004a707e:; BB(0x004a707e);
    /* 004a707e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a7081: mov word ptr [ecx*2 + 0x791768], 2 */ W16((u32)(r_ecx*2+0x791768u), 0x2u);
L_004a708b:; BB(0x004a708b);
    /* 004a708b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7091: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a7094: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a7099u); f_004f6640();
    /* 004a7099: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a709c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a709e: je 0x4a70ac */ if (fZ) goto L_004a70ac;
L_004a70a0:; BB(0x004a70a0);
    /* 004a70a0: mov eax, 2 */ r_eax = 0x2u;
    /* 004a70a5: jmp 0x4a723d */ goto L_004a723d;
L_004a70ac:; BB(0x004a70ac);
    /* 004a70ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a70b2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a70b5: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a70bau); f_004f66e0();
    /* 004a70ba: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a70bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a70bf: je 0x4a70cd */ if (fZ) goto L_004a70cd;
L_004a70c1:; BB(0x004a70c1);
    /* 004a70c1: mov eax, 4 */ r_eax = 0x4u;
    /* 004a70c6: jmp 0x4a723d */ goto L_004a723d;
L_004a70cd:; BB(0x004a70cd);
    /* 004a70cd: mov eax, 3 */ r_eax = 0x3u;
    /* 004a70d2: jmp 0x4a723d */ goto L_004a723d;
L_004a70d7:; BB(0x004a70d7);
    /* 004a70d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a70dd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a70e0: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a70e5u); f_004f6640();
    /* 004a70e5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a70e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a70ea: je 0x4a7238 */ if (fZ) goto L_004a7238;
L_004a70f0:; BB(0x004a70f0);
    /* 004a70f0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a70f6: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4a70fbu); f_0047d6b0();
    /* 004a70fb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a70fe: jne 0x4a722f */ if (!fZ) goto L_004a722f;
L_004a7104:; BB(0x004a7104);
    /* 004a7104: mov word ptr [ebp - 0x7c], 0 */ W16((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 004a710a: mov word ptr [ebp - 0x80], 0 */ W16((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 004a7110: jmp 0x4a711e */ goto L_004a711e;
L_004a7112:; BB(0x004a7112);
    /* 004a7112: mov dx, word ptr [ebp - 0x80] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff80u))) & 0xffffu);
    /* 004a7116: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a711a: mov word ptr [ebp - 0x80], dx */ W16((u32)(r_ebp+0xffffff80u), (u16)r_edx);
L_004a711e:; BB(0x004a711e);
    /* 004a711e: movsx esi, word ptr [ebp - 0x80] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff80u));
    /* 004a7122: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7128: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a712du); f_0047f950();
    /* 004a712d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a712f: jge 0x4a71c9 */ if ((fS==fO)) goto L_004a71c9;
L_004a7135:; BB(0x004a7135);
    /* 004a7135: movsx eax, word ptr [ebp - 0x80] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff80u));
    /* 004a7139: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a713c: jne 0x4a7140 */ if (!fZ) goto L_004a7140;
L_004a713e:; BB(0x004a713e);
    /* 004a713e: jmp 0x4a7112 */ goto L_004a7112;
L_004a7140:; BB(0x004a7140);
    /* 004a7140: movsx ecx, word ptr [ebp - 0x80] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff80u));
    /* 004a7144: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7145: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a714b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a7150u); f_0047e390();
    /* 004a7150: mov ecx, eax */ r_ecx = r_eax;
    /* 004a7152: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4a7157u); f_004c7010();
    /* 004a7157: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a715a: jne 0x4a71c4 */ if (!fZ) goto L_004a71c4;
L_004a715c:; BB(0x004a715c);
    /* 004a715c: movsx edx, word ptr [ebp - 0x80] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff80u));
    /* 004a7160: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7161: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a7167: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a716cu); f_0047e390();
    /* 004a716c: mov ecx, eax */ r_ecx = r_eax;
    /* 004a716e: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a7173u); f_004c7050();
    /* 004a7173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7174: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a717a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a717d: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x4a7182u); f_004f69e0();
    /* 004a7182: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a7185: movsx ecx, word ptr [ebp - 0x7c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 004a7189: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a718b: mov word ptr [ebp - 0x7c], cx */ W16((u32)(r_ebp+0xffffff84u), (u16)r_ecx);
    /* 004a718f: movsx edx, word ptr [ebp - 0x80] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff80u));
    /* 004a7193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a7194: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a719a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a719fu); f_0047e390();
    /* 004a719f: mov ecx, eax */ r_ecx = r_eax;
    /* 004a71a1: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a71a6u); f_004c7050();
    /* 004a71a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a71a7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a71ad: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a71b0: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x4a71b5u); f_004f6880();
    /* 004a71b5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a71b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a71ba: jle 0x4a71c4 */ if ((fZ||fS!=fO)) goto L_004a71c4;
L_004a71bc:; BB(0x004a71bc);
    /* 004a71bc: mov word ptr [ebp - 0x7c], 0 */ W16((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 004a71c2: jmp 0x4a71c9 */ goto L_004a71c9;
L_004a71c4:; BB(0x004a71c4);
    /* 004a71c4: jmp 0x4a7112 */ goto L_004a7112;
L_004a71c9:; BB(0x004a71c9);
    /* 004a71c9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a71cf: call 0x4d55d0 */ r_esp -= 4; W32(r_esp, 0x4a71d4u); f_004d55d0();
    /* 004a71d4: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a71d7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a71da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a71db: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a71e0u); f_0062fbf0();
    /* 004a71e0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a71e3: mov word ptr [ebp - 0x78], ax */ W16((u32)(r_ebp+0xffffff88u), (u16)r_eax);
    /* 004a71e7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a71ea: movsx eax, word ptr [edx*2 + 0x791798] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791798u));
    /* 004a71f2: movsx ecx, word ptr [ebp - 0x7c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff84u));
    /* 004a71f6: movsx edx, word ptr [ebp - 0x78] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff88u));
    /* 004a71fa: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a71fd: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a71ff: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a7202: jle 0x4a7226 */ if ((fZ||fS!=fO)) goto L_004a7226;
L_004a7204:; BB(0x004a7204);
    /* 004a7204: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a7206: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a720bu); f_0062fbf0();
    /* 004a720b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a720e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a7211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a7212: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a7218: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a721du); f_004c79d0();
    /* 004a721d: mov eax, 2 */ r_eax = 0x2u;
    /* 004a7222: jmp 0x4a723d */ goto L_004a723d;
L_004a7226:; BB(0x004a7226);
    /* 004a7226: mov eax, 1 */ r_eax = 0x1u;
    /* 004a722b: jmp 0x4a723d */ goto L_004a723d;
L_004a722f:; BB(0x004a722f);
    /* 004a722f: mov eax, 1 */ r_eax = 0x1u;
    /* 004a7234: jmp 0x4a723d */ goto L_004a723d;
L_004a7238:; BB(0x004a7238);
    /* 004a7238: mov eax, 3 */ r_eax = 0x3u;
L_004a723d:; BB(0x004a723d);
    /* 004a723d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a7240: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a7247: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a7248: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a7249: mov esp, ebp */ r_esp = r_ebp;
    /* 004a724b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a724c: ret  */ FN_RET(0x004a6810); r_esp += 4; return;
}

