#include "protos.h"

void f_004a4090(void) /* sub_4A4090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a4090);
    /* 004a4090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4091: mov ebp, esp */ r_ebp = r_esp;
    /* 004a4093: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4096: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a4097: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a409d: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4a40a2u); f_0047e420();
    /* 004a40a2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004a40a5: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004a40ab: mov word ptr [ebp - 0x38], 0 */ W16((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 004a40b1: jmp 0x4a40bf */ goto L_004a40bf;
L_004a40b3:; BB(0x004a40b3);
    /* 004a40b3: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 004a40b7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a40bb: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
L_004a40bf:; BB(0x004a40bf);
    /* 004a40bf: movsx esi, word ptr [ebp - 0x38] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a40c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a40c9: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a40ceu); f_0047f950();
    /* 004a40ce: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a40d0: jge 0x4a416a */ if ((fS==fO)) goto L_004a416a;
L_004a40d6:; BB(0x004a40d6);
    /* 004a40d6: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a40da: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a40dd: jne 0x4a40e1 */ if (!fZ) goto L_004a40e1;
L_004a40df:; BB(0x004a40df);
    /* 004a40df: jmp 0x4a40b3 */ goto L_004a40b3;
L_004a40e1:; BB(0x004a40e1);
    /* 004a40e1: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a40e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a40e6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a40ec: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a40f1u); f_0047e390();
    /* 004a40f1: mov ecx, eax */ r_ecx = r_eax;
    /* 004a40f3: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4a40f8u); f_004c7010();
    /* 004a40f8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a40fb: jne 0x4a4165 */ if (!fZ) goto L_004a4165;
L_004a40fd:; BB(0x004a40fd);
    /* 004a40fd: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a4101: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4102: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4108: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a410du); f_0047e390();
    /* 004a410d: mov ecx, eax */ r_ecx = r_eax;
    /* 004a410f: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a4114u); f_004c7050();
    /* 004a4114: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4115: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a411b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a411e: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x4a4123u); f_004f69e0();
    /* 004a4123: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4126: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a412a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a412c: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 004a4130: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a4134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4135: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a413b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a4140u); f_0047e390();
    /* 004a4140: mov ecx, eax */ r_ecx = r_eax;
    /* 004a4142: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a4147u); f_004c7050();
    /* 004a4147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4148: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a414e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4151: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x4a4156u); f_004f6880();
    /* 004a4156: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4159: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a415b: jle 0x4a4165 */ if ((fZ||fS!=fO)) goto L_004a4165;
L_004a415d:; BB(0x004a415d);
    /* 004a415d: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004a4163: jmp 0x4a416a */ goto L_004a416a;
L_004a4165:; BB(0x004a4165);
    /* 004a4165: jmp 0x4a40b3 */ goto L_004a40b3;
L_004a416a:; BB(0x004a416a);
    /* 004a416a: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4170: call 0x4cc3f0 */ r_esp -= 4; W32(r_esp, 0x4a4175u); f_004cc3f0();
    /* 004a4175: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4178: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a417c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4181u); f_0062fbf0();
    /* 004a4181: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4184: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 004a4188: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a418b: movsx ecx, word ptr [eax*2 + 0x791798] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791798u));
    /* 004a4193: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a4197: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a419b: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a419e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a41a0: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a41a3: jle 0x4a41da */ if ((fZ||fS!=fO)) goto L_004a41da;
L_004a41a5:; BB(0x004a41a5);
    /* 004a41a5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a41a8: movsx edx, word ptr [ecx*2 + 0x791798] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791798u));
    /* 004a41b0: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a41b4: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a41b8: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a41bb: lea edx, [edx + eax - 0xa] */ r_edx = (u32)(r_edx+r_eax+0xfffffff6u);
    /* 004a41bf: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004a41c2: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004a41c5: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a41cb: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a41ce: fadd qword ptr [eax*8 + 0x791d90] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x791d90u));
    /* 004a41d5: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004a41d8: jmp 0x4a41e7 */ goto L_004a41e7;
L_004a41da:; BB(0x004a41da);
    /* 004a41da: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a41dd: fld qword ptr [ecx*8 + 0x791d90] */ FPUSH(R_F64((u32)(r_ecx*8+0x791d90u)));
    /* 004a41e4: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_004a41e7:; BB(0x004a41e7);
    /* 004a41e7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a41e9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a41ef: call 0x4d0000 */ r_esp -= 4; W32(r_esp, 0x4a41f4u); f_004d0000();
    /* 004a41f4: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 004a41f8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a41fa: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4200: call 0x4d0000 */ r_esp -= 4; W32(r_esp, 0x4a4205u); f_004d0000();
    /* 004a4205: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 004a4209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a420b: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4211: call 0x4d0000 */ r_esp -= 4; W32(r_esp, 0x4a4216u); f_004d0000();
    /* 004a4216: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 004a421a: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4220: call 0x4d02f0 */ r_esp -= 4; W32(r_esp, 0x4a4225u); f_004d02f0();
    /* 004a4225: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004a4229: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a422d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a422e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4233u); f_0062fbf0();
    /* 004a4233: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4236: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004a4239: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 004a423c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a4242: fld1  */ FPUSH(1.0);
    /* 004a4244: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a4246: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a424a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a424b: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 004a424e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4253u); f_0062fbf0();
    /* 004a4253: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4256: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004a4259: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 004a425c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a4262: fsubr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) - ST(0);
    /* 004a4265: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 004a4268: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004a426b: movsx esi, word ptr [ebp - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a426f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4275: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a427au); f_0047ce60();
    /* 004a427a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a427b: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a427f: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a4282: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4283: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4289: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x4a428eu); f_004c6f90();
    /* 004a428e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a4290: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 004a4293: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 004a4296: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a429c: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a429f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a42a2: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004a42a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a42ab: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a42ae: jp 0x4a42c9 */ if (fP) goto L_004a42c9;
L_004a42b0:; BB(0x004a42b0);
    /* 004a42b0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a42b3: mov word ptr [eax*2 + 0x791768], 5 */ W16((u32)(r_eax*2+0x791768u), 0x5u);
    /* 004a42bd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a42bf: jmp 0x4a443c */ goto L_004a443c;
L_004a42c9:; BB(0x004a42c9);
    /* 004a42c9: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004a42cd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a42d3: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a42d8u); f_0047ce60();
    /* 004a42d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a42d9: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a42dd: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a42e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a42e1: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a42e7: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x4a42ecu); f_004c6f90();
    /* 004a42ec: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a42ee: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 004a42f1: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 004a42f4: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a42fa: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a42fd: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a4300: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004a4307: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a4309: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a430c: jp 0x4a4327 */ if (fP) goto L_004a4327;
L_004a430e:; BB(0x004a430e);
    /* 004a430e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a4311: mov word ptr [eax*2 + 0x791768], 4 */ W16((u32)(r_eax*2+0x791768u), 0x4u);
    /* 004a431b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a431d: jmp 0x4a443c */ goto L_004a443c;
L_004a4327:; BB(0x004a4327);
    /* 004a4327: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a432b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4331: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a4336u); f_0047ce60();
    /* 004a4336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4337: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a433b: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a433e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a433f: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4345: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x4a434au); f_004c6f90();
    /* 004a434a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a434c: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 004a434f: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 004a4352: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a4358: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a435b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a435e: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004a4365: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a4367: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a436a: jp 0x4a4385 */ if (fP) goto L_004a4385;
L_004a436c:; BB(0x004a436c);
    /* 004a436c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a436f: mov word ptr [eax*2 + 0x791768], 3 */ W16((u32)(r_eax*2+0x791768u), 0x3u);
    /* 004a4379: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a437b: jmp 0x4a443c */ goto L_004a443c;
L_004a4385:; BB(0x004a4385);
    /* 004a4385: movsx esi, word ptr [ebp - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a4389: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a438f: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x4a4394u); f_004c6fd0();
    /* 004a4394: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a4396: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 004a4399: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 004a439c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a43a2: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a43a5: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004a43a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a43aa: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a43ad: jp 0x4a43c2 */ if (fP) goto L_004a43c2;
L_004a43af:; BB(0x004a43af);
    /* 004a43af: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a43b2: mov word ptr [ecx*2 + 0x791768], 0xc */ W16((u32)(r_ecx*2+0x791768u), 0xcu);
    /* 004a43bc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a43be: jmp 0x4a443c */ goto L_004a443c;
L_004a43c2:; BB(0x004a43c2);
    /* 004a43c2: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004a43c6: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a43cc: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x4a43d1u); f_004c6fd0();
    /* 004a43d1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a43d3: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 004a43d6: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 004a43d9: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a43df: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a43e2: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004a43e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a43e7: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a43ea: jp 0x4a43ff */ if (fP) goto L_004a43ff;
L_004a43ec:; BB(0x004a43ec);
    /* 004a43ec: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a43ef: mov word ptr [edx*2 + 0x791768], 0xb */ W16((u32)(r_edx*2+0x791768u), 0xbu);
    /* 004a43f9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a43fb: jmp 0x4a443c */ goto L_004a443c;
L_004a43ff:; BB(0x004a43ff);
    /* 004a43ff: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a4403: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4409: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x4a440eu); f_004c6fd0();
    /* 004a440e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a4410: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 004a4413: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 004a4416: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a441c: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004a441f: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004a4422: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a4424: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a4427: jp 0x4a443a */ if (fP) goto L_004a443a;
L_004a4429:; BB(0x004a4429);
    /* 004a4429: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004a442c: mov word ptr [eax*2 + 0x791768], 0xa */ W16((u32)(r_eax*2+0x791768u), 0xau);
    /* 004a4436: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004a4438: jmp 0x4a443c */ goto L_004a443c;
L_004a443a:; BB(0x004a443a);
    /* 004a443a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004a443c:; BB(0x004a443c);
    /* 004a443c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a443d: mov esp, ebp */ r_esp = r_ebp;
    /* 004a443f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4440: ret  */ FN_RET(0x004a4090); r_esp += 4; return;
}

void f_004a4500(void) /* sub_4A4500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a4500);
    /* 004a4500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4501: mov ebp, esp */ r_ebp = r_esp;
    /* 004a4503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a4505: push 0x6a11d3 */ { u32 v = 0x6a11d3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a450a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a4510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4511: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4514: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a4515: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004a451a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a451c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a451d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004a4520: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004a4526: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a452c: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4a4531u); f_0047e420();
    /* 004a4531: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004a4534: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4537: movsx ecx, word ptr [eax*2 + 0x791d80] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791d80u));
    /* 004a453f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4541: je 0x4a49cd */ if (fZ) goto L_004a49cd;
L_004a4547:; BB(0x004a4547);
    /* 004a4547: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a454d: call 0x4d2aa0 */ r_esp -= 4; W32(r_esp, 0x4a4552u); f_004d2aa0();
    /* 004a4552: mov word ptr [ebp - 0x50], ax */ W16((u32)(r_ebp+0xffffffb0u), (u16)r_eax);
    /* 004a4556: movsx edx, word ptr [ebp - 0x50] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 004a455a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a455b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4560u); f_0062fbf0();
    /* 004a4560: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4563: mov esi, eax */ r_esi = r_eax;
    /* 004a4565: movsx eax, word ptr [ebp - 0x50] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb0u));
    /* 004a4569: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a456a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a456fu); f_0062fbf0();
    /* 004a456f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4572: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a4574: mov eax, esi */ r_eax = r_esi;
    /* 004a4576: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a4577: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a4579: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004a457b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a457e: mov word ptr [ecx*2 + 0x791798], ax */ W16((u32)(r_ecx*2+0x791798u), (u16)r_eax);
    /* 004a4586: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 004a4589: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a458a: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4590: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a4595u); f_004c7c40();
    /* 004a4595: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a459c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a459f: mov word ptr [eax*2 + 0x791d80], 0 */ W16((u32)(r_eax*2+0x791d80u), 0x0u);
    /* 004a45a9: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 004a45ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a45ad: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 004a45b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a45b1: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 004a45b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a45b5: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 004a45b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a45b9: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 004a45bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a45bd: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 004a45c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a45c1: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 004a45c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a45c5: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 004a45c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a45c9: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 004a45cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a45cd: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004a45d0: call 0x492430 */ r_esp -= 4; W32(r_esp, 0x4a45d5u); f_00492430();
    /* 004a45d5: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004a45db: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a45e1: call 0x4d2ea0 */ r_esp -= 4; W32(r_esp, 0x4a45e6u); f_004d2ea0();
    /* 004a45e6: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
    /* 004a45ea: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a45f0: call 0x4d2ec0 */ r_esp -= 4; W32(r_esp, 0x4a45f5u); f_004d2ec0();
    /* 004a45f5: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 004a45f9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a45ff: call 0x4d2ee0 */ r_esp -= 4; W32(r_esp, 0x4a4604u); f_004d2ee0();
    /* 004a4604: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 004a4608: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a460e: call 0x4d2f00 */ r_esp -= 4; W32(r_esp, 0x4a4613u); f_004d2f00();
    /* 004a4613: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 004a4617: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a461b: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004a461f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a4620: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004a4620, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004a4620, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004a4622: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4626: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a4628: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a462c: movsx eax, word ptr [ebp - 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a4630: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4633: jne 0x4a4647 */ if (!fZ) goto L_004a4647;
L_004a4635:; BB(0x004a4635);
    /* 004a4635: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a4639: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a463d: lea eax, [edx + ecx + 9] */ r_eax = (u32)(r_edx+r_ecx+0x9u);
    /* 004a4641: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a4645: jmp 0x4a46af */ goto L_004a46af;
L_004a4647:; BB(0x004a4647);
    /* 004a4647: movsx ecx, word ptr [ebp - 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a464b: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a464e: jne 0x4a4662 */ if (!fZ) goto L_004a4662;
L_004a4650:; BB(0x004a4650);
    /* 004a4650: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a4654: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4658: lea ecx, [eax + edx + 7] */ r_ecx = (u32)(r_eax+r_edx+0x7u);
    /* 004a465c: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a4660: jmp 0x4a46af */ goto L_004a46af;
L_004a4662:; BB(0x004a4662);
    /* 004a4662: movsx edx, word ptr [ebp - 0x54] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a4666: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4669: jne 0x4a467d */ if (!fZ) goto L_004a467d;
L_004a466b:; BB(0x004a466b);
    /* 004a466b: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a466f: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4673: lea edx, [ecx + eax + 3] */ r_edx = (u32)(r_ecx+r_eax+0x3u);
    /* 004a4677: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a467b: jmp 0x4a46af */ goto L_004a46af;
L_004a467d:; BB(0x004a467d);
    /* 004a467d: movsx eax, word ptr [ebp - 0x54] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a4681: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4684: jle 0x4a4698 */ if ((fZ||fS!=fO)) goto L_004a4698;
L_004a4686:; BB(0x004a4686);
    /* 004a4686: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a468a: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a468e: lea eax, [edx + ecx + 1] */ r_eax = (u32)(r_edx+r_ecx+0x1u);
    /* 004a4692: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a4696: jmp 0x4a46af */ goto L_004a46af;
L_004a4698:; BB(0x004a4698);
    /* 004a4698: movsx ecx, word ptr [ebp - 0x54] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffacu));
    /* 004a469c: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a469f: jl 0x4a46af */ if ((fS!=fO)) goto L_004a46af;
L_004a46a1:; BB(0x004a46a1);
    /* 004a46a1: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a46a5: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a46a9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a46ab: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_004a46af:; BB(0x004a46af);
    /* 004a46af: movsx ecx, word ptr [ebp - 0x60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004a46b3: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a46b6: jne 0x4a46ca */ if (!fZ) goto L_004a46ca;
L_004a46b8:; BB(0x004a46b8);
    /* 004a46b8: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a46bc: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a46c0: lea ecx, [eax + edx + 7] */ r_ecx = (u32)(r_eax+r_edx+0x7u);
    /* 004a46c4: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a46c8: jmp 0x4a4717 */ goto L_004a4717;
L_004a46ca:; BB(0x004a46ca);
    /* 004a46ca: movsx edx, word ptr [ebp - 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004a46ce: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a46d1: jne 0x4a46e5 */ if (!fZ) goto L_004a46e5;
L_004a46d3:; BB(0x004a46d3);
    /* 004a46d3: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a46d7: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a46db: lea edx, [ecx + eax + 3] */ r_edx = (u32)(r_ecx+r_eax+0x3u);
    /* 004a46df: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a46e3: jmp 0x4a4717 */ goto L_004a4717;
L_004a46e5:; BB(0x004a46e5);
    /* 004a46e5: movsx eax, word ptr [ebp - 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004a46e9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a46ec: jle 0x4a4700 */ if ((fZ||fS!=fO)) goto L_004a4700;
L_004a46ee:; BB(0x004a46ee);
    /* 004a46ee: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a46f2: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a46f6: lea eax, [edx + ecx + 1] */ r_eax = (u32)(r_edx+r_ecx+0x1u);
    /* 004a46fa: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a46fe: jmp 0x4a4717 */ goto L_004a4717;
L_004a4700:; BB(0x004a4700);
    /* 004a4700: movsx ecx, word ptr [ebp - 0x60] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa0u));
    /* 004a4704: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4707: jl 0x4a4717 */ if ((fS!=fO)) goto L_004a4717;
L_004a4709:; BB(0x004a4709);
    /* 004a4709: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a470d: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4711: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a4713: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_004a4717:; BB(0x004a4717);
    /* 004a4717: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a471b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a471d: jle 0x4a4737 */ if ((fZ||fS!=fO)) goto L_004a4737;
L_004a471f:; BB(0x004a471f);
    /* 004a471f: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a4723: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004a4727: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a472a: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a472d: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4731: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4733: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
L_004a4737:; BB(0x004a4737);
    /* 004a4737: movsx edx, word ptr [ebp - 0x58] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a473b: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a473e: jne 0x4a4752 */ if (!fZ) goto L_004a4752;
L_004a4740:; BB(0x004a4740);
    /* 004a4740: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a4744: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4748: lea edx, [ecx + eax + 9] */ r_edx = (u32)(r_ecx+r_eax+0x9u);
    /* 004a474c: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a4750: jmp 0x4a47a1 */ goto L_004a47a1;
L_004a4752:; BB(0x004a4752);
    /* 004a4752: movsx eax, word ptr [ebp - 0x58] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a4756: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4759: jne 0x4a476d */ if (!fZ) goto L_004a476d;
L_004a475b:; BB(0x004a475b);
    /* 004a475b: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a475f: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4763: lea eax, [edx + ecx + 7] */ r_eax = (u32)(r_edx+r_ecx+0x7u);
    /* 004a4767: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a476b: jmp 0x4a47a1 */ goto L_004a47a1;
L_004a476d:; BB(0x004a476d);
    /* 004a476d: movsx ecx, word ptr [ebp - 0x58] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a4771: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4774: jne 0x4a4788 */ if (!fZ) goto L_004a4788;
L_004a4776:; BB(0x004a4776);
    /* 004a4776: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a477a: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a477e: lea ecx, [eax + edx + 3] */ r_ecx = (u32)(r_eax+r_edx+0x3u);
    /* 004a4782: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a4786: jmp 0x4a47a1 */ goto L_004a47a1;
L_004a4788:; BB(0x004a4788);
    /* 004a4788: movsx edx, word ptr [ebp - 0x58] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa8u));
    /* 004a478c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a478f: jl 0x4a47a1 */ if ((fS!=fO)) goto L_004a47a1;
L_004a4791:; BB(0x004a4791);
    /* 004a4791: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a4795: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4799: lea edx, [ecx + eax + 1] */ r_edx = (u32)(r_ecx+r_eax+0x1u);
    /* 004a479d: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
L_004a47a1:; BB(0x004a47a1);
    /* 004a47a1: movsx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004a47a5: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a47a8: jne 0x4a47bc */ if (!fZ) goto L_004a47bc;
L_004a47aa:; BB(0x004a47aa);
    /* 004a47aa: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a47ae: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a47b2: lea eax, [edx + ecx + 9] */ r_eax = (u32)(r_edx+r_ecx+0x9u);
    /* 004a47b6: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 004a47ba: jmp 0x4a480b */ goto L_004a480b;
L_004a47bc:; BB(0x004a47bc);
    /* 004a47bc: movsx ecx, word ptr [ebp - 0x5c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004a47c0: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a47c3: jne 0x4a47d7 */ if (!fZ) goto L_004a47d7;
L_004a47c5:; BB(0x004a47c5);
    /* 004a47c5: movsx edx, word ptr [ebp - 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a47c9: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a47cd: lea ecx, [eax + edx + 7] */ r_ecx = (u32)(r_eax+r_edx+0x7u);
    /* 004a47d1: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a47d5: jmp 0x4a480b */ goto L_004a480b;
L_004a47d7:; BB(0x004a47d7);
    /* 004a47d7: movsx edx, word ptr [ebp - 0x5c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004a47db: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a47de: jne 0x4a47f2 */ if (!fZ) goto L_004a47f2;
L_004a47e0:; BB(0x004a47e0);
    /* 004a47e0: movsx eax, word ptr [ebp - 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a47e4: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a47e8: lea edx, [ecx + eax + 3] */ r_edx = (u32)(r_ecx+r_eax+0x3u);
    /* 004a47ec: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a47f0: jmp 0x4a480b */ goto L_004a480b;
L_004a47f2:; BB(0x004a47f2);
    /* 004a47f2: movsx eax, word ptr [ebp - 0x5c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffa4u));
    /* 004a47f6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a47f9: jl 0x4a480b */ if ((fS!=fO)) goto L_004a480b;
L_004a47fb:; BB(0x004a47fb);
    /* 004a47fb: movsx ecx, word ptr [ebp - 0x18] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe8u));
    /* 004a47ff: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4803: lea eax, [edx + ecx + 1] */ r_eax = (u32)(r_edx+r_ecx+0x1u);
    /* 004a4807: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_004a480b:; BB(0x004a480b);
    /* 004a480b: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a480f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a4811: jle 0x4a4828 */ if ((fZ||fS!=fO)) goto L_004a4828;
L_004a4813:; BB(0x004a4813);
    /* 004a4813: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a4817: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a481b: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a481e: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4822: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4824: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
L_004a4828:; BB(0x004a4828);
    /* 004a4828: movsx edx, word ptr [ebp - 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 004a482c: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a482f: jne 0x4a4843 */ if (!fZ) goto L_004a4843;
L_004a4831:; BB(0x004a4831);
    /* 004a4831: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a4835: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4839: lea edx, [ecx + eax + 4] */ r_edx = (u32)(r_ecx+r_eax+0x4u);
    /* 004a483d: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
    /* 004a4841: jmp 0x4a485c */ goto L_004a485c;
L_004a4843:; BB(0x004a4843);
    /* 004a4843: movsx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 004a4847: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a484a: jne 0x4a485c */ if (!fZ) goto L_004a485c;
L_004a484c:; BB(0x004a484c);
    /* 004a484c: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a4850: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4854: lea eax, [edx + ecx + 2] */ r_eax = (u32)(r_edx+r_ecx+0x2u);
    /* 004a4858: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_004a485c:; BB(0x004a485c);
    /* 004a485c: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 004a4860: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4863: jne 0x4a4877 */ if (!fZ) goto L_004a4877;
L_004a4865:; BB(0x004a4865);
    /* 004a4865: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a4869: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a486d: lea ecx, [eax + edx + 2] */ r_ecx = (u32)(r_eax+r_edx+0x2u);
    /* 004a4871: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
    /* 004a4875: jmp 0x4a488e */ goto L_004a488e;
L_004a4877:; BB(0x004a4877);
    /* 004a4877: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 004a487b: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a487e: jne 0x4a488e */ if (!fZ) goto L_004a488e;
L_004a4880:; BB(0x004a4880);
    /* 004a4880: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 004a4884: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4888: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a488a: mov word ptr [ebp - 0x1c], cx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_ecx);
L_004a488e:; BB(0x004a488e);
    /* 004a488e: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4892: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004a4894: jge 0x4a489c */ if ((fS==fO)) goto L_004a489c;
L_004a4896:; BB(0x004a4896);
    /* 004a4896: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004a489c:; BB(0x004a489c);
    /* 004a489c: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a48a0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a48a1: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004a48a6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004a48a6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004a48a6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004a48a8: mov word ptr [ebp - 0x40], ax */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_eax);
    /* 004a48ac: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a48b0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004a48b3: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a48b6: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a48b8: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004a48bd: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a48c0: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a48c2: mov word ptr [ebp - 0x20], dx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edx);
    /* 004a48c6: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a48cc: call 0x4d22f0 */ r_esp -= 4; W32(r_esp, 0x4a48d1u); f_004d22f0();
    /* 004a48d1: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 004a48d5: mov word ptr [ebp - 0x64], 0 */ W16((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 004a48db: jmp 0x4a48e9 */ goto L_004a48e9;
L_004a48dd:; BB(0x004a48dd);
    /* 004a48dd: mov dx, word ptr [ebp - 0x64] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff9cu))) & 0xffffu);
    /* 004a48e1: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a48e5: mov word ptr [ebp - 0x64], dx */ W16((u32)(r_ebp+0xffffff9cu), (u16)r_edx);
L_004a48e9:; BB(0x004a48e9);
    /* 004a48e9: movsx eax, word ptr [ebp - 0x64] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff9cu));
    /* 004a48ed: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004a48f1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a48f3: jge 0x4a4926 */ if ((fS==fO)) goto L_004a4926;
L_004a48f5:; BB(0x004a48f5);
    /* 004a48f5: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004a48f9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a48ff: call 0x4c6db0 */ r_esp -= 4; W32(r_esp, 0x4a4904u); f_004c6db0();
    /* 004a4904: mov edx, 0x64 */ r_edx = 0x64u;
    /* 004a4909: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a490b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a490c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4911u); f_0062fbf0();
    /* 004a4911: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4914: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4916: jle 0x4a4924 */ if ((fZ||fS!=fO)) goto L_004a4924;
L_004a4918:; BB(0x004a4918);
    /* 004a4918: mov ax, word ptr [ebp - 0x40] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc0u))) & 0xffffu);
    /* 004a491c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a4920: mov word ptr [ebp - 0x40], ax */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_eax);
L_004a4924:; BB(0x004a4924);
    /* 004a4924: jmp 0x4a48dd */ goto L_004a48dd;
L_004a4926:; BB(0x004a4926);
    /* 004a4926: movsx ecx, word ptr [ebp - 0x40] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a492a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a492d: jl 0x4a494c */ if ((fS!=fO)) goto L_004a494c;
L_004a492f:; BB(0x004a492f);
    /* 004a492f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4931: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4936u); f_0062fbf0();
    /* 004a4936: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4939: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a493b: jne 0x4a494c */ if (!fZ) goto L_004a494c;
L_004a493d:; BB(0x004a493d);
    /* 004a493d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4940: mov word ptr [edx*2 + 0x791768], 5 */ W16((u32)(r_edx*2+0x791768u), 0x5u);
    /* 004a494a: jmp 0x4a49be */ goto L_004a49be;
L_004a494c:; BB(0x004a494c);
    /* 004a494c: movsx eax, word ptr [ebp - 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a4950: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4953: jl 0x4a4973 */ if ((fS!=fO)) goto L_004a4973;
L_004a4955:; BB(0x004a4955);
    /* 004a4955: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4957: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a495cu); f_0062fbf0();
    /* 004a495c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a495f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4962: jge 0x4a4973 */ if ((fS==fO)) goto L_004a4973;
L_004a4964:; BB(0x004a4964);
    /* 004a4964: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4967: mov word ptr [ecx*2 + 0x791768], 4 */ W16((u32)(r_ecx*2+0x791768u), 0x4u);
    /* 004a4971: jmp 0x4a49be */ goto L_004a49be;
L_004a4973:; BB(0x004a4973);
    /* 004a4973: movsx edx, word ptr [ebp - 0x40] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a4977: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a497a: jl 0x4a4999 */ if ((fS!=fO)) goto L_004a4999;
L_004a497c:; BB(0x004a497c);
    /* 004a497c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a497e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4983u); f_0062fbf0();
    /* 004a4983: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4988: jne 0x4a4999 */ if (!fZ) goto L_004a4999;
L_004a498a:; BB(0x004a498a);
    /* 004a498a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a498d: mov word ptr [eax*2 + 0x791768], 3 */ W16((u32)(r_eax*2+0x791768u), 0x3u);
    /* 004a4997: jmp 0x4a49be */ goto L_004a49be;
L_004a4999:; BB(0x004a4999);
    /* 004a4999: movsx ecx, word ptr [ebp - 0x40] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc0u));
    /* 004a499d: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a49a0: jl 0x4a49b1 */ if ((fS!=fO)) goto L_004a49b1;
L_004a49a2:; BB(0x004a49a2);
    /* 004a49a2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a49a5: mov word ptr [edx*2 + 0x791768], 2 */ W16((u32)(r_edx*2+0x791768u), 0x2u);
    /* 004a49af: jmp 0x4a49be */ goto L_004a49be;
L_004a49b1:; BB(0x004a49b1);
    /* 004a49b1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a49b4: mov word ptr [eax*2 + 0x791768], 0 */ W16((u32)(r_eax*2+0x791768u), 0x0u);
L_004a49be:; BB(0x004a49be);
    /* 004a49be: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a49c5: lea ecx, [ebp - 0x4c] */ r_ecx = (u32)(r_ebp+0xffffffb4u);
    /* 004a49c8: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4a49cdu); f_00484470();
L_004a49cd:; BB(0x004a49cd);
    /* 004a49cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a49d0: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a49d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a49da: jne 0x4a4a1b */ if (!fZ) goto L_004a4a1b;
L_004a49dc:; BB(0x004a49dc);
    /* 004a49dc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a49e2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a49e5: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a49eau); f_004f6640();
    /* 004a49ea: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a49ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a49ef: je 0x4a4a0f */ if (fZ) goto L_004a4a0f;
L_004a49f1:; BB(0x004a49f1);
    /* 004a49f1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a49f7: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4a49fcu); f_0047d6b0();
    /* 004a49fc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a49ff: jne 0x4a4a03 */ if (!fZ) goto L_004a4a03;
L_004a4a01:; BB(0x004a4a01);
    /* 004a4a01: jmp 0x4a4a0d */ goto L_004a4a0d;
L_004a4a03:; BB(0x004a4a03);
    /* 004a4a03: mov eax, 1 */ r_eax = 0x1u;
    /* 004a4a08: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4a0d:; BB(0x004a4a0d);
    /* 004a4a0d: jmp 0x4a4a16 */ goto L_004a4a16;
L_004a4a0f:; BB(0x004a4a0f);
    /* 004a4a0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4a11: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4a16:; BB(0x004a4a16);
    /* 004a4a16: jmp 0x4a4c5c */ goto L_004a4c5c;
L_004a4a1b:; BB(0x004a4a1b);
    /* 004a4a1b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4a1e: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a4a26: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4a29: jne 0x4a4add */ if (!fZ) goto L_004a4add;
L_004a4a2f:; BB(0x004a4a2f);
    /* 004a4a2f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a31: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4a36u); f_0062fbf0();
    /* 004a4a36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4a39: mov esi, eax */ r_esi = r_eax;
    /* 004a4a3b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a3d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a4a40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a41: call 0x4a4de0 */ r_esp -= 4; W32(r_esp, 0x4a4a46u); f_004a4de0();
    /* 004a4a46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4a49: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4a4c: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4a4e: jge 0x4a4ad8 */ if ((fS==fO)) goto L_004a4ad8;
L_004a4a54:; BB(0x004a4a54);
    /* 004a4a54: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a56: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4a5c: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a4a61u); f_004c79d0();
    /* 004a4a61: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4a63: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4a68u); f_0062fbf0();
    /* 004a4a68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4a6b: mov esi, eax */ r_esi = r_eax;
    /* 004a4a6d: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4a73: call 0x4d2960 */ r_esp -= 4; W32(r_esp, 0x4a4a78u); f_004d2960();
    /* 004a4a78: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4a7b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4a7d: jge 0x4a4a8c */ if ((fS==fO)) goto L_004a4a8c;
L_004a4a7f:; BB(0x004a4a7f);
    /* 004a4a7f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4a82: mov word ptr [eax*2 + 0x791768], 4 */ W16((u32)(r_eax*2+0x791768u), 0x4u);
L_004a4a8c:; BB(0x004a4a8c);
    /* 004a4a8c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4a92: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4a95: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a4a9au); f_004f6640();
    /* 004a4a9a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a4a9d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4a9f: je 0x4a4aad */ if (fZ) goto L_004a4aad;
L_004a4aa1:; BB(0x004a4aa1);
    /* 004a4aa1: mov eax, 2 */ r_eax = 0x2u;
    /* 004a4aa6: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4aad:; BB(0x004a4aad);
    /* 004a4aad: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4ab3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4ab6: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a4abbu); f_004f66e0();
    /* 004a4abb: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a4abe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4ac0: je 0x4a4ace */ if (fZ) goto L_004a4ace;
L_004a4ac2:; BB(0x004a4ac2);
    /* 004a4ac2: mov eax, 4 */ r_eax = 0x4u;
    /* 004a4ac7: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4ace:; BB(0x004a4ace);
    /* 004a4ace: mov eax, 3 */ r_eax = 0x3u;
    /* 004a4ad3: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4ad8:; BB(0x004a4ad8);
    /* 004a4ad8: jmp 0x4a4c5c */ goto L_004a4c5c;
L_004a4add:; BB(0x004a4add);
    /* 004a4add: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4ae0: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a4ae8: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4aeb: jne 0x4a4b9f */ if (!fZ) goto L_004a4b9f;
L_004a4af1:; BB(0x004a4af1);
    /* 004a4af1: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4af3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4af8u); f_0062fbf0();
    /* 004a4af8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4afb: mov esi, eax */ r_esi = r_eax;
    /* 004a4afd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4aff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a4b02: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b03: call 0x4a4de0 */ r_esp -= 4; W32(r_esp, 0x4a4b08u); f_004a4de0();
    /* 004a4b08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4b0b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4b0e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4b10: jge 0x4a4b9a */ if ((fS==fO)) goto L_004a4b9a;
L_004a4b16:; BB(0x004a4b16);
    /* 004a4b16: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b18: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4b1e: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a4b23u); f_004c79d0();
    /* 004a4b23: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4b25: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4b2au); f_0062fbf0();
    /* 004a4b2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4b2d: mov esi, eax */ r_esi = r_eax;
    /* 004a4b2f: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4b35: call 0x4d2960 */ r_esp -= 4; W32(r_esp, 0x4a4b3au); f_004d2960();
    /* 004a4b3a: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4b3d: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4b3f: jge 0x4a4b4e */ if ((fS==fO)) goto L_004a4b4e;
L_004a4b41:; BB(0x004a4b41);
    /* 004a4b41: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4b44: mov word ptr [edx*2 + 0x791768], 3 */ W16((u32)(r_edx*2+0x791768u), 0x3u);
L_004a4b4e:; BB(0x004a4b4e);
    /* 004a4b4e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4b54: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4b57: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a4b5cu); f_004f6640();
    /* 004a4b5c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a4b5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4b61: je 0x4a4b6f */ if (fZ) goto L_004a4b6f;
L_004a4b63:; BB(0x004a4b63);
    /* 004a4b63: mov eax, 2 */ r_eax = 0x2u;
    /* 004a4b68: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4b6f:; BB(0x004a4b6f);
    /* 004a4b6f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4b75: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4b78: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a4b7du); f_004f66e0();
    /* 004a4b7d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a4b80: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4b82: je 0x4a4b90 */ if (fZ) goto L_004a4b90;
L_004a4b84:; BB(0x004a4b84);
    /* 004a4b84: mov eax, 4 */ r_eax = 0x4u;
    /* 004a4b89: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4b90:; BB(0x004a4b90);
    /* 004a4b90: mov eax, 3 */ r_eax = 0x3u;
    /* 004a4b95: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4b9a:; BB(0x004a4b9a);
    /* 004a4b9a: jmp 0x4a4c5c */ goto L_004a4c5c;
L_004a4b9f:; BB(0x004a4b9f);
    /* 004a4b9f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4ba2: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a4baa: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4bad: jne 0x4a4c5c */ if (!fZ) goto L_004a4c5c;
L_004a4bb3:; BB(0x004a4bb3);
    /* 004a4bb3: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4bb5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4bbau); f_0062fbf0();
    /* 004a4bba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4bbd: mov esi, eax */ r_esi = r_eax;
    /* 004a4bbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4bc1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a4bc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4bc5: call 0x4a4de0 */ r_esp -= 4; W32(r_esp, 0x4a4bcau); f_004a4de0();
    /* 004a4bca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4bcd: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4bd0: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4bd2: jge 0x4a4c5c */ if ((fS==fO)) goto L_004a4c5c;
L_004a4bd8:; BB(0x004a4bd8);
    /* 004a4bd8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4bda: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4be0: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a4be5u); f_004c79d0();
    /* 004a4be5: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4be7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4becu); f_0062fbf0();
    /* 004a4bec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4bef: mov esi, eax */ r_esi = r_eax;
    /* 004a4bf1: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4bf7: call 0x4d2960 */ r_esp -= 4; W32(r_esp, 0x4a4bfcu); f_004d2960();
    /* 004a4bfc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4bff: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4c01: jge 0x4a4c10 */ if ((fS==fO)) goto L_004a4c10;
L_004a4c03:; BB(0x004a4c03);
    /* 004a4c03: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4c06: mov word ptr [ecx*2 + 0x791768], 2 */ W16((u32)(r_ecx*2+0x791768u), 0x2u);
L_004a4c10:; BB(0x004a4c10);
    /* 004a4c10: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4c16: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4c19: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a4c1eu); f_004f6640();
    /* 004a4c1e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a4c21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4c23: je 0x4a4c31 */ if (fZ) goto L_004a4c31;
L_004a4c25:; BB(0x004a4c25);
    /* 004a4c25: mov eax, 2 */ r_eax = 0x2u;
    /* 004a4c2a: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4c31:; BB(0x004a4c31);
    /* 004a4c31: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4c37: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4c3a: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a4c3fu); f_004f66e0();
    /* 004a4c3f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a4c42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4c44: je 0x4a4c52 */ if (fZ) goto L_004a4c52;
L_004a4c46:; BB(0x004a4c46);
    /* 004a4c46: mov eax, 4 */ r_eax = 0x4u;
    /* 004a4c4b: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4c52:; BB(0x004a4c52);
    /* 004a4c52: mov eax, 3 */ r_eax = 0x3u;
    /* 004a4c57: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4c5c:; BB(0x004a4c5c);
    /* 004a4c5c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4c62: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4c65: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a4c6au); f_004f6640();
    /* 004a4c6a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a4c6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4c6f: je 0x4a4dbd */ if (fZ) goto L_004a4dbd;
L_004a4c75:; BB(0x004a4c75);
    /* 004a4c75: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4c7b: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4a4c80u); f_0047d6b0();
    /* 004a4c80: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4c83: jne 0x4a4db4 */ if (!fZ) goto L_004a4db4;
L_004a4c89:; BB(0x004a4c89);
    /* 004a4c89: mov word ptr [ebp - 0x6c], 0 */ W16((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 004a4c8f: mov word ptr [ebp - 0x70], 0 */ W16((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 004a4c95: jmp 0x4a4ca3 */ goto L_004a4ca3;
L_004a4c97:; BB(0x004a4c97);
    /* 004a4c97: mov dx, word ptr [ebp - 0x70] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffff90u))) & 0xffffu);
    /* 004a4c9b: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a4c9f: mov word ptr [ebp - 0x70], dx */ W16((u32)(r_ebp+0xffffff90u), (u16)r_edx);
L_004a4ca3:; BB(0x004a4ca3);
    /* 004a4ca3: movsx esi, word ptr [ebp - 0x70] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004a4ca7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4cad: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a4cb2u); f_0047f950();
    /* 004a4cb2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4cb4: jge 0x4a4d4e */ if ((fS==fO)) goto L_004a4d4e;
L_004a4cba:; BB(0x004a4cba);
    /* 004a4cba: movsx eax, word ptr [ebp - 0x70] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004a4cbe: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4cc1: jne 0x4a4cc5 */ if (!fZ) goto L_004a4cc5;
L_004a4cc3:; BB(0x004a4cc3);
    /* 004a4cc3: jmp 0x4a4c97 */ goto L_004a4c97;
L_004a4cc5:; BB(0x004a4cc5);
    /* 004a4cc5: movsx ecx, word ptr [ebp - 0x70] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004a4cc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4cca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4cd0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a4cd5u); f_0047e390();
    /* 004a4cd5: mov ecx, eax */ r_ecx = r_eax;
    /* 004a4cd7: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4a4cdcu); f_004c7010();
    /* 004a4cdc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4cdf: jne 0x4a4d49 */ if (!fZ) goto L_004a4d49;
L_004a4ce1:; BB(0x004a4ce1);
    /* 004a4ce1: movsx edx, word ptr [ebp - 0x70] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004a4ce5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4ce6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4cec: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a4cf1u); f_0047e390();
    /* 004a4cf1: mov ecx, eax */ r_ecx = r_eax;
    /* 004a4cf3: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a4cf8u); f_004c7050();
    /* 004a4cf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4cf9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4cff: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4d02: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x4a4d07u); f_004f69e0();
    /* 004a4d07: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4d0a: movsx ecx, word ptr [ebp - 0x6c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 004a4d0e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4d10: mov word ptr [ebp - 0x6c], cx */ W16((u32)(r_ebp+0xffffff94u), (u16)r_ecx);
    /* 004a4d14: movsx edx, word ptr [ebp - 0x70] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff90u));
    /* 004a4d18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d19: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4d1f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a4d24u); f_0047e390();
    /* 004a4d24: mov ecx, eax */ r_ecx = r_eax;
    /* 004a4d26: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a4d2bu); f_004c7050();
    /* 004a4d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d2c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4d32: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4d35: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x4a4d3au); f_004f6880();
    /* 004a4d3a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4d3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a4d3f: jle 0x4a4d49 */ if ((fZ||fS!=fO)) goto L_004a4d49;
L_004a4d41:; BB(0x004a4d41);
    /* 004a4d41: mov word ptr [ebp - 0x6c], 0 */ W16((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 004a4d47: jmp 0x4a4d4e */ goto L_004a4d4e;
L_004a4d49:; BB(0x004a4d49);
    /* 004a4d49: jmp 0x4a4c97 */ goto L_004a4c97;
L_004a4d4e:; BB(0x004a4d4e);
    /* 004a4d4e: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4d54: call 0x4d29a0 */ r_esp -= 4; W32(r_esp, 0x4a4d59u); f_004d29a0();
    /* 004a4d59: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4d5c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4d5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d60: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4d65u); f_0062fbf0();
    /* 004a4d65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4d68: mov word ptr [ebp - 0x68], ax */ W16((u32)(r_ebp+0xffffff98u), (u16)r_eax);
    /* 004a4d6c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4d6f: movsx eax, word ptr [edx*2 + 0x791798] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791798u));
    /* 004a4d77: movsx ecx, word ptr [ebp - 0x6c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff94u));
    /* 004a4d7b: movsx edx, word ptr [ebp - 0x68] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffff98u));
    /* 004a4d7f: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a4d82: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a4d84: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4d87: jle 0x4a4dab */ if ((fZ||fS!=fO)) goto L_004a4dab;
L_004a4d89:; BB(0x004a4d89);
    /* 004a4d89: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d8b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4d90u); f_0062fbf0();
    /* 004a4d90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4d93: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a4d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4d97: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4d9d: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a4da2u); f_004c79d0();
    /* 004a4da2: mov eax, 2 */ r_eax = 0x2u;
    /* 004a4da7: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4dab:; BB(0x004a4dab);
    /* 004a4dab: mov eax, 1 */ r_eax = 0x1u;
    /* 004a4db0: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4db4:; BB(0x004a4db4);
    /* 004a4db4: mov eax, 1 */ r_eax = 0x1u;
    /* 004a4db9: jmp 0x4a4dc2 */ goto L_004a4dc2;
L_004a4dbd:; BB(0x004a4dbd);
    /* 004a4dbd: mov eax, 3 */ r_eax = 0x3u;
L_004a4dc2:; BB(0x004a4dc2);
    /* 004a4dc2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a4dc5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a4dcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a4dcd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a4dce: mov esp, ebp */ r_esp = r_ebp;
    /* 004a4dd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4dd1: ret  */ FN_RET(0x004a4500); r_esp += 4; return;
}

void f_004a4de0(void) /* sub_4A4DE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a4de0);
    /* 004a4de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4de1: mov ebp, esp */ r_ebp = r_esp;
    /* 004a4de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4de4: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 004a4de8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4de9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4def: call 0x4d2750 */ r_esp -= 4; W32(r_esp, 0x4a4df4u); f_004d2750();
    /* 004a4df4: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004a4df8: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4dfc: jne 0x4a4e2d */ if (!fZ) goto L_004a4e2d;
L_004a4dfe:; BB(0x004a4dfe);
    /* 004a4dfe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4e04: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4e07: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a4e0cu); f_004f6640();
    /* 004a4e0c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a4e0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4e11: je 0x4a4e2d */ if (fZ) goto L_004a4e2d;
L_004a4e13:; BB(0x004a4e13);
    /* 004a4e13: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a4e17: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004a4e1b: mov eax, 0x64 */ r_eax = 0x64u;
    /* 004a4e20: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e22: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a4e23: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e25: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004a4e27: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4e29: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_004a4e2d:; BB(0x004a4e2d);
    /* 004a4e2d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004a4e31: mov esp, ebp */ r_esp = r_ebp;
    /* 004a4e33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a4e34: ret  */ FN_RET(0x004a4de0); r_esp += 4; return;
}

void f_004a4e40(void) /* sub_4A4E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004a4e40);
    /* 004a4e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e41: mov ebp, esp */ r_ebp = r_esp;
    /* 004a4e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e45: push 0x6a11f6 */ { u32 v = 0x6a11f6u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004a4e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e51: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4e57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e59: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004a4e5e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a4e60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e61: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004a4e64: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004a4e6a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4e70: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4a4e75u); f_0047e420();
    /* 004a4e75: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004a4e78: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4e7b: movsx ecx, word ptr [eax*2 + 0x791d80] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791d80u));
    /* 004a4e83: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4e86: je 0x4a51ec */ if (fZ) goto L_004a51ec;
L_004a4e8c:; BB(0x004a4e8c);
    /* 004a4e8c: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 004a4e8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4e90: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4e96: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a4e9bu); f_004c7c40();
    /* 004a4e9b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004a4ea2: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4ea6: jge 0x4a4f92 */ if ((fS==fO)) goto L_004a4f92;
L_004a4eac:; BB(0x004a4eac);
    /* 004a4eac: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004a4eb2: mov word ptr [ebp - 0x24], 0 */ W16((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004a4eb8: jmp 0x4a4ec6 */ goto L_004a4ec6;
L_004a4eba:; BB(0x004a4eba);
    /* 004a4eba: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 004a4ebe: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a4ec2: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_004a4ec6:; BB(0x004a4ec6);
    /* 004a4ec6: movsx esi, word ptr [ebp - 0x24] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a4eca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4ed0: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a4ed5u); f_0047f950();
    /* 004a4ed5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a4ed7: jge 0x4a4f35 */ if ((fS==fO)) goto L_004a4f35;
L_004a4ed9:; BB(0x004a4ed9);
    /* 004a4ed9: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a4edd: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4ee0: jne 0x4a4ee4 */ if (!fZ) goto L_004a4ee4;
L_004a4ee2:; BB(0x004a4ee2);
    /* 004a4ee2: jmp 0x4a4eba */ goto L_004a4eba;
L_004a4ee4:; BB(0x004a4ee4);
    /* 004a4ee4: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a4ee8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4ee9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4eef: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a4ef4u); f_0047e390();
    /* 004a4ef4: mov ecx, eax */ r_ecx = r_eax;
    /* 004a4ef6: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4a4efbu); f_004c7010();
    /* 004a4efb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4efe: jne 0x4a4f33 */ if (!fZ) goto L_004a4f33;
L_004a4f00:; BB(0x004a4f00);
    /* 004a4f00: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004a4f04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f05: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4f0b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4a4f10u); f_0047e390();
    /* 004a4f10: mov ecx, eax */ r_ecx = r_eax;
    /* 004a4f12: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4a4f17u); f_004c7050();
    /* 004a4f17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f18: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a4f1e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4f21: call 0x4f6a90 */ r_esp -= 4; W32(r_esp, 0x4a4f26u); f_004f6a90();
    /* 004a4f26: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4f29: movsx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4f2d: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a4f2f: mov word ptr [ebp - 0x1c], dx */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_edx);
L_004a4f33:; BB(0x004a4f33);
    /* 004a4f33: jmp 0x4a4eba */ goto L_004a4eba;
L_004a4f35:; BB(0x004a4f35);
    /* 004a4f35: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4f3b: call 0x4d2aa0 */ r_esp -= 4; W32(r_esp, 0x4a4f40u); f_004d2aa0();
    /* 004a4f40: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 004a4f44: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004a4f48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f49: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4f4eu); f_0062fbf0();
    /* 004a4f4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4f51: mov esi, eax */ r_esi = r_eax;
    /* 004a4f53: movsx ecx, word ptr [ebp - 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004a4f57: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f58: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4f5du); f_0062fbf0();
    /* 004a4f5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4f60: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a4f62: movsx edi, word ptr [ebp - 0x1c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004a4f66: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a4f6c: call 0x4d2a60 */ r_esp -= 4; W32(r_esp, 0x4a4f71u); f_004d2a60();
    /* 004a4f71: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a4f74: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a4f77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4f78: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a4f7du); f_0062fbf0();
    /* 004a4f7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4f80: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a4f83: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a4f85: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4f88: mov word ptr [eax*2 + 0x791798], si */ W16((u32)(r_eax*2+0x791798u), (u16)r_esi);
    /* 004a4f90: jmp 0x4a4f9f */ goto L_004a4f9f;
L_004a4f92:; BB(0x004a4f92);
    /* 004a4f92: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4f95: mov word ptr [ecx*2 + 0x791798], 0xa */ W16((u32)(r_ecx*2+0x791798u), 0xau);
L_004a4f9f:; BB(0x004a4f9f);
    /* 004a4f9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4fa1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4fa4: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a4fa7: add edx, 0x791460 */ {  u32 a = r_edx; u32 b = 0x791460u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a4fad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4fae: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4fb1: imul eax, eax, 0x18 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x18u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a4fb4: add eax, 0x7919d8 */ {  u32 a = r_eax; u32 b = 0x7919d8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a4fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a4fba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4fbd: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a4fc0: add ecx, 0x7915c8 */ {  u32 a = r_ecx; u32 b = 0x7915c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a4fc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4fc7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a4fca: mov edx, esp */ r_edx = r_esp;
    /* 004a4fcc: mov dword ptr [ebp - 0x58], esp */ W32((u32)(r_ebp+0xffffffa8u), r_esp);
    /* 004a4fcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4fd0: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 004a4fd5: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 004a4fd8: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a4fddu); f_004c7c40();
    /* 004a4fdd: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004a4fe0: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004a4fe3: call 0x491df0 */ r_esp -= 4; W32(r_esp, 0x4a4fe8u); f_00491df0();
    /* 004a4fe8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4feb: lea edx, [ecx*4 + 0x791688] */ r_edx = (u32)(r_ecx*4+0x791688u);
    /* 004a4ff2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4ff3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a4ff6: lea ecx, [eax*4 + 0x7915a8] */ r_ecx = (u32)(r_eax*4+0x7915a8u);
    /* 004a4ffd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4ffe: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5001: lea eax, [edx*4 + 0x791560] */ r_eax = (u32)(r_edx*4+0x791560u);
    /* 004a5008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5009: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a500c: lea edx, [ecx*4 + 0x791420] */ r_edx = (u32)(r_ecx*4+0x791420u);
    /* 004a5013: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5014: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5017: lea ecx, [eax*4 + 0x791d20] */ r_ecx = (u32)(r_eax*4+0x791d20u);
    /* 004a501e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a501f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5022: lea eax, [edx*4 + 0x791e10] */ r_eax = (u32)(r_edx*4+0x791e10u);
    /* 004a5029: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a502a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a502d: lea edx, [ecx*4 + 0x791588] */ r_edx = (u32)(r_ecx*4+0x791588u);
    /* 004a5034: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5035: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5038: lea ecx, [eax*4 + 0x791870] */ r_ecx = (u32)(r_eax*4+0x791870u);
    /* 004a503f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5040: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5043: lea eax, [edx*4 + 0x791ac0] */ r_eax = (u32)(r_edx*4+0x791ac0u);
    /* 004a504a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a504b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a504e: lea edx, [ecx*4 + 0x791848] */ r_edx = (u32)(r_ecx*4+0x791848u);
    /* 004a5055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5056: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5059: lea ecx, [eax*4 + 0x791894] */ r_ecx = (u32)(r_eax*4+0x791894u);
    /* 004a5060: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5061: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5064: lea eax, [edx*4 + 0x7918b4] */ r_eax = (u32)(r_edx*4+0x7918b4u);
    /* 004a506b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a506c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a506f: lea edx, [ecx*4 + 0x7916a8] */ r_edx = (u32)(r_ecx*4+0x7916a8u);
    /* 004a5076: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5077: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a507a: lea ecx, [eax*4 + 0x7918d4] */ r_ecx = (u32)(r_eax*4+0x7918d4u);
    /* 004a5081: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5082: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5085: lea eax, [edx*4 + 0x791938] */ r_eax = (u32)(r_edx*4+0x791938u);
    /* 004a508c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a508d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a5090: mov ecx, esp */ r_ecx = r_esp;
    /* 004a5092: mov dword ptr [ebp - 0x5c], esp */ W32((u32)(r_ebp+0xffffffa4u), r_esp);
    /* 004a5095: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5096: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 004a509c: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004a509f: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x4a50a4u); f_004c7c40();
    /* 004a50a4: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 004a50a7: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004a50aa: call 0x492ce0 */ r_esp -= 4; W32(r_esp, 0x4a50afu); f_00492ce0();
    /* 004a50af: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a50b2: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 004a50b6: mov word ptr [eax*2 + 0x791d80], cx */ W16((u32)(r_eax*2+0x791d80u), (u16)r_ecx);
    /* 004a50be: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a50c1: mov ax, word ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004a50c5: mov word ptr [edx*2 + 0x7919b8], ax */ W16((u32)(r_edx*2+0x7919b8u), (u16)r_eax);
    /* 004a50cd: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a50d1: jne 0x4a518b */ if (!fZ) goto L_004a518b;
L_004a50d7:; BB(0x004a50d7);
    /* 004a50d7: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a50d9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a50deu); f_0062fbf0();
    /* 004a50de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a50e1: mov esi, eax */ r_esi = r_eax;
    /* 004a50e3: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a50e5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a50eau); f_0062fbf0();
    /* 004a50ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a50ed: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 004a50f1: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a50f3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a50f8u); f_0062fbf0();
    /* 004a50f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a50fb: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a50fd: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004a50ff: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5104u); f_0062fbf0();
    /* 004a5104: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5107: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a5109: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 004a510c: fild dword ptr [ebp - 0x68] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff98u)));
    /* 004a510f: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004a5115: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5118: fstp qword ptr [ecx*8 + 0x791dd0] */ W_F64((u32)(r_ecx*8+0x791dd0u), ST(0)); FPOP();
    /* 004a511f: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004a5125: jmp 0x4a5133 */ goto L_004a5133;
L_004a5127:; BB(0x004a5127);
    /* 004a5127: mov dx, word ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004a512b: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004a512f: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
L_004a5133:; BB(0x004a5133);
    /* 004a5133: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a5137: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a513d: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4a5142u); f_0047f950();
    /* 004a5142: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a5144: jge 0x4a518b */ if ((fS==fO)) goto L_004a518b;
L_004a5146:; BB(0x004a5146);
    /* 004a5146: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5148: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a514du); f_0062fbf0();
    /* 004a514d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5150: mov esi, eax */ r_esi = r_eax;
    /* 004a5152: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5154: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5159u); f_0062fbf0();
    /* 004a5159: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a515c: lea esi, [esi + eax + 0x19] */ r_esi = (u32)(r_esi+r_eax+0x19u);
    /* 004a5160: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5162: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5167u); f_0062fbf0();
    /* 004a5167: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a516a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a516c: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 004a516f: fild dword ptr [ebp - 0x6c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff94u)));
    /* 004a5172: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004a5178: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a517b: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004a517e: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004a5182: fstp qword ptr [eax + ecx*8 + 0x791ae0] */ W_F64((u32)(r_eax+r_ecx*8+0x791ae0u), ST(0)); FPOP();
    /* 004a5189: jmp 0x4a5127 */ goto L_004a5127;
L_004a518b:; BB(0x004a518b);
    /* 004a518b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004a518e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a518f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004a5192: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5193: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a5196: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5197: call 0x4a5a80 */ r_esp -= 4; W32(r_esp, 0x4a519cu); f_004a5a80();
    /* 004a519c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a519f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a51a2: fstp qword ptr [edx*8 + 0x791d90] */ W_F64((u32)(r_edx*8+0x791d90u), ST(0)); FPOP();
    /* 004a51a9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a51ac: mov word ptr [eax*2 + 0x791768], 1 */ W16((u32)(r_eax*2+0x791768u), 0x1u);
    /* 004a51b6: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a51ba: jne 0x4a51d8 */ if (!fZ) goto L_004a51d8;
L_004a51bc:; BB(0x004a51bc);
    /* 004a51bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a51bf: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a51c2: cmp dword ptr [ecx + 0x7915c8], 0 */ {  u32 a = R32((u32)(r_ecx+0x7915c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a51c9: jne 0x4a51d8 */ if (!fZ) goto L_004a51d8;
L_004a51cb:; BB(0x004a51cb);
    /* 004a51cb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a51ce: mov word ptr [edx*2 + 0x791768], 6 */ W16((u32)(r_edx*2+0x791768u), 0x6u);
L_004a51d8:; BB(0x004a51d8);
    /* 004a51d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004a51df: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 004a51e2: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4a51e7u); f_00484470();
    /* 004a51e7: jmp 0x4a5276 */ goto L_004a5276;
L_004a51ec:; BB(0x004a51ec);
    /* 004a51ec: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a51ef: movsx ecx, word ptr [eax*2 + 0x7919b8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x7919b8u));
    /* 004a51f7: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a51fa: je 0x4a5258 */ if (fZ) goto L_004a5258;
L_004a51fc:; BB(0x004a51fc);
    /* 004a51fc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a51ff: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a5207: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a520a: je 0x4a5258 */ if (fZ) goto L_004a5258;
L_004a520c:; BB(0x004a520c);
    /* 004a520c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a520f: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a5217: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a521a: je 0x4a5258 */ if (fZ) goto L_004a5258;
L_004a521c:; BB(0x004a521c);
    /* 004a521c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a521f: mov cx, word ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 004a5223: mov word ptr [eax*2 + 0x7919b8], cx */ W16((u32)(r_eax*2+0x7919b8u), (u16)r_ecx);
    /* 004a522b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004a522e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a522f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004a5232: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5233: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a5236: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5237: call 0x4a5a80 */ r_esp -= 4; W32(r_esp, 0x4a523cu); f_004a5a80();
    /* 004a523c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a523f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5242: fstp qword ptr [edx*8 + 0x791d90] */ W_F64((u32)(r_edx*8+0x791d90u), ST(0)); FPOP();
    /* 004a5249: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a524c: mov word ptr [eax*2 + 0x791768], 1 */ W16((u32)(r_eax*2+0x791768u), 0x1u);
    /* 004a5256: jmp 0x4a5276 */ goto L_004a5276;
L_004a5258:; BB(0x004a5258);
    /* 004a5258: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004a525b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a525c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004a525f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5260: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004a5263: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5264: call 0x4a5a80 */ r_esp -= 4; W32(r_esp, 0x4a5269u); f_004a5a80();
    /* 004a5269: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a526c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a526f: fstp qword ptr [ecx*8 + 0x791d90] */ W_F64((u32)(r_ecx*8+0x791d90u), ST(0)); FPOP();
L_004a5276:; BB(0x004a5276);
    /* 004a5276: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5279: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a5281: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5284: jne 0x4a5305 */ if (!fZ) goto L_004a5305;
L_004a5286:; BB(0x004a5286);
    /* 004a5286: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5288: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a528e: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a5293u); f_004c79d0();
    /* 004a5293: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a5299: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a529c: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a52a1u); f_004f6640();
    /* 004a52a1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a52a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a52a6: je 0x4a52da */ if (fZ) goto L_004a52da;
L_004a52a8:; BB(0x004a52a8);
    /* 004a52a8: call 0x4a39c0 */ r_esp -= 4; W32(r_esp, 0x4a52adu); f_004a39c0();
    /* 004a52ad: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a52b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a52b2: jne 0x4a52ce */ if (!fZ) goto L_004a52ce;
L_004a52b4:; BB(0x004a52b4);
    /* 004a52b4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004a52b6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a52bbu); f_0062fbf0();
    /* 004a52bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a52be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a52c0: jne 0x4a52ce */ if (!fZ) goto L_004a52ce;
L_004a52c2:; BB(0x004a52c2);
    /* 004a52c2: mov eax, 1 */ r_eax = 0x1u;
    /* 004a52c7: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a52ce:; BB(0x004a52ce);
    /* 004a52ce: mov eax, 2 */ r_eax = 0x2u;
    /* 004a52d3: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a52da:; BB(0x004a52da);
    /* 004a52da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a52e0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a52e3: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a52e8u); f_004f66e0();
    /* 004a52e8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a52eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a52ed: je 0x4a52fb */ if (fZ) goto L_004a52fb;
L_004a52ef:; BB(0x004a52ef);
    /* 004a52ef: mov eax, 4 */ r_eax = 0x4u;
    /* 004a52f4: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a52fb:; BB(0x004a52fb);
    /* 004a52fb: mov eax, 3 */ r_eax = 0x3u;
    /* 004a5300: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5305:; BB(0x004a5305);
    /* 004a5305: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5308: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a5310: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5313: jne 0x4a548c */ if (!fZ) goto L_004a548c;
L_004a5319:; BB(0x004a5319);
    /* 004a5319: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a531f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a5322: call 0x4f6690 */ r_esp -= 4; W32(r_esp, 0x4a5327u); f_004f6690();
    /* 004a5327: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a532a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a532c: je 0x4a5469 */ if (fZ) goto L_004a5469;
L_004a5332:; BB(0x004a5332);
    /* 004a5332: fld qword ptr [0x6be528] */ FPUSH(R_F64((u32)(0x6be528u)));
    /* 004a5338: fstp qword ptr [ebp - 0x3c] */ W_F64((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 004a533b: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a5341: call 0x4c6df0 */ r_esp -= 4; W32(r_esp, 0x4a5346u); f_004c6df0();
    /* 004a5346: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 004a5349: fild dword ptr [ebp - 0x70] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff90u)));
    /* 004a534c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004a5352: fadd qword ptr [0x6b2c48] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c48u));
    /* 004a5358: fmul qword ptr [ebp - 0x3c] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc4u));
    /* 004a535b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a535e: fmul qword ptr [ecx*8 + 0x791d90] */ ST(0) = ST(0) * R_F64((u32)(r_ecx*8+0x791d90u));
    /* 004a5365: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a536b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a536e: fstp qword ptr [ebp - 0x78] */ W_F64((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 004a5371: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x4a5376u); f_004f67d0();
    /* 004a5376: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 004a5379: fild dword ptr [ebp - 0x7c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff84u)));
    /* 004a537c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a5382: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a5385: fstp qword ptr [ebp - 0x84] */ W_F64((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 004a538b: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x4a5390u); f_004f6840();
    /* 004a5390: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004a5396: fild dword ptr [ebp - 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff78u)));
    /* 004a539c: fdivr qword ptr [ebp - 0x84] */ ST(0) = R_F64((u32)(r_ebp+0xffffff7cu)) / ST(0);
    /* 004a53a2: fdivr qword ptr [ebp - 0x78] */ ST(0) = R_F64((u32)(r_ebp+0xffffff88u)) / ST(0);
    /* 004a53a5: fstp qword ptr [ebp - 0x34] */ W_F64((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 004a53a8: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a53ae: call 0x4d2df0 */ r_esp -= 4; W32(r_esp, 0x4a53b3u); f_004d2df0();
    /* 004a53b3: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a53b6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004a53b9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a53bc: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004a53bf: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 004a53c3: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a53c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a53c8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a53cdu); f_0062fbf0();
    /* 004a53cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a53d0: mov esi, eax */ r_esi = r_eax;
    /* 004a53d2: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a53d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a53d7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a53dcu); f_0062fbf0();
    /* 004a53dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a53df: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004a53e1: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004a53e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a53e6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a53ebu); f_0062fbf0();
    /* 004a53eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a53ee: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004a53f0: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 004a53f6: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 004a53fc: fdiv qword ptr [0x6be518] */ ST(0) = ST(0) / R_F64((u32)(0x6be518u));
    /* 004a5402: fld1  */ FPUSH(1.0);
    /* 004a5404: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a5406: fcomp qword ptr [ebp - 0x34] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffccu))); FPOP();
    /* 004a5409: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a540b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004a540e: jp 0x4a5460 */ if (fP) goto L_004a5460;
L_004a5410:; BB(0x004a5410);
    /* 004a5410: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004a5413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5414: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a5417: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5418: call 0x4a63a0 */ r_esp -= 4; W32(r_esp, 0x4a541du); f_004a63a0();
    /* 004a541d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5420: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a5423: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5425: je 0x4a5429 */ if (fZ) goto L_004a5429;
L_004a5427:; BB(0x004a5427);
    /* 004a5427: jmp 0x4a545e */ goto L_004a545e;
L_004a5429:; BB(0x004a5429);
    /* 004a5429: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a542b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5430u); f_0062fbf0();
    /* 004a5430: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5433: mov esi, eax */ r_esi = r_eax;
    /* 004a5435: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a543b: call 0x4d22d0 */ r_esp -= 4; W32(r_esp, 0x4a5440u); f_004d22d0();
    /* 004a5440: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a5443: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a5445: jge 0x4a5454 */ if ((fS==fO)) goto L_004a5454;
L_004a5447:; BB(0x004a5447);
    /* 004a5447: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a544a: mov word ptr [edx*2 + 0x791768], 2 */ W16((u32)(r_edx*2+0x791768u), 0x2u);
L_004a5454:; BB(0x004a5454);
    /* 004a5454: mov eax, 3 */ r_eax = 0x3u;
    /* 004a5459: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a545e:; BB(0x004a545e);
    /* 004a545e: jmp 0x4a5467 */ goto L_004a5467;
L_004a5460:; BB(0x004a5460);
    /* 004a5460: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a5462: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5467:; BB(0x004a5467);
    /* 004a5467: jmp 0x4a548c */ goto L_004a548c;
L_004a5469:; BB(0x004a5469);
    /* 004a5469: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004a546c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a546d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a5470: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5471: call 0x4a63a0 */ r_esp -= 4; W32(r_esp, 0x4a5476u); f_004a63a0();
    /* 004a5476: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5479: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a547c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a547e: je 0x4a5482 */ if (fZ) goto L_004a5482;
L_004a5480:; BB(0x004a5480);
    /* 004a5480: jmp 0x4a548c */ goto L_004a548c;
L_004a5482:; BB(0x004a5482);
    /* 004a5482: mov eax, 1 */ r_eax = 0x1u;
    /* 004a5487: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a548c:; BB(0x004a548c);
    /* 004a548c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a548f: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a5497: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a549a: je 0x4a54b0 */ if (fZ) goto L_004a54b0;
L_004a549c:; BB(0x004a549c);
    /* 004a549c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a549f: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a54a7: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a54aa: jne 0x4a563d */ if (!fZ) goto L_004a563d;
L_004a54b0:; BB(0x004a54b0);
    /* 004a54b0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a54b3: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a54bb: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a54be: jne 0x4a54e7 */ if (!fZ) goto L_004a54e7;
L_004a54c0:; BB(0x004a54c0);
    /* 004a54c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a54c6: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a54cbu); f_0047ce60();
    /* 004a54cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a54cc: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a54d0: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a54d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a54d4: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a54da: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x4a54dfu); f_004c6ef0();
    /* 004a54df: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 004a54e5: jmp 0x4a54f8 */ goto L_004a54f8;
L_004a54e7:; BB(0x004a54e7);
    /* 004a54e7: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a54ed: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x4a54f2u); f_004c6f50();
    /* 004a54f2: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
L_004a54f8:; BB(0x004a54f8);
    /* 004a54f8: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 004a54fd: sub ecx, dword ptr [ebp - 0x90] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff70u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a5503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5504: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5509u); f_0062fbf0();
    /* 004a5509: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a550c: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 004a5512: fild dword ptr [ebp - 0x94] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff6cu)));
    /* 004a5518: fstp qword ptr [ebp - 0x44] */ W_F64((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 004a551b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a551d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a5520: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5521: call 0x4a4de0 */ r_esp -= 4; W32(r_esp, 0x4a5526u); f_004a4de0();
    /* 004a5526: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5529: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a552c: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 004a5532: fild dword ptr [ebp - 0x98] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff68u)));
    /* 004a5538: fcomp qword ptr [ebp - 0x44] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffbcu))); FPOP();
    /* 004a553b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a553d: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a5540: jne 0x4a5638 */ if (!fZ) goto L_004a5638;
L_004a5546:; BB(0x004a5546);
    /* 004a5546: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5548: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a554e: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a5553u); f_004c79d0();
    /* 004a5553: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a5559: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a555c: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a5561u); f_004f6640();
    /* 004a5561: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a5564: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5566: jne 0x4a5594 */ if (!fZ) goto L_004a5594;
L_004a5568:; BB(0x004a5568);
    /* 004a5568: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a556e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a5571: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a5576u); f_004f66e0();
    /* 004a5576: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a5579: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a557b: jne 0x4a5594 */ if (!fZ) goto L_004a5594;
L_004a557d:; BB(0x004a557d);
    /* 004a557d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5580: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a5588: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a558b: jne 0x4a5594 */ if (!fZ) goto L_004a5594;
L_004a558d:; BB(0x004a558d);
    /* 004a558d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a558f: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5594:; BB(0x004a5594);
    /* 004a5594: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5596: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a559bu); f_0062fbf0();
    /* 004a559b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a559e: mov esi, eax */ r_esi = r_eax;
    /* 004a55a0: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a55a6: call 0x4d2960 */ r_esp -= 4; W32(r_esp, 0x4a55abu); f_004d2960();
    /* 004a55ab: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a55ae: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a55b0: jge 0x4a55c1 */ if ((fS==fO)) goto L_004a55c1;
L_004a55b2:; BB(0x004a55b2);
    /* 004a55b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a55b5: mov word ptr [eax*2 + 0x791768], 4 */ W16((u32)(r_eax*2+0x791768u), 0x4u);
    /* 004a55bf: jmp 0x4a55ec */ goto L_004a55ec;
L_004a55c1:; BB(0x004a55c1);
    /* 004a55c1: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a55c3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a55c8u); f_0062fbf0();
    /* 004a55c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a55cb: mov esi, eax */ r_esi = r_eax;
    /* 004a55cd: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a55d3: call 0x4d2980 */ r_esp -= 4; W32(r_esp, 0x4a55d8u); f_004d2980();
    /* 004a55d8: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a55db: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a55dd: jge 0x4a55ec */ if ((fS==fO)) goto L_004a55ec;
L_004a55df:; BB(0x004a55df);
    /* 004a55df: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a55e2: mov word ptr [edx*2 + 0x791768], 1 */ W16((u32)(r_edx*2+0x791768u), 0x1u);
L_004a55ec:; BB(0x004a55ec);
    /* 004a55ec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a55f2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a55f5: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a55fau); f_004f6640();
    /* 004a55fa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a55fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a55ff: je 0x4a560d */ if (fZ) goto L_004a560d;
L_004a5601:; BB(0x004a5601);
    /* 004a5601: mov eax, 2 */ r_eax = 0x2u;
    /* 004a5606: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a560d:; BB(0x004a560d);
    /* 004a560d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a5613: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a5616: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a561bu); f_004f66e0();
    /* 004a561b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a561e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5620: je 0x4a562e */ if (fZ) goto L_004a562e;
L_004a5622:; BB(0x004a5622);
    /* 004a5622: mov eax, 4 */ r_eax = 0x4u;
    /* 004a5627: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a562e:; BB(0x004a562e);
    /* 004a562e: mov eax, 3 */ r_eax = 0x3u;
    /* 004a5633: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5638:; BB(0x004a5638);
    /* 004a5638: jmp 0x4a59cc */ goto L_004a59cc;
L_004a563d:; BB(0x004a563d);
    /* 004a563d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5640: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a5648: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a564b: je 0x4a5661 */ if (fZ) goto L_004a5661;
L_004a564d:; BB(0x004a564d);
    /* 004a564d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5650: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a5658: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a565b: jne 0x4a5807 */ if (!fZ) goto L_004a5807;
L_004a5661:; BB(0x004a5661);
    /* 004a5661: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5664: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a566c: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a566f: jne 0x4a5698 */ if (!fZ) goto L_004a5698;
L_004a5671:; BB(0x004a5671);
    /* 004a5671: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a5677: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a567cu); f_0047ce60();
    /* 004a567c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a567d: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5681: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a5684: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a5685: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a568b: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x4a5690u); f_004c6ef0();
    /* 004a5690: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 004a5696: jmp 0x4a56a9 */ goto L_004a56a9;
L_004a5698:; BB(0x004a5698);
    /* 004a5698: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a569e: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x4a56a3u); f_004c6f50();
    /* 004a56a3: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
L_004a56a9:; BB(0x004a56a9);
    /* 004a56a9: mov eax, 0x64 */ r_eax = 0x64u;
    /* 004a56ae: sub eax, dword ptr [ebp - 0x9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff64u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004a56b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a56b5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a56bau); f_0062fbf0();
    /* 004a56ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a56bd: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004a56c3: fild dword ptr [ebp - 0xa0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff60u)));
    /* 004a56c9: fstp qword ptr [ebp - 0x4c] */ W_F64((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 004a56cc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a56ce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004a56d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a56d2: call 0x4a4de0 */ r_esp -= 4; W32(r_esp, 0x4a56d7u); f_004a4de0();
    /* 004a56d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a56da: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a56dd: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 004a56e3: fild dword ptr [ebp - 0xa4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff5cu)));
    /* 004a56e9: fcomp qword ptr [ebp - 0x4c] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffb4u))); FPOP();
    /* 004a56ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a56ee: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a56f1: jne 0x4a5802 */ if (!fZ) goto L_004a5802;
L_004a56f7:; BB(0x004a56f7);
    /* 004a56f7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004a56f9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a56ff: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a5704u); f_004c79d0();
    /* 004a5704: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a570a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a570d: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a5712u); f_004f6640();
    /* 004a5712: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a5715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5717: jne 0x4a5745 */ if (!fZ) goto L_004a5745;
L_004a5719:; BB(0x004a5719);
    /* 004a5719: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a571f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a5722: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a5727u); f_004f66e0();
    /* 004a5727: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a572a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a572c: jne 0x4a5745 */ if (!fZ) goto L_004a5745;
L_004a572e:; BB(0x004a572e);
    /* 004a572e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5731: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a5739: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a573c: jne 0x4a5745 */ if (!fZ) goto L_004a5745;
L_004a573e:; BB(0x004a573e);
    /* 004a573e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a5740: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5745:; BB(0x004a5745);
    /* 004a5745: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5747: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a574cu); f_0062fbf0();
    /* 004a574c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a574f: mov esi, eax */ r_esi = r_eax;
    /* 004a5751: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a5757: call 0x4d2960 */ r_esp -= 4; W32(r_esp, 0x4a575cu); f_004d2960();
    /* 004a575c: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a575f: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a5761: jge 0x4a5772 */ if ((fS==fO)) goto L_004a5772;
L_004a5763:; BB(0x004a5763);
    /* 004a5763: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5766: mov word ptr [edx*2 + 0x791768], 3 */ W16((u32)(r_edx*2+0x791768u), 0x3u);
    /* 004a5770: jmp 0x4a579d */ goto L_004a579d;
L_004a5772:; BB(0x004a5772);
    /* 004a5772: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5774: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5779u); f_0062fbf0();
    /* 004a5779: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a577c: mov esi, eax */ r_esi = r_eax;
    /* 004a577e: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a5784: call 0x4d2980 */ r_esp -= 4; W32(r_esp, 0x4a5789u); f_004d2980();
    /* 004a5789: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a578c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a578e: jge 0x4a579d */ if ((fS==fO)) goto L_004a579d;
L_004a5790:; BB(0x004a5790);
    /* 004a5790: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5793: mov word ptr [ecx*2 + 0x791768], 1 */ W16((u32)(r_ecx*2+0x791768u), 0x1u);
L_004a579d:; BB(0x004a579d);
    /* 004a579d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a57a3: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a57a6: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a57abu); f_004f6640();
    /* 004a57ab: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a57ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a57b0: je 0x4a57be */ if (fZ) goto L_004a57be;
L_004a57b2:; BB(0x004a57b2);
    /* 004a57b2: mov eax, 2 */ r_eax = 0x2u;
    /* 004a57b7: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a57be:; BB(0x004a57be);
    /* 004a57be: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a57c4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a57c7: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a57ccu); f_004f66e0();
    /* 004a57cc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a57cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a57d1: je 0x4a57df */ if (fZ) goto L_004a57df;
L_004a57d3:; BB(0x004a57d3);
    /* 004a57d3: mov eax, 4 */ r_eax = 0x4u;
    /* 004a57d8: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a57df:; BB(0x004a57df);
    /* 004a57df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a57e2: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a57ea: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a57ed: jne 0x4a57f8 */ if (!fZ) goto L_004a57f8;
L_004a57ef:; BB(0x004a57ef);
    /* 004a57ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a57f1: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a57f8:; BB(0x004a57f8);
    /* 004a57f8: mov eax, 3 */ r_eax = 0x3u;
    /* 004a57fd: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5802:; BB(0x004a5802);
    /* 004a5802: jmp 0x4a59cc */ goto L_004a59cc;
L_004a5807:; BB(0x004a5807);
    /* 004a5807: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a580a: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a5812: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5815: je 0x4a582b */ if (fZ) goto L_004a582b;
L_004a5817:; BB(0x004a5817);
    /* 004a5817: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a581a: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a5822: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5825: jne 0x4a59cc */ if (!fZ) goto L_004a59cc;
L_004a582b:; BB(0x004a582b);
    /* 004a582b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a582e: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a5836: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5839: jne 0x4a5862 */ if (!fZ) goto L_004a5862;
L_004a583b:; BB(0x004a583b);
    /* 004a583b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a5841: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4a5846u); f_0047ce60();
    /* 004a5846: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a5847: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a584b: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004a584e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a584f: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a5855: call 0x4c6ef0 */ r_esp -= 4; W32(r_esp, 0x4a585au); f_004c6ef0();
    /* 004a585a: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 004a5860: jmp 0x4a5873 */ goto L_004a5873;
L_004a5862:; BB(0x004a5862);
    /* 004a5862: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a5868: call 0x4c6f50 */ r_esp -= 4; W32(r_esp, 0x4a586du); f_004c6f50();
    /* 004a586d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
L_004a5873:; BB(0x004a5873);
    /* 004a5873: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 004a5878: sub ecx, dword ptr [ebp - 0xa8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff58u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a587e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a587f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5884u); f_0062fbf0();
    /* 004a5884: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5887: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 004a588d: fild dword ptr [ebp - 0xac] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff54u)));
    /* 004a5893: fstp qword ptr [ebp - 0x54] */ W_F64((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 004a5896: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5898: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004a589b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a589c: call 0x4a4de0 */ r_esp -= 4; W32(r_esp, 0x4a58a1u); f_004a4de0();
    /* 004a58a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a58a4: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004a58a7: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 004a58ad: fild dword ptr [ebp - 0xb0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff50u)));
    /* 004a58b3: fcomp qword ptr [ebp - 0x54] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffacu))); FPOP();
    /* 004a58b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a58b8: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a58bb: jne 0x4a59cc */ if (!fZ) goto L_004a59cc;
L_004a58c1:; BB(0x004a58c1);
    /* 004a58c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a58c3: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a58c9: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x4a58ceu); f_004c79d0();
    /* 004a58ce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a58d4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a58d7: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a58dcu); f_004f6640();
    /* 004a58dc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a58df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a58e1: jne 0x4a590f */ if (!fZ) goto L_004a590f;
L_004a58e3:; BB(0x004a58e3);
    /* 004a58e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a58e9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a58ec: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a58f1u); f_004f66e0();
    /* 004a58f1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004a58f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a58f6: jne 0x4a590f */ if (!fZ) goto L_004a590f;
L_004a58f8:; BB(0x004a58f8);
    /* 004a58f8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a58fb: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a5903: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5906: jne 0x4a590f */ if (!fZ) goto L_004a590f;
L_004a5908:; BB(0x004a5908);
    /* 004a5908: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a590a: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a590f:; BB(0x004a590f);
    /* 004a590f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5911: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5916u); f_0062fbf0();
    /* 004a5916: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5919: mov esi, eax */ r_esi = r_eax;
    /* 004a591b: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a5921: call 0x4d2960 */ r_esp -= 4; W32(r_esp, 0x4a5926u); f_004d2960();
    /* 004a5926: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a5929: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a592b: jge 0x4a593c */ if ((fS==fO)) goto L_004a593c;
L_004a592d:; BB(0x004a592d);
    /* 004a592d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5930: mov word ptr [eax*2 + 0x791768], 2 */ W16((u32)(r_eax*2+0x791768u), 0x2u);
    /* 004a593a: jmp 0x4a5967 */ goto L_004a5967;
L_004a593c:; BB(0x004a593c);
    /* 004a593c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a593e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5943u); f_0062fbf0();
    /* 004a5943: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5946: mov esi, eax */ r_esi = r_eax;
    /* 004a5948: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a594e: call 0x4d2980 */ r_esp -= 4; W32(r_esp, 0x4a5953u); f_004d2980();
    /* 004a5953: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a5956: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a5958: jge 0x4a5967 */ if ((fS==fO)) goto L_004a5967;
L_004a595a:; BB(0x004a595a);
    /* 004a595a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a595d: mov word ptr [edx*2 + 0x791768], 1 */ W16((u32)(r_edx*2+0x791768u), 0x1u);
L_004a5967:; BB(0x004a5967);
    /* 004a5967: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a596d: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a5970: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a5975u); f_004f6640();
    /* 004a5975: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004a5978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a597a: je 0x4a5988 */ if (fZ) goto L_004a5988;
L_004a597c:; BB(0x004a597c);
    /* 004a597c: mov eax, 2 */ r_eax = 0x2u;
    /* 004a5981: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5988:; BB(0x004a5988);
    /* 004a5988: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a598e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a5991: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x4a5996u); f_004f66e0();
    /* 004a5996: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a5999: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a599b: je 0x4a59a9 */ if (fZ) goto L_004a59a9;
L_004a599d:; BB(0x004a599d);
    /* 004a599d: mov eax, 4 */ r_eax = 0x4u;
    /* 004a59a2: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a59a9:; BB(0x004a59a9);
    /* 004a59a9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a59ac: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a59b4: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a59b7: jne 0x4a59c2 */ if (!fZ) goto L_004a59c2;
L_004a59b9:; BB(0x004a59b9);
    /* 004a59b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a59bb: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a59c2:; BB(0x004a59c2);
    /* 004a59c2: mov eax, 3 */ r_eax = 0x3u;
    /* 004a59c7: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a59cc:; BB(0x004a59cc);
    /* 004a59cc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a59d2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a59d5: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a59dau); f_004f6640();
    /* 004a59da: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a59dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a59df: jne 0x4a5a21 */ if (!fZ) goto L_004a5a21;
L_004a59e1:; BB(0x004a59e1);
    /* 004a59e1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a59e4: movsx eax, word ptr [edx*2 + 0x791768] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x791768u));
    /* 004a59ec: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a59ef: jne 0x4a59f7 */ if (!fZ) goto L_004a59f7;
L_004a59f1:; BB(0x004a59f1);
    /* 004a59f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a59f3: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a59f7:; BB(0x004a59f7);
    /* 004a59f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a59fa: movsx edx, word ptr [ecx*2 + 0x791768] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791768u));
    /* 004a5a02: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5a05: jne 0x4a5a0d */ if (!fZ) goto L_004a5a0d;
L_004a5a07:; BB(0x004a5a07);
    /* 004a5a07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a5a09: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5a0d:; BB(0x004a5a0d);
    /* 004a5a0d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5a10: movsx ecx, word ptr [eax*2 + 0x791768] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791768u));
    /* 004a5a18: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5a1b: jne 0x4a5a21 */ if (!fZ) goto L_004a5a21;
L_004a5a1d:; BB(0x004a5a1d);
    /* 004a5a1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a5a1f: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5a21:; BB(0x004a5a21);
    /* 004a5a21: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004a5a23: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4a5a28u); f_0062fbf0();
    /* 004a5a28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a5a2b: mov esi, eax */ r_esi = r_eax;
    /* 004a5a2d: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004a5a33: call 0x4d2980 */ r_esp -= 4; W32(r_esp, 0x4a5a38u); f_004d2980();
    /* 004a5a38: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004a5a3b: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a5a3d: jge 0x4a5a4c */ if ((fS==fO)) goto L_004a5a4c;
L_004a5a3f:; BB(0x004a5a3f);
    /* 004a5a3f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004a5a42: mov word ptr [eax*2 + 0x791768], 1 */ W16((u32)(r_eax*2+0x791768u), 0x1u);
L_004a5a4c:; BB(0x004a5a4c);
    /* 004a5a4c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004a5a52: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004a5a55: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4a5a5au); f_004f6640();
    /* 004a5a5a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004a5a5d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a5a5f: je 0x4a5a6a */ if (fZ) goto L_004a5a6a;
L_004a5a61:; BB(0x004a5a61);
    /* 004a5a61: mov eax, 1 */ r_eax = 0x1u;
    /* 004a5a66: jmp 0x4a5a6f */ goto L_004a5a6f;
L_004a5a6a:; BB(0x004a5a6a);
    /* 004a5a6a: mov eax, 3 */ r_eax = 0x3u;
L_004a5a6f:; BB(0x004a5a6f);
    /* 004a5a6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004a5a72: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004a5a79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004a5a7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a5a7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004a5a7c: mov esp, ebp */ r_esp = r_ebp;
    /* 004a5a7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a5a7f: ret  */ FN_RET(0x004a4e40); r_esp += 4; return;
}

