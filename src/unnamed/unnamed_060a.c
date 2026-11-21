#include "protos.h"

void f_0060a060(void) /* sub_60A060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a060);
    /* 0060a060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a061: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a063: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a064: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060a067: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a06e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a070: jne 0x60a087 */ if (!fZ) goto L_0060a087;
L_0060a072:; BB(0x0060a072);
    /* 0060a072: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a075: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a079: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a07b: je 0x60a081 */ if (fZ) goto L_0060a081;
L_0060a07d:; BB(0x0060a07d);
    /* 0060a07d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a07f: jmp 0x60a089 */ goto L_0060a089;
L_0060a081:; BB(0x0060a081);
    /* 0060a081: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a083: jmp 0x60a089 */ goto L_0060a089;
L_0060a087:; BB(0x0060a087);
    /* 0060a087: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0060a089:; BB(0x0060a089);
    /* 0060a089: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a08b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a08c: ret 4 */ FN_RET(0x0060a060); r_esp += 8; return;
}

void f_0060a090(void) /* sub_60A090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a090);
    /* 0060a090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a091: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a093: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a096: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a099: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a0a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a0a2: jne 0x60a0c9 */ if (!fZ) goto L_0060a0c9;
L_0060a0a4:; BB(0x0060a0a4);
    /* 0060a0a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a0a7: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a0ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a0ad: je 0x60a0b1 */ if (fZ) goto L_0060a0b1;
L_0060a0af:; BB(0x0060a0af);
    /* 0060a0af: jmp 0x60a0c9 */ goto L_0060a0c9;
L_0060a0b1:; BB(0x0060a0b1);
    /* 0060a0b1: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 0060a0b4: fmul qword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xcu));
    /* 0060a0b7: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x60a0bcu); f_00686cc0();
    /* 0060a0bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a0bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a0c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a0c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a0c4: call 0x60a050 */ r_esp -= 4; W32(r_esp, 0x60a0c9u); f_0060a050();
L_0060a0c9:; BB(0x0060a0c9);
    /* 0060a0c9: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a0cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a0cc: ret 0xc */ FN_RET(0x0060a090); r_esp += 16; return;
}

void f_0060a0d0(void) /* sub_60A0D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a0d0);
    /* 0060a0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a0d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a0d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a0d9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a0e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a0e2: jne 0x60a10c */ if (!fZ) goto L_0060a10c;
L_0060a0e4:; BB(0x0060a0e4);
    /* 0060a0e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a0e7: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a0eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a0ed: je 0x60a0f3 */ if (fZ) goto L_0060a0f3;
L_0060a0ef:; BB(0x0060a0ef);
    /* 0060a0ef: fldz  */ FPUSH(0.0);
    /* 0060a0f1: jmp 0x60a10e */ goto L_0060a10e;
L_0060a0f3:; BB(0x0060a0f3);
    /* 0060a0f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a0f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a0f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a0fa: call 0x60a060 */ r_esp -= 4; W32(r_esp, 0x60a0ffu); f_0060a060();
    /* 0060a0ff: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0060a102: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0060a105: fidiv dword ptr [ebp - 4] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a108: jmp 0x60a10e */ goto L_0060a10e;
L_0060a10c:; BB(0x0060a10c);
    /* 0060a10c: fldz  */ FPUSH(0.0);
L_0060a10e:; BB(0x0060a10e);
    /* 0060a10e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a110: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a111: ret 4 */ FN_RET(0x0060a0d0); r_esp += 8; return;
}

void f_0060a120(void) /* sub_60A120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a120);
    /* 0060a120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a121: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a123: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a126: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060a129: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a130: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a132: jne 0x60a168 */ if (!fZ) goto L_0060a168;
L_0060a134:; BB(0x0060a134);
    /* 0060a134: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a137: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a13b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a13d: je 0x60a141 */ if (fZ) goto L_0060a141;
L_0060a13f:; BB(0x0060a13f);
    /* 0060a13f: jmp 0x60a168 */ goto L_0060a168;
L_0060a141:; BB(0x0060a141);
    /* 0060a141: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a145: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a148: call 0x60a060 */ r_esp -= 4; W32(r_esp, 0x60a14du); f_0060a060();
    /* 0060a14d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060a150: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 0060a153: fmul qword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xcu));
    /* 0060a156: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x60a15bu); f_00686cc0();
    /* 0060a15b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a15c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060a15f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a163: call 0x60a050 */ r_esp -= 4; W32(r_esp, 0x60a168u); f_0060a050();
L_0060a168:; BB(0x0060a168);
    /* 0060a168: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a16a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a16b: ret 0xc */ FN_RET(0x0060a120); r_esp += 16; return;
}

void f_0060a480(void) /* sub_60A480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a480);
    /* 0060a480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a481: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a486: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a489: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a490: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a492: jne 0x60a4c8 */ if (!fZ) goto L_0060a4c8;
L_0060a494:; BB(0x0060a494);
    /* 0060a494: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a497: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a49b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a49d: je 0x60a4a1 */ if (fZ) goto L_0060a4a1;
L_0060a49f:; BB(0x0060a49f);
    /* 0060a49f: jmp 0x60a4c8 */ goto L_0060a4c8;
L_0060a4a1:; BB(0x0060a4a1);
    /* 0060a4a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a4a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a4a8: call 0x609d80 */ r_esp -= 4; W32(r_esp, 0x60a4adu); f_00609d80();
    /* 0060a4ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060a4b0: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a4b4: jne 0x60a4b8 */ if (!fZ) goto L_0060a4b8;
L_0060a4b6:; BB(0x0060a4b6);
    /* 0060a4b6: jmp 0x60a4c8 */ goto L_0060a4c8;
L_0060a4b8:; BB(0x0060a4b8);
    /* 0060a4b8: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0060a4bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a4bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4c0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a4c3: call 0x60a330 */ r_esp -= 4; W32(r_esp, 0x60a4c8u); f_0060a330();
L_0060a4c8:; BB(0x0060a4c8);
    /* 0060a4c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a4ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a4cb: ret 8 */ FN_RET(0x0060a480); r_esp += 12; return;
}

void f_0060a4d0(void) /* sub_60A4D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a4d0);
    /* 0060a4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a4d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a4d6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a4d9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a4e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a4e2: jne 0x60a530 */ if (!fZ) goto L_0060a530;
L_0060a4e4:; BB(0x0060a4e4);
    /* 0060a4e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a4e7: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a4eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a4ed: je 0x60a4f1 */ if (fZ) goto L_0060a4f1;
L_0060a4ef:; BB(0x0060a4ef);
    /* 0060a4ef: jmp 0x60a530 */ goto L_0060a530;
L_0060a4f1:; BB(0x0060a4f1);
    /* 0060a4f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a4f8: jmp 0x60a503 */ goto L_0060a503;
L_0060a4fa:; BB(0x0060a4fa);
    /* 0060a4fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a4fd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060a500: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060a503:; BB(0x0060a503);
    /* 0060a503: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a507: jge 0x60a528 */ if ((fS==fO)) goto L_0060a528;
L_0060a509:; BB(0x0060a509);
    /* 0060a509: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a50c: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a50f: cmp dword ptr [ecx + 0x796d28], 0 */ {  u32 a = R32((u32)(r_ecx+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a516: je 0x60a526 */ if (fZ) goto L_0060a526;
L_0060a518:; BB(0x0060a518);
    /* 0060a518: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060a51a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a51d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a51e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a521: call 0x60a330 */ r_esp -= 4; W32(r_esp, 0x60a526u); f_0060a330();
L_0060a526:; BB(0x0060a526);
    /* 0060a526: jmp 0x60a4fa */ goto L_0060a4fa;
L_0060a528:; BB(0x0060a528);
    /* 0060a528: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a52b: call 0x60b460 */ r_esp -= 4; W32(r_esp, 0x60a530u); f_0060b460();
L_0060a530:; BB(0x0060a530);
    /* 0060a530: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a532: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a533: ret  */ FN_RET(0x0060a4d0); r_esp += 4; return;
}

void f_0060a650(void) /* sub_60A650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a650);
    /* 0060a650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a651: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a653: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a656: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a659: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a660: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a662: jne 0x60a694 */ if (!fZ) goto L_0060a694;
L_0060a664:; BB(0x0060a664);
    /* 0060a664: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a667: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a66b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a66d: je 0x60a671 */ if (fZ) goto L_0060a671;
L_0060a66f:; BB(0x0060a66f);
    /* 0060a66f: jmp 0x60a694 */ goto L_0060a694;
L_0060a671:; BB(0x0060a671);
    /* 0060a671: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a675: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a678: call 0x609d80 */ r_esp -= 4; W32(r_esp, 0x60a67du); f_00609d80();
    /* 0060a67d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060a680: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a684: jne 0x60a688 */ if (!fZ) goto L_0060a688;
L_0060a686:; BB(0x0060a686);
    /* 0060a686: jmp 0x60a694 */ goto L_0060a694;
L_0060a688:; BB(0x0060a688);
    /* 0060a688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a68b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a68c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a68f: call 0x60a5c0 */ r_esp -= 4; W32(r_esp, 0x60a694u); f_0060a5c0();
L_0060a694:; BB(0x0060a694);
    /* 0060a694: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a696: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a697: ret 4 */ FN_RET(0x0060a650); r_esp += 8; return;
}

void f_0060a6a0(void) /* sub_60A6A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a6a0);
    /* 0060a6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a6a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a6a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a6a9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a6b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a6b2: jne 0x60a70e */ if (!fZ) goto L_0060a70e;
L_0060a6b4:; BB(0x0060a6b4);
    /* 0060a6b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a6b7: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a6bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a6bd: je 0x60a6c1 */ if (fZ) goto L_0060a6c1;
L_0060a6bf:; BB(0x0060a6bf);
    /* 0060a6bf: jmp 0x60a70e */ goto L_0060a70e;
L_0060a6c1:; BB(0x0060a6c1);
    /* 0060a6c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a6c8: jmp 0x60a6d3 */ goto L_0060a6d3;
L_0060a6ca:; BB(0x0060a6ca);
    /* 0060a6ca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a6cd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060a6d0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060a6d3:; BB(0x0060a6d3);
    /* 0060a6d3: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a6d7: jge 0x60a6f6 */ if ((fS==fO)) goto L_0060a6f6;
L_0060a6d9:; BB(0x0060a6d9);
    /* 0060a6d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a6dc: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a6df: cmp dword ptr [ecx + 0x796d28], 0 */ {  u32 a = R32((u32)(r_ecx+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a6e6: je 0x60a6f4 */ if (fZ) goto L_0060a6f4;
L_0060a6e8:; BB(0x0060a6e8);
    /* 0060a6e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a6eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a6ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a6ef: call 0x60a5c0 */ r_esp -= 4; W32(r_esp, 0x60a6f4u); f_0060a5c0();
L_0060a6f4:; BB(0x0060a6f4);
    /* 0060a6f4: jmp 0x60a6ca */ goto L_0060a6ca;
L_0060a6f6:; BB(0x0060a6f6);
    /* 0060a6f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a6f9: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a6fd: je 0x60a70e */ if (fZ) goto L_0060a70e;
L_0060a6ff:; BB(0x0060a6ff);
    /* 0060a6ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a702: call 0x60b460 */ r_esp -= 4; W32(r_esp, 0x60a707u); f_0060b460();
    /* 0060a707: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a70a: mov byte ptr [ecx + 0x10], 1 */ W8((u32)(r_ecx+0x10u), 0x1u);
L_0060a70e:; BB(0x0060a70e);
    /* 0060a70e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a710: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a711: ret  */ FN_RET(0x0060a6a0); r_esp += 4; return;
}

void f_0060a7b0(void) /* sub_60A7B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a7b0);
    /* 0060a7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a7b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a7b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a7b9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a7c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a7c2: jne 0x60a7f4 */ if (!fZ) goto L_0060a7f4;
L_0060a7c4:; BB(0x0060a7c4);
    /* 0060a7c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a7c7: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a7cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a7cd: je 0x60a7d1 */ if (fZ) goto L_0060a7d1;
L_0060a7cf:; BB(0x0060a7cf);
    /* 0060a7cf: jmp 0x60a7f4 */ goto L_0060a7f4;
L_0060a7d1:; BB(0x0060a7d1);
    /* 0060a7d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a7d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a7d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a7d8: call 0x609d80 */ r_esp -= 4; W32(r_esp, 0x60a7ddu); f_00609d80();
    /* 0060a7dd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060a7e0: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a7e4: jne 0x60a7e8 */ if (!fZ) goto L_0060a7e8;
L_0060a7e6:; BB(0x0060a7e6);
    /* 0060a7e6: jmp 0x60a7f4 */ goto L_0060a7f4;
L_0060a7e8:; BB(0x0060a7e8);
    /* 0060a7e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a7eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a7ec: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a7ef: call 0x60a720 */ r_esp -= 4; W32(r_esp, 0x60a7f4u); f_0060a720();
L_0060a7f4:; BB(0x0060a7f4);
    /* 0060a7f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a7f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a7f7: ret 4 */ FN_RET(0x0060a7b0); r_esp += 8; return;
}

void f_0060a800(void) /* sub_60A800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a800);
    /* 0060a800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a801: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a806: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a809: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a810: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a812: jne 0x60a869 */ if (!fZ) goto L_0060a869;
L_0060a814:; BB(0x0060a814);
    /* 0060a814: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a817: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a81b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a81d: je 0x60a821 */ if (fZ) goto L_0060a821;
L_0060a81f:; BB(0x0060a81f);
    /* 0060a81f: jmp 0x60a869 */ goto L_0060a869;
L_0060a821:; BB(0x0060a821);
    /* 0060a821: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a828: jmp 0x60a833 */ goto L_0060a833;
L_0060a82a:; BB(0x0060a82a);
    /* 0060a82a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a82d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060a830: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060a833:; BB(0x0060a833);
    /* 0060a833: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a837: jge 0x60a856 */ if ((fS==fO)) goto L_0060a856;
L_0060a839:; BB(0x0060a839);
    /* 0060a839: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a83c: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a83f: cmp dword ptr [ecx + 0x796d28], 0 */ {  u32 a = R32((u32)(r_ecx+0x796d28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a846: je 0x60a854 */ if (fZ) goto L_0060a854;
L_0060a848:; BB(0x0060a848);
    /* 0060a848: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a84b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a84c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a84f: call 0x60a720 */ r_esp -= 4; W32(r_esp, 0x60a854u); f_0060a720();
L_0060a854:; BB(0x0060a854);
    /* 0060a854: jmp 0x60a82a */ goto L_0060a82a;
L_0060a856:; BB(0x0060a856);
    /* 0060a856: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a859: movzx ecx, byte ptr [eax + 0x10] */ r_ecx = (u32)R8((u32)(r_eax+0x10u));
    /* 0060a85d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a85f: je 0x60a869 */ if (fZ) goto L_0060a869;
L_0060a861:; BB(0x0060a861);
    /* 0060a861: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a864: call 0x60b450 */ r_esp -= 4; W32(r_esp, 0x60a869u); f_0060b450();
L_0060a869:; BB(0x0060a869);
    /* 0060a869: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a86b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a86c: ret  */ FN_RET(0x0060a800); r_esp += 4; return;
}

void f_0060a8f0(void) /* sub_60A8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a8f0);
    /* 0060a8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a8f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a8f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a8f9: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a900: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a902: jne 0x60a93c */ if (!fZ) goto L_0060a93c;
L_0060a904:; BB(0x0060a904);
    /* 0060a904: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a907: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a90b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a90d: je 0x60a913 */ if (fZ) goto L_0060a913;
L_0060a90f:; BB(0x0060a90f);
    /* 0060a90f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060a911: jmp 0x60a93e */ goto L_0060a93e;
L_0060a913:; BB(0x0060a913);
    /* 0060a913: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060a916: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060a917: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a91a: call 0x609d80 */ r_esp -= 4; W32(r_esp, 0x60a91fu); f_00609d80();
    /* 0060a91f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060a922: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a926: jne 0x60a92c */ if (!fZ) goto L_0060a92c;
L_0060a928:; BB(0x0060a928);
    /* 0060a928: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060a92a: jmp 0x60a93e */ goto L_0060a93e;
L_0060a92c:; BB(0x0060a92c);
    /* 0060a92c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a92f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a930: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a933: call 0x60a870 */ r_esp -= 4; W32(r_esp, 0x60a938u); f_0060a870();
    /* 0060a938: jmp 0x60a93e */ goto L_0060a93e;
L_0060a93c:; BB(0x0060a93c);
    /* 0060a93c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0060a93e:; BB(0x0060a93e);
    /* 0060a93e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a940: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a941: ret 4 */ FN_RET(0x0060a8f0); r_esp += 8; return;
}

void f_0060a950(void) /* sub_60A950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a950);
    /* 0060a950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a951: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a953: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a956: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0060a959: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a960: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a962: jne 0x60a9ae */ if (!fZ) goto L_0060a9ae;
L_0060a964:; BB(0x0060a964);
    /* 0060a964: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a967: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a96b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a96d: je 0x60a973 */ if (fZ) goto L_0060a973;
L_0060a96f:; BB(0x0060a96f);
    /* 0060a96f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a971: jmp 0x60a9b0 */ goto L_0060a9b0;
L_0060a973:; BB(0x0060a973);
    /* 0060a973: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060a97a: jmp 0x60a985 */ goto L_0060a985;
L_0060a97c:; BB(0x0060a97c);
    /* 0060a97c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a97f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060a982: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060a985:; BB(0x0060a985);
    /* 0060a985: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060a989: jge 0x60a9ae */ if ((fS==fO)) goto L_0060a9ae;
L_0060a98b:; BB(0x0060a98b);
    /* 0060a98b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a98e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060a98f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060a992: call 0x60a870 */ r_esp -= 4; W32(r_esp, 0x60a997u); f_0060a870();
    /* 0060a997: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060a99a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a99c: je 0x60a9ac */ if (fZ) goto L_0060a9ac;
L_0060a99e:; BB(0x0060a99e);
    /* 0060a99e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060a9a1: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060a9a4: mov eax, dword ptr [eax + 0x796d38] */ r_eax = R32((u32)(r_eax+0x796d38u));
    /* 0060a9aa: jmp 0x60a9b0 */ goto L_0060a9b0;
L_0060a9ac:; BB(0x0060a9ac);
    /* 0060a9ac: jmp 0x60a97c */ goto L_0060a97c;
L_0060a9ae:; BB(0x0060a9ae);
    /* 0060a9ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0060a9b0:; BB(0x0060a9b0);
    /* 0060a9b0: mov esp, ebp */ r_esp = r_ebp;
    /* 0060a9b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060a9b3: ret  */ FN_RET(0x0060a950); r_esp += 4; return;
}

void f_0060a9c0(void) /* sub_60A9C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060a9c0);
    /* 0060a9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060a9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060a9c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060a9c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060a9c7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0060a9ca: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060a9d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a9d3: jne 0x60ab27 */ if (!fZ) goto L_0060ab27;
L_0060a9d9:; BB(0x0060a9d9);
    /* 0060a9d9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a9dc: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060a9e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a9e2: je 0x60a9eb */ if (fZ) goto L_0060a9eb;
L_0060a9e4:; BB(0x0060a9e4);
    /* 0060a9e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060a9e6: jmp 0x60ab29 */ goto L_0060ab29;
L_0060a9eb:; BB(0x0060a9eb);
    /* 0060a9eb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a9ee: movzx ecx, byte ptr [eax + 9] */ r_ecx = (u32)R8((u32)(r_eax+0x9u));
    /* 0060a9f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a9f4: je 0x60aa07 */ if (fZ) goto L_0060aa07;
L_0060a9f6:; BB(0x0060a9f6);
    /* 0060a9f6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060a9f9: movzx eax, byte ptr [edx + 8] */ r_eax = (u32)R8((u32)(r_edx+0x8u));
    /* 0060a9fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060a9ff: je 0x60aa07 */ if (fZ) goto L_0060aa07;
L_0060aa01:; BB(0x0060aa01);
    /* 0060aa01: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060aa05: jne 0x60aa0f */ if (!fZ) goto L_0060aa0f;
L_0060aa07:; BB(0x0060aa07);
    /* 0060aa07: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0060aa0a: jmp 0x60ab29 */ goto L_0060ab29;
L_0060aa0f:; BB(0x0060aa0f);
    /* 0060aa0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060aa12: call 0x609e00 */ r_esp -= 4; W32(r_esp, 0x60aa17u); f_00609e00();
    /* 0060aa17: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060aa1a: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060aa1e: jne 0x60aa28 */ if (!fZ) goto L_0060aa28;
L_0060aa20:; BB(0x0060aa20);
    /* 0060aa20: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0060aa23: jmp 0x60ab29 */ goto L_0060ab29;
L_0060aa28:; BB(0x0060aa28);
    /* 0060aa28: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aa2b: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aa2e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060aa31: mov dword ptr [ecx + 0x796d38], edx */ W32((u32)(r_ecx+0x796d38u), r_edx);
    /* 0060aa37: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060aa3b: je 0x60aad9 */ if (fZ) goto L_0060aad9;
L_0060aa41:; BB(0x0060aa41);
    /* 0060aa41: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aa44: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aa47: mov byte ptr [eax + 0x796d3c], 1 */ W8((u32)(r_eax+0x796d3cu), 0x1u);
    /* 0060aa4e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aa51: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aa54: mov dword ptr [ecx + 0x796d40], 0xffffffff */ W32((u32)(r_ecx+0x796d40u), 0xffffffffu);
    /* 0060aa5e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060aa65: jmp 0x60aa70 */ goto L_0060aa70;
L_0060aa67:; BB(0x0060aa67);
    /* 0060aa67: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aa6a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060aa6d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0060aa70:; BB(0x0060aa70);
    /* 0060aa70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aa73: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060aa76: cmp dword ptr [ecx + eax*4], -1 */ {  u32 a = R32((u32)(r_ecx+r_eax*4)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060aa7a: je 0x60aa97 */ if (fZ) goto L_0060aa97;
L_0060aa7c:; BB(0x0060aa7c);
    /* 0060aa7c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aa7f: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aa82: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aa85: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aa88: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0060aa8b: mov ecx, dword ptr [esi + ecx*4] */ r_ecx = R32((u32)(r_esi+r_ecx*4));
    /* 0060aa8e: mov dword ptr [edx + eax*4 + 0x796d44], ecx */ W32((u32)(r_edx+r_eax*4+0x796d44u), r_ecx);
    /* 0060aa95: jmp 0x60aa67 */ goto L_0060aa67;
L_0060aa97:; BB(0x0060aa97);
    /* 0060aa97: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aa9a: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aa9d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aaa0: mov dword ptr [edx + eax*4 + 0x796d44], 0xffffffff */ W32((u32)(r_edx+r_eax*4+0x796d44u), 0xffffffffu);
    /* 0060aaab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aaae: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aab1: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0060aab4: fstp dword ptr [ecx + 0x796d94] */ W_F32((u32)(r_ecx+0x796d94u), ST(0)); FPOP();
    /* 0060aaba: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aabd: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aac0: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0060aac3: fstp dword ptr [edx + 0x796d98] */ W_F32((u32)(r_edx+0x796d98u), ST(0)); FPOP();
    /* 0060aac9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060aacb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060aacf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060aad2: call 0x60ab30 */ r_esp -= 4; W32(r_esp, 0x60aad7u); f_0060ab30();
    /* 0060aad7: jmp 0x60ab20 */ goto L_0060ab20;
L_0060aad9:; BB(0x0060aad9);
    /* 0060aad9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aadc: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aadf: mov byte ptr [ecx + 0x796d3c], 0 */ W8((u32)(r_ecx+0x796d3cu), 0x0u);
    /* 0060aae6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aae9: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060aaec: mov eax, dword ptr [edx + 0x796d38] */ r_eax = R32((u32)(r_edx+0x796d38u));
    /* 0060aaf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060aaf3: push 0x6d8044 */ { u32 v = 0x6d8044u; r_esp -= 4; W32(r_esp, v); }
    /* 0060aaf8: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60aafdu); f_0062fde0();
    /* 0060aafd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ab00: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0060ab03: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0060ab06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ab07: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0060ab0a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0060ab0d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060ab10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ab11: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060ab14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ab15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ab18: call 0x60b0b0 */ r_esp -= 4; W32(r_esp, 0x60ab1du); f_0060b0b0();
    /* 0060ab1d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0060ab20:; BB(0x0060ab20);
    /* 0060ab20: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060ab23: jmp 0x60ab29 */ goto L_0060ab29;
L_0060ab27:; BB(0x0060ab27);
    /* 0060ab27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0060ab29:; BB(0x0060ab29);
    /* 0060ab29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060ab2a: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ab2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ab2d: ret 0x14 */ FN_RET(0x0060a9c0); r_esp += 24; return;
}

void f_0060ab30(void) /* sub_60AB30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060ab30);
    /* 0060ab30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ab31: mov ebp, esp */ r_ebp = r_esp;
    /* 0060ab33: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060ab36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060ab37: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0060ab3a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060ab3d: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ab40: mov ecx, dword ptr [eax + 0x796d38] */ r_ecx = R32((u32)(r_eax+0x796d38u));
    /* 0060ab46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060ab47: push 0x6d8084 */ { u32 v = 0x6d8084u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ab4c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60ab51u); f_0062fde0();
    /* 0060ab51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ab54: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0060ab5b: jmp 0x60ab66 */ goto L_0060ab66;
L_0060ab5d:; BB(0x0060ab5d);
    /* 0060ab5d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ab60: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060ab63: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0060ab66:; BB(0x0060ab66);
    /* 0060ab66: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060ab69: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ab6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ab6f: cmp dword ptr [eax + ecx*4 + 0x796d44], -1 */ {  u32 a = R32((u32)(r_eax+r_ecx*4+0x796d44u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ab77: je 0x60ab7b */ if (fZ) goto L_0060ab7b;
L_0060ab79:; BB(0x0060ab79);
    /* 0060ab79: jmp 0x60ab5d */ goto L_0060ab5d;
L_0060ab7b:; BB(0x0060ab7b);
    /* 0060ab7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060ab7e: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ab81: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ab84: mov ecx, dword ptr [edx + eax*4 + 0x796d40] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x796d40u));
    /* 0060ab8b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0060ab8e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0060ab95: jmp 0x60aba0 */ goto L_0060aba0;
L_0060ab97:; BB(0x0060ab97);
    /* 0060ab97: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060ab9a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060ab9d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0060aba0:; BB(0x0060aba0);
    /* 0060aba0: cmp dword ptr [ebp - 0x14], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060aba4: jge 0x60ac0c */ if ((fS==fO)) goto L_0060ac0c;
L_0060aba6:; BB(0x0060aba6);
    /* 0060aba6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060aba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060abaa: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x60abafu); f_0062fbf0();
    /* 0060abaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060abb2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060abb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060abb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060abb9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x60abbeu); f_0062fbf0();
    /* 0060abbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060abc1: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0060abc4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060abc7: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060abca: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060abcd: mov ecx, dword ptr [edx + eax*4 + 0x796d44] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x796d44u));
    /* 0060abd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060abd7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060abda: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060abdd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060abe0: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060abe3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060abe6: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060abe9: mov edx, dword ptr [edx + esi*4 + 0x796d44] */ r_edx = R32((u32)(r_edx+r_esi*4+0x796d44u));
    /* 0060abf0: mov dword ptr [eax + ecx*4 + 0x796d44], edx */ W32((u32)(r_eax+r_ecx*4+0x796d44u), r_edx);
    /* 0060abf7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060abfa: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060abfd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060ac00: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ac03: mov dword ptr [eax + ecx*4 + 0x796d44], edx */ W32((u32)(r_eax+r_ecx*4+0x796d44u), r_edx);
    /* 0060ac0a: jmp 0x60ab97 */ goto L_0060ab97;
L_0060ac0c:; BB(0x0060ac0c);
    /* 0060ac0c: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 0060ac10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ac12: je 0x60ac61 */ if (fZ) goto L_0060ac61;
L_0060ac14:; BB(0x0060ac14);
    /* 0060ac14: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060ac18: jle 0x60ac61 */ if ((fZ||fS!=fO)) goto L_0060ac61;
L_0060ac1a:; BB(0x0060ac1a);
    /* 0060ac1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ac1d: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ac20: mov edx, dword ptr [ecx + 0x796d44] */ r_edx = R32((u32)(r_ecx+0x796d44u));
    /* 0060ac26: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ac29: jne 0x60ac61 */ if (!fZ) goto L_0060ac61;
L_0060ac2b:; BB(0x0060ac2b);
    /* 0060ac2b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060ac2e: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ac31: mov ecx, dword ptr [eax + 0x796d44] */ r_ecx = R32((u32)(r_eax+0x796d44u));
    /* 0060ac37: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060ac3a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060ac3d: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ac40: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060ac43: imul eax, eax, 0x74 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x74u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ac46: mov ecx, dword ptr [edx + 0x796d48] */ r_ecx = R32((u32)(r_edx+0x796d48u));
    /* 0060ac4c: mov dword ptr [eax + 0x796d44], ecx */ W32((u32)(r_eax+0x796d44u), r_ecx);
    /* 0060ac52: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060ac55: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ac58: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ac5b: mov dword ptr [edx + 0x796d48], eax */ W32((u32)(r_edx+0x796d48u), r_eax);
L_0060ac61:; BB(0x0060ac61);
    /* 0060ac61: push 0x6d8068 */ { u32 v = 0x6d8068u; r_esp -= 4; W32(r_esp, v); }
    /* 0060ac66: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60ac6bu); f_0062fde0();
    /* 0060ac6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060ac6e: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0060ac75: jmp 0x60ac80 */ goto L_0060ac80;
L_0060ac77:; BB(0x0060ac77);
    /* 0060ac77: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060ac7a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060ac7d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0060ac80:; BB(0x0060ac80);
    /* 0060ac80: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060ac83: imul edx, edx, 0x74 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x74u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ac86: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060ac89: cmp dword ptr [edx + eax*4 + 0x796d44], -1 */ {  u32 a = R32((u32)(r_edx+r_eax*4+0x796d44u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ac91: je 0x60acb3 */ if (fZ) goto L_0060acb3;
L_0060ac93:; BB(0x0060ac93);
    /* 0060ac93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060ac96: imul ecx, ecx, 0x74 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x74u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060ac99: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060ac9c: mov eax, dword ptr [ecx + edx*4 + 0x796d44] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x796d44u));
    /* 0060aca3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060aca4: push 0x6d805c */ { u32 v = 0x6d805cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060aca9: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x60acaeu); f_0062fde0();
    /* 0060acae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060acb1: jmp 0x60ac77 */ goto L_0060ac77;
L_0060acb3:; BB(0x0060acb3);
    /* 0060acb3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060acb4: mov esp, ebp */ r_esp = r_ebp;
    /* 0060acb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060acb7: ret 8 */ FN_RET(0x0060ab30); r_esp += 12; return;
}

void f_0060acc0(void) /* sub_60ACC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060acc0);
    /* 0060acc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060acc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060acc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060acc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060acc7: movzx eax, byte ptr [0x7960cb] */ r_eax = (u32)R8((u32)(0x7960cbu));
    /* 0060acce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060acd0: jne 0x60ace7 */ if (!fZ) goto L_0060ace7;
L_0060acd2:; BB(0x0060acd2);
    /* 0060acd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060acd5: movzx edx, byte ptr [ecx + 0xa] */ r_edx = (u32)R8((u32)(r_ecx+0xau));
    /* 0060acd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060acdb: je 0x60acdf */ if (fZ) goto L_0060acdf;
L_0060acdd:; BB(0x0060acdd);
    /* 0060acdd: jmp 0x60acec */ goto L_0060acec;
L_0060acdf:; BB(0x0060acdf);
    /* 0060acdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060ace2: call 0x60acf0 */ r_esp -= 4; W32(r_esp, 0x60ace7u); f_0060acf0();
L_0060ace7:; BB(0x0060ace7);
    /* 0060ace7: call 0x6112f0 */ r_esp -= 4; W32(r_esp, 0x60acecu); f_006112f0();
L_0060acec:; BB(0x0060acec);
    /* 0060acec: mov esp, ebp */ r_esp = r_ebp;
    /* 0060acee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060acef: ret  */ FN_RET(0x0060acc0); r_esp += 4; return;
}

void f_0060af50(void) /* sub_60AF50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060af50);
    /* 0060af50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060af51: mov ebp, esp */ r_ebp = r_esp;
    /* 0060af53: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060af56: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0060af59: call 0x5df250 */ r_esp -= 4; W32(r_esp, 0x60af5eu); f_005df250();
    /* 0060af5e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0060af61: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0060af68: jmp 0x60af73 */ goto L_0060af73;
L_0060af6a:; BB(0x0060af6a);
    /* 0060af6a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060af6d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060af70: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0060af73:; BB(0x0060af73);
    /* 0060af73: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060af76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060af79: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0060af7c: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0060af7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060af81: je 0x60b099 */ if (fZ) goto L_0060b099;
L_0060af87:; BB(0x0060af87);
    /* 0060af87: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060af8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060af8d: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0060af90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060af91: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060af94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060af95: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x60af9au); f_00686d8e();
    /* 0060af9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060af9d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060afa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060afa1: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60afa6u); f_00686ecc();
    /* 0060afa6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060afa9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060afac: movsx edx, byte ptr [ecx + eax - 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xffffffffu));
    /* 0060afb1: cmp edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060afb4: je 0x60afc7 */ if (fZ) goto L_0060afc7;
L_0060afb6:; BB(0x0060afb6);
    /* 0060afb6: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060afbb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060afbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060afbf: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x60afc4u); f_00686ec6();
    /* 0060afc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060afc7:; BB(0x0060afc7);
    /* 0060afc7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060afca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060afcb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060afce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060afcf: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x60afd4u); f_00686ec6();
    /* 0060afd4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060afd7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060afda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060afdb: call 0x5ea0a0 */ r_esp -= 4; W32(r_esp, 0x60afe0u); f_005ea0a0();
    /* 0060afe0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060afe3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060afe6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060afe8: je 0x60aff1 */ if (fZ) goto L_0060aff1;
L_0060afea:; BB(0x0060afea);
    /* 0060afea: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060afec: jmp 0x60b09b */ goto L_0060b09b;
L_0060aff1:; BB(0x0060aff1);
    /* 0060aff1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060aff4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060aff7: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0060affa: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0060affd: cmp edx, 0x2e */ {  u32 a = r_edx; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b000: jne 0x60b094 */ if (!fZ) goto L_0060b094;
L_0060b006:; BB(0x0060b006);
    /* 0060b006: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b00b: push 0x79583c */ { u32 v = 0x79583cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060b010: movsx eax, byte ptr [0x795f6c] */ r_eax = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 0060b017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b018: push 0x6d80d8 */ { u32 v = 0x6d80d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b01d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060b020: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b021: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x60b027u); call_ind(t); }
    /* 0060b027: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b02a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060b02d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060b030: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0060b033: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060b036: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b037: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060b03a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b03b: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x60b040u); f_00686ec6();
    /* 0060b040: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b043: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060b046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b047: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x60b04cu); f_00686ecc();
    /* 0060b04c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b04f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0060b052: movsx edx, byte ptr [ecx + eax - 1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xffffffffu));
    /* 0060b057: cmp edx, 0x5c */ {  u32 a = r_edx; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b05a: je 0x60b06d */ if (fZ) goto L_0060b06d;
L_0060b05c:; BB(0x0060b05c);
    /* 0060b05c: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060b061: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060b064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b065: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x60b06au); f_00686ec6();
    /* 0060b06a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0060b06d:; BB(0x0060b06d);
    /* 0060b06d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060b070: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b071: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0060b074: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060b075: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x60b07au); f_00686ec6();
    /* 0060b07a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b07d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060b080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060b081: call 0x5ea0a0 */ r_esp -= 4; W32(r_esp, 0x60b086u); f_005ea0a0();
    /* 0060b086: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060b089: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0060b08c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060b08e: je 0x60b094 */ if (fZ) goto L_0060b094;
L_0060b090:; BB(0x0060b090);
    /* 0060b090: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0060b092: jmp 0x60b09b */ goto L_0060b09b;
L_0060b094:; BB(0x0060b094);
    /* 0060b094: jmp 0x60af6a */ goto L_0060af6a;
L_0060b099:; BB(0x0060b099);
    /* 0060b099: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0060b09b:; BB(0x0060b09b);
    /* 0060b09b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060b09d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060b09e: ret 8 */ FN_RET(0x0060af50); r_esp += 12; return;
}

