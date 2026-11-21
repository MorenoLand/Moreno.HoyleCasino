#include "protos.h"

void f_004afe60(void) /* sub_4AFE60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004afe60);
    /* 004afe60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004afe61: mov ebp, esp */ r_ebp = r_esp;
    /* 004afe63: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004afe66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004afe67: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004afe6d: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4afe72u); f_0047e420();
    /* 004afe72: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004afe75: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004afe7b: mov word ptr [ebp - 0x38], 0 */ W16((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 004afe81: jmp 0x4afe8f */ goto L_004afe8f;
L_004afe83:; BB(0x004afe83);
    /* 004afe83: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 004afe87: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004afe8b: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
L_004afe8f:; BB(0x004afe8f);
    /* 004afe8f: movsx esi, word ptr [ebp - 0x38] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004afe93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004afe99: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4afe9eu); f_0047f950();
    /* 004afe9e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004afea0: jge 0x4aff3a */ if ((fS==fO)) goto L_004aff3a;
L_004afea6:; BB(0x004afea6);
    /* 004afea6: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004afeaa: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004afead: jne 0x4afeb1 */ if (!fZ) goto L_004afeb1;
L_004afeaf:; BB(0x004afeaf);
    /* 004afeaf: jmp 0x4afe83 */ goto L_004afe83;
L_004afeb1:; BB(0x004afeb1);
    /* 004afeb1: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004afeb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004afeb6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004afebc: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4afec1u); f_0047e390();
    /* 004afec1: mov ecx, eax */ r_ecx = r_eax;
    /* 004afec3: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4afec8u); f_004c7010();
    /* 004afec8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004afecb: jne 0x4aff35 */ if (!fZ) goto L_004aff35;
L_004afecd:; BB(0x004afecd);
    /* 004afecd: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004afed1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004afed2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004afed8: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4afeddu); f_0047e390();
    /* 004afedd: mov ecx, eax */ r_ecx = r_eax;
    /* 004afedf: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4afee4u); f_004c7050();
    /* 004afee4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004afee5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004afeeb: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004afeee: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x4afef3u); f_004f69e0();
    /* 004afef3: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004afef6: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004afefa: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004afefc: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 004aff00: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 004aff04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aff05: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004aff0b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4aff10u); f_0047e390();
    /* 004aff10: mov ecx, eax */ r_ecx = r_eax;
    /* 004aff12: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x4aff17u); f_004c7050();
    /* 004aff17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004aff18: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004aff1e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004aff21: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x4aff26u); f_004f6880();
    /* 004aff26: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004aff29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004aff2b: jle 0x4aff35 */ if ((fZ||fS!=fO)) goto L_004aff35;
L_004aff2d:; BB(0x004aff2d);
    /* 004aff2d: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004aff33: jmp 0x4aff3a */ goto L_004aff3a;
L_004aff35:; BB(0x004aff35);
    /* 004aff35: jmp 0x4afe83 */ goto L_004afe83;
L_004aff3a:; BB(0x004aff3a);
    /* 004aff3a: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004aff40: call 0x4ee560 */ r_esp -= 4; W32(r_esp, 0x4aff45u); f_004ee560();
    /* 004aff45: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004aff48: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004aff4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004aff4c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4aff51u); f_0062fbf0();
    /* 004aff51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004aff54: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 004aff58: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004aff5b: movsx ecx, word ptr [eax*2 + 0x791798] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791798u));
    /* 004aff63: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004aff67: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004aff6b: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004aff6e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004aff70: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004aff73: jle 0x4affaa */ if ((fZ||fS!=fO)) goto L_004affaa;
L_004aff75:; BB(0x004aff75);
    /* 004aff75: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004aff78: movsx edx, word ptr [ecx*2 + 0x791798] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791798u));
    /* 004aff80: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004aff84: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004aff88: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004aff8b: lea edx, [edx + eax - 0xa] */ r_edx = (u32)(r_edx+r_eax+0xfffffff6u);
    /* 004aff8f: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004aff92: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004aff95: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004aff9b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004aff9e: fadd qword ptr [eax*8 + 0x791d90] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x791d90u));
    /* 004affa5: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004affa8: jmp 0x4affb7 */ goto L_004affb7;
L_004affaa:; BB(0x004affaa);
    /* 004affaa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004affad: fld qword ptr [ecx*8 + 0x791d90] */ FPUSH(R_F64((u32)(r_ecx*8+0x791d90u)));
    /* 004affb4: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_004affb7:; BB(0x004affb7);
    /* 004affb7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004affb9: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004affbf: call 0x4ef440 */ r_esp -= 4; W32(r_esp, 0x4affc4u); f_004ef440();
    /* 004affc4: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 004affc8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004affca: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004affd0: call 0x4ef440 */ r_esp -= 4; W32(r_esp, 0x4affd5u); f_004ef440();
    /* 004affd5: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 004affd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004affdb: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004affe1: call 0x4ef440 */ r_esp -= 4; W32(r_esp, 0x4affe6u); f_004ef440();
    /* 004affe6: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 004affea: mov ecx, dword ptr [0x791890] */ r_ecx = R32((u32)(0x791890u));
    /* 004afff0: call 0x4ef730 */ r_esp -= 4; W32(r_esp, 0x4afff5u); f_004ef730();
    /* 004afff5: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 004afff9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004afffd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004afffe: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b0003u); f_0062fbf0();
    /* 004b0003: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b0006: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b0009: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 004b000c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b0012: fld1  */ FPUSH(1.0);
    /* 004b0014: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004b0016: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 004b001a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b001b: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 004b001e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4b0023u); f_0062fbf0();
    /* 004b0023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b0026: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004b0029: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 004b002c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b0032: fsubr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) - ST(0);
    /* 004b0035: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 004b0038: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004b003b: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b003f: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 004b0042: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 004b0045: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b004b: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b004e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b0051: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004b0058: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b005a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b005d: jp 0x4b0078 */ if (fP) goto L_004b0078;
L_004b005f:; BB(0x004b005f);
    /* 004b005f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b0062: mov word ptr [eax*2 + 0x791768], 5 */ W16((u32)(r_eax*2+0x791768u), 0x5u);
    /* 004b006c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b006e: jmp 0x4b0182 */ goto L_004b0182;
L_004b0078:; BB(0x004b0078);
    /* 004b0078: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004b007c: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004b007f: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 004b0082: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b0088: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b008b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b008e: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004b0095: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b0097: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b009a: jp 0x4b00b5 */ if (fP) goto L_004b00b5;
L_004b009c:; BB(0x004b009c);
    /* 004b009c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b009f: mov word ptr [eax*2 + 0x791768], 4 */ W16((u32)(r_eax*2+0x791768u), 0x4u);
    /* 004b00a9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b00ab: jmp 0x4b0182 */ goto L_004b0182;
L_004b00b5:; BB(0x004b00b5);
    /* 004b00b5: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b00b9: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004b00bc: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 004b00bf: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b00c5: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b00c8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b00cb: fcomp qword ptr [edx*8 + 0x791d90] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791d90u))); FPOP();
    /* 004b00d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b00d4: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b00d7: jp 0x4b00f2 */ if (fP) goto L_004b00f2;
L_004b00d9:; BB(0x004b00d9);
    /* 004b00d9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b00dc: mov word ptr [eax*2 + 0x791768], 3 */ W16((u32)(r_eax*2+0x791768u), 0x3u);
    /* 004b00e6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b00e8: jmp 0x4b0182 */ goto L_004b0182;
L_004b00f2:; BB(0x004b00f2);
    /* 004b00f2: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004b00f6: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004b00f9: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 004b00fc: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b0102: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b0105: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004b0108: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b010a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b010d: jp 0x4b0122 */ if (fP) goto L_004b0122;
L_004b010f:; BB(0x004b010f);
    /* 004b010f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b0112: mov word ptr [edx*2 + 0x791768], 0xc */ W16((u32)(r_edx*2+0x791768u), 0xcu);
    /* 004b011c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b011e: jmp 0x4b0182 */ goto L_004b0182;
L_004b0122:; BB(0x004b0122);
    /* 004b0122: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 004b0126: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004b0129: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 004b012c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b0132: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b0135: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004b0138: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b013a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b013d: jp 0x4b0152 */ if (fP) goto L_004b0152;
L_004b013f:; BB(0x004b013f);
    /* 004b013f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b0142: mov word ptr [ecx*2 + 0x791768], 0xb */ W16((u32)(r_ecx*2+0x791768u), 0xbu);
    /* 004b014c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b014e: jmp 0x4b0182 */ goto L_004b0182;
L_004b0152:; BB(0x004b0152);
    /* 004b0152: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004b0156: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004b0159: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 004b015c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004b0162: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004b0165: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004b0168: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b016a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004b016d: jp 0x4b0180 */ if (fP) goto L_004b0180;
L_004b016f:; BB(0x004b016f);
    /* 004b016f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b0172: mov word ptr [eax*2 + 0x791768], 0xa */ W16((u32)(r_eax*2+0x791768u), 0xau);
    /* 004b017c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004b017e: jmp 0x4b0182 */ goto L_004b0182;
L_004b0180:; BB(0x004b0180);
    /* 004b0180: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004b0182:; BB(0x004b0182);
    /* 004b0182: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004b0183: mov esp, ebp */ r_esp = r_ebp;
    /* 004b0185: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b0186: ret  */ FN_RET(0x004afe60); r_esp += 4; return;
}

