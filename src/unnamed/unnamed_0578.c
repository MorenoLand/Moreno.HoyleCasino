#include "protos.h"

void f_00578420(void) /* sub_578420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578420);
    /* 00578420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578421: mov ebp, esp */ r_ebp = r_esp;
    /* 00578423: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578426: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00578429: mov word ptr [ebp - 0x10], 0xffff */ W16((u32)(r_ebp+0xfffffff0u), 0xffffu);
    /* 0057842f: fldz  */ FPUSH(0.0);
    /* 00578431: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00578434: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00578439: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x57843eu); f_0062fbf0();
    /* 0057843e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578441: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00578444: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0057844a: jmp 0x578458 */ goto L_00578458;
L_0057844c:; BB(0x0057844c);
    /* 0057844c: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00578450: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00578454: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_00578458:; BB(0x00578458);
    /* 00578458: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 0057845c: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057845f: jge 0x578491 */ if ((fS==fO)) goto L_00578491;
L_00578461:; BB(0x00578461);
    /* 00578461: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00578465: fld qword ptr [0x6cae30] */ FPUSH(R_F64((u32)(0x6cae30u)));
    /* 0057846b: fmul qword ptr [edx*8 + 0x749448] */ ST(0) = ST(0) * R_F64((u32)(r_edx*8+0x749448u));
    /* 00578472: fadd qword ptr [ebp - 8] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff8u));
    /* 00578475: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00578478: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 0057847b: fcomp qword ptr [ebp - 8] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff8u))); FPOP();
    /* 0057847e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00578480: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00578483: jp 0x57848f */ if (fP) goto L_0057848f;
L_00578485:; BB(0x00578485);
    /* 00578485: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00578489: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
    /* 0057848d: jmp 0x578491 */ goto L_00578491;
L_0057848f:; BB(0x0057848f);
    /* 0057848f: jmp 0x57844c */ goto L_0057844c;
L_00578491:; BB(0x00578491);
    /* 00578491: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00578495: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578498: jne 0x5784a4 */ if (!fZ) goto L_005784a4;
L_0057849a:; BB(0x0057849a);
    /* 0057849a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057849d: call 0x5785b0 */ r_esp -= 4; W32(r_esp, 0x5784a2u); f_005785b0();
    /* 005784a2: jmp 0x5784d2 */ goto L_005784d2;
L_005784a4:; BB(0x005784a4);
    /* 005784a4: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005784aa: jmp 0x5784b8 */ goto L_005784b8;
L_005784ac:; BB(0x005784ac);
    /* 005784ac: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 005784b0: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005784b4: mov word ptr [ebp - 0xc], dx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_edx);
L_005784b8:; BB(0x005784b8);
    /* 005784b8: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005784bc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005784bf: jge 0x5784d2 */ if ((fS==fO)) goto L_005784d2;
L_005784c1:; BB(0x005784c1);
    /* 005784c1: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005784c5: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 005784c9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005784cc: mov dword ptr [eax + edx*4 + 4], ecx */ W32((u32)(r_eax+r_edx*4+0x4u), r_ecx);
    /* 005784d0: jmp 0x5784ac */ goto L_005784ac;
L_005784d2:; BB(0x005784d2);
    /* 005784d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005784d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005784d5: ret  */ FN_RET(0x00578420); r_esp += 4; return;
}

void f_005784e0(void) /* sub_5784E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005784e0);
    /* 005784e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005784e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005784e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005784e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005784e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005784f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005784f3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005784f5: cmp dword ptr [eax + 0x10], -1 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005784f9: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005784fc: mov byte ptr [ebp - 5], cl */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_ecx);
    /* 005784ff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578502: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578505: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00578508: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057850b: jne 0x578593 */ if (!fZ) goto L_00578593;
L_00578511:; BB(0x00578511);
    /* 00578511: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578514: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578517: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0057851a: cmp ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057851d: jne 0x578593 */ if (!fZ) goto L_00578593;
L_0057851f:; BB(0x0057851f);
    /* 0057851f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578522: cmp dword ptr [edx + 4], 7 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578526: jne 0x578538 */ if (!fZ) goto L_00578538;
L_00578528:; BB(0x00578528);
    /* 00578528: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057852b: call 0x578630 */ r_esp -= 4; W32(r_esp, 0x578530u); f_00578630();
    /* 00578530: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578533: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00578536: jmp 0x578591 */ goto L_00578591;
L_00578538:; BB(0x00578538);
    /* 00578538: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057853b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057853e: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00578541: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578544: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00578547: mov eax, dword ptr [eax + edx*4 + 0x7493ec] */ r_eax = R32((u32)(r_eax+r_edx*4+0x7493ecu));
    /* 0057854e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00578551: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00578555: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00578557: je 0x578578 */ if (fZ) goto L_00578578;
L_00578559:; BB(0x00578559);
    /* 00578559: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057855c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0057855f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578562: imul ecx, dword ptr [eax*4 + 0x7493d8] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax*4+0x7493d8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057856a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057856d: add ecx, dword ptr [edx + 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00578570: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578573: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00578576: jmp 0x578587 */ goto L_00578587;
L_00578578:; BB(0x00578578);
    /* 00578578: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057857b: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0057857e: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00578581: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578584: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
L_00578587:; BB(0x00578587);
    /* 00578587: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057858a: mov dword ptr [ecx + 0x10], 0xffffffff */ W32((u32)(r_ecx+0x10u), 0xffffffffu);
L_00578591:; BB(0x00578591);
    /* 00578591: jmp 0x57859d */ goto L_0057859d;
L_00578593:; BB(0x00578593);
    /* 00578593: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00578596: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
L_0057859d:; BB(0x0057859d);
    /* 0057859d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057859f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005785a0: ret  */ FN_RET(0x005784e0); r_esp += 4; return;
}

void f_005785b0(void) /* sub_5785B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005785b0);
    /* 005785b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005785b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005785b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005785b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005785b7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005785b9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5785beu); f_0062fbf0();
    /* 005785be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005785c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005785c4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005785c7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005785c9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5785ceu); f_0062fbf0();
    /* 005785ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005785d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005785d4: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005785d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005785da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005785dd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005785e0: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005785e3: je 0x5785f7 */ if (fZ) goto L_005785f7;
L_005785e5:; BB(0x005785e5);
    /* 005785e5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005785e7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5785ecu); f_0062fbf0();
    /* 005785ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005785ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005785f2: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005785f5: jmp 0x578624 */ goto L_00578624;
L_005785f7:; BB(0x005785f7);
    /* 005785f7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005785f9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5785feu); f_0062fbf0();
    /* 005785fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00578601: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578604: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00578607: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057860a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057860d: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00578610: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00578613: jl 0x578624 */ if ((fS!=fO)) goto L_00578624;
L_00578615:; BB(0x00578615);
    /* 00578615: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578618: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0057861b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057861e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00578621: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
L_00578624:; BB(0x00578624);
    /* 00578624: mov esp, ebp */ r_esp = r_ebp;
    /* 00578626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578627: ret  */ FN_RET(0x005785b0); r_esp += 4; return;
}

