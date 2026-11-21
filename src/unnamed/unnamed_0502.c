#include "protos.h"

void f_00502080(void) /* sub_502080 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00502080);
    /* 00502080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00502081: mov ebp, esp */ r_ebp = r_esp;
    /* 00502083: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00502086: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00502087: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050208d: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x502092u); f_0047e420();
    /* 00502092: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00502095: mov word ptr [ebp - 0x30], 0 */ W16((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0050209b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005020a2: mov word ptr [ebp - 0x38], 0 */ W16((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005020a8: jmp 0x5020b6 */ goto L_005020b6;
L_005020aa:; BB(0x005020aa);
    /* 005020aa: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 005020ae: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005020b2: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
L_005020b6:; BB(0x005020b6);
    /* 005020b6: movsx esi, word ptr [ebp - 0x38] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005020ba: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005020c0: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x5020c5u); f_0047f950();
    /* 005020c5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005020c7: jge 0x502143 */ if ((fS==fO)) goto L_00502143;
L_005020c9:; BB(0x005020c9);
    /* 005020c9: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005020cd: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005020d0: jne 0x5020d4 */ if (!fZ) goto L_005020d4;
L_005020d2:; BB(0x005020d2);
    /* 005020d2: jmp 0x5020aa */ goto L_005020aa;
L_005020d4:; BB(0x005020d4);
    /* 005020d4: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005020d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005020d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005020df: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x5020e4u); f_0047e390();
    /* 005020e4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005020e7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005020ea: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x5020efu); f_004c7010();
    /* 005020ef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005020f2: jne 0x50213e */ if (!fZ) goto L_0050213e;
L_005020f4:; BB(0x005020f4);
    /* 005020f4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005020f7: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x5020fcu); f_004c7050();
    /* 005020fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005020fd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502103: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00502106: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x50210bu); f_004f69e0();
    /* 0050210b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0050210e: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 00502112: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00502114: mov word ptr [ebp - 0x30], cx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ecx);
    /* 00502118: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050211b: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x502120u); f_004c7050();
    /* 00502120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502121: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502127: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050212a: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x50212fu); f_004f6880();
    /* 0050212f: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00502132: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00502134: jle 0x50213e */ if ((fZ||fS!=fO)) goto L_0050213e;
L_00502136:; BB(0x00502136);
    /* 00502136: mov word ptr [ebp - 0x30], 0 */ W16((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0050213c: jmp 0x502143 */ goto L_00502143;
L_0050213e:; BB(0x0050213e);
    /* 0050213e: jmp 0x5020aa */ goto L_005020aa;
L_00502143:; BB(0x00502143);
    /* 00502143: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 00502149: call 0x4d6cb0 */ r_esp -= 4; W32(r_esp, 0x50214eu); f_004d6cb0();
    /* 0050214e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00502151: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00502154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502155: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50215au); f_0062fbf0();
    /* 0050215a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050215d: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 00502161: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00502163: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x502168u); f_0062fbf0();
    /* 00502168: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050216b: mov esi, eax */ r_esi = r_eax;
    /* 0050216d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00502170: movsx edx, word ptr [ecx*2 + 0x7929c0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x7929c0u));
    /* 00502178: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502179: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50217eu); f_0062fbf0();
    /* 0050217e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00502181: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00502184: mov word ptr [ebp - 0x2c], si */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_esi);
    /* 00502188: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0050218b: movsx ecx, word ptr [eax*2 + 0x7925b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x7925b0u));
    /* 00502193: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 00502197: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 0050219b: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050219e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005021a0: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 005021a4: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005021a6: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005021a9: jle 0x5021e6 */ if ((fZ||fS!=fO)) goto L_005021e6;
L_005021ab:; BB(0x005021ab);
    /* 005021ab: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005021ae: movsx ecx, word ptr [eax*2 + 0x7925b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x7925b0u));
    /* 005021b6: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 005021ba: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 005021be: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005021c1: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005021c3: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 005021c7: lea eax, [ecx + edx - 0xa] */ r_eax = (u32)(r_ecx+r_edx+0xfffffff6u);
    /* 005021cb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005021ce: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 005021d1: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005021d7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005021da: fadd qword ptr [ecx*8 + 0x792df8] */ ST(0) = ST(0) + R_F64((u32)(r_ecx*8+0x792df8u));
    /* 005021e1: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 005021e4: jmp 0x5021f3 */ goto L_005021f3;
L_005021e6:; BB(0x005021e6);
    /* 005021e6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005021e9: fld qword ptr [edx*8 + 0x792df8] */ FPUSH(R_F64((u32)(r_edx*8+0x792df8u)));
    /* 005021f0: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_005021f3:; BB(0x005021f3);
    /* 005021f3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005021f5: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 005021fb: call 0x4d7af0 */ r_esp -= 4; W32(r_esp, 0x502200u); f_004d7af0();
    /* 00502200: mov word ptr [ebp - 0x3c], ax */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_eax);
    /* 00502204: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00502206: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050220c: call 0x4d7af0 */ r_esp -= 4; W32(r_esp, 0x502211u); f_004d7af0();
    /* 00502211: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 00502215: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00502217: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050221d: call 0x4d7af0 */ r_esp -= 4; W32(r_esp, 0x502222u); f_004d7af0();
    /* 00502222: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 00502226: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050222c: call 0x4d7de0 */ r_esp -= 4; W32(r_esp, 0x502231u); f_004d7de0();
    /* 00502231: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00502235: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00502239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050223a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50223fu); f_0062fbf0();
    /* 0050223f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00502242: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00502245: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 00502248: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050224e: fld1  */ FPUSH(1.0);
    /* 00502250: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00502252: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00502256: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502257: fstp qword ptr [ebp - 0x4c] */ W_F64((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 0050225a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50225fu); f_0062fbf0();
    /* 0050225f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00502262: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00502265: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 00502268: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050226e: fsubr qword ptr [ebp - 0x4c] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb4u)) - ST(0);
    /* 00502271: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 00502274: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00502277: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00502279: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50227eu); f_0062fbf0();
    /* 0050227e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00502281: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00502284: movsx ecx, word ptr [edx*2 + 0x7929c0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*2+0x7929c0u));
    /* 0050228c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050228e: jge 0x5022bc */ if ((fS==fO)) goto L_005022bc;
L_00502290:; BB(0x00502290);
    /* 00502290: movsx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 00502294: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00502295: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00502297: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00502299: mov word ptr [ebp - 0x3c], ax */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_eax);
    /* 0050229d: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005022a1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005022a2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005022a4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005022a6: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 005022aa: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 005022ae: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005022af: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005022b1: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005022b3: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 005022b7: jmp 0x50234e */ goto L_0050234e;
L_005022bc:; BB(0x005022bc);
    /* 005022bc: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005022c0: movzx eax, byte ptr [edx + 0x7924a8] */ r_eax = (u32)R8((u32)(r_edx+0x7924a8u));
    /* 005022c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005022c9: je 0x5022f1 */ if (fZ) goto L_005022f1;
L_005022cb:; BB(0x005022cb);
    /* 005022cb: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005022cf: jne 0x5022f1 */ if (!fZ) goto L_005022f1;
L_005022d1:; BB(0x005022d1);
    /* 005022d1: movsx ecx, word ptr [ebp - 0x3c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 005022d5: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005022d7: mov word ptr [ebp - 0x3c], cx */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_ecx);
    /* 005022db: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005022df: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005022e1: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
    /* 005022e5: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 005022e9: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005022eb: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 005022ef: jmp 0x50234e */ goto L_0050234e;
L_005022f1:; BB(0x005022f1);
    /* 005022f1: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 005022f5: movzx edx, byte ptr [ecx + 0x7924a8] */ r_edx = (u32)R8((u32)(r_ecx+0x7924a8u));
    /* 005022fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005022fe: je 0x50234e */ if (fZ) goto L_0050234e;
L_00502300:; BB(0x00502300);
    /* 00502300: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502304: jne 0x50234e */ if (!fZ) goto L_0050234e;
L_00502306:; BB(0x00502306);
    /* 00502306: movsx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050230a: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050230d: mov word ptr [ebp - 0x3c], ax */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_eax);
    /* 00502311: movsx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 00502315: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00502316: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00502318: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050231a: mov word ptr [ebp - 0x3c], ax */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_eax);
    /* 0050231e: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00502322: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00502325: mov word ptr [ebp - 0x14], cx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_ecx);
    /* 00502329: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050232d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050232e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00502330: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00502332: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 00502336: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 0050233a: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050233d: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 00502341: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00502345: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00502346: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00502348: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050234a: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
L_0050234e:; BB(0x0050234e);
    /* 0050234e: movsx esi, word ptr [ebp - 0x3c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 00502352: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502358: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x50235du); f_0047ce60();
    /* 0050235d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050235e: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502362: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00502365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502366: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050236c: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x502371u); f_004c6f90();
    /* 00502371: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00502373: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 00502376: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 00502379: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050237f: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00502382: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00502385: fcomp qword ptr [ecx*8 + 0x792df8] */ fx_compare(ST(0), R_F64((u32)(r_ecx*8+0x792df8u))); FPOP();
    /* 0050238c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050238e: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00502391: jp 0x5023ac */ if (fP) goto L_005023ac;
L_00502393:; BB(0x00502393);
    /* 00502393: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00502396: mov word ptr [edx*2 + 0x792498], 5 */ W16((u32)(r_edx*2+0x792498u), 0x5u);
    /* 005023a0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005023a2: jmp 0x50251f */ goto L_0050251f;
L_005023ac:; BB(0x005023ac);
    /* 005023ac: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005023b0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005023b6: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x5023bbu); f_0047ce60();
    /* 005023bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005023bc: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005023c0: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005023c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005023c4: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 005023ca: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x5023cfu); f_004c6f90();
    /* 005023cf: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005023d1: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 005023d4: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 005023d7: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005023dd: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 005023e0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005023e3: fcomp qword ptr [ecx*8 + 0x792df8] */ fx_compare(ST(0), R_F64((u32)(r_ecx*8+0x792df8u))); FPOP();
    /* 005023ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005023ec: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005023ef: jp 0x50240a */ if (fP) goto L_0050240a;
L_005023f1:; BB(0x005023f1);
    /* 005023f1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005023f4: mov word ptr [edx*2 + 0x792498], 4 */ W16((u32)(r_edx*2+0x792498u), 0x4u);
    /* 005023fe: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00502400: jmp 0x50251f */ goto L_0050251f;
L_0050240a:; BB(0x0050240a);
    /* 0050240a: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 0050240e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502414: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x502419u); f_0047ce60();
    /* 00502419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050241a: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050241e: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00502421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502422: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 00502428: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x50242du); f_004c6f90();
    /* 0050242d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0050242f: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 00502432: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 00502435: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050243b: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0050243e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00502441: fcomp qword ptr [ecx*8 + 0x792df8] */ fx_compare(ST(0), R_F64((u32)(r_ecx*8+0x792df8u))); FPOP();
    /* 00502448: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050244a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050244d: jp 0x502468 */ if (fP) goto L_00502468;
L_0050244f:; BB(0x0050244f);
    /* 0050244f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00502452: mov word ptr [edx*2 + 0x792498], 3 */ W16((u32)(r_edx*2+0x792498u), 0x3u);
    /* 0050245c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050245e: jmp 0x50251f */ goto L_0050251f;
L_00502468:; BB(0x00502468);
    /* 00502468: movsx esi, word ptr [ebp - 0x3c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050246c: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 00502472: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x502477u); f_004c6fd0();
    /* 00502477: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00502479: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 0050247c: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 0050247f: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00502485: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00502488: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 0050248b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050248d: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00502490: jp 0x5024a5 */ if (fP) goto L_005024a5;
L_00502492:; BB(0x00502492);
    /* 00502492: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00502495: mov word ptr [eax*2 + 0x792498], 0xd */ W16((u32)(r_eax*2+0x792498u), 0xdu);
    /* 0050249f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005024a1: jmp 0x50251f */ goto L_0050251f;
L_005024a5:; BB(0x005024a5);
    /* 005024a5: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 005024a9: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 005024af: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x5024b4u); f_004c6fd0();
    /* 005024b4: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005024b6: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 005024b9: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 005024bc: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005024c2: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 005024c5: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 005024c8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005024ca: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005024cd: jp 0x5024e2 */ if (fP) goto L_005024e2;
L_005024cf:; BB(0x005024cf);
    /* 005024cf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005024d2: mov word ptr [ecx*2 + 0x792498], 0xc */ W16((u32)(r_ecx*2+0x792498u), 0xcu);
    /* 005024dc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005024de: jmp 0x50251f */ goto L_0050251f;
L_005024e2:; BB(0x005024e2);
    /* 005024e2: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 005024e6: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 005024ec: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x5024f1u); f_004c6fd0();
    /* 005024f1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005024f3: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 005024f6: fild dword ptr [ebp - 0x68] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff98u)));
    /* 005024f9: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 005024ff: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00502502: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 00502505: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00502507: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050250a: jp 0x50251d */ if (fP) goto L_0050251d;
L_0050250c:; BB(0x0050250c);
    /* 0050250c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050250f: mov word ptr [edx*2 + 0x792498], 0xb */ W16((u32)(r_edx*2+0x792498u), 0xbu);
    /* 00502519: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050251b: jmp 0x50251f */ goto L_0050251f;
L_0050251d:; BB(0x0050251d);
    /* 0050251d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0050251f:; BB(0x0050251f);
    /* 0050251f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00502520: mov esp, ebp */ r_esp = r_ebp;
    /* 00502522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00502523: ret  */ FN_RET(0x00502080); r_esp += 4; return;
}

void f_00502530(void) /* sub_502530 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00502530);
    /* 00502530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00502531: mov ebp, esp */ r_ebp = r_esp;
    /* 00502533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502534: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00502538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502539: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050253f: call 0x4d6a60 */ r_esp -= 4; W32(r_esp, 0x502544u); f_004d6a60();
    /* 00502544: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00502548: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050254c: jne 0x50257f */ if (!fZ) goto L_0050257f;
L_0050254e:; BB(0x0050254e);
    /* 0050254e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502554: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00502557: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x50255cu); f_004f6640();
    /* 0050255c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0050255f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502561: je 0x50257f */ if (fZ) goto L_0050257f;
L_00502563:; BB(0x00502563);
    /* 00502563: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00502567: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050256b: mov eax, 0x64 */ r_eax = 0x64u;
    /* 00502570: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00502572: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00502573: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00502575: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00502577: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00502579: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 0050257d: jmp 0x5025b7 */ goto L_005025b7;
L_0050257f:; BB(0x0050257f);
    /* 0050257f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502585: call 0x47d6f0 */ r_esp -= 4; W32(r_esp, 0x50258au); f_0047d6f0();
    /* 0050258a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050258d: jne 0x5025b7 */ if (!fZ) goto L_005025b7;
L_0050258f:; BB(0x0050258f);
    /* 0050258f: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00502593: jge 0x5025b7 */ if ((fS==fO)) goto L_005025b7;
L_00502595:; BB(0x00502595);
    /* 00502595: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050259b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050259e: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x5025a3u); f_004f6640();
    /* 005025a3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005025a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005025a8: jne 0x5025b7 */ if (!fZ) goto L_005025b7;
L_005025aa:; BB(0x005025aa);
    /* 005025aa: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005025ae: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005025af: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005025b1: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005025b3: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005025b7:; BB(0x005025b7);
    /* 005025b7: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005025bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005025bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005025be: ret  */ FN_RET(0x00502530); r_esp += 4; return;
}

void f_005025c0(void) /* sub_5025C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005025c0);
    /* 005025c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005025c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005025c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005025c5: push 0x6a2c1a */ { u32 v = 0x6a2c1au; r_esp -= 4; W32(r_esp, v); }
    /* 005025ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005025d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005025d1: sub esp, 0xdc */ {  u32 a = r_esp; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005025d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005025d8: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005025dd: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005025df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005025e0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005025e3: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005025e9: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005025ec: call 0x4646a0 */ r_esp -= 4; W32(r_esp, 0x5025f1u); f_004646a0();
    /* 005025f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005025f8: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005025fb: call 0x4646f0 */ r_esp -= 4; W32(r_esp, 0x502600u); f_004646f0();
    /* 00502600: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00502606: jmp 0x502614 */ goto L_00502614;
L_00502608:; BB(0x00502608);
    /* 00502608: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0050260c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00502610: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_00502614:; BB(0x00502614);
    /* 00502614: movsx esi, word ptr [ebp - 0x1c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00502618: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050261e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x502623u); f_0047f950();
    /* 00502623: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00502625: jge 0x502684 */ if ((fS==fO)) goto L_00502684;
L_00502627:; BB(0x00502627);
    /* 00502627: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0050262b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050262c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502632: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x502637u); f_0047e390();
    /* 00502637: mov ecx, eax */ r_ecx = r_eax;
    /* 00502639: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x50263eu); f_004c7010();
    /* 0050263e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502640: je 0x502682 */ if (fZ) goto L_00502682;
L_00502642:; BB(0x00502642);
    /* 00502642: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 00502645: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502646: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 0050264a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050264b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502651: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x502656u); f_0047e390();
    /* 00502656: mov ecx, eax */ r_ecx = r_eax;
    /* 00502658: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x50265du); f_004c8300();
    /* 0050265d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00502660: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00502663: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00502666: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0050266a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0050266d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050266e: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502671: call 0x4649c0 */ r_esp -= 4; W32(r_esp, 0x502676u); f_004649c0();
    /* 00502676: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050267a: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0050267d: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x502682u); f_00484470();
L_00502682:; BB(0x00502682);
    /* 00502682: jmp 0x502608 */ goto L_00502608;
L_00502684:; BB(0x00502684);
    /* 00502684: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 00502689: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050268a: mov ecx, dword ptr [0x7907a4] */ r_ecx = R32((u32)(0x7907a4u));
    /* 00502690: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502691: lea ecx, [ebp - 0x26] */ r_ecx = (u32)(r_ebp+0xffffffdau);
    /* 00502694: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502699u); f_00464130();
    /* 00502699: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0050269c: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0050269f: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005026a2: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005026a6: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005026a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005026aa: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005026ad: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x5026b2u); f_00464b90();
    /* 005026b2: mov byte ptr [ebp - 0x25], al */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_eax);
    /* 005026b5: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005026b9: lea ecx, [ebp - 0x26] */ r_ecx = (u32)(r_ebp+0xffffffdau);
    /* 005026bc: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x5026c1u); f_00464210();
    /* 005026c1: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 005026c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005026c7: je 0x5026f9 */ if (fZ) goto L_005026f9;
L_005026c9:; BB(0x005026c9);
    /* 005026c9: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 005026cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005026d0: mov eax, dword ptr [0x7907a4] */ r_eax = R32((u32)(0x7907a4u));
    /* 005026d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005026d6: lea ecx, [ebp - 0x27] */ r_ecx = (u32)(r_ebp+0xffffffd9u);
    /* 005026d9: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x5026deu); f_00464130();
    /* 005026de: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005026e1: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005026e4: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005026e6: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 005026ec: lea ecx, [ebp - 0x27] */ r_ecx = (u32)(r_ebp+0xffffffd9u);
    /* 005026ef: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x5026f4u); f_00464210();
    /* 005026f4: jmp 0x502cc3 */ goto L_00502cc3;
L_005026f9:; BB(0x005026f9);
    /* 005026f9: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 005026fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005026ff: mov ecx, dword ptr [0x7907a8] */ r_ecx = R32((u32)(0x7907a8u));
    /* 00502705: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502706: lea ecx, [ebp - 0x29] */ r_ecx = (u32)(r_ebp+0xffffffd7u);
    /* 00502709: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x50270eu); f_00464130();
    /* 0050270e: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00502711: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00502714: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00502717: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0050271b: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0050271e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050271f: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502722: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x502727u); f_00464b90();
    /* 00502727: mov byte ptr [ebp - 0x28], al */ W8((u32)(r_ebp+0xffffffd8u), (u8)r_eax);
    /* 0050272a: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050272e: lea ecx, [ebp - 0x29] */ r_ecx = (u32)(r_ebp+0xffffffd7u);
    /* 00502731: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502736u); f_00464210();
    /* 00502736: movzx ecx, byte ptr [ebp - 0x28] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0050273a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050273c: je 0x50276e */ if (fZ) goto L_0050276e;
L_0050273e:; BB(0x0050273e);
    /* 0050273e: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 00502744: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502745: mov eax, dword ptr [0x7907a8] */ r_eax = R32((u32)(0x7907a8u));
    /* 0050274a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050274b: lea ecx, [ebp - 0x2a] */ r_ecx = (u32)(r_ebp+0xffffffd6u);
    /* 0050274e: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502753u); f_00464130();
    /* 00502753: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00502756: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00502759: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0050275b: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 00502761: lea ecx, [ebp - 0x2a] */ r_ecx = (u32)(r_ebp+0xffffffd6u);
    /* 00502764: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502769u); f_00464210();
    /* 00502769: jmp 0x502cc3 */ goto L_00502cc3;
L_0050276e:; BB(0x0050276e);
    /* 0050276e: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 00502773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502774: mov ecx, dword ptr [0x7907b0] */ r_ecx = R32((u32)(0x7907b0u));
    /* 0050277a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050277b: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 0050277e: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502783u); f_00464130();
    /* 00502783: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00502786: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00502789: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0050278c: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00502790: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00502793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502794: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502797: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x50279cu); f_00464b90();
    /* 0050279c: mov byte ptr [ebp - 0x2b], al */ W8((u32)(r_ebp+0xffffffd5u), (u8)r_eax);
    /* 0050279f: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005027a3: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005027a6: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x5027abu); f_00464210();
    /* 005027ab: movzx ecx, byte ptr [ebp - 0x2b] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd5u));
    /* 005027af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005027b1: je 0x5027e3 */ if (fZ) goto L_005027e3;
L_005027b3:; BB(0x005027b3);
    /* 005027b3: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 005027b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005027ba: mov eax, dword ptr [0x7907b0] */ r_eax = R32((u32)(0x7907b0u));
    /* 005027bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005027c0: lea ecx, [ebp - 0x2d] */ r_ecx = (u32)(r_ebp+0xffffffd3u);
    /* 005027c3: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x5027c8u); f_00464130();
    /* 005027c8: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005027cb: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005027ce: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005027d0: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 005027d6: lea ecx, [ebp - 0x2d] */ r_ecx = (u32)(r_ebp+0xffffffd3u);
    /* 005027d9: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x5027deu); f_00464210();
    /* 005027de: jmp 0x502cc3 */ goto L_00502cc3;
L_005027e3:; BB(0x005027e3);
    /* 005027e3: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 005027e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005027e9: mov ecx, dword ptr [0x790774] */ r_ecx = R32((u32)(0x790774u));
    /* 005027ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005027f0: lea ecx, [ebp - 0x2f] */ r_ecx = (u32)(r_ebp+0xffffffd1u);
    /* 005027f3: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x5027f8u); f_00464130();
    /* 005027f8: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005027fb: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005027fe: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 00502801: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00502805: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00502808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502809: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0050280c: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x502811u); f_00464b90();
    /* 00502811: mov byte ptr [ebp - 0x2e], al */ W8((u32)(r_ebp+0xffffffd2u), (u8)r_eax);
    /* 00502814: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502818: lea ecx, [ebp - 0x2f] */ r_ecx = (u32)(r_ebp+0xffffffd1u);
    /* 0050281b: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502820u); f_00464210();
    /* 00502820: movzx ecx, byte ptr [ebp - 0x2e] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd2u));
    /* 00502824: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502826: je 0x50285e */ if (fZ) goto L_0050285e;
L_00502828:; BB(0x00502828);
    /* 00502828: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 0050282e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050282f: mov eax, dword ptr [0x790774] */ r_eax = R32((u32)(0x790774u));
    /* 00502834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502835: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00502838: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x50283du); f_00464130();
    /* 0050283d: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00502843: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00502849: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0050284b: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 00502851: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00502854: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502859u); f_00464210();
    /* 00502859: jmp 0x502cc3 */ goto L_00502cc3;
L_0050285e:; BB(0x0050285e);
    /* 0050285e: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 00502863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502864: mov ecx, dword ptr [0x790788] */ r_ecx = R32((u32)(0x790788u));
    /* 0050286a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050286b: lea ecx, [ebp - 0x32] */ r_ecx = (u32)(r_ebp+0xffffffceu);
    /* 0050286e: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502873u); f_00464130();
    /* 00502873: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00502879: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0050287f: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00502885: mov byte ptr [ebp - 4], 6 */ W8((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00502889: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0050288f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502890: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502893: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x502898u); f_00464b90();
    /* 00502898: mov byte ptr [ebp - 0x31], al */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_eax);
    /* 0050289b: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050289f: lea ecx, [ebp - 0x32] */ r_ecx = (u32)(r_ebp+0xffffffceu);
    /* 005028a2: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x5028a7u); f_00464210();
    /* 005028a7: movzx ecx, byte ptr [ebp - 0x31] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcfu));
    /* 005028ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005028ad: je 0x5028e5 */ if (fZ) goto L_005028e5;
L_005028af:; BB(0x005028af);
    /* 005028af: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 005028b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005028b6: mov eax, dword ptr [0x790788] */ r_eax = R32((u32)(0x790788u));
    /* 005028bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005028bc: lea ecx, [ebp - 0x33] */ r_ecx = (u32)(r_ebp+0xffffffcdu);
    /* 005028bf: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x5028c4u); f_00464130();
    /* 005028c4: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 005028ca: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005028d0: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005028d2: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 005028d8: lea ecx, [ebp - 0x33] */ r_ecx = (u32)(r_ebp+0xffffffcdu);
    /* 005028db: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x5028e0u); f_00464210();
    /* 005028e0: jmp 0x502cc3 */ goto L_00502cc3;
L_005028e5:; BB(0x005028e5);
    /* 005028e5: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 005028ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005028eb: mov ecx, dword ptr [0x790794] */ r_ecx = R32((u32)(0x790794u));
    /* 005028f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005028f2: lea ecx, [ebp - 0x35] */ r_ecx = (u32)(r_ebp+0xffffffcbu);
    /* 005028f5: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x5028fau); f_00464130();
    /* 005028fa: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00502900: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00502906: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0050290c: mov byte ptr [ebp - 4], 7 */ W8((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00502910: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00502916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502917: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0050291a: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x50291fu); f_00464b90();
    /* 0050291f: mov byte ptr [ebp - 0x34], al */ W8((u32)(r_ebp+0xffffffccu), (u8)r_eax);
    /* 00502922: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502926: lea ecx, [ebp - 0x35] */ r_ecx = (u32)(r_ebp+0xffffffcbu);
    /* 00502929: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x50292eu); f_00464210();
    /* 0050292e: movzx ecx, byte ptr [ebp - 0x34] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffccu));
    /* 00502932: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502934: je 0x50296c */ if (fZ) goto L_0050296c;
L_00502936:; BB(0x00502936);
    /* 00502936: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 0050293c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050293d: mov eax, dword ptr [0x790794] */ r_eax = R32((u32)(0x790794u));
    /* 00502942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502943: lea ecx, [ebp - 0x36] */ r_ecx = (u32)(r_ebp+0xffffffcau);
    /* 00502946: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x50294bu); f_00464130();
    /* 0050294b: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00502951: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00502957: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00502959: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 0050295f: lea ecx, [ebp - 0x36] */ r_ecx = (u32)(r_ebp+0xffffffcau);
    /* 00502962: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502967u); f_00464210();
    /* 00502967: jmp 0x502cc3 */ goto L_00502cc3;
L_0050296c:; BB(0x0050296c);
    /* 0050296c: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 00502971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502972: mov ecx, dword ptr [0x790798] */ r_ecx = R32((u32)(0x790798u));
    /* 00502978: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502979: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0050297c: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502981u); f_00464130();
    /* 00502981: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00502987: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 0050298d: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00502993: mov byte ptr [ebp - 4], 8 */ W8((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00502997: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0050299d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050299e: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 005029a1: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x5029a6u); f_00464b90();
    /* 005029a6: mov byte ptr [ebp - 0x37], al */ W8((u32)(r_ebp+0xffffffc9u), (u8)r_eax);
    /* 005029a9: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005029ad: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 005029b0: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x5029b5u); f_00464210();
    /* 005029b5: movzx ecx, byte ptr [ebp - 0x37] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc9u));
    /* 005029b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005029bb: je 0x5029f3 */ if (fZ) goto L_005029f3;
L_005029bd:; BB(0x005029bd);
    /* 005029bd: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 005029c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005029c4: mov eax, dword ptr [0x790798] */ r_eax = R32((u32)(0x790798u));
    /* 005029c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005029ca: lea ecx, [ebp - 0x39] */ r_ecx = (u32)(r_ebp+0xffffffc7u);
    /* 005029cd: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x5029d2u); f_00464130();
    /* 005029d2: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005029d8: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005029de: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 005029e0: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 005029e6: lea ecx, [ebp - 0x39] */ r_ecx = (u32)(r_ebp+0xffffffc7u);
    /* 005029e9: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x5029eeu); f_00464210();
    /* 005029ee: jmp 0x502cc3 */ goto L_00502cc3;
L_005029f3:; BB(0x005029f3);
    /* 005029f3: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 005029f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005029f9: mov ecx, dword ptr [0x790760] */ r_ecx = R32((u32)(0x790760u));
    /* 005029ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502a00: lea ecx, [ebp - 0x3b] */ r_ecx = (u32)(r_ebp+0xffffffc5u);
    /* 00502a03: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502a08u); f_00464130();
    /* 00502a08: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00502a0e: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00502a14: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00502a1a: mov byte ptr [ebp - 4], 9 */ W8((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00502a1e: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00502a24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502a25: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502a28: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x502a2du); f_00464b90();
    /* 00502a2d: mov byte ptr [ebp - 0x3a], al */ W8((u32)(r_ebp+0xffffffc6u), (u8)r_eax);
    /* 00502a30: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502a34: lea ecx, [ebp - 0x3b] */ r_ecx = (u32)(r_ebp+0xffffffc5u);
    /* 00502a37: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502a3cu); f_00464210();
    /* 00502a3c: movzx ecx, byte ptr [ebp - 0x3a] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc6u));
    /* 00502a40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502a42: je 0x502a7a */ if (fZ) goto L_00502a7a;
L_00502a44:; BB(0x00502a44);
    /* 00502a44: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 00502a4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502a4b: mov eax, dword ptr [0x790760] */ r_eax = R32((u32)(0x790760u));
    /* 00502a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502a51: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 00502a54: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502a59u); f_00464130();
    /* 00502a59: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00502a5f: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00502a65: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00502a67: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 00502a6d: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 00502a70: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502a75u); f_00464210();
    /* 00502a75: jmp 0x502cc3 */ goto L_00502cc3;
L_00502a7a:; BB(0x00502a7a);
    /* 00502a7a: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 00502a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502a80: mov ecx, dword ptr [0x79079c] */ r_ecx = R32((u32)(0x79079cu));
    /* 00502a86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502a87: lea ecx, [ebp - 0x3e] */ r_ecx = (u32)(r_ebp+0xffffffc2u);
    /* 00502a8a: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502a8fu); f_00464130();
    /* 00502a8f: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00502a95: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00502a9b: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 00502aa1: mov byte ptr [ebp - 4], 0xa */ W8((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00502aa5: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 00502aab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502aac: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502aaf: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x502ab4u); f_00464b90();
    /* 00502ab4: mov byte ptr [ebp - 0x3d], al */ W8((u32)(r_ebp+0xffffffc3u), (u8)r_eax);
    /* 00502ab7: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502abb: lea ecx, [ebp - 0x3e] */ r_ecx = (u32)(r_ebp+0xffffffc2u);
    /* 00502abe: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502ac3u); f_00464210();
    /* 00502ac3: movzx ecx, byte ptr [ebp - 0x3d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc3u));
    /* 00502ac7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502ac9: je 0x502b01 */ if (fZ) goto L_00502b01;
L_00502acb:; BB(0x00502acb);
    /* 00502acb: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 00502ad1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502ad2: mov eax, dword ptr [0x79079c] */ r_eax = R32((u32)(0x79079cu));
    /* 00502ad7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502ad8: lea ecx, [ebp - 0x3f] */ r_ecx = (u32)(r_ebp+0xffffffc1u);
    /* 00502adb: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502ae0u); f_00464130();
    /* 00502ae0: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00502ae6: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00502aec: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00502aee: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 00502af4: lea ecx, [ebp - 0x3f] */ r_ecx = (u32)(r_ebp+0xffffffc1u);
    /* 00502af7: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502afcu); f_00464210();
    /* 00502afc: jmp 0x502cc3 */ goto L_00502cc3;
L_00502b01:; BB(0x00502b01);
    /* 00502b01: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 00502b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502b07: mov ecx, dword ptr [0x790750] */ r_ecx = R32((u32)(0x790750u));
    /* 00502b0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502b0e: lea ecx, [ebp - 0x41] */ r_ecx = (u32)(r_ebp+0xffffffbfu);
    /* 00502b11: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502b16u); f_00464130();
    /* 00502b16: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00502b1c: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00502b22: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 00502b28: mov byte ptr [ebp - 4], 0xb */ W8((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00502b2c: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00502b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502b33: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502b36: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x502b3bu); f_00464b90();
    /* 00502b3b: mov byte ptr [ebp - 0x40], al */ W8((u32)(r_ebp+0xffffffc0u), (u8)r_eax);
    /* 00502b3e: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502b42: lea ecx, [ebp - 0x41] */ r_ecx = (u32)(r_ebp+0xffffffbfu);
    /* 00502b45: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502b4au); f_00464210();
    /* 00502b4a: movzx ecx, byte ptr [ebp - 0x40] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffc0u));
    /* 00502b4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502b50: je 0x502b88 */ if (fZ) goto L_00502b88;
L_00502b52:; BB(0x00502b52);
    /* 00502b52: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 00502b58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502b59: mov eax, dword ptr [0x790750] */ r_eax = R32((u32)(0x790750u));
    /* 00502b5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502b5f: lea ecx, [ebp - 0x42] */ r_ecx = (u32)(r_ebp+0xffffffbeu);
    /* 00502b62: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502b67u); f_00464130();
    /* 00502b67: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00502b6d: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00502b73: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00502b75: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 00502b7b: lea ecx, [ebp - 0x42] */ r_ecx = (u32)(r_ebp+0xffffffbeu);
    /* 00502b7e: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502b83u); f_00464210();
    /* 00502b83: jmp 0x502cc3 */ goto L_00502cc3;
L_00502b88:; BB(0x00502b88);
    /* 00502b88: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 00502b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502b8e: mov ecx, dword ptr [0x790790] */ r_ecx = R32((u32)(0x790790u));
    /* 00502b94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502b95: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 00502b98: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502b9du); f_00464130();
    /* 00502b9d: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00502ba3: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 00502ba9: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 00502baf: mov byte ptr [ebp - 4], 0xc */ W8((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00502bb3: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00502bb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502bba: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502bbd: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x502bc2u); f_00464b90();
    /* 00502bc2: mov byte ptr [ebp - 0x43], al */ W8((u32)(r_ebp+0xffffffbdu), (u8)r_eax);
    /* 00502bc5: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502bc9: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 00502bcc: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502bd1u); f_00464210();
    /* 00502bd1: movzx ecx, byte ptr [ebp - 0x43] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffbdu));
    /* 00502bd5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502bd7: je 0x502c0f */ if (fZ) goto L_00502c0f;
L_00502bd9:; BB(0x00502bd9);
    /* 00502bd9: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 00502bdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502be0: mov eax, dword ptr [0x790790] */ r_eax = R32((u32)(0x790790u));
    /* 00502be5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502be6: lea ecx, [ebp - 0x45] */ r_ecx = (u32)(r_ebp+0xffffffbbu);
    /* 00502be9: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502beeu); f_00464130();
    /* 00502bee: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00502bf4: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00502bfa: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00502bfc: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 00502c02: lea ecx, [ebp - 0x45] */ r_ecx = (u32)(r_ebp+0xffffffbbu);
    /* 00502c05: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502c0au); f_00464210();
    /* 00502c0a: jmp 0x502cc3 */ goto L_00502cc3;
L_00502c0f:; BB(0x00502c0f);
    /* 00502c0f: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 00502c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502c15: mov ecx, dword ptr [0x790768] */ r_ecx = R32((u32)(0x790768u));
    /* 00502c1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502c1c: lea ecx, [ebp - 0x47] */ r_ecx = (u32)(r_ebp+0xffffffb9u);
    /* 00502c1f: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502c24u); f_00464130();
    /* 00502c24: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00502c2a: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 00502c30: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 00502c36: mov byte ptr [ebp - 4], 0xd */ W8((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00502c3a: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 00502c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502c41: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502c44: call 0x464b90 */ r_esp -= 4; W32(r_esp, 0x502c49u); f_00464b90();
    /* 00502c49: mov byte ptr [ebp - 0x46], al */ W8((u32)(r_ebp+0xffffffbau), (u8)r_eax);
    /* 00502c4c: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502c50: lea ecx, [ebp - 0x47] */ r_ecx = (u32)(r_ebp+0xffffffb9u);
    /* 00502c53: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502c58u); f_00464210();
    /* 00502c58: movzx ecx, byte ptr [ebp - 0x46] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffbau));
    /* 00502c5c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502c5e: je 0x502c93 */ if (fZ) goto L_00502c93;
L_00502c60:; BB(0x00502c60);
    /* 00502c60: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 00502c66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502c67: mov eax, dword ptr [0x790768] */ r_eax = R32((u32)(0x790768u));
    /* 00502c6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502c6d: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00502c70: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502c75u); f_00464130();
    /* 00502c75: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00502c7b: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00502c81: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00502c83: mov byte ptr [0x792f88], dl */ W8((u32)(0x792f88u), (u8)r_edx);
    /* 00502c89: lea ecx, [ebp - 0x48] */ r_ecx = (u32)(r_ebp+0xffffffb8u);
    /* 00502c8c: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502c91u); f_00464210();
    /* 00502c91: jmp 0x502cc3 */ goto L_00502cc3;
L_00502c93:; BB(0x00502c93);
    /* 00502c93: mov eax, dword ptr [0x79076c] */ r_eax = R32((u32)(0x79076cu));
    /* 00502c98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502c99: mov ecx, dword ptr [0x790758] */ r_ecx = R32((u32)(0x790758u));
    /* 00502c9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502ca0: lea ecx, [ebp - 0x49] */ r_ecx = (u32)(r_ebp+0xffffffb7u);
    /* 00502ca3: call 0x464130 */ r_esp -= 4; W32(r_esp, 0x502ca8u); f_00464130();
    /* 00502ca8: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00502cae: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 00502cb4: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00502cb6: mov byte ptr [0x792f88], al */ W8((u32)(0x792f88u), (u8)r_eax);
    /* 00502cbb: lea ecx, [ebp - 0x49] */ r_ecx = (u32)(r_ebp+0xffffffb7u);
    /* 00502cbe: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x502cc3u); f_00464210();
L_00502cc3:; BB(0x00502cc3);
    /* 00502cc3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00502cca: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502ccd: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x502cd2u); f_004646e0();
    /* 00502cd2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00502cd5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00502cdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502cdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00502cde: mov esp, ebp */ r_esp = r_ebp;
    /* 00502ce0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00502ce1: ret  */ FN_RET(0x005025c0); r_esp += 4; return;
}

void f_00502cf0(void) /* sub_502CF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00502cf0);
    /* 00502cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00502cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00502cf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00502cf5: push 0x6a2c50 */ { u32 v = 0x6a2c50u; r_esp -= 4; W32(r_esp, v); }
    /* 00502cfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00502d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502d01: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00502d04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00502d05: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00502d0a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00502d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502d0d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00502d10: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00502d16: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502d19: call 0x4646a0 */ r_esp -= 4; W32(r_esp, 0x502d1eu); f_004646a0();
    /* 00502d1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502d25: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502d28: call 0x4646f0 */ r_esp -= 4; W32(r_esp, 0x502d2du); f_004646f0();
    /* 00502d2d: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00502d33: jmp 0x502d41 */ goto L_00502d41;
L_00502d35:; BB(0x00502d35);
    /* 00502d35: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00502d39: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00502d3d: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_00502d41:; BB(0x00502d41);
    /* 00502d41: movsx esi, word ptr [ebp - 0x1c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00502d45: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502d4b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x502d50u); f_0047f950();
    /* 00502d50: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00502d52: jge 0x502db1 */ if ((fS==fO)) goto L_00502db1;
L_00502d54:; BB(0x00502d54);
    /* 00502d54: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00502d58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502d59: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502d5f: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x502d64u); f_0047e390();
    /* 00502d64: mov ecx, eax */ r_ecx = r_eax;
    /* 00502d66: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x502d6bu); f_004c7010();
    /* 00502d6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502d6d: je 0x502daf */ if (fZ) goto L_00502daf;
L_00502d6f:; BB(0x00502d6f);
    /* 00502d6f: lea edx, [ebp - 0x24] */ r_edx = (u32)(r_ebp+0xffffffdcu);
    /* 00502d72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502d73: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00502d77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502d78: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502d7e: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x502d83u); f_0047e390();
    /* 00502d83: mov ecx, eax */ r_ecx = r_eax;
    /* 00502d85: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x502d8au); f_004c8300();
    /* 00502d8a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00502d8d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00502d90: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00502d93: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00502d97: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00502d9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502d9b: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502d9e: call 0x4649c0 */ r_esp -= 4; W32(r_esp, 0x502da3u); f_004649c0();
    /* 00502da3: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502da7: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00502daa: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x502dafu); f_00484470();
L_00502daf:; BB(0x00502daf);
    /* 00502daf: jmp 0x502d35 */ goto L_00502d35;
L_00502db1:; BB(0x00502db1);
    /* 00502db1: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00502db7: jmp 0x502dc5 */ goto L_00502dc5;
L_00502db9:; BB(0x00502db9);
    /* 00502db9: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00502dbd: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00502dc1: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
L_00502dc5:; BB(0x00502dc5);
    /* 00502dc5: movsx esi, word ptr [ebp - 0x1c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00502dc9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502dcf: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x502dd4u); f_0047f950();
    /* 00502dd4: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00502dd6: jge 0x502ea2 */ if ((fS==fO)) goto L_00502ea2;
L_00502ddc:; BB(0x00502ddc);
    /* 00502ddc: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00502de0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502de1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502de7: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x502decu); f_0047e390();
    /* 00502dec: mov ecx, eax */ r_ecx = r_eax;
    /* 00502dee: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x502df3u); f_004c7010();
    /* 00502df3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502df6: jne 0x502e6d */ if (!fZ) goto L_00502e6d;
L_00502df8:; BB(0x00502df8);
    /* 00502df8: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 00502dfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502dfc: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00502e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502e01: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00502e07: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x502e0cu); f_0047e390();
    /* 00502e0c: mov ecx, eax */ r_ecx = r_eax;
    /* 00502e0e: call 0x4c8300 */ r_esp -= 4; W32(r_esp, 0x502e13u); f_004c8300();
    /* 00502e13: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00502e16: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00502e19: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00502e1c: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00502e20: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00502e23: mov edx, esp */ r_edx = r_esp;
    /* 00502e25: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00502e28: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00502e2a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00502e2d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00502e30: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00502e34: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00502e38: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00502e3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502e3c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00502e3f: call 0x496200 */ r_esp -= 4; W32(r_esp, 0x502e44u); f_00496200();
    /* 00502e44: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00502e47: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00502e4a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00502e4c: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00502e50: mov dword ptr [ecx*4 + 0x793010], eax */ W32((u32)(r_ecx*4+0x793010u), r_eax);
    /* 00502e57: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00502e5a: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x502e5fu); f_004a20f0();
    /* 00502e5f: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00502e63: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00502e66: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x502e6bu); f_00484470();
    /* 00502e6b: jmp 0x502e9d */ goto L_00502e9d;
L_00502e6d:; BB(0x00502e6d);
    /* 00502e6d: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00502e72: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00502e77: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00502e7c: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00502e81: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00502e86: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 00502e8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502e8d: movsx eax, word ptr [ebp - 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 00502e91: lea ecx, [eax*4 + 0x793010] */ r_ecx = (u32)(r_eax*4+0x793010u);
    /* 00502e98: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x502e9du); f_004a2100();
L_00502e9d:; BB(0x00502e9d);
    /* 00502e9d: jmp 0x502db9 */ goto L_00502db9;
L_00502ea2:; BB(0x00502ea2);
    /* 00502ea2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00502ea9: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00502eac: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x502eb1u); f_004646e0();
    /* 00502eb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00502eb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00502ebb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502ebc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00502ebd: mov esp, ebp */ r_esp = r_ebp;
    /* 00502ebf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00502ec0: ret  */ FN_RET(0x00502cf0); r_esp += 4; return;
}

