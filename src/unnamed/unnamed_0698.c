#include "protos.h"

void f_00698200(void) /* sub_698200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00698200);
    /* 00698200: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00698204: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698205: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00698209: mov edx, ecx */ r_edx = r_ecx;
    /* 0069820b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069820c: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00698210: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00698212: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00698215: lea eax, [edi + edx*4 - 0x20] */ r_eax = (u32)(r_edi+r_edx*4+0xffffffe0u);
    /* 00698219: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069821b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0069821f: lea ecx, [eax + ecx*4 + 0x1c] */ r_ecx = (u32)(r_eax+r_ecx*4+0x1cu);
L_00698223:; BB(0x00698223);
    /* 00698223: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 00698226: fsub dword ptr [eax + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x18u));
    /* 00698229: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0069822b: fsub dword ptr [eax + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x1cu));
    /* 0069822e: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 00698231: fadd dword ptr [eax + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x18u));
    /* 00698234: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00698237: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0069823a: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 0069823c: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0069823e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00698240: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00698243: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00698245: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00698247: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00698249: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 0069824c: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 0069824e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00698250: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00698253: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698255: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00698257: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0069825a: fld dword ptr [ecx - 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff4u)));
    /* 0069825d: fsub dword ptr [eax + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x10u));
    /* 00698260: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 00698263: fsub dword ptr [eax + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x14u));
    /* 00698266: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00698269: fadd dword ptr [ecx - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xfffffff4u));
    /* 0069826c: fstp dword ptr [ecx - 0xc] */ W_F32((u32)(r_ecx+0xfffffff4u), ST(0)); FPOP();
    /* 0069826f: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 00698272: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 00698275: fstp dword ptr [ecx - 8] */ W_F32((u32)(r_ecx+0xfffffff8u), ST(0)); FPOP();
    /* 00698278: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069827a: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 0069827d: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0069827f: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00698281: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00698283: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00698286: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00698288: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069828a: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 0069828d: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069828f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00698291: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00698294: fld dword ptr [ecx - 0x14] */ FPUSH(R_F32((u32)(r_ecx+0xffffffecu)));
    /* 00698297: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 0069829a: fld dword ptr [ecx - 0x10] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff0u)));
    /* 0069829d: fsub dword ptr [eax + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xcu));
    /* 006982a0: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 006982a3: fadd dword ptr [ecx - 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xffffffecu));
    /* 006982a6: fstp dword ptr [ecx - 0x14] */ W_F32((u32)(r_ecx+0xffffffecu), ST(0)); FPOP();
    /* 006982a9: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 006982ac: fadd dword ptr [ecx - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xfffffff0u));
    /* 006982af: fstp dword ptr [ecx - 0x10] */ W_F32((u32)(r_ecx+0xfffffff0u), ST(0)); FPOP();
    /* 006982b2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006982b4: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 006982b7: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 006982b9: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 006982bb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006982bd: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 006982c0: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 006982c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006982c4: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 006982c7: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006982c9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006982cb: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 006982ce: fld dword ptr [ecx - 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe4u)));
    /* 006982d1: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 006982d3: fld dword ptr [ecx - 0x18] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe8u)));
    /* 006982d6: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 006982d9: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 006982db: fadd dword ptr [ecx - 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xffffffe4u));
    /* 006982de: fstp dword ptr [ecx - 0x1c] */ W_F32((u32)(r_ecx+0xffffffe4u), ST(0)); FPOP();
    /* 006982e1: fld dword ptr [ecx - 0x18] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe8u)));
    /* 006982e4: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 006982e7: fstp dword ptr [ecx - 0x18] */ W_F32((u32)(r_ecx+0xffffffe8u), ST(0)); FPOP();
    /* 006982ea: sub eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006982ed: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006982f0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006982f2: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 006982f5: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 006982f7: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 006982f9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006982fb: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 006982fe: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00698300: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00698302: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00698305: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698307: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00698309: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069830b: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0069830e: jae 0x698223 */ if (!fC) goto L_00698223;
L_00698314:; BB(0x00698314);
    /* 00698314: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698315: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698316: ret  */ FN_RET(0x00698200); r_esp += 4; return;
}

void f_00698320(void) /* sub_698320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00698320);
    /* 00698320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00698321: mov ebp, esp */ r_ebp = r_esp;
    /* 00698323: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00698326: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00698329: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069832a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069832b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069832c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0069832e: mov ebx, eax */ r_ebx = r_eax;
    /* 00698330: mov ecx, eax */ r_ecx = r_eax;
    /* 00698332: mov edi, eax */ r_edi = r_eax;
    /* 00698334: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00698337: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0069833a: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069833d: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0069833f: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00698342: sar edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00698345: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00698347: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0069834a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0069834d: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 00698350: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x698355u); f_00687340();
    /* 00698355: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00698358: mov eax, esp */ r_eax = r_esp;
    /* 0069835a: lea ecx, [ebx*4] */ r_ecx = (u32)(r_ebx*4);
    /* 00698361: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00698364: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698366: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00698369: lea esi, [ecx + eax] */ r_esi = (u32)(r_ecx+r_eax);
    /* 0069836c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0069836f: lea edx, [eax + edx*4] */ r_edx = (u32)(r_eax+r_edx*4);
    /* 00698372: lea eax, [edx + 4] */ r_eax = (u32)(r_edx+0x4u);
    /* 00698375: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00698378: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0069837b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0069837e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698380: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00698382: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698384: jle 0x6983c5 */ if ((fZ||fS!=fO)) goto L_006983c5;
L_00698386:; BB(0x00698386);
    /* 00698386: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00698389: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069838c: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069838f: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00698392: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00698395: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00698397: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0069839a: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 0069839c: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069839f: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006983a1: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 006983a4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006983a6: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 006983a9: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 006983ab: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 006983ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006983af: fstp dword ptr [esi + ecx*4 - 8] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffff8u), ST(0)); FPOP();
    /* 006983b3: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 006983b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006983b7: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 006983ba: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006983bc: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 006983c0: jl 0x698386 */ if ((fS!=fO)) goto L_00698386;
L_006983c2:; BB(0x006983c2);
    /* 006983c2: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
L_006983c5:; BB(0x006983c5);
    /* 006983c5: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 006983c8: sub ebx, dword ptr [ebp - 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006983cb: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006983ce: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006983d0: jge 0x698409 */ if ((fS==fO)) goto L_00698409;
L_006983d2:; BB(0x006983d2);
    /* 006983d2: fld dword ptr [edx - 8] */ FPUSH(R_F32((u32)(r_edx+0xfffffff8u)));
    /* 006983d5: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 006983d7: fld dword ptr [edx - 0x10] */ FPUSH(R_F32((u32)(r_edx+0xfffffff0u)));
    /* 006983da: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006983dd: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006983e0: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 006983e3: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006983e6: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006983e9: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006983eb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006983ed: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 006983f0: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 006983f2: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 006983f4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006983f6: fstp dword ptr [esi + ecx*4 - 8] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffff8u), ST(0)); FPOP();
    /* 006983fa: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 006983fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006983fe: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00698401: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00698403: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00698407: jl 0x6983d2 */ if ((fS!=fO)) goto L_006983d2;
L_00698409:; BB(0x00698409);
    /* 00698409: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069840c: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0069840f: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698411: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00698414: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698416: jge 0x698452 */ if ((fS==fO)) goto L_00698452;
L_00698418:; BB(0x00698418);
    /* 00698418: fld dword ptr [edx - 8] */ FPUSH(R_F32((u32)(r_edx+0xfffffff8u)));
    /* 0069841b: sub edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069841e: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00698421: fchs  */ ST(0) = -ST(0);
    /* 00698423: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 00698425: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00698427: fchs  */ ST(0) = -ST(0);
    /* 00698429: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 0069842c: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069842f: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00698432: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698434: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00698436: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00698439: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0069843b: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0069843d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069843f: fstp dword ptr [esi + ecx*4 - 8] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffff8u), ST(0)); FPOP();
    /* 00698443: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00698445: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00698447: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 0069844a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069844c: fstp dword ptr [esi + ecx*4 - 4] */ W_F32((u32)(r_esi+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00698450: jl 0x698418 */ if ((fS!=fO)) goto L_00698418;
L_00698452:; BB(0x00698452);
    /* 00698452: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00698455: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00698458: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 0069845b: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069845e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00698461: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698463: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00698466: jle 0x698577 */ if ((fZ||fS!=fO)) goto L_00698577;
L_0069846c:; BB(0x0069846c);
    /* 0069846c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069846e: lea edx, [edi + 0x10] */ r_edx = (u32)(r_edi+0x10u);
    /* 00698471: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00698473: mov edi, ebx */ r_edi = r_ebx;
    /* 00698475: lea eax, [esi + ecx*4 - 0x20] */ r_eax = (u32)(r_esi+r_ecx*4+0xffffffe0u);
    /* 00698479: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069847b: lea ecx, [eax + edi*4 + 0x1c] */ r_ecx = (u32)(r_eax+r_edi*4+0x1cu);
L_0069847f:; BB(0x0069847f);
    /* 0069847f: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 00698482: fsub dword ptr [eax + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x18u));
    /* 00698485: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00698487: fsub dword ptr [eax + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x1cu));
    /* 0069848a: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 0069848d: fadd dword ptr [eax + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x18u));
    /* 00698490: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00698493: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 00698496: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00698498: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0069849a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069849c: fmul dword ptr [edx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff4u));
    /* 0069849f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 006984a1: fmul dword ptr [edx - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff0u));
    /* 006984a4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006984a6: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 006984a9: fmul dword ptr [edx - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff0u));
    /* 006984ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006984ae: fmul dword ptr [edx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff4u));
    /* 006984b1: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006984b3: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 006984b6: fld dword ptr [ecx - 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff4u)));
    /* 006984b9: fsub dword ptr [eax + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x10u));
    /* 006984bc: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 006984bf: fsub dword ptr [eax + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x14u));
    /* 006984c2: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 006984c5: fadd dword ptr [ecx - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xfffffff4u));
    /* 006984c8: fstp dword ptr [ecx - 0xc] */ W_F32((u32)(r_ecx+0xfffffff4u), ST(0)); FPOP();
    /* 006984cb: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 006984ce: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 006984d1: fstp dword ptr [ecx - 8] */ W_F32((u32)(r_ecx+0xfffffff8u), ST(0)); FPOP();
    /* 006984d4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006984d6: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 006984d9: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 006984db: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 006984dd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006984df: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 006984e2: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 006984e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006984e6: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 006984e9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006984eb: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 006984ee: fld dword ptr [ecx - 0x14] */ FPUSH(R_F32((u32)(r_ecx+0xffffffecu)));
    /* 006984f1: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 006984f4: fld dword ptr [ecx - 0x10] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff0u)));
    /* 006984f7: fsub dword ptr [eax + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xcu));
    /* 006984fa: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 006984fd: fadd dword ptr [ecx - 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xffffffecu));
    /* 00698500: fstp dword ptr [ecx - 0x14] */ W_F32((u32)(r_ecx+0xffffffecu), ST(0)); FPOP();
    /* 00698503: fld dword ptr [ecx - 0x10] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff0u)));
    /* 00698506: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00698509: fstp dword ptr [ecx - 0x10] */ W_F32((u32)(r_ecx+0xfffffff0u), ST(0)); FPOP();
    /* 0069850c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069850e: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 00698511: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00698513: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 00698516: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00698518: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 0069851b: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 0069851e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00698520: fmul dword ptr [edx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x14u));
    /* 00698523: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00698525: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 00698528: fld dword ptr [ecx - 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe4u)));
    /* 0069852b: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0069852d: fld dword ptr [ecx - 0x18] */ FPUSH(R_F32((u32)(r_ecx+0xffffffe8u)));
    /* 00698530: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 00698533: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00698535: fadd dword ptr [ecx - 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xffffffe4u));
    /* 00698538: fstp dword ptr [ecx - 0x1c] */ W_F32((u32)(r_ecx+0xffffffe4u), ST(0)); FPOP();
    /* 0069853b: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0069853e: fadd dword ptr [ecx - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xffffffe8u));
    /* 00698541: fstp dword ptr [ecx - 0x18] */ W_F32((u32)(r_ecx+0xffffffe8u), ST(0)); FPOP();
    /* 00698544: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00698546: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 00698549: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0069854b: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 0069854e: sub eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00698551: sub ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00698554: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698557: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00698559: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069855b: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0069855e: fmul dword ptr [edx - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xffffffe0u));
    /* 00698561: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00698563: fmul dword ptr [edx - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xffffffe4u));
    /* 00698566: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00698568: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0069856b: jae 0x69847f */ if (!fC) goto L_0069847f;
L_00698571:; BB(0x00698571);
    /* 00698571: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00698574: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_00698577:; BB(0x00698577);
    /* 00698577: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00698578: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0069857d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0069857f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00698582: jle 0x6985e1 */ if ((fZ||fS!=fO)) goto L_006985e1;
L_00698584:; BB(0x00698584);
    /* 00698584: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00698587:; BB(0x00698587);
    /* 00698587: mov edx, 1 */ r_edx = 0x1u;
    /* 0069858c: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0069858e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00698590: jle 0x6985d1 */ if ((fZ||fS!=fO)) goto L_006985d1;
L_00698592:; BB(0x00698592);
    /* 00698592: mov eax, 4 */ r_eax = 0x4u;
    /* 00698597: mov edi, ebx */ r_edi = r_ebx;
    /* 00698599: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0069859b: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0069859d: mov ebx, esi */ r_ebx = r_esi;
    /* 0069859f: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 006985a2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006985a5: jmp 0x6985aa */ goto L_006985aa;
L_006985a7:; BB(0x006985a7);
    /* 006985a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_006985aa:; BB(0x006985aa);
    /* 006985aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006985ab: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006985ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006985af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006985b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006985b1: call 0x698200 */ r_esp -= 4; W32(r_esp, 0x6985b6u); f_00698200();
    /* 006985b6: lea eax, [edi*4] */ r_eax = (u32)(r_edi*4);
    /* 006985bd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006985c0: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 006985c2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006985c5: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006985c6: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 006985c9: jne 0x6985a7 */ if (!fZ) goto L_006985a7;
L_006985cb:; BB(0x006985cb);
    /* 006985cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006985ce: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
L_006985d1:; BB(0x006985d1);
    /* 006985d1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006985d4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006985d5: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006985d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006985d9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006985dc: jne 0x698587 */ if (!fZ) goto L_00698587;
L_006985de:; BB(0x006985de);
    /* 006985de: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_006985e1:; BB(0x006985e1);
    /* 006985e1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006985e3: jle 0x698601 */ if ((fZ||fS!=fO)) goto L_00698601;
L_006985e5:; BB(0x006985e5);
    /* 006985e5: lea edi, [ebx - 1] */ r_edi = (u32)(r_ebx+0xffffffffu);
    /* 006985e8: shr edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 006985eb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_006985ec:; BB(0x006985ec);
    /* 006985ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006985ed: call 0x697cc0 */ r_esp -= 4; W32(r_esp, 0x6985f2u); f_00697cc0();
    /* 006985f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006985f5: add esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006985fb: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006985fc: jne 0x6985ec */ if (!fZ) goto L_006985ec;
L_006985fe:; BB(0x006985fe);
    /* 006985fe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_00698601:; BB(0x00698601);
    /* 00698601: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00698603: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 00698606: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00698609: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 0069860c: mov edi, eax */ r_edi = r_eax;
    /* 0069860e: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00698610: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 00698613: lea edx, [ecx + 8] */ r_edx = (u32)(r_ecx+0x8u);
    /* 00698616: lea edi, [ecx + edi*4] */ r_edi = (u32)(r_ecx+r_edi*4);
    /* 00698619: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0069861c: lea ecx, [edi + 0xc] */ r_ecx = (u32)(r_edi+0xcu);
    /* 0069861f: jmp 0x698624 */ goto L_00698624;
L_00698621:; BB(0x00698621);
    /* 00698621: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
L_00698624:; BB(0x00698624);
    /* 00698624: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00698626: sub ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00698629: lea ebx, [edi + ebx*4] */ r_ebx = (u32)(r_edi+r_ebx*4);
    /* 0069862c: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 0069862f: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00698632: lea edi, [edi + ebx*4] */ r_edi = (u32)(r_edi+r_ebx*4);
    /* 00698635: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00698638: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0069863b: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 0069863e: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00698640: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00698642: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00698644: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00698647: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00698649: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0069864b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069864d: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00698650: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00698653: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00698655: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00698657: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00698659: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0069865c: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 0069865f: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 00698665: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00698667: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 00698669: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0069866c: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 00698672: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 00698675: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00698678: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0069867a: fstp dword ptr [edx - 8] */ W_F32((u32)(r_edx+0xfffffff8u), ST(0)); FPOP();
    /* 0069867d: fsub dword ptr [ebp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xcu));
    /* 00698680: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00698683: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 00698686: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00698688: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0069868b: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0069868e: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00698690: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00698693: lea ebx, [edi + ebx*4] */ r_ebx = (u32)(r_edi+r_ebx*4);
    /* 00698696: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 00698699: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0069869c: lea edi, [edi + ebx*4] */ r_edi = (u32)(r_edi+r_ebx*4);
    /* 0069869f: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 006986a2: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 006986a5: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 006986a8: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 006986aa: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 006986ac: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006986ae: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 006986b1: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 006986b3: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 006986b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006986b8: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 006986bb: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 006986be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006986c0: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 006986c3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006986c5: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 006986c8: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 006986cb: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 006986d1: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 006986d3: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 006986d5: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 006986db: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 006986de: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 006986e1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 006986e3: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 006986e5: fsub dword ptr [ebp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xcu));
    /* 006986e8: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006986eb: lea edi, [ecx - 0xc] */ r_edi = (u32)(r_ecx+0xfffffff4u);
    /* 006986ee: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006986f1: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006986f4: lea ebx, [edx - 8] */ r_ebx = (u32)(r_edx+0xfffffff8u);
    /* 006986f7: fstp dword ptr [ecx - 0xc] */ W_F32((u32)(r_ecx+0xfffffff4u), ST(0)); FPOP();
    /* 006986fa: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 006986fd: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 006986ff: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00698701: fstp dword ptr [edx - 0xc] */ W_F32((u32)(r_edx+0xfffffff4u), ST(0)); FPOP();
    /* 00698704: fsub dword ptr [ebp - 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffffcu));
    /* 00698707: fstp dword ptr [ecx - 8] */ W_F32((u32)(r_ecx+0xfffffff8u), ST(0)); FPOP();
    /* 0069870a: jb 0x698621 */ if (fC) goto L_00698621;
L_00698710:; BB(0x00698710);
    /* 00698710: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00698713: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00698716: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00698719: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069871b: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0069871e: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698720: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00698722: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00698725: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698727: jle 0x698764 */ if ((fZ||fS!=fO)) goto L_00698764;
L_00698729:; BB(0x00698729);
    /* 00698729: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
L_0069872c:; BB(0x0069872c);
    /* 0069872c: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0069872e: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00698730: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00698733: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00698736: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00698739: sub esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0069873c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069873f: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698742: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00698744: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698745: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 00698748: fstp dword ptr [ebx + edx*4 - 4] */ W_F32((u32)(r_ebx+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0069874c: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 0069874f: fmul dword ptr [ecx - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffff8u));
    /* 00698752: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 00698755: fmul dword ptr [ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffffcu));
    /* 00698758: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069875b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0069875d: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 00698760: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00698762: jl 0x69872c */ if ((fS!=fO)) goto L_0069872c;
L_00698764:; BB(0x00698764);
    /* 00698764: lea esp, [ebp - 0x2c] */ r_esp = (u32)(r_ebp+0xffffffd4u);
    /* 00698767: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698768: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698769: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069876a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069876c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069876d: ret  */ FN_RET(0x00698320); r_esp += 4; return;
}

void f_00698770(void) /* sub_698770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00698770);
    /* 00698770: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00698774: mov eax, dword ptr [eax*4 + 0x78f898] */ r_eax = R32((u32)(r_eax*4+0x78f898u));
    /* 0069877b: ret  */ FN_RET(0x00698770); r_esp += 4; return;
}

void f_00698780(void) /* sub_698780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00698780);
    /* 00698780: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00698784: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698785: mov eax, edx */ r_eax = r_edx;
    /* 00698787: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00698788: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0069878c: mov ecx, edx */ r_ecx = r_edx;
    /* 0069878e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00698790: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00698792: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698793: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00698797: and eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00698799: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0069879b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069879c: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 006987a0: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 006987a2: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006987a4: mov edi, dword ptr [esi + eax*4] */ r_edi = R32((u32)(r_esi+r_eax*4));
    /* 006987a7: mov esi, dword ptr [esi + ecx*4] */ r_esi = R32((u32)(r_esi+r_ecx*4));
    /* 006987aa: mov edi, dword ptr [edi*4 + 0x78f898] */ r_edi = R32((u32)(r_edi*4+0x78f898u));
    /* 006987b1: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 006987b5: mov esi, dword ptr [esi*4 + 0x78f898] */ r_esi = R32((u32)(r_esi*4+0x78f898u));
    /* 006987bc: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 006987c0: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 006987c4: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 006987c7: mov ebp, dword ptr [esi + eax*4] */ r_ebp = R32((u32)(r_esi+r_eax*4));
    /* 006987ca: mov edi, dword ptr [esi + ecx*4] */ r_edi = R32((u32)(r_esi+r_ecx*4));
    /* 006987cd: mov eax, edx */ r_eax = r_edx;
    /* 006987cf: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006987d3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006987d4: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006987d7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006987d9: mov ecx, eax */ r_ecx = r_eax;
    /* 006987db: mov eax, ebp */ r_eax = r_ebp;
    /* 006987dd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006987de: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006987e1: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006987e4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006987e6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006987e8: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006987eb: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006987ed: mov eax, ebp */ r_eax = r_ebp;
    /* 006987ef: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006987f0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006987f2: mov ebp, eax */ r_ebp = r_eax;
    /* 006987f4: mov eax, edi */ r_eax = r_edi;
    /* 006987f6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006987f7: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006987fa: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006987fc: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006987ff: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00698803: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00698807: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00698808: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069880a: mov esi, eax */ r_esi = r_eax;
    /* 0069880c: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00698810: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00698812: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00698814: mov eax, edi */ r_eax = r_edi;
    /* 00698816: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00698817: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00698819: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069881b: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0069881d: mov edx, eax */ r_edx = r_eax;
    /* 0069881f: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00698821: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00698823: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00698825: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698827: jle 0x698833 */ if ((fZ||fS!=fO)) goto L_00698833;
L_00698829:; BB(0x00698829);
    /* 00698829: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0069882d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069882f: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00698831: mov eax, ebx */ r_eax = r_ebx;
L_00698833:; BB(0x00698833);
    /* 00698833: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698835: jge 0x698851 */ if ((fS==fO)) goto L_00698851;
L_00698837:; BB(0x00698837);
    /* 00698837: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
L_0069883b:; BB(0x0069883b);
    /* 0069883b: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0069883f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698840: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00698842: fmul dword ptr [edi + eax*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_eax*4+0xfffffffcu));
    /* 00698846: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00698849: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069884b: fstp dword ptr [edi + eax*4 - 4] */ W_F32((u32)(r_edi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 0069884f: jl 0x69883b */ if ((fS!=fO)) goto L_0069883b;
L_00698851:; BB(0x00698851);
    /* 00698851: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 00698854: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698856: jge 0x698876 */ if ((fS==fO)) goto L_00698876;
L_00698858:; BB(0x00698858);
    /* 00698858: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069885c: lea edx, [eax + edx*4 - 4] */ r_edx = (u32)(r_eax+r_edx*4+0xfffffffcu);
L_00698860:; BB(0x00698860);
    /* 00698860: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00698864: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00698865: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00698867: fmul dword ptr [eax + esi*4 - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_esi*4+0xfffffffcu));
    /* 0069886b: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069886e: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698870: fstp dword ptr [eax + esi*4 - 4] */ W_F32((u32)(r_eax+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00698874: jl 0x698860 */ if ((fS!=fO)) goto L_00698860;
L_00698876:; BB(0x00698876);
    /* 00698876: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0069887a: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069887c: jge 0x69888b */ if ((fS==fO)) goto L_0069888b;
L_0069887e:; BB(0x0069887e);
    /* 0069887e: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00698882: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00698884: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00698886: lea edi, [edx + esi*4] */ r_edi = (u32)(r_edx+r_esi*4);
    /* 00698889: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_0069888b:; BB(0x0069888b);
    /* 0069888b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069888c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069888d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069888e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069888f: ret  */ FN_RET(0x00698780); r_esp += 4; return;
}

void f_00698890(void) /* sub_698890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00698890);
    /* 00698890: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00698894: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698896: je 0x6988ae */ if (fZ) goto L_006988ae;
L_00698898:; BB(0x00698898);
    /* 00698898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698899: mov ecx, 0x322 */ r_ecx = 0x322u;
    /* 0069889e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006988a0: mov edi, edx */ r_edi = r_edx;
    /* 006988a2: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006988a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006988a5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006988a9: jmp 0x687300 */ f_00687300(); return;
L_006988ae:; BB(0x006988ae);
    /* 006988ae: ret  */ FN_RET(0x00698890); r_esp += 4; return;
}

void f_006988b0(void) /* sub_6988B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006988b0);
    /* 006988b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006988b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006988b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006988b3: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 006988b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006988b8: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 006988bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006988be: cmp dword ptr [edi], 1 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006988c1: jle 0x6988dc */ if ((fZ||fS!=fO)) goto L_006988dc;
L_006988c3:; BB(0x006988c3);
    /* 006988c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006988c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006988c6: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6988cbu); f_0069d210();
    /* 006988cb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006988cd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006988cf: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006988d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006988d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006988d2: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6988d7u); f_0069d210();
    /* 006988d7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006988da: jmp 0x6988e7 */ goto L_006988e7;
L_006988dc:; BB(0x006988dc);
    /* 006988dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006988de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006988df: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6988e4u); f_0069d210();
    /* 006988e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006988e7:; BB(0x006988e7);
    /* 006988e7: mov eax, dword ptr [edi + 0x484] */ r_eax = R32((u32)(r_edi+0x484u));
    /* 006988ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006988ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006988f1: jle 0x698965 */ if ((fZ||fS!=fO)) goto L_00698965;
L_006988f3:; BB(0x006988f3);
    /* 006988f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006988f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006988f6: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6988fbu); f_0069d210();
    /* 006988fb: mov ecx, dword ptr [edi + 0x484] */ r_ecx = R32((u32)(r_edi+0x484u));
    /* 00698901: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00698903: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00698904: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698905: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698906: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69890bu); f_0069d210();
    /* 0069890b: mov eax, dword ptr [edi + 0x484] */ r_eax = R32((u32)(r_edi+0x484u));
    /* 00698911: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698914: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00698916: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698918: jle 0x698970 */ if ((fZ||fS!=fO)) goto L_00698970;
L_0069891a:; BB(0x0069891a);
    /* 0069891a: lea ebx, [edi + 0x888] */ r_ebx = (u32)(r_edi+0x888u);
L_00698920:; BB(0x00698920);
    /* 00698920: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00698924: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00698927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698928: call 0x698a00 */ r_esp -= 4; W32(r_esp, 0x69892du); f_00698a00();
    /* 0069892d: mov ecx, dword ptr [ebx - 0x400] */ r_ecx = R32((u32)(r_ebx+0xfffffc00u));
    /* 00698933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698934: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698935: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698936: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69893bu); f_0069d210();
    /* 0069893b: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0069893f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00698942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698943: call 0x698a00 */ r_esp -= 4; W32(r_esp, 0x698948u); f_00698a00();
    /* 00698948: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0069894a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069894b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069894c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069894d: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x698952u); f_0069d210();
    /* 00698952: mov eax, dword ptr [edi + 0x484] */ r_eax = R32((u32)(r_edi+0x484u));
    /* 00698958: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069895b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069895c: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069895f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698961: jl 0x698920 */ if ((fS!=fO)) goto L_00698920;
L_00698963:; BB(0x00698963);
    /* 00698963: jmp 0x698970 */ goto L_00698970;
L_00698965:; BB(0x00698965);
    /* 00698965: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00698967: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698968: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69896du); f_0069d210();
    /* 0069896d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00698970:; BB(0x00698970);
    /* 00698970: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00698972: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00698974: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698975: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x69897au); f_0069d210();
    /* 0069897a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0069897c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069897f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698982: jle 0x6989b0 */ if ((fZ||fS!=fO)) goto L_006989b0;
L_00698984:; BB(0x00698984);
    /* 00698984: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00698988: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069898a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0069898d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069898f: jle 0x6989b0 */ if ((fZ||fS!=fO)) goto L_006989b0;
L_00698991:; BB(0x00698991);
    /* 00698991: lea ebp, [edi + 4] */ r_ebp = (u32)(r_edi+0x4u);
L_00698994:; BB(0x00698994);
    /* 00698994: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00698997: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00698999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069899a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069899b: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6989a0u); f_0069d210();
    /* 006989a0: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006989a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006989a7: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006989a8: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006989ab: cmp ebx, dword ptr [ecx + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006989ae: jl 0x698994 */ if ((fS!=fO)) goto L_00698994;
L_006989b0:; BB(0x006989b0);
    /* 006989b0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006989b2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006989b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006989b6: jle 0x6989ec */ if ((fZ||fS!=fO)) goto L_006989ec;
L_006989b8:; BB(0x006989b8);
    /* 006989b8: lea ebx, [edi + 0x444] */ r_ebx = (u32)(r_edi+0x444u);
L_006989be:; BB(0x006989be);
    /* 006989be: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006989c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006989c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006989c3: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6989c8u); f_0069d210();
    /* 006989c8: mov edx, dword ptr [ebx - 0x40] */ r_edx = R32((u32)(r_ebx+0xffffffc0u));
    /* 006989cb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006989cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006989ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006989cf: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6989d4u); f_0069d210();
    /* 006989d4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006989d6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006989d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006989d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006989da: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6989dfu); f_0069d210();
    /* 006989df: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006989e1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006989e4: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006989e5: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006989e8: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006989ea: jl 0x6989be */ if ((fS!=fO)) goto L_006989be;
L_006989ec:; BB(0x006989ec);
    /* 006989ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006989ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006989ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006989ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006989f0: ret  */ FN_RET(0x006988b0); r_esp += 4; return;
}

void f_00698a00(void) /* sub_698A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00698a00);
    /* 00698a00: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00698a04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00698a06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698a08: je 0x698a12 */ if (fZ) goto L_00698a12;
L_00698a0a:; BB(0x00698a0a);
    /* 00698a0a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00698a0b: je 0x698a12 */ if (fZ) goto L_00698a12;
L_00698a0d:; BB(0x00698a0d);
    /* 00698a0d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698a0e: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 00698a10: jne 0x698a0d */ if (!fZ) goto L_00698a0d;
L_00698a12:; BB(0x00698a12);
    /* 00698a12: ret  */ FN_RET(0x00698a00); r_esp += 4; return;
}

void f_00698a20(void) /* sub_698A20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00698a20);
    /* 00698a20: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698a21: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00698a23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698a24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698a25: push 0xc88 */ { u32 v = 0xc88u; r_esp -= 4; W32(r_esp, v); }
    /* 00698a2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00698a2c: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x698a31u); f_0068738e();
    /* 00698a31: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00698a35: mov ebx, eax */ r_ebx = r_eax;
    /* 00698a37: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00698a3b: mov ecx, 0x322 */ r_ecx = 0x322u;
    /* 00698a40: mov edi, ebx */ r_edi = r_ebx;
    /* 00698a42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00698a44: mov ebp, dword ptr [eax + 0x1c] */ r_ebp = R32((u32)(r_eax+0x1cu));
    /* 00698a47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00698a49: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00698a4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698a4c: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00698a50: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698a55u); f_0069d470();
    /* 00698a55: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698a58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698a5a: je 0x698a6c */ if (fZ) goto L_00698a6c;
L_00698a5c:; BB(0x00698a5c);
    /* 00698a5c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00698a5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698a5f: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698a64u); f_0069d470();
    /* 00698a64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698a67: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698a68: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00698a6a: jmp 0x698a72 */ goto L_00698a72;
L_00698a6c:; BB(0x00698a6c);
    /* 00698a6c: mov dword ptr [ebx], 1 */ W32((u32)(r_ebx), 0x1u);
L_00698a72:; BB(0x00698a72);
    /* 00698a72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00698a74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698a75: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698a7au); f_0069d470();
    /* 00698a7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698a7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698a7f: je 0x698b2c */ if (fZ) goto L_00698b2c;
L_00698a85:; BB(0x00698a85);
    /* 00698a85: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00698a87: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698a88: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698a8du); f_0069d470();
    /* 00698a8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698a90: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698a91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698a93: mov dword ptr [ebx + 0x484], eax */ W32((u32)(r_ebx+0x484u), r_eax);
    /* 00698a99: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00698aa1: jle 0x698b2c */ if ((fZ||fS!=fO)) goto L_00698b2c;
L_00698aa7:; BB(0x00698aa7);
    /* 00698aa7: lea ebp, [ebx + 0x888] */ r_ebp = (u32)(r_ebx+0x888u);
L_00698aad:; BB(0x00698aad);
    /* 00698aad: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00698ab1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00698ab4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698ab5: call 0x698a00 */ r_esp -= 4; W32(r_esp, 0x698abau); f_00698a00();
    /* 00698aba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698abb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698abc: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698ac1u); f_0069d470();
    /* 00698ac1: mov edi, eax */ r_edi = r_eax;
    /* 00698ac3: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00698ac7: mov dword ptr [ebp - 0x400], edi */ W32((u32)(r_ebp+0xfffffc00u), r_edi);
    /* 00698acd: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00698ad0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698ad1: call 0x698a00 */ r_esp -= 4; W32(r_esp, 0x698ad6u); f_00698a00();
    /* 00698ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698ad7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698ad8: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698addu); f_0069d470();
    /* 00698add: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698ae0: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00698ae3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00698ae5: jl 0x698bd7 */ if ((fS!=fO)) goto L_00698bd7;
L_00698aeb:; BB(0x00698aeb);
    /* 00698aeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00698aed: jl 0x698bd7 */ if ((fS!=fO)) goto L_00698bd7;
L_00698af3:; BB(0x00698af3);
    /* 00698af3: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698af5: je 0x698bd7 */ if (fZ) goto L_00698bd7;
L_00698afb:; BB(0x00698afb);
    /* 00698afb: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00698aff: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00698b02: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698b04: jge 0x698bd7 */ if ((fS==fO)) goto L_00698bd7;
L_00698b0a:; BB(0x00698b0a);
    /* 00698b0a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698b0c: jge 0x698bd7 */ if ((fS==fO)) goto L_00698bd7;
L_00698b12:; BB(0x00698b12);
    /* 00698b12: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00698b16: mov ecx, dword ptr [ebx + 0x484] */ r_ecx = R32((u32)(r_ebx+0x484u));
    /* 00698b1c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698b1d: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00698b20: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698b22: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00698b26: jl 0x698aad */ if ((fS!=fO)) goto L_00698aad;
L_00698b28:; BB(0x00698b28);
    /* 00698b28: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_00698b2c:; BB(0x00698b2c);
    /* 00698b2c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00698b2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698b2f: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698b34u); f_0069d470();
    /* 00698b34: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698b37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698b39: jg 0x698bd7 */ if ((!fZ&&fS==fO)) goto L_00698bd7;
L_00698b3f:; BB(0x00698b3f);
    /* 00698b3f: cmp dword ptr [ebx], 1 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698b42: jle 0x698b78 */ if ((fZ||fS!=fO)) goto L_00698b78;
L_00698b44:; BB(0x00698b44);
    /* 00698b44: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00698b48: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00698b4a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00698b4d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698b4f: jle 0x698b74 */ if ((fZ||fS!=fO)) goto L_00698b74;
L_00698b51:; BB(0x00698b51);
    /* 00698b51: lea edi, [ebx + 4] */ r_edi = (u32)(r_ebx+0x4u);
L_00698b54:; BB(0x00698b54);
    /* 00698b54: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00698b56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698b57: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698b5cu); f_0069d470();
    /* 00698b5c: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00698b5e: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00698b60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698b63: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698b65: jge 0x698bd7 */ if ((fS==fO)) goto L_00698bd7;
L_00698b67:; BB(0x00698b67);
    /* 00698b67: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00698b6b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00698b6c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00698b6f: cmp ebp, dword ptr [ecx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698b72: jl 0x698b54 */ if ((fS!=fO)) goto L_00698b54;
L_00698b74:; BB(0x00698b74);
    /* 00698b74: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_00698b78:; BB(0x00698b78);
    /* 00698b78: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00698b7a: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00698b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698b84: jle 0x698bcf */ if ((fZ||fS!=fO)) goto L_00698bcf;
L_00698b86:; BB(0x00698b86);
    /* 00698b86: lea edi, [ebx + 0x444] */ r_edi = (u32)(r_ebx+0x444u);
L_00698b8c:; BB(0x00698b8c);
    /* 00698b8c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00698b8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698b8f: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698b94u); f_0069d470();
    /* 00698b94: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00698b96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698b97: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698b9cu); f_0069d470();
    /* 00698b9c: mov dword ptr [edi - 0x40], eax */ W32((u32)(r_edi+0xffffffc0u), r_eax);
    /* 00698b9f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00698ba2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698ba5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698ba7: jge 0x698bd7 */ if ((fS==fO)) goto L_00698bd7;
L_00698ba9:; BB(0x00698ba9);
    /* 00698ba9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00698bab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698bac: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x698bb1u); f_0069d470();
    /* 00698bb1: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00698bb3: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00698bb6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698bb9: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698bbb: jge 0x698bd7 */ if ((fS==fO)) goto L_00698bd7;
L_00698bbd:; BB(0x00698bbd);
    /* 00698bbd: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00698bc1: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00698bc3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698bc4: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00698bc7: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698bc9: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00698bcd: jl 0x698b8c */ if ((fS!=fO)) goto L_00698b8c;
L_00698bcf:; BB(0x00698bcf);
    /* 00698bcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698bd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698bd1: mov eax, ebx */ r_eax = r_ebx;
    /* 00698bd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00698bd4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00698bd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698bd6: ret  */ FN_RET(0x00698a20); r_esp += 4; return;
L_00698bd7:; BB(0x00698bd7);
    /* 00698bd7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698bd8: call 0x698890 */ r_esp -= 4; W32(r_esp, 0x698bddu); f_00698890();
    /* 00698bdd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698be0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00698be2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00698be3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00698be4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00698be5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00698be6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00698be7: ret  */ FN_RET(0x00698a20); r_esp += 4; return;
}

void f_00698bf0(void) /* sub_698BF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00698bf0);
    /* 00698bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00698bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00698bf3: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00698bf6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698bf7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698bf8: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00698bfb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698bfc: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00698bff: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00698c02: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00698c05: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 00698c08: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 00698c0b: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 00698c0e: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00698c11: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00698c14: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00698c17: mov eax, ebx */ r_eax = r_ebx;
    /* 00698c19: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00698c1c: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00698c1f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698c22: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00698c25: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00698c27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00698c2a: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x698c2fu); f_00687340();
    /* 00698c2f: mov dword ptr [ebp - 0x48], esp */ W32((u32)(r_ebp+0xffffffb8u), r_esp);
    /* 00698c32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698c33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698c34: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x698c39u); f_00690e40();
    /* 00698c39: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00698c3c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00698c3f: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00698c42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698c43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698c44: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x698c49u); f_00690e40();
    /* 00698c49: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00698c4c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00698c4f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00698c52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698c53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698c54: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x698c59u); f_00690e40();
    /* 00698c59: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00698c5c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00698c5f: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00698c62: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698c65: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00698c68: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00698c6b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698c6e: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00698c71: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00698c73: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x698c78u); f_00687340();
    /* 00698c78: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00698c7b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00698c7e: mov ecx, esp */ r_ecx = r_esp;
    /* 00698c80: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00698c83: mov eax, dword ptr [eax + edx*4 + 0x220] */ r_eax = R32((u32)(r_eax+r_edx*4+0x220u));
    /* 00698c8a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00698c8d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00698c90: mov eax, edx */ r_eax = r_edx;
    /* 00698c92: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00698c94: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00698c96: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 00698c9d: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00698ca0: add eax, dword ptr [ebx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698ca3: lea ebx, [eax + eax*2] */ r_ebx = (u32)(r_eax+r_eax*2);
    /* 00698ca6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00698ca9: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00698cac: add ebx, dword ptr [eax + 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00698caf: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00698cb2: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00698cb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698cb7: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 00698cba: jle 0x698e30 */ if ((fZ||fS!=fO)) goto L_00698e30;
L_00698cc0:; BB(0x00698cc0);
    /* 00698cc0: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 00698cc3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00698cc6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00698cc9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00698cca: fdivr dword ptr [0x6e57c0] */ ST(0) = R_F32((u32)(0x6e57c0u)) / ST(0);
    /* 00698cd0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00698cd2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00698cd5: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00698cd7: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00698cda: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00698cdc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00698cdf: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00698ce2: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00698ce5: jmp 0x698cea */ goto L_00698cea;
L_00698ce7:; BB(0x00698ce7);
    /* 00698ce7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_00698cea:; BB(0x00698cea);
    /* 00698cea: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00698ced: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00698cef: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00698cf2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00698cf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698cf6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698cf7: mov ebx, dword ptr [edx + ecx*4] */ r_ebx = R32((u32)(r_edx+r_ecx*4));
    /* 00698cfa: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x698cffu); f_00690e40();
    /* 00698cff: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00698d02: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00698d05: mov dword ptr [edx + ecx], eax */ W32((u32)(r_edx+r_ecx), r_eax);
    /* 00698d08: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 00698d0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d0c: call 0x699560 */ r_esp -= 4; W32(r_esp, 0x698d11u); f_00699560();
    /* 00698d11: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 00698d14: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 00698d17: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00698d1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698d1b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00698d1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00698d22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d23: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00698d26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698d27: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 00698d2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698d2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d2c: call 0x698780 */ r_esp -= 4; W32(r_esp, 0x698d31u); f_00698780();
    /* 00698d31: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00698d34: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00698d37: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 00698d3a: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00698d3d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00698d40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d41: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d42: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00698d46: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00698d48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d49: call 0x698320 */ r_esp -= 4; W32(r_esp, 0x698d4eu); f_00698320();
    /* 00698d4e: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00698d51: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00698d54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d55: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00698d58: lea edx, [ecx + eax*4 + 0x14] */ r_edx = (u32)(r_ecx+r_eax*4+0x14u);
    /* 00698d5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d5d: call 0x695e90 */ r_esp -= 4; W32(r_esp, 0x698d62u); f_00695e90();
    /* 00698d62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d63: call 0x699560 */ r_esp -= 4; W32(r_esp, 0x698d68u); f_00699560();
    /* 00698d68: fadd dword ptr [ebp - 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc4u));
    /* 00698d6b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00698d6e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00698d71: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698d74: mov eax, 1 */ r_eax = 0x1u;
    /* 00698d79: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00698d7a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00698d7d: fst dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0));
    /* 00698d7f: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00698d81: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698d83: jle 0x698deb */ if ((fZ||fS!=fO)) goto L_00698deb;
L_00698d85:; BB(0x00698d85);
    /* 00698d85: jmp 0x698d8a */ goto L_00698d8a;
L_00698d87:; BB(0x00698d87);
    /* 00698d87: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_00698d8a:; BB(0x00698d8a);
    /* 00698d8a: fld dword ptr [ebx + eax*4 + 4] */ FPUSH(R_F32((u32)(r_ebx+r_eax*4+0x4u)));
    /* 00698d8e: fld dword ptr [ebx + eax*4] */ FPUSH(R_F32((u32)(r_ebx+r_eax*4)));
    /* 00698d91: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00698d93: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00698d95: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00698d97: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00698d99: lea edx, [ebp - 0x30] */ r_edx = (u32)(r_ebp+0xffffffd0u);
    /* 00698d9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698d9d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00698d9f: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00698da2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00698da4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00698da6: call 0x699560 */ r_esp -= 4; W32(r_esp, 0x698dabu); f_00699560();
    /* 00698dab: fmul dword ptr [0x6b3654] */ ST(0) = ST(0) * R_F32((u32)(0x6b3654u));
    /* 00698db1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00698db4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00698db7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698dba: fadd dword ptr [ebp - 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc4u));
    /* 00698dbd: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00698dc0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00698dc2: fst dword ptr [ebx + eax*4] */ W_F32((u32)(r_ebx+r_eax*4), ST(0));
    /* 00698dc5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00698dc7: fcomp dword ptr [edx] */ fx_compare(ST(0), R_F32((u32)(r_edx))); FPOP();
    /* 00698dc9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00698dcb: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00698dd0: jne 0x698dd6 */ if (!fZ) goto L_00698dd6;
L_00698dd2:; BB(0x00698dd2);
    /* 00698dd2: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00698dd4: jmp 0x698dd8 */ goto L_00698dd8;
L_00698dd6:; BB(0x00698dd6);
    /* 00698dd6: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00698dd8:; BB(0x00698dd8);
    /* 00698dd8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00698ddb: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00698dde: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00698de1: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 00698de4: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698de6: jl 0x698d87 */ if ((fS!=fO)) goto L_00698d87;
L_00698de8:; BB(0x00698de8);
    /* 00698de8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
L_00698deb:; BB(0x00698deb);
    /* 00698deb: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00698ded: fcomp dword ptr [0x6c2fe8] */ fx_compare(ST(0), R_F32((u32)(0x6c2fe8u))); FPOP();
    /* 00698df3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00698df5: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00698dfa: jne 0x698e02 */ if (!fZ) goto L_00698e02;
L_00698dfc:; BB(0x00698dfc);
    /* 00698dfc: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
L_00698e02:; BB(0x00698e02);
    /* 00698e02: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00698e04: fcomp dword ptr [ebp - 0x38] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffc8u))); FPOP();
    /* 00698e07: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00698e09: and eax, 0x4100 */ {  u32 a = r_eax; u32 b = 0x4100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00698e0e: jne 0x698e15 */ if (!fZ) goto L_00698e15;
L_00698e10:; BB(0x00698e10);
    /* 00698e10: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00698e12: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_00698e15:; BB(0x00698e15);
    /* 00698e15: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00698e18: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00698e1b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698e1c: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698e1f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00698e21: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00698e24: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00698e27: jl 0x698ce7 */ if ((fS!=fO)) goto L_00698ce7;
L_00698e2d:; BB(0x00698e2d);
    /* 00698e2d: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
L_00698e30:; BB(0x00698e30);
    /* 00698e30: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00698e33: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00698e34: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00698e36: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00698e38: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00698e3b: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00698e3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698e3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698e40: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00698e43: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x698e48u); f_00690e40();
    /* 00698e48: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00698e4b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00698e4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698e4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698e50: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x698e55u); f_00690e40();
    /* 00698e55: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00698e58: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00698e5b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698e5e: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 00698e65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698e67: jle 0x699109 */ if ((fZ||fS!=fO)) goto L_00699109;
L_00698e6d:; BB(0x00698e6d);
    /* 00698e6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00698e70: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00698e73: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00698e76: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00698e79: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00698e7c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00698e7e: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00698e81: mov edx, ebx */ r_edx = r_ebx;
    /* 00698e83: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00698e85: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00698e88: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00698e8b: jmp 0x698e93 */ goto L_00698e93;
L_00698e8d:; BB(0x00698e8d);
    /* 00698e8d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00698e90: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
L_00698e93:; BB(0x00698e93);
    /* 00698e93: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00698e96: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698e98: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00698e9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698e9b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00698e9d: mov eax, dword ptr [eax + ecx] */ r_eax = R32((u32)(r_eax+r_ecx));
    /* 00698ea0: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00698ea2: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00698ea5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00698ea8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00698eab: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00698eae: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00698eb1: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00698eb4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00698eb6: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00698eb9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00698ebc: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00698ebf: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x698ec4u); f_00690e40();
    /* 00698ec4: mov edi, eax */ r_edi = r_eax;
    /* 00698ec6: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 00698ecb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00698ecd: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 00698ecf: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00698ed1: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00698ed4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698ed7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00698ed9: jle 0x698f07 */ if ((fZ||fS!=fO)) goto L_00698f07;
L_00698edb:; BB(0x00698edb);
    /* 00698edb: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00698ede: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00698ee1: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00698ee3: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00698ee6: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00698ee9: jmp 0x698eee */ goto L_00698eee;
L_00698eeb:; BB(0x00698eeb);
    /* 00698eeb: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
L_00698eee:; BB(0x00698eee);
    /* 00698eee: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00698ef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698ef1: call 0x699560 */ r_esp -= 4; W32(r_esp, 0x698ef6u); f_00699560();
    /* 00698ef6: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00698ef8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00698efb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698efe: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00698f01: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00698f02: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00698f05: jne 0x698eeb */ if (!fZ) goto L_00698eeb;
L_00698f07:; BB(0x00698f07);
    /* 00698f07: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00698f0a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00698f0d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00698f10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698f11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698f12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698f13: call 0x692d40 */ r_esp -= 4; W32(r_esp, 0x698f18u); f_00692d40();
    /* 00698f18: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00698f1b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00698f1e: mov edi, dword ptr [ebp - 0x64] */ r_edi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00698f21: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00698f23: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00698f25: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00698f28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698f29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00698f2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698f2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698f2e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698f2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698f30: call 0x6933e0 */ r_esp -= 4; W32(r_esp, 0x698f35u); f_006933e0();
    /* 00698f35: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00698f38: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00698f3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00698f3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698f3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00698f41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698f42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698f44: call 0x6938c0 */ r_esp -= 4; W32(r_esp, 0x698f49u); f_006938c0();
    /* 00698f49: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00698f4c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00698f4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00698f52: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698f55: mov eax, dword ptr [edx + eax*4 + 0x404] */ r_eax = R32((u32)(r_edx+r_eax*4+0x404u));
    /* 00698f5c: cmp dword ptr [ecx + eax*4 + 0x320], 1 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x320u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698f64: jne 0x6991e5 */ if (!fZ) goto L_006991e5;
L_00698f6a:; BB(0x00698f6a);
    /* 00698f6a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00698f6d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00698f70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698f71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698f72: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00698f75: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00698f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698f79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698f7a: call 0x69b3a0 */ r_esp -= 4; W32(r_esp, 0x698f7fu); f_0069b3a0();
    /* 00698f7f: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00698f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698f82: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00698f85: call 0x695e10 */ r_esp -= 4; W32(r_esp, 0x698f8au); f_00695e10();
    /* 00698f8a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00698f8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698f8f: je 0x6990e5 */ if (fZ) goto L_006990e5;
L_00698f95:; BB(0x00698f95);
    /* 00698f95: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00698f97: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00698f9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00698f9c: je 0x6990e5 */ if (fZ) goto L_006990e5;
L_00698fa2:; BB(0x00698fa2);
    /* 00698fa2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00698fa5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00698fa8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00698fab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698fac: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00698fae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698faf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698fb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698fb1: call 0x6938c0 */ r_esp -= 4; W32(r_esp, 0x698fb6u); f_006938c0();
    /* 00698fb6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00698fb9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00698fbc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00698fbf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698fc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698fc1: mov eax, dword ptr [ecx + edx*4 + 0x404] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x404u));
    /* 00698fc8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00698fcb: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00698fce: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00698fd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698fd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00698fd3: call 0x69b3a0 */ r_esp -= 4; W32(r_esp, 0x698fd8u); f_0069b3a0();
    /* 00698fd8: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00698fda: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00698fdd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698fde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00698fe0: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00698fe3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00698fe6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00698fe9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698fea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00698feb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00698fec: call 0x6938c0 */ r_esp -= 4; W32(r_esp, 0x698ff1u); f_006938c0();
    /* 00698ff1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00698ff4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00698ff7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00698ffa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00698ffb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00698ffc: mov edx, dword ptr [eax + ecx*4 + 0x404] */ r_edx = R32((u32)(r_eax+r_ecx*4+0x404u));
    /* 00699003: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00699006: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00699009: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 0069900c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069900d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069900e: call 0x69b3a0 */ r_esp -= 4; W32(r_esp, 0x699013u); f_0069b3a0();
    /* 00699013: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00699015: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699018: mov dword ptr [ebp - 0x4c], 4 */ W32((u32)(r_ebp+0xffffffb4u), 0x4u);
    /* 0069901f: mov edi, 0x10000 */ r_edi = 0x10000u;
    /* 00699024: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00699026:; BB(0x00699026);
    /* 00699026: mov eax, 0x92492493 */ r_eax = 0x92492493u;
    /* 0069902b: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0069902d: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069902f: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699031: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00699034: mov eax, edx */ r_eax = r_edx;
    /* 00699036: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00699039: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069903b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069903d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069903e: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00699041: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699044: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699045: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00699048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699049: mov eax, dword ptr [ecx + edx*4 + 0x404] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x404u));
    /* 00699050: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00699053: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00699056: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00699059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069905a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069905b: call 0x69bf10 */ r_esp -= 4; W32(r_esp, 0x699060u); f_0069bf10();
    /* 00699060: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00699062: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00699065: add edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069906b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069906e: mov dword ptr [ecx + edx], eax */ W32((u32)(r_ecx+r_edx), r_eax);
    /* 00699071: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699074: cmp edi, 0x70000 */ {  u32 a = r_edi; u32 b = 0x70000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069907a: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0069907d: jl 0x699026 */ if ((fS!=fO)) goto L_00699026;
L_0069907f:; BB(0x0069907f);
    /* 0069907f: mov dword ptr [ebp - 0x4c], 0x20 */ W32((u32)(r_ebp+0xffffffb4u), 0x20u);
    /* 00699086: mov edi, 0x10000 */ r_edi = 0x10000u;
L_0069908b:; BB(0x0069908b);
    /* 0069908b: mov eax, 0x92492493 */ r_eax = 0x92492493u;
    /* 00699090: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00699092: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00699094: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699096: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00699099: mov eax, edx */ r_eax = r_edx;
    /* 0069909b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0069909e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006990a0: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006990a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006990a4: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 006990a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006990aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006990ab: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006990ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006990af: mov eax, dword ptr [ecx + edx*4 + 0x404] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x404u));
    /* 006990b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006990b9: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006990bc: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006990bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006990c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006990c1: call 0x69bf10 */ r_esp -= 4; W32(r_esp, 0x6990c6u); f_0069bf10();
    /* 006990c6: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006990c8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006990cb: add edi, 0x10000 */ {  u32 a = r_edi; u32 b = 0x10000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006990d1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006990d4: mov dword ptr [ecx + edx], eax */ W32((u32)(r_ecx+r_edx), r_eax);
    /* 006990d7: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006990da: cmp edi, 0x70000 */ {  u32 a = r_edi; u32 b = 0x70000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006990e0: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 006990e3: jl 0x69908b */ if ((fS!=fO)) goto L_0069908b;
L_006990e5:; BB(0x006990e5);
    /* 006990e5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006990e8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006990eb: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006990ee: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006990ef: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006990f2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006990f5: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006990f8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 006990fb: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006990fe: jl 0x698e8d */ if ((fS!=fO)) goto L_00698e8d;
L_00699104:; BB(0x00699104);
    /* 00699104: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00699107: mov edi, ecx */ r_edi = r_ecx;
L_00699109:; BB(0x00699109);
    /* 00699109: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0069910c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0069910f: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00699112: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00699115: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00699118: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0069911b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069911e: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00699120: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x699125u); f_00687340();
    /* 00699125: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00699128: mov dword ptr [ebp - 0x6c], esp */ W32((u32)(r_ebp+0xffffff94u), r_esp);
    /* 0069912b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069912e: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00699130: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x699135u); f_00687340();
    /* 00699135: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00699138: mov dword ptr [ebp - 0x34], esp */ W32((u32)(r_ebp+0xffffffccu), r_esp);
    /* 0069913b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069913e: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00699140: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x699145u); f_00687340();
    /* 00699145: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00699148: mov dword ptr [ebp - 0x3c], esp */ W32((u32)(r_ebp+0xffffffc4u), r_esp);
    /* 0069914b: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069914e: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00699150: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x699155u); f_00687340();
    /* 00699155: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699158: mov edx, esp */ r_edx = r_esp;
    /* 0069915a: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0069915d: mov ecx, dword ptr [eax + 0x484] */ r_ecx = R32((u32)(r_eax+0x484u));
    /* 00699163: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00699165: je 0x699195 */ if (fZ) goto L_00699195;
L_00699167:; BB(0x00699167);
    /* 00699167: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0069916a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0069916d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069916e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069916f: add edx, 0xb34 */ {  u32 a = r_edx; u32 b = 0xb34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699175: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699176: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699177: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699178: call 0x693950 */ r_esp -= 4; W32(r_esp, 0x69917du); f_00693950();
    /* 0069917d: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00699180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699181: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699185: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699186: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699187: call 0x693c10 */ r_esp -= 4; W32(r_esp, 0x69918cu); f_00693c10();
    /* 0069918c: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0069918f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699192: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00699195:; BB(0x00699195);
    /* 00699195: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00699198: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069919a: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069919d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069919f: mov edi, edx */ r_edi = r_edx;
    /* 006991a1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006991a4: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006991a6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006991a8: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006991ab: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006991ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006991b0: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006991b3: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 006991b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006991bb: je 0x69922b */ if (fZ) goto L_0069922b;
L_006991bd:; BB(0x006991bd);
    /* 006991bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006991c0: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 006991c7: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006991ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006991cc: jle 0x69922b */ if ((fZ||fS!=fO)) goto L_0069922b;
L_006991ce:; BB(0x006991ce);
    /* 006991ce: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006991d1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006991d4: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006991d7: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006991d9: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006991db: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006991de: mov edi, edx */ r_edi = r_edx;
    /* 006991e0: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 006991e3: jmp 0x6991f8 */ goto L_006991f8;
L_006991e5:; BB(0x006991e5);
    /* 006991e5: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006991e8: lea esp, [ebp - 0x78] */ r_esp = (u32)(r_ebp+0xffffff88u);
    /* 006991eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006991ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006991ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006991ee: mov esp, ebp */ r_esp = r_ebp;
    /* 006991f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006991f1: ret  */ FN_RET(0x00698bf0); r_esp += 4; return;
L_006991f2:; BB(0x006991f2);
    /* 006991f2: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006991f5: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
L_006991f8:; BB(0x006991f8);
    /* 006991f8: mov ebx, dword ptr [ecx + edi] */ r_ebx = R32((u32)(r_ecx+r_edi));
    /* 006991fb: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006991fe: and al, 0xfc */ {  u32 a = (u8)r_eax; u32 b = 0xfcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00699200: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x699205u); f_00687340();
    /* 00699205: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00699208: mov eax, esp */ r_eax = r_esp;
    /* 0069920a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069920b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069920c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069920d: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0069920f: call 0x693db0 */ r_esp -= 4; W32(r_esp, 0x699214u); f_00693db0();
    /* 00699214: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00699217: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0069921a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069921d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069921e: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00699221: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00699224: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699226: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00699229: jl 0x6991f2 */ if ((fS!=fO)) goto L_006991f2;
L_0069922b:; BB(0x0069922b);
    /* 0069922b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069922c: call 0x695e10 */ r_esp -= 4; W32(r_esp, 0x699231u); f_00695e10();
    /* 00699231: mov edi, eax */ r_edi = r_eax;
    /* 00699233: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699234: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r; fC = (a < b); fC = (b != 0); }
    /* 00699236: sbb edi, edi */ { u32 c = fC; u32 a = r_edi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00699238: and edi, 0xfffffff9 */ {  u32 a = r_edi; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0069923b: add edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069923e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00699241: call 0x695e10 */ r_esp -= 4; W32(r_esp, 0x699246u); f_00695e10();
    /* 00699246: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699249: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0069924b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0069924d: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00699250: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699253: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699255: jg 0x69954f */ if ((!fZ&&fS==fO)) goto L_0069954f;
L_0069925b:; BB(0x0069925b);
    /* 0069925b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0069925e: lea ebx, [esi + 4] */ r_ebx = (u32)(r_esi+0x4u);
    /* 00699261: lea ecx, [eax + edi*4 + 0xc] */ r_ecx = (u32)(r_eax+r_edi*4+0xcu);
    /* 00699265: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
L_00699268:; BB(0x00699268);
    /* 00699268: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069926a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069926c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069926d: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x699272u); f_0069d210();
    /* 00699272: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00699275: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00699278: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0069927b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069927c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069927d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069927e: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x699283u); f_0069d210();
    /* 00699283: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00699286: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699289: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069928b: je 0x6992a8 */ if (fZ) goto L_006992a8;
L_0069928d:; BB(0x0069928d);
    /* 0069928d: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00699290: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00699292: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699293: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699294: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x699299u); f_0069d210();
    /* 00699299: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0069929c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069929e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069929f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006992a0: call 0x69d210 */ r_esp -= 4; W32(r_esp, 0x6992a5u); f_0069d210();
    /* 006992a5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006992a8:; BB(0x006992a8);
    /* 006992a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006992ab: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 006992b2: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006992b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006992b7: jle 0x6993ac */ if ((fZ||fS!=fO)) goto L_006993ac;
L_006992bd:; BB(0x006992bd);
    /* 006992bd: mov edi, dword ptr [ebp - 0x58] */ r_edi = R32((u32)(r_ebp+0xffffffa8u));
    /* 006992c0: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006992c3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006992c6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006992c9: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006992cb: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006992ce: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 006992d1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006992d4: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006992d6: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006992d8: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006992db: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006992de: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006992e0: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 006992e3: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006992e6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006992e9: jmp 0x6992ee */ goto L_006992ee;
L_006992eb:; BB(0x006992eb);
    /* 006992eb: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
L_006992ee:; BB(0x006992ee);
    /* 006992ee: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006992f1: mov eax, dword ptr [eax + edi] */ r_eax = R32((u32)(r_eax+r_edi));
    /* 006992f4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006992f7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006992fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006992fc: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 006992fe: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00699301: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00699304: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699305: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699306: mov ebx, dword ptr [ecx + edx*4] */ r_ebx = R32((u32)(r_ecx+r_edx*4));
    /* 00699309: call 0x690e40 */ r_esp -= 4; W32(r_esp, 0x69930eu); f_00690e40();
    /* 0069930e: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00699311: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00699314: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00699316: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699317: mov edx, dword ptr [ecx + edi] */ r_edx = R32((u32)(r_ecx+r_edi));
    /* 0069931a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0069931d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00699320: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699323: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00699326: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00699327: mov ecx, dword ptr [edx + eax*4 + 0x404] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x404u));
    /* 0069932e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00699331: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00699334: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00699337: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00699338: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00699339: call 0x69bfc0 */ r_esp -= 4; W32(r_esp, 0x69933eu); f_0069bfc0();
    /* 0069933e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00699341: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00699344: mov dword ptr [edx + edi], eax */ W32((u32)(r_edx+r_edi), r_eax);
    /* 00699347: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0069934a: add eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069934d: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00699350: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 00699353: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00699356: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699358: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 0069935b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0069935e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00699361: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699362: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00699365: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699367: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00699368: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00699369: call 0x692ce0 */ r_esp -= 4; W32(r_esp, 0x69936eu); f_00692ce0();
    /* 0069936e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00699371: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00699374: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699376: mov ecx, dword ptr [eax + edi] */ r_ecx = R32((u32)(r_eax+r_edi));
    /* 00699379: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069937c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069937d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069937e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069937f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00699380: call 0x693e60 */ r_esp -= 4; W32(r_esp, 0x699385u); f_00693e60();
    /* 00699385: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00699388: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0069938b: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069938e: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00699391: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00699394: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00699397: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699398: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069939b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0069939e: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 006993a1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006993a3: jl 0x6992eb */ if ((fS!=fO)) goto L_006992eb;
L_006993a9:; BB(0x006993a9);
    /* 006993a9: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
L_006993ac:; BB(0x006993ac);
    /* 006993ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006993af: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006993b2: mov eax, dword ptr [ecx + 0x484] */ r_eax = R32((u32)(r_ecx+0x484u));
    /* 006993b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006993ba: je 0x6993f9 */ if (fZ) goto L_006993f9;
L_006993bc:; BB(0x006993bc);
    /* 006993bc: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006993bf: add eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006993c2: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 006993c5: lea edx, [edi + eax*4] */ r_edx = (u32)(r_edi+r_eax*4);
    /* 006993c8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006993ca: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006993cd: mov eax, dword ptr [ebx + eax*4] */ r_eax = R32((u32)(r_ebx+r_eax*4));
    /* 006993d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006993d1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 006993d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006993d5: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006993d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006993d9: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 006993dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006993dd: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006993df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006993e0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006993e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006993e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006993e5: lea ecx, [ebx + 0xb34] */ r_ecx = (u32)(r_ebx+0xb34u);
    /* 006993eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006993ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006993ed: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006993ee: call 0x6940b0 */ r_esp -= 4; W32(r_esp, 0x6993f3u); f_006940b0();
    /* 006993f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006993f6: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006993f9:; BB(0x006993f9);
    /* 006993f9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006993fb: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 00699402: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699404: jle 0x699516 */ if ((fZ||fS!=fO)) goto L_00699516;
L_0069940a:; BB(0x0069940a);
    /* 0069940a: add ecx, 0x444 */ {  u32 a = r_ecx; u32 b = 0x444u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699410: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_00699413:; BB(0x00699413);
    /* 00699413: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00699416: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00699419: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069941b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00699422: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00699424: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00699427: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00699429: jle 0x6994a0 */ if ((fZ||fS!=fO)) goto L_006994a0;
L_0069942b:; BB(0x0069942b);
    /* 0069942b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0069942e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00699431: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699434: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00699437: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0069943a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069943c: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0069943f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00699442: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00699444: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
L_00699447:; BB(0x00699447);
    /* 00699447: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0069944a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0069944d: cmp dword ptr [ebx], edx */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069944f: jne 0x69948b */ if (!fZ) goto L_0069948b;
L_00699451:; BB(0x00699451);
    /* 00699451: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00699454: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0069945a: cmp dword ptr [edx + ecx*4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069945e: je 0x699466 */ if (fZ) goto L_00699466;
L_00699460:; BB(0x00699460);
    /* 00699460: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
L_00699466:; BB(0x00699466);
    /* 00699466: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00699468: mov ebx, dword ptr [ebp - 0x64] */ r_ebx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0069946b: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 0069946e: mov dword ptr [ebx + eax], edx */ W32((u32)(r_ebx+r_eax), r_edx);
    /* 00699471: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00699473: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00699476: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 00699479: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069947b: mov ebx, dword ptr [ebp - 0x60] */ r_ebx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0069947e: mov dword ptr [ebx + eax], edx */ W32((u32)(r_ebx+r_eax), r_edx);
    /* 00699481: mov ebx, dword ptr [ebp - 0x38] */ r_ebx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00699484: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00699485: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699488: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
L_0069948b:; BB(0x0069948b);
    /* 0069948b: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0069948e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069948f: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00699492: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00699495: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00699498: cmp ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069949b: jl 0x699447 */ if ((fS!=fO)) goto L_00699447;
L_0069949d:; BB(0x0069949d);
    /* 0069949d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
L_006994a0:; BB(0x006994a0);
    /* 006994a0: mov eax, dword ptr [ebx + edi*4 + 0x520] */ r_eax = R32((u32)(r_ebx+r_edi*4+0x520u));
    /* 006994a7: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006994aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006994ab: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006994ae: mov ecx, dword ptr [eax*4 + 0x7878d8] */ r_ecx = R32((u32)(r_eax*4+0x7878d8u));
    /* 006994b5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006994b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006994b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006994bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006994bd: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006994c0: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 006994c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006994c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006994c5: call dword ptr [ecx + 0x14] */ { u32 t = R32((u32)(r_ecx+0x14u)); r_esp -= 4; W32(r_esp, 0x6994c8u); call_ind(t); }
    /* 006994c8: mov ecx, dword ptr [ebx + edi*4 + 0x520] */ r_ecx = R32((u32)(r_ebx+r_edi*4+0x520u));
    /* 006994cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006994d0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006994d3: mov edx, dword ptr [ecx*4 + 0x7878d8] */ r_edx = R32((u32)(r_ecx*4+0x7878d8u));
    /* 006994da: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006994dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006994de: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006994e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006994e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006994e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006994e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006994e8: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 006994eb: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 006994ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006994ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006994f0: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6994f3u); call_ind(t); }
    /* 006994f3: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006994f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006994f9: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006994fc: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006994ff: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00699502: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00699505: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699506: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00699508: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0069950b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069950d: jl 0x699413 */ if ((fS!=fO)) goto L_00699413;
L_00699513:; BB(0x00699513);
    /* 00699513: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
L_00699516:; BB(0x00699516);
    /* 00699516: lea ebx, [esi + 4] */ r_ebx = (u32)(r_esi+0x4u);
    /* 00699519: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069951a: call 0x69d310 */ r_esp -= 4; W32(r_esp, 0x69951fu); f_0069d310();
    /* 0069951f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00699520: call 0x69d540 */ r_esp -= 4; W32(r_esp, 0x699525u); f_0069d540();
    /* 00699525: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00699528: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00699529: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069952a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0069952d: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0069952f: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00699532: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00699535: call 0x695e10 */ r_esp -= 4; W32(r_esp, 0x69953au); f_00695e10();
    /* 0069953a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069953d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0069953f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00699541: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00699544: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00699547: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00699549: jle 0x699268 */ if ((fZ||fS!=fO)) goto L_00699268;
L_0069954f:; BB(0x0069954f);
    /* 0069954f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00699551: lea esp, [ebp - 0x78] */ r_esp = (u32)(r_ebp+0xffffff88u);
    /* 00699554: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00699555: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00699556: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00699557: mov esp, ebp */ r_esp = r_ebp;
    /* 00699559: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069955a: ret  */ FN_RET(0x00698bf0); r_esp += 4; return;
}

