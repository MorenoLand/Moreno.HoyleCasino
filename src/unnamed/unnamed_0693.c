#include "protos.h"

void f_006933e0(void) /* sub_6933E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006933e0);
    /* 006933e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006933e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006933e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006933e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006933e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 006933e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006933e9: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 006933ec: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 006933ee: lea eax, [edi*4] */ r_eax = (u32)(r_edi*4);
    /* 006933f5: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006933f8: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006933fa: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x6933ffu); f_00687340();
    /* 006933ff: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00693402: mov ecx, esp */ r_ecx = r_esp;
    /* 00693404: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00693407: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0069340a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069340c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0069340f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693411: jle 0x693422 */ if ((fZ||fS!=fO)) goto L_00693422;
L_00693413:; BB(0x00693413);
    /* 00693413: mov dword ptr [ecx + eax*4], 0xc61c3c00 */ W32((u32)(r_ecx+r_eax*4), 0xc61c3c00u);
    /* 0069341a: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0069341d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069341e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693420: jl 0x693413 */ if ((fS!=fO)) goto L_00693413;
L_00693422:; BB(0x00693422);
    /* 00693422: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00693425: fcom dword ptr [edx + 8] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x8u))); 
    /* 00693428: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069342a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069342d: jp 0x693434 */ if (fP) goto L_00693434;
L_0069342f:; BB(0x0069342f);
    /* 0069342f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693431: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
L_00693434:; BB(0x00693434);
    /* 00693434: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 00693437: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00693439: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069343b: jle 0x69344f */ if ((fZ||fS!=fO)) goto L_0069344f;
L_0069343d:; BB(0x0069343d);
    /* 0069343d: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00693440: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693441: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00693443: fadd dword ptr [edx + eax*4 - 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_eax*4+0xfffffffcu));
    /* 00693447: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693449: fstp dword ptr [edi + eax*4 - 4] */ W_F32((u32)(r_edi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 0069344d: jl 0x69343d */ if ((fS!=fO)) goto L_0069343d;
L_0069344f:; BB(0x0069344f);
    /* 0069344f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00693452: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00693455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693456: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693457: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0069345a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069345b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069345c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069345d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069345e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693460: call 0x693480 */ r_esp -= 4; W32(r_esp, 0x693465u); f_00693480();
    /* 00693465: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00693468: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069346a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069346b: call 0x693620 */ r_esp -= 4; W32(r_esp, 0x693470u); f_00693620();
    /* 00693470: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693473: lea esp, [ebp - 0xc] */ r_esp = (u32)(r_ebp+0xfffffff4u);
    /* 00693476: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693477: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00693478: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00693479: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069347a: ret  */ FN_RET(0x006933e0); r_esp += 4; return;
}

void f_00693480(void) /* sub_693480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693480);
    /* 00693480: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693481: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693482: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693483: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693484: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00693488: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069348a: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0069348d: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0069348f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693491: fld dword ptr [eax + 0x1f0] */ FPUSH(R_F32((u32)(r_eax+0x1f0u)));
    /* 00693497: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 0069349b: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0069349f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006934a3: jle 0x693563 */ if ((fZ||fS!=fO)) goto L_00693563;
L_006934a9:; BB(0x006934a9);
    /* 006934a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
L_006934aa:; BB(0x006934aa);
    /* 006934aa: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006934ae: mov ebp, dword ptr [edi + 0x14] */ r_ebp = R32((u32)(r_edi+0x14u));
    /* 006934b1: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 006934b4: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 006934b7: mov edx, dword ptr [ebp + esi*4] */ r_edx = R32((u32)(r_ebp+r_esi*4));
    /* 006934bb: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006934bd: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 006934c1: jge 0x6934f7 */ if ((fS==fO)) goto L_006934f7;
L_006934c3:; BB(0x006934c3);
    /* 006934c3: mov ebx, eax */ r_ebx = r_eax;
    /* 006934c5: lea ecx, [ebp + eax*4] */ r_ecx = (u32)(r_ebp+r_eax*4);
L_006934c9:; BB(0x006934c9);
    /* 006934c9: cmp dword ptr [ecx], edx */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006934cb: jne 0x6934ef */ if (!fZ) goto L_006934ef;
L_006934cd:; BB(0x006934cd);
    /* 006934cd: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006934d1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006934d2: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006934d5: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006934d6: fcom dword ptr [eax + esi*4] */ fx_compare(ST(0), R_F32((u32)(r_eax+r_esi*4))); 
    /* 006934d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006934db: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006934de: jp 0x6934e9 */ if (fP) goto L_006934e9;
L_006934e0:; BB(0x006934e0);
    /* 006934e0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006934e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006934e6: fld dword ptr [eax + esi*4] */ FPUSH(R_F32((u32)(r_eax+r_esi*4)));
L_006934e9:; BB(0x006934e9);
    /* 006934e9: cmp ebx, dword ptr [esp + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006934ed: jl 0x6934c9 */ if ((fS!=fO)) goto L_006934c9;
L_006934ef:; BB(0x006934ef);
    /* 006934ef: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 006934f3: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
L_006934f7:; BB(0x006934f7);
    /* 006934f7: fld dword ptr [0x6e57a4] */ FPUSH(R_F32((u32)(0x6e57a4u)));
    /* 006934fd: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00693501: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00693503: fcomp dword ptr [ecx + esi*4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_esi*4))); FPOP();
    /* 00693506: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693508: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069350d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069350f: jne 0x693559 */ if (!fZ) goto L_00693559;
L_00693511:; BB(0x00693511);
    /* 00693511: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00693514: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00693516: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693519: jl 0x693522 */ if ((fS!=fO)) goto L_00693522;
L_0069351b:; BB(0x0069351b);
    /* 0069351b: mov edx, 0x10 */ r_edx = 0x10u;
    /* 00693520: jmp 0x693528 */ goto L_00693528;
L_00693522:; BB(0x00693522);
    /* 00693522: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00693524: jge 0x693528 */ if ((fS==fO)) goto L_00693528;
L_00693526:; BB(0x00693526);
    /* 00693526: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00693528:; BB(0x00693528);
    /* 00693528: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069352c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0069352f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693530: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00693533: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693534: mov ecx, dword ptr [ebp + esi*4] */ r_ecx = R32((u32)(r_ebp+r_esi*4));
    /* 00693538: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693539: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0069353c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069353e: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00693542: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693543: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00693547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693548: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0069354c: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0069354f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00693550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693551: call 0x693570 */ r_esp -= 4; W32(r_esp, 0x693556u); f_00693570();
    /* 00693556: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00693559:; BB(0x00693559);
    /* 00693559: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069355a: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069355c: jl 0x6934aa */ if ((fS!=fO)) goto L_006934aa;
L_00693562:; BB(0x00693562);
    /* 00693562: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_00693563:; BB(0x00693563);
    /* 00693563: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693564: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00693565: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00693566: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00693567: ret  */ FN_RET(0x00693480); r_esp += 4; return;
}

void f_00693570(void) /* sub_693570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693570);
    /* 00693570: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00693574: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00693578: fsub qword ptr [0x6e5798] */ ST(0) = ST(0) - R_F64((u32)(0x6e5798u));
    /* 0069357e: fmul qword ptr [0x6e57a8] */ ST(0) = ST(0) * R_F64((u32)(0x6e57a8u));
    /* 00693584: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x693589u); f_00687450();
    /* 00693589: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069358b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069358d: setle cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fZ||fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00693590: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00693591: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00693593: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693596: jl 0x69359d */ if ((fS!=fO)) goto L_0069359d;
L_00693598:; BB(0x00693598);
    /* 00693598: mov eax, 7 */ r_eax = 0x7u;
L_0069359d:; BB(0x0069359d);
    /* 0069359d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006935a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006935a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006935a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006935a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006935a5: mov edi, dword ptr [edx + eax*4] */ r_edi = R32((u32)(r_edx+r_eax*4));
    /* 006935a8: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 006935ab: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x6935b0u); f_00687450();
    /* 006935b0: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 006935b2: fsub dword ptr [0x6e5748] */ ST(0) = ST(0) - R_F32((u32)(0x6e5748u));
    /* 006935b8: fimul dword ptr [esp + 0x28] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_esp+0x28u));
    /* 006935bc: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 006935c0: mov ebx, eax */ r_ebx = r_eax;
    /* 006935c2: mov eax, ebp */ r_eax = r_ebp;
    /* 006935c4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006935c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006935ca: fiadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + (long double)(i32)R32((u32)(r_esp+0x20u));
    /* 006935ce: fisub dword ptr [esp + 0x28] */ ST(0) = ST(0) - (long double)(i32)R32((u32)(r_esp+0x28u));
    /* 006935d2: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x6935d7u); f_00687450();
    /* 006935d7: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 006935d9: mov esi, eax */ r_esi = r_eax;
    /* 006935db: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x6935e0u); f_00687450();
    /* 006935e0: mov ecx, eax */ r_ecx = r_eax;
    /* 006935e2: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006935e4: jge 0x693618 */ if ((fS==fO)) goto L_00693618;
L_006935e6:; BB(0x006935e6);
    /* 006935e6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
L_006935ea:; BB(0x006935ea);
    /* 006935ea: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006935ec: jle 0x693609 */ if ((fZ||fS!=fO)) goto L_00693609;
L_006935ee:; BB(0x006935ee);
    /* 006935ee: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006935f2: fadd dword ptr [edi + ecx*4 + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_ecx*4+0x8u));
    /* 006935f6: fcom dword ptr [edx + esi*4] */ fx_compare(ST(0), R_F32((u32)(r_edx+r_esi*4))); 
    /* 006935f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006935fb: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693600: jne 0x693607 */ if (!fZ) goto L_00693607;
L_00693602:; BB(0x00693602);
    /* 00693602: fstp dword ptr [edx + esi*4] */ W_F32((u32)(r_edx+r_esi*4), ST(0)); FPOP();
    /* 00693605: jmp 0x693609 */ goto L_00693609;
L_00693607:; BB(0x00693607);
    /* 00693607: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00693609:; BB(0x00693609);
    /* 00693609: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069360d: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069360f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693611: jge 0x693618 */ if ((fS==fO)) goto L_00693618;
L_00693613:; BB(0x00693613);
    /* 00693613: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693614: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693616: jl 0x6935ea */ if ((fS!=fO)) goto L_006935ea;
L_00693618:; BB(0x00693618);
    /* 00693618: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693619: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069361a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069361b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069361c: ret  */ FN_RET(0x00693570); r_esp += 4; return;
}

void f_00693620(void) /* sub_693620 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693620);
    /* 00693620: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693621: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693622: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00693626: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693627: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693628: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0069362c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0069362e: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00693631: mov ebx, dword ptr [edi + 0x24] */ r_ebx = R32((u32)(r_edi+0x24u));
    /* 00693634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693635: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693636: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693637: call 0x693760 */ r_esp -= 4; W32(r_esp, 0x69363cu); f_00693760();
    /* 0069363c: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0069363f: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00693642: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00693644: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693647: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00693649: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0069364b: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069364d: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069364f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693652: jle 0x693726 */ if ((fZ||fS!=fO)) goto L_00693726;
L_00693658:; BB(0x00693658);
    /* 00693658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
L_00693659:; BB(0x00693659);
    /* 00693659: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0069365d: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 00693660: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00693663: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00693666: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0069366a: mov ecx, dword ptr [eax + esi*4 + 4] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x4u));
    /* 0069366e: mov ebx, dword ptr [eax + esi*4] */ r_ebx = R32((u32)(r_eax+r_esi*4));
    /* 00693671: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00693675: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693677: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0069367a: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0069367c: fcomp dword ptr [ebx + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x20u))); FPOP();
    /* 0069367f: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00693681: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693683: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693688: jne 0x693691 */ if (!fZ) goto L_00693691;
L_0069368a:; BB(0x0069368a);
    /* 0069368a: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0069368d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
L_00693691:; BB(0x00693691);
    /* 00693691: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 00693694: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693696: jg 0x6936e8 */ if ((!fZ&&fS==fO)) goto L_006936e8;
L_00693698:; BB(0x00693698);
    /* 00693698: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_0069369c:; BB(0x0069369c);
    /* 0069369c: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006936a0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006936a4: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006936a5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006936a6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006936aa: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 006936ad: fcomp dword ptr [0x6e57b0] */ fx_compare(ST(0), R_F32((u32)(0x6e57b0u))); FPOP();
    /* 006936b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006936b5: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006936ba: jne 0x6936ca */ if (!fZ) goto L_006936ca;
L_006936bc:; BB(0x006936bc);
    /* 006936bc: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 006936bf: fcomp dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); FPOP();
    /* 006936c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006936c5: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006936c8: jnp 0x6936db */ if (!fP) goto L_006936db;
L_006936ca:; BB(0x006936ca);
    /* 006936ca: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006936ce: fcomp dword ptr [0x6e57b0] */ fx_compare(ST(0), R_F32((u32)(0x6e57b0u))); FPOP();
    /* 006936d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006936d6: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006936d9: jp 0x6936e2 */ if (fP) goto L_006936e2;
L_006936db:; BB(0x006936db);
    /* 006936db: fld dword ptr [ebx + edx*4] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4)));
    /* 006936de: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_006936e2:; BB(0x006936e2);
    /* 006936e2: cmp dword ptr [esp + 0x10], ecx */ {  u32 a = R32((u32)(r_esp+0x10u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006936e6: jle 0x69369c */ if ((fZ||fS!=fO)) goto L_0069369c;
L_006936e8:; BB(0x006936e8);
    /* 006936e8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006936ea: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006936ec: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006936ee: jge 0x693718 */ if ((fS==fO)) goto L_00693718;
L_006936f0:; BB(0x006936f0);
    /* 006936f0: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 006936f3: cmp dword ptr [ecx + esi*4], ebp */ {  u32 a = R32((u32)(r_ecx+r_esi*4)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006936f6: jg 0x693718 */ if ((!fZ&&fS==fO)) goto L_00693718;
L_006936f8:; BB(0x006936f8);
    /* 006936f8: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006936fc: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 006936ff: fcomp dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); FPOP();
    /* 00693703: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693705: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693708: jp 0x693711 */ if (fP) goto L_00693711;
L_0069370a:; BB(0x0069370a);
    /* 0069370a: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0069370e: fstp dword ptr [ecx + esi*4] */ W_F32((u32)(r_ecx+r_esi*4), ST(0)); FPOP();
L_00693711:; BB(0x00693711);
    /* 00693711: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00693713: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00693714: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693716: jl 0x6936f0 */ if ((fS!=fO)) goto L_006936f0;
L_00693718:; BB(0x00693718);
    /* 00693718: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069371a: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 0069371d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069371f: jl 0x693659 */ if ((fS!=fO)) goto L_00693659;
L_00693725:; BB(0x00693725);
    /* 00693725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_00693726:; BB(0x00693726);
    /* 00693726: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 00693729: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069372d: fld dword ptr [eax + edx*4 - 4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4+0xfffffffcu)));
    /* 00693731: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00693733: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00693737: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693739: jge 0x69375b */ if ((fS==fO)) goto L_0069375b;
L_0069373b:; BB(0x0069373b);
    /* 0069373b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0069373f: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 00693742: fcomp dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); FPOP();
    /* 00693746: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693748: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0069374b: jp 0x693754 */ if (fP) goto L_00693754;
L_0069374d:; BB(0x0069374d);
    /* 0069374d: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00693751: fstp dword ptr [ecx + esi*4] */ W_F32((u32)(r_ecx+r_esi*4), ST(0)); FPOP();
L_00693754:; BB(0x00693754);
    /* 00693754: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00693756: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00693757: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693759: jl 0x69373b */ if ((fS!=fO)) goto L_0069373b;
L_0069375b:; BB(0x0069375b);
    /* 0069375b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069375c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069375d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069375e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069375f: ret  */ FN_RET(0x00693620); r_esp += 4; return;
}

void f_00693760(void) /* sub_693760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693760);
    /* 00693760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693761: mov ebp, esp */ r_ebp = r_esp;
    /* 00693763: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00693766: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00693769: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069376a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069376b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069376c: lea ebx, [eax*4] */ r_ebx = (u32)(r_eax*4);
    /* 00693773: mov eax, ebx */ r_eax = r_ebx;
    /* 00693775: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693778: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069377a: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x69377fu); f_00687340();
    /* 0069377f: mov eax, ebx */ r_eax = r_ebx;
    /* 00693781: mov edi, esp */ r_edi = r_esp;
    /* 00693783: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693786: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00693788: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x69378du); f_00687340();
    /* 0069378d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00693790: mov ebx, esp */ r_ebx = r_esp;
    /* 00693792: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00693794: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00693796: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00693798: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0069379b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069379d: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 006937a0: jle 0x693836 */ if ((fZ||fS!=fO)) goto L_00693836;
L_006937a6:; BB(0x006937a6);
    /* 006937a6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006937a9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006937ac:; BB(0x006937ac);
    /* 006937ac: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006937af: jl 0x693814 */ if ((fS!=fO)) goto L_00693814;
L_006937b1:; BB(0x006937b1);
    /* 006937b1: lea eax, [edi + ecx*4 - 8] */ r_eax = (u32)(r_edi+r_ecx*4+0xfffffff8u);
    /* 006937b5: lea esi, [ebx + ecx*4 - 4] */ r_esi = (u32)(r_ebx+r_ecx*4+0xfffffffcu);
    /* 006937b9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006937bc: mov eax, edi */ r_eax = r_edi;
    /* 006937be: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006937c0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006937c3:; BB(0x006937c3);
    /* 006937c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006937c6: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 006937c8: fcomp dword ptr [esi] */ fx_compare(ST(0), R_F32((u32)(r_esi))); FPOP();
    /* 006937ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006937cc: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006937cf: jnp 0x693811 */ if (!fP) goto L_00693811;
L_006937d1:; BB(0x006937d1);
    /* 006937d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006937d4: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 006937d7: mov eax, dword ptr [eax + esi] */ r_eax = R32((u32)(r_eax+r_esi));
    /* 006937da: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006937dc: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006937de: jge 0x69380e */ if ((fS==fO)) goto L_0069380e;
L_006937e0:; BB(0x006937e0);
    /* 006937e0: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006937e3: jle 0x69380e */ if ((fZ||fS!=fO)) goto L_0069380e;
L_006937e5:; BB(0x006937e5);
    /* 006937e5: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 006937e7: fcomp dword ptr [esi - 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xfffffffcu))); FPOP();
    /* 006937ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006937ec: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006937ef: jp 0x69380e */ if (fP) goto L_0069380e;
L_006937f1:; BB(0x006937f1);
    /* 006937f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006937f4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006937f6: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006937f8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006937fa: jge 0x69380e */ if ((fS==fO)) goto L_0069380e;
L_006937fc:; BB(0x006937fc);
    /* 006937fc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006937ff: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00693802: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00693803: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00693806: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00693809: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0069380c: jmp 0x6937c3 */ goto L_006937c3;
L_0069380e:; BB(0x0069380e);
    /* 0069380e: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
L_00693811:; BB(0x00693811);
    /* 00693811: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
L_00693814:; BB(0x00693814);
    /* 00693814: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00693817: mov dword ptr [edi + ecx*4], edx */ W32((u32)(r_edi+r_ecx*4), r_edx);
    /* 0069381a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069381b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069381c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0069381e: mov dword ptr [ebx + ecx*4 - 4], eax */ W32((u32)(r_ebx+r_ecx*4+0xfffffffcu), r_eax);
    /* 00693822: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00693825: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693828: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0069382b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0069382e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693830: jl 0x6937ac */ if ((fS!=fO)) goto L_006937ac;
L_00693836:; BB(0x00693836);
    /* 00693836: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693838: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0069383f: jle 0x6938a8 */ if ((fZ||fS!=fO)) goto L_006938a8;
L_00693841:; BB(0x00693841);
    /* 00693841: mov eax, ebx */ r_eax = r_ebx;
    /* 00693843: lea edx, [edi + 4] */ r_edx = (u32)(r_edi+0x4u);
    /* 00693846: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00693848: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0069384b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0069384e:; BB(0x0069384e);
    /* 0069384e: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00693851: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 00693854: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693856: jge 0x69386d */ if ((fS==fO)) goto L_0069386d;
L_00693858:; BB(0x00693858);
    /* 00693858: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069385b: fld dword ptr [eax + edx] */ FPUSH(R_F32((u32)(r_eax+r_edx)));
    /* 0069385e: fcomp dword ptr [ebx] */ fx_compare(ST(0), R_F32((u32)(r_ebx))); FPOP();
    /* 00693860: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693862: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693867: jne 0x69386d */ if (!fZ) goto L_0069386d;
L_00693869:; BB(0x00693869);
    /* 00693869: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0069386b: jmp 0x693877 */ goto L_00693877;
L_0069386d:; BB(0x0069386d);
    /* 0069386d: mov eax, dword ptr [edx - 4] */ r_eax = R32((u32)(r_edx+0xfffffffcu));
    /* 00693870: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00693873: lea eax, [eax + edi + 1] */ r_eax = (u32)(r_eax+r_edi+0x1u);
L_00693877:; BB(0x00693877);
    /* 00693877: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0069387a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069387c: jle 0x693880 */ if ((fZ||fS!=fO)) goto L_00693880;
L_0069387e:; BB(0x0069387e);
    /* 0069387e: mov eax, edi */ r_eax = r_edi;
L_00693880:; BB(0x00693880);
    /* 00693880: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693882: jge 0x693894 */ if ((fS==fO)) goto L_00693894;
L_00693884:; BB(0x00693884);
    /* 00693884: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00693887: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00693889: mov dword ptr [edi + esi*4], edx */ W32((u32)(r_edi+r_esi*4), r_edx);
    /* 0069388c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069388d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069388f: jl 0x693884 */ if ((fS!=fO)) goto L_00693884;
L_00693891:; BB(0x00693891);
    /* 00693891: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
L_00693894:; BB(0x00693894);
    /* 00693894: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00693897: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069389a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069389b: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069389e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006938a0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006938a3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006938a6: jl 0x69384e */ if ((fS!=fO)) goto L_0069384e;
L_006938a8:; BB(0x006938a8);
    /* 006938a8: lea esp, [ebp - 0x20] */ r_esp = (u32)(r_ebp+0xffffffe0u);
    /* 006938ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006938ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006938ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006938ae: mov esp, ebp */ r_esp = r_ebp;
    /* 006938b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006938b1: ret  */ FN_RET(0x00693760); r_esp += 4; return;
}

void f_006938c0(void) /* sub_6938C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006938c0);
    /* 006938c0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006938c3: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006938c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006938c8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006938cc: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 006938cf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006938d1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006938d5: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 006938d9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006938db: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006938df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006938e1: jle 0x693949 */ if ((fZ||fS!=fO)) goto L_00693949;
L_006938e3:; BB(0x006938e3);
    /* 006938e3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006938e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006938e8: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006938ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006938ed: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 006938f1: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006938f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006938f4: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_006938f6:; BB(0x006938f6);
    /* 006938f6: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 006938f9: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 006938fd: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 00693900: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00693903: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00693906: fadd dword ptr [ebx + ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_ecx));
    /* 00693909: fcom dword ptr [esi + 0x6c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x6cu))); 
    /* 0069390c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069390e: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693913: jne 0x69391a */ if (!fZ) goto L_0069391a;
L_00693915:; BB(0x00693915);
    /* 00693915: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693917: fld dword ptr [esi + 0x6c] */ FPUSH(R_F32((u32)(r_esi+0x6cu)));
L_0069391a:; BB(0x0069391a);
    /* 0069391a: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0069391e: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00693920: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00693924: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 00693928: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069392a: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069392f: je 0x693937 */ if (fZ) goto L_00693937;
L_00693931:; BB(0x00693931);
    /* 00693931: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693933: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
L_00693937:; BB(0x00693937);
    /* 00693937: fstp dword ptr [ecx + ebp] */ W_F32((u32)(r_ecx+r_ebp), ST(0)); FPOP();
    /* 0069393a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069393e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069393f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693942: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693944: jl 0x6938f6 */ if ((fS!=fO)) goto L_006938f6;
L_00693946:; BB(0x00693946);
    /* 00693946: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00693947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00693948: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00693949:; BB(0x00693949);
    /* 00693949: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069394a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069394d: ret  */ FN_RET(0x006938c0); r_esp += 4; return;
}

void f_00693950(void) /* sub_693950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693950);
    /* 00693950: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00693953: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00693957: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693958: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0069395c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069395d: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00693961: mov ecx, dword ptr [ebp + 0x484] */ r_ecx = R32((u32)(r_ebp+0x484u));
    /* 00693967: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00693969: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069396c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069396d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069396e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00693972: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x693977u); f_00690e40();
    /* 00693977: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0069397a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069397d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00693981: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00693989: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0069398b: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 0069398e: lea edx, [ecx + ecx*4] */ r_edx = (u32)(r_ecx+r_ecx*4);
    /* 00693991: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00693995: mov edx, dword ptr [ecx + edx*4 + 0xa0] */ r_edx = R32((u32)(r_ecx+r_edx*4+0xa0u));
    /* 0069399c: mov ecx, dword ptr [ebp + 0x484] */ r_ecx = R32((u32)(r_ebp+0x484u));
    /* 006939a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006939a4: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006939a8: jle 0x693a94 */ if ((fZ||fS!=fO)) goto L_00693a94;
L_006939ae:; BB(0x006939ae);
    /* 006939ae: add ebp, 0x888 */ {  u32 a = r_ebp; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006939b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006939b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006939b6: mov ebx, eax */ r_ebx = r_eax;
    /* 006939b8: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
L_006939bc:; BB(0x006939bc);
    /* 006939bc: mov ecx, dword ptr [ebp - 0x400] */ r_ecx = R32((u32)(r_ebp+0xfffffc00u));
    /* 006939c2: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006939c6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006939c9: mov edi, dword ptr [eax + ecx*4] */ r_edi = R32((u32)(r_eax+r_ecx*4));
    /* 006939cc: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006939d0: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 006939d3: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 006939d7: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006939db: lea eax, [ecx*4] */ r_eax = (u32)(r_ecx*4);
    /* 006939e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006939e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006939e4: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 006939e8: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x6939edu); f_00690e40();
    /* 006939ed: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 006939ef: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 006939f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006939f6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006939f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006939fa: jle 0x693a32 */ if ((fZ||fS!=fO)) goto L_00693a32;
L_006939fc:; BB(0x006939fc);
    /* 006939fc: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00693a00: mov ecx, edi */ r_ecx = r_edi;
    /* 00693a02: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00693a04: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00693a08: jmp 0x693a0e */ goto L_00693a0e;
L_00693a0a:; BB(0x00693a0a);
    /* 00693a0a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00693a0e:; BB(0x00693a0e);
    /* 00693a0e: mov eax, dword ptr [eax + edi] */ r_eax = R32((u32)(r_eax+r_edi));
    /* 00693a11: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00693a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693a14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693a15: call 0x693aa0 */ r_esp -= 4; W32(r_esp, 0x693a1au); f_00693aa0();
    /* 00693a1a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00693a1c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00693a20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693a23: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00693a26: fstp dword ptr [edx + esi*4] */ W_F32((u32)(r_edx+r_esi*4), ST(0)); FPOP();
    /* 00693a29: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00693a2a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693a2c: jl 0x693a0a */ if ((fS!=fO)) goto L_00693a0a;
L_00693a2e:; BB(0x00693a2e);
    /* 00693a2e: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
L_00693a32:; BB(0x00693a32);
    /* 00693a32: cmp esi, dword ptr [esp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693a36: jge 0x693a69 */ if ((fS==fO)) goto L_00693a69;
L_00693a38:; BB(0x00693a38);
    /* 00693a38: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00693a3c: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00693a40: lea edi, [edi + esi*4] */ r_edi = (u32)(r_edi+r_esi*4);
    /* 00693a43: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_00693a45:; BB(0x00693a45);
    /* 00693a45: mov eax, dword ptr [edi + ebp] */ r_eax = R32((u32)(r_edi+r_ebp));
    /* 00693a48: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00693a4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693a4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693a4c: call 0x693b70 */ r_esp -= 4; W32(r_esp, 0x693a51u); f_00693b70();
    /* 00693a51: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00693a53: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00693a57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693a5a: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00693a5d: fstp dword ptr [edx + esi*4] */ W_F32((u32)(r_edx+r_esi*4), ST(0)); FPOP();
    /* 00693a60: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00693a61: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693a63: jl 0x693a45 */ if ((fS!=fO)) goto L_00693a45;
L_00693a65:; BB(0x00693a65);
    /* 00693a65: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_00693a69:; BB(0x00693a69);
    /* 00693a69: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00693a6d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00693a71: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693a72: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00693a75: mov edx, dword ptr [ecx + 0x484] */ r_edx = R32((u32)(r_ecx+0x484u));
    /* 00693a7b: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00693a7e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693a80: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00693a84: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00693a88: jl 0x6939bc */ if ((fS!=fO)) goto L_006939bc;
L_00693a8e:; BB(0x00693a8e);
    /* 00693a8e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00693a92: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693a93: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00693a94:; BB(0x00693a94);
    /* 00693a94: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00693a95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00693a96: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693a99: ret  */ FN_RET(0x00693950); r_esp += 4; return;
}

void f_00693aa0(void) /* sub_693AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693aa0);
    /* 00693aa0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693aa4: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00693aaa: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693aae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693ab0: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00693ab6: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693abb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693abd: jne 0x693b18 */ if (!fZ) goto L_00693b18;
L_00693abf:; BB(0x00693abf);
    /* 00693abf: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693ac4: jne 0x693adb */ if (!fZ) goto L_00693adb;
L_00693ac6:; BB(0x00693ac6);
    /* 00693ac6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693aca: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00693ace: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693ad2: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00693ad6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00693ad8: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00693ada: ret  */ FN_RET(0x00693aa0); r_esp += 4; return;
L_00693adb:; BB(0x00693adb);
    /* 00693adb: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693adf: fchs  */ ST(0) = -ST(0);
    /* 00693ae1: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 00693ae5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693ae7: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693aea: jp 0x693b01 */ if (fP) goto L_00693b01;
L_00693aec:; BB(0x00693aec);
    /* 00693aec: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693af0: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00693af4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693af8: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00693afc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693afe: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00693b00: ret  */ FN_RET(0x00693aa0); r_esp += 4; return;
L_00693b01:; BB(0x00693b01);
    /* 00693b01: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693b05: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00693b09: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693b0d: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00693b11: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693b13: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00693b15: fchs  */ ST(0) = -ST(0);
    /* 00693b17: ret  */ FN_RET(0x00693aa0); r_esp += 4; return;
L_00693b18:; BB(0x00693b18);
    /* 00693b18: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693b1c: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693b1f: jp 0x693b34 */ if (fP) goto L_00693b34;
L_00693b21:; BB(0x00693b21);
    /* 00693b21: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00693b25: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693b29: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00693b2d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00693b2f: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00693b31: fchs  */ ST(0) = -ST(0);
    /* 00693b33: ret  */ FN_RET(0x00693aa0); r_esp += 4; return;
L_00693b34:; BB(0x00693b34);
    /* 00693b34: fchs  */ ST(0) = -ST(0);
    /* 00693b36: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00693b3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693b3c: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693b41: jne 0x693b5a */ if (!fZ) goto L_00693b5a;
L_00693b43:; BB(0x00693b43);
    /* 00693b43: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693b47: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00693b4b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693b4f: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00693b53: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693b55: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00693b57: fchs  */ ST(0) = -ST(0);
    /* 00693b59: ret  */ FN_RET(0x00693aa0); r_esp += 4; return;
L_00693b5a:; BB(0x00693b5a);
    /* 00693b5a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693b5e: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00693b62: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693b66: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00693b6a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693b6c: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00693b6e: ret  */ FN_RET(0x00693aa0); r_esp += 4; return;
}

void f_00693b70(void) /* sub_693B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693b70);
    /* 00693b70: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693b74: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00693b7a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693b7e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693b80: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00693b86: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693b8b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693b8d: jne 0x693bbe */ if (!fZ) goto L_00693bbe;
L_00693b8f:; BB(0x00693b8f);
    /* 00693b8f: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693b94: je 0x693bed */ if (fZ) goto L_00693bed;
L_00693b96:; BB(0x00693b96);
    /* 00693b96: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693b9a: fchs  */ ST(0) = -ST(0);
    /* 00693b9c: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 00693ba0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693ba4: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00693ba8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693bac: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00693bb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693bb2: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693bb5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00693bb7: jnp 0x693bff */ if (!fP) goto L_00693bff;
L_00693bb9:; BB(0x00693bb9);
    /* 00693bb9: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00693bbb: fchs  */ ST(0) = -ST(0);
    /* 00693bbd: ret  */ FN_RET(0x00693b70); r_esp += 4; return;
L_00693bbe:; BB(0x00693bbe);
    /* 00693bbe: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693bc2: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693bc5: jnp 0x693bda */ if (!fP) goto L_00693bda;
L_00693bc7:; BB(0x00693bc7);
    /* 00693bc7: fchs  */ ST(0) = -ST(0);
    /* 00693bc9: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00693bcd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693bcf: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693bd4: jne 0x693bed */ if (!fZ) goto L_00693bed;
L_00693bd6:; BB(0x00693bd6);
    /* 00693bd6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
L_00693bda:; BB(0x00693bda);
    /* 00693bda: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00693bde: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693be2: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00693be6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00693be8: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00693bea: fchs  */ ST(0) = -ST(0);
    /* 00693bec: ret  */ FN_RET(0x00693b70); r_esp += 4; return;
L_00693bed:; BB(0x00693bed);
    /* 00693bed: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00693bf1: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00693bf5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00693bf9: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00693bfd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00693bff:; BB(0x00693bff);
    /* 00693bff: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 00693c01: ret  */ FN_RET(0x00693b70); r_esp += 4; return;
}

void f_00693c10(void) /* sub_693C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693c10);
    /* 00693c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00693c13: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00693c16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693c17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693c18: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00693c1b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693c1c: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00693c1f: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00693c25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693c27: je 0x693d4d */ if (fZ) goto L_00693d4d;
L_00693c2d:; BB(0x00693c2d);
    /* 00693c2d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00693c30: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00693c32: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00693c35: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00693c38: mov eax, dword ptr [edx + 0x484] */ r_eax = R32((u32)(r_edx+0x484u));
    /* 00693c3e: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00693c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693c42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693c43: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x693c48u); f_00690e40();
    /* 00693c48: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00693c4b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00693c4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693c51: mov esi, dword ptr [edx + 0x200] */ r_esi = R32((u32)(r_edx+0x200u));
    /* 00693c57: lea eax, [esi*4] */ r_eax = (u32)(r_esi*4);
    /* 00693c5e: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693c61: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00693c63: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x693c68u); f_00687340();
    /* 00693c68: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00693c6b: mov edi, esp */ r_edi = r_esp;
    /* 00693c6d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00693c6f: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00693c72: mov ecx, dword ptr [eax + 0x484] */ r_ecx = R32((u32)(r_eax+0x484u));
    /* 00693c78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693c7a: jle 0x693d40 */ if ((fZ||fS!=fO)) goto L_00693d40;
L_00693c80:; BB(0x00693c80);
    /* 00693c80: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00693c83: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00693c86:; BB(0x00693c86);
    /* 00693c86: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00693c89: lea eax, [edx*4] */ r_eax = (u32)(r_edx*4);
    /* 00693c90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693c91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00693c94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693c95: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x693c9au); f_00690e40();
    /* 00693c9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00693c9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693ca0: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00693ca2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00693ca5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00693ca7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693ca9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00693cac: jle 0x693d25 */ if ((fZ||fS!=fO)) goto L_00693d25;
L_00693cae:; BB(0x00693cae);
    /* 00693cae: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_00693cb1:; BB(0x00693cb1);
    /* 00693cb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00693cb3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693cb5: jle 0x693ccd */ if ((fZ||fS!=fO)) goto L_00693ccd;
L_00693cb7:; BB(0x00693cb7);
    /* 00693cb7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
L_00693cba:; BB(0x00693cba);
    /* 00693cba: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00693cbd: mov edx, dword ptr [edx + ebx*4] */ r_edx = R32((u32)(r_edx+r_ebx*4));
    /* 00693cc0: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693cc2: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693cc5: mov dword ptr [edi + eax*4], edx */ W32((u32)(r_edi+r_eax*4), r_edx);
    /* 00693cc8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693cc9: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693ccb: jl 0x693cba */ if ((fS!=fO)) goto L_00693cba;
L_00693ccd:; BB(0x00693ccd);
    /* 00693ccd: push 0x693d60 */ { u32 v = 0x693d60u; r_esp -= 4; W32(r_esp, v); }
    /* 00693cd2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00693cd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693cd5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693cd6: call 0x686ed8 */ r_esp -= 4; W32(r_esp, 0x693cdbu); f_00686ed8();
    /* 00693cdb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693cde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00693ce0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693ce2: jle 0x693d07 */ if ((fZ||fS!=fO)) goto L_00693d07;
L_00693ce4:; BB(0x00693ce4);
    /* 00693ce4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
L_00693ce7:; BB(0x00693ce7);
    /* 00693ce7: mov edx, dword ptr [edi + eax*4] */ r_edx = R32((u32)(r_edi+r_eax*4));
    /* 00693cea: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00693ced: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693cf0: sub edx, dword ptr [edi + ebx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+r_ebx*4)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00693cf3: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00693cf6: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 00693cf8: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00693cfb: mov dword ptr [ecx + edi - 4], edx */ W32((u32)(r_ecx+r_edi+0xfffffffcu), r_edx);
    /* 00693cff: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00693d02: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693d03: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693d05: jl 0x693ce7 */ if ((fS!=fO)) goto L_00693ce7;
L_00693d07:; BB(0x00693d07);
    /* 00693d07: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00693d0a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00693d0d: lea eax, [esi*4] */ r_eax = (u32)(r_esi*4);
    /* 00693d14: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693d16: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693d18: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00693d1b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693d1d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00693d20: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00693d23: jl 0x693cb1 */ if ((fS!=fO)) goto L_00693cb1;
L_00693d25:; BB(0x00693d25);
    /* 00693d25: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00693d28: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00693d2b: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00693d2c: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693d2f: mov ecx, dword ptr [eax + 0x484] */ r_ecx = R32((u32)(r_eax+0x484u));
    /* 00693d35: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00693d38: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693d3a: jl 0x693c86 */ if ((fS!=fO)) goto L_00693c86;
L_00693d40:; BB(0x00693d40);
    /* 00693d40: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00693d43: lea esp, [ebp - 0x20] */ r_esp = (u32)(r_ebp+0xffffffe0u);
    /* 00693d46: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693d47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00693d48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00693d49: mov esp, ebp */ r_esp = r_ebp;
    /* 00693d4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00693d4c: ret  */ FN_RET(0x00693c10); r_esp += 4; return;
L_00693d4d:; BB(0x00693d4d);
    /* 00693d4d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00693d4f: lea esp, [ebp - 0x20] */ r_esp = (u32)(r_ebp+0xffffffe0u);
    /* 00693d52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693d53: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00693d54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00693d55: mov esp, ebp */ r_esp = r_ebp;
    /* 00693d57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00693d58: ret  */ FN_RET(0x00693c10); r_esp += 4; return;
}

void f_00693d60(void) /* sub_693D60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693d60);
    /* 00693d60: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00693d64: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00693d68: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00693d6a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00693d6c: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00693d6e: fabs  */ ST(0) = fabsl(ST(0));
    /* 00693d70: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00693d72: fabs  */ ST(0) = fabsl(ST(0));
    /* 00693d74: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00693d76: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00693d78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693d7a: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693d7d: jp 0x693d86 */ if (fP) goto L_00693d86;
L_00693d7f:; BB(0x00693d7f);
    /* 00693d7f: mov edx, 1 */ r_edx = 0x1u;
    /* 00693d84: jmp 0x693d88 */ goto L_00693d88;
L_00693d86:; BB(0x00693d86);
    /* 00693d86: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00693d88:; BB(0x00693d88);
    /* 00693d88: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693d8a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00693d8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693d8e: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693d93: jne 0x693d9f */ if (!fZ) goto L_00693d9f;
L_00693d95:; BB(0x00693d95);
    /* 00693d95: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00693d9a: mov eax, edx */ r_eax = r_edx;
    /* 00693d9c: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00693d9e: ret  */ FN_RET(0x00693d60); r_esp += 4; return;
L_00693d9f:; BB(0x00693d9f);
    /* 00693d9f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00693da1: mov eax, edx */ r_eax = r_edx;
    /* 00693da3: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00693da5: ret  */ FN_RET(0x00693d60); r_esp += 4; return;
}

void f_00693db0(void) /* sub_693DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693db0);
    /* 00693db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00693db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693db4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00693db7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693db8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693db9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693dba: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00693dbd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00693dbf: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00693dc2: mov esi, dword ptr [ebx + 0x200] */ r_esi = R32((u32)(r_ebx+0x200u));
    /* 00693dc8: lea eax, [esi*4] */ r_eax = (u32)(r_esi*4);
    /* 00693dcf: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693dd2: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00693dd4: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x693dd9u); f_00687340();
    /* 00693dd9: mov ebx, dword ptr [ebx + 0x1fc] */ r_ebx = R32((u32)(r_ebx+0x1fcu));
    /* 00693ddf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00693de2: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693de4: mov edi, esp */ r_edi = r_esp;
    /* 00693de6: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00693de9: jge 0x693e53 */ if ((fS==fO)) goto L_00693e53;
L_00693deb:; BB(0x00693deb);
    /* 00693deb: jmp 0x693df0 */ goto L_00693df0;
L_00693ded:; BB(0x00693ded);
    /* 00693ded: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00693df0:; BB(0x00693df0);
    /* 00693df0: lea edx, [ebx + esi] */ r_edx = (u32)(r_ebx+r_esi);
    /* 00693df3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693df5: jle 0x693dfb */ if ((fZ||fS!=fO)) goto L_00693dfb;
L_00693df7:; BB(0x00693df7);
    /* 00693df7: mov esi, eax */ r_esi = r_eax;
    /* 00693df9: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_00693dfb:; BB(0x00693dfb);
    /* 00693dfb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00693dfd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693dff: jle 0x693e12 */ if ((fZ||fS!=fO)) goto L_00693e12;
L_00693e01:; BB(0x00693e01);
    /* 00693e01: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00693e04: lea ecx, [ecx + ebx*4] */ r_ecx = (u32)(r_ecx+r_ebx*4);
L_00693e07:; BB(0x00693e07);
    /* 00693e07: mov dword ptr [edi + eax*4], ecx */ W32((u32)(r_edi+r_eax*4), r_ecx);
    /* 00693e0a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693e0b: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693e0e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693e10: jl 0x693e07 */ if ((fS!=fO)) goto L_00693e07;
L_00693e12:; BB(0x00693e12);
    /* 00693e12: push 0x693d60 */ { u32 v = 0x693d60u; r_esp -= 4; W32(r_esp, v); }
    /* 00693e17: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00693e19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693e1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693e1b: call 0x686ed8 */ r_esp -= 4; W32(r_esp, 0x693e20u); f_00686ed8();
    /* 00693e20: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693e23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00693e25: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693e27: jle 0x693e4a */ if ((fZ||fS!=fO)) goto L_00693e4a;
L_00693e29:; BB(0x00693e29);
    /* 00693e29: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00693e2c: mov edx, ebx */ r_edx = r_ebx;
    /* 00693e2e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00693e30: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00693e33: lea ecx, [ecx + edx*4] */ r_ecx = (u32)(r_ecx+r_edx*4);
L_00693e36:; BB(0x00693e36);
    /* 00693e36: mov edx, dword ptr [edi + eax*4] */ r_edx = R32((u32)(r_edi+r_eax*4));
    /* 00693e39: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693e3c: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00693e3f: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00693e42: mov dword ptr [ecx - 4], edx */ W32((u32)(r_ecx+0xfffffffcu), r_edx);
    /* 00693e45: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693e46: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693e48: jl 0x693e36 */ if ((fS!=fO)) goto L_00693e36;
L_00693e4a:; BB(0x00693e4a);
    /* 00693e4a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00693e4d: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00693e4f: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693e51: jl 0x693ded */ if ((fS!=fO)) goto L_00693ded;
L_00693e53:; BB(0x00693e53);
    /* 00693e53: lea esp, [ebp - 0x10] */ r_esp = (u32)(r_ebp+0xfffffff0u);
    /* 00693e56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693e57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00693e58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00693e59: mov esp, ebp */ r_esp = r_ebp;
    /* 00693e5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00693e5c: ret  */ FN_RET(0x00693db0); r_esp += 4; return;
}

void f_00693e60(void) /* sub_693E60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00693e60);
    /* 00693e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00693e63: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00693e66: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00693e69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00693e6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693e6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693e6e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693e6f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00693e72: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00693e74: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00693e76: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00693e7a: mov eax, dword ptr [ecx + 0x1fc] */ r_eax = R32((u32)(r_ecx+0x1fcu));
    /* 00693e80: mov ebx, dword ptr [ecx + 0x200] */ r_ebx = R32((u32)(r_ecx+0x200u));
    /* 00693e86: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693e88: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00693e8c: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 00693e90: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00693e94: jle 0x693e9c */ if ((fZ||fS!=fO)) goto L_00693e9c;
L_00693e96:; BB(0x00693e96);
    /* 00693e96: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00693e9a: mov eax, edi */ r_eax = r_edi;
L_00693e9c:; BB(0x00693e9c);
    /* 00693e9c: mov esi, dword ptr [ecx + 0x1f4] */ r_esi = R32((u32)(r_ecx+0x1f4u));
    /* 00693ea2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693ea4: je 0x69401c */ if (fZ) goto L_0069401c;
L_00693eaa:; BB(0x00693eaa);
    /* 00693eaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693eac: jle 0x693ef7 */ if ((fZ||fS!=fO)) goto L_00693ef7;
L_00693eae:; BB(0x00693eae);
    /* 00693eae: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00693eb1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00693eb4: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00693eb6: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00693eba: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00693ebe: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00693ec2: jmp 0x693ec8 */ goto L_00693ec8;
L_00693ec4:; BB(0x00693ec4);
    /* 00693ec4: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
L_00693ec8:; BB(0x00693ec8);
    /* 00693ec8: fld dword ptr [ecx + esi] */ FPUSH(R_F32((u32)(r_ecx+r_esi)));
    /* 00693ecb: fadd dword ptr [0x6b3654] */ ST(0) = ST(0) + R_F32((u32)(0x6b3654u));
    /* 00693ed1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00693ed4: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00693ed7: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x693edcu); f_00686fb4();
    /* 00693edc: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00693ede: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00693ee2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693ee5: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00693ee8: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693ee9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00693eed: jne 0x693ec4 */ if (!fZ) goto L_00693ec4;
L_00693eef:; BB(0x00693eef);
    /* 00693eef: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00693ef3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
L_00693ef7:; BB(0x00693ef7);
    /* 00693ef7: lea ecx, [ebx + edx] */ r_ecx = (u32)(r_ebx+r_edx);
    /* 00693efa: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693efc: jg 0x69401c */ if ((!fZ&&fS==fO)) goto L_0069401c;
L_00693f02:; BB(0x00693f02);
    /* 00693f02: mov esi, edx */ r_esi = r_edx;
    /* 00693f04: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00693f08: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00693f0a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00693f0d: lea eax, [eax + esi*4] */ r_eax = (u32)(r_eax+r_esi*4);
    /* 00693f10: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_00693f14:; BB(0x00693f14);
    /* 00693f14: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 00693f1a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693f1c: mov eax, edx */ r_eax = r_edx;
    /* 00693f1e: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 00693f22: jge 0x693f3c */ if ((fS==fO)) goto L_00693f3c;
L_00693f24:; BB(0x00693f24);
    /* 00693f24: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00693f27: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693f28: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693f2a: fld dword ptr [esi + eax*4 - 4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4+0xfffffffcu)));
    /* 00693f2e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00693f30: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00693f32: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00693f34: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693f36: jl 0x693f24 */ if ((fS!=fO)) goto L_00693f24;
L_00693f38:; BB(0x00693f38);
    /* 00693f38: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
L_00693f3c:; BB(0x00693f3c);
    /* 00693f3c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00693f3e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693f40: jle 0x694082 */ if ((fZ||fS!=fO)) goto L_00694082;
L_00693f46:; BB(0x00693f46);
    /* 00693f46: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00693f4a: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
L_00693f4e:; BB(0x00693f4e);
    /* 00693f4e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00693f52: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00693f55: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00693f57: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 00693f5a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00693f5c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00693f5e: fcomp dword ptr [0x6e5770] */ fx_compare(ST(0), R_F32((u32)(0x6e5770u))); FPOP();
    /* 00693f64: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693f66: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00693f6b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693f6d: jne 0x693f9e */ if (!fZ) goto L_00693f9e;
L_00693f6f:; BB(0x00693f6f);
    /* 00693f6f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693f71: fld dword ptr [ecx + esi*4] */ FPUSH(R_F32((u32)(r_ecx+r_esi*4)));
    /* 00693f74: fadd dword ptr [0x6b3654] */ ST(0) = ST(0) + R_F32((u32)(0x6b3654u));
    /* 00693f7a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00693f7d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00693f80: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x693f85u); f_00686fb4();
    /* 00693f85: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00693f88: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00693f8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693f8e: fstp dword ptr [ecx + esi*4] */ W_F32((u32)(r_ecx+r_esi*4), ST(0)); FPOP();
    /* 00693f91: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 00693f94: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00693f96: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00693f98: fsubr dword ptr [esp + 0x10] */ ST(0) = R_F32((u32)(r_esp+0x10u)) - ST(0);
    /* 00693f9c: jmp 0x693fcf */ goto L_00693fcf;
L_00693f9e:; BB(0x00693f9e);
    /* 00693f9e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00693fa2: fcomp qword ptr [eax + 0x208] */ fx_compare(ST(0), R_F64((u32)(r_eax+0x208u))); FPOP();
    /* 00693fa8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693faa: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693fad: jnp 0x694053 */ if (!fP) goto L_00694053;
L_00693fb3:; BB(0x00693fb3);
    /* 00693fb3: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 00693fb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00693fb7: call 0x694090 */ r_esp -= 4; W32(r_esp, 0x693fbcu); f_00694090();
    /* 00693fbc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00693fbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693fc2: fstp dword ptr [edx + esi*4] */ W_F32((u32)(r_edx+r_esi*4), ST(0)); FPOP();
    /* 00693fc5: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00693fc9: fsub qword ptr [0x6b2c48] */ ST(0) = ST(0) - R_F64((u32)(0x6b2c48u));
L_00693fcf:; BB(0x00693fcf);
    /* 00693fcf: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00693fd3: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00693fd7: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 00693fdb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00693fdc: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693fdf: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693fe1: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00693fe5: jl 0x693f4e */ if ((fS!=fO)) goto L_00693f4e;
L_00693feb:; BB(0x00693feb);
    /* 00693feb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00693fed:; BB(0x00693fed);
    /* 00693fed: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
L_00693ff1:; BB(0x00693ff1);
    /* 00693ff1: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00693ff5: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 00693ffc: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00693ffe: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00694002: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694004: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00694006: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694008: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0069400c: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 00694010: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00694014: jle 0x693f14 */ if ((fZ||fS!=fO)) goto L_00693f14;
L_0069401a:; BB(0x0069401a);
    /* 0069401a: mov edi, eax */ r_edi = r_eax;
L_0069401c:; BB(0x0069401c);
    /* 0069401c: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069401e: jge 0x69404c */ if ((fS==fO)) goto L_0069404c;
L_00694020:; BB(0x00694020);
    /* 00694020: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00694023: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00694026: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00694028: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069402a: lea esi, [eax + edx*4] */ r_esi = (u32)(r_eax+r_edx*4);
L_0069402d:; BB(0x0069402d);
    /* 0069402d: fld dword ptr [esi + ebx] */ FPUSH(R_F32((u32)(r_esi+r_ebx)));
    /* 00694030: fadd dword ptr [0x6b3654] */ ST(0) = ST(0) + R_F32((u32)(0x6b3654u));
    /* 00694036: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00694039: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0069403c: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x694041u); f_00686fb4();
    /* 00694041: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00694043: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00694046: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00694049: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0069404a: jne 0x69402d */ if (!fZ) goto L_0069402d;
L_0069404c:; BB(0x0069404c);
    /* 0069404c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069404d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069404e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069404f: mov esp, ebp */ r_esp = r_ebp;
    /* 00694051: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00694052: ret  */ FN_RET(0x00693e60); r_esp += 4; return;
L_00694053:; BB(0x00694053);
    /* 00694053: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00694055: jge 0x693fed */ if ((fS==fO)) goto L_00693fed;
L_00694057:; BB(0x00694057);
    /* 00694057: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0069405b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0069405e: mov eax, edi */ r_eax = r_edi;
    /* 00694060: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00694062: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00694064: lea ecx, [ecx + eax*4] */ r_ecx = (u32)(r_ecx+r_eax*4);
    /* 00694067: mov eax, ebx */ r_eax = r_ebx;
    /* 00694069: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0069406b:; BB(0x0069406b);
    /* 0069406b: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0069406d: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 00694070: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00694073: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00694074: mov dword ptr [edi + esi*4], 0 */ W32((u32)(r_edi+r_esi*4), 0x0u);
    /* 0069407b: jne 0x69406b */ if (!fZ) goto L_0069406b;
L_0069407d:; BB(0x0069407d);
    /* 0069407d: jmp 0x693fed */ goto L_00693fed;
L_00694082:; BB(0x00694082);
    /* 00694082: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00694084: jmp 0x693ff1 */ goto L_00693ff1;
}

