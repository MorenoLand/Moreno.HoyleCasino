#include "protos.h"

void f_005660b0(void) /* sub_5660B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005660b0);
    /* 005660b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005660b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005660b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005660b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005660b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005660bc: call 0x566380 */ r_esp -= 4; W32(r_esp, 0x5660c1u); f_00566380();
    /* 005660c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005660c4: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005660c8: jg 0x5660e2 */ if ((!fZ&&fS==fO)) goto L_005660e2;
L_005660ca:; BB(0x005660ca);
    /* 005660ca: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005660ce: jl 0x5660e2 */ if ((fS!=fO)) goto L_005660e2;
L_005660d0:; BB(0x005660d0);
    /* 005660d0: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005660d4: jg 0x5660e2 */ if ((!fZ&&fS==fO)) goto L_005660e2;
L_005660d6:; BB(0x005660d6);
    /* 005660d6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005660d9: mov eax, dword ptr [eax*4 + 0x743d8c] */ r_eax = R32((u32)(r_eax*4+0x743d8cu));
    /* 005660e0: jmp 0x5660fc */ goto L_005660fc;
L_005660e2:; BB(0x005660e2);
    /* 005660e2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005660e6: jl 0x5660fa */ if ((fS!=fO)) goto L_005660fa;
L_005660e8:; BB(0x005660e8);
    /* 005660e8: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005660ec: jg 0x5660fa */ if ((!fZ&&fS==fO)) goto L_005660fa;
L_005660ee:; BB(0x005660ee);
    /* 005660ee: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005660f1: mov eax, dword ptr [ecx*4 + 0x743da4] */ r_eax = R32((u32)(r_ecx*4+0x743da4u));
    /* 005660f8: jmp 0x5660fc */ goto L_005660fc;
L_005660fa:; BB(0x005660fa);
    /* 005660fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005660fc:; BB(0x005660fc);
    /* 005660fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005660fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005660ff: ret 4 */ FN_RET(0x005660b0); r_esp += 8; return;
}

void f_00566110(void) /* sub_566110 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566110);
    /* 00566110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566111: mov ebp, esp */ r_ebp = r_esp;
    /* 00566113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566116: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00566119: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056611c: call 0x566380 */ r_esp -= 4; W32(r_esp, 0x566121u); f_00566380();
    /* 00566121: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00566124: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566128: jg 0x566149 */ if ((!fZ&&fS==fO)) goto L_00566149;
L_0056612a:; BB(0x0056612a);
    /* 0056612a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056612e: jl 0x566147 */ if ((fS!=fO)) goto L_00566147;
L_00566130:; BB(0x00566130);
    /* 00566130: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566134: jg 0x566147 */ if ((!fZ&&fS==fO)) goto L_00566147;
L_00566136:; BB(0x00566136);
    /* 00566136: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566139: mov eax, dword ptr [eax*4 + 0x743dd4] */ r_eax = R32((u32)(r_eax*4+0x743dd4u));
    /* 00566140: add eax, 0x9f */ {  u32 a = r_eax; u32 b = 0x9fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00566145: jmp 0x566168 */ goto L_00566168;
L_00566147:; BB(0x00566147);
    /* 00566147: jmp 0x566166 */ goto L_00566166;
L_00566149:; BB(0x00566149);
    /* 00566149: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056614d: jl 0x566166 */ if ((fS!=fO)) goto L_00566166;
L_0056614f:; BB(0x0056614f);
    /* 0056614f: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566153: jg 0x566166 */ if ((!fZ&&fS==fO)) goto L_00566166;
L_00566155:; BB(0x00566155);
    /* 00566155: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00566158: mov eax, dword ptr [ecx*4 + 0x743dbc] */ r_eax = R32((u32)(r_ecx*4+0x743dbcu));
    /* 0056615f: add eax, 0x9f */ {  u32 a = r_eax; u32 b = 0x9fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00566164: jmp 0x566168 */ goto L_00566168;
L_00566166:; BB(0x00566166);
    /* 00566166: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00566168:; BB(0x00566168);
    /* 00566168: mov esp, ebp */ r_esp = r_ebp;
    /* 0056616a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056616b: ret 4 */ FN_RET(0x00566110); r_esp += 8; return;
}

void f_00566170(void) /* sub_566170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566170);
    /* 00566170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566171: mov ebp, esp */ r_ebp = r_esp;
    /* 00566173: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566176: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566179: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056617c: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0056617f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00566182: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00566186: ja 0x5661d8 */ if ((!fC&&!fZ)) goto L_005661d8;
L_00566188:; BB(0x00566188);
    /* 00566188: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056618b: jmp dword ptr [edx*4 + 0x5661f0] */ { u32 t = R32((u32)(r_edx*4+0x5661f0u)); switch (t) { case 0x566192u: goto L_00566192; case 0x5661a0u: goto L_005661a0; case 0x5661aeu: goto L_005661ae; case 0x5661bcu: goto L_005661bc; case 0x5661cau: goto L_005661ca; default: UNSUP(0x0056618b, "jump table entry is not a known target"); } }
L_00566192:; BB(0x00566192);
    /* 00566192: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566195: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566196: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566199: call 0x565d90 */ r_esp -= 4; W32(r_esp, 0x56619eu); f_00565d90();
    /* 0056619e: jmp 0x5661e8 */ goto L_005661e8;
L_005661a0:; BB(0x005661a0);
    /* 005661a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005661a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005661a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005661a7: call 0x565e80 */ r_esp -= 4; W32(r_esp, 0x5661acu); f_00565e80();
    /* 005661ac: jmp 0x5661e8 */ goto L_005661e8;
L_005661ae:; BB(0x005661ae);
    /* 005661ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005661b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005661b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005661b5: call 0x565ec0 */ r_esp -= 4; W32(r_esp, 0x5661bau); f_00565ec0();
    /* 005661ba: jmp 0x5661e8 */ goto L_005661e8;
L_005661bc:; BB(0x005661bc);
    /* 005661bc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005661bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005661c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005661c3: call 0x5660b0 */ r_esp -= 4; W32(r_esp, 0x5661c8u); f_005660b0();
    /* 005661c8: jmp 0x5661e8 */ goto L_005661e8;
L_005661ca:; BB(0x005661ca);
    /* 005661ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005661cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005661ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005661d1: call 0x566110 */ r_esp -= 4; W32(r_esp, 0x5661d6u); f_00566110();
    /* 005661d6: jmp 0x5661e8 */ goto L_005661e8;
L_005661d8:; BB(0x005661d8);
    /* 005661d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005661db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005661dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005661df: call 0x565e30 */ r_esp -= 4; W32(r_esp, 0x5661e4u); f_00565e30();
    /* 005661e4: jmp 0x5661e8 */ goto L_005661e8;
L_005661e8:; BB(0x005661e8);
    /* 005661e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005661ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005661eb: ret 4 */ FN_RET(0x00566170); r_esp += 8; return;
}

void f_00566210(void) /* sub_566210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566210);
    /* 00566210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566211: mov ebp, esp */ r_ebp = r_esp;
    /* 00566213: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566216: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00566219: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056621c: call 0x566380 */ r_esp -= 4; W32(r_esp, 0x566221u); f_00566380();
    /* 00566221: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00566224: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056622b: jmp 0x566236 */ goto L_00566236;
L_0056622d:; BB(0x0056622d);
    /* 0056622d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566230: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00566233: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00566236:; BB(0x00566236);
    /* 00566236: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056623a: jge 0x566280 */ if ((fS==fO)) goto L_00566280;
L_0056623c:; BB(0x0056623c);
    /* 0056623c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056623f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00566242: movzx edx, byte ptr [ecx + 0x38] */ r_edx = (u32)R8((u32)(r_ecx+0x38u));
    /* 00566246: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566248: je 0x566265 */ if (fZ) goto L_00566265;
L_0056624a:; BB(0x0056624a);
    /* 0056624a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056624d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00566250: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 00566253: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566256: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00566259: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0056625c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056625e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00566261: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566263u); call_ind(t); }
    /* 00566263: jmp 0x56627e */ goto L_0056627e;
L_00566265:; BB(0x00566265);
    /* 00566265: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566268: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056626b: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0056626e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566271: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00566274: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00566277: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00566279: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0056627c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56627eu); call_ind(t); }
L_0056627e:; BB(0x0056627e);
    /* 0056627e: jmp 0x56622d */ goto L_0056622d;
L_00566280:; BB(0x00566280);
    /* 00566280: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566284: jg 0x5662b0 */ if ((!fZ&&fS==fO)) goto L_005662b0;
L_00566286:; BB(0x00566286);
    /* 00566286: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00566289: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0056628c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056628f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00566292: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00566294: mov ecx, eax */ r_ecx = r_eax;
    /* 00566296: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00566299: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56629bu); call_ind(t); }
    /* 0056629b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056629e: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005662a1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005662a4: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005662a7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005662a9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005662ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5662aeu); call_ind(t); }
    /* 005662ae: jmp 0x566304 */ goto L_00566304;
L_005662b0:; BB(0x005662b0);
    /* 005662b0: cmp dword ptr [ebp - 8], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005662b4: jg 0x5662de */ if ((!fZ&&fS==fO)) goto L_005662de;
L_005662b6:; BB(0x005662b6);
    /* 005662b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005662b9: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005662bc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005662bf: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005662c2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005662c4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005662c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5662c9u); call_ind(t); }
    /* 005662c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005662cc: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005662cf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005662d2: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005662d5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005662d7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005662da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5662dcu); call_ind(t); }
    /* 005662dc: jmp 0x566304 */ goto L_00566304;
L_005662de:; BB(0x005662de);
    /* 005662de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005662e1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005662e4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005662e7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005662ea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005662ec: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005662ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5662f1u); call_ind(t); }
    /* 005662f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005662f4: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005662f7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005662fa: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005662fd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005662ff: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00566302: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566304u); call_ind(t); }
L_00566304:; BB(0x00566304);
    /* 00566304: mov esp, ebp */ r_esp = r_ebp;
    /* 00566306: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566307: ret  */ FN_RET(0x00566210); r_esp += 4; return;
}

void f_00566310(void) /* sub_566310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566310);
    /* 00566310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566311: mov ebp, esp */ r_ebp = r_esp;
    /* 00566313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566316: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00566319: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00566320: jmp 0x56632b */ goto L_0056632b;
L_00566322:; BB(0x00566322);
    /* 00566322: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566325: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00566328: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056632b:; BB(0x0056632b);
    /* 0056632b: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056632f: jge 0x56634c */ if ((fS==fO)) goto L_0056634c;
L_00566331:; BB(0x00566331);
    /* 00566331: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566334: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566337: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0056633a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056633d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566340: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 00566343: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00566345: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00566348: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x56634au); call_ind(t); }
    /* 0056634a: jmp 0x566322 */ goto L_00566322;
L_0056634c:; BB(0x0056634c);
    /* 0056634c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056634f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00566352: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566355: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00566358: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056635a: mov ecx, eax */ r_ecx = r_eax;
    /* 0056635c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0056635f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566361u); call_ind(t); }
    /* 00566361: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566364: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00566367: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056636a: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0056636d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056636f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00566372: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566374u); call_ind(t); }
    /* 00566374: mov esp, ebp */ r_esp = r_ebp;
    /* 00566376: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566377: ret  */ FN_RET(0x00566310); r_esp += 4; return;
}

void f_00566380(void) /* sub_566380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566380);
    /* 00566380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566381: mov ebp, esp */ r_ebp = r_esp;
    /* 00566383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566387: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056638a: cmp dword ptr [eax + 0x2c], 9 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056638e: jg 0x566397 */ if ((!fZ&&fS==fO)) goto L_00566397;
L_00566390:; BB(0x00566390);
    /* 00566390: mov eax, 1 */ r_eax = 0x1u;
    /* 00566395: jmp 0x56640b */ goto L_0056640b;
L_00566397:; BB(0x00566397);
    /* 00566397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056639a: cmp dword ptr [ecx + 0x2c], 0x63 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056639e: jg 0x5663a7 */ if ((!fZ&&fS==fO)) goto L_005663a7;
L_005663a0:; BB(0x005663a0);
    /* 005663a0: mov eax, 2 */ r_eax = 0x2u;
    /* 005663a5: jmp 0x56640b */ goto L_0056640b;
L_005663a7:; BB(0x005663a7);
    /* 005663a7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005663aa: cmp dword ptr [edx + 0x2c], 0x3e7 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005663b1: jg 0x5663ba */ if ((!fZ&&fS==fO)) goto L_005663ba;
L_005663b3:; BB(0x005663b3);
    /* 005663b3: mov eax, 3 */ r_eax = 0x3u;
    /* 005663b8: jmp 0x56640b */ goto L_0056640b;
L_005663ba:; BB(0x005663ba);
    /* 005663ba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005663bd: cmp dword ptr [eax + 0x2c], 0x270f */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x270fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005663c4: jg 0x5663cd */ if ((!fZ&&fS==fO)) goto L_005663cd;
L_005663c6:; BB(0x005663c6);
    /* 005663c6: mov eax, 4 */ r_eax = 0x4u;
    /* 005663cb: jmp 0x56640b */ goto L_0056640b;
L_005663cd:; BB(0x005663cd);
    /* 005663cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005663d0: cmp dword ptr [ecx + 0x2c], 0x1869f */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x1869fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005663d7: jg 0x5663e0 */ if ((!fZ&&fS==fO)) goto L_005663e0;
L_005663d9:; BB(0x005663d9);
    /* 005663d9: mov eax, 5 */ r_eax = 0x5u;
    /* 005663de: jmp 0x56640b */ goto L_0056640b;
L_005663e0:; BB(0x005663e0);
    /* 005663e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005663e3: cmp dword ptr [edx + 0x2c], 0xf423f */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005663ea: jg 0x5663f3 */ if ((!fZ&&fS==fO)) goto L_005663f3;
L_005663ec:; BB(0x005663ec);
    /* 005663ec: mov eax, 6 */ r_eax = 0x6u;
    /* 005663f1: jmp 0x56640b */ goto L_0056640b;
L_005663f3:; BB(0x005663f3);
    /* 005663f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005663f6: cmp dword ptr [eax + 0x2c], 0x98967f */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x98967fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005663fd: jg 0x566406 */ if ((!fZ&&fS==fO)) goto L_00566406;
L_005663ff:; BB(0x005663ff);
    /* 005663ff: mov eax, 7 */ r_eax = 0x7u;
    /* 00566404: jmp 0x56640b */ goto L_0056640b;
L_00566406:; BB(0x00566406);
    /* 00566406: mov eax, 8 */ r_eax = 0x8u;
L_0056640b:; BB(0x0056640b);
    /* 0056640b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056640d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056640e: ret  */ FN_RET(0x00566380); r_esp += 4; return;
}

void f_00566410(void) /* sub_566410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566410);
    /* 00566410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566411: mov ebp, esp */ r_ebp = r_esp;
    /* 00566413: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566416: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00566419: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00566420: jmp 0x56642b */ goto L_0056642b;
L_00566422:; BB(0x00566422);
    /* 00566422: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566425: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00566428: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0056642b:; BB(0x0056642b);
    /* 0056642b: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056642f: jge 0x56643d */ if ((fS==fO)) goto L_0056643d;
L_00566431:; BB(0x00566431);
    /* 00566431: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566434: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00566437: mov byte ptr [ecx + 0x38], 0 */ W8((u32)(r_ecx+0x38u), 0x0u);
    /* 0056643b: jmp 0x566422 */ goto L_00566422;
L_0056643d:; BB(0x0056643d);
    /* 0056643d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00566444: jmp 0x56644f */ goto L_0056644f;
L_00566446:; BB(0x00566446);
    /* 00566446: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566449: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056644c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0056644f:; BB(0x0056644f);
    /* 0056644f: cmp dword ptr [ebp - 4], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566453: jge 0x5664ba */ if ((fS==fO)) goto L_005664ba;
L_00566455:; BB(0x00566455);
    /* 00566455: push 0x31226c */ { u32 v = 0x31226cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056645a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056645d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566460: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 00566463: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x566468u); f_005eaf00();
    /* 00566468: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056646a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056646d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566470: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00566473: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566476: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566479: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0056647c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056647e: mov ecx, edx */ r_ecx = r_edx;
    /* 00566480: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00566486: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x566488u); call_ind(t); }
    /* 00566488: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056648b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056648c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056648f: call 0x566170 */ r_esp -= 4; W32(r_esp, 0x566494u); f_00566170();
    /* 00566494: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566495: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566498: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056649b: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 0056649e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005664a1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005664a4: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 005664a7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005664a9: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 005664ac: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5664aeu); call_ind(t); }
    /* 005664ae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005664b1: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005664b4: mov byte ptr [eax + 0x38], 1 */ W8((u32)(r_eax+0x38u), 0x1u);
    /* 005664b8: jmp 0x566446 */ goto L_00566446;
L_005664ba:; BB(0x005664ba);
    /* 005664ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005664bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005664bd: ret  */ FN_RET(0x00566410); r_esp += 4; return;
}

void f_005664c0(void) /* sub_5664C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005664c0);
    /* 005664c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005664c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005664c3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005664c6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005664c9: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 005664d0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005664d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005664d6: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 005664d9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005664dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005664dd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005664e0: call 0x5659c0 */ r_esp -= 4; W32(r_esp, 0x5664e5u); f_005659c0();
    /* 005664e5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005664e8: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 005664eb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005664f2: jmp 0x5664fd */ goto L_005664fd;
L_005664f4:; BB(0x005664f4);
    /* 005664f4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005664f7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005664fa: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005664fd:; BB(0x005664fd);
    /* 005664fd: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566501: jge 0x56650f */ if ((fS==fO)) goto L_0056650f;
L_00566503:; BB(0x00566503);
    /* 00566503: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00566506: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00566509: mov byte ptr [eax + 0x38], 0 */ W8((u32)(r_eax+0x38u), 0x0u);
    /* 0056650d: jmp 0x5664f4 */ goto L_005664f4;
L_0056650f:; BB(0x0056650f);
    /* 0056650f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00566512: cmp dword ptr [ecx + 0x2c], 0 */ {  u32 a = R32((u32)(r_ecx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566516: jne 0x56653a */ if (!fZ) goto L_0056653a;
L_00566518:; BB(0x00566518);
    /* 00566518: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056651a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056651d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056651f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00566522: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00566524: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00566526: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0056652c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56652eu); call_ind(t); }
    /* 0056652e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00566531: mov byte ptr [ecx + 0x38], 1 */ W8((u32)(r_ecx+0x38u), 0x1u);
    /* 00566535: jmp 0x56667e */ goto L_0056667e;
L_0056653a:; BB(0x0056653a);
    /* 0056653a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056653d: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00566540: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00566543: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0056654a: jmp 0x566555 */ goto L_00566555;
L_0056654c:; BB(0x0056654c);
    /* 0056654c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056654f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00566552: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00566555:; BB(0x00566555);
    /* 00566555: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566559: jge 0x566599 */ if ((fS==fO)) goto L_00566599;
L_0056655b:; BB(0x0056655b);
    /* 0056655b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056655e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566561: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00566562: idiv dword ptr [ecx*4 + 0x744888] */ { i32 d = (i32)R32((u32)(r_ecx*4+0x744888u)); if (!d) UNSUP(0x00566562, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00566562, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00566569: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056656c: mov dword ptr [ebp + edx*4 - 0x28], eax */ W32((u32)(r_ebp+r_edx*4+0xffffffd8u), r_eax);
    /* 00566570: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566573: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566576: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00566577: idiv dword ptr [ecx*4 + 0x744888] */ { i32 d = (i32)R32((u32)(r_ecx*4+0x744888u)); if (!d) UNSUP(0x00566577, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00566577, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0056657e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00566581: cmp dword ptr [ebp - 0x2c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566585: jne 0x566597 */ if (!fZ) goto L_00566597;
L_00566587:; BB(0x00566587);
    /* 00566587: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056658a: cmp dword ptr [ebp + edx*4 - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+r_edx*4+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056658f: je 0x566597 */ if (fZ) goto L_00566597;
L_00566591:; BB(0x00566591);
    /* 00566591: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566594: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00566597:; BB(0x00566597);
    /* 00566597: jmp 0x56654c */ goto L_0056654c;
L_00566599:; BB(0x00566599);
    /* 00566599: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056659c: call 0x565c70 */ r_esp -= 4; W32(r_esp, 0x5665a1u); f_00565c70();
    /* 005665a1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005665a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005665a6: je 0x56661e */ if (fZ) goto L_0056661e;
L_005665a8:; BB(0x005665a8);
    /* 005665a8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005665af: jmp 0x5665ba */ goto L_005665ba;
L_005665b1:; BB(0x005665b1);
    /* 005665b1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005665b4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005665b7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005665ba:; BB(0x005665ba);
    /* 005665ba: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005665be: jge 0x56661c */ if ((fS==fO)) goto L_0056661c;
L_005665c0:; BB(0x005665c0);
    /* 005665c0: mov eax, 7 */ r_eax = 0x7u;
    /* 005665c5: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005665c8: mov ecx, dword ptr [ebp + eax*4 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd8u));
    /* 005665cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005665cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005665d0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005665d3: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 005665d6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005665d9: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005665dc: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005665df: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005665e1: mov ecx, edx */ r_ecx = r_edx;
    /* 005665e3: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005665e9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5665ebu); call_ind(t); }
    /* 005665eb: cmp dword ptr [ebp - 0x2c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005665ef: je 0x566607 */ if (fZ) goto L_00566607;
L_005665f1:; BB(0x005665f1);
    /* 005665f1: mov eax, 7 */ r_eax = 0x7u;
    /* 005665f6: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005665f9: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005665fc: jl 0x566607 */ if ((fS!=fO)) goto L_00566607;
L_005665fe:; BB(0x005665fe);
    /* 005665fe: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00566605: jmp 0x56660e */ goto L_0056660e;
L_00566607:; BB(0x00566607);
    /* 00566607: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0056660e:; BB(0x0056660e);
    /* 0056660e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00566611: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00566614: mov dl, byte ptr [ebp - 0x34] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffccu))) & 0xffu);
    /* 00566617: mov byte ptr [ecx + 0x38], dl */ W8((u32)(r_ecx+0x38u), (u8)r_edx);
    /* 0056661a: jmp 0x5665b1 */ goto L_005665b1;
L_0056661c:; BB(0x0056661c);
    /* 0056661c: jmp 0x56667e */ goto L_0056667e;
L_0056661e:; BB(0x0056661e);
    /* 0056661e: mov eax, 8 */ r_eax = 0x8u;
    /* 00566623: sub eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00566626: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00566629: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00566630: jmp 0x56663b */ goto L_0056663b;
L_00566632:; BB(0x00566632);
    /* 00566632: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566635: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00566638: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0056663b:; BB(0x0056663b);
    /* 0056663b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056663e: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566641: jge 0x56667e */ if ((fS==fO)) goto L_0056667e;
L_00566643:; BB(0x00566643);
    /* 00566643: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00566646: mov ecx, dword ptr [ebp + eax*4 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffd8u));
    /* 0056664a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056664b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056664e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00566651: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00566654: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566657: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056665a: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0056665d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056665f: mov ecx, edx */ r_ecx = r_edx;
    /* 00566661: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00566667: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x566669u); call_ind(t); }
    /* 00566669: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056666c: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056666f: mov byte ptr [eax + 0x38], 1 */ W8((u32)(r_eax+0x38u), 0x1u);
    /* 00566673: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00566676: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00566679: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0056667c: jmp 0x566632 */ goto L_00566632;
L_0056667e:; BB(0x0056667e);
    /* 0056667e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00566685: jmp 0x566690 */ goto L_00566690;
L_00566687:; BB(0x00566687);
    /* 00566687: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056668a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056668d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00566690:; BB(0x00566690);
    /* 00566690: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566694: jge 0x5666cc */ if ((fS==fO)) goto L_005666cc;
L_00566696:; BB(0x00566696);
    /* 00566696: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00566699: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056669c: movzx ecx, byte ptr [eax + 0x38] */ r_ecx = (u32)R8((u32)(r_eax+0x38u));
    /* 005666a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005666a2: je 0x5666ca */ if (fZ) goto L_005666ca;
L_005666a4:; BB(0x005666a4);
    /* 005666a4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005666a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005666a8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005666ab: call 0x566170 */ r_esp -= 4; W32(r_esp, 0x5666b0u); f_00566170();
    /* 005666b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005666b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005666b4: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005666b7: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 005666ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005666bd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005666c0: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 005666c3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005666c5: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005666c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5666cau); call_ind(t); }
L_005666ca:; BB(0x005666ca);
    /* 005666ca: jmp 0x566687 */ goto L_00566687;
L_005666cc:; BB(0x005666cc);
    /* 005666cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005666ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005666cf: ret 4 */ FN_RET(0x005664c0); r_esp += 8; return;
}

void f_005666e0(void) /* sub_5666E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005666e0);
    /* 005666e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005666e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005666e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005666e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005666e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005666ea: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005666f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005666f4: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005666fb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005666fe: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 00566705: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566708: mov byte ptr [eax], 1 */ W8((u32)(r_eax), 0x1u);
    /* 0056670b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056670e: mov esp, ebp */ r_esp = r_ebp;
    /* 00566710: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566711: ret  */ FN_RET(0x005666e0); r_esp += 4; return;
}

void f_00566720(void) /* sub_566720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566720);
    /* 00566720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566721: mov ebp, esp */ r_ebp = r_esp;
    /* 00566723: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566726: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00566729: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056672c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056672f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00566732: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00566735: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00566738: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056673c: je 0x566751 */ if (fZ) goto L_00566751;
L_0056673e:; BB(0x0056673e);
    /* 0056673e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00566740: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566743: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00566745: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566748: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0056674a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56674cu); call_ind(t); }
    /* 0056674c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0056674f: jmp 0x566758 */ goto L_00566758;
L_00566751:; BB(0x00566751);
    /* 00566751: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00566758:; BB(0x00566758);
    /* 00566758: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056675b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0056675e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00566761: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00566764: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00566767: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056676b: je 0x566780 */ if (fZ) goto L_00566780;
L_0056676d:; BB(0x0056676d);
    /* 0056676d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056676f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00566772: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00566774: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00566777: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00566779: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56677bu); call_ind(t); }
    /* 0056677b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0056677e: jmp 0x566787 */ goto L_00566787;
L_00566780:; BB(0x00566780);
    /* 00566780: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00566787:; BB(0x00566787);
    /* 00566787: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056678a: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0056678d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00566790: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00566793: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00566796: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056679a: je 0x5667c2 */ if (fZ) goto L_005667c2;
L_0056679c:; BB(0x0056679c);
    /* 0056679c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056679f: call 0x565630 */ r_esp -= 4; W32(r_esp, 0x5667a4u); f_00565630();
    /* 005667a4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005667a9: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005667ac: je 0x5667ba */ if (fZ) goto L_005667ba;
L_005667ae:; BB(0x005667ae);
    /* 005667ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005667b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005667b2: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5667b7u); f_00686cae();
    /* 005667b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005667ba:; BB(0x005667ba);
    /* 005667ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005667bd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005667c0: jmp 0x5667c9 */ goto L_005667c9;
L_005667c2:; BB(0x005667c2);
    /* 005667c2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005667c9:; BB(0x005667c9);
    /* 005667c9: mov esp, ebp */ r_esp = r_ebp;
    /* 005667cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005667cc: ret  */ FN_RET(0x00566720); r_esp += 4; return;
}

void f_005667d0(void) /* sub_5667D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005667d0);
    /* 005667d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005667d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005667d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005667d5: push 0x6a5b6e */ { u32 v = 0x6a5b6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005667da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005667e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005667e1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005667e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005667e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005667eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005667ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005667ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005667f5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005667f8: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005667fd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x566802u); f_00686d82();
    /* 00566802: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566805: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00566808: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056680f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566813: je 0x566822 */ if (fZ) goto L_00566822;
L_00566815:; BB(0x00566815);
    /* 00566815: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00566818: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x56681du); f_005eaaf0();
    /* 0056681d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00566820: jmp 0x566829 */ goto L_00566829;
L_00566822:; BB(0x00566822);
    /* 00566822: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00566829:; BB(0x00566829);
    /* 00566829: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0056682c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0056682f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00566836: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00566839: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0056683c: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0056683f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00566841: push 0x70a */ { u32 v = 0x70au; r_esp -= 4; W32(r_esp, v); }
    /* 00566846: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00566848: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056684a: push 0x31225b */ { u32 v = 0x31225bu; r_esp -= 4; W32(r_esp, v); }
    /* 0056684f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00566852: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00566855: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x56685au); f_005eae80();
    /* 0056685a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056685c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056685f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00566862: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00566865: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00566868: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0056686a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00566870: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566872u); call_ind(t); }
    /* 00566872: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 00566877: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x56687cu); f_00686d82();
    /* 0056687c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056687f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00566882: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00566889: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056688d: je 0x56689c */ if (fZ) goto L_0056689c;
L_0056688f:; BB(0x0056688f);
    /* 0056688f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00566892: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x566897u); f_005eaaf0();
    /* 00566897: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056689a: jmp 0x5668a3 */ goto L_005668a3;
L_0056689c:; BB(0x0056689c);
    /* 0056689c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005668a3:; BB(0x005668a3);
    /* 005668a3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005668a6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005668a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005668b0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005668b3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005668b6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005668b9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005668bb: push 0x70b */ { u32 v = 0x70bu; r_esp -= 4; W32(r_esp, v); }
    /* 005668c0: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 005668c5: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 005668ca: push 0x31225c */ { u32 v = 0x31225cu; r_esp -= 4; W32(r_esp, v); }
    /* 005668cf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005668d2: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005668d5: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5668dau); f_005eae80();
    /* 005668da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005668dc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005668df: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005668e2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005668e5: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005668e8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005668ea: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005668f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5668f2u); call_ind(t); }
    /* 005668f2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005668f4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5668f9u); f_00686d82();
    /* 005668f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005668fc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005668ff: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00566906: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056690a: je 0x566919 */ if (fZ) goto L_00566919;
L_0056690c:; BB(0x0056690c);
    /* 0056690c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056690f: call 0x5655d0 */ r_esp -= 4; W32(r_esp, 0x566914u); f_005655d0();
    /* 00566914: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00566917: jmp 0x566920 */ goto L_00566920;
L_00566919:; BB(0x00566919);
    /* 00566919: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00566920:; BB(0x00566920);
    /* 00566920: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00566923: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00566926: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056692d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00566930: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00566933: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00566936: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00566939: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0056693c: call 0x5656f0 */ r_esp -= 4; W32(r_esp, 0x566941u); f_005656f0();
    /* 00566941: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00566943: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00566946: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00566949: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x56694eu); f_00565a50();
    /* 0056694e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00566950: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00566953: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00566956: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x56695bu); f_005664c0();
    /* 0056695b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056695e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00566965: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00566966: mov esp, ebp */ r_esp = r_ebp;
    /* 00566968: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566969: ret  */ FN_RET(0x005667d0); r_esp += 4; return;
}

void f_00566970(void) /* sub_566970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566970);
    /* 00566970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566971: mov ebp, esp */ r_ebp = r_esp;
    /* 00566973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566977: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056697a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056697b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056697e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00566981: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566984: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00566987: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00566989: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0056698c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56698eu); call_ind(t); }
    /* 0056698e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00566991: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00566994: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566995: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566998: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0056699b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056699e: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005669a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005669a3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005669a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5669a8u); call_ind(t); }
    /* 005669a8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005669ab: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005669ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005669af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005669b2: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005669b5: call 0x5658c0 */ r_esp -= 4; W32(r_esp, 0x5669bau); f_005658c0();
    /* 005669ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005669bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005669bd: ret 4 */ FN_RET(0x00566970); r_esp += 8; return;
}

void f_005669c0(void) /* sub_5669C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005669c0);
    /* 005669c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005669c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005669c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005669c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005669c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005669ca: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 005669cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005669cf: je 0x5669e6 */ if (fZ) goto L_005669e6;
L_005669d1:; BB(0x005669d1);
    /* 005669d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005669d4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005669d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005669da: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005669dd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005669df: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005669e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5669e4u); call_ind(t); }
    /* 005669e4: jmp 0x5669f9 */ goto L_005669f9;
L_005669e6:; BB(0x005669e6);
    /* 005669e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005669e9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005669ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005669ef: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005669f2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005669f4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005669f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5669f9u); call_ind(t); }
L_005669f9:; BB(0x005669f9);
    /* 005669f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005669fc: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005669ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a02: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00566a05: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00566a07: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00566a0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566a0cu); call_ind(t); }
    /* 00566a0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a0f: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00566a12: call 0x566210 */ r_esp -= 4; W32(r_esp, 0x566a17u); f_00566210();
    /* 00566a17: mov esp, ebp */ r_esp = r_ebp;
    /* 00566a19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566a1a: ret  */ FN_RET(0x005669c0); r_esp += 4; return;
}

void f_00566a20(void) /* sub_566A20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566a20);
    /* 00566a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00566a23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566a24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566a27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a2a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00566a2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a30: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00566a33: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00566a35: mov ecx, eax */ r_ecx = r_eax;
    /* 00566a37: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00566a3a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566a3cu); call_ind(t); }
    /* 00566a3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a3f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00566a42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a45: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00566a48: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00566a4a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00566a4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566a4fu); call_ind(t); }
    /* 00566a4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a52: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00566a55: call 0x566310 */ r_esp -= 4; W32(r_esp, 0x566a5au); f_00566310();
    /* 00566a5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00566a5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566a5d: ret  */ FN_RET(0x00566a20); r_esp += 4; return;
}

void f_00566a60(void) /* sub_566A60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566a60);
    /* 00566a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00566a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566a67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566a6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566a6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a6e: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00566a71: call 0x565a50 */ r_esp -= 4; W32(r_esp, 0x566a76u); f_00565a50();
    /* 00566a76: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566a7a: jne 0x566aa1 */ if (!fZ) goto L_00566aa1;
L_00566a7c:; BB(0x00566a7c);
    /* 00566a7c: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 00566a81: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 00566a86: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a89: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00566a8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a8f: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00566a92: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00566a94: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00566a97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566a99u); call_ind(t); }
    /* 00566a99: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566a9c: mov byte ptr [ecx], 1 */ W8((u32)(r_ecx), 0x1u);
    /* 00566a9f: jmp 0x566ad7 */ goto L_00566ad7;
L_00566aa1:; BB(0x00566aa1);
    /* 00566aa1: push 0x13c */ { u32 v = 0x13cu; r_esp -= 4; W32(r_esp, v); }
    /* 00566aa6: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 00566aab: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566aae: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00566ab1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566ab4: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00566ab7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00566ab9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00566abc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566abeu); call_ind(t); }
    /* 00566abe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566ac1: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 00566ac4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566ac7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00566aca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566acd: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00566ad0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00566ad2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00566ad5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x566ad7u); call_ind(t); }
L_00566ad7:; BB(0x00566ad7);
    /* 00566ad7: mov esp, ebp */ r_esp = r_ebp;
    /* 00566ad9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566ada: ret 4 */ FN_RET(0x00566a60); r_esp += 8; return;
}

void f_00566ae0(void) /* sub_566AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00566ae0);
    /* 00566ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00566ae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566ae4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00566ae7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00566aea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566aeb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00566aee: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00566af1: call 0x5664c0 */ r_esp -= 4; W32(r_esp, 0x566af6u); f_005664c0();
    /* 00566af6: mov esp, ebp */ r_esp = r_ebp;
    /* 00566af8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566af9: ret 4 */ FN_RET(0x00566ae0); r_esp += 8; return;
}

