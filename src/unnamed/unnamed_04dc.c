#include "protos.h"

void f_004dc490(void) /* sub_4DC490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004dc490);
    /* 004dc490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dc491: mov ebp, esp */ r_ebp = r_esp;
    /* 004dc493: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004dc497: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004dc49a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004dc49d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004dc4a0: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004dc4a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004dc4a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc4a7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004dc4aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc4acu); call_ind(t); }
    /* 004dc4ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004dc4af: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004dc4b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004dc4b5: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004dc4b8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dc4ba: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 004dc4bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc4bfu); call_ind(t); }
    /* 004dc4bf: mov esp, ebp */ r_esp = r_ebp;
    /* 004dc4c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dc4c2: ret  */ FN_RET(0x004dc490); r_esp += 4; return;
}

void f_004dc4d0(void) /* sub_4DC4D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004dc4d0);
    /* 004dc4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dc4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004dc4d3: sub esp, 0xe0 */ {  u32 a = r_esp; u32 b = 0xe0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dc4d9: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004dc4de: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dc4e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004dc4e3: mov dword ptr [ebp - 0xdc], ecx */ W32((u32)(r_ebp+0xffffff24u), r_ecx);
    /* 004dc4e9: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 004dc4ef: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 004dc4f2: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dc4f8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004dc4fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004dc4fd: mov ecx, eax */ r_ecx = r_eax;
    /* 004dc4ff: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004dc502: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dc504u); call_ind(t); }
    /* 004dc504: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004dc507: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
    /* 004dc50d: cmp dword ptr [ebp - 0xe0], 0x3ef */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x3efu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc517: jg 0x4dc558 */ if ((!fZ&&fS==fO)) goto L_004dc558;
L_004dc519:; BB(0x004dc519);
    /* 004dc519: cmp dword ptr [ebp - 0xe0], 0x3ef */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x3efu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dc523: je 0x4dce3e */ if (fZ) goto L_004dce3e;
L_004dc529:; BB(0x004dc529);
    /* 004dc529: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 004dc52f: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004dc532: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 004dc538: cmp dword ptr [ebp - 0xe0], 0xc7 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004dc542: ja 0x4dc580 */ if ((!fC&&!fZ)) goto L_004dc580;
L_004dc544:; BB(0x004dc544);
    /* 004dc544: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 004dc54a: movzx ecx, byte ptr [eax + 0x4dd65c] */ r_ecx = (u32)R8((u32)(r_eax+0x4dd65cu));
    /* 004dc551: jmp dword ptr [ecx*4 + 0x4dd614] */ { u32 t = R32((u32)(r_ecx*4+0x4dd614u)); switch (t) { case 0x4dc666u: goto L_004dc666; case 0x4dc74cu: goto L_004dc74c; case 0x4dc7a7u: goto L_004dc7a7; case 0x4dc802u: goto L_004dc802; case 0x4dc85du: goto L_004dc85d; case 0x4dc943u: goto L_004dc943; case 0x4dca29u: goto L_004dca29; case 0x4dca84u: goto L_004dca84; case 0x4dcadfu: goto L_004dcadf; case 0x4dcb3au: goto L_004dcb3a; case 0x4dcb95u: goto L_004dcb95; case 0x4dcbf0u: goto L_004dcbf0; case 0x4dcc4bu: goto L_004dcc4b; case 0x4dcca6u: goto L_004dcca6; case 0x4dcd01u: goto L_004dcd01; case 0x4dcd5cu: goto L_004dcd5c; case 0x4dcdcdu: goto L_004dcdcd; case 0x4dc580u: goto L_004dc580; default: UNSUP(0x004dc551, "jump table entry is not a known target"); } }
L_004dc558:; BB(0x004dc558);
    /* 004dc558: mov edx, dword ptr [ebp - 0xe0] */ r_edx = R32((u32)(r_ebp+0xffffff20u));
    /* 004dc55e: sub edx, 0x3f0 */ {  u32 a = r_edx; u32 b = 0x3f0u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004dc564: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 004dc56a: cmp dword ptr [ebp - 0xe0], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004dc571: ja 0x4dc580 */ if ((!fC&&!fZ)) goto L_004dc580;
L_004dc573:; BB(0x004dc573);
    /* 004dc573: mov eax, dword ptr [ebp - 0xe0] */ r_eax = R32((u32)(r_ebp+0xffffff20u));
    /* 004dc579: jmp dword ptr [eax*4 + 0x4dd724] */ { u32 t = R32((u32)(r_eax*4+0x4dd724u)); switch (t) { case 0x4dceb8u: goto L_004dceb8; case 0x4dcf32u: goto L_004dcf32; case 0x4dcfacu: goto L_004dcfac; case 0x4dd01du: goto L_004dd01d; case 0x4dd097u: goto L_004dd097; case 0x4dd108u: goto L_004dd108; case 0x4dd182u: goto L_004dd182; case 0x4dd1fcu: goto L_004dd1fc; case 0x4dd26du: goto L_004dd26d; case 0x4dd2deu: goto L_004dd2de; case 0x4dd358u: goto L_004dd358; case 0x4dd3c9u: goto L_004dd3c9; case 0x4dd43au: goto L_004dd43a; case 0x4dd4abu: goto L_004dd4ab; case 0x4dd519u: goto L_004dd519; default: UNSUP(0x004dc579, "jump table entry is not a known target"); } }
L_004dc580:; BB(0x004dc580);
    /* 004dc580: push 0x6bb080 */ { u32 v = 0x6bb080u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc585: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dc58au); f_00630f40();
    /* 004dc58a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc58d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc58e: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 004dc591: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc592: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc598u); call_ind(t); }
    /* 004dc598: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc59b: cmp dword ptr [ebp + 0xc], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc5a2: jle 0x4dc5e9 */ if ((fZ||fS!=fO)) goto L_004dc5e9;
L_004dc5a4:; BB(0x004dc5a4);
    /* 004dc5a4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc5a7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc5a8: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc5ad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc5ad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc5ad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc5af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5b0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc5b3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc5b4: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004dc5b9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc5b9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc5b9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc5bb: mov eax, edx */ r_eax = r_edx;
    /* 004dc5bd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc5be: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc5c3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc5c3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc5c3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc5c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5c6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc5c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc5ca: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004dc5cf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc5cf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc5cf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc5d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5d2: push 0x6bb5a0 */ { u32 v = 0x6bb5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5d7: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 004dc5dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5de: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc5e4u); call_ind(t); }
    /* 004dc5e4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc5e7: jmp 0x4dc63a */ goto L_004dc63a;
L_004dc5e9:; BB(0x004dc5e9);
    /* 004dc5e9: cmp dword ptr [ebp + 0xc], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc5f0: jle 0x4dc621 */ if ((fZ||fS!=fO)) goto L_004dc621;
L_004dc5f2:; BB(0x004dc5f2);
    /* 004dc5f2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc5f5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc5f6: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc5fb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc5fb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc5fb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc5fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc5fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc601: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc602: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc607: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc607, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc607, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc609: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc60a: push 0x6bb594 */ { u32 v = 0x6bb594u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc60f: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 004dc615: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc616: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc61cu); call_ind(t); }
    /* 004dc61c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc61f: jmp 0x4dc63a */ goto L_004dc63a;
L_004dc621:; BB(0x004dc621);
    /* 004dc621: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc625: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc62a: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dc630: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc631: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc637u); call_ind(t); }
    /* 004dc637: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc63a:; BB(0x004dc63a);
    /* 004dc63a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc63b: mov edx, esp */ r_edx = r_esp;
    /* 004dc63d: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dc643: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dc646: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dc64c: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dc64f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc651: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc653: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dc659: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dc65c: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dc661u); f_005ecd00();
    /* 004dc661: jmp 0x4dd58e */ goto L_004dd58e;
L_004dc666:; BB(0x004dc666);
    /* 004dc666: push 0x6bb05c */ { u32 v = 0x6bb05cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc66b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dc670u); f_00630f40();
    /* 004dc670: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc674: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dc677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc678: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc67eu); call_ind(t); }
    /* 004dc67e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc681: cmp dword ptr [ebp + 0xc], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc688: jle 0x4dc6cf */ if ((fZ||fS!=fO)) goto L_004dc6cf;
L_004dc68a:; BB(0x004dc68a);
    /* 004dc68a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc68d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc68e: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc693: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc693, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc693, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc695: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc696: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc699: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc69a: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004dc69f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc69f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc69f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc6a1: mov eax, edx */ r_eax = r_edx;
    /* 004dc6a3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc6a4: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc6a9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc6a9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc6a9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc6ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6ac: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc6af: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc6b0: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004dc6b5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc6b5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc6b5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc6b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6b8: push 0x6bb5a0 */ { u32 v = 0x6bb5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6bd: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 004dc6c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6c4: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc6cau); call_ind(t); }
    /* 004dc6ca: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc6cd: jmp 0x4dc720 */ goto L_004dc720;
L_004dc6cf:; BB(0x004dc6cf);
    /* 004dc6cf: cmp dword ptr [ebp + 0xc], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc6d6: jle 0x4dc707 */ if ((fZ||fS!=fO)) goto L_004dc707;
L_004dc6d8:; BB(0x004dc6d8);
    /* 004dc6d8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc6db: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc6dc: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc6e1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc6e1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc6e1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc6e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6e4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc6e7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc6e8: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc6ed: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc6ed, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc6ed, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc6ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6f0: push 0x6bb594 */ { u32 v = 0x6bb594u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6f5: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 004dc6fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc6fc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc702u); call_ind(t); }
    /* 004dc702: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc705: jmp 0x4dc720 */ goto L_004dc720;
L_004dc707:; BB(0x004dc707);
    /* 004dc707: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc70a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc70b: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc710: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dc716: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc717: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc71du); call_ind(t); }
    /* 004dc71d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc720:; BB(0x004dc720);
    /* 004dc720: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc721: mov edx, esp */ r_edx = r_esp;
    /* 004dc723: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dc729: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dc72c: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dc732: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dc735: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc737: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc739: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dc73f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dc742: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dc747u); f_005ecd00();
    /* 004dc747: jmp 0x4dd58e */ goto L_004dd58e;
L_004dc74c:; BB(0x004dc74c);
    /* 004dc74c: push 0x6bb06c */ { u32 v = 0x6bb06cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc751: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dc756u); f_00630f40();
    /* 004dc756: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc75a: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dc75d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc75e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc764u); call_ind(t); }
    /* 004dc764: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc767: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc76c: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dc772: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc773: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc779u); call_ind(t); }
    /* 004dc779: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc77c: mov edx, esp */ r_edx = r_esp;
    /* 004dc77e: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dc784: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dc787: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dc78d: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dc790: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc792: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc794: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dc79a: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dc79d: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dc7a2u); f_005ecd00();
    /* 004dc7a2: jmp 0x4dd58e */ goto L_004dd58e;
L_004dc7a7:; BB(0x004dc7a7);
    /* 004dc7a7: push 0x6bb04c */ { u32 v = 0x6bb04cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7ac: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dc7b1u); f_00630f40();
    /* 004dc7b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc7b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7b5: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dc7b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7b9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc7bfu); call_ind(t); }
    /* 004dc7bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc7c2: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7c7: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dc7cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7ce: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc7d4u); call_ind(t); }
    /* 004dc7d4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc7d7: mov edx, esp */ r_edx = r_esp;
    /* 004dc7d9: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dc7df: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dc7e2: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dc7e8: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dc7eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7ed: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc7ef: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dc7f5: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dc7f8: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dc7fdu); f_005ecd00();
    /* 004dc7fd: jmp 0x4dd58e */ goto L_004dd58e;
L_004dc802:; BB(0x004dc802);
    /* 004dc802: push 0x6bb580 */ { u32 v = 0x6bb580u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc807: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dc80cu); f_00630f40();
    /* 004dc80c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc80f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc810: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dc813: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc814: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc81au); call_ind(t); }
    /* 004dc81a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc81d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc822: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dc828: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc829: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc82fu); call_ind(t); }
    /* 004dc82f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc832: mov edx, esp */ r_edx = r_esp;
    /* 004dc834: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dc83a: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dc83d: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dc843: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dc846: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc848: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc84a: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dc850: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dc853: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dc858u); f_005ecd00();
    /* 004dc858: jmp 0x4dd58e */ goto L_004dd58e;
L_004dc85d:; BB(0x004dc85d);
    /* 004dc85d: push 0x6bfb48 */ { u32 v = 0x6bfb48u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc862: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dc867u); f_00630f40();
    /* 004dc867: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc86a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc86b: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dc86e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc86f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc875u); call_ind(t); }
    /* 004dc875: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc878: cmp dword ptr [ebp + 0xc], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc87f: jle 0x4dc8c6 */ if ((fZ||fS!=fO)) goto L_004dc8c6;
L_004dc881:; BB(0x004dc881);
    /* 004dc881: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc884: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc885: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc88a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc88a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc88a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc88c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc88d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc890: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc891: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004dc896: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc896, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc896, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc898: mov eax, edx */ r_eax = r_edx;
    /* 004dc89a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc89b: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc8a0: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc8a0, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc8a0, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc8a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8a3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc8a6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc8a7: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004dc8ac: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc8ac, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc8ac, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc8ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8af: push 0x6bb5a0 */ { u32 v = 0x6bb5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8b4: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 004dc8ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8bb: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc8c1u); call_ind(t); }
    /* 004dc8c1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc8c4: jmp 0x4dc917 */ goto L_004dc917;
L_004dc8c6:; BB(0x004dc8c6);
    /* 004dc8c6: cmp dword ptr [ebp + 0xc], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc8cd: jle 0x4dc8fe */ if ((fZ||fS!=fO)) goto L_004dc8fe;
L_004dc8cf:; BB(0x004dc8cf);
    /* 004dc8cf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc8d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc8d3: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc8d8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc8d8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc8d8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc8da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc8de: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc8df: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc8e4: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc8e4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc8e4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc8e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8e7: push 0x6bb594 */ { u32 v = 0x6bb594u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8ec: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 004dc8f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc8f3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc8f9u); call_ind(t); }
    /* 004dc8f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc8fc: jmp 0x4dc917 */ goto L_004dc917;
L_004dc8fe:; BB(0x004dc8fe);
    /* 004dc8fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc901: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc902: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc907: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dc90d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc90e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc914u); call_ind(t); }
    /* 004dc914: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc917:; BB(0x004dc917);
    /* 004dc917: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc918: mov edx, esp */ r_edx = r_esp;
    /* 004dc91a: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dc920: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dc923: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dc929: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dc92c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dc92e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc930: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dc936: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dc939: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dc93eu); f_005ecd00();
    /* 004dc93e: jmp 0x4dd58e */ goto L_004dd58e;
L_004dc943:; BB(0x004dc943);
    /* 004dc943: push 0x6bfb30 */ { u32 v = 0x6bfb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc948: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dc94du); f_00630f40();
    /* 004dc94d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc951: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dc954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc955: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc95bu); call_ind(t); }
    /* 004dc95b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc95e: cmp dword ptr [ebp + 0xc], 0xf423f */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc965: jle 0x4dc9ac */ if ((fZ||fS!=fO)) goto L_004dc9ac;
L_004dc967:; BB(0x004dc967);
    /* 004dc967: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc96a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc96b: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc970: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc970, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc970, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc972: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc973: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc976: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc977: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004dc97c: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc97c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc97c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc97e: mov eax, edx */ r_eax = r_edx;
    /* 004dc980: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc981: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc986: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc986, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc986, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc989: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc98c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc98d: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 004dc992: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc992, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc992, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc995: push 0x6bb5a0 */ { u32 v = 0x6bb5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc99a: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 004dc9a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9a1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc9a7u); call_ind(t); }
    /* 004dc9a7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc9aa: jmp 0x4dc9fd */ goto L_004dc9fd;
L_004dc9ac:; BB(0x004dc9ac);
    /* 004dc9ac: cmp dword ptr [ebp + 0xc], 0x3e7 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dc9b3: jle 0x4dc9e4 */ if ((fZ||fS!=fO)) goto L_004dc9e4;
L_004dc9b5:; BB(0x004dc9b5);
    /* 004dc9b5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc9b8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc9b9: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc9be: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc9be, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc9be, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc9c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9c1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc9c4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004dc9c5: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 004dc9ca: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004dc9ca, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004dc9ca, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004dc9cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9cd: push 0x6bb594 */ { u32 v = 0x6bb594u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9d2: lea edx, [ebp - 0xd8] */ r_edx = (u32)(r_ebp+0xffffff28u);
    /* 004dc9d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9d9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc9dfu); call_ind(t); }
    /* 004dc9df: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc9e2: jmp 0x4dc9fd */ goto L_004dc9fd;
L_004dc9e4:; BB(0x004dc9e4);
    /* 004dc9e4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004dc9e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9e8: push 0x6bb590 */ { u32 v = 0x6bb590u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9ed: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dc9f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9f4: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dc9fau); call_ind(t); }
    /* 004dc9fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004dc9fd:; BB(0x004dc9fd);
    /* 004dc9fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dc9fe: mov edx, esp */ r_edx = r_esp;
    /* 004dca00: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dca06: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dca09: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dca0f: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dca12: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dca14: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dca16: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dca1c: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dca1f: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dca24u); f_005ecd00();
    /* 004dca24: jmp 0x4dd58e */ goto L_004dd58e;
L_004dca29:; BB(0x004dca29);
    /* 004dca29: push 0x6bfb20 */ { u32 v = 0x6bfb20u; r_esp -= 4; W32(r_esp, v); }
    /* 004dca2e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dca33u); f_00630f40();
    /* 004dca33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dca36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dca37: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dca3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dca3b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dca41u); call_ind(t); }
    /* 004dca41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dca44: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dca49: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dca4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dca50: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dca56u); call_ind(t); }
    /* 004dca56: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dca59: mov edx, esp */ r_edx = r_esp;
    /* 004dca5b: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dca61: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dca64: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dca6a: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dca6d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dca6f: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dca71: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dca77: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dca7a: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dca7fu); f_005ecd00();
    /* 004dca7f: jmp 0x4dd58e */ goto L_004dd58e;
L_004dca84:; BB(0x004dca84);
    /* 004dca84: push 0x6bfb0c */ { u32 v = 0x6bfb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dca89: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dca8eu); f_00630f40();
    /* 004dca8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dca91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dca92: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dca95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dca96: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dca9cu); call_ind(t); }
    /* 004dca9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dca9f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcaa4: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcaaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcaab: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcab1u); call_ind(t); }
    /* 004dcab1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcab4: mov edx, esp */ r_edx = r_esp;
    /* 004dcab6: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcabc: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcabf: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcac5: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcac8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcaca: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcacc: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcad2: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcad5: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcadau); f_005ecd00();
    /* 004dcada: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcadf:; BB(0x004dcadf);
    /* 004dcadf: push 0x6bfaf0 */ { u32 v = 0x6bfaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcae4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcae9u); f_00630f40();
    /* 004dcae9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcaec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcaed: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcaf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcaf1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcaf7u); call_ind(t); }
    /* 004dcaf7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcafa: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcaff: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcb05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb06: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcb0cu); call_ind(t); }
    /* 004dcb0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcb0f: mov edx, esp */ r_edx = r_esp;
    /* 004dcb11: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcb17: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcb1a: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcb20: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcb23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb25: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb27: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcb2d: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcb30: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcb35u); f_005ecd00();
    /* 004dcb35: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcb3a:; BB(0x004dcb3a);
    /* 004dcb3a: push 0x6bfadc */ { u32 v = 0x6bfadcu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb3f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcb44u); f_00630f40();
    /* 004dcb44: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcb47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb48: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcb4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb4c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcb52u); call_ind(t); }
    /* 004dcb52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcb55: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb5a: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcb60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb61: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcb67u); call_ind(t); }
    /* 004dcb67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcb6a: mov edx, esp */ r_edx = r_esp;
    /* 004dcb6c: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcb72: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcb75: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcb7b: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcb7e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb80: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb82: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcb88: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcb8b: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcb90u); f_005ecd00();
    /* 004dcb90: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcb95:; BB(0x004dcb95);
    /* 004dcb95: push 0x6bfacc */ { u32 v = 0x6bfaccu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcb9a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcb9fu); f_00630f40();
    /* 004dcb9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcba3: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcba6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcba7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcbadu); call_ind(t); }
    /* 004dcbad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcbb0: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcbb5: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcbbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcbbc: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcbc2u); call_ind(t); }
    /* 004dcbc2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcbc5: mov edx, esp */ r_edx = r_esp;
    /* 004dcbc7: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcbcd: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcbd0: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcbd6: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcbd9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcbdb: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcbdd: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcbe3: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcbe6: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcbebu); f_005ecd00();
    /* 004dcbeb: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcbf0:; BB(0x004dcbf0);
    /* 004dcbf0: push 0x6bfabc */ { u32 v = 0x6bfabcu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcbf5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcbfau); f_00630f40();
    /* 004dcbfa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcbfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcbfe: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcc01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc02: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcc08u); call_ind(t); }
    /* 004dcc08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcc0b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc10: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcc16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc17: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcc1du); call_ind(t); }
    /* 004dcc1d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcc20: mov edx, esp */ r_edx = r_esp;
    /* 004dcc22: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcc28: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcc2b: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcc31: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcc34: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc36: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc38: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcc3e: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcc41: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcc46u); f_005ecd00();
    /* 004dcc46: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcc4b:; BB(0x004dcc4b);
    /* 004dcc4b: push 0x6bfaac */ { u32 v = 0x6bfaacu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc50: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcc55u); f_00630f40();
    /* 004dcc55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcc58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc59: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcc5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc5d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcc63u); call_ind(t); }
    /* 004dcc63: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcc66: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc6b: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcc71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc72: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcc78u); call_ind(t); }
    /* 004dcc78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcc7b: mov edx, esp */ r_edx = r_esp;
    /* 004dcc7d: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcc83: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcc86: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcc8c: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcc8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc91: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcc93: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcc99: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcc9c: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcca1u); f_005ecd00();
    /* 004dcca1: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcca6:; BB(0x004dcca6);
    /* 004dcca6: push 0x6bfa9c */ { u32 v = 0x6bfa9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dccab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dccb0u); f_00630f40();
    /* 004dccb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dccb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dccb4: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dccb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dccb8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dccbeu); call_ind(t); }
    /* 004dccbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dccc1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dccc6: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcccc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcccd: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dccd3u); call_ind(t); }
    /* 004dccd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dccd6: mov edx, esp */ r_edx = r_esp;
    /* 004dccd8: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dccde: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcce1: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcce7: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dccea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dccec: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dccee: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dccf4: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dccf7: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dccfcu); f_005ecd00();
    /* 004dccfc: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcd01:; BB(0x004dcd01);
    /* 004dcd01: push 0x6bfa8c */ { u32 v = 0x6bfa8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd06: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcd0bu); f_00630f40();
    /* 004dcd0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcd0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd0f: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcd12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd13: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcd19u); call_ind(t); }
    /* 004dcd19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcd1c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd21: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcd27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd28: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcd2eu); call_ind(t); }
    /* 004dcd2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcd31: mov edx, esp */ r_edx = r_esp;
    /* 004dcd33: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcd39: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcd3c: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcd42: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcd45: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd47: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd49: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcd4f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcd52: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcd57u); f_005ecd00();
    /* 004dcd57: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcd5c:; BB(0x004dcd5c);
    /* 004dcd5c: push 0x6bfa7c */ { u32 v = 0x6bfa7cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd61: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcd66u); f_00630f40();
    /* 004dcd66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcd69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd6a: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcd6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd6e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcd74u); call_ind(t); }
    /* 004dcd74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcd77: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd7c: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcd82: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcd83: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcd89u); call_ind(t); }
    /* 004dcd89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcd8c: mov edx, esp */ r_edx = r_esp;
    /* 004dcd8e: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcd94: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcd97: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcd9d: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcda0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcda2: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcda4: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcdaa: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcdad: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcdb2u); f_005ecd00();
    /* 004dcdb2: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcdb8: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dcdbdu); f_004da890();
    /* 004dcdbd: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcdc3: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dcdc8u); f_004db610();
    /* 004dcdc8: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcdcd:; BB(0x004dcdcd);
    /* 004dcdcd: push 0x6bfa68 */ { u32 v = 0x6bfa68u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcdd2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcdd7u); f_00630f40();
    /* 004dcdd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcdda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcddb: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcdde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcddf: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcde5u); call_ind(t); }
    /* 004dcde5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcde8: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcded: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcdf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcdf4: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcdfau); call_ind(t); }
    /* 004dcdfa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcdfd: mov edx, esp */ r_edx = r_esp;
    /* 004dcdff: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dce05: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dce08: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dce0e: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dce11: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dce13: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dce15: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dce1b: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dce1e: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dce23u); f_005ecd00();
    /* 004dce23: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dce29: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dce2eu); f_004da890();
    /* 004dce2e: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dce34: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dce39u); f_004db610();
    /* 004dce39: jmp 0x4dd58e */ goto L_004dd58e;
L_004dce3e:; BB(0x004dce3e);
    /* 004dce3e: push 0x6bfa58 */ { u32 v = 0x6bfa58u; r_esp -= 4; W32(r_esp, v); }
    /* 004dce43: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dce48u); f_00630f40();
    /* 004dce48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dce4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dce4c: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dce4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dce50: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dce56u); call_ind(t); }
    /* 004dce56: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dce59: push 0x6bfa44 */ { u32 v = 0x6bfa44u; r_esp -= 4; W32(r_esp, v); }
    /* 004dce5e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dce63u); f_00630f40();
    /* 004dce63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dce66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dce67: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dce6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dce6e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dce74u); call_ind(t); }
    /* 004dce74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dce77: mov edx, esp */ r_edx = r_esp;
    /* 004dce79: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dce7f: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dce82: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dce88: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dce8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dce8d: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dce8f: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dce95: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dce98: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dce9du); f_005ecd00();
    /* 004dce9d: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcea3: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dcea8u); f_004da890();
    /* 004dcea8: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dceae: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dceb3u); f_004db610();
    /* 004dceb3: jmp 0x4dd58e */ goto L_004dd58e;
L_004dceb8:; BB(0x004dceb8);
    /* 004dceb8: push 0x6bfa34 */ { u32 v = 0x6bfa34u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcebd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcec2u); f_00630f40();
    /* 004dcec2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcec6: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dceca: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dced0u); call_ind(t); }
    /* 004dced0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dced3: push 0x6bfa44 */ { u32 v = 0x6bfa44u; r_esp -= 4; W32(r_esp, v); }
    /* 004dced8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dceddu); f_00630f40();
    /* 004dcedd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcee1: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcee7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcee8: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dceeeu); call_ind(t); }
    /* 004dceee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcef1: mov edx, esp */ r_edx = r_esp;
    /* 004dcef3: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcef9: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcefc: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcf02: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcf05: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf07: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf09: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcf0f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcf12: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcf17u); f_005ecd00();
    /* 004dcf17: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcf1d: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dcf22u); f_004da890();
    /* 004dcf22: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcf28: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dcf2du); f_004db610();
    /* 004dcf2d: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcf32:; BB(0x004dcf32);
    /* 004dcf32: push 0x6bfa34 */ { u32 v = 0x6bfa34u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf37: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcf3cu); f_00630f40();
    /* 004dcf3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcf3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf40: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcf43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf44: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcf4au); call_ind(t); }
    /* 004dcf4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcf4d: push 0x6bfa24 */ { u32 v = 0x6bfa24u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf52: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcf57u); f_00630f40();
    /* 004dcf57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcf5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf5b: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcf61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf62: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcf68u); call_ind(t); }
    /* 004dcf68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcf6b: mov edx, esp */ r_edx = r_esp;
    /* 004dcf6d: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcf73: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcf76: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcf7c: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcf7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf81: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcf83: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcf89: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcf8c: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dcf91u); f_005ecd00();
    /* 004dcf91: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcf97: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dcf9cu); f_004da890();
    /* 004dcf9c: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcfa2: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dcfa7u); f_004db610();
    /* 004dcfa7: jmp 0x4dd58e */ goto L_004dd58e;
L_004dcfac:; BB(0x004dcfac);
    /* 004dcfac: push 0x6bcb68 */ { u32 v = 0x6bcb68u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfb1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dcfb6u); f_00630f40();
    /* 004dcfb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcfb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfba: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dcfbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfbe: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcfc4u); call_ind(t); }
    /* 004dcfc4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcfc7: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfcc: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dcfd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dcfd3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dcfd9u); call_ind(t); }
    /* 004dcfd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dcfdc: mov edx, esp */ r_edx = r_esp;
    /* 004dcfde: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dcfe4: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dcfe7: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dcfed: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dcff0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dcff2: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dcff4: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dcffa: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dcffd: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd002u); f_005ecd00();
    /* 004dd002: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd008: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd00du); f_004da890();
    /* 004dd00d: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd013: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd018u); f_004db610();
    /* 004dd018: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd01d:; BB(0x004dd01d);
    /* 004dd01d: push 0x6bcb68 */ { u32 v = 0x6bcb68u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd022: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd027u); f_00630f40();
    /* 004dd027: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd02a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd02b: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd02e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd02f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd035u); call_ind(t); }
    /* 004dd035: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd038: push 0x6bfa24 */ { u32 v = 0x6bfa24u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd03d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd042u); f_00630f40();
    /* 004dd042: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd046: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd04c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd04d: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd053u); call_ind(t); }
    /* 004dd053: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd056: mov edx, esp */ r_edx = r_esp;
    /* 004dd058: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd05e: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd061: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd067: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd06a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd06c: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd06e: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd074: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd077: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd07cu); f_005ecd00();
    /* 004dd07c: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd082: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd087u); f_004da890();
    /* 004dd087: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd08d: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd092u); f_004db610();
    /* 004dd092: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd097:; BB(0x004dd097);
    /* 004dd097: push 0x6bcb3c */ { u32 v = 0x6bcb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd09c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd0a1u); f_00630f40();
    /* 004dd0a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd0a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0a5: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd0a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0a9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd0afu); call_ind(t); }
    /* 004dd0af: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd0b2: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0b7: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd0bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0be: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd0c4u); call_ind(t); }
    /* 004dd0c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd0c7: mov edx, esp */ r_edx = r_esp;
    /* 004dd0c9: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd0cf: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd0d2: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd0d8: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd0db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0dd: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd0df: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd0e5: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd0e8: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd0edu); f_005ecd00();
    /* 004dd0ed: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd0f3: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd0f8u); f_004da890();
    /* 004dd0f8: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd0fe: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd103u); f_004db610();
    /* 004dd103: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd108:; BB(0x004dd108);
    /* 004dd108: push 0x6bcb3c */ { u32 v = 0x6bcb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd10d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd112u); f_00630f40();
    /* 004dd112: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd115: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd116: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd11a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd120u); call_ind(t); }
    /* 004dd120: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd123: push 0x6bfa10 */ { u32 v = 0x6bfa10u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd128: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd12du); f_00630f40();
    /* 004dd12d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd131: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd137: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd138: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd13eu); call_ind(t); }
    /* 004dd13e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd141: mov edx, esp */ r_edx = r_esp;
    /* 004dd143: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd149: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd14c: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd152: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd155: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd157: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd159: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd15f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd162: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd167u); f_005ecd00();
    /* 004dd167: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd16d: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd172u); f_004da890();
    /* 004dd172: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd178: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd17du); f_004db610();
    /* 004dd17d: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd182:; BB(0x004dd182);
    /* 004dd182: push 0x6bcb3c */ { u32 v = 0x6bcb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd187: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd18cu); f_00630f40();
    /* 004dd18c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd18f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd190: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd194: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd19au); call_ind(t); }
    /* 004dd19a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd19d: push 0x6bf9f4 */ { u32 v = 0x6bf9f4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd1a2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd1a7u); f_00630f40();
    /* 004dd1a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd1aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd1ab: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd1b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd1b2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd1b8u); call_ind(t); }
    /* 004dd1b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd1bb: mov edx, esp */ r_edx = r_esp;
    /* 004dd1bd: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd1c3: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd1c6: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd1cc: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd1cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd1d1: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd1d3: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd1d9: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd1dc: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd1e1u); f_005ecd00();
    /* 004dd1e1: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd1e7: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd1ecu); f_004da890();
    /* 004dd1ec: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd1f2: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd1f7u); f_004db610();
    /* 004dd1f7: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd1fc:; BB(0x004dd1fc);
    /* 004dd1fc: push 0x6bcad8 */ { u32 v = 0x6bcad8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd201: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd206u); f_00630f40();
    /* 004dd206: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd209: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd20a: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd20d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd20e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd214u); call_ind(t); }
    /* 004dd214: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd217: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd21c: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd222: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd223: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd229u); call_ind(t); }
    /* 004dd229: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd22c: mov edx, esp */ r_edx = r_esp;
    /* 004dd22e: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd234: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd237: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd23d: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd240: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd242: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd244: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd24a: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd24d: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd252u); f_005ecd00();
    /* 004dd252: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd258: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd25du); f_004da890();
    /* 004dd25d: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd263: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd268u); f_004db610();
    /* 004dd268: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd26d:; BB(0x004dd26d);
    /* 004dd26d: push 0x6bcac4 */ { u32 v = 0x6bcac4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd272: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd277u); f_00630f40();
    /* 004dd277: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd27a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd27b: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd27e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd27f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd285u); call_ind(t); }
    /* 004dd285: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd288: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd28d: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd294: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd29au); call_ind(t); }
    /* 004dd29a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd29d: mov edx, esp */ r_edx = r_esp;
    /* 004dd29f: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd2a5: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd2a8: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd2ae: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd2b1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2b3: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2b5: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd2bb: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd2be: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd2c3u); f_005ecd00();
    /* 004dd2c3: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd2c9: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd2ceu); f_004da890();
    /* 004dd2ce: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd2d4: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd2d9u); f_004db610();
    /* 004dd2d9: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd2de:; BB(0x004dd2de);
    /* 004dd2de: push 0x6bf9e4 */ { u32 v = 0x6bf9e4u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2e3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd2e8u); f_00630f40();
    /* 004dd2e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd2eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2ec: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd2ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2f0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd2f6u); call_ind(t); }
    /* 004dd2f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd2f9: push 0x6bf9d0 */ { u32 v = 0x6bf9d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd2fe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd303u); f_00630f40();
    /* 004dd303: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd306: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd307: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd30d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd30e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd314u); call_ind(t); }
    /* 004dd314: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd317: mov edx, esp */ r_edx = r_esp;
    /* 004dd319: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd31f: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd322: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd328: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd32b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd32d: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd32f: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd335: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd338: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd33du); f_005ecd00();
    /* 004dd33d: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd343: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd348u); f_004da890();
    /* 004dd348: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd34e: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd353u); f_004db610();
    /* 004dd353: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd358:; BB(0x004dd358);
    /* 004dd358: push 0x6bca98 */ { u32 v = 0x6bca98u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd35d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd362u); f_00630f40();
    /* 004dd362: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd365: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd366: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd36a: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd370u); call_ind(t); }
    /* 004dd370: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd373: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd378: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd37e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd37f: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd385u); call_ind(t); }
    /* 004dd385: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd388: mov edx, esp */ r_edx = r_esp;
    /* 004dd38a: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd390: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd393: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd399: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd39c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd39e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3a0: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd3a6: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd3a9: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd3aeu); f_005ecd00();
    /* 004dd3ae: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd3b4: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd3b9u); f_004da890();
    /* 004dd3b9: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd3bf: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd3c4u); f_004db610();
    /* 004dd3c4: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd3c9:; BB(0x004dd3c9);
    /* 004dd3c9: push 0x6bca84 */ { u32 v = 0x6bca84u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3ce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd3d3u); f_00630f40();
    /* 004dd3d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd3d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3d7: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd3da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3db: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd3e1u); call_ind(t); }
    /* 004dd3e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd3e4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3e9: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd3ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd3f0: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd3f6u); call_ind(t); }
    /* 004dd3f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd3f9: mov edx, esp */ r_edx = r_esp;
    /* 004dd3fb: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd401: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd404: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd40a: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd40d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd40f: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd411: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd417: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd41a: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd41fu); f_005ecd00();
    /* 004dd41f: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd425: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd42au); f_004da890();
    /* 004dd42a: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd430: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd435u); f_004db610();
    /* 004dd435: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd43a:; BB(0x004dd43a);
    /* 004dd43a: push 0x6bca6c */ { u32 v = 0x6bca6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd43f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd444u); f_00630f40();
    /* 004dd444: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd447: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd448: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd44b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd44c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd452u); call_ind(t); }
    /* 004dd452: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd455: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd45a: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd460: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd461: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd467u); call_ind(t); }
    /* 004dd467: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd46a: mov edx, esp */ r_edx = r_esp;
    /* 004dd46c: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd472: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd475: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd47b: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd47e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd480: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd482: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd488: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd48b: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd490u); f_005ecd00();
    /* 004dd490: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd496: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd49bu); f_004da890();
    /* 004dd49b: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd4a1: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd4a6u); f_004db610();
    /* 004dd4a6: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd4ab:; BB(0x004dd4ab);
    /* 004dd4ab: push 0x6bca54 */ { u32 v = 0x6bca54u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4b0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd4b5u); f_00630f40();
    /* 004dd4b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd4b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4b9: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd4bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4bd: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd4c3u); call_ind(t); }
    /* 004dd4c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd4c6: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4cb: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd4d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4d2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd4d8u); call_ind(t); }
    /* 004dd4d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd4db: mov edx, esp */ r_edx = r_esp;
    /* 004dd4dd: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd4e3: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd4e6: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd4ec: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd4ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4f1: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd4f3: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd4f9: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd4fc: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd501u); f_005ecd00();
    /* 004dd501: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd507: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd50cu); f_004da890();
    /* 004dd50c: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd512: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd517u); f_004db610();
    /* 004dd517: jmp 0x4dd58e */ goto L_004dd58e;
L_004dd519:; BB(0x004dd519);
    /* 004dd519: push 0x6bf9bc */ { u32 v = 0x6bf9bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd51e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd523u); f_00630f40();
    /* 004dd523: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd527: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd52a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd52b: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd531u); call_ind(t); }
    /* 004dd531: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd534: push 0x6bf9ac */ { u32 v = 0x6bf9acu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd539: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4dd53eu); f_00630f40();
    /* 004dd53e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd542: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd548: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd549: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4dd54fu); call_ind(t); }
    /* 004dd54f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dd552: mov edx, esp */ r_edx = r_esp;
    /* 004dd554: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 004dd55a: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 004dd55d: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 004dd563: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 004dd566: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dd568: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004dd56a: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd570: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004dd573: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4dd578u); f_005ecd00();
    /* 004dd578: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd57e: call 0x4da890 */ r_esp -= 4; W32(r_esp, 0x4dd583u); f_004da890();
    /* 004dd583: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd589: call 0x4db610 */ r_esp -= 4; W32(r_esp, 0x4dd58eu); f_004db610();
L_004dd58e:; BB(0x004dd58e);
    /* 004dd58e: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 004dd591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dd592: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd598: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004dd59b: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd5a1: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004dd5a4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dd5a6: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004dd5ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dd5aeu); call_ind(t); }
    /* 004dd5ae: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd5b4: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004dd5b7: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd5bd: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004dd5c0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dd5c2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004dd5c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dd5c7u); call_ind(t); }
    /* 004dd5c7: lea ecx, [ebp - 0xd8] */ r_ecx = (u32)(r_ebp+0xffffff28u);
    /* 004dd5cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dd5ce: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd5d4: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 004dd5d7: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd5dd: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 004dd5e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004dd5e2: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004dd5e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dd5eau); call_ind(t); }
    /* 004dd5ea: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd5f0: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004dd5f3: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 004dd5f9: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 004dd5fc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004dd5fe: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 004dd601: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4dd603u); call_ind(t); }
    /* 004dd603: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004dd606: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004dd608: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4dd60du); f_00686d72();
    /* 004dd60d: mov esp, ebp */ r_esp = r_ebp;
    /* 004dd60f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dd610: ret 8 */ FN_RET(0x004dc4d0); r_esp += 12; return;
}

