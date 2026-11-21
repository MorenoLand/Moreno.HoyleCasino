#include "protos.h"

void f_0041dd80(void) /* caribbeanstudai::func_0041dd80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041dd80);
    /* 0041dd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041dd81: mov ebp, esp */ r_ebp = r_esp;
    /* 0041dd83: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041dd86: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0041dd89: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 0041dd8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041dd90: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041dd96: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0041dd9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41dd9eu); call_ind(t); }
    /* 0041dd9e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041dda1: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041dda7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041dda9: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041ddaf: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0041ddb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41ddb7u); call_ind(t); }
    /* 0041ddb7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041ddba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041ddbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041ddbe: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41ddc3u); f_005dcb00();
    /* 0041ddc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ddc6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0041ddc9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ddcc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041ddce: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041ddd1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0041ddd4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41ddd6u); call_ind(t); }
    /* 0041ddd6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041ddd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041dddc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041dddf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041dde2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dde3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41dde8u); f_005dcb00();
    /* 0041dde8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041ddeb: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 0041ddf1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0041ddf4: cmp dword ptr [ebp - 0x10], -4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041ddf8: jge 0x41de0c */ if ((fS==fO)) goto L_0041de0c;
L_0041ddfa:; BB(0x0041ddfa);
    /* 0041ddfa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041ddfc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41de01u); f_0062fbf0();
    /* 0041de01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041de04: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0041de07: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0041de09: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0041de0c:; BB(0x0041de0c);
    /* 0041de0c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041de0e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41de13u); f_0062fbf0();
    /* 0041de13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041de16: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041de19: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041de1d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041de20: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 0041de23: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041de25: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0041de28: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41de2du); f_0062fbf0();
    /* 0041de2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041de30: mov ecx, eax */ r_ecx = r_eax;
    /* 0041de32: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041de35: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041de38: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041de39: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041de39, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041de39, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041de3b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0041de3e: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0041de41: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 0041de44: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041de47: imul edx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041de4b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0041de4e: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0041de51: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041de53: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041de55: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 0041de58: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0041de5b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41de60u); f_0062fbf0();
    /* 0041de60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041de63: mov ecx, eax */ r_ecx = r_eax;
    /* 0041de65: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041de68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041de6b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041de6c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041de6c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041de6c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041de6e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0041de71: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0041de74: fmul qword ptr [ebp - 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffc0u));
    /* 0041de77: fadd qword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffc8u));
    /* 0041de7a: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x41de7fu); f_00686cc0();
    /* 0041de7f: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041de82: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041de85: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041de86: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0041de8b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041de8b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041de8b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041de8d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0041de90:; BB(0x0041de90);
    /* 0041de90: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041de93: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041de94: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0041de99: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041de99, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041de99, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041de9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041de9d: je 0x41deaa */ if (fZ) goto L_0041deaa;
L_0041de9f:; BB(0x0041de9f);
    /* 0041de9f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041dea2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041dea5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0041dea8: jmp 0x41de90 */ goto L_0041de90;
L_0041deaa:; BB(0x0041deaa);
    /* 0041deaa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041dead: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041deb0: jge 0x41deb8 */ if ((fS==fO)) goto L_0041deb8;
L_0041deb2:; BB(0x0041deb2);
    /* 0041deb2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041deb5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0041deb8:; BB(0x0041deb8);
    /* 0041deb8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041debb: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041debe: jle 0x41dec6 */ if ((fZ||fS!=fO)) goto L_0041dec6;
L_0041dec0:; BB(0x0041dec0);
    /* 0041dec0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041dec3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_0041dec6:; BB(0x0041dec6);
    /* 0041dec6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041dec9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041deca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041decd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dece: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041ded1: call 0x41e450 */ r_esp -= 4; W32(r_esp, 0x41ded6u); f_0041e450();
    /* 0041ded6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041ded9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041dedb: jne 0x41dee8 */ if (!fZ) goto L_0041dee8;
L_0041dedd:; BB(0x0041dedd);
    /* 0041dedd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041dee0: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0041dee3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0041dee6: jmp 0x41dec6 */ goto L_0041dec6;
L_0041dee8:; BB(0x0041dee8);
    /* 0041dee8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041deeb: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041deee: jl 0x41def8 */ if ((fS!=fO)) goto L_0041def8;
L_0041def0:; BB(0x0041def0);
    /* 0041def0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041def3: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041def6: jle 0x41df0c */ if ((fZ||fS!=fO)) goto L_0041df0c;
L_0041def8:; BB(0x0041def8);
    /* 0041def8: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0041defa: push 0x6b5b24 */ { u32 v = 0x6b5b24u; r_esp -= 4; W32(r_esp, v); }
    /* 0041deff: push 0x6b5afc */ { u32 v = 0x6b5afcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041df04: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41df09u); f_005e9f20();
    /* 0041df09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041df0c:; BB(0x0041df0c);
    /* 0041df0c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041df0f: mov esp, ebp */ r_esp = r_ebp;
    /* 0041df11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041df12: ret 4 */ FN_RET(0x0041dd80); r_esp += 8; return;
}

void f_0041df20(void) /* caribbeanstudai::func_0041df20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0041df20);
    /* 0041df20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0041df21: mov ebp, esp */ r_ebp = r_esp;
    /* 0041df23: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041df26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041df27: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0041df2a: mov eax, dword ptr [0x790354] */ r_eax = R32((u32)(0x790354u));
    /* 0041df2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041df31: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041df37: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0041df3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41df3fu); call_ind(t); }
    /* 0041df3f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0041df42: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041df48: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0041df4a: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041df50: mov eax, dword ptr [edx + 0x2b4] */ r_eax = R32((u32)(r_edx+0x2b4u));
    /* 0041df56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41df58u); call_ind(t); }
    /* 0041df58: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0041df5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041df5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041df5f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41df64u); f_005dcb00();
    /* 0041df64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041df67: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0041df6a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0041df6d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041df6f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0041df72: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0041df75: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41df77u); call_ind(t); }
    /* 0041df77: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0041df7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041df7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041df7e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41df83u); f_005dcb00();
    /* 0041df83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041df86: mov ecx, eax */ r_ecx = r_eax;
    /* 0041df88: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x41df8du); f_005d5a50();
    /* 0041df8d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0041df90: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041df96: call 0x5da8e0 */ r_esp -= 4; W32(r_esp, 0x41df9bu); f_005da8e0();
    /* 0041df9b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0041df9e: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041dfa4: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x41dfa9u); f_005dac90();
    /* 0041dfa9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0041dfac: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0041dfaf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dfb0: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041dfb6: call 0x5daa20 */ r_esp -= 4; W32(r_esp, 0x41dfbbu); f_005daa20();
    /* 0041dfbb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041dfbd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0041dfc0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041dfc3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041dfc6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041dfc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041dfca: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41dfcfu); f_005dcb00();
    /* 0041dfcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041dfd2: mov edx, dword ptr [eax + 0x4a8] */ r_edx = R32((u32)(r_eax+0x4a8u));
    /* 0041dfd8: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0041dfdb: cmp dword ptr [ebp - 0x24], -4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041dfdf: jge 0x41dff3 */ if ((fS==fO)) goto L_0041dff3;
L_0041dfe1:; BB(0x0041dfe1);
    /* 0041dfe1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041dfe3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41dfe8u); f_0062fbf0();
    /* 0041dfe8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041dfeb: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0041dfee: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0041dff0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_0041dff3:; BB(0x0041dff3);
    /* 0041dff3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041dff6: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041dff9: cmp dword ptr [ebp - 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041dffc: jge 0x41e012 */ if ((fS==fO)) goto L_0041e012;
L_0041dffe:; BB(0x0041dffe);
    /* 0041dffe: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0041e000: push 0x6b5b24 */ { u32 v = 0x6b5b24u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e005: push 0x6b5b44 */ { u32 v = 0x6b5b44u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e00a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41e00fu); f_005e9f20();
    /* 0041e00f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041e012:; BB(0x0041e012);
    /* 0041e012: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041e015: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e018: jl 0x41e022 */ if ((fS!=fO)) goto L_0041e022;
L_0041e01a:; BB(0x0041e01a);
    /* 0041e01a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041e01d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0041e020: jmp 0x41e028 */ goto L_0041e028;
L_0041e022:; BB(0x0041e022);
    /* 0041e022: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041e025: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0041e028:; BB(0x0041e028);
    /* 0041e028: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e02c: jge 0x41e136 */ if ((fS==fO)) goto L_0041e136;
L_0041e032:; BB(0x0041e032);
    /* 0041e032: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e036: jne 0x41e059 */ if (!fZ) goto L_0041e059;
L_0041e038:; BB(0x0041e038);
    /* 0041e038: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041e03b: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e03e: jge 0x41e057 */ if ((fS==fO)) goto L_0041e057;
L_0041e040:; BB(0x0041e040);
    /* 0041e040: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041e043: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041e046: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e049: jg 0x41e057 */ if ((!fZ&&fS==fO)) goto L_0041e057;
L_0041e04b:; BB(0x0041e04b);
    /* 0041e04b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041e04e: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041e051: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e054: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0041e057:; BB(0x0041e057);
    /* 0041e057: jmp 0x41e0c8 */ goto L_0041e0c8;
L_0041e059:; BB(0x0041e059);
    /* 0041e059: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0041e05c: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e05f: jge 0x41e0c8 */ if ((fS==fO)) goto L_0041e0c8;
L_0041e061:; BB(0x0041e061);
    /* 0041e061: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041e064: sub edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041e067: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e06a: jg 0x41e08b */ if ((!fZ&&fS==fO)) goto L_0041e08b;
L_0041e06c:; BB(0x0041e06c);
    /* 0041e06c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041e06f: sub esi, dword ptr [ebp - 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0041e072: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e074: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41e079u); f_0062fbf0();
    /* 0041e079: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e07c: mov ecx, eax */ r_ecx = r_eax;
    /* 0041e07e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041e081: mov eax, esi */ r_eax = r_esi;
    /* 0041e083: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041e084: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041e084, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041e084, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041e086: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041e089: jmp 0x41e0c8 */ goto L_0041e0c8;
L_0041e08b:; BB(0x0041e08b);
    /* 0041e08b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041e08e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e08f: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0041e092: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e093: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041e099: call 0x5dac40 */ r_esp -= 4; W32(r_esp, 0x41e09eu); f_005dac40();
    /* 0041e09e: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 0041e0a0: fidiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xffffffe8u));
    /* 0041e0a3: fcomp qword ptr [0x6b2c38] */ fx_compare(ST(0), R_F64((u32)(0x6b2c38u))); FPOP();
    /* 0041e0a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0041e0ab: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041e0ae: jne 0x41e0c8 */ if (!fZ) goto L_0041e0c8;
L_0041e0b0:; BB(0x0041e0b0);
    /* 0041e0b0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e0b2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41e0b7u); f_0062fbf0();
    /* 0041e0b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e0ba: mov ecx, eax */ r_ecx = r_eax;
    /* 0041e0bc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041e0bf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0041e0c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041e0c3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041e0c3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041e0c3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041e0c5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0041e0c8:; BB(0x0041e0c8);
    /* 0041e0c8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e0cb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041e0cc: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0041e0d1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041e0d1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041e0d1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041e0d3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e0d5: je 0x41e0e2 */ if (fZ) goto L_0041e0e2;
L_0041e0d7:; BB(0x0041e0d7);
    /* 0041e0d7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e0da: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041e0dd: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0041e0e0: jmp 0x41e0c8 */ goto L_0041e0c8;
L_0041e0e2:; BB(0x0041e0e2);
    /* 0041e0e2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e0e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041e0e6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041e0e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e0ea: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041e0ed: call 0x41e450 */ r_esp -= 4; W32(r_esp, 0x41e0f2u); f_0041e450();
    /* 0041e0f2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0041e0f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e0f7: jne 0x41e104 */ if (!fZ) goto L_0041e104;
L_0041e0f9:; BB(0x0041e0f9);
    /* 0041e0f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e0fc: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041e0ff: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041e102: jmp 0x41e0e2 */ goto L_0041e0e2;
L_0041e104:; BB(0x0041e104);
    /* 0041e104: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e107: cmp ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e10a: jl 0x41e114 */ if ((fS!=fO)) goto L_0041e114;
L_0041e10c:; BB(0x0041e10c);
    /* 0041e10c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e10f: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e112: jle 0x41e128 */ if ((fZ||fS!=fO)) goto L_0041e128;
L_0041e114:; BB(0x0041e114);
    /* 0041e114: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e116: push 0x6b5b24 */ { u32 v = 0x6b5b24u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e11b: push 0x6b5afc */ { u32 v = 0x6b5afcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041e120: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41e125u); f_005e9f20();
    /* 0041e125: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041e128:; BB(0x0041e128);
    /* 0041e128: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e12c: je 0x41e136 */ if (fZ) goto L_0041e136;
L_0041e12e:; BB(0x0041e12e);
    /* 0041e12e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e131: jmp 0x41e282 */ goto L_0041e282;
L_0041e136:; BB(0x0041e136);
    /* 0041e136: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041e139: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e13a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41e13fu); f_005dcb00();
    /* 0041e13f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e142: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0041e145: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041e148: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e149: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41e14eu); f_005dcb00();
    /* 0041e14e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e151: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0041e154: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e156: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41e15bu); f_0062fbf0();
    /* 0041e15b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e15e: mov esi, eax */ r_esi = r_eax;
    /* 0041e160: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041e163: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041e166: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041e168: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0041e16b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0041e16e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41e170u); call_ind(t); }
    /* 0041e170: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041e171: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0041e171, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041e171, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041e173: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0041e176: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0041e179: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041e17c: imul ecx, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e180: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0041e183: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 0041e186: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0041e188: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e18a: fstp qword ptr [ebp - 0x58] */ W_F64((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0041e18d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41e192u); f_0062fbf0();
    /* 0041e192: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e195: mov esi, eax */ r_esi = r_eax;
    /* 0041e197: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041e19a: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041e19d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0041e19f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0041e1a2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0041e1a5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x41e1a7u); call_ind(t); }
    /* 0041e1a7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041e1a8: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0041e1a8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041e1a8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041e1aa: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0041e1ad: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 0041e1b0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e1b2: fstp qword ptr [ebp - 0x64] */ W_F64((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 0041e1b5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x41e1bau); f_0062fbf0();
    /* 0041e1ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041e1bd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041e1c0: imul eax, dword ptr [ebp - 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffffe4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041e1c4: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0041e1c7: fild dword ptr [ebp - 0x68] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff98u)));
    /* 0041e1ca: fmul qword ptr [ebp - 0x64] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffff9cu));
    /* 0041e1cd: fadd qword ptr [ebp - 0x58] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffa8u));
    /* 0041e1d0: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x41e1d5u); f_00686cc0();
    /* 0041e1d5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0041e1d8: mov ecx, dword ptr [0x790354] */ r_ecx = R32((u32)(0x790354u));
    /* 0041e1de: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x41e1e3u); f_005da8a0();
    /* 0041e1e3: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0041e1e5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041e1e6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0041e1eb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041e1eb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041e1eb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041e1ed: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e1f0: jle 0x41e200 */ if ((fZ||fS!=fO)) goto L_0041e200;
L_0041e1f2:; BB(0x0041e1f2);
    /* 0041e1f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e1f5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041e1f6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0041e1fb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041e1fb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041e1fb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041e1fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0041e200:; BB(0x0041e200);
    /* 0041e200: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e203: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041e204: mov ecx, 5 */ r_ecx = 0x5u;
    /* 0041e209: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0041e209, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0041e209, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0041e20b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e20d: je 0x41e21a */ if (fZ) goto L_0041e21a;
L_0041e20f:; BB(0x0041e20f);
    /* 0041e20f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e212: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0041e215: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0041e218: jmp 0x41e200 */ goto L_0041e200;
L_0041e21a:; BB(0x0041e21a);
    /* 0041e21a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e21d: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e220: jge 0x41e228 */ if ((fS==fO)) goto L_0041e228;
L_0041e222:; BB(0x0041e222);
    /* 0041e222: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041e225: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0041e228:; BB(0x0041e228);
    /* 0041e228: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e22b: cmp edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e22e: jle 0x41e236 */ if ((fZ||fS!=fO)) goto L_0041e236;
L_0041e230:; BB(0x0041e230);
    /* 0041e230: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041e233: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0041e236:; BB(0x0041e236);
    /* 0041e236: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e239: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e23a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0041e23d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041e23e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0041e241: call 0x41e450 */ r_esp -= 4; W32(r_esp, 0x41e246u); f_0041e450();
    /* 0041e246: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041e249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041e24b: jne 0x41e258 */ if (!fZ) goto L_0041e258;
L_0041e24d:; BB(0x0041e24d);
    /* 0041e24d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e250: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0041e253: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0041e256: jmp 0x41e236 */ goto L_0041e236;
L_0041e258:; BB(0x0041e258);
    /* 0041e258: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e25b: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e25e: jl 0x41e268 */ if ((fS!=fO)) goto L_0041e268;
L_0041e260:; BB(0x0041e260);
    /* 0041e260: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041e263: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041e266: jle 0x41e27f */ if ((fZ||fS!=fO)) goto L_0041e27f;
L_0041e268:; BB(0x0041e268);
    /* 0041e268: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e26d: push 0x6b5b24 */ { u32 v = 0x6b5b24u; r_esp -= 4; W32(r_esp, v); }
    /* 0041e272: push 0x6b5afc */ { u32 v = 0x6b5afcu; r_esp -= 4; W32(r_esp, v); }
    /* 0041e277: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x41e27cu); f_005e9f20();
    /* 0041e27c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041e27f:; BB(0x0041e27f);
    /* 0041e27f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0041e282:; BB(0x0041e282);
    /* 0041e282: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041e283: mov esp, ebp */ r_esp = r_ebp;
    /* 0041e285: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041e286: ret 4 */ FN_RET(0x0041df20); r_esp += 8; return;
}

