#include "protos.h"

void f_00692430(void) /* sub_692430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00692430);
    /* 00692430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692431: mov ebp, esp */ r_ebp = r_esp;
    /* 00692433: mov eax, 0x7f0c */ r_eax = 0x7f0cu;
    /* 00692438: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x69243du); f_00687340();
    /* 0069243d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00692440: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692441: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00692444: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692447: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692448: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692449: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069244b: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x692450u); f_00687340();
    /* 00692450: mov dword ptr [ebp - 0x1c], esp */ W32((u32)(r_ebp+0xffffffe4u), r_esp);
    /* 00692453: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00692455: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x69245au); f_006872fa();
    /* 0069245a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069245d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00692460: mov ecx, 0x1dc0 */ r_ecx = 0x1dc0u;
    /* 00692465: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692467: lea edi, [ebp - 0x7f0c] */ r_edi = (u32)(r_ebp+0xffff80f4u);
    /* 0069246d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00692470: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00692472: lea ecx, [ebp - 0x7f0c] */ r_ecx = (u32)(r_ebp+0xffff80f4u);
    /* 00692478: mov dword ptr [ebp - 0x14], 0x781ac8 */ W32((u32)(r_ebp+0xffffffecu), 0x781ac8u);
    /* 0069247f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00692482: mov dword ptr [ebp - 0x18], 0x781968 */ W32((u32)(r_ebp+0xffffffe8u), 0x781968u);
L_00692489:; BB(0x00692489);
    /* 00692489: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069248c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0069248e:; BB(0x0069248e);
    /* 0069248e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00692491: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00692493: fld dword ptr [0x6e57a0] */ FPUSH(R_F32((u32)(0x6e57a0u)));
    /* 00692499: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069249b: mov edi, 4 */ r_edi = 0x4u;
L_006924a0:; BB(0x006924a0);
    /* 006924a0: cmp edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006924a3: jge 0x6924b6 */ if ((fS==fO)) goto L_006924b6;
L_006924a5:; BB(0x006924a5);
    /* 006924a5: fcom dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); 
    /* 006924a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006924a9: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006924ae: jne 0x6924cd */ if (!fZ) goto L_006924cd;
L_006924b0:; BB(0x006924b0);
    /* 006924b0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006924b2: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 006924b4: jmp 0x6924cd */ goto L_006924cd;
L_006924b6:; BB(0x006924b6);
    /* 006924b6: fcom dword ptr [0x781ac4] */ fx_compare(ST(0), R_F32((u32)(0x781ac4u))); 
    /* 006924bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006924be: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006924c3: jne 0x6924cd */ if (!fZ) goto L_006924cd;
L_006924c5:; BB(0x006924c5);
    /* 006924c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006924c7: fld dword ptr [0x781ac4] */ FPUSH(R_F32((u32)(0x781ac4u)));
L_006924cd:; BB(0x006924cd);
    /* 006924cd: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006924d0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006924d1: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006924d2: jne 0x6924a0 */ if (!fZ) goto L_006924a0;
L_006924d4:; BB(0x006924d4);
    /* 006924d4: fstp dword ptr [ebp + esi*4 - 0x10c] */ W_F32((u32)(r_ebp+r_esi*4+0xfffffef4u), ST(0)); FPOP();
    /* 006924db: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006924dc: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006924df: cmp esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006924e2: jl 0x69248e */ if ((fS!=fO)) goto L_0069248e;
L_006924e4:; BB(0x006924e4);
    /* 006924e4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006924e7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006924ea: mov ecx, 0x150 */ r_ecx = 0x150u;
    /* 006924ef: mov esi, edx */ r_esi = r_edx;
    /* 006924f1: lea edi, [eax + 0x1c0] */ r_edi = (u32)(r_eax+0x1c0u);
    /* 006924f7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006924f9: mov ecx, 0x38 */ r_ecx = 0x38u;
    /* 006924fe: mov esi, edx */ r_esi = r_edx;
    /* 00692500: mov edi, eax */ r_edi = r_eax;
    /* 00692502: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00692504: lea edi, [eax + 0xe0] */ r_edi = (u32)(r_eax+0xe0u);
    /* 0069250a: mov ecx, 0x38 */ r_ecx = 0x38u;
    /* 0069250f: mov esi, edx */ r_esi = r_edx;
    /* 00692511: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00692514: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00692516: mov edi, 8 */ r_edi = 0x8u;
L_0069251b:; BB(0x0069251b);
    /* 0069251b: mov esi, 0x10 */ r_esi = 0x10u;
    /* 00692520: mov ecx, eax */ r_ecx = r_eax;
L_00692522:; BB(0x00692522);
    /* 00692522: mov eax, esi */ r_eax = r_esi;
    /* 00692524: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00692525: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692527: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00692529: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0069252c: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 0069252f: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00692532: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 00692535: fcom qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); 
    /* 0069253b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069253d: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00692540: jp 0x69255c */ if (fP) goto L_0069255c;
L_00692542:; BB(0x00692542);
    /* 00692542: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00692545: fcomp dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); FPOP();
    /* 0069254b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069254d: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00692552: jne 0x69255c */ if (!fZ) goto L_0069255c;
L_00692554:; BB(0x00692554);
    /* 00692554: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00692556: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
L_0069255c:; BB(0x0069255c);
    /* 0069255c: fcom qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); 
    /* 00692562: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692564: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00692569: jne 0x692583 */ if (!fZ) goto L_00692583;
L_0069256b:; BB(0x0069256b);
    /* 0069256b: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0069256e: fcomp dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); FPOP();
    /* 00692574: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692576: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00692579: jp 0x692583 */ if (fP) goto L_00692583;
L_0069257b:; BB(0x0069257b);
    /* 0069257b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069257d: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
L_00692583:; BB(0x00692583);
    /* 00692583: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00692585: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00692588: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00692589: cmp esi, -0x28 */ {  u32 a = r_esi; u32 b = 0xffffffd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069258c: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 0069258f: jg 0x692522 */ if ((!fZ&&fS==fO)) goto L_00692522;
L_00692591:; BB(0x00692591);
    /* 00692591: mov eax, ecx */ r_eax = r_ecx;
    /* 00692593: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00692594: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00692597: jne 0x69251b */ if (!fZ) goto L_0069251b;
L_00692599:; BB(0x00692599);
    /* 00692599: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0069259c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006925a3: lea ebx, [ebp - 0x80c] */ r_ebx = (u32)(r_ebp+0xfffff7f4u);
    /* 006925a9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006925ac:; BB(0x006925ac);
    /* 006925ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006925af: mov dword ptr [ebp - 0x10], 2 */ W32((u32)(r_ebp+0xfffffff0u), 0x2u);
    /* 006925b6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006925b9: jl 0x6925be */ if ((fS!=fO)) goto L_006925be;
L_006925bb:; BB(0x006925bb);
    /* 006925bb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006925be:; BB(0x006925be);
    /* 006925be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006925c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006925c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006925c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006925c8: fld dword ptr [ecx + edx] */ FPUSH(R_F32((u32)(r_ecx+r_edx)));
    /* 006925cb: fadd qword ptr [0x6b4b00] */ ST(0) = ST(0) + R_F64((u32)(0x6b4b00u));
    /* 006925d1: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 006925d4: fmul qword ptr [0x6be518] */ ST(0) = ST(0) * R_F64((u32)(0x6be518u));
    /* 006925da: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006925dc: fsub qword ptr [0x6e5798] */ ST(0) = ST(0) - R_F64((u32)(0x6e5798u));
    /* 006925e2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006925e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006925e6: call 0x692c00 */ r_esp -= 4; W32(r_esp, 0x6925ebu); f_00692c00();
    /* 006925eb: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 006925ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006925f1: mov ecx, 0x38 */ r_ecx = 0x38u;
    /* 006925f6: lea esi, [ebp - 0x10c] */ r_esi = (u32)(r_ebp+0xfffffef4u);
    /* 006925fc: mov edi, ebx */ r_edi = r_ebx;
    /* 006925fe: fmul dword ptr [0x6e5790] */ ST(0) = ST(0) * R_F32((u32)(0x6e5790u));
    /* 00692604: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00692606: fsubr qword ptr [0x6b4b00] */ ST(0) = R_F64((u32)(0x6b4b00u)) - ST(0);
    /* 0069260c: fsub qword ptr [0x6e5798] */ ST(0) = ST(0) - R_F64((u32)(0x6e5798u));
    /* 00692612: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00692615: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692616: call 0x692c00 */ r_esp -= 4; W32(r_esp, 0x69261bu); f_00692c00();
    /* 0069261b: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0069261e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069261f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692620: call 0x692bd0 */ r_esp -= 4; W32(r_esp, 0x692625u); f_00692bd0();
    /* 00692625: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00692628: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069262b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069262c: add esi, 0xe0 */ {  u32 a = r_esi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00692632: add ebx, 0xe0 */ {  u32 a = r_ebx; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692638: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069263b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0069263e: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 00692641: jl 0x6925ac */ if ((fS!=fO)) goto L_006925ac;
L_00692647:; BB(0x00692647);
    /* 00692647: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0069264a: lea esi, [ebp - 0x72c] */ r_esi = (u32)(r_ebp+0xfffff8d4u);
    /* 00692650: mov ebx, 7 */ r_ebx = 0x7u;
L_00692655:; BB(0x00692655);
    /* 00692655: lea ecx, [esi - 0xe0] */ r_ecx = (u32)(r_esi+0xffffff20u);
    /* 0069265b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069265c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069265d: call 0x692ba0 */ r_esp -= 4; W32(r_esp, 0x692662u); f_00692ba0();
    /* 00692662: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692663: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692664: call 0x692ba0 */ r_esp -= 4; W32(r_esp, 0x692669u); f_00692ba0();
    /* 00692669: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069266c: add esi, 0xe0 */ {  u32 a = r_esi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00692672: add edi, 0xe0 */ {  u32 a = r_edi; u32 b = 0xe0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00692678: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00692679: jne 0x692655 */ if (!fZ) goto L_00692655;
L_0069267b:; BB(0x0069267b);
    /* 0069267b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069267e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00692681: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00692684: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00692687: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069268a: add edi, 0x540 */ {  u32 a = r_edi; u32 b = 0x540u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00692690: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00692693: cmp eax, 0x781a78 */ {  u32 a = r_eax; u32 b = 0x781a78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692698: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 0069269b: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0069269e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006926a1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006926a4: jl 0x692489 */ if ((fS!=fO)) goto L_00692489;
L_006926aa:; BB(0x006926aa);
    /* 006926aa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006926ad: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006926af: mov dword ptr [ebp + 0x14], esi */ W32((u32)(r_ebp+0x14u), r_esi);
    /* 006926b2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006926b5:; BB(0x006926b5);
    /* 006926b5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006926b7: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x6926bcu); f_006872fa();
    /* 006926bc: fild dword ptr [ebp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x14u)));
    /* 006926bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006926c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006926c3: fmul qword ptr [0x6b2c38] */ ST(0) = ST(0) * R_F64((u32)(0x6b2c38u));
    /* 006926c9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006926cb: fst qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 006926ce: fadd qword ptr [0x6e5760] */ ST(0) = ST(0) + R_F64((u32)(0x6e5760u));
    /* 006926d4: fmul qword ptr [0x6e5758] */ ST(0) = ST(0) * R_F64((u32)(0x6e5758u));
    /* 006926da: fldl2e  */ FPUSH(1.44269504088896340736);
    /* 006926dc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006926de: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006926e0: frndint  */ ST(0) = fx_rint(ST(0));
    /* 006926e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006926e4: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 006926e6: f2xm1  */ ST(0) = exp2l(ST(0)) - 1.0;
    /* 006926e8: fld1  */ FPUSH(1.0);
    /* 006926ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006926ec: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 006926ee: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006926f0: fdiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xcu));
    /* 006926f3: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 006926f6: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x6926fbu); f_00686fb4();
    /* 006926fb: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x692700u); f_00687450();
    /* 00692700: mov edi, eax */ r_edi = r_eax;
    /* 00692702: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00692705: fild dword ptr [ebp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x14u)));
    /* 00692708: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 0069270b: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 00692711: fldln2  */ FPUSH(0.69314718055994530942);
    /* 00692713: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00692715: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 00692717: fmul qword ptr [0x6e5768] */ ST(0) = ST(0) * R_F64((u32)(0x6e5768u));
    /* 0069271d: fsub qword ptr [0x6e5760] */ ST(0) = ST(0) - R_F64((u32)(0x6e5760u));
    /* 00692723: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00692725: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00692728: call 0x686ed2 */ r_esp -= 4; W32(r_esp, 0x69272du); f_00686ed2();
    /* 0069272d: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x692732u); f_00687450();
    /* 00692732: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00692733: mov ebx, eax */ r_ebx = r_eax;
    /* 00692735: mov dword ptr [ebp + 0x18], edi */ W32((u32)(r_ebp+0x18u), r_edi);
    /* 00692738: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
    /* 0069273b: fild dword ptr [ebp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x18u)));
    /* 0069273e: fmul dword ptr [ebp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xcu));
    /* 00692741: fldln2  */ FPUSH(0.69314718055994530942);
    /* 00692743: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00692745: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 00692747: fmul qword ptr [0x6e5768] */ ST(0) = ST(0) * R_F64((u32)(0x6e5768u));
    /* 0069274d: fsub qword ptr [0x6e5760] */ ST(0) = ST(0) - R_F64((u32)(0x6e5760u));
    /* 00692753: fadd st(0), st(0) */ ST(0) = ST(0) + ST(0);
    /* 00692755: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00692758: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x69275du); f_00686fb4();
    /* 0069275d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692760: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x692765u); f_00687450();
    /* 00692765: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692767: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0069276a: jle 0x692771 */ if ((fZ||fS!=fO)) goto L_00692771;
L_0069276c:; BB(0x0069276c);
    /* 0069276c: mov ebx, esi */ r_ebx = r_esi;
    /* 0069276e: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
L_00692771:; BB(0x00692771);
    /* 00692771: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692773: jge 0x69277c */ if ((fS==fO)) goto L_0069277c;
L_00692775:; BB(0x00692775);
    /* 00692775: mov dword ptr [ebp + 0x14], 0 */ W32((u32)(r_ebp+0x14u), 0x0u);
L_0069277c:; BB(0x0069277c);
    /* 0069277c: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069277f: jl 0x692788 */ if ((fS!=fO)) goto L_00692788;
L_00692781:; BB(0x00692781);
    /* 00692781: mov dword ptr [ebp - 0x10], 0x10 */ W32((u32)(r_ebp+0xfffffff0u), 0x10u);
L_00692788:; BB(0x00692788);
    /* 00692788: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069278a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069278b: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0069278e: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
L_00692791:; BB(0x00692791);
    /* 00692791: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00692794: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00692799: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x69279eu); f_006872fa();
    /* 0069279e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006927a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006927a4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006927a6: mov dword ptr [ecx + ebx*4], eax */ W32((u32)(r_ecx+r_ebx*4), r_eax);
    /* 006927a9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006927ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006927ae: jle 0x6927ba */ if ((fZ||fS!=fO)) goto L_006927ba;
L_006927b0:; BB(0x006927b0);
    /* 006927b0: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006927b3: mov eax, 0x4479c000 */ r_eax = 0x4479c000u;
    /* 006927b8: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_006927ba:; BB(0x006927ba);
    /* 006927ba: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006927bd: mov dword ptr [ebp + 0x18], esi */ W32((u32)(r_ebp+0x18u), r_esi);
    /* 006927c0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006927c2: jg 0x692928 */ if ((!fZ&&fS==fO)) goto L_00692928;
L_006927c8:; BB(0x006927c8);
    /* 006927c8: lea eax, [ebx + esi*8] */ r_eax = (u32)(r_ebx+r_esi*8);
    /* 006927cb: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006927ce: lea ecx, [eax*8] */ r_ecx = (u32)(r_eax*8);
    /* 006927d5: lea edx, [eax*8] */ r_edx = (u32)(r_eax*8);
    /* 006927dc: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006927de: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006927e0: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006927e3: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006927e6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006927e9: lea eax, [ebp + edx - 0x7e30] */ r_eax = (u32)(r_ebp+r_edx+0xffff81d0u);
    /* 006927f0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006927f3:; BB(0x006927f3);
    /* 006927f3: fild dword ptr [ebp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x18u)));
    /* 006927f6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006927f8: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 006927fb: fmul qword ptr [0x6b2c38] */ ST(0) = ST(0) * R_F64((u32)(0x6b2c38u));
L_00692801:; BB(0x00692801);
    /* 00692801: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00692804: fmul qword ptr [0x6bf7d8] */ ST(0) = ST(0) * R_F64((u32)(0x6bf7d8u));
    /* 0069280a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0069280c: fld qword ptr [0x6e5788] */ FPUSH(R_F64((u32)(0x6e5788u)));
    /* 00692812: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00692814: fadd qword ptr [0x6e5760] */ ST(0) = ST(0) + R_F64((u32)(0x6e5760u));
    /* 0069281a: fmul qword ptr [0x6e5758] */ ST(0) = ST(0) * R_F64((u32)(0x6e5758u));
    /* 00692820: fldl2e  */ FPUSH(1.44269504088896340736);
    /* 00692822: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00692824: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00692826: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00692828: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069282a: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0069282c: f2xm1  */ ST(0) = exp2l(ST(0)) - 1.0;
    /* 0069282e: fld1  */ FPUSH(1.0);
    /* 00692830: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00692832: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 00692834: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00692836: fdiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xcu));
    /* 00692839: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x69283eu); f_00687450();
    /* 0069283e: fsub qword ptr [0x6e5780] */ ST(0) = ST(0) - R_F64((u32)(0x6e5780u));
    /* 00692844: mov edi, eax */ r_edi = r_eax;
    /* 00692846: fadd qword ptr [0x6e5760] */ ST(0) = ST(0) + R_F64((u32)(0x6e5760u));
    /* 0069284c: fmul qword ptr [0x6e5758] */ ST(0) = ST(0) * R_F64((u32)(0x6e5758u));
    /* 00692852: fldl2e  */ FPUSH(1.44269504088896340736);
    /* 00692854: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00692856: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00692858: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0069285a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069285c: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0069285e: f2xm1  */ ST(0) = exp2l(ST(0)) - 1.0;
    /* 00692860: fld1  */ FPUSH(1.0);
    /* 00692862: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00692864: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 00692866: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00692868: fdiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xcu));
    /* 0069286b: fadd qword ptr [0x6b2c48] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c48u));
    /* 00692871: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x692876u); f_00687450();
    /* 00692876: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692878: mov edx, eax */ r_edx = r_eax;
    /* 0069287a: jge 0x69287e */ if ((fS==fO)) goto L_0069287e;
L_0069287c:; BB(0x0069287c);
    /* 0069287c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0069287e:; BB(0x0069287e);
    /* 0069287e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00692881: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692883: jle 0x692887 */ if ((fZ||fS!=fO)) goto L_00692887;
L_00692885:; BB(0x00692885);
    /* 00692885: mov edi, ecx */ r_edi = r_ecx;
L_00692887:; BB(0x00692887);
    /* 00692887: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692889: jge 0x69288d */ if ((fS==fO)) goto L_0069288d;
L_0069288b:; BB(0x0069288b);
    /* 0069288b: mov esi, edi */ r_esi = r_edi;
L_0069288d:; BB(0x0069288d);
    /* 0069288d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069288f: jge 0x692893 */ if ((fS==fO)) goto L_00692893;
L_00692891:; BB(0x00692891);
    /* 00692891: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00692893:; BB(0x00692893);
    /* 00692893: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692895: jle 0x692899 */ if ((fZ||fS!=fO)) goto L_00692899;
L_00692897:; BB(0x00692897);
    /* 00692897: mov edx, ecx */ r_edx = r_ecx;
L_00692899:; BB(0x00692899);
    /* 00692899: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069289b: jge 0x6928d0 */ if ((fS==fO)) goto L_006928d0;
L_0069289d:; BB(0x0069289d);
    /* 0069289d: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069289f: jge 0x6928d0 */ if ((fS==fO)) goto L_006928d0;
L_006928a1:; BB(0x006928a1);
    /* 006928a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006928a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006928a7: fld dword ptr [ebx + esi*4] */ FPUSH(R_F32((u32)(r_ebx+r_esi*4)));
    /* 006928aa: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006928ac: fcomp dword ptr [ebp + ecx*4 - 0x7f0c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+r_ecx*4+0xffff80f4u))); FPOP();
    /* 006928b3: lea ecx, [ebp + ecx*4 - 0x7f0c] */ r_ecx = (u32)(r_ebp+r_ecx*4+0xffff80f4u);
    /* 006928ba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006928bc: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006928c1: jne 0x6928c8 */ if (!fZ) goto L_006928c8;
L_006928c3:; BB(0x006928c3);
    /* 006928c3: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 006928c5: mov dword ptr [ebx + esi*4], ecx */ W32((u32)(r_ebx+r_esi*4), r_ecx);
L_006928c8:; BB(0x006928c8);
    /* 006928c8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006928cb: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006928cc: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006928ce: jl 0x69289d */ if ((fS!=fO)) goto L_0069289d;
L_006928d0:; BB(0x006928d0);
    /* 006928d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006928d3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006928d4: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006928d7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006928da: jl 0x692801 */ if ((fS!=fO)) goto L_00692801;
L_006928e0:; BB(0x006928e0);
    /* 006928e0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006928e3: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006928e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006928e7: jge 0x692901 */ if ((fS==fO)) goto L_00692901;
L_006928e9:; BB(0x006928e9);
    /* 006928e9: fld dword ptr [ebx + esi*4] */ FPUSH(R_F32((u32)(r_ebx+r_esi*4)));
    /* 006928ec: fcomp dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); FPOP();
    /* 006928ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006928f0: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006928f5: jne 0x6928fc */ if (!fZ) goto L_006928fc;
L_006928f7:; BB(0x006928f7);
    /* 006928f7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006928f9: mov dword ptr [ebx + esi*4], eax */ W32((u32)(r_ebx+r_esi*4), r_eax);
L_006928fc:; BB(0x006928fc);
    /* 006928fc: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006928fd: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006928ff: jl 0x6928e9 */ if ((fS!=fO)) goto L_006928e9;
L_00692901:; BB(0x00692901);
    /* 00692901: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00692904: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00692907: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0069290a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069290b: add edi, 0x1c0 */ {  u32 a = r_edi; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00692911: add edx, 0x700 */ {  u32 a = r_edx; u32 b = 0x700u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00692917: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692919: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0069291c: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 0069291f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00692922: jle 0x6927f3 */ if ((fZ||fS!=fO)) goto L_006927f3;
L_00692928:; BB(0x00692928);
    /* 00692928: cmp dword ptr [ebp - 0xc], 0x11 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069292c: jge 0x692a71 */ if ((fS==fO)) goto L_00692a71;
L_00692932:; BB(0x00692932);
    /* 00692932: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00692934: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00692936: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
L_00692939:; BB(0x00692939);
    /* 00692939: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 0069293c: fmul qword ptr [0x6bf7d8] */ ST(0) = ST(0) * R_F64((u32)(0x6bf7d8u));
    /* 00692942: fadd qword ptr [ebp - 0x28] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffd8u));
    /* 00692945: fld qword ptr [0x6e5788] */ FPUSH(R_F64((u32)(0x6e5788u)));
    /* 0069294b: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 0069294d: fadd qword ptr [0x6e5760] */ ST(0) = ST(0) + R_F64((u32)(0x6e5760u));
    /* 00692953: fmul qword ptr [0x6e5758] */ ST(0) = ST(0) * R_F64((u32)(0x6e5758u));
    /* 00692959: fldl2e  */ FPUSH(1.44269504088896340736);
    /* 0069295b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069295d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069295f: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00692961: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00692963: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00692965: f2xm1  */ ST(0) = exp2l(ST(0)) - 1.0;
    /* 00692967: fld1  */ FPUSH(1.0);
    /* 00692969: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069296b: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0069296d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0069296f: fdiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xcu));
    /* 00692972: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x692977u); f_00687450();
    /* 00692977: fsub qword ptr [0x6e5780] */ ST(0) = ST(0) - R_F64((u32)(0x6e5780u));
    /* 0069297d: mov edi, eax */ r_edi = r_eax;
    /* 0069297f: fadd qword ptr [0x6e5760] */ ST(0) = ST(0) + R_F64((u32)(0x6e5760u));
    /* 00692985: fmul qword ptr [0x6e5758] */ ST(0) = ST(0) * R_F64((u32)(0x6e5758u));
    /* 0069298b: fldl2e  */ FPUSH(1.44269504088896340736);
    /* 0069298d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069298f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00692991: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00692993: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00692995: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00692997: f2xm1  */ ST(0) = exp2l(ST(0)) - 1.0;
    /* 00692999: fld1  */ FPUSH(1.0);
    /* 0069299b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069299d: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 0069299f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006929a1: fdiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xcu));
    /* 006929a4: fadd qword ptr [0x6b2c48] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c48u));
    /* 006929aa: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x6929afu); f_00687450();
    /* 006929af: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006929b1: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 006929b4: jge 0x6929b8 */ if ((fS==fO)) goto L_006929b8;
L_006929b6:; BB(0x006929b6);
    /* 006929b6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006929b8:; BB(0x006929b8);
    /* 006929b8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006929bb: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006929bd: jle 0x6929c1 */ if ((fZ||fS!=fO)) goto L_006929c1;
L_006929bf:; BB(0x006929bf);
    /* 006929bf: mov edi, ecx */ r_edi = r_ecx;
L_006929c1:; BB(0x006929c1);
    /* 006929c1: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006929c3: jge 0x6929c7 */ if ((fS==fO)) goto L_006929c7;
L_006929c5:; BB(0x006929c5);
    /* 006929c5: mov esi, edi */ r_esi = r_edi;
L_006929c7:; BB(0x006929c7);
    /* 006929c7: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006929ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006929cc: jge 0x6929d3 */ if ((fS==fO)) goto L_006929d3;
L_006929ce:; BB(0x006929ce);
    /* 006929ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006929d0: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
L_006929d3:; BB(0x006929d3);
    /* 006929d3: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006929d5: jle 0x6929dc */ if ((fZ||fS!=fO)) goto L_006929dc;
L_006929d7:; BB(0x006929d7);
    /* 006929d7: mov eax, ecx */ r_eax = r_ecx;
    /* 006929d9: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
L_006929dc:; BB(0x006929dc);
    /* 006929dc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006929de: jge 0x692a26 */ if ((fS==fO)) goto L_00692a26;
L_006929e0:; BB(0x006929e0);
    /* 006929e0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006929e3: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
L_006929e6:; BB(0x006929e6);
    /* 006929e6: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006929e8: jge 0x692a26 */ if ((fS==fO)) goto L_00692a26;
L_006929ea:; BB(0x006929ea);
    /* 006929ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006929ed: fld dword ptr [edi + esi*4] */ FPUSH(R_F32((u32)(r_edi+r_esi*4)));
    /* 006929f0: lea eax, [edx + ecx*8] */ r_eax = (u32)(r_edx+r_ecx*8);
    /* 006929f3: lea ecx, [eax*8] */ r_ecx = (u32)(r_eax*8);
    /* 006929fa: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006929fc: lea eax, [ebx + ecx*8] */ r_eax = (u32)(r_ebx+r_ecx*8);
    /* 006929ff: fcomp dword ptr [ebp + eax*4 - 0x7f0c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+r_eax*4+0xffff80f4u))); FPOP();
    /* 00692a06: lea ecx, [ebp + eax*4 - 0x7f0c] */ r_ecx = (u32)(r_ebp+r_eax*4+0xffff80f4u);
    /* 00692a0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692a0f: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00692a14: jne 0x692a1b */ if (!fZ) goto L_00692a1b;
L_00692a16:; BB(0x00692a16);
    /* 00692a16: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00692a18: mov dword ptr [edi + esi*4], ecx */ W32((u32)(r_edi+r_esi*4), r_ecx);
L_00692a1b:; BB(0x00692a1b);
    /* 00692a1b: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00692a1e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00692a21: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00692a22: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692a24: jl 0x6929e6 */ if ((fS!=fO)) goto L_006929e6;
L_00692a26:; BB(0x00692a26);
    /* 00692a26: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692a27: cmp ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692a2a: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00692a2d: jl 0x692939 */ if ((fS!=fO)) goto L_00692939;
L_00692a33:; BB(0x00692a33);
    /* 00692a33: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692a35: jge 0x692a71 */ if ((fS==fO)) goto L_00692a71;
L_00692a37:; BB(0x00692a37);
    /* 00692a37: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00692a3a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00692a3d: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 00692a40: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 00692a43: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00692a46: lea ecx, [eax*8] */ r_ecx = (u32)(r_eax*8);
    /* 00692a4d: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00692a4f: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00692a52: lea ecx, [ebp + ecx - 0x7e30] */ r_ecx = (u32)(r_ebp+r_ecx+0xffff81d0u);
L_00692a59:; BB(0x00692a59);
    /* 00692a59: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 00692a5c: fcomp dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); FPOP();
    /* 00692a5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692a60: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00692a65: jne 0x692a6c */ if (!fZ) goto L_00692a6c;
L_00692a67:; BB(0x00692a67);
    /* 00692a67: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00692a69: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
L_00692a6c:; BB(0x00692a6c);
    /* 00692a6c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00692a6d: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692a6f: jl 0x692a59 */ if ((fS!=fO)) goto L_00692a59;
L_00692a71:; BB(0x00692a71);
    /* 00692a71: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00692a74: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00692a77: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00692a7e: mov esi, 8 */ r_esi = 0x8u;
L_00692a83:; BB(0x00692a83);
    /* 00692a83: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00692a86: fmul qword ptr [0x6bf7d8] */ ST(0) = ST(0) * R_F64((u32)(0x6bf7d8u));
    /* 00692a8c: fadd qword ptr [ebp - 0x28] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffffd8u));
    /* 00692a8f: fsub qword ptr [0x6b3740] */ ST(0) = ST(0) - R_F64((u32)(0x6b3740u));
    /* 00692a95: fadd qword ptr [0x6e5760] */ ST(0) = ST(0) + R_F64((u32)(0x6e5760u));
    /* 00692a9b: fmul qword ptr [0x6e5758] */ ST(0) = ST(0) * R_F64((u32)(0x6e5758u));
    /* 00692aa1: fldl2e  */ FPUSH(1.44269504088896340736);
    /* 00692aa3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00692aa5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00692aa7: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00692aa9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00692aab: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00692aad: f2xm1  */ ST(0) = exp2l(ST(0)) - 1.0;
    /* 00692aaf: fld1  */ FPUSH(1.0);
    /* 00692ab1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00692ab3: fscale  */ ST(0) = ldexpl(ST(0), (int)ST(1));
    /* 00692ab5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00692ab7: fdiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xcu));
    /* 00692aba: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x692abfu); f_00687450();
    /* 00692abf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692ac1: jge 0x692ad1 */ if ((fS==fO)) goto L_00692ad1;
L_00692ac3:; BB(0x00692ac3);
    /* 00692ac3: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00692ac5: mov edx, dword ptr [ecx + ebx*4] */ r_edx = R32((u32)(r_ecx+r_ebx*4));
    /* 00692ac8: mov dword ptr [esi + edx], 0xc479c000 */ W32((u32)(r_esi+r_edx), 0xc479c000u);
    /* 00692acf: jmp 0x692af2 */ goto L_00692af2;
L_00692ad1:; BB(0x00692ad1);
    /* 00692ad1: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692ad4: jl 0x692ae4 */ if ((fS!=fO)) goto L_00692ae4;
L_00692ad6:; BB(0x00692ad6);
    /* 00692ad6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00692ad8: mov ecx, dword ptr [eax + ebx*4] */ r_ecx = R32((u32)(r_eax+r_ebx*4));
    /* 00692adb: mov dword ptr [esi + ecx], 0xc479c000 */ W32((u32)(r_esi+r_ecx), 0xc479c000u);
    /* 00692ae2: jmp 0x692af2 */ goto L_00692af2;
L_00692ae4:; BB(0x00692ae4);
    /* 00692ae4: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00692ae6: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 00692ae9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00692aec: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00692aef: mov dword ptr [esi + ecx], eax */ W32((u32)(r_esi+r_ecx), r_eax);
L_00692af2:; BB(0x00692af2);
    /* 00692af2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00692af5: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00692af8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00692af9: cmp esi, 0xe8 */ {  u32 a = r_esi; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692aff: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00692b02: jl 0x692a83 */ if ((fS!=fO)) goto L_00692a83;
L_00692b08:; BB(0x00692b08);
    /* 00692b08: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00692b0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00692b0c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00692b0f: mov esi, dword ptr [edx + ebx*4] */ r_esi = R32((u32)(r_edx+r_ebx*4));
    /* 00692b12: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
L_00692b15:; BB(0x00692b15);
    /* 00692b15: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00692b17: fcomp dword ptr [0x6e5778] */ fx_compare(ST(0), R_F32((u32)(0x6e5778u))); FPOP();
    /* 00692b1d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692b1f: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00692b24: je 0x692b2f */ if (fZ) goto L_00692b2f;
L_00692b26:; BB(0x00692b26);
    /* 00692b26: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00692b27: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00692b2a: cmp ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692b2d: jl 0x692b15 */ if ((fS!=fO)) goto L_00692b15;
L_00692b2f:; BB(0x00692b2f);
    /* 00692b2f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00692b32: mov ecx, 0x37 */ r_ecx = 0x37u;
    /* 00692b37: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00692b3a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00692b3d: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00692b3f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00692b41: mov esi, dword ptr [eax + ebx*4] */ r_esi = R32((u32)(r_eax+r_ebx*4));
    /* 00692b44: lea edx, [esi + 0xe4] */ r_edx = (u32)(r_esi+0xe4u);
L_00692b4a:; BB(0x00692b4a);
    /* 00692b4a: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00692b4c: fcomp dword ptr [0x6e5778] */ fx_compare(ST(0), R_F32((u32)(0x6e5778u))); FPOP();
    /* 00692b52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692b54: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00692b59: je 0x692b64 */ if (fZ) goto L_00692b64;
L_00692b5b:; BB(0x00692b5b);
    /* 00692b5b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00692b5c: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00692b5f: cmp ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692b62: jg 0x692b4a */ if ((!fZ&&fS==fO)) goto L_00692b4a;
L_00692b64:; BB(0x00692b64);
    /* 00692b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00692b67: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692b68: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 00692b6b: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692b6e: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 00692b71: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00692b74: jl 0x692791 */ if ((fS!=fO)) goto L_00692791;
L_00692b7a:; BB(0x00692b7a);
    /* 00692b7a: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00692b7d: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00692b80: cmp esi, 0x11 */ {  u32 a = r_esi; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692b83: mov dword ptr [ebp + 0x14], esi */ W32((u32)(r_ebp+0x14u), r_esi);
    /* 00692b86: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 00692b89: jl 0x6926b5 */ if ((fS!=fO)) goto L_006926b5;
L_00692b8f:; BB(0x00692b8f);
    /* 00692b8f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00692b92: lea esp, [ebp - 0x7f18] */ r_esp = (u32)(r_ebp+0xffff80e8u);
    /* 00692b98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692b99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692b9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692b9b: mov esp, ebp */ r_esp = r_ebp;
    /* 00692b9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692b9e: ret  */ FN_RET(0x00692430); r_esp += 4; return;
}

void f_00692ba0(void) /* sub_692BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00692ba0);
    /* 00692ba0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00692ba4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00692ba8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692ba9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00692bab: mov esi, 0x38 */ r_esi = 0x38u;
L_00692bb0:; BB(0x00692bb0);
    /* 00692bb0: fld dword ptr [edx + ecx] */ FPUSH(R_F32((u32)(r_edx+r_ecx)));
    /* 00692bb3: fcomp dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); FPOP();
    /* 00692bb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692bb7: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00692bba: jp 0x692bc1 */ if (fP) goto L_00692bc1;
L_00692bbc:; BB(0x00692bbc);
    /* 00692bbc: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 00692bbf: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00692bc1:; BB(0x00692bc1);
    /* 00692bc1: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00692bc4: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00692bc5: jne 0x692bb0 */ if (!fZ) goto L_00692bb0;
L_00692bc7:; BB(0x00692bc7);
    /* 00692bc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692bc8: ret  */ FN_RET(0x00692ba0); r_esp += 4; return;
}

void f_00692bd0(void) /* sub_692BD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00692bd0);
    /* 00692bd0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00692bd4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00692bd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692bd9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00692bdb: mov esi, 0x38 */ r_esi = 0x38u;
L_00692be0:; BB(0x00692be0);
    /* 00692be0: fld dword ptr [edx + ecx] */ FPUSH(R_F32((u32)(r_edx+r_ecx)));
    /* 00692be3: fcomp dword ptr [ecx] */ fx_compare(ST(0), R_F32((u32)(r_ecx))); FPOP();
    /* 00692be5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692be7: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00692bec: jne 0x692bf3 */ if (!fZ) goto L_00692bf3;
L_00692bee:; BB(0x00692bee);
    /* 00692bee: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 00692bf1: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00692bf3:; BB(0x00692bf3);
    /* 00692bf3: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00692bf6: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00692bf7: jne 0x692be0 */ if (!fZ) goto L_00692be0;
L_00692bf9:; BB(0x00692bf9);
    /* 00692bf9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692bfa: ret  */ FN_RET(0x00692bd0); r_esp += 4; return;
}

void f_00692c00(void) /* sub_692C00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00692c00);
    /* 00692c00: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00692c04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00692c06:; BB(0x00692c06);
    /* 00692c06: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00692c0a: fadd dword ptr [ecx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*4));
    /* 00692c0d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692c0e: cmp eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692c11: fstp dword ptr [ecx + eax*4 - 4] */ W_F32((u32)(r_ecx+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 00692c15: jl 0x692c06 */ if ((fS!=fO)) goto L_00692c06;
L_00692c17:; BB(0x00692c17);
    /* 00692c17: ret  */ FN_RET(0x00692c00); r_esp += 4; return;
}

void f_00692c20(void) /* sub_692C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00692c20);
    /* 00692c20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692c21: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00692c25: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692c27: je 0x692cde */ if (fZ) goto L_00692cde;
L_00692c2d:; BB(0x00692c2d);
    /* 00692c2d: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00692c30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692c32: je 0x692c3d */ if (fZ) goto L_00692c3d;
L_00692c34:; BB(0x00692c34);
    /* 00692c34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692c35: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x692c3au); f_00687300();
    /* 00692c3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00692c3d:; BB(0x00692c3d);
    /* 00692c3d: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00692c40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692c42: je 0x692c4d */ if (fZ) goto L_00692c4d;
L_00692c44:; BB(0x00692c44);
    /* 00692c44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692c45: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x692c4au); f_00687300();
    /* 00692c4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00692c4d:; BB(0x00692c4d);
    /* 00692c4d: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00692c50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692c52: je 0x692c5d */ if (fZ) goto L_00692c5d;
L_00692c54:; BB(0x00692c54);
    /* 00692c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692c55: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x692c5au); f_00687300();
    /* 00692c5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00692c5d:; BB(0x00692c5d);
    /* 00692c5d: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00692c60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692c61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692c63: je 0x692ca8 */ if (fZ) goto L_00692ca8;
L_00692c65:; BB(0x00692c65);
    /* 00692c65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692c66: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00692c68:; BB(0x00692c68);
    /* 00692c68: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00692c6a:; BB(0x00692c6a);
    /* 00692c6a: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00692c6d: mov ecx, dword ptr [ebx + eax] */ r_ecx = R32((u32)(r_ebx+r_eax));
    /* 00692c70: mov edx, dword ptr [ecx + esi] */ r_edx = R32((u32)(r_ecx+r_esi));
    /* 00692c73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692c74: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x692c79u); f_00687300();
    /* 00692c79: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00692c7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692c7f: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692c82: jl 0x692c6a */ if ((fS!=fO)) goto L_00692c6a;
L_00692c84:; BB(0x00692c84);
    /* 00692c84: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00692c87: mov ecx, dword ptr [ebx + eax] */ r_ecx = R32((u32)(r_ebx+r_eax));
    /* 00692c8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00692c8b: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x692c90u); f_00687300();
    /* 00692c90: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692c93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692c96: cmp ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692c99: jl 0x692c68 */ if ((fS!=fO)) goto L_00692c68;
L_00692c9b:; BB(0x00692c9b);
    /* 00692c9b: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00692c9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692c9f: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x692ca4u); f_00687300();
    /* 00692ca4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692ca7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00692ca8:; BB(0x00692ca8);
    /* 00692ca8: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00692cab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692cad: je 0x692cd4 */ if (fZ) goto L_00692cd4;
L_00692caf:; BB(0x00692caf);
    /* 00692caf: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00692cb1:; BB(0x00692cb1);
    /* 00692cb1: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00692cb4: mov ecx, dword ptr [eax + esi] */ r_ecx = R32((u32)(r_eax+r_esi));
    /* 00692cb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00692cb8: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x692cbdu); f_00687300();
    /* 00692cbd: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00692cc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692cc3: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692cc6: jl 0x692cb1 */ if ((fS!=fO)) goto L_00692cb1;
L_00692cc8:; BB(0x00692cc8);
    /* 00692cc8: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00692ccb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692ccc: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x692cd1u); f_00687300();
    /* 00692cd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00692cd4:; BB(0x00692cd4);
    /* 00692cd4: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 00692cd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692cdb: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00692cdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00692cde:; BB(0x00692cde);
    /* 00692cde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692cdf: ret  */ FN_RET(0x00692c20); r_esp += 4; return;
}

void f_00692ce0(void) /* sub_692CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00692ce0);
    /* 00692ce0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00692ce4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692ce5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692ce6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692ce7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00692ce9: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00692ced: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692cef: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00692cf3: jle 0x692cf7 */ if ((fZ||fS!=fO)) goto L_00692cf7;
L_00692cf5:; BB(0x00692cf5);
    /* 00692cf5: mov edi, ecx */ r_edi = r_ecx;
L_00692cf7:; BB(0x00692cf7);
    /* 00692cf7: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00692cfb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00692cfd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00692cff: jle 0x692d2e */ if ((fZ||fS!=fO)) goto L_00692d2e;
L_00692d01:; BB(0x00692d01);
    /* 00692d01: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00692d05: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00692d09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692d0a: mov esi, ebp */ r_esi = r_ebp;
    /* 00692d0c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00692d0e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00692d10: mov ebx, edi */ r_ebx = r_edi;
L_00692d12:; BB(0x00692d12);
    /* 00692d12: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00692d15: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692d18: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00692d19: fld dword ptr [ecx*4 + 0x787450] */ FPUSH(R_F32((u32)(r_ecx*4+0x787450u)));
    /* 00692d20: fmul dword ptr [eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffffcu));
    /* 00692d23: fstp dword ptr [esi + eax - 4] */ W_F32((u32)(r_esi+r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00692d27: jne 0x692d12 */ if (!fZ) goto L_00692d12;
L_00692d29:; BB(0x00692d29);
    /* 00692d29: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00692d2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00692d2e:; BB(0x00692d2e);
    /* 00692d2e: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692d30: jge 0x692d3c */ if ((fS==fO)) goto L_00692d3c;
L_00692d32:; BB(0x00692d32);
    /* 00692d32: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00692d34: lea edi, [ebp + ebx*4] */ r_edi = (u32)(r_ebp+r_ebx*4);
    /* 00692d38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692d3a: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_00692d3c:; BB(0x00692d3c);
    /* 00692d3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692d3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692d3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692d3f: ret  */ FN_RET(0x00692ce0); r_esp += 4; return;
}

void f_00692d40(void) /* sub_692D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00692d40);
    /* 00692d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00692d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00692d44: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00692d47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692d48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692d49: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692d4a: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00692d4c: lea eax, [esi*4] */ r_eax = (u32)(r_esi*4);
    /* 00692d53: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692d56: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00692d58: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x692d5du); f_00687340();
    /* 00692d5d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00692d60: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 00692d63: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00692d66: mov ebx, esp */ r_ebx = r_esp;
    /* 00692d68: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00692d6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00692d6d: push 0x430c0000 */ { u32 v = 0x430c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00692d72: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00692d74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692d75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692d76: call 0x692e30 */ r_esp -= 4; W32(r_esp, 0x692d7bu); f_00692e30();
    /* 00692d7b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692d7e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00692d80: jle 0x692dab */ if ((fZ||fS!=fO)) goto L_00692dab;
L_00692d82:; BB(0x00692d82);
    /* 00692d82: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00692d85: mov edx, ebx */ r_edx = r_ebx;
    /* 00692d87: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00692d89: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00692d8b: mov eax, edi */ r_eax = r_edi;
    /* 00692d8d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00692d90: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
L_00692d93:; BB(0x00692d93);
    /* 00692d93: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 00692d96: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00692d98: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00692d9b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692d9e: fstp dword ptr [edx + eax - 4] */ W_F32((u32)(r_edx+r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00692da2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00692da5: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00692da6: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00692da9: jne 0x692d93 */ if (!fZ) goto L_00692d93;
L_00692dab:; BB(0x00692dab);
    /* 00692dab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00692dae: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00692db1: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00692db4: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 00692dba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692dbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00692dbd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692dbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692dbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692dc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692dc1: call 0x692e30 */ r_esp -= 4; W32(r_esp, 0x692dc6u); f_00692e30();
    /* 00692dc6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692dc9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00692dcb: jle 0x692e23 */ if ((fZ||fS!=fO)) goto L_00692e23;
L_00692dcd:; BB(0x00692dcd);
    /* 00692dcd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00692dd0: mov eax, ebx */ r_eax = r_ebx;
    /* 00692dd2: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00692dd4: mov edx, esi */ r_edx = r_esi;
L_00692dd6:; BB(0x00692dd6);
    /* 00692dd6: fld dword ptr [ecx + eax] */ FPUSH(R_F32((u32)(r_ecx+r_eax)));
    /* 00692dd9: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00692ddb: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692dde: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00692ddf: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00692de2: jne 0x692dd6 */ if (!fZ) goto L_00692dd6;
L_00692de4:; BB(0x00692de4);
    /* 00692de4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00692de6: jle 0x692e23 */ if ((fZ||fS!=fO)) goto L_00692e23;
L_00692de8:; BB(0x00692de8);
    /* 00692de8: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_00692dea:; BB(0x00692dea);
    /* 00692dea: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00692dec: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 00692df2: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x692df7u); f_00687450();
    /* 00692df7: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692dfa: jl 0x692e03 */ if ((fS!=fO)) goto L_00692e03;
L_00692dfc:; BB(0x00692dfc);
    /* 00692dfc: mov eax, 0x27 */ r_eax = 0x27u;
    /* 00692e01: jmp 0x692e09 */ goto L_00692e09;
L_00692e03:; BB(0x00692e03);
    /* 00692e03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692e05: jge 0x692e09 */ if ((fS==fO)) goto L_00692e09;
L_00692e07:; BB(0x00692e07);
    /* 00692e07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00692e09:; BB(0x00692e09);
    /* 00692e09: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00692e0c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00692e0f: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00692e10: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00692e13: fld dword ptr [edx + eax*4 + 0x150] */ FPUSH(R_F32((u32)(r_edx+r_eax*4+0x150u)));
    /* 00692e1a: fadd dword ptr [edi + ebx - 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_ebx+0xfffffffcu));
    /* 00692e1e: fstp dword ptr [edi - 4] */ W_F32((u32)(r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 00692e21: jne 0x692dea */ if (!fZ) goto L_00692dea;
L_00692e23:; BB(0x00692e23);
    /* 00692e23: lea esp, [ebp - 0x10] */ r_esp = (u32)(r_ebp+0xfffffff0u);
    /* 00692e26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692e27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692e28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692e29: mov esp, ebp */ r_esp = r_ebp;
    /* 00692e2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692e2c: ret  */ FN_RET(0x00692d40); r_esp += 4; return;
}

void f_00692e30(void) /* sub_692E30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00692e30);
    /* 00692e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00692e33: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00692e36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00692e39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692e3a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692e3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692e3c: lea ebx, [eax*4] */ r_ebx = (u32)(r_eax*4);
    /* 00692e43: mov eax, ebx */ r_eax = r_ebx;
    /* 00692e45: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692e48: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00692e4a: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x692e4fu); f_00687340();
    /* 00692e4f: mov eax, ebx */ r_eax = r_ebx;
    /* 00692e51: mov esi, esp */ r_esi = r_esp;
    /* 00692e53: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692e56: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00692e58: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x692e5du); f_00687340();
    /* 00692e5d: mov eax, ebx */ r_eax = r_ebx;
    /* 00692e5f: mov edi, esp */ r_edi = r_esp;
    /* 00692e61: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692e64: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00692e67: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00692e69: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x692e6eu); f_00687340();
    /* 00692e6e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00692e71: mov ebx, esp */ r_ebx = r_esp;
    /* 00692e73: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00692e76: lea eax, [ecx*4] */ r_eax = (u32)(r_ecx*4);
    /* 00692e7d: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692e80: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00692e82: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x692e87u); f_00687340();
    /* 00692e87: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00692e8a: mov dword ptr [ebp - 0xc], esp */ W32((u32)(r_ebp+0xfffffff4u), r_esp);
    /* 00692e8d: lea eax, [edx*4] */ r_eax = (u32)(r_edx*4);
    /* 00692e94: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692e97: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00692e99: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x692e9eu); f_00687340();
    /* 00692e9e: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 00692ea4: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 00692eaa: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00692ead: mov ecx, esp */ r_ecx = r_esp;
    /* 00692eaf: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00692eb2: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00692eb4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00692eb7: fst dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0));
    /* 00692eba: fcomp dword ptr [0x6b3650] */ fx_compare(ST(0), R_F32((u32)(0x6b3650u))); FPOP();
    /* 00692ec0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692ec2: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00692ec5: jp 0x692ece */ if (fP) goto L_00692ece;
L_00692ec7:; BB(0x00692ec7);
    /* 00692ec7: mov dword ptr [ebp + 0x10], 0x3f800000 */ W32((u32)(r_ebp+0x10u), 0x3f800000u);
L_00692ece:; BB(0x00692ece);
    /* 00692ece: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00692ed1: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00692ed4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00692ed7: fmul qword ptr [0x6b2c38] */ ST(0) = ST(0) * R_F64((u32)(0x6b2c38u));
    /* 00692edd: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
    /* 00692ee0: fst dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0));
    /* 00692ee3: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00692ee6: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00692ee9: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00692eec: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00692eee: mov dword ptr [ebp + 0x10], 0x3f800000 */ W32((u32)(r_ebp+0x10u), 0x3f800000u);
    /* 00692ef5: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00692ef7: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00692ef9: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00692efb: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 00692f01: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00692f03: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00692f05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00692f08: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00692f0e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692f11: jle 0x692fc8 */ if ((fZ||fS!=fO)) goto L_00692fc8;
L_00692f17:; BB(0x00692f17);
    /* 00692f17: mov eax, edx */ r_eax = r_edx;
    /* 00692f19: mov edx, edi */ r_edx = r_edi;
    /* 00692f1b: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00692f1d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00692f1f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00692f22: mov eax, ebx */ r_eax = r_ebx;
    /* 00692f24: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00692f26: lea ecx, [esi + 4] */ r_ecx = (u32)(r_esi+0x4u);
    /* 00692f29: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00692f2c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00692f2f: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00692f31: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00692f34: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00692f37: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00692f39: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00692f3c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00692f3f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00692f40: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00692f43:; BB(0x00692f43);
    /* 00692f43: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00692f46: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00692f49: fadd dword ptr [eax + ecx] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_ecx));
    /* 00692f4c: fcom dword ptr [0x6b3650] */ fx_compare(ST(0), R_F32((u32)(0x6b3650u))); 
    /* 00692f52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00692f54: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00692f57: jp 0x692f61 */ if (fP) goto L_00692f61;
L_00692f59:; BB(0x00692f59);
    /* 00692f59: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00692f5b: fld dword ptr [0x6b3650] */ FPUSH(R_F32((u32)(0x6b3650u)));
L_00692f61:; BB(0x00692f61);
    /* 00692f61: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00692f63: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00692f65: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00692f68: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00692f6b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00692f6d: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00692f6f: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00692f72: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00692f74: fst dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0));
    /* 00692f77: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00692f79: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00692f7c: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00692f7f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00692f81: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 00692f83: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00692f85: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00692f87: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 00692f8a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00692f8c: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 00692f8e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00692f90: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00692f92: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00692f95: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00692f97: fstp dword ptr [edx + ecx - 4] */ W_F32((u32)(r_edx+r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00692f9b: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00692f9d: fstp dword ptr [eax + ecx - 4] */ W_F32((u32)(r_eax+r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00692fa1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00692fa4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00692fa6: fstp dword ptr [eax + ecx - 4] */ W_F32((u32)(r_eax+r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00692faa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00692fad: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00692faf: fstp dword ptr [eax + ecx - 4] */ W_F32((u32)(r_eax+r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00692fb3: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00692fb6: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 00692fbc: dec dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00692fbf: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00692fc2: jne 0x692f43 */ if (!fZ) goto L_00692f43;
L_00692fc8:; BB(0x00692fc8);
    /* 00692fc8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00692fcb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00692fd2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00692fd4: movsx ecx, word ptr [eax + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 00692fd8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00692fda: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00692fdc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00692fde: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00692fe0: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 00692fe6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692fe8: jge 0x6930a2 */ if ((fS==fO)) goto L_006930a2;
L_00692fee:; BB(0x00692fee);
    /* 00692fee: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00692ff1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00692ff4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00692ff6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00692ff9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_00692ffc:; BB(0x00692ffc);
    /* 00692ffc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00692ffe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00693001: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00693003: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00693006: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069300b: fld dword ptr [ecx + esi] */ FPUSH(R_F32((u32)(r_ecx+r_esi)));
    /* 0069300e: fadd dword ptr [esi + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_eax*4));
    /* 00693011: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 00693014: fsub dword ptr [ecx + edi] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_edi));
    /* 00693017: fld dword ptr [ecx + ebx] */ FPUSH(R_F32((u32)(r_ecx+r_ebx)));
    /* 0069301a: fadd dword ptr [ebx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+r_eax*4));
    /* 0069301d: fld dword ptr [ecx + edx] */ FPUSH(R_F32((u32)(r_ecx+r_edx)));
    /* 00693020: fadd dword ptr [edx + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_eax*4));
    /* 00693023: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00693026: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 00693029: fsub dword ptr [ecx + edx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_edx));
    /* 0069302c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069302e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00693030: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00693032: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00693034: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693036: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00693039: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0069303b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069303d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0069303f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693041: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00693044: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00693046: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00693048: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0069304a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069304c: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0069304f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693051: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693053: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00693056: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00693058: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0069305b: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0069305e: fcom dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); 
    /* 00693064: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693066: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693069: jp 0x693073 */ if (fP) goto L_00693073;
L_0069306b:; BB(0x0069306b);
    /* 0069306b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069306d: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
L_00693073:; BB(0x00693073);
    /* 00693073: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 00693076: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00693079: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0069307c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0069307f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693082: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693083: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00693086: fstp dword ptr [ecx + eax - 4] */ W_F32((u32)(r_ecx+r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 0069308a: movsx ecx, word ptr [eax + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0069308e: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 00693094: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00693096: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00693099: jl 0x692ffc */ if ((fS!=fO)) goto L_00692ffc;
L_0069309f:; BB(0x0069309f);
    /* 0069309f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_006930a2:; BB(0x006930a2);
    /* 006930a2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006930a5: movsx ecx, word ptr [eax + edx*4 + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*4+0x2u));
    /* 006930aa: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 006930ad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006930b0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006930b3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006930b5: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006930ba: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006930bc: jge 0x693172 */ if ((fS==fO)) goto L_00693172;
L_006930c2:; BB(0x006930c2);
    /* 006930c2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006930c5: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006930c8: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006930cb: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006930ce: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_006930d1:; BB(0x006930d1);
    /* 006930d1: fld dword ptr [esi + eax*4] */ FPUSH(R_F32((u32)(r_esi+r_eax*4)));
    /* 006930d4: fsub dword ptr [esi + ecx*4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_ecx*4));
    /* 006930d7: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 006930da: fsub dword ptr [edi + ecx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_ecx*4));
    /* 006930dd: fld dword ptr [ebx + eax*4] */ FPUSH(R_F32((u32)(r_ebx+r_eax*4)));
    /* 006930e0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006930e3: fsub dword ptr [ebx + ecx*4] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+r_ecx*4));
    /* 006930e6: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 006930e9: fsub dword ptr [edx + ecx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_ecx*4));
    /* 006930ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006930ef: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 006930f2: fsub dword ptr [edx + ecx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_ecx*4));
    /* 006930f5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 006930f7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006930f9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 006930fb: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 006930fd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006930ff: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00693102: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00693104: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693106: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00693108: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069310a: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0069310d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0069310f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00693111: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00693113: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693115: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00693118: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069311a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069311c: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0069311f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00693121: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00693124: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
    /* 00693127: fcom dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); 
    /* 0069312d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0069312f: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693132: jp 0x69313c */ if (fP) goto L_0069313c;
L_00693134:; BB(0x00693134);
    /* 00693134: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693136: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
L_0069313c:; BB(0x0069313c);
    /* 0069313c: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 0069313f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00693142: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00693145: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00693148: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069314b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069314c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069314f: fstp dword ptr [eax + ecx - 4] */ W_F32((u32)(r_eax+r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00693153: movsx ecx, word ptr [eax + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 00693157: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 0069315d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0069315f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00693162: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00693165: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069316a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069316c: jl 0x6930d1 */ if ((fS!=fO)) goto L_006930d1;
L_00693172:; BB(0x00693172);
    /* 00693172: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00693175: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693177: jge 0x6931bc */ if ((fS==fO)) goto L_006931bc;
L_00693179:; BB(0x00693179);
    /* 00693179: fld dword ptr [0x6b3650] */ FPUSH(R_F32((u32)(0x6b3650u)));
    /* 0069317f: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
L_00693182:; BB(0x00693182);
    /* 00693182: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00693185: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00693187: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0069318a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069318c: fcom dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); 
    /* 00693192: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693194: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693197: jp 0x6931a1 */ if (fP) goto L_006931a1;
L_00693199:; BB(0x00693199);
    /* 00693199: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069319b: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
L_006931a1:; BB(0x006931a1);
    /* 006931a1: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 006931a4: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006931a7: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006931a8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006931aa: fstp dword ptr [eax + ecx*4 - 4] */ W_F32((u32)(r_eax+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 006931ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006931b0: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 006931b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006931b8: jl 0x693182 */ if ((fS!=fO)) goto L_00693182;
L_006931ba:; BB(0x006931ba);
    /* 006931ba: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006931bc:; BB(0x006931bc);
    /* 006931bc: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 006931bf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006931c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006931c3: jle 0x6933cd */ if ((fZ||fS!=fO)) goto L_006933cd;
L_006931c9:; BB(0x006931c9);
    /* 006931c9: mov eax, ebx */ r_eax = r_ebx;
    /* 006931cb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006931cd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006931ce: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 006931d4: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006931d6: mov edx, eax */ r_edx = r_eax;
    /* 006931d8: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006931da: mov eax, edx */ r_eax = r_edx;
    /* 006931dc: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 006931de: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 006931e1: jns 0x6932ae */ if (!fS) goto L_006932ae;
L_006931e7:; BB(0x006931e7);
    /* 006931e7: mov ecx, edx */ r_ecx = r_edx;
    /* 006931e9: lea eax, [edx*4] */ r_eax = (u32)(r_edx*4);
    /* 006931f0: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006931f2: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006931f4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006931f7: lea ecx, [edx*4] */ r_ecx = (u32)(r_edx*4);
    /* 006931fe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00693201: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00693204: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00693206: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00693209: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0069320c: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 0069320f: jmp 0x693213 */ goto L_00693213;
L_00693211:; BB(0x00693211);
    /* 00693211: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00693213:; BB(0x00693213);
    /* 00693213: fld dword ptr [eax + esi] */ FPUSH(R_F32((u32)(r_eax+r_esi)));
    /* 00693216: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00693219: fadd dword ptr [ecx + esi] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi));
    /* 0069321c: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 0069321f: fsub dword ptr [ecx + ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_ebx));
    /* 00693222: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00693225: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 00693228: fadd dword ptr [ecx + ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx));
    /* 0069322b: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069322e: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 00693231: fadd dword ptr [ecx + ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebx));
    /* 00693234: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00693237: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 0069323a: fsub dword ptr [ecx + ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_ebx));
    /* 0069323d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069323f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00693241: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00693243: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00693245: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00693248: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069324a: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0069324d: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0069324f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693251: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00693253: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693255: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00693258: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0069325a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069325c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069325e: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00693260: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693262: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00693265: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00693267: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0069326a: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0069326c: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 0069326f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00693271: fcomp dword ptr [ecx + edi*4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edi*4))); FPOP();
    /* 00693274: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693276: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693279: jp 0x693280 */ if (fP) goto L_00693280;
L_0069327b:; BB(0x0069327b);
    /* 0069327b: fstp dword ptr [ecx + edi*4] */ W_F32((u32)(r_ecx+r_edi*4), ST(0)); FPOP();
    /* 0069327e: jmp 0x693282 */ goto L_00693282;
L_00693280:; BB(0x00693280);
    /* 00693280: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00693282:; BB(0x00693282);
    /* 00693282: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00693285: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00693288: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0069328b: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069328c: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069328f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693292: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693294: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 0069329a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069329c: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); }
    /* 0069329d: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 006932a0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006932a3: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006932a6: js 0x693211 */ if (fS) goto L_00693211;
L_006932ac:; BB(0x006932ac);
    /* 006932ac: jmp 0x6932b1 */ goto L_006932b1;
L_006932ae:; BB(0x006932ae);
    /* 006932ae: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
L_006932b1:; BB(0x006932b1);
    /* 006932b1: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006932b4: lea ebx, [edx + edi] */ r_ebx = (u32)(r_edx+r_edi);
    /* 006932b7: mov eax, ebx */ r_eax = r_ebx;
    /* 006932b9: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006932bb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006932be: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006932c0: jge 0x69338d */ if ((fS==fO)) goto L_0069338d;
L_006932c6:; BB(0x006932c6);
    /* 006932c6: lea ecx, [eax*4] */ r_ecx = (u32)(r_eax*4);
    /* 006932cd: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006932d0: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 006932d7: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006932da: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 006932dd: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 006932e0: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006932e2: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006932e4: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006932e7: jmp 0x6932ec */ goto L_006932ec;
L_006932e9:; BB(0x006932e9);
    /* 006932e9: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
L_006932ec:; BB(0x006932ec);
    /* 006932ec: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006932ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006932f1: fld dword ptr [eax + esi] */ FPUSH(R_F32((u32)(r_eax+r_esi)));
    /* 006932f4: fsub dword ptr [ecx + esi] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_esi));
    /* 006932f7: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 006932fa: fsub dword ptr [ecx + ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_ebx));
    /* 006932fd: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00693300: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 00693303: fsub dword ptr [ecx + ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_ebx));
    /* 00693306: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00693309: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 0069330c: fsub dword ptr [ecx + ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_ebx));
    /* 0069330f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00693312: fld dword ptr [eax + ebx] */ FPUSH(R_F32((u32)(r_eax+r_ebx)));
    /* 00693315: fsub dword ptr [ecx + ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+r_ebx));
    /* 00693318: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069331a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0069331c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0069331e: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00693320: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00693323: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693325: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00693328: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0069332a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069332c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0069332e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00693330: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00693333: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00693335: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00693337: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00693339: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0069333b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069333d: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00693340: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00693342: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00693345: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00693347: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 0069334a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069334c: fcomp dword ptr [ecx + edi*4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+r_edi*4))); FPOP();
    /* 0069334f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693351: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00693354: jp 0x69335b */ if (fP) goto L_0069335b;
L_00693356:; BB(0x00693356);
    /* 00693356: fstp dword ptr [ecx + edi*4] */ W_F32((u32)(r_ecx+r_edi*4), ST(0)); FPOP();
    /* 00693359: jmp 0x69335d */ goto L_0069335d;
L_0069335b:; BB(0x0069335b);
    /* 0069335b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0069335d:; BB(0x0069335d);
    /* 0069335d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00693360: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00693363: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693366: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00693367: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069336a: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 0069336d: mov ecx, edx */ r_ecx = r_edx;
    /* 0069336f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00693372: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00693373: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00693376: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693378: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 0069337e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693380: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693382: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00693385: jl 0x6932e9 */ if ((fS!=fO)) goto L_006932e9;
L_0069338b:; BB(0x0069338b);
    /* 0069338b: mov ecx, edx */ r_ecx = r_edx;
L_0069338d:; BB(0x0069338d);
    /* 0069338d: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069338f: jge 0x6933c9 */ if ((fS==fO)) goto L_006933c9;
L_00693391:; BB(0x00693391);
    /* 00693391: fdivr dword ptr [0x6b3650] */ ST(0) = R_F32((u32)(0x6b3650u)) / ST(0);
L_00693397:; BB(0x00693397);
    /* 00693397: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0069339a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0069339c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0069339f: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006933a2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006933a4: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 006933a7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006933a9: fcomp dword ptr [edx + edi*4] */ fx_compare(ST(0), R_F32((u32)(r_edx+r_edi*4))); FPOP();
    /* 006933ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006933ae: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006933b1: jp 0x6933b8 */ if (fP) goto L_006933b8;
L_006933b3:; BB(0x006933b3);
    /* 006933b3: fstp dword ptr [edx + edi*4] */ W_F32((u32)(r_edx+r_edi*4), ST(0)); FPOP();
    /* 006933b6: jmp 0x6933ba */ goto L_006933ba;
L_006933b8:; BB(0x006933b8);
    /* 006933b8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006933ba:; BB(0x006933ba);
    /* 006933ba: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006933bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006933bd: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 006933c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006933c5: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006933c7: jl 0x693397 */ if ((fS!=fO)) goto L_00693397;
L_006933c9:; BB(0x006933c9);
    /* 006933c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006933cb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006933cd:; BB(0x006933cd);
    /* 006933cd: lea esp, [ebp - 0x34] */ r_esp = (u32)(r_ebp+0xffffffccu);
    /* 006933d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006933d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006933d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006933d3: mov esp, ebp */ r_esp = r_ebp;
    /* 006933d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006933d6: ret  */ FN_RET(0x00692e30); r_esp += 4; return;
}

