#include "protos.h"

void f_00697380(void) /* sub_697380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00697380);
    /* 00697380: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00697381: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00697385: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00697386: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0069738a: lea eax, [esi + esi*2] */ r_eax = (u32)(r_esi+r_esi*2);
    /* 0069738d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0069738f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697390: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 00697392: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x697397u); f_0068738e();
    /* 00697397: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00697399: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0069739b: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0069739e: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x6973a3u); f_0068738e();
    /* 006973a3: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 006973a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006973a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006973a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006973a9: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 006973ac: call 0x6973c0 */ r_esp -= 4; W32(r_esp, 0x6973b1u); f_006973c0();
    /* 006973b1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006973b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006973b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006973b6: ret  */ FN_RET(0x00697380); r_esp += 4; return;
}

void f_006973c0(void) /* sub_6973C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006973c0);
    /* 006973c0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006973c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006973c7: je 0x6973dd */ if (fZ) goto L_006973dd;
L_006973c9:; BB(0x006973c9);
    /* 006973c9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006973cd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006973d1: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 006973d4: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006973d8: jmp 0x6973e0 */ goto L_006973e0;
L_006973dd:; BB(0x006973dd);
    /* 006973dd: ret  */ FN_RET(0x006973c0); r_esp += 4; return;
L_006973e0:; BB(0x006973e0);
    /* 006973e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006973e3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006973e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006973e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006973e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006973ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006973eb: mov ebx, 0x7878e8 */ r_ebx = 0x7878e8u;
    /* 006973f0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006973f2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006973f4: sub ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_006973f7:; BB(0x006973f7);
    /* 006973f7: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006973fa: cmp ebx, 0x7878f8 */ {  u32 a = r_ebx; u32 b = 0x7878f8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00697400: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00697404: jge 0x69740a */ if ((fS==fO)) goto L_0069740a;
L_00697406:; BB(0x00697406);
    /* 00697406: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00697408: jmp 0x69740d */ goto L_0069740d;
L_0069740a:; BB(0x0069740a);
    /* 0069740a: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0069740d:; BB(0x0069740d);
    /* 0069740d: mov eax, ecx */ r_eax = r_ecx;
    /* 0069740f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00697411: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00697412: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00697412, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00697412, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00697414: mov edx, eax */ r_edx = r_eax;
    /* 00697416: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00697419: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0069741b: jne 0x6973f7 */ if (!fZ) goto L_006973f7;
L_0069741d:; BB(0x0069741d);
    /* 0069741d: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00697421: lea ebx, [ecx + edi*4] */ r_ebx = (u32)(r_ecx+r_edi*4);
L_00697424:; BB(0x00697424);
    /* 00697424: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00697427: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00697428: mov ecx, eax */ r_ecx = r_eax;
    /* 0069742a: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069742d: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 00697430: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00697434: jne 0x69745c */ if (!fZ) goto L_0069745c;
L_00697436:; BB(0x00697436);
    /* 00697436: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00697439: je 0x69745c */ if (fZ) goto L_0069745c;
L_0069743b:; BB(0x0069743b);
    /* 0069743b: jle 0x697451 */ if ((fZ||fS!=fO)) goto L_00697451;
L_0069743d:; BB(0x0069743d);
    /* 0069743d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069743f: lea edx, [edi - 1] */ r_edx = (u32)(r_edi+0xffffffffu);
L_00697442:; BB(0x00697442);
    /* 00697442: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00697444: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 00697447: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069744a: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0069744b: jne 0x697442 */ if (!fZ) goto L_00697442;
L_0069744d:; BB(0x0069744d);
    /* 0069744d: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
L_00697451:; BB(0x00697451);
    /* 00697451: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00697455: mov dword ptr [edx + 8], 2 */ W32((u32)(r_edx+0x8u), 0x2u);
L_0069745c:; BB(0x0069745c);
    /* 0069745c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069745f: je 0x697475 */ if (fZ) goto L_00697475;
L_00697461:; BB(0x00697461);
    /* 00697461: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00697462: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x00697462, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00697462, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00697464: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00697466: mov edx, eax */ r_edx = r_eax;
    /* 00697468: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069746b: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 0069746d: je 0x697424 */ if (fZ) goto L_00697424;
L_0069746f:; BB(0x0069746f);
    /* 0069746f: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00697473: jmp 0x6973f7 */ goto L_006973f7;
L_00697475:; BB(0x00697475);
    /* 00697475: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00697479: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0069747d: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00697481: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00697483: mov dword ptr [eax + 4], edi */ W32((u32)(r_eax+0x4u), r_edi);
    /* 00697486: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00697487: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 0069748f: fdivr dword ptr [0x7878f8] */ ST(0) = R_F32((u32)(0x7878f8u)) / ST(0);
    /* 00697495: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00697497: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0069749c: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006974a0: jle 0x69755e */ if ((fZ||fS!=fO)) goto L_0069755e;
L_006974a6:; BB(0x006974a6);
    /* 006974a6: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006974a9: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006974ad: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_006974b1:; BB(0x006974b1);
    /* 006974b1: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006974b5: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 006974b9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006974bb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006974bd: mov esi, ecx */ r_esi = r_ecx;
    /* 006974bf: imul esi, ebx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ebx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006974c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006974c3: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x006974c3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006974c3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006974c5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006974c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006974c8: jle 0x697542 */ if ((fZ||fS!=fO)) goto L_00697542;
L_006974ca:; BB(0x006974ca);
    /* 006974ca: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 006974ce: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 006974d2: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006974d6: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006974d9: lea edi, [edx + edi*4] */ r_edi = (u32)(r_edx+r_edi*4);
    /* 006974dc: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 006974e0: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006974e2: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
L_006974e6:; BB(0x006974e6);
    /* 006974e6: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006974e8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006974eb: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 006974ef: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 006974f3: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 006974f7: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006974fb: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 00697501: jle 0x69752c */ if ((fZ||fS!=fO)) goto L_0069752c;
L_00697503:; BB(0x00697503);
    /* 00697503: lea edx, [eax - 3] */ r_edx = (u32)(r_eax+0xfffffffdu);
    /* 00697506: mov ecx, edi */ r_ecx = r_edi;
    /* 00697508: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0069750a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0069750b:; BB(0x0069750b);
    /* 0069750b: fadd dword ptr [0x6b3650] */ ST(0) = ST(0) + R_F32((u32)(0x6b3650u));
    /* 00697511: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00697515: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00697517: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069751a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069751d: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0069751e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697520: fcos  */ ST(0) = cosl(ST(0));
    /* 00697522: fstp dword ptr [ecx - 8] */ W_F32((u32)(r_ecx+0xfffffff8u), ST(0)); FPOP();
    /* 00697525: fsin  */ ST(0) = sinl(ST(0));
    /* 00697527: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 0069752a: jne 0x69750b */ if (!fZ) goto L_0069750b;
L_0069752c:; BB(0x0069752c);
    /* 0069752c: lea ecx, [eax*4] */ r_ecx = (u32)(r_eax*4);
    /* 00697533: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00697535: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00697539: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0069753a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069753c: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00697540: jne 0x6974e6 */ if (!fZ) goto L_006974e6;
L_00697542:; BB(0x00697542);
    /* 00697542: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00697546: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069754a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069754d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069754e: mov ebx, esi */ r_ebx = r_esi;
    /* 00697550: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00697554: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00697558: jne 0x6974b1 */ if (!fZ) goto L_006974b1;
L_0069755e:; BB(0x0069755e);
    /* 0069755e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069755f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00697560: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697561: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697562: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697565: ret  */ FN_RET(0x006973c0); r_esp += 4; return;
}

void f_00697570(void) /* sub_697570 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00697570);
    /* 00697570: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00697571: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00697575: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697577: je 0x6975a3 */ if (fZ) goto L_006975a3;
L_00697579:; BB(0x00697579);
    /* 00697579: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0069757c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069757e: je 0x697589 */ if (fZ) goto L_00697589;
L_00697580:; BB(0x00697580);
    /* 00697580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697581: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x697586u); f_00687300();
    /* 00697586: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00697589:; BB(0x00697589);
    /* 00697589: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069758c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069758e: je 0x697599 */ if (fZ) goto L_00697599;
L_00697590:; BB(0x00697590);
    /* 00697590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697591: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x697596u); f_00687300();
    /* 00697596: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00697599:; BB(0x00697599);
    /* 00697599: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069759b: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0069759d: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006975a0: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
L_006975a3:; BB(0x006975a3);
    /* 006975a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006975a4: ret  */ FN_RET(0x00697570); r_esp += 4; return;
}

void f_006975b0(void) /* sub_6975B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006975b0);
    /* 006975b0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006975b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006975b4: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006975b8: mov eax, ebx */ r_eax = r_ebx;
    /* 006975ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006975bb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006975bc: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006975bf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006975c0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006975c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006975c3: mov esi, eax */ r_esi = r_eax;
    /* 006975c5: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006975c8: lea eax, [esi*4] */ r_eax = (u32)(r_esi*4);
    /* 006975cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006975d0: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x6975d5u); f_006872fa();
    /* 006975d5: lea ecx, [esi + ebx] */ r_ecx = (u32)(r_esi+r_ebx);
    /* 006975d8: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006975dc: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006975df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006975e0: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x6975e5u); f_006872fa();
    /* 006975e5: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 006975e9: mov ebp, ebx */ r_ebp = r_ebx;
    /* 006975eb: mov edi, eax */ r_edi = r_eax;
    /* 006975ed: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 006975ef: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 006975f3: fldln2  */ FPUSH(0.69314718055994530942);
    /* 006975f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006975f7: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 006975f9: fldln2  */ FPUSH(0.69314718055994530942);
    /* 006975fb: fld qword ptr [0x6b3740] */ FPUSH(R_F64((u32)(0x6b3740u)));
    /* 00697601: fyl2x  */ ST(1) = ST(1) * log2l(ST(0)); FPOP();
    /* 00697603: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00697605: fadd qword ptr [0x6b2c38] */ ST(0) = ST(0) + R_F64((u32)(0x6b2c38u));
    /* 0069760b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0069760e: call 0x686fb4 */ r_esp -= 4; W32(r_esp, 0x697613u); f_00686fb4();
    /* 00697613: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697616: call 0x687450 */ r_esp -= 4; W32(r_esp, 0x69761bu); f_00687450();
    /* 0069761b: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069761f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00697623: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00697627: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0069762a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069762c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069762e: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 00697630: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 00697633: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00697636: jle 0x6976ac */ if ((fZ||fS!=fO)) goto L_006976ac;
L_00697638:; BB(0x00697638);
    /* 00697638: fld dword ptr [0x6e57d0] */ FPUSH(R_F32((u32)(0x6e57d0u)));
    /* 0069763e: fdiv dword ptr [esp + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x28u));
    /* 00697642: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00697645: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00697649: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0069764d: lea ecx, [edi + ebp*4] */ r_ecx = (u32)(r_edi+r_ebp*4);
    /* 00697650: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00697654: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 0069765c: fdivr dword ptr [0x6e57d0] */ ST(0) = R_F32((u32)(0x6e57d0u)) / ST(0);
L_00697662:; BB(0x00697662);
    /* 00697662: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00697666: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0069766a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069766b: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069766e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00697671: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00697673: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00697677: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0069767b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069767e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00697680: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697682: fcos  */ ST(0) = cosl(ST(0));
    /* 00697684: fstp dword ptr [edi + eax*8 - 8] */ W_F32((u32)(r_edi+r_eax*8+0xfffffff8u), ST(0)); FPOP();
    /* 00697688: fsin  */ ST(0) = sinl(ST(0));
    /* 0069768a: fchs  */ ST(0) = -ST(0);
    /* 0069768c: fstp dword ptr [edi + eax*8 - 4] */ W_F32((u32)(r_edi+r_eax*8+0xfffffffcu), ST(0)); FPOP();
    /* 00697690: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00697694: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00697698: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069769a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069769c: fcos  */ ST(0) = cosl(ST(0));
    /* 0069769e: fstp dword ptr [ecx - 8] */ W_F32((u32)(r_ecx+0xfffffff8u), ST(0)); FPOP();
    /* 006976a1: fsin  */ ST(0) = sinl(ST(0));
    /* 006976a3: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 006976a6: jl 0x697662 */ if ((fS!=fO)) goto L_00697662;
L_006976a8:; BB(0x006976a8);
    /* 006976a8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006976aa: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006976ac:; BB(0x006976ac);
    /* 006976ac: mov eax, ebx */ r_eax = r_ebx;
    /* 006976ae: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006976af: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006976b2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006976b4: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006976b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006976b9: jle 0x697703 */ if ((fZ||fS!=fO)) goto L_00697703;
L_006976bb:; BB(0x006976bb);
    /* 006976bb: fld dword ptr [0x6e57d0] */ FPUSH(R_F32((u32)(0x6e57d0u)));
    /* 006976c1: fdiv dword ptr [esp + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x28u));
    /* 006976c5: mov dword ptr [esp + 0x14], 2 */ W32((u32)(r_esp+0x14u), 0x2u);
    /* 006976cd: lea edi, [edi + ebx*4] */ r_edi = (u32)(r_edi+r_ebx*4);
    /* 006976d0: mov ecx, eax */ r_ecx = r_eax;
L_006976d2:; BB(0x006976d2);
    /* 006976d2: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 006976d6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006976da: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006976dd: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006976e0: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006976e1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006976e3: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 006976e7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006976e9: fcos  */ ST(0) = cosl(ST(0));
    /* 006976eb: fmul qword ptr [0x6b2c38] */ ST(0) = ST(0) * R_F64((u32)(0x6b2c38u));
    /* 006976f1: fstp dword ptr [edi - 8] */ W_F32((u32)(r_edi+0xfffffff8u), ST(0)); FPOP();
    /* 006976f4: fsin  */ ST(0) = sinl(ST(0));
    /* 006976f6: fmul qword ptr [0x6e57c8] */ ST(0) = ST(0) * R_F64((u32)(0x6e57c8u));
    /* 006976fc: fstp dword ptr [edi - 4] */ W_F32((u32)(r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 006976ff: jne 0x6976d2 */ if (!fZ) goto L_006976d2;
L_00697701:; BB(0x00697701);
    /* 00697701: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00697703:; BB(0x00697703);
    /* 00697703: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00697707: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0069770c: mov esi, 1 */ r_esi = 0x1u;
    /* 00697711: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00697713: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 00697716: shl ebp, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00697718: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 0069771b: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0069771d: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0069771e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00697720: jle 0x69775d */ if ((fZ||fS!=fO)) goto L_0069775d;
L_00697722:; BB(0x00697722);
    /* 00697722: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
L_00697726:; BB(0x00697726);
    /* 00697726: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00697728: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069772a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069772c: je 0x697746 */ if (fZ) goto L_00697746;
L_0069772e:; BB(0x0069772e);
    /* 0069772e: mov edx, esi */ r_edx = r_esi;
L_00697730:; BB(0x00697730);
    /* 00697730: test edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00697732: je 0x69773d */ if (fZ) goto L_0069773d;
L_00697734:; BB(0x00697734);
    /* 00697734: mov edx, 1 */ r_edx = 0x1u;
    /* 00697739: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069773b: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fC = 0; }
L_0069773d:; BB(0x0069773d);
    /* 0069773d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0069773e: mov edx, esi */ r_edx = r_esi;
    /* 00697740: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00697742: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697744: jne 0x697730 */ if (!fZ) goto L_00697730;
L_00697746:; BB(0x00697746);
    /* 00697746: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069774a: mov edx, ebx */ r_edx = r_ebx;
    /* 0069774c: not edx */ r_edx = ~r_edx;
    /* 0069774e: and edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00697750: mov dword ptr [ecx + edi*8 + 4], ebx */ W32((u32)(r_ecx+r_edi*8+0x4u), r_ebx);
    /* 00697754: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00697755: mov dword ptr [ecx + edi*8], edx */ W32((u32)(r_ecx+r_edi*8), r_edx);
    /* 00697758: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00697759: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069775b: jl 0x697726 */ if ((fS!=fO)) goto L_00697726;
L_0069775d:; BB(0x0069775d);
    /* 0069775d: fld dword ptr [0x6e57c0] */ FPUSH(R_F32((u32)(0x6e57c0u)));
    /* 00697763: fdiv dword ptr [esp + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x28u));
    /* 00697767: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069776b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069776c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069776d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069776e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069776f: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00697772: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697775: ret  */ FN_RET(0x006975b0); r_esp += 4; return;
}

void f_00697780(void) /* sub_697780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00697780);
    /* 00697780: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00697781: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00697785: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697787: je 0x6977b9 */ if (fZ) goto L_006977b9;
L_00697789:; BB(0x00697789);
    /* 00697789: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069778c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069778e: je 0x697799 */ if (fZ) goto L_00697799;
L_00697790:; BB(0x00697790);
    /* 00697790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697791: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x697796u); f_00687300();
    /* 00697796: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00697799:; BB(0x00697799);
    /* 00697799: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0069779c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069779e: je 0x6977a9 */ if (fZ) goto L_006977a9;
L_006977a0:; BB(0x006977a0);
    /* 006977a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006977a1: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6977a6u); f_00687300();
    /* 006977a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006977a9:; BB(0x006977a9);
    /* 006977a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006977ab: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 006977ad: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006977b0: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 006977b3: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 006977b6: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
L_006977b9:; BB(0x006977b9);
    /* 006977b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006977ba: ret  */ FN_RET(0x00697780); r_esp += 4; return;
}

void f_006977c0(void) /* sub_6977C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006977c0);
    /* 006977c0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006977c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006977c4: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 006977c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006977c9: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 006977cd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006977cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006977d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006977d1: mov edi, eax */ r_edi = r_eax;
    /* 006977d3: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 006977d7: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 006977d9: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006977dc: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 006977e0: lea ecx, [esi + edi*4 - 0x1c] */ r_ecx = (u32)(r_esi+r_edi*4+0xffffffe4u);
    /* 006977e4: lea edx, [eax + edi] */ r_edx = (u32)(r_eax+r_edi);
    /* 006977e7: lea edx, [ebp + edx*4] */ r_edx = (u32)(r_ebp+r_edx*4);
    /* 006977eb: lea ebp, [eax*4] */ r_ebp = (u32)(r_eax*4);
    /* 006977f2: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 006977f5: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006977f9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 006977fd: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006977ff:; BB(0x006977ff);
    /* 006977ff: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00697802: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00697805: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00697808: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069780b: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069780e: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00697810: fchs  */ ST(0) = -ST(0);
    /* 00697812: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00697815: fmul dword ptr [eax - 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffff8u));
    /* 00697818: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069781a: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0069781c: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0069781f: fmul dword ptr [eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffffcu));
    /* 00697822: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 00697825: fmul dword ptr [eax - 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffff8u));
    /* 00697828: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069782a: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 0069782d: fld dword ptr [eax - 0xc] */ FPUSH(R_F32((u32)(r_eax+0xfffffff4u)));
    /* 00697830: fmul dword ptr [ecx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x38u));
    /* 00697833: fchs  */ ST(0) = -ST(0);
    /* 00697835: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 00697838: fmul dword ptr [eax - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffff0u));
    /* 0069783b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069783d: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00697840: fld dword ptr [eax - 0xc] */ FPUSH(R_F32((u32)(r_eax+0xfffffff4u)));
    /* 00697843: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 00697846: fld dword ptr [eax - 0x10] */ FPUSH(R_F32((u32)(r_eax+0xfffffff0u)));
    /* 00697849: fmul dword ptr [ecx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x38u));
    /* 0069784c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069784e: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 00697851: jae 0x6977ff */ if (!fC) goto L_006977ff;
L_00697853:; BB(0x00697853);
    /* 00697853: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00697856: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0069785a: lea ecx, [esi + edi*4 - 0x20] */ r_ecx = (u32)(r_esi+r_edi*4+0xffffffe0u);
    /* 0069785e: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00697860:; BB(0x00697860);
    /* 00697860: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00697863: fmul dword ptr [eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffffcu));
    /* 00697866: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 00697869: fmul dword ptr [ecx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x18u));
    /* 0069786c: sub eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069786f: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00697872: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00697875: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00697877: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697879: fstp dword ptr [edx - 0x10] */ W_F32((u32)(r_edx+0xfffffff0u), ST(0)); FPOP();
    /* 0069787c: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 0069787f: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00697882: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00697885: fmul dword ptr [ecx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x38u));
    /* 00697888: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069788a: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 0069788d: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 00697890: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00697892: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00697895: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00697898: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069789a: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0069789d: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 006978a0: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 006978a2: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 006978a5: fmul dword ptr [ecx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x28u));
    /* 006978a8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006978aa: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 006978ad: jae 0x697860 */ if (!fC) goto L_00697860;
L_006978af:; BB(0x006978af);
    /* 006978af: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 006978b3: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 006978b6: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006978ba: lea ebp, [eax + edi*4] */ r_ebp = (u32)(r_eax+r_edi*4);
    /* 006978bd: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006978c0: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006978c3: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 006978c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006978c9: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006978cd: jle 0x6979dc */ if ((fZ||fS!=fO)) goto L_006979dc;
L_006978d3:; BB(0x006978d3);
    /* 006978d3: mov ecx, edi */ r_ecx = r_edi;
    /* 006978d5: mov esi, edi */ r_esi = r_edi;
    /* 006978d7: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006978d9: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006978dc: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006978de: lea eax, [ebp + ecx*4 - 0x20] */ r_eax = (u32)(r_ebp+r_ecx*4+0xffffffe0u);
    /* 006978e2: lea ecx, [eax + esi*4 + 0x1c] */ r_ecx = (u32)(r_eax+r_esi*4+0x1cu);
L_006978e6:; BB(0x006978e6);
    /* 006978e6: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 006978e9: fsub dword ptr [eax + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x18u));
    /* 006978ec: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 006978ee: fsub dword ptr [eax + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x1cu));
    /* 006978f1: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 006978f4: fadd dword ptr [eax + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x18u));
    /* 006978f7: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 006978fa: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 006978fd: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 006978ff: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00697901: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697903: fmul dword ptr [edx - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff0u));
    /* 00697906: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697908: fmul dword ptr [edx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff4u));
    /* 0069790b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069790d: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00697910: fmul dword ptr [edx - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff0u));
    /* 00697913: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697915: fmul dword ptr [edx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff4u));
    /* 00697918: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069791a: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0069791d: fld dword ptr [ecx - 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff4u)));
    /* 00697920: fsub dword ptr [eax + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x10u));
    /* 00697923: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 00697926: fsub dword ptr [eax + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x14u));
    /* 00697929: fld dword ptr [ecx - 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff4u)));
    /* 0069792c: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 0069792f: fstp dword ptr [ecx - 0xc] */ W_F32((u32)(r_ecx+0xfffffff4u), ST(0)); FPOP();
    /* 00697932: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 00697935: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 00697938: fstp dword ptr [ecx - 8] */ W_F32((u32)(r_ecx+0xfffffff8u), ST(0)); FPOP();
    /* 0069793b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069793d: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00697940: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00697942: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00697944: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697946: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00697949: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 0069794b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069794d: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00697950: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697952: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00697955: fld dword ptr [ecx - 0x14] */ FPUSH(R_F32((u32)(r_ecx+0xffffffecu)));
    /* 00697958: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 0069795b: fld dword ptr [ecx - 0x10] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff0u)));
    /* 0069795e: fsub dword ptr [eax + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xcu));
    /* 00697961: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00697964: fadd dword ptr [ecx - 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xffffffecu));
    /* 00697967: fstp dword ptr [ecx - 0x14] */ W_F32((u32)(r_ecx+0xffffffecu), ST(0)); FPOP();
    /* 0069796a: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0069796d: fadd dword ptr [ecx - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xfffffff0u));
    /* 00697970: fstp dword ptr [ecx - 0x10] */ W_F32((u32)(r_ecx+0xfffffff0u), ST(0)); FPOP();
    /* 00697973: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697975: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 00697978: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0069797a: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 0069797d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069797f: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00697982: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 00697985: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697987: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 0069798a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069798c: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0069798f: fld dword ptr [ecx - 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe4u)));
    /* 00697992: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00697994: fld dword ptr [ecx - 0x18] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe8u)));
    /* 00697997: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 0069799a: fld dword ptr [ecx - 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe4u)));
    /* 0069799d: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0069799f: fstp dword ptr [ecx - 0x1c] */ W_F32((u32)(r_ecx+0xffffffe4u), ST(0)); FPOP();
    /* 006979a2: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 006979a5: fadd dword ptr [ecx - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xffffffe8u));
    /* 006979a8: fstp dword ptr [ecx - 0x18] */ W_F32((u32)(r_ecx+0xffffffe8u), ST(0)); FPOP();
    /* 006979ab: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006979ad: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 006979b0: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 006979b2: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 006979b5: sub eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006979b8: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006979bb: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006979be: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006979c0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006979c2: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 006979c5: fmul dword ptr [edx - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xffffffe0u));
    /* 006979c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006979ca: fmul dword ptr [edx - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xffffffe4u));
    /* 006979cd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006979cf: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 006979d2: jae 0x6978e6 */ if (!fC) goto L_006978e6;
L_006979d8:; BB(0x006979d8);
    /* 006979d8: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
L_006979dc:; BB(0x006979dc);
    /* 006979dc: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006979dd: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006979e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006979e4: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006979e8: jle 0x697a48 */ if ((fZ||fS!=fO)) goto L_00697a48;
L_006979ea:; BB(0x006979ea);
    /* 006979ea: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_006979ee:; BB(0x006979ee);
    /* 006979ee: mov eax, 1 */ r_eax = 0x1u;
    /* 006979f3: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006979f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 006979f7: jle 0x697a38 */ if ((fZ||fS!=fO)) goto L_00697a38;
L_006979f9:; BB(0x006979f9);
    /* 006979f9: mov ebx, 4 */ r_ebx = 0x4u;
    /* 006979fe: mov esi, edi */ r_esi = r_edi;
    /* 00697a00: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00697a02: sar esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00697a04: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00697a08:; BB(0x00697a08);
    /* 00697a08: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00697a0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697a0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00697a0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697a0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00697a10: call 0x698200 */ r_esp -= 4; W32(r_esp, 0x697a15u); f_00698200();
    /* 00697a15: lea eax, [esi*4] */ r_eax = (u32)(r_esi*4);
    /* 00697a1c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697a1f: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 00697a21: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00697a25: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00697a26: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00697a2a: jne 0x697a08 */ if (!fZ) goto L_00697a08;
L_00697a2c:; BB(0x00697a2c);
    /* 00697a2c: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 00697a30: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00697a34: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_00697a38:; BB(0x00697a38);
    /* 00697a38: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00697a3c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00697a3d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00697a3e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00697a42: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00697a46: jne 0x6979ee */ if (!fZ) goto L_006979ee;
L_00697a48:; BB(0x00697a48);
    /* 00697a48: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00697a4a: jle 0x697a63 */ if ((fZ||fS!=fO)) goto L_00697a63;
L_00697a4c:; BB(0x00697a4c);
    /* 00697a4c: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00697a4d: shr edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00697a50: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00697a51:; BB(0x00697a51);
    /* 00697a51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697a52: call 0x697cc0 */ r_esp -= 4; W32(r_esp, 0x697a57u); f_00697cc0();
    /* 00697a57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697a5a: add ebp, 0x80 */ {  u32 a = r_ebp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00697a60: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00697a61: jne 0x697a51 */ if (!fZ) goto L_00697a51;
L_00697a63:; BB(0x00697a63);
    /* 00697a63: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00697a65: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00697a69: mov ecx, eax */ r_ecx = r_eax;
    /* 00697a6b: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 00697a6e: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00697a70: lea ebp, [edx + ecx*4] */ r_ebp = (u32)(r_edx+r_ecx*4);
    /* 00697a73: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00697a76: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00697a79: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 00697a7c: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
L_00697a7f:; BB(0x00697a7f);
    /* 00697a7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00697a81: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00697a84: sub ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00697a87: fld dword ptr [ebp + edi*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_edi*4+0x4u)));
    /* 00697a8b: fsub dword ptr [ebp + ebx*4 + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ebx*4+0x4u));
    /* 00697a8f: fld dword ptr [ebp + ebx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ebx*4)));
    /* 00697a93: lea edi, [ebp + edi*4] */ r_edi = (u32)(r_ebp+r_edi*4);
    /* 00697a97: lea ebx, [ebp + ebx*4] */ r_ebx = (u32)(r_ebp+r_ebx*4);
    /* 00697a9b: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 00697a9d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697a9f: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00697aa1: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00697aa3: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00697aa6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697aa8: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00697aac: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00697aaf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697ab1: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00697ab3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697ab5: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00697ab8: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00697abb: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 00697ac1: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00697ac3: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 00697ac5: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 00697acb: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00697acf: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00697ad3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00697ad5: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 00697ad8: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 00697adc: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00697adf: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00697ae3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00697ae5: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00697ae8: fsub dword ptr [esp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x10u));
    /* 00697aec: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00697aee: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 00697af1: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 00697af4: fld dword ptr [ebp + edi*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_edi*4+0x4u)));
    /* 00697af8: fsub dword ptr [ebp + ebx*4 + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ebx*4+0x4u));
    /* 00697afc: fld dword ptr [ebp + ebx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ebx*4)));
    /* 00697b00: lea edi, [ebp + edi*4] */ r_edi = (u32)(r_ebp+r_edi*4);
    /* 00697b04: lea ebx, [ebp + ebx*4] */ r_ebx = (u32)(r_ebp+r_ebx*4);
    /* 00697b08: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 00697b0a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697b0c: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00697b0f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00697b11: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00697b14: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697b16: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00697b1a: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 00697b1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697b1f: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 00697b22: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697b24: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00697b27: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 00697b2a: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 00697b30: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00697b32: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 00697b34: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 00697b3a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00697b3e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00697b42: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00697b44: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00697b46: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 00697b4a: fstp dword ptr [ecx - 0xc] */ W_F32((u32)(r_ecx+0xfffffff4u), ST(0)); FPOP();
    /* 00697b4d: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00697b51: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00697b53: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 00697b56: fsub dword ptr [esp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x10u));
    /* 00697b5a: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00697b5d: lea edi, [ecx - 0xc] */ r_edi = (u32)(r_ecx+0xfffffff4u);
    /* 00697b60: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697b63: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00697b66: lea ebx, [edx - 8] */ r_ebx = (u32)(r_edx+0xfffffff8u);
    /* 00697b69: fstp dword ptr [ecx - 8] */ W_F32((u32)(r_ecx+0xfffffff8u), ST(0)); FPOP();
    /* 00697b6c: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00697b6e: jb 0x697a7f */ if (fC) goto L_00697a7f;
L_00697b74:; BB(0x00697b74);
    /* 00697b74: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00697b78: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00697b7c: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00697b80: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00697b83: lea ecx, [ebx*4] */ r_ecx = (u32)(r_ebx*4);
    /* 00697b8a: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697b8c: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00697b90: mov edx, edi */ r_edx = r_edi;
    /* 00697b92: mov esi, edi */ r_esi = r_edi;
    /* 00697b94: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00697b97:; BB(0x00697b97);
    /* 00697b97: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00697b9a: fmul dword ptr [ecx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffff4u));
    /* 00697b9d: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00697b9f: fmul dword ptr [ecx - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffff8u));
    /* 00697ba2: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00697ba5: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00697ba8: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00697bab: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697bae: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697bb0: lea ebp, [ecx - 0xc] */ r_ebp = (u32)(r_ecx+0xfffffff4u);
    /* 00697bb3: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00697bb5: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 00697bb8: fld dword ptr [eax - 0x1c] */ FPUSH(R_F32((u32)(r_eax+0xffffffe4u)));
    /* 00697bbb: fmul dword ptr [ecx - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xffffffd8u));
    /* 00697bbe: fld dword ptr [ecx - 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0xffffffd4u)));
    /* 00697bc1: fmul dword ptr [eax - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xffffffe0u));
    /* 00697bc4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697bc6: fchs  */ ST(0) = -ST(0);
    /* 00697bc8: fstp dword ptr [esi - 0x10] */ W_F32((u32)(r_esi+0xfffffff0u), ST(0)); FPOP();
    /* 00697bcb: fld dword ptr [ecx - 0x24] */ FPUSH(R_F32((u32)(r_ecx+0xffffffdcu)));
    /* 00697bce: fmul dword ptr [eax - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xffffffecu));
    /* 00697bd1: fld dword ptr [ecx - 0x20] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe0u)));
    /* 00697bd4: fmul dword ptr [eax - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xffffffe8u));
    /* 00697bd7: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697bd9: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00697bdc: fld dword ptr [ecx - 0x24] */ FPUSH(R_F32((u32)(r_ecx+0xffffffdcu)));
    /* 00697bdf: fmul dword ptr [eax - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xffffffe8u));
    /* 00697be2: fld dword ptr [ecx - 0x20] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe0u)));
    /* 00697be5: fmul dword ptr [eax - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xffffffecu));
    /* 00697be8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697bea: fchs  */ ST(0) = -ST(0);
    /* 00697bec: fstp dword ptr [esi - 0xc] */ W_F32((u32)(r_esi+0xfffffff4u), ST(0)); FPOP();
    /* 00697bef: fld dword ptr [ecx - 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe4u)));
    /* 00697bf2: fmul dword ptr [eax - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffff4u));
    /* 00697bf5: fld dword ptr [ecx - 0x18] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe8u)));
    /* 00697bf8: fmul dword ptr [eax - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffff0u));
    /* 00697bfb: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697bfd: fstp dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0)); FPOP();
    /* 00697c00: fld dword ptr [ecx - 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe4u)));
    /* 00697c03: fmul dword ptr [eax - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffff0u));
    /* 00697c06: fld dword ptr [ecx - 0x18] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe8u)));
    /* 00697c09: fmul dword ptr [eax - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffff4u));
    /* 00697c0c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697c0e: fchs  */ ST(0) = -ST(0);
    /* 00697c10: fstp dword ptr [esi - 8] */ W_F32((u32)(r_esi+0xfffffff8u), ST(0)); FPOP();
    /* 00697c13: fld dword ptr [ecx - 0x14] */ FPUSH(R_F32((u32)(r_ecx+0xffffffecu)));
    /* 00697c16: fmul dword ptr [eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffffcu));
    /* 00697c19: fld dword ptr [ecx - 0x10] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff0u)));
    /* 00697c1c: fmul dword ptr [eax - 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffff8u));
    /* 00697c1f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697c21: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00697c23: fld dword ptr [ecx - 0x14] */ FPUSH(R_F32((u32)(r_ecx+0xffffffecu)));
    /* 00697c26: fmul dword ptr [eax - 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffff8u));
    /* 00697c29: fld dword ptr [ecx - 0x10] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff0u)));
    /* 00697c2c: fmul dword ptr [eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffffcu));
    /* 00697c2f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697c31: fchs  */ ST(0) = -ST(0);
    /* 00697c33: fstp dword ptr [esi - 4] */ W_F32((u32)(r_esi+0xfffffffcu), ST(0)); FPOP();
    /* 00697c36: jb 0x697b97 */ if (fC) goto L_00697b97;
L_00697c3c:; BB(0x00697c3c);
    /* 00697c3c: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00697c40: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00697c44: mov eax, edi */ r_eax = r_edi;
    /* 00697c46: lea ecx, [edx + ecx + 8] */ r_ecx = (u32)(r_edx+r_ecx+0x8u);
    /* 00697c4a: mov edx, 2 */ r_edx = 0x2u;
    /* 00697c4f: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00697c51: lea edx, [eax + edx*4] */ r_edx = (u32)(r_eax+r_edx*4);
L_00697c54:; BB(0x00697c54);
    /* 00697c54: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00697c57: sub eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00697c5a: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00697c5d: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00697c60: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00697c63: fchs  */ ST(0) = -ST(0);
    /* 00697c65: fstp dword ptr [ecx - 0x18] */ W_F32((u32)(r_ecx+0xffffffe8u), ST(0)); FPOP();
    /* 00697c68: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00697c6b: lea esi, [ecx - 8] */ r_esi = (u32)(r_ecx+0xfffffff8u);
    /* 00697c6e: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
    /* 00697c70: fchs  */ ST(0) = -ST(0);
    /* 00697c72: fstp dword ptr [ecx - 0x14] */ W_F32((u32)(r_ecx+0xffffffecu), ST(0)); FPOP();
    /* 00697c75: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00697c78: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00697c7a: fst dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0));
    /* 00697c7d: fchs  */ ST(0) = -ST(0);
    /* 00697c7f: fstp dword ptr [ecx - 0x10] */ W_F32((u32)(r_ecx+0xfffffff0u), ST(0)); FPOP();
    /* 00697c82: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00697c84: fst dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0));
    /* 00697c87: fchs  */ ST(0) = -ST(0);
    /* 00697c89: fstp dword ptr [ecx - 0xc] */ W_F32((u32)(r_ecx+0xfffffff4u), ST(0)); FPOP();
    /* 00697c8c: jb 0x697c54 */ if (fC) goto L_00697c54;
L_00697c8e:; BB(0x00697c8e);
    /* 00697c8e: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00697c92: mov ecx, edi */ r_ecx = r_edi;
    /* 00697c94: mov eax, edi */ r_eax = r_edi;
L_00697c96:; BB(0x00697c96);
    /* 00697c96: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 00697c99: sub eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00697c9c: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00697c9f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00697ca1: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00697ca3: mov esi, dword ptr [ecx - 8] */ r_esi = R32((u32)(r_ecx+0xfffffff8u));
    /* 00697ca6: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00697ca9: mov esi, dword ptr [ecx - 0xc] */ r_esi = R32((u32)(r_ecx+0xfffffff4u));
    /* 00697cac: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00697caf: mov esi, dword ptr [ecx - 0x10] */ r_esi = R32((u32)(r_ecx+0xfffffff0u));
    /* 00697cb2: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00697cb5: ja 0x697c96 */ if ((!fC&&!fZ)) goto L_00697c96;
L_00697cb7:; BB(0x00697cb7);
    /* 00697cb7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00697cb8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00697cb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697cba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697cbb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697cbe: ret  */ FN_RET(0x006977c0); r_esp += 4; return;
}

void f_00697cc0(void) /* sub_697CC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00697cc0);
    /* 00697cc0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697cc3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00697cc7: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 00697cca: fsub dword ptr [eax + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x38u));
    /* 00697ccd: fld dword ptr [eax + 0x7c] */ FPUSH(R_F32((u32)(r_eax+0x7cu)));
    /* 00697cd0: fsub dword ptr [eax + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x3cu));
    /* 00697cd3: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00697cd6: fadd dword ptr [eax + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x78u));
    /* 00697cd9: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 00697cdc: fld dword ptr [eax + 0x7c] */ FPUSH(R_F32((u32)(r_eax+0x7cu)));
    /* 00697cdf: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00697ce2: fstp dword ptr [eax + 0x7c] */ W_F32((u32)(r_eax+0x7cu), ST(0)); FPOP();
    /* 00697ce5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697ce7: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00697cea: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00697ced: fld dword ptr [eax + 0x70] */ FPUSH(R_F32((u32)(r_eax+0x70u)));
    /* 00697cf0: fsub dword ptr [eax + 0x30] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x30u));
    /* 00697cf3: fld dword ptr [eax + 0x74] */ FPUSH(R_F32((u32)(r_eax+0x74u)));
    /* 00697cf6: fsub dword ptr [eax + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x34u));
    /* 00697cf9: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 00697cfc: fadd dword ptr [eax + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x70u));
    /* 00697cff: fstp dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0)); FPOP();
    /* 00697d02: fld dword ptr [eax + 0x74] */ FPUSH(R_F32((u32)(r_eax+0x74u)));
    /* 00697d05: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 00697d08: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 00697d0b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697d0d: fmul dword ptr [0x6e57dc] */ ST(0) = ST(0) * R_F32((u32)(0x6e57dcu));
    /* 00697d13: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697d15: fmul dword ptr [0x6e57d8] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d8u));
    /* 00697d1b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697d1d: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00697d20: fmul dword ptr [0x6e57dc] */ ST(0) = ST(0) * R_F32((u32)(0x6e57dcu));
    /* 00697d26: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697d28: fmul dword ptr [0x6e57d8] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d8u));
    /* 00697d2e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697d30: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00697d33: fld dword ptr [eax + 0x68] */ FPUSH(R_F32((u32)(r_eax+0x68u)));
    /* 00697d36: fsub dword ptr [eax + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x28u));
    /* 00697d39: fld dword ptr [eax + 0x6c] */ FPUSH(R_F32((u32)(r_eax+0x6cu)));
    /* 00697d3c: fsub dword ptr [eax + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x2cu));
    /* 00697d3f: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 00697d42: fadd dword ptr [eax + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x68u));
    /* 00697d45: fstp dword ptr [eax + 0x68] */ W_F32((u32)(r_eax+0x68u), ST(0)); FPOP();
    /* 00697d48: fld dword ptr [eax + 0x6c] */ FPUSH(R_F32((u32)(r_eax+0x6cu)));
    /* 00697d4b: fadd dword ptr [eax + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x2cu));
    /* 00697d4e: fstp dword ptr [eax + 0x6c] */ W_F32((u32)(r_eax+0x6cu), ST(0)); FPOP();
    /* 00697d51: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697d53: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00697d55: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00697d5b: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00697d5e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00697d60: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00697d66: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00697d69: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00697d6b: fld dword ptr [eax + 0x60] */ FPUSH(R_F32((u32)(r_eax+0x60u)));
    /* 00697d6e: fsub dword ptr [eax + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x20u));
    /* 00697d71: fld dword ptr [eax + 0x64] */ FPUSH(R_F32((u32)(r_eax+0x64u)));
    /* 00697d74: fsub dword ptr [eax + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x24u));
    /* 00697d77: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 00697d7a: fadd dword ptr [eax + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x60u));
    /* 00697d7d: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
    /* 00697d80: fld dword ptr [eax + 0x64] */ FPUSH(R_F32((u32)(r_eax+0x64u)));
    /* 00697d83: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 00697d86: fstp dword ptr [eax + 0x64] */ W_F32((u32)(r_eax+0x64u), ST(0)); FPOP();
    /* 00697d89: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697d8b: fmul dword ptr [0x6e57d8] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d8u));
    /* 00697d91: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697d93: fmul dword ptr [0x6e57dc] */ ST(0) = ST(0) * R_F32((u32)(0x6e57dcu));
    /* 00697d99: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697d9b: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00697d9e: fmul dword ptr [0x6e57d8] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d8u));
    /* 00697da4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697da6: fmul dword ptr [0x6e57dc] */ ST(0) = ST(0) * R_F32((u32)(0x6e57dcu));
    /* 00697dac: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697dae: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00697db1: fld dword ptr [eax + 0x58] */ FPUSH(R_F32((u32)(r_eax+0x58u)));
    /* 00697db4: fsub dword ptr [eax + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x18u));
    /* 00697db7: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 00697dba: fsub dword ptr [eax + 0x5c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x5cu));
    /* 00697dbd: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 00697dc0: fadd dword ptr [eax + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x58u));
    /* 00697dc3: fstp dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0)); FPOP();
    /* 00697dc6: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 00697dc9: fadd dword ptr [eax + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x5cu));
    /* 00697dcc: fstp dword ptr [eax + 0x5c] */ W_F32((u32)(r_eax+0x5cu), ST(0)); FPOP();
    /* 00697dcf: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00697dd2: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00697dd5: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00697dd8: fsub dword ptr [eax + 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x50u));
    /* 00697ddb: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00697dde: fsub dword ptr [eax + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x54u));
    /* 00697de1: fld dword ptr [eax + 0x50] */ FPUSH(R_F32((u32)(r_eax+0x50u)));
    /* 00697de4: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 00697de7: fstp dword ptr [eax + 0x50] */ W_F32((u32)(r_eax+0x50u), ST(0)); FPOP();
    /* 00697dea: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00697ded: fadd dword ptr [eax + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x54u));
    /* 00697df0: fstp dword ptr [eax + 0x54] */ W_F32((u32)(r_eax+0x54u), ST(0)); FPOP();
    /* 00697df3: fld dword ptr [0x6e57dc] */ FPUSH(R_F32((u32)(0x6e57dcu)));
    /* 00697df9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00697dfb: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00697dfd: fmul dword ptr [0x6e57d8] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d8u));
    /* 00697e03: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697e05: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00697e08: fmul dword ptr [0x6e57d8] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d8u));
    /* 00697e0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697e10: fmul dword ptr [0x6e57dc] */ ST(0) = ST(0) * R_F32((u32)(0x6e57dcu));
    /* 00697e16: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697e18: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00697e1b: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00697e1e: fsub dword ptr [eax + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x48u));
    /* 00697e21: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00697e24: fsub dword ptr [eax + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4cu));
    /* 00697e27: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00697e2a: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00697e2d: fstp dword ptr [eax + 0x48] */ W_F32((u32)(r_eax+0x48u), ST(0)); FPOP();
    /* 00697e30: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 00697e33: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00697e36: fstp dword ptr [eax + 0x4c] */ W_F32((u32)(r_eax+0x4cu), ST(0)); FPOP();
    /* 00697e39: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697e3b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00697e3d: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00697e43: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00697e46: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00697e48: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00697e4e: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00697e51: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00697e53: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00697e55: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 00697e58: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00697e5b: fsub dword ptr [eax + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x44u));
    /* 00697e5e: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00697e61: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00697e63: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 00697e66: fld dword ptr [eax + 0x44] */ FPUSH(R_F32((u32)(r_eax+0x44u)));
    /* 00697e69: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 00697e6c: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 00697e6f: fld dword ptr [0x6e57d8] */ FPUSH(R_F32((u32)(0x6e57d8u)));
    /* 00697e75: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00697e77: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00697e79: fmul dword ptr [0x6e57dc] */ ST(0) = ST(0) * R_F32((u32)(0x6e57dcu));
    /* 00697e7f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00697e81: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00697e85: fmul dword ptr [0x6e57dc] */ ST(0) = ST(0) * R_F32((u32)(0x6e57dcu));
    /* 00697e8b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697e8d: fmul dword ptr [0x6e57d8] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d8u));
    /* 00697e93: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00697e95: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697e97: fsub dword ptr [eax + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x24u));
    /* 00697e9a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00697e9e: fsub dword ptr [eax + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x20u));
    /* 00697ea1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00697ea5: fadd dword ptr [eax + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x20u));
    /* 00697ea8: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00697eab: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00697ead: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 00697eb0: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00697eb3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697eb5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697eb7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00697eb9: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00697ebf: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00697ec1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697ec3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00697ec5: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00697ecb: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00697ece: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00697ed0: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00697ed3: fsub dword ptr [eax + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x2cu));
    /* 00697ed6: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 00697ed9: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 00697edc: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00697edf: fadd dword ptr [eax + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x28u));
    /* 00697ee2: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00697ee5: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00697ee8: fadd dword ptr [eax + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x2cu));
    /* 00697eeb: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00697eee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00697ef0: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00697ef3: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00697ef6: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 00697ef9: fsub dword ptr [eax + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x10u));
    /* 00697efc: fld dword ptr [eax + 0x34] */ FPUSH(R_F32((u32)(r_eax+0x34u)));
    /* 00697eff: fsub dword ptr [eax + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x14u));
    /* 00697f02: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 00697f05: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 00697f08: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00697f0b: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00697f0e: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 00697f11: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00697f14: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697f16: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00697f18: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00697f1e: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00697f21: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00697f23: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00697f29: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00697f2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00697f2e: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00697f31: fsub dword ptr [eax + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x18u));
    /* 00697f34: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00697f37: fsub dword ptr [eax + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x1cu));
    /* 00697f3a: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00697f3d: fadd dword ptr [eax + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x18u));
    /* 00697f40: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00697f43: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 00697f46: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00697f49: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00697f4c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697f4e: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00697f51: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00697f53: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 00697f56: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00697f58: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 00697f5b: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00697f5e: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00697f60: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00697f64: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697f66: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00697f68: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 00697f6b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00697f6d: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00697f6f: lea ecx, [eax + 0x60] */ r_ecx = (u32)(r_eax+0x60u);
    /* 00697f72: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00697f75: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00697f77: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00697f7a: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 00697f7d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00697f7f: fsub dword ptr [eax + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xcu));
    /* 00697f82: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00697f86: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00697f88: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00697f8a: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00697f8c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00697f8e: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00697f90: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00697f93: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00697f95: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00697f98: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 00697f9b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00697f9f: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00697fa2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00697fa6: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00697faa: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00697fad: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00697fb1: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 00697fb5: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00697fb8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00697fbc: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00697fbe: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00697fc1: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 00697fc5: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00697fc8: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 00697fcb: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 00697fce: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00697fd1: fsub dword ptr [eax + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x28u));
    /* 00697fd4: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 00697fd7: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 00697fda: fld dword ptr [eax + 0x30] */ FPUSH(R_F32((u32)(r_eax+0x30u)));
    /* 00697fdd: fsub dword ptr [eax + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x20u));
    /* 00697fe0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00697fe4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00697fe6: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00697fe8: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00697feb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00697fed: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00697fef: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00697ff2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00697ff4: fld dword ptr [eax + 0x34] */ FPUSH(R_F32((u32)(r_eax+0x34u)));
    /* 00697ff7: fsub dword ptr [eax + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x24u));
    /* 00697ffa: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00697ffd: fsub dword ptr [eax + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x2cu));
    /* 00698000: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00698004: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00698006: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00698008: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0069800b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069800d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0069800f: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00698012: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00698014: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 00698017: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 0069801a: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 0069801d: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 00698020: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00698024: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 00698028: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 0069802b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0069802f: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 00698033: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 00698036: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00698038: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0069803a: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 0069803d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0069803f: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00698042: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00698044: fld dword ptr [eax + 0x44] */ FPUSH(R_F32((u32)(r_eax+0x44u)));
    /* 00698047: fsub dword ptr [eax + 0x64] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x64u));
    /* 0069804a: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0069804d: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0069804f: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00698052: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00698054: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00698056: fld dword ptr [eax + 0x64] */ FPUSH(R_F32((u32)(r_eax+0x64u)));
    /* 00698059: fadd dword ptr [eax + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x44u));
    /* 0069805c: fstp dword ptr [eax + 0x64] */ W_F32((u32)(r_eax+0x64u), ST(0)); FPOP();
    /* 0069805f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00698061: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00698063: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00698069: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 0069806c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069806e: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00698070: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 00698076: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 00698079: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069807b: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 0069807e: fsub dword ptr [eax + 0x6c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x6cu));
    /* 00698081: fld dword ptr [eax + 0x68] */ FPUSH(R_F32((u32)(r_eax+0x68u)));
    /* 00698084: fsub dword ptr [eax + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x48u));
    /* 00698087: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 0069808a: fadd dword ptr [eax + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x68u));
    /* 0069808d: fstp dword ptr [eax + 0x68] */ W_F32((u32)(r_eax+0x68u), ST(0)); FPOP();
    /* 00698090: fld dword ptr [eax + 0x6c] */ FPUSH(R_F32((u32)(r_eax+0x6cu)));
    /* 00698093: fadd dword ptr [eax + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4cu));
    /* 00698096: fstp dword ptr [eax + 0x6c] */ W_F32((u32)(r_eax+0x6cu), ST(0)); FPOP();
    /* 00698099: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069809b: fstp dword ptr [eax + 0x48] */ W_F32((u32)(r_eax+0x48u), ST(0)); FPOP();
    /* 0069809e: fstp dword ptr [eax + 0x4c] */ W_F32((u32)(r_eax+0x4cu), ST(0)); FPOP();
    /* 006980a1: fld dword ptr [eax + 0x70] */ FPUSH(R_F32((u32)(r_eax+0x70u)));
    /* 006980a4: fsub dword ptr [eax + 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x50u));
    /* 006980a7: fld dword ptr [eax + 0x74] */ FPUSH(R_F32((u32)(r_eax+0x74u)));
    /* 006980aa: fsub dword ptr [eax + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x54u));
    /* 006980ad: fld dword ptr [eax + 0x50] */ FPUSH(R_F32((u32)(r_eax+0x50u)));
    /* 006980b0: fadd dword ptr [eax + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x70u));
    /* 006980b3: fstp dword ptr [eax + 0x70] */ W_F32((u32)(r_eax+0x70u), ST(0)); FPOP();
    /* 006980b6: fld dword ptr [eax + 0x54] */ FPUSH(R_F32((u32)(r_eax+0x54u)));
    /* 006980b9: fadd dword ptr [eax + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x74u));
    /* 006980bc: fstp dword ptr [eax + 0x74] */ W_F32((u32)(r_eax+0x74u), ST(0)); FPOP();
    /* 006980bf: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 006980c1: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 006980c3: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 006980c9: fstp dword ptr [eax + 0x50] */ W_F32((u32)(r_eax+0x50u), ST(0)); FPOP();
    /* 006980cc: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 006980ce: fmul dword ptr [0x6e57d4] */ ST(0) = ST(0) * R_F32((u32)(0x6e57d4u));
    /* 006980d4: fstp dword ptr [eax + 0x54] */ W_F32((u32)(r_eax+0x54u), ST(0)); FPOP();
    /* 006980d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006980d9: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 006980dc: fsub dword ptr [eax + 0x58] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x58u));
    /* 006980df: fld dword ptr [eax + 0x7c] */ FPUSH(R_F32((u32)(r_eax+0x7cu)));
    /* 006980e2: fsub dword ptr [eax + 0x5c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x5cu));
    /* 006980e5: fld dword ptr [eax + 0x58] */ FPUSH(R_F32((u32)(r_eax+0x58u)));
    /* 006980e8: fadd dword ptr [eax + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x78u));
    /* 006980eb: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 006980ee: fld dword ptr [eax + 0x5c] */ FPUSH(R_F32((u32)(r_eax+0x5cu)));
    /* 006980f1: fadd dword ptr [eax + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x7cu));
    /* 006980f4: fstp dword ptr [eax + 0x7c] */ W_F32((u32)(r_eax+0x7cu), ST(0)); FPOP();
    /* 006980f7: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 006980f9: fadd dword ptr [eax + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x48u));
    /* 006980fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006980fe: fsub dword ptr [eax + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x48u));
    /* 00698101: fld dword ptr [eax + 0x50] */ FPUSH(R_F32((u32)(r_eax+0x50u)));
    /* 00698104: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 00698107: fld dword ptr [eax + 0x50] */ FPUSH(R_F32((u32)(r_eax+0x50u)));
    /* 0069810a: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 0069810d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00698111: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00698113: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00698115: fstp dword ptr [eax + 0x58] */ W_F32((u32)(r_eax+0x58u), ST(0)); FPOP();
    /* 00698118: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0069811a: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0069811c: fstp dword ptr [eax + 0x50] */ W_F32((u32)(r_eax+0x50u), ST(0)); FPOP();
    /* 0069811f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00698121: fld dword ptr [eax + 0x54] */ FPUSH(R_F32((u32)(r_eax+0x54u)));
    /* 00698124: fsub dword ptr [eax + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x44u));
    /* 00698127: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00698129: fsub dword ptr [eax + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4cu));
    /* 0069812c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069812f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00698133: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00698135: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00698137: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 0069813a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0069813c: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0069813e: fstp dword ptr [eax + 0x48] */ W_F32((u32)(r_eax+0x48u), ST(0)); FPOP();
    /* 00698141: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00698143: fld dword ptr [eax + 0x44] */ FPUSH(R_F32((u32)(r_eax+0x44u)));
    /* 00698146: fadd dword ptr [eax + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x54u));
    /* 00698149: fstp dword ptr [esp - 8] */ W_F32((u32)(r_esp+0xfffffff8u), ST(0)); FPOP();
    /* 0069814d: fadd dword ptr [eax + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4cu));
    /* 00698150: fld dword ptr [esp - 4] */ FPUSH(R_F32((u32)(r_esp+0xfffffffcu)));
    /* 00698154: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00698158: fstp dword ptr [eax + 0x4c] */ W_F32((u32)(r_eax+0x4cu), ST(0)); FPOP();
    /* 0069815b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0069815f: fsub dword ptr [esp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xfffffffcu));
    /* 00698163: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00698167: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 0069816a: fld dword ptr [esp - 8] */ FPUSH(R_F32((u32)(r_esp+0xfffffff8u)));
    /* 0069816e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00698170: fstp dword ptr [eax + 0x5c] */ W_F32((u32)(r_eax+0x5cu), ST(0)); FPOP();
    /* 00698173: fsub dword ptr [esp - 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xfffffff8u));
    /* 00698177: fstp dword ptr [eax + 0x54] */ W_F32((u32)(r_eax+0x54u), ST(0)); FPOP();
    /* 0069817a: jmp 0x698180 */ goto L_00698180;
L_00698180:; BB(0x00698180);
    /* 00698180: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698181: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00698185: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00698188: fadd dword ptr [eax + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x18u));
    /* 0069818b: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 0069818e: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 00698191: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00698193: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 00698196: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00698199: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0069819b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069819f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006981a1: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 006981a3: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 006981a6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006981a8: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 006981aa: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 006981ad: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006981af: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 006981b2: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 006981b5: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 006981b8: fsub dword ptr [eax + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xcu));
    /* 006981bb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006981bf: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 006981c1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 006981c3: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 006981c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006981c7: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 006981c9: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 006981cc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006981ce: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 006981d1: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 006981d4: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 006981d7: fadd dword ptr [eax + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1cu));
    /* 006981da: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006981de: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 006981e2: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 006981e5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006981e9: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 006981ed: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 006981f0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006981f2: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 006981f4: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 006981f7: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 006981f9: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 006981fc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006981fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006981ff: ret  */ FN_RET(0x00697cc0); r_esp += 4; return;
}

