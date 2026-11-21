#include "protos.h"

void f_00625310(void) /* VPrintJob::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625310);
    /* 00625310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625311: mov ebp, esp */ r_ebp = r_esp;
    /* 00625313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00625317: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00625319: mov esp, ebp */ r_esp = r_ebp;
    /* 0062531b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062531c: ret 8 */ FN_RET(0x00625310); r_esp += 12; return;
}

void f_00625440(void) /* VPrintJob::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625440);
    /* 00625440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625441: mov ebp, esp */ r_ebp = r_esp;
    /* 00625443: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625446: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00625449: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062544b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062544d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062544f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625451: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00625453: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00625456: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625457: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062545a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062545c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062545f: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00625462: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625464u); call_ind(t); }
    /* 00625464: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00625467: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00625469: jne 0x62546f */ if (!fZ) goto L_0062546f;
L_0062546b:; BB(0x0062546b);
    /* 0062546b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062546d: jmp 0x625495 */ goto L_00625495;
L_0062546f:; BB(0x0062546f);
    /* 0062546f: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00625472: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625473: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00625476: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625477: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062547a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062547c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062547f: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00625482: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625484u); call_ind(t); }
    /* 00625484: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 00625487: fdiv dword ptr [ebp - 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0062548a: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625490: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625495u); f_00686cc0();
L_00625495:; BB(0x00625495);
    /* 00625495: mov esp, ebp */ r_esp = r_ebp;
    /* 00625497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625498: ret  */ FN_RET(0x00625440); r_esp += 4; return;
}

void f_006254a0(void) /* VPrintJob::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006254a0);
    /* 006254a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006254a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006254a3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006254a6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006254a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006254ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006254ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006254af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006254b1: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006254b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006254b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006254b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006254ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006254bc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006254bf: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006254c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6254c4u); call_ind(t); }
    /* 006254c4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006254c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006254c9: jne 0x6254cf */ if (!fZ) goto L_006254cf;
L_006254cb:; BB(0x006254cb);
    /* 006254cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006254cd: jmp 0x6254f5 */ goto L_006254f5;
L_006254cf:; BB(0x006254cf);
    /* 006254cf: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 006254d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006254d3: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 006254d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006254d7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006254da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006254dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006254df: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 006254e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6254e4u); call_ind(t); }
    /* 006254e4: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 006254e7: fdiv dword ptr [ebp - 8] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff8u));
    /* 006254ea: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006254f0: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6254f5u); f_00686cc0();
L_006254f5:; BB(0x006254f5);
    /* 006254f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006254f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006254f8: ret  */ FN_RET(0x006254a0); r_esp += 4; return;
}

void f_00625500(void) /* VPrintJob::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625500);
    /* 00625500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625501: mov ebp, esp */ r_ebp = r_esp;
    /* 00625503: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625506: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00625509: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062550c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0062550f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625512: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00625515: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00625518: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062551c: ja 0x625907 */ if ((!fC&&!fZ)) goto L_00625907;
L_00625522:; BB(0x00625522);
    /* 00625522: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00625525: jmp dword ptr [edx*4 + 0x6259f4] */ { u32 t = R32((u32)(r_edx*4+0x6259f4u)); switch (t) { case 0x62552cu: goto L_0062552c; case 0x6255acu: goto L_006255ac; case 0x625699u: goto L_00625699; case 0x62573bu: goto L_0062573b; case 0x625821u: goto L_00625821; default: UNSUP(0x00625525, "jump table entry is not a known target"); } }
L_0062552c:; BB(0x0062552c);
    /* 0062552c: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0062552f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625530: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 00625533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625534: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625537: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00625539: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062553c: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0062553f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x625541u); call_ind(t); }
    /* 00625541: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00625544: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 00625546: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00625549: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 0062554f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625554u); f_00686cc0();
    /* 00625554: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625557: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00625559: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062555c: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 0062555f: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00625562: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625568: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62556du); f_00686cc0();
    /* 0062556d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625570: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00625573: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625576: fild dword ptr [edx + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x8u)));
    /* 00625579: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0062557c: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625582: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625587u); f_00686cc0();
    /* 00625587: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062558a: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0062558d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625590: fild dword ptr [edx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_edx+0xcu)));
    /* 00625593: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00625596: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 0062559c: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6255a1u); f_00686cc0();
    /* 006255a1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006255a4: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006255a7: jmp 0x6259ea */ goto L_006259ea;
L_006255ac:; BB(0x006255ac);
    /* 006255ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006255ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006255b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006255b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006255b4: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 006255b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006255b8: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006255bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006255bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006255bf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006255c1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006255c4: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006255c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6255c9u); call_ind(t); }
    /* 006255c9: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 006255cc: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 006255cf: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 006255d2: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 006255d5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006255d8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006255db: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 006255de: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006255e0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006255e3: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 006255e6: fdivr dword ptr [ebp - 4] */ ST(0) = R_F32((u32)(r_ebp+0xfffffffcu)) / ST(0);
    /* 006255e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006255ec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006255ef: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006255f2: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006255f5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006255f8: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 006255fb: fdivr dword ptr [ebp - 8] */ ST(0) = R_F32((u32)(r_ebp+0xfffffff8u)) / ST(0);
    /* 006255fe: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00625600: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00625602: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00625605: jne 0x625620 */ if (!fZ) goto L_00625620;
L_00625607:; BB(0x00625607);
    /* 00625607: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062560a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062560d: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00625610: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00625612: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00625615: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00625618: fdivr dword ptr [ebp - 4] */ ST(0) = R_F32((u32)(r_ebp+0xfffffffcu)) / ST(0);
    /* 0062561b: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 0062561e: jmp 0x625638 */ goto L_00625638;
L_00625620:; BB(0x00625620);
    /* 00625620: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625623: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625626: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00625629: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062562c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0062562f: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00625632: fdivr dword ptr [ebp - 8] */ ST(0) = R_F32((u32)(r_ebp+0xfffffff8u)) / ST(0);
    /* 00625635: fstp qword ptr [ebp - 0x30] */ W_F64((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
L_00625638:; BB(0x00625638);
    /* 00625638: fld qword ptr [ebp - 0x30] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd0u)));
    /* 0062563b: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0062563e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625641: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625644: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00625647: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00625649: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0062564c: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0062564f: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 00625652: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625658: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62565du); f_00686cc0();
    /* 0062565d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625660: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625662: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625665: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00625668: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062566b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062566e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00625671: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00625674: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00625677: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0062567a: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0062567d: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625683: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625688u); f_00686cc0();
    /* 00625688: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062568b: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062568e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625691: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00625694: jmp 0x6259ea */ goto L_006259ea;
L_00625699:; BB(0x00625699);
    /* 00625699: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0062569c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062569d: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 006256a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006256a1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006256a4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006256a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006256a9: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006256ac: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6256aeu); call_ind(t); }
    /* 006256ae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006256b1: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 006256b4: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 006256b7: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006256bd: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6256c2u); f_00686cc0();
    /* 006256c2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006256c5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006256c8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006256cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006256ce: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006256d1: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006256d4: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 006256d7: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 006256da: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 006256dd: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006256e3: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6256e8u); f_00686cc0();
    /* 006256e8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006256eb: add eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006256ee: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006256f1: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006256f4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006256f7: fild dword ptr [edx] */ FPUSH((long double)(i32)R32((u32)(r_edx)));
    /* 006256f9: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006256fc: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625702: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625707u); f_00686cc0();
    /* 00625707: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062570a: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0062570c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062570f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625712: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00625715: sub ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00625717: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0062571a: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0062571d: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00625720: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625726: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x62572bu); f_00686cc0();
    /* 0062572b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062572e: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625730: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625733: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00625736: jmp 0x6259ea */ goto L_006259ea;
L_0062573b:; BB(0x0062573b);
    /* 0062573b: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 0062573e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062573f: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00625742: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625743: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625746: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00625748: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062574b: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0062574e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625750u); call_ind(t); }
    /* 00625750: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625753: fild dword ptr [ecx + 4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x4u)));
    /* 00625756: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00625759: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 0062575f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625764u); f_00686cc0();
    /* 00625764: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625767: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0062576a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062576d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625770: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00625773: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00625775: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00625778: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 0062577b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062577e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625781: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00625784: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00625786: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00625789: fidiv dword ptr [ebp - 0x4c] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xffffffb4u));
    /* 0062578c: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0062578f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625792: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625795: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00625798: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062579b: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0062579e: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 006257a1: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006257a4: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006257aa: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6257afu); f_00686cc0();
    /* 006257af: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006257b2: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006257b5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006257b8: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006257bb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006257be: fild dword ptr [eax + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_eax+0xcu)));
    /* 006257c1: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 006257c4: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006257ca: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6257cfu); f_00686cc0();
    /* 006257cf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006257d2: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006257d5: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 006257d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006257d9: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 006257dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006257dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006257e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006257e2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006257e5: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 006257e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6257eau); call_ind(t); }
    /* 006257ea: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006257ed: fild dword ptr [ecx] */ FPUSH((long double)(i32)R32((u32)(r_ecx)));
    /* 006257ef: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006257f2: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006257f8: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6257fdu); f_00686cc0();
    /* 006257fd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625800: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00625802: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00625805: fild dword ptr [eax + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8u)));
    /* 00625808: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0062580b: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625811: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625816u); f_00686cc0();
    /* 00625816: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625819: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0062581c: jmp 0x6259ea */ goto L_006259ea;
L_00625821:; BB(0x00625821);
    /* 00625821: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00625824: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625825: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00625828: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625829: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062582c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062582e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00625831: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00625834: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625836u); call_ind(t); }
    /* 00625836: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625839: fild dword ptr [ecx] */ FPUSH((long double)(i32)R32((u32)(r_ecx)));
    /* 0062583b: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0062583e: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625844: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625849u); f_00686cc0();
    /* 00625849: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062584c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062584e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00625851: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625854: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00625857: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062585a: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0062585d: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 00625860: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625863: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625866: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00625869: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062586c: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0062586f: fidiv dword ptr [ebp - 0x58] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xffffffa8u));
    /* 00625872: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00625875: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625878: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062587b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0062587e: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00625880: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00625883: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 00625886: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00625889: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 0062588f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625894u); f_00686cc0();
    /* 00625894: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625897: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625899: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062589c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0062589f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006258a2: fild dword ptr [eax + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8u)));
    /* 006258a5: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006258a8: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006258ae: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6258b3u); f_00686cc0();
    /* 006258b3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006258b6: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006258b9: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 006258bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006258bd: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 006258c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006258c1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006258c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006258c6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006258c9: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 006258cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6258ceu); call_ind(t); }
    /* 006258ce: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006258d1: fild dword ptr [ecx + 4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x4u)));
    /* 006258d4: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 006258d7: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006258dd: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6258e2u); f_00686cc0();
    /* 006258e2: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006258e5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006258e8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006258eb: fild dword ptr [eax + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_eax+0xcu)));
    /* 006258ee: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 006258f1: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006258f7: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6258fcu); f_00686cc0();
    /* 006258fc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006258ff: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00625902: jmp 0x6259ea */ goto L_006259ea;
L_00625907:; BB(0x00625907);
    /* 00625907: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062590b: jge 0x62592f */ if ((fS==fO)) goto L_0062592f;
L_0062590d:; BB(0x0062590d);
    /* 0062590d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0062590f: jne 0x625928 */ if (!fZ) goto L_00625928;
L_00625911:; BB(0x00625911);
    /* 00625911: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00625916: push 0x6d8f30 */ { u32 v = 0x6d8f30u; r_esp -= 4; W32(r_esp, v); }
    /* 0062591b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00625920: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x625925u); f_005e9f20();
    /* 00625925: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00625928:; BB(0x00625928);
    /* 00625928: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062592a: jmp 0x6259ec */ goto L_006259ec;
L_0062592f:; BB(0x0062592f);
    /* 0062592f: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00625932: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625933: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 00625936: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625937: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062593a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062593c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062593f: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00625942: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625944u); call_ind(t); }
    /* 00625944: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625947: fild dword ptr [ecx] */ FPUSH((long double)(i32)R32((u32)(r_ecx)));
    /* 00625949: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0062594c: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625952: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625957u); f_00686cc0();
    /* 00625957: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062595a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0062595c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062595f: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00625962: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00625965: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 0062596b: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625970u); f_00686cc0();
    /* 00625970: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625973: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00625976: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 00625979: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0062597f: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00625982: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00625985: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 00625988: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0062598e: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 00625991: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 00625994: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625997: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062599a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0062599d: sub ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062599f: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 006259a2: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 006259a5: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006259a8: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006259ae: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6259b3u); f_00686cc0();
    /* 006259b3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006259b6: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006259b8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006259bb: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006259be: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006259c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006259c4: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006259c7: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006259ca: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 006259cd: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 006259d0: fmul dword ptr [ebp - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff8u));
    /* 006259d3: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 006259d9: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x6259deu); f_00686cc0();
    /* 006259de: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006259e1: add eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006259e4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006259e7: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
L_006259ea:; BB(0x006259ea);
    /* 006259ea: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_006259ec:; BB(0x006259ec);
    /* 006259ec: mov esp, ebp */ r_esp = r_ebp;
    /* 006259ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006259ef: ret 0xc */ FN_RET(0x00625500); r_esp += 16; return;
}

void f_00625a10(void) /* VPrintJob::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00625a10);
    /* 00625a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00625a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00625a13: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00625a16: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00625a19: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00625a1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625a1d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00625a20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625a21: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00625a24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625a25: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00625a28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00625a29: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00625a2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00625a2d: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 00625a30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00625a31: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625a34: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00625a36: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00625a39: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00625a3c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x625a3eu); call_ind(t); }
    /* 00625a3e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625a41: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00625a44: je 0x625a62 */ if (fZ) goto L_00625a62;
L_00625a46:; BB(0x00625a46);
    /* 00625a46: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625a49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625a4c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00625a4f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00625a52: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625a55: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00625a58: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625a5b: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
L_00625a62:; BB(0x00625a62);
    /* 00625a62: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00625a65: and ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00625a68: je 0x625a88 */ if (fZ) goto L_00625a88;
L_00625a6a:; BB(0x00625a6a);
    /* 00625a6a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625a6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625a70: sub eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00625a73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625a76: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625a79: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625a7c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00625a7f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625a82: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00625a85: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
L_00625a88:; BB(0x00625a88);
    /* 00625a88: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625a8b: and edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00625a8e: je 0x625aaa */ if (fZ) goto L_00625aaa;
L_00625a90:; BB(0x00625a90);
    /* 00625a90: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625a93: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625a96: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00625a99: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00625a9b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625a9e: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00625aa1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625aa4: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
L_00625aaa:; BB(0x00625aaa);
    /* 00625aaa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00625aad: and edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00625ab0: je 0x625ace */ if (fZ) goto L_00625ace;
L_00625ab2:; BB(0x00625ab2);
    /* 00625ab2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625ab5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625ab8: sub ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00625abb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625abe: add ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00625ac0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625ac3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00625ac5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625ac8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00625acb: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
L_00625ace:; BB(0x00625ace);
    /* 00625ace: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00625ad1: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00625ad4: je 0x625b45 */ if (fZ) goto L_00625b45;
L_00625ad6:; BB(0x00625ad6);
    /* 00625ad6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625ad9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625adc: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00625adf: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00625ae2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00625ae5: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 00625ae8: fdiv qword ptr [0x6b3740] */ ST(0) = ST(0) / R_F64((u32)(0x6b3740u));
    /* 00625aee: fild dword ptr [ebp - 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe4u)));
    /* 00625af1: fdiv qword ptr [0x6b3740] */ ST(0) = ST(0) / R_F64((u32)(0x6b3740u));
    /* 00625af7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00625af9: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625aff: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625b04u); f_00686cc0();
    /* 00625b04: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625b07: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00625b0a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00625b0d: sub edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00625b10: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00625b13: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00625b16: fdiv qword ptr [0x6b3740] */ ST(0) = ST(0) / R_F64((u32)(0x6b3740u));
    /* 00625b1c: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625b22: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625b27u); f_00686cc0();
    /* 00625b27: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00625b2a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625b2d: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625b30: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625b33: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00625b36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625b39: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00625b3c: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00625b3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625b42: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
L_00625b45:; BB(0x00625b45);
    /* 00625b45: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00625b48: and eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00625b4b: je 0x625bb7 */ if (fZ) goto L_00625bb7;
L_00625b4d:; BB(0x00625b4d);
    /* 00625b4d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625b50: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625b53: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00625b56: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00625b58: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00625b5b: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00625b5e: fdiv qword ptr [0x6b3740] */ ST(0) = ST(0) / R_F64((u32)(0x6b3740u));
    /* 00625b64: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 00625b67: fdiv qword ptr [0x6b3740] */ ST(0) = ST(0) / R_F64((u32)(0x6b3740u));
    /* 00625b6d: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00625b6f: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625b75: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625b7au); f_00686cc0();
    /* 00625b7a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625b7d: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00625b7f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00625b82: sub edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00625b85: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00625b88: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00625b8b: fdiv qword ptr [0x6b3740] */ ST(0) = ST(0) / R_F64((u32)(0x6b3740u));
    /* 00625b91: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00625b97: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x625b9cu); f_00686cc0();
    /* 00625b9c: sub eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00625b9f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00625ba2: add eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00625ba4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625ba7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00625ba9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00625bac: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00625bae: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00625bb1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00625bb4: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
L_00625bb7:; BB(0x00625bb7);
    /* 00625bb7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00625bb9: mov esp, ebp */ r_esp = r_ebp;
    /* 00625bbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00625bbc: ret 8 */ FN_RET(0x00625a10); r_esp += 12; return;
}

