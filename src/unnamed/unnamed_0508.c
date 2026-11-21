#include "protos.h"

void f_00508ed0(void) /* sub_508ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00508ed0);
    /* 00508ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00508ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00508ed3: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00508ed9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00508eda: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00508edb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00508ee1: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x508ee6u); f_0047e420();
    /* 00508ee6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00508ee9: mov word ptr [ebp - 0x34], 0 */ W16((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00508eef: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00508ef6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00508efd: mov word ptr [ebp - 0x44], 0 */ W16((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00508f03: jmp 0x508f11 */ goto L_00508f11;
L_00508f05:; BB(0x00508f05);
    /* 00508f05: mov ax, word ptr [ebp - 0x44] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffbcu))) & 0xffffu);
    /* 00508f09: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00508f0d: mov word ptr [ebp - 0x44], ax */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_eax);
L_00508f11:; BB(0x00508f11);
    /* 00508f11: movsx esi, word ptr [ebp - 0x44] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 00508f15: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00508f1b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x508f20u); f_0047f950();
    /* 00508f20: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00508f22: jge 0x508fa1 */ if ((fS==fO)) goto L_00508fa1;
L_00508f24:; BB(0x00508f24);
    /* 00508f24: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 00508f28: cmp ecx, dword ptr [ebp - 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508f2b: jne 0x508f2f */ if (!fZ) goto L_00508f2f;
L_00508f2d:; BB(0x00508f2d);
    /* 00508f2d: jmp 0x508f05 */ goto L_00508f05;
L_00508f2f:; BB(0x00508f2f);
    /* 00508f2f: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 00508f33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00508f34: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00508f3a: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x508f3fu); f_0047e390();
    /* 00508f3f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00508f42: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00508f45: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x508f4au); f_004c7010();
    /* 00508f4a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508f4d: jne 0x508f9c */ if (!fZ) goto L_00508f9c;
L_00508f4f:; BB(0x00508f4f);
    /* 00508f4f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00508f52: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x508f57u); f_004c7050();
    /* 00508f57: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00508f5a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00508f5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508f5f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00508f65: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00508f68: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x508f6du); f_004f69e0();
    /* 00508f6d: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00508f70: movsx edx, word ptr [ebp - 0x34] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 00508f74: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00508f76: mov word ptr [ebp - 0x34], dx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edx);
    /* 00508f7a: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00508f7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508f7f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00508f85: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00508f88: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x508f8du); f_004f6880();
    /* 00508f8d: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00508f90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00508f92: jle 0x508f9c */ if ((fZ||fS!=fO)) goto L_00508f9c;
L_00508f94:; BB(0x00508f94);
    /* 00508f94: mov word ptr [ebp - 0x34], 0 */ W16((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00508f9a: jmp 0x508fa1 */ goto L_00508fa1;
L_00508f9c:; BB(0x00508f9c);
    /* 00508f9c: jmp 0x508f05 */ goto L_00508f05;
L_00508fa1:; BB(0x00508fa1);
    /* 00508fa1: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00508fa4: fld qword ptr [edx*8 + 0x792df8] */ FPUSH(R_F64((u32)(r_edx*8+0x792df8u)));
    /* 00508fab: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00508fae: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 00508fb4: call 0x4d9040 */ r_esp -= 4; W32(r_esp, 0x508fb9u); f_004d9040();
    /* 00508fb9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00508fbc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00508fbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508fc0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x508fc5u); f_0062fbf0();
    /* 00508fc5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00508fc8: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 00508fcc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00508fd2: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x508fd7u); f_0047d770();
    /* 00508fd7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00508fda: jne 0x508ffe */ if (!fZ) goto L_00508ffe;
L_00508fdc:; BB(0x00508fdc);
    /* 00508fdc: mov ecx, 7 */ r_ecx = 0x7u;
    /* 00508fe1: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00508fe4: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00508fe7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00508fe8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x508fedu); f_0062fbf0();
    /* 00508fed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00508ff0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00508ff3: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00508ff7: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00508ffa: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
L_00508ffe:; BB(0x00508ffe);
    /* 00508ffe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00509000: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x509005u); f_0062fbf0();
    /* 00509005: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509008: mov esi, eax */ r_esi = r_eax;
    /* 0050900a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0050900d: movsx ecx, word ptr [eax*2 + 0x7929c0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x7929c0u));
    /* 00509015: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00509016: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50901bu); f_0062fbf0();
    /* 0050901b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050901e: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00509021: mov word ptr [ebp - 0x30], si */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_esi);
    /* 00509025: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00509028: movsx eax, word ptr [edx*2 + 0x7925b0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x7925b0u));
    /* 00509030: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 00509034: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00509038: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050903b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050903d: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 00509041: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00509043: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509046: jle 0x50907c */ if ((fZ||fS!=fO)) goto L_0050907c;
L_00509048:; BB(0x00509048);
    /* 00509048: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0050904b: movsx eax, word ptr [edx*2 + 0x7925b0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x7925b0u));
    /* 00509053: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 00509057: movsx edx, word ptr [ebp - 0x24] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 0050905b: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050905e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00509060: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 00509064: lea edx, [eax + ecx - 0xa] */ r_edx = (u32)(r_eax+r_ecx+0xfffffff6u);
    /* 00509068: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0050906b: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 0050906e: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00509074: fadd qword ptr [ebp - 0x40] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc0u));
    /* 00509077: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0050907a: jmp 0x509082 */ goto L_00509082;
L_0050907c:; BB(0x0050907c);
    /* 0050907c: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0050907f: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_00509082:; BB(0x00509082);
    /* 00509082: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509086: jl 0x5090f7 */ if ((fS!=fO)) goto L_005090f7;
L_00509088:; BB(0x00509088);
    /* 00509088: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0050908b: fld qword ptr [0x6b4b00] */ FPUSH(R_F64((u32)(0x6b4b00u)));
    /* 00509091: fmul qword ptr [eax*8 + 0x792358] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x792358u));
    /* 00509098: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x50909du); f_00686cc0();
    /* 0050909d: mov esi, eax */ r_esi = r_eax;
    /* 0050909f: sub esi, 0x50 */ {  u32 a = r_esi; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005090a2: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005090a4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5090a9u); f_0062fbf0();
    /* 005090a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005090ac: mov edi, eax */ r_edi = r_eax;
    /* 005090ae: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005090b0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5090b5u); f_0062fbf0();
    /* 005090b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005090b8: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005090ba: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005090bc: jle 0x5090f7 */ if ((fZ||fS!=fO)) goto L_005090f7;
L_005090be:; BB(0x005090be);
    /* 005090be: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005090c0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5090c5u); f_0062fbf0();
    /* 005090c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005090c8: mov esi, eax */ r_esi = r_eax;
    /* 005090ca: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005090cc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5090d1u); f_0062fbf0();
    /* 005090d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005090d4: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005090d6: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 005090d9: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 005090dc: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005090e2: fstp qword ptr [ebp - 0x50] */ W_F64((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 005090e5: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 005090e8: fadd qword ptr [ebp - 0x50] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffb0u));
    /* 005090eb: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 005090ee: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 005090f1: fadd qword ptr [ebp - 0x50] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffb0u));
    /* 005090f4: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_005090f7:; BB(0x005090f7);
    /* 005090f7: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005090fb: jge 0x50910c */ if ((fS==fO)) goto L_0050910c;
L_005090fd:; BB(0x005090fd);
    /* 005090fd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00509103: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x509108u); f_0047d770();
    /* 00509108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050910a: je 0x50917b */ if (fZ) goto L_0050917b;
L_0050910c:; BB(0x0050910c);
    /* 0050910c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0050910f: fld qword ptr [0x6b4b00] */ FPUSH(R_F64((u32)(0x6b4b00u)));
    /* 00509115: fmul qword ptr [ecx*8 + 0x792840] */ ST(0) = ST(0) * R_F64((u32)(r_ecx*8+0x792840u));
    /* 0050911c: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x509121u); f_00686cc0();
    /* 00509121: mov esi, eax */ r_esi = r_eax;
    /* 00509123: sub esi, 0x50 */ {  u32 a = r_esi; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00509126: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00509128: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50912du); f_0062fbf0();
    /* 0050912d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509130: mov edi, eax */ r_edi = r_eax;
    /* 00509132: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00509134: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x509139u); f_0062fbf0();
    /* 00509139: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050913c: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0050913e: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509140: jle 0x50917b */ if ((fZ||fS!=fO)) goto L_0050917b;
L_00509142:; BB(0x00509142);
    /* 00509142: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00509144: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x509149u); f_0062fbf0();
    /* 00509149: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050914c: mov esi, eax */ r_esi = r_eax;
    /* 0050914e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00509150: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x509155u); f_0062fbf0();
    /* 00509155: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509158: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050915a: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0050915d: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 00509160: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00509166: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00509169: fld qword ptr [ebp - 0x40] */ FPUSH(R_F64((u32)(r_ebp+0xffffffc0u)));
    /* 0050916c: fadd qword ptr [ebp - 0x58] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa8u));
    /* 0050916f: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00509172: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 00509175: fadd qword ptr [ebp - 0x58] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa8u));
    /* 00509178: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_0050917b:; BB(0x0050917b);
    /* 0050917b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050917d: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 00509183: call 0x4d9e80 */ r_esp -= 4; W32(r_esp, 0x509188u); f_004d9e80();
    /* 00509188: mov word ptr [ebp - 0x48], ax */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_eax);
    /* 0050918c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050918e: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 00509194: call 0x4d9e80 */ r_esp -= 4; W32(r_esp, 0x509199u); f_004d9e80();
    /* 00509199: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 0050919d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050919f: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 005091a5: call 0x4d9e80 */ r_esp -= 4; W32(r_esp, 0x5091aau); f_004d9e80();
    /* 005091aa: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
    /* 005091ae: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 005091b4: call 0x4da170 */ r_esp -= 4; W32(r_esp, 0x5091b9u); f_004da170();
    /* 005091b9: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 005091bd: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005091c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005091c2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5091c7u); f_0062fbf0();
    /* 005091c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005091ca: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005091cd: fild dword ptr [ebp - 0x68] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff98u)));
    /* 005091d0: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005091d6: fld1  */ FPUSH(1.0);
    /* 005091d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005091da: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005091de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005091df: fstp qword ptr [ebp - 0x70] */ W_F64((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 005091e2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5091e7u); f_0062fbf0();
    /* 005091e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005091ea: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005091ed: fild dword ptr [ebp - 0x74] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff8cu)));
    /* 005091f0: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005091f6: fsubr qword ptr [ebp - 0x70] */ ST(0) = R_F64((u32)(r_ebp+0xffffff90u)) - ST(0);
    /* 005091f9: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 005091fc: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005091ff: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00509201: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x509206u); f_0062fbf0();
    /* 00509206: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00509209: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0050920c: movsx edx, word ptr [ecx*2 + 0x7929c0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x7929c0u));
    /* 00509214: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509216: jge 0x509244 */ if ((fS==fO)) goto L_00509244;
L_00509218:; BB(0x00509218);
    /* 00509218: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050921c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050921d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050921f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00509221: mov word ptr [ebp - 0x48], ax */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_eax);
    /* 00509225: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00509229: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050922a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050922c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050922e: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 00509232: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00509236: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00509237: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00509239: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050923b: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
    /* 0050923f: jmp 0x509322 */ goto L_00509322;
L_00509244:; BB(0x00509244);
    /* 00509244: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050924a: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x50924fu); f_0047d770();
    /* 0050924f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509251: je 0x509258 */ if (fZ) goto L_00509258;
L_00509253:; BB(0x00509253);
    /* 00509253: jmp 0x509322 */ goto L_00509322;
L_00509258:; BB(0x00509258);
    /* 00509258: movsx eax, word ptr [ebp - 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 0050925c: movzx ecx, byte ptr [eax + 0x7924a8] */ r_ecx = (u32)R8((u32)(r_eax+0x7924a8u));
    /* 00509263: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509265: je 0x509290 */ if (fZ) goto L_00509290;
L_00509267:; BB(0x00509267);
    /* 00509267: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050926b: jne 0x509290 */ if (!fZ) goto L_00509290;
L_0050926d:; BB(0x0050926d);
    /* 0050926d: movsx edx, word ptr [ebp - 0x48] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 00509271: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00509273: mov word ptr [ebp - 0x48], dx */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_edx);
    /* 00509277: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050927b: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050927d: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 00509281: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00509285: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00509287: mov word ptr [ebp - 0x2c], cx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_ecx);
    /* 0050928b: jmp 0x509322 */ goto L_00509322;
L_00509290:; BB(0x00509290);
    /* 00509290: movsx edx, word ptr [ebp - 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 00509294: movzx eax, byte ptr [edx + 0x7924a8] */ r_eax = (u32)R8((u32)(r_edx+0x7924a8u));
    /* 0050929b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050929d: je 0x5092c5 */ if (fZ) goto L_005092c5;
L_0050929f:; BB(0x0050929f);
    /* 0050929f: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005092a3: jne 0x5092c5 */ if (!fZ) goto L_005092c5;
L_005092a5:; BB(0x005092a5);
    /* 005092a5: movsx ecx, word ptr [ebp - 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 005092a9: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005092ab: mov word ptr [ebp - 0x48], cx */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_ecx);
    /* 005092af: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005092b3: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005092b5: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
    /* 005092b9: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 005092bd: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005092bf: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
    /* 005092c3: jmp 0x509322 */ goto L_00509322;
L_005092c5:; BB(0x005092c5);
    /* 005092c5: movsx ecx, word ptr [ebp - 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffbcu));
    /* 005092c9: movzx edx, byte ptr [ecx + 0x7924a8] */ r_edx = (u32)R8((u32)(r_ecx+0x7924a8u));
    /* 005092d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005092d2: je 0x509322 */ if (fZ) goto L_00509322;
L_005092d4:; BB(0x005092d4);
    /* 005092d4: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005092d8: jne 0x509322 */ if (!fZ) goto L_00509322;
L_005092da:; BB(0x005092da);
    /* 005092da: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 005092de: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005092e1: mov word ptr [ebp - 0x48], ax */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_eax);
    /* 005092e5: movsx eax, word ptr [ebp - 0x48] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 005092e9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005092ea: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005092ec: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005092ee: mov word ptr [ebp - 0x48], ax */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_eax);
    /* 005092f2: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005092f6: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005092f9: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
    /* 005092fd: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00509301: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00509302: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00509304: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00509306: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 0050930a: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0050930e: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00509311: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 00509315: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00509319: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050931a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050931c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050931e: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
L_00509322:; BB(0x00509322);
    /* 00509322: movsx esi, word ptr [ebp - 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 00509326: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050932c: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x509331u); f_0047ce60();
    /* 00509331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00509332: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509336: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00509339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050933a: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 00509340: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x509345u); f_004c6f90();
    /* 00509345: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00509347: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 0050934a: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 0050934d: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00509353: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00509356: fcomp qword ptr [ebp - 0x40] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffc0u))); FPOP();
    /* 00509359: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050935b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050935e: jp 0x509379 */ if (fP) goto L_00509379;
L_00509360:; BB(0x00509360);
    /* 00509360: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00509363: mov word ptr [ecx*2 + 0x792498], 5 */ W16((u32)(r_ecx*2+0x792498u), 0x5u);
    /* 0050936d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050936f: jmp 0x5094f6 */ goto L_005094f6;
L_00509379:; BB(0x00509379);
    /* 00509379: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050937d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00509383: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x509388u); f_0047ce60();
    /* 00509388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00509389: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050938d: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00509390: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00509391: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 00509397: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x50939cu); f_004c6f90();
    /* 0050939c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0050939e: mov dword ptr [ebp - 0x7c], esi */ W32((u32)(r_ebp+0xffffff84u), r_esi);
    /* 005093a1: fild dword ptr [ebp - 0x7c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff84u)));
    /* 005093a4: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005093aa: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 005093ad: fcomp qword ptr [ebp - 0x40] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffc0u))); FPOP();
    /* 005093b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005093b2: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005093b5: jp 0x5093d0 */ if (fP) goto L_005093d0;
L_005093b7:; BB(0x005093b7);
    /* 005093b7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005093ba: mov word ptr [eax*2 + 0x792498], 4 */ W16((u32)(r_eax*2+0x792498u), 0x4u);
    /* 005093c4: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005093c6: jmp 0x5094f6 */ goto L_005094f6;
L_005093d0:; BB(0x005093d0);
    /* 005093d0: movsx esi, word ptr [ebp - 0x2c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 005093d4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005093da: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x5093dfu); f_0047ce60();
    /* 005093df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005093e0: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005093e4: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005093e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005093e8: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 005093ee: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x5093f3u); f_004c6f90();
    /* 005093f3: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005093f5: mov dword ptr [ebp - 0x80], esi */ W32((u32)(r_ebp+0xffffff80u), r_esi);
    /* 005093f8: fild dword ptr [ebp - 0x80] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff80u)));
    /* 005093fb: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00509401: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00509404: fcomp qword ptr [ebp - 0x40] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffc0u))); FPOP();
    /* 00509407: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00509409: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050940c: jp 0x509427 */ if (fP) goto L_00509427;
L_0050940e:; BB(0x0050940e);
    /* 0050940e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00509411: mov word ptr [edx*2 + 0x792498], 3 */ W16((u32)(r_edx*2+0x792498u), 0x3u);
    /* 0050941b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050941d: jmp 0x5094f6 */ goto L_005094f6;
L_00509427:; BB(0x00509427);
    /* 00509427: movsx esi, word ptr [ebp - 0x48] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffb8u));
    /* 0050942b: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 00509431: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x509436u); f_004c6fd0();
    /* 00509436: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00509438: mov dword ptr [ebp - 0x84], esi */ W32((u32)(r_ebp+0xffffff7cu), r_esi);
    /* 0050943e: fild dword ptr [ebp - 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff7cu)));
    /* 00509444: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050944a: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0050944d: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 00509450: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00509452: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00509455: jp 0x509470 */ if (fP) goto L_00509470;
L_00509457:; BB(0x00509457);
    /* 00509457: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0050945a: mov word ptr [eax*2 + 0x792498], 0xd */ W16((u32)(r_eax*2+0x792498u), 0xdu);
    /* 00509464: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00509466: jmp 0x5094f6 */ goto L_005094f6;
L_00509470:; BB(0x00509470);
    /* 00509470: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00509474: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050947a: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x50947fu); f_004c6fd0();
    /* 0050947f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00509481: mov dword ptr [ebp - 0x88], esi */ W32((u32)(r_ebp+0xffffff78u), r_esi);
    /* 00509487: fild dword ptr [ebp - 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff78u)));
    /* 0050948d: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00509493: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00509496: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 00509499: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050949b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050949e: jp 0x5094b3 */ if (fP) goto L_005094b3;
L_005094a0:; BB(0x005094a0);
    /* 005094a0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005094a3: mov word ptr [ecx*2 + 0x792498], 0xc */ W16((u32)(r_ecx*2+0x792498u), 0xcu);
    /* 005094ad: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005094af: jmp 0x5094f6 */ goto L_005094f6;
L_005094b3:; BB(0x005094b3);
    /* 005094b3: movsx esi, word ptr [ebp - 0x2c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 005094b7: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 005094bd: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x5094c2u); f_004c6fd0();
    /* 005094c2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005094c4: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 005094ca: fild dword ptr [ebp - 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff74u)));
    /* 005094d0: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005094d6: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 005094d9: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 005094dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005094de: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005094e1: jp 0x5094f4 */ if (fP) goto L_005094f4;
L_005094e3:; BB(0x005094e3);
    /* 005094e3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005094e6: mov word ptr [edx*2 + 0x792498], 0xb */ W16((u32)(r_edx*2+0x792498u), 0xbu);
    /* 005094f0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005094f2: jmp 0x5094f6 */ goto L_005094f6;
L_005094f4:; BB(0x005094f4);
    /* 005094f4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005094f6:; BB(0x005094f6);
    /* 005094f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005094f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005094f8: mov esp, ebp */ r_esp = r_ebp;
    /* 005094fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005094fb: ret  */ FN_RET(0x00508ed0); r_esp += 4; return;
}

