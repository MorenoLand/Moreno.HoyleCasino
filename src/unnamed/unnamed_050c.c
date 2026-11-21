#include "protos.h"

void f_0050c2d0(void) /* sub_50C2D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c2d0);
    /* 0050c2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c2d3: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c2d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050c2d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c2dd: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x50c2e2u); f_0047e420();
    /* 0050c2e2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0050c2e5: mov word ptr [ebp - 0x30], 0 */ W16((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0050c2eb: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0050c2f2: fldz  */ FPUSH(0.0);
    /* 0050c2f4: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0050c2f7: mov word ptr [ebp - 0x38], 0 */ W16((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0050c2fd: jmp 0x50c30b */ goto L_0050c30b;
L_0050c2ff:; BB(0x0050c2ff);
    /* 0050c2ff: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 0050c303: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c307: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
L_0050c30b:; BB(0x0050c30b);
    /* 0050c30b: movsx esi, word ptr [ebp - 0x38] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0050c30f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c315: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x50c31au); f_0047f950();
    /* 0050c31a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c31c: jge 0x50c398 */ if ((fS==fO)) goto L_0050c398;
L_0050c31e:; BB(0x0050c31e);
    /* 0050c31e: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0050c322: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c325: jne 0x50c329 */ if (!fZ) goto L_0050c329;
L_0050c327:; BB(0x0050c327);
    /* 0050c327: jmp 0x50c2ff */ goto L_0050c2ff;
L_0050c329:; BB(0x0050c329);
    /* 0050c329: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0050c32d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c32e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c334: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50c339u); f_0047e390();
    /* 0050c339: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050c33c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050c33f: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x50c344u); f_004c7010();
    /* 0050c344: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c347: jne 0x50c393 */ if (!fZ) goto L_0050c393;
L_0050c349:; BB(0x0050c349);
    /* 0050c349: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050c34c: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x50c351u); f_004c7050();
    /* 0050c351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c352: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c358: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c35b: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x50c360u); f_004f69e0();
    /* 0050c360: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0050c363: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 0050c367: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c369: mov word ptr [ebp - 0x30], cx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ecx);
    /* 0050c36d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050c370: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x50c375u); f_004c7050();
    /* 0050c375: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c376: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c37c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c37f: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x50c384u); f_004f6880();
    /* 0050c384: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0050c387: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050c389: jle 0x50c393 */ if ((fZ||fS!=fO)) goto L_0050c393;
L_0050c38b:; BB(0x0050c38b);
    /* 0050c38b: mov word ptr [ebp - 0x30], 0 */ W16((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0050c391: jmp 0x50c398 */ goto L_0050c398;
L_0050c393:; BB(0x0050c393);
    /* 0050c393: jmp 0x50c2ff */ goto L_0050c2ff;
L_0050c398:; BB(0x0050c398);
    /* 0050c398: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c39e: call 0x4ec060 */ r_esp -= 4; W32(r_esp, 0x50c3a3u); f_004ec060();
    /* 0050c3a3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0050c3a6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c3a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3aa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c3afu); f_0062fbf0();
    /* 0050c3af: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c3b2: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 0050c3b6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3b8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c3bdu); f_0062fbf0();
    /* 0050c3bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c3c0: mov esi, eax */ r_esi = r_eax;
    /* 0050c3c2: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c3c5: movsx edx, word ptr [ecx*2 + 0x7929c0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x7929c0u));
    /* 0050c3cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c3ce: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c3d3u); f_0062fbf0();
    /* 0050c3d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c3d6: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050c3d9: mov word ptr [ebp - 0x2c], si */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_esi);
    /* 0050c3dd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c3e0: movsx ecx, word ptr [eax*2 + 0x7925b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x7925b0u));
    /* 0050c3e8: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 0050c3ec: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 0050c3f0: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050c3f3: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c3f5: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0050c3f9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c3fb: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c3fe: jle 0x50c43b */ if ((fZ||fS!=fO)) goto L_0050c43b;
L_0050c400:; BB(0x0050c400);
    /* 0050c400: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c403: movsx ecx, word ptr [eax*2 + 0x7925b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x7925b0u));
    /* 0050c40b: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 0050c40f: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 0050c413: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050c416: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c418: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0050c41c: lea eax, [ecx + edx - 0xa] */ r_eax = (u32)(r_ecx+r_edx+0xfffffff6u);
    /* 0050c420: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0050c423: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0050c426: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050c42c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c42f: fadd qword ptr [ecx*8 + 0x792df8] */ ST(0) = ST(0) + R_F64((u32)(r_ecx*8+0x792df8u));
    /* 0050c436: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0050c439: jmp 0x50c448 */ goto L_0050c448;
L_0050c43b:; BB(0x0050c43b);
    /* 0050c43b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c43e: fld qword ptr [edx*8 + 0x792df8] */ FPUSH(R_F64((u32)(r_edx*8+0x792df8u)));
    /* 0050c445: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_0050c448:; BB(0x0050c448);
    /* 0050c448: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c44a: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c450: call 0x4ecea0 */ r_esp -= 4; W32(r_esp, 0x50c455u); f_004ecea0();
    /* 0050c455: mov word ptr [ebp - 0x3c], ax */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_eax);
    /* 0050c459: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c45b: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c461: call 0x4ecea0 */ r_esp -= 4; W32(r_esp, 0x50c466u); f_004ecea0();
    /* 0050c466: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 0050c46a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c46c: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c472: call 0x4ecea0 */ r_esp -= 4; W32(r_esp, 0x50c477u); f_004ecea0();
    /* 0050c477: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0050c47b: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c481: call 0x4ed190 */ r_esp -= 4; W32(r_esp, 0x50c486u); f_004ed190();
    /* 0050c486: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050c48a: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c48e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c48f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c494u); f_0062fbf0();
    /* 0050c494: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c497: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0050c49a: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050c49d: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050c4a3: fld1  */ FPUSH(1.0);
    /* 0050c4a5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050c4a7: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c4ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c4ac: fstp qword ptr [ebp - 0x4c] */ W_F64((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 0050c4af: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c4b4u); f_0062fbf0();
    /* 0050c4b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c4b7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0050c4ba: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0050c4bd: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050c4c3: fsubr qword ptr [ebp - 0x4c] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb4u)) - ST(0);
    /* 0050c4c6: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 0050c4c9: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0050c4cc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0050c4ce: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c4d3u); f_0062fbf0();
    /* 0050c4d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c4d6: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c4d9: movsx ecx, word ptr [edx*2 + 0x7929c0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*2+0x7929c0u));
    /* 0050c4e1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c4e3: jge 0x50c50c */ if ((fS==fO)) goto L_0050c50c;
L_0050c4e5:; BB(0x0050c4e5);
    /* 0050c4e5: movsx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050c4e9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050c4ea: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c4ec: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050c4ee: mov word ptr [ebp - 0x3c], ax */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_eax);
    /* 0050c4f2: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050c4f6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050c4f7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c4f9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050c4fb: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 0050c4ff: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 0050c503: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050c504: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c506: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050c508: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
L_0050c50c:; BB(0x0050c50c);
    /* 0050c50c: movsx edx, word ptr [ebp - 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050c510: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0050c513: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0050c516: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050c51c: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0050c51f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c522: fcomp qword ptr [eax*8 + 0x792df8] */ fx_compare(ST(0), R_F64((u32)(r_eax*8+0x792df8u))); FPOP();
    /* 0050c529: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050c52b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050c52e: jp 0x50c549 */ if (fP) goto L_0050c549;
L_0050c530:; BB(0x0050c530);
    /* 0050c530: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c533: mov word ptr [ecx*2 + 0x792498], 5 */ W16((u32)(r_ecx*2+0x792498u), 0x5u);
    /* 0050c53d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050c53f: jmp 0x50c653 */ goto L_0050c653;
L_0050c549:; BB(0x0050c549);
    /* 0050c549: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050c54d: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0050c550: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 0050c553: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050c559: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0050c55c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c55f: fcomp qword ptr [eax*8 + 0x792df8] */ fx_compare(ST(0), R_F64((u32)(r_eax*8+0x792df8u))); FPOP();
    /* 0050c566: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050c568: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050c56b: jp 0x50c586 */ if (fP) goto L_0050c586;
L_0050c56d:; BB(0x0050c56d);
    /* 0050c56d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c570: mov word ptr [ecx*2 + 0x792498], 4 */ W16((u32)(r_ecx*2+0x792498u), 0x4u);
    /* 0050c57a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050c57c: jmp 0x50c653 */ goto L_0050c653;
L_0050c586:; BB(0x0050c586);
    /* 0050c586: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 0050c58a: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0050c58d: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 0050c590: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050c596: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0050c599: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c59c: fcomp qword ptr [eax*8 + 0x792df8] */ fx_compare(ST(0), R_F64((u32)(r_eax*8+0x792df8u))); FPOP();
    /* 0050c5a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050c5a5: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050c5a8: jp 0x50c5c3 */ if (fP) goto L_0050c5c3;
L_0050c5aa:; BB(0x0050c5aa);
    /* 0050c5aa: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c5ad: mov word ptr [ecx*2 + 0x792498], 3 */ W16((u32)(r_ecx*2+0x792498u), 0x3u);
    /* 0050c5b7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050c5b9: jmp 0x50c653 */ goto L_0050c653;
L_0050c5c3:; BB(0x0050c5c3);
    /* 0050c5c3: movsx edx, word ptr [ebp - 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050c5c7: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0050c5ca: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 0050c5cd: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050c5d3: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0050c5d6: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 0050c5d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050c5db: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050c5de: jp 0x50c5f3 */ if (fP) goto L_0050c5f3;
L_0050c5e0:; BB(0x0050c5e0);
    /* 0050c5e0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c5e3: mov word ptr [eax*2 + 0x792498], 0xd */ W16((u32)(r_eax*2+0x792498u), 0xdu);
    /* 0050c5ed: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050c5ef: jmp 0x50c653 */ goto L_0050c653;
L_0050c5f3:; BB(0x0050c5f3);
    /* 0050c5f3: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0050c5f7: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 0050c5fa: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 0050c5fd: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050c603: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0050c606: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 0050c609: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050c60b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050c60e: jp 0x50c623 */ if (fP) goto L_0050c623;
L_0050c610:; BB(0x0050c610);
    /* 0050c610: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c613: mov word ptr [edx*2 + 0x792498], 0xc */ W16((u32)(r_edx*2+0x792498u), 0xcu);
    /* 0050c61d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050c61f: jmp 0x50c653 */ goto L_0050c653;
L_0050c623:; BB(0x0050c623);
    /* 0050c623: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 0050c627: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0050c62a: fild dword ptr [ebp - 0x68] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff98u)));
    /* 0050c62d: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0050c633: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 0050c636: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 0050c639: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050c63b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0050c63e: jp 0x50c651 */ if (fP) goto L_0050c651;
L_0050c640:; BB(0x0050c640);
    /* 0050c640: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050c643: mov word ptr [ecx*2 + 0x792498], 0xb */ W16((u32)(r_ecx*2+0x792498u), 0xbu);
    /* 0050c64d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050c64f: jmp 0x50c653 */ goto L_0050c653;
L_0050c651:; BB(0x0050c651);
    /* 0050c651: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0050c653:; BB(0x0050c653);
    /* 0050c653: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050c654: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c656: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c657: ret  */ FN_RET(0x0050c2d0); r_esp += 4; return;
}

void f_0050c660(void) /* sub_50C660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c660);
    /* 0050c660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c661: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c664: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0050c668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c669: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c66f: call 0x4ebe10 */ r_esp -= 4; W32(r_esp, 0x50c674u); f_004ebe10();
    /* 0050c674: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 0050c678: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c67c: jne 0x50c6ad */ if (!fZ) goto L_0050c6ad;
L_0050c67e:; BB(0x0050c67e);
    /* 0050c67e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c684: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c687: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x50c68cu); f_004f6640();
    /* 0050c68c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0050c68f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c691: je 0x50c6ad */ if (fZ) goto L_0050c6ad;
L_0050c693:; BB(0x0050c693);
    /* 0050c693: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c697: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c69b: mov eax, 0x64 */ r_eax = 0x64u;
    /* 0050c6a0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c6a2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050c6a3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050c6a5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050c6a7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c6a9: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0050c6ad:; BB(0x0050c6ad);
    /* 0050c6ad: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050c6b1: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c6b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c6b4: ret  */ FN_RET(0x0050c660); r_esp += 4; return;
}

void f_0050c6c0(void) /* sub_50C6C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c6c0);
    /* 0050c6c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c6c3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c6c9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x50c6ceu); f_0047e3b0();
    /* 0050c6ce: mov dword ptr [0x7926f8], eax */ W32((u32)(0x7926f8u), r_eax);
    /* 0050c6d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c6d9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c6dc: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x50c6e1u); f_004f6640();
    /* 0050c6e1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0050c6e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c6e6: je 0x50c724 */ if (fZ) goto L_0050c724;
L_0050c6e8:; BB(0x0050c6e8);
    /* 0050c6e8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6ea: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c6efu); f_0062fbf0();
    /* 0050c6ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c6f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c6f4: jne 0x50c71b */ if (!fZ) goto L_0050c71b;
L_0050c6f6:; BB(0x0050c6f6);
    /* 0050c6f6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c6f8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c6fdu); f_0062fbf0();
    /* 0050c6fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c700: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c704: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c70a: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x50c70fu); f_004c79d0();
    /* 0050c70f: mov eax, 2 */ r_eax = 0x2u;
    /* 0050c714: jmp 0x50c79b */ goto L_0050c79b;
L_0050c71b:; BB(0x0050c71b);
    /* 0050c71b: mov eax, 1 */ r_eax = 0x1u;
    /* 0050c720: jmp 0x50c79b */ goto L_0050c79b;
L_0050c724:; BB(0x0050c724);
    /* 0050c724: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c726: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c72bu); f_0062fbf0();
    /* 0050c72b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c72e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c730: jne 0x50c769 */ if (!fZ) goto L_0050c769;
L_0050c732:; BB(0x0050c732);
    /* 0050c732: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c738: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050c73b: call 0x4f66e0 */ r_esp -= 4; W32(r_esp, 0x50c740u); f_004f66e0();
    /* 0050c740: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0050c743: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c745: je 0x50c769 */ if (fZ) goto L_0050c769;
L_0050c747:; BB(0x0050c747);
    /* 0050c747: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c749: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c74eu); f_0062fbf0();
    /* 0050c74e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c751: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c755: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c75b: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x50c760u); f_004c79d0();
    /* 0050c760: mov eax, 4 */ r_eax = 0x4u;
    /* 0050c765: jmp 0x50c79b */ goto L_0050c79b;
L_0050c769:; BB(0x0050c769);
    /* 0050c769: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c76b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c770u); f_0062fbf0();
    /* 0050c770: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c773: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c775: je 0x50c799 */ if (fZ) goto L_0050c799;
L_0050c777:; BB(0x0050c777);
    /* 0050c777: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c779: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c77eu); f_0062fbf0();
    /* 0050c77e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c781: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050c784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c785: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c78b: call 0x4c79d0 */ r_esp -= 4; W32(r_esp, 0x50c790u); f_004c79d0();
    /* 0050c790: mov eax, 3 */ r_eax = 0x3u;
    /* 0050c795: jmp 0x50c79b */ goto L_0050c79b;
L_0050c799:; BB(0x0050c799);
    /* 0050c799: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050c79b:; BB(0x0050c79b);
    /* 0050c79b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c79c: ret  */ FN_RET(0x0050c6c0); r_esp += 4; return;
}

void f_0050c7a0(void) /* sub_50C7A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c7a0);
    /* 0050c7a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c7a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7a5: push 0x6a32c1 */ { u32 v = 0x6a32c1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050c7b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7b1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c7b4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0050c7b9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050c7bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7bc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0050c7bf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0050c7c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c7c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7c9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c7cf: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50c7d4u); f_0047e390();
    /* 0050c7d4: mov dword ptr [0x7926f8], eax */ W32((u32)(0x7926f8u), r_eax);
    /* 0050c7d9: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0050c7dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7dd: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050c7e3: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x50c7e8u); f_004c7c40();
    /* 0050c7e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050c7ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050c7f2: lea eax, [edx*8 + 0x792fd0] */ r_eax = (u32)(r_edx*8+0x792fd0u);
    /* 0050c7f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c7fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0050c7fd: lea edx, [ecx*8 + 0x792f90] */ r_edx = (u32)(r_ecx*8+0x792f90u);
    /* 0050c804: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050c805: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050c808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c809: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0050c80c: call 0x49db00 */ r_esp -= 4; W32(r_esp, 0x50c811u); f_0049db00();
    /* 0050c811: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0050c818: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0050c81b: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x50c820u); f_00484470();
    /* 0050c820: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050c823: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050c82a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050c82b: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c82d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c82e: ret  */ FN_RET(0x0050c7a0); r_esp += 4; return;
}

void f_0050c830(void) /* sub_50C830 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c830);
    /* 0050c830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c831: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c833: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050c836: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c839: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c83a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c840: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50c845u); f_0047e390();
    /* 0050c845: mov dword ptr [0x7926f8], eax */ W32((u32)(0x7926f8u), r_eax);
    /* 0050c84a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050c850: jmp 0x50c85e */ goto L_0050c85e;
L_0050c852:; BB(0x0050c852);
    /* 0050c852: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050c856: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c85a: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0050c85e:; BB(0x0050c85e);
    /* 0050c85e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c862: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c865: jge 0x50c874 */ if ((fS==fO)) goto L_0050c874;
L_0050c867:; BB(0x0050c867);
    /* 0050c867: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c86b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0050c86e: mov byte ptr [ecx + eax], 0 */ W8((u32)(r_ecx+r_eax), 0x0u);
    /* 0050c872: jmp 0x50c852 */ goto L_0050c852;
L_0050c874:; BB(0x0050c874);
    /* 0050c874: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c876: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c87bu); f_0062fbf0();
    /* 0050c87b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c87e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050c881: mov byte ptr [edx + eax], 1 */ W8((u32)(r_edx+r_eax), 0x1u);
    /* 0050c885: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c887: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c88cu); f_0062fbf0();
    /* 0050c88c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c88f: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_0050c893:; BB(0x0050c893);
    /* 0050c893: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050c897: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0050c89a: movzx edx, byte ptr [ecx + eax] */ r_edx = (u32)R8((u32)(r_ecx+r_eax));
    /* 0050c89e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c8a0: je 0x50c8b2 */ if (fZ) goto L_0050c8b2;
L_0050c8a2:; BB(0x0050c8a2);
    /* 0050c8a2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c8a4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c8a9u); f_0062fbf0();
    /* 0050c8a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c8ac: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 0050c8b0: jmp 0x50c893 */ goto L_0050c893;
L_0050c8b2:; BB(0x0050c8b2);
    /* 0050c8b2: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050c8b6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0050c8b9: mov byte ptr [ecx + eax], 1 */ W8((u32)(r_ecx+r_eax), 0x1u);
    /* 0050c8bd: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050c8c3: jmp 0x50c8d1 */ goto L_0050c8d1;
L_0050c8c5:; BB(0x0050c8c5);
    /* 0050c8c5: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050c8c9: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c8cd: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0050c8d1:; BB(0x0050c8d1);
    /* 0050c8d1: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c8d5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c8d8: jge 0x50c907 */ if ((fS==fO)) goto L_0050c907;
L_0050c8da:; BB(0x0050c8da);
    /* 0050c8da: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c8de: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050c8e1: movzx eax, byte ptr [edx + ecx] */ r_eax = (u32)R8((u32)(r_edx+r_ecx));
    /* 0050c8e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c8e7: je 0x50c8f8 */ if (fZ) goto L_0050c8f8;
L_0050c8e9:; BB(0x0050c8e9);
    /* 0050c8e9: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c8ed: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0050c8f0: mov word ptr [edx + ecx*2], 0xffff */ W16((u32)(r_edx+r_ecx*2), 0xffffu);
    /* 0050c8f6: jmp 0x50c905 */ goto L_0050c905;
L_0050c8f8:; BB(0x0050c8f8);
    /* 0050c8f8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c8fc: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0050c8ff: mov word ptr [ecx + eax*2], 0xfffe */ W16((u32)(r_ecx+r_eax*2), 0xfffeu);
L_0050c905:; BB(0x0050c905);
    /* 0050c905: jmp 0x50c8c5 */ goto L_0050c8c5;
L_0050c907:; BB(0x0050c907);
    /* 0050c907: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050c90d: jmp 0x50c91b */ goto L_0050c91b;
L_0050c90f:; BB(0x0050c90f);
    /* 0050c90f: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050c913: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0050c917: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_0050c91b:; BB(0x0050c91b);
    /* 0050c91b: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0050c91f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050c922: jge 0x50c963 */ if ((fS==fO)) goto L_0050c963;
L_0050c924:; BB(0x0050c924);
    /* 0050c924: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c926: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c92bu); f_0062fbf0();
    /* 0050c92b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c92e: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_0050c932:; BB(0x0050c932);
    /* 0050c932: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0050c936: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0050c939: movsx eax, word ptr [edx + ecx*2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*2));
    /* 0050c93d: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c940: je 0x50c952 */ if (fZ) goto L_0050c952;
L_0050c942:; BB(0x0050c942);
    /* 0050c942: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c944: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c949u); f_0062fbf0();
    /* 0050c949: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c94c: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
    /* 0050c950: jmp 0x50c932 */ goto L_0050c932;
L_0050c952:; BB(0x0050c952);
    /* 0050c952: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0050c956: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0050c959: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0050c95d: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
    /* 0050c961: jmp 0x50c90f */ goto L_0050c90f;
L_0050c963:; BB(0x0050c963);
    /* 0050c963: mov esp, ebp */ r_esp = r_ebp;
    /* 0050c965: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c966: ret  */ FN_RET(0x0050c830); r_esp += 4; return;
}

void f_0050c970(void) /* sub_50C970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0050c970);
    /* 0050c970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050c971: mov ebp, esp */ r_ebp = r_esp;
    /* 0050c973: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0050c976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050c977: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050c97d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x50c982u); f_0047e390();
    /* 0050c982: mov dword ptr [0x7926f8], eax */ W32((u32)(0x7926f8u), r_eax);
    /* 0050c987: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0050c989: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x50c98eu); f_0062fbf0();
    /* 0050c98e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050c991: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050c993: jne 0x50c99b */ if (!fZ) goto L_0050c99b;
L_0050c995:; BB(0x0050c995);
    /* 0050c995: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0050c997: jmp 0x50c99d */ goto L_0050c99d;
L_0050c99b:; BB(0x0050c99b);
    /* 0050c99b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0050c99d:; BB(0x0050c99d);
    /* 0050c99d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050c99e: ret  */ FN_RET(0x0050c970); r_esp += 4; return;
}

