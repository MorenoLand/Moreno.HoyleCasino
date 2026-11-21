#include "protos.h"

void f_00696060(void) /* sub_696060 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00696060);
    /* 00696060: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00696063: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696064: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00696065: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00696069: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069606a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069606b: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0069606f: mov esi, ebp */ r_esi = r_ebp;
    /* 00696071: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00696075: imul esi, edi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00696078: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069607a: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0069607e: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 00696082: jle 0x6960e6 */ if ((fZ||fS!=fO)) goto L_006960e6;
L_00696084:; BB(0x00696084);
    /* 00696084: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00696088: mov eax, edx */ r_eax = r_edx;
    /* 0069608a: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0069608e: lea ecx, [edx + esi*4] */ r_ecx = (u32)(r_edx+r_esi*4);
    /* 00696091: lea edi, [edi + ebx*4 - 4] */ r_edi = (u32)(r_edi+r_ebx*4+0xfffffffcu);
    /* 00696095: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00696099: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 0069609d: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
L_006960a1:; BB(0x006960a1);
    /* 006960a1: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 006960a3: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 006960a5: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006960a9: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 006960ad: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 006960af: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 006960b1: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 006960b3: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 006960b5: lea ebx, [ebp*8] */ r_ebx = (u32)(r_ebp*8);
    /* 006960bc: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006960be: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 006960c2: lea edi, [ebp*4] */ r_edi = (u32)(r_ebp*4);
    /* 006960c9: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006960cb: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006960cd: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 006960d1: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006960d3: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 006960d7: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006960db: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006960dc: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006960e0: jne 0x6960a1 */ if (!fZ) goto L_006960a1;
L_006960e2:; BB(0x006960e2);
    /* 006960e2: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
L_006960e6:; BB(0x006960e6);
    /* 006960e6: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006960e9: jl 0x69621a */ if ((fS!=fO)) goto L_0069621a;
L_006960ef:; BB(0x006960ef);
    /* 006960ef: je 0x6961e1 */ if (fZ) goto L_006961e1;
L_006960f5:; BB(0x006960f5);
    /* 006960f5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006960f7: jle 0x6961ce */ if ((fZ||fS!=fO)) goto L_006961ce;
L_006960fd:; BB(0x006960fd);
    /* 006960fd: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00696101: lea esi, [edx + esi*4] */ r_esi = (u32)(r_edx+r_esi*4);
    /* 00696104: mov ebx, eax */ r_ebx = r_eax;
    /* 00696106: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069610a: lea eax, [eax + ebp*8] */ r_eax = (u32)(r_eax+r_ebp*8);
    /* 0069610d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00696111: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00696115: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00696119: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
L_0069611d:; BB(0x0069611d);
    /* 0069611d: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696120: jle 0x696189 */ if ((fZ||fS!=fO)) goto L_00696189;
L_00696122:; BB(0x00696122);
    /* 00696122: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00696126: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0069612a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0069612e: mov eax, esi */ r_eax = r_esi;
    /* 00696130: lea esi, [ebp - 3] */ r_esi = (u32)(r_ebp+0xfffffffdu);
    /* 00696133: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696136: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00696138: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00696139:; BB(0x00696139);
    /* 00696139: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0069613c: fmul dword ptr [edx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffffcu));
    /* 0069613f: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00696142: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696145: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696148: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 0069614a: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069614d: sub edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00696150: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696153: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00696154: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696156: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00696158: fmul dword ptr [edx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff4u));
    /* 0069615b: fld dword ptr [edx - 8] */ FPUSH(R_F32((u32)(r_edx+0xfffffff8u)));
    /* 0069615e: fmul dword ptr [eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xfffffffcu));
    /* 00696161: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00696163: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00696165: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00696167: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 00696169: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0069616b: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0069616d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069616f: fadd dword ptr [ecx - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xfffffffcu));
    /* 00696172: fstp dword ptr [ebx - 4] */ W_F32((u32)(r_ebx+0xfffffffcu), ST(0)); FPOP();
    /* 00696175: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 00696178: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0069617a: fstp dword ptr [edi - 4] */ W_F32((u32)(r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 0069617d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069617f: jne 0x696139 */ if (!fZ) goto L_00696139;
L_00696181:; BB(0x00696181);
    /* 00696181: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00696185: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
L_00696189:; BB(0x00696189);
    /* 00696189: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0069618d: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00696191: lea eax, [ebp*8] */ r_eax = (u32)(r_ebp*8);
    /* 00696198: lea ecx, [ebp*4] */ r_ecx = (u32)(r_ebp*4);
    /* 0069619f: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006961a1: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006961a3: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 006961a7: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006961ab: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 006961af: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 006961b3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006961b5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006961b9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006961bb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006961bc: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 006961c0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006961c4: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006961c8: jne 0x69611d */ if (!fZ) goto L_0069611d;
L_006961ce:; BB(0x006961ce);
    /* 006961ce: mov eax, ebp */ r_eax = r_ebp;
    /* 006961d0: and eax, 0x80000001 */ {  u32 a = r_eax; u32 b = 0x80000001u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 006961d5: jns 0x6961dc */ if (!fS) goto L_006961dc;
L_006961d7:; BB(0x006961d7);
    /* 006961d7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006961d8: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006961db: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006961dc:; BB(0x006961dc);
    /* 006961dc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006961df: je 0x69621a */ if (fZ) goto L_0069621a;
L_006961e1:; BB(0x006961e1);
    /* 006961e1: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 006961e5: lea esi, [ebp - 1] */ r_esi = (u32)(r_ebp+0xffffffffu);
    /* 006961e8: mov ecx, esi */ r_ecx = r_esi;
    /* 006961ea: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006961ec: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006961ee: jle 0x69621a */ if ((fZ||fS!=fO)) goto L_0069621a;
L_006961f0:; BB(0x006961f0);
    /* 006961f0: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 006961f4: lea ebx, [ebp*8] */ r_ebx = (u32)(r_ebp*8);
    /* 006961fb: shl ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 006961fe: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 00696201: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696203: lea edx, [edx + esi*4] */ r_edx = (u32)(r_edx+r_esi*4);
L_00696206:; BB(0x00696206);
    /* 00696206: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00696208: fchs  */ ST(0) = -ST(0);
    /* 0069620a: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0069620c: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0069620e: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696210: mov dword ptr [eax - 4], esi */ W32((u32)(r_eax+0xfffffffcu), r_esi);
    /* 00696213: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696215: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696217: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00696218: jne 0x696206 */ if (!fZ) goto L_00696206;
L_0069621a:; BB(0x0069621a);
    /* 0069621a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069621b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069621c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069621d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069621e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00696221: ret  */ FN_RET(0x00696060); r_esp += 4; return;
}

void f_00696230(void) /* sub_696230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00696230);
    /* 00696230: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00696233: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00696237: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00696238: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 0069623c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069623d: mov ebp, eax */ r_ebp = r_eax;
    /* 0069623f: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00696243: imul ebp, ebx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_ebx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00696246: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00696247: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
    /* 0069624b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069624d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069624e: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 00696252: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0069625a: jle 0x69630a */ if ((fZ||fS!=fO)) goto L_0069630a;
L_00696260:; BB(0x00696260);
    /* 00696260: lea ecx, [ebp + ebp*2] */ r_ecx = (u32)(r_ebp+r_ebp*2);
    /* 00696264: lea ebx, [esi + ebp*4] */ r_ebx = (u32)(r_esi+r_ebp*4);
    /* 00696267: lea edi, [eax*4] */ r_edi = (u32)(r_eax*4);
    /* 0069626e: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 00696272: lea ecx, [esi + ecx*4] */ r_ecx = (u32)(r_esi+r_ecx*4);
    /* 00696275: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00696279: lea ecx, [esi + ebp*8] */ r_ecx = (u32)(r_esi+r_ebp*8);
    /* 0069627c: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00696280: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00696284: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
L_00696288:; BB(0x00696288);
    /* 00696288: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0069628c: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0069628e: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00696290: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00696294: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00696298: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 0069629b: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 0069629d: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006962a0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006962a2: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 006962a4: lea ebx, [edi + ecx] */ r_ebx = (u32)(r_edi+r_ecx);
    /* 006962a7: fstp dword ptr [edx + ecx*4] */ W_F32((u32)(r_edx+r_ecx*4), ST(0)); FPOP();
    /* 006962aa: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 006962ac: fstp dword ptr [edx + ebx*4 - 4] */ W_F32((u32)(r_edx+r_ebx*4+0xfffffffcu), ST(0)); FPOP();
    /* 006962b0: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006962b3: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006962b5: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006962b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006962bb: fld dword ptr [esi + ebx*4] */ FPUSH(R_F32((u32)(r_esi+r_ebx*4)));
    /* 006962be: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006962c2: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 006962c4: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006962c8: fstp dword ptr [edx + ecx*4 - 4] */ W_F32((u32)(r_edx+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 006962cc: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 006962ce: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 006962d2: fsub dword ptr [ebx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx));
    /* 006962d4: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006962d6: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 006962da: fstp dword ptr [edx + ecx*4] */ W_F32((u32)(r_edx+r_ecx*4), ST(0)); FPOP();
    /* 006962dd: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006962e1: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006962e3: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006962e7: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006962eb: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006962ed: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006962f1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006962f5: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006962f7: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006962fb: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 006962ff: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00696300: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00696304: jne 0x696288 */ if (!fZ) goto L_00696288;
L_00696306:; BB(0x00696306);
    /* 00696306: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
L_0069630a:; BB(0x0069630a);
    /* 0069630a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069630d: jl 0x696656 */ if ((fS!=fO)) goto L_00696656;
L_00696313:; BB(0x00696313);
    /* 00696313: je 0x6965a1 */ if (fZ) goto L_006965a1;
L_00696319:; BB(0x00696319);
    /* 00696319: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069631b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069631d: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00696321: jle 0x696599 */ if ((fZ||fS!=fO)) goto L_00696599;
L_00696327:; BB(0x00696327);
    /* 00696327: lea ecx, [eax*4] */ r_ecx = (u32)(r_eax*4);
    /* 0069632e: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 00696331: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00696335: mov ecx, eax */ r_ecx = r_eax;
    /* 00696337: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069633a: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 0069633e: lea ecx, [ebp + ebp*2] */ r_ecx = (u32)(r_ebp+r_ebp*2);
    /* 00696342: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 00696346: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0069634a: lea ecx, [esi + ecx*4] */ r_ecx = (u32)(r_esi+r_ecx*4);
    /* 0069634d: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00696351: lea ecx, [esi + ebp*4] */ r_ecx = (u32)(r_esi+r_ebp*4);
    /* 00696354: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00696358: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 0069635c: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 00696360: jmp 0x696366 */ goto L_00696366;
L_00696362:; BB(0x00696362);
    /* 00696362: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
L_00696366:; BB(0x00696366);
    /* 00696366: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696369: lea ecx, [ebx + edi*4] */ r_ecx = (u32)(r_ebx+r_edi*4);
    /* 0069636c: jle 0x69655a */ if ((fZ||fS!=fO)) goto L_0069655a;
L_00696372:; BB(0x00696372);
    /* 00696372: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 00696375: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696377: lea ebx, [ebx + edi*4] */ r_ebx = (u32)(r_ebx+r_edi*4);
    /* 0069637a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069637e: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 00696381: lea ebp, [esi + edi*4] */ r_ebp = (u32)(r_esi+r_edi*4);
    /* 00696384: lea edx, [edx + ebx*4] */ r_edx = (u32)(r_edx+r_ebx*4);
    /* 00696387: mov ebx, dword ptr [esp + 0x80] */ r_ebx = R32((u32)(r_esp+0x80u));
    /* 0069638e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00696392: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00696396: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0069639a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0069639e: lea edx, [edi + edx*2] */ r_edx = (u32)(r_edi+r_edx*2);
    /* 006963a1: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 006963a8: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 006963ac: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006963b0: lea esi, [esi + edx*4] */ r_esi = (u32)(r_esi+r_edx*4);
    /* 006963b3: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 006963ba: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006963bc: mov eax, dword ptr [esp + 0x80] */ r_eax = R32((u32)(r_esp+0x80u));
    /* 006963c3: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006963c7: mov edx, dword ptr [esp + 0x88] */ r_edx = R32((u32)(r_esp+0x88u));
    /* 006963ce: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006963d0: mov ebx, dword ptr [esp + 0x88] */ r_ebx = R32((u32)(r_esp+0x88u));
    /* 006963d7: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 006963db: mov edx, dword ptr [esp + 0x84] */ r_edx = R32((u32)(r_esp+0x84u));
    /* 006963e2: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006963e4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006963e7: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006963eb: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 006963ef: add edx, -3 */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006963f2: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006963f6: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 006963fa: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006963fc: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006963fd: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00696401: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
L_00696405:; BB(0x00696405);
    /* 00696405: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00696408: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0069640c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069640f: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696412: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00696415: fmul dword ptr [ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffffcu));
    /* 00696418: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0069641a: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 0069641c: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00696420: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00696424: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696427: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069642a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069642c: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 0069642f: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00696431: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00696433: fmul dword ptr [ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffffcu));
    /* 00696436: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0069643a: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0069643e: sub ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00696441: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00696444: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00696448: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0069644c: sub ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0069644f: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00696453: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00696457: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00696459: fld dword ptr [ebx + edx] */ FPUSH(R_F32((u32)(r_ebx+r_edx)));
    /* 0069645c: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 00696460: fmul dword ptr [esi - 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xfffffffcu));
    /* 00696463: fld dword ptr [ebx + eax] */ FPUSH(R_F32((u32)(r_ebx+r_eax)));
    /* 00696466: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00696468: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0069646c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0069646e: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00696472: fld dword ptr [ebx + edx] */ FPUSH(R_F32((u32)(r_ebx+r_edx)));
    /* 00696475: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00696477: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0069647b: fld dword ptr [esi - 4] */ FPUSH(R_F32((u32)(r_esi+0xfffffffcu)));
    /* 0069647e: fmul dword ptr [ebx + eax] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+r_eax));
    /* 00696481: mov ebx, dword ptr [esp + 0x60] */ r_ebx = R32((u32)(r_esp+0x60u));
    /* 00696485: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00696487: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0069648b: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0069648d: fmul dword ptr [edi - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xfffffffcu));
    /* 00696490: fld dword ptr [ebx + eax] */ FPUSH(R_F32((u32)(r_ebx+r_eax)));
    /* 00696493: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 00696495: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696497: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00696499: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 0069649b: fld dword ptr [edi - 4] */ FPUSH(R_F32((u32)(r_edi+0xfffffffcu)));
    /* 0069649e: fmul dword ptr [ebx + eax] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+r_eax));
    /* 006964a1: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006964a5: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006964a7: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 006964ab: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006964ad: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 006964af: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 006964b3: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 006964b5: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 006964b9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 006964bd: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 006964bf: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 006964c3: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 006964c7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006964c9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 006964cd: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 006964d0: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 006964d3: fsub dword ptr [esp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x38u));
    /* 006964d7: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 006964db: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 006964de: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 006964e1: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 006964e5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 006964e7: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 006964eb: fstp dword ptr [ebx - 4] */ W_F32((u32)(r_ebx+0xfffffffcu), ST(0)); FPOP();
    /* 006964ee: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 006964f0: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 006964f4: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 006964f6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 006964f8: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 006964fa: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006964fe: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696501: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696504: fstp dword ptr [ebx - 4] */ W_F32((u32)(r_ebx+0xfffffffcu), ST(0)); FPOP();
    /* 00696507: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0069650b: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0069650d: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0069650f: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00696513: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00696515: fstp dword ptr [ebx - 4] */ W_F32((u32)(r_ebx+0xfffffffcu), ST(0)); FPOP();
    /* 00696518: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069651a: fadd dword ptr [esp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x40u));
    /* 0069651e: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 00696520: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00696524: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 00696528: fstp dword ptr [ebx - 4] */ W_F32((u32)(r_ebx+0xfffffffcu), ST(0)); FPOP();
    /* 0069652b: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0069652f: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00696531: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 00696533: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 00696537: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00696539: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0069653a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069653c: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00696540: jne 0x696405 */ if (!fZ) goto L_00696405;
L_00696546:; BB(0x00696546);
    /* 00696546: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0069654a: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 0069654e: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00696552: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 00696556: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
L_0069655a:; BB(0x0069655a);
    /* 0069655a: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0069655e: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00696562: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696564: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 00696568: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0069656c: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00696570: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696572: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696574: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00696578: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0069657c: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069657e: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00696582: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00696583: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00696587: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0069658b: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 0069658f: jne 0x696362 */ if (!fZ) goto L_00696362;
L_00696595:; BB(0x00696595);
    /* 00696595: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
L_00696599:; BB(0x00696599);
    /* 00696599: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069659b: jne 0x696656 */ if (!fZ) goto L_00696656;
L_006965a1:; BB(0x006965a1);
    /* 006965a1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006965a3: lea edi, [eax + ebp - 1] */ r_edi = (u32)(r_eax+r_ebp+0xffffffffu);
    /* 006965a7: lea ecx, [eax*4] */ r_ecx = (u32)(r_eax*4);
    /* 006965ae: jle 0x696656 */ if ((fZ||fS!=fO)) goto L_00696656;
L_006965b4:; BB(0x006965b4);
    /* 006965b4: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006965b7: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 006965be: lea ecx, [eax*4] */ r_ecx = (u32)(r_eax*4);
    /* 006965c5: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 006965c8: lea ebx, [ecx + edx] */ r_ebx = (u32)(r_ecx+r_edx);
    /* 006965cb: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 006965cf: lea ebx, [edi + ebp*2] */ r_ebx = (u32)(r_edi+r_ebp*2);
    /* 006965d2: lea edx, [edx + eax*4] */ r_edx = (u32)(r_edx+r_eax*4);
    /* 006965d5: lea eax, [edi + ebp] */ r_eax = (u32)(r_edi+r_ebp);
    /* 006965d8: lea ebx, [esi + ebx*4] */ r_ebx = (u32)(r_esi+r_ebx*4);
    /* 006965db: mov dword ptr [esp + 0x88], ebx */ W32((u32)(r_esp+0x88u), r_ebx);
    /* 006965e2: lea ebx, [esi + edi*4] */ r_ebx = (u32)(r_esi+r_edi*4);
    /* 006965e5: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006965e7: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 006965eb: lea eax, [esi + eax*4] */ r_eax = (u32)(r_esi+r_eax*4);
    /* 006965ee: lea esi, [esi + edi*4] */ r_esi = (u32)(r_esi+r_edi*4);
    /* 006965f1: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 006965f5: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
L_006965f9:; BB(0x006965f9);
    /* 006965f9: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 00696600: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00696602: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 00696604: fmul dword ptr [0x7878fc] */ ST(0) = ST(0) * R_F32((u32)(0x7878fcu));
    /* 0069660a: fchs  */ ST(0) = -ST(0);
    /* 0069660c: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0069660e: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 00696610: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696612: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00696614: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 0069661b: mov edi, dword ptr [esp + 0x80] */ r_edi = R32((u32)(r_esp+0x80u));
    /* 00696622: fmul dword ptr [0x7878fc] */ ST(0) = ST(0) * R_F32((u32)(0x7878fcu));
    /* 00696628: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069662a: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 0069662c: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0069662f: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00696631: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00696633: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00696635: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00696638: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0069663a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069663c: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 0069663e: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00696641: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00696643: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 00696645: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696647: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00696649: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069664b: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 0069664f: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00696650: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 00696654: jne 0x6965f9 */ if (!fZ) goto L_006965f9;
L_00696656:; BB(0x00696656);
    /* 00696656: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00696657: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00696658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696659: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069665a: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069665d: ret  */ FN_RET(0x00696230); r_esp += 4; return;
}

void f_00696660(void) /* sub_696660 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00696660);
    /* 00696660: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00696663: fild dword ptr [esp + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x54u)));
    /* 00696667: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 0069666b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069666c: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 00696670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00696671: fdivr dword ptr [0x787900] */ ST(0) = R_F32((u32)(0x787900u)) / ST(0);
    /* 00696677: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0069667a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069667b: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069667d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00696681: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 00696684: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00696686: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0069668a: mov eax, ebx */ r_eax = r_ebx;
    /* 0069668c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069668d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0069668f: imul eax, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x68u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00696694: fcos  */ ST(0) = cosl(ST(0));
    /* 00696696: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069669a: mov eax, ebx */ r_eax = r_ebx;
    /* 0069669c: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 006966a0: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006966a3: fsin  */ ST(0) = sinl(ST(0));
    /* 006966a5: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006966a8: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006966ac: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 006966b0: je 0x696be6 */ if (fZ) goto L_00696be6;
L_006966b6:; BB(0x006966b6);
    /* 006966b6: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 006966ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006966bc: jle 0x6966d6 */ if ((fZ||fS!=fO)) goto L_006966d6;
L_006966be:; BB(0x006966be);
    /* 006966be: mov eax, dword ptr [esp + 0x80] */ r_eax = R32((u32)(r_esp+0x80u));
    /* 006966c5: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 006966c9: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_006966cb:; BB(0x006966cb);
    /* 006966cb: mov esi, dword ptr [ecx + eax] */ r_esi = R32((u32)(r_ecx+r_eax));
    /* 006966ce: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 006966d0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006966d3: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006966d4: jne 0x6966cb */ if (!fZ) goto L_006966cb;
L_006966d6:; BB(0x006966d6);
    /* 006966d6: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 006966da: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006966dd: jle 0x696737 */ if ((fZ||fS!=fO)) goto L_00696737;
L_006966df:; BB(0x006966df);
    /* 006966df: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006966e3: mov edi, dword ptr [esp + 0x7c] */ r_edi = R32((u32)(r_esp+0x7cu));
    /* 006966e7: lea edx, [eax*4] */ r_edx = (u32)(r_eax*4);
    /* 006966ee: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 006966f1: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006966f5: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 006966f9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_006966fd:; BB(0x006966fd);
    /* 006966fd: add edi, dword ptr [esp + 0x38] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696701: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696703: jle 0x69672a */ if ((fZ||fS!=fO)) goto L_0069672a;
L_00696705:; BB(0x00696705);
    /* 00696705: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00696709: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 0069670d: lea esi, [ebx*4] */ r_esi = (u32)(r_ebx*4);
    /* 00696714: mov eax, edi */ r_eax = r_edi;
    /* 00696716: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_00696718:; BB(0x00696718);
    /* 00696718: mov ebp, dword ptr [ecx + eax] */ r_ebp = R32((u32)(r_ecx+r_eax));
    /* 0069671b: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 0069671d: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069671f: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00696720: jne 0x696718 */ if (!fZ) goto L_00696718;
L_00696722:; BB(0x00696722);
    /* 00696722: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00696726: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
L_0069672a:; BB(0x0069672a);
    /* 0069672a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0069672e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069672f: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00696733: jne 0x6966fd */ if (!fZ) goto L_006966fd;
L_00696735:; BB(0x00696735);
    /* 00696735: jmp 0x69673b */ goto L_0069673b;
L_00696737:; BB(0x00696737);
    /* 00696737: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
L_0069673b:; BB(0x0069673b);
    /* 0069673b: mov eax, ebx */ r_eax = r_ebx;
    /* 0069673d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069673f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00696743: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00696747: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696749: jle 0x696865 */ if ((fZ||fS!=fO)) goto L_00696865;
L_0069674f:; BB(0x0069674f);
    /* 0069674f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696752: jle 0x696944 */ if ((fZ||fS!=fO)) goto L_00696944;
L_00696758:; BB(0x00696758);
    /* 00696758: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 0069675f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00696763: lea ecx, [ebx*4] */ r_ecx = (u32)(r_ebx*4);
    /* 0069676a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0069676e: lea eax, [eax + esi*4 - 4] */ r_eax = (u32)(r_eax+r_esi*4+0xfffffffcu);
    /* 00696772: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 00696779: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 0069677d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069677f: lea ecx, [ebx*4 + 4] */ r_ecx = (u32)(r_ebx*4+0x4u);
    /* 00696786: mov esi, ecx */ r_esi = r_ecx;
    /* 00696788: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 0069678c: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0069678e: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 00696792: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00696795: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00696796: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0069679a: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 0069679e: jmp 0x6967ac */ goto L_006967ac;
L_006967a0:; BB(0x006967a0);
    /* 006967a0: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 006967a4: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 006967a8: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
L_006967ac:; BB(0x006967ac);
    /* 006967ac: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006967ae: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006967b0: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006967b4: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 006967b8: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 006967bf: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 006967c6: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006967c8: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 006967cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006967ce: mov dword ptr [esp + 0x84], ecx */ W32((u32)(r_esp+0x84u), r_ecx);
    /* 006967d5: jle 0x696851 */ if ((fZ||fS!=fO)) goto L_00696851;
L_006967d7:; BB(0x006967d7);
    /* 006967d7: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 006967db: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 006967df: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006967e3: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
L_006967e7:; BB(0x006967e7);
    /* 006967e7: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006967eb: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 006967f2: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006967f4: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006967f6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006967f9: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006967fd: jle 0x696846 */ if ((fZ||fS!=fO)) goto L_00696846;
L_006967ff:; BB(0x006967ff);
    /* 006967ff: mov edi, dword ptr [esp + 0x7c] */ r_edi = R32((u32)(r_esp+0x7cu));
    /* 00696803: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00696807: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 0069680e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00696812: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00696814: lea edx, [ebx - 3] */ r_edx = (u32)(r_ebx+0xfffffffdu);
    /* 00696817: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00696819: mov esi, ebp */ r_esi = r_ebp;
    /* 0069681b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0069681c:; BB(0x0069681c);
    /* 0069681c: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0069681f: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00696822: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00696825: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696828: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069682b: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069682e: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0069682f: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00696831: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696833: fstp dword ptr [edi + eax] */ W_F32((u32)(r_edi+r_eax), ST(0)); FPOP();
    /* 00696836: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00696839: fmul dword ptr [ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xfffffffcu));
    /* 0069683c: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0069683e: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 00696840: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00696842: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00696844: jne 0x69681c */ if (!fZ) goto L_0069681c;
L_00696846:; BB(0x00696846);
    /* 00696846: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0069684a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069684b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0069684f: jne 0x6967e7 */ if (!fZ) goto L_006967e7;
L_00696851:; BB(0x00696851);
    /* 00696851: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00696855: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696856: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0069685a: jne 0x6967a0 */ if (!fZ) goto L_006967a0;
L_00696860:; BB(0x00696860);
    /* 00696860: jmp 0x696944 */ goto L_00696944;
L_00696865:; BB(0x00696865);
    /* 00696865: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696868: jle 0x696944 */ if ((fZ||fS!=fO)) goto L_00696944;
L_0069686e:; BB(0x0069686e);
    /* 0069686e: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 00696875: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00696879: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 0069687d: lea ebp, [ebx*4] */ r_ebp = (u32)(r_ebx*4);
    /* 00696884: lea ecx, [ecx + eax*4 - 4] */ r_ecx = (u32)(r_ecx+r_eax*4+0xfffffffcu);
    /* 00696888: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0069688c: lea esi, [eax - 4] */ r_esi = (u32)(r_eax+0xfffffffcu);
    /* 0069688f: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00696893: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00696894: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00696898:; BB(0x00696898);
    /* 00696898: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0069689c: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069689e: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006968a1: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006968a3: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006968a5: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006968a8: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006968ac: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006968b0: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 006968b4: jle 0x696935 */ if ((fZ||fS!=fO)) goto L_00696935;
L_006968b6:; BB(0x006968b6);
    /* 006968b6: mov eax, esi */ r_eax = r_esi;
    /* 006968b8: lea esi, [ebx - 3] */ r_esi = (u32)(r_ebx+0xfffffffdu);
    /* 006968bb: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 006968bd: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006968be: mov dword ptr [esp + 0x84], esi */ W32((u32)(r_esp+0x84u), r_esi);
L_006968c5:; BB(0x006968c5);
    /* 006968c5: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 006968c9: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006968cc: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006968cf: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006968d2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006968d4: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006968d8: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006968dc: jle 0x69691f */ if ((fZ||fS!=fO)) goto L_0069691f;
L_006968de:; BB(0x006968de);
    /* 006968de: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 006968e2: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 006968e6: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006968e8: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
L_006968ec:; BB(0x006968ec);
    /* 006968ec: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 006968ef: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 006968f1: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 006968f4: fmul dword ptr [eax] */ ST(0) = ST(0) * R_F32((u32)(r_eax));
    /* 006968f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006968f8: fstp dword ptr [eax + esi] */ W_F32((u32)(r_eax+r_esi), ST(0)); FPOP();
    /* 006968fb: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 006968fe: fmul dword ptr [eax + 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x4u));
    /* 00696901: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00696903: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00696905: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696907: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00696909: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0069690b: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069690d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0069690e: jne 0x6968ec */ if (!fZ) goto L_006968ec;
L_00696910:; BB(0x00696910);
    /* 00696910: mov esi, dword ptr [esp + 0x84] */ r_esi = R32((u32)(r_esp+0x84u));
    /* 00696917: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0069691b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
L_0069691f:; BB(0x0069691f);
    /* 0069691f: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00696920: mov dword ptr [esp + 0x84], esi */ W32((u32)(r_esp+0x84u), r_esi);
    /* 00696927: jne 0x6968c5 */ if (!fZ) goto L_006968c5;
L_00696929:; BB(0x00696929);
    /* 00696929: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0069692d: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00696931: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
L_00696935:; BB(0x00696935);
    /* 00696935: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00696939: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069693a: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0069693e: jne 0x696898 */ if (!fZ) goto L_00696898;
L_00696944:; BB(0x00696944);
    /* 00696944: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00696948: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 0069694c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00696950: imul edx, dword ptr [esp + 0x64] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x64u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00696955: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696957: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069695b: mov dword ptr [esp + 0x84], 0 */ W32((u32)(r_esp+0x84u), 0x0u);
    /* 00696966: jge 0x696acd */ if ((fS==fO)) goto L_00696acd;
L_0069696c:; BB(0x0069696c);
    /* 0069696c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069696f: jle 0x696be6 */ if ((fZ||fS!=fO)) goto L_00696be6;
L_00696975:; BB(0x00696975);
    /* 00696975: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00696979: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 0069697d: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 00696981: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00696985: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00696989: lea esi, [ebx*4] */ r_esi = (u32)(r_ebx*4);
    /* 00696990: lea ecx, [ebx*4 + 4] */ r_ecx = (u32)(r_ebx*4+0x4u);
    /* 00696997: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00696999: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0069699b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069699c: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_006969a0:; BB(0x006969a0);
    /* 006969a0: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006969a4: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 006969ab: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006969ad: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006969af: mov dword ptr [esp + 0x84], ecx */ W32((u32)(r_esp+0x84u), r_ecx);
    /* 006969b6: lea ecx, [eax*4] */ r_ecx = (u32)(r_eax*4);
    /* 006969bd: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006969bf: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006969c1: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006969c5: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 006969c9: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006969cb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006969ce: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 006969d2: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 006969d9: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 006969dd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006969e1: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006969e5: jle 0x696ab9 */ if ((fZ||fS!=fO)) goto L_00696ab9;
L_006969eb:; BB(0x006969eb);
    /* 006969eb: mov eax, ebp */ r_eax = r_ebp;
    /* 006969ed: mov ebp, dword ptr [esp + 0x84] */ r_ebp = R32((u32)(r_esp+0x84u));
    /* 006969f4: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006969f6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006969fa: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006969fe: lea edx, [ebx - 3] */ r_edx = (u32)(r_ebx+0xfffffffdu);
    /* 00696a01: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00696a03: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696a04: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_00696a08:; BB(0x00696a08);
    /* 00696a08: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00696a0c: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696a0f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00696a12: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696a15: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00696a19: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 00696a1d: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696a20: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 00696a24: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696a26: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00696a2a: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00696a2e: jle 0x696aa2 */ if ((fZ||fS!=fO)) goto L_00696aa2;
L_00696a30:; BB(0x00696a30);
    /* 00696a30: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00696a34: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696a36: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00696a3a: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00696a3d: lea ebp, [ecx + edx] */ r_ebp = (u32)(r_ecx+r_edx);
    /* 00696a40: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00696a44: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 00696a48: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00696a4a: lea ecx, [ecx + ebp - 4] */ r_ecx = (u32)(r_ecx+r_ebp+0xfffffffcu);
    /* 00696a4e: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 00696a52: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
L_00696a56:; BB(0x00696a56);
    /* 00696a56: fld dword ptr [eax + esi] */ FPUSH(R_F32((u32)(r_eax+r_esi)));
    /* 00696a59: fadd dword ptr [ecx + esi] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi));
    /* 00696a5c: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696a5e: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696a60: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00696a64: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696a66: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00696a68: fstp dword ptr [eax + edx] */ W_F32((u32)(r_eax+r_edx), ST(0)); FPOP();
    /* 00696a6b: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00696a6e: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 00696a71: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00696a75: fstp dword ptr [ecx + edx] */ W_F32((u32)(r_ecx+r_edx), ST(0)); FPOP();
    /* 00696a78: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00696a7b: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 00696a7e: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00696a80: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00696a82: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00696a84: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00696a87: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00696a8b: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00696a8c: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00696a90: jne 0x696a56 */ if (!fZ) goto L_00696a56;
L_00696a92:; BB(0x00696a92);
    /* 00696a92: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00696a96: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00696a9a: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00696a9e: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
L_00696aa2:; BB(0x00696aa2);
    /* 00696aa2: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00696aa3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00696aa7: jne 0x696a08 */ if (!fZ) goto L_00696a08;
L_00696aad:; BB(0x00696aad);
    /* 00696aad: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00696ab1: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 00696ab5: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
L_00696ab9:; BB(0x00696ab9);
    /* 00696ab9: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00696abd: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696abe: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00696ac2: jne 0x6969a0 */ if (!fZ) goto L_006969a0;
L_00696ac8:; BB(0x00696ac8);
    /* 00696ac8: jmp 0x696be6 */ goto L_00696be6;
L_00696acd:; BB(0x00696acd);
    /* 00696acd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ad0: jle 0x696be6 */ if ((fZ||fS!=fO)) goto L_00696be6;
L_00696ad6:; BB(0x00696ad6);
    /* 00696ad6: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00696ada: mov edi, eax */ r_edi = r_eax;
    /* 00696adc: lea ebp, [eax + edx*4] */ r_ebp = (u32)(r_eax+r_edx*4);
    /* 00696adf: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 00696ae3: lea ecx, [eax + edx*4 - 4] */ r_ecx = (u32)(r_eax+r_edx*4+0xfffffffcu);
    /* 00696ae7: lea edx, [eax - 4] */ r_edx = (u32)(r_eax+0xfffffffcu);
    /* 00696aea: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00696aee: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00696aef: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_00696af3:; BB(0x00696af3);
    /* 00696af3: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00696af7: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00696afa: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696afc: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696afe: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00696b00: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00696b02: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00696b06: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 00696b0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696b0c: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00696b10: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 00696b14: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00696b18: jle 0x696bd7 */ if ((fZ||fS!=fO)) goto L_00696bd7;
L_00696b1e:; BB(0x00696b1e);
    /* 00696b1e: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 00696b25: mov edx, eax */ r_edx = r_eax;
    /* 00696b27: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00696b2b: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00696b2f: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00696b33: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_00696b37:; BB(0x00696b37);
    /* 00696b37: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696b3a: jle 0x696b83 */ if ((fZ||fS!=fO)) goto L_00696b83;
L_00696b3c:; BB(0x00696b3c);
    /* 00696b3c: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
    /* 00696b40: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 00696b44: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00696b4b: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00696b4d: lea edx, [ebx - 3] */ r_edx = (u32)(r_ebx+0xfffffffdu);
    /* 00696b50: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00696b52: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00696b53:; BB(0x00696b53);
    /* 00696b53: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00696b56: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00696b59: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696b5c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696b5f: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696b62: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00696b65: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00696b66: fstp dword ptr [eax + esi] */ W_F32((u32)(r_eax+r_esi), ST(0)); FPOP();
    /* 00696b69: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00696b6c: fsub dword ptr [ecx + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4u));
    /* 00696b6f: fstp dword ptr [ecx + esi] */ W_F32((u32)(r_ecx+r_esi), ST(0)); FPOP();
    /* 00696b72: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00696b75: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 00696b78: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00696b7a: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00696b7c: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00696b7e: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00696b81: jne 0x696b53 */ if (!fZ) goto L_00696b53;
L_00696b83:; BB(0x00696b83);
    /* 00696b83: mov ebp, dword ptr [esp + 0x84] */ r_ebp = R32((u32)(r_esp+0x84u));
    /* 00696b8a: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00696b8e: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00696b92: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 00696b99: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00696b9b: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696b9d: mov dword ptr [esp + 0x84], ebp */ W32((u32)(r_esp+0x84u), r_ebp);
    /* 00696ba4: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00696ba8: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00696baa: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696bac: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00696bb0: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00696bb4: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696bb5: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00696bb9: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00696bbd: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00696bc1: jne 0x696b37 */ if (!fZ) goto L_00696b37;
L_00696bc7:; BB(0x00696bc7);
    /* 00696bc7: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00696bcb: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00696bcf: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00696bd3: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
L_00696bd7:; BB(0x00696bd7);
    /* 00696bd7: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00696bdb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696bdc: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00696be0: jne 0x696af3 */ if (!fZ) goto L_00696af3;
L_00696be6:; BB(0x00696be6);
    /* 00696be6: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 00696bea: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696bec: jle 0x696c08 */ if ((fZ||fS!=fO)) goto L_00696c08;
L_00696bee:; BB(0x00696bee);
    /* 00696bee: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 00696bf2: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 00696bf9: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00696bfb: mov edx, esi */ r_edx = r_esi;
L_00696bfd:; BB(0x00696bfd);
    /* 00696bfd: mov edi, dword ptr [ecx + eax] */ r_edi = R32((u32)(r_ecx+r_eax));
    /* 00696c00: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 00696c02: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696c05: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00696c06: jne 0x696bfd */ if (!fZ) goto L_00696bfd;
L_00696c08:; BB(0x00696c08);
    /* 00696c08: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00696c0c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00696c10: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00696c13: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00696c17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00696c19: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696c1c: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00696c20: jle 0x696ccc */ if ((fZ||fS!=fO)) goto L_00696ccc;
L_00696c26:; BB(0x00696c26);
    /* 00696c26: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 00696c2a: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 00696c31: mov edi, ebx */ r_edi = r_ebx;
    /* 00696c33: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00696c35: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00696c39: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00696c3b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00696c3c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
L_00696c40:; BB(0x00696c40);
    /* 00696c40: lea eax, [ebp*4] */ r_eax = (u32)(r_ebp*4);
    /* 00696c47: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696c49: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00696c4b: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00696c4f: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696c51: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00696c53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696c55: mov dword ptr [esp + 0x84], ecx */ W32((u32)(r_esp+0x84u), r_ecx);
    /* 00696c5c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00696c60: jle 0x696cb5 */ if ((fZ||fS!=fO)) goto L_00696cb5;
L_00696c62:; BB(0x00696c62);
    /* 00696c62: mov ebp, edi */ r_ebp = r_edi;
    /* 00696c64: mov eax, esi */ r_eax = r_esi;
    /* 00696c66: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00696c68: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00696c6a: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00696c6e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00696c70: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 00696c74: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00696c76: lea ecx, [ebp + ecx*4] */ r_ecx = (u32)(r_ebp+r_ecx*4);
    /* 00696c7a: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 00696c7e: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
L_00696c82:; BB(0x00696c82);
    /* 00696c82: lea ebp, [ebx*4] */ r_ebp = (u32)(r_ebx*4);
    /* 00696c89: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696c8b: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696c8d: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00696c91: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00696c93: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00696c95: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00696c96: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00696c9a: fstp dword ptr [eax + edx] */ W_F32((u32)(r_eax+r_edx), ST(0)); FPOP();
    /* 00696c9d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00696c9f: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00696ca1: fstp dword ptr [ecx + edx] */ W_F32((u32)(r_ecx+r_edx), ST(0)); FPOP();
    /* 00696ca4: jne 0x696c82 */ if (!fZ) goto L_00696c82;
L_00696ca6:; BB(0x00696ca6);
    /* 00696ca6: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00696caa: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 00696cb1: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_00696cb5:; BB(0x00696cb5);
    /* 00696cb5: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00696cb9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696cba: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00696cbe: jne 0x696c40 */ if (!fZ) goto L_00696c40;
L_00696cc0:; BB(0x00696cc0);
    /* 00696cc0: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 00696cc4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00696cc8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00696ccc:; BB(0x00696ccc);
    /* 00696ccc: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00696cd0: mov dword ptr [esp + 0x74], 0x3f800000 */ W32((u32)(r_esp+0x74u), 0x3f800000u);
    /* 00696cd8: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00696cd9: imul ecx, esi */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_esi; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00696cdc: fld dword ptr [0x6c2fe8] */ FPUSH(R_F32((u32)(0x6c2fe8u)));
    /* 00696ce2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ce5: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00696ce9: jle 0x696e78 */ if ((fZ||fS!=fO)) goto L_00696e78;
L_00696cef:; BB(0x00696cef);
    /* 00696cef: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 00696cf6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00696cf7: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00696cfb: lea edx, [ecx + edx*4] */ r_edx = (u32)(r_ecx+r_edx*4);
    /* 00696cfe: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00696d02: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 00696d09: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
L_00696d0d:; BB(0x00696d0d);
    /* 00696d0d: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00696d11: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00696d13: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00696d15: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00696d19: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00696d1d: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00696d21: mov edi, dword ptr [esp + 0x84] */ r_edi = R32((u32)(r_esp+0x84u));
    /* 00696d28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00696d2a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00696d2c: lea ecx, [edx*4] */ r_ecx = (u32)(r_edx*4);
    /* 00696d33: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00696d35: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00696d37: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00696d3b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696d3d: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00696d41: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696d43: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 00696d47: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00696d4b: mov dword ptr [esp + 0x84], edi */ W32((u32)(r_esp+0x84u), r_edi);
    /* 00696d52: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696d54: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00696d58: jle 0x696d9a */ if ((fZ||fS!=fO)) goto L_00696d9a;
L_00696d5a:; BB(0x00696d5a);
    /* 00696d5a: mov ebp, dword ptr [esp + 0x78] */ r_ebp = R32((u32)(r_esp+0x78u));
    /* 00696d5e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00696d62: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696d64: lea esi, [ebp + edx*4] */ r_esi = (u32)(r_ebp+r_edx*4);
    /* 00696d68: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
L_00696d6c:; BB(0x00696d6c);
    /* 00696d6c: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00696d70: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00696d72: mov ebp, dword ptr [esp + 0x78] */ r_ebp = R32((u32)(r_esp+0x78u));
    /* 00696d76: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696d79: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696d7c: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00696d7f: fadd dword ptr [ebp + eax*4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_eax*4));
    /* 00696d83: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 00696d87: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696d8a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696d8b: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696d8d: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00696d90: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696d92: fmul dword ptr [esi - 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xfffffffcu));
    /* 00696d95: fstp dword ptr [edi - 4] */ W_F32((u32)(r_edi+0xfffffffcu), ST(0)); FPOP();
    /* 00696d98: jl 0x696d6c */ if ((fS!=fO)) goto L_00696d6c;
L_00696d9a:; BB(0x00696d9a);
    /* 00696d9a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00696d9e: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00696da2: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696da5: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00696da9: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696dab: jle 0x696e5d */ if ((fZ||fS!=fO)) goto L_00696e5d;
L_00696db1:; BB(0x00696db1);
    /* 00696db1: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 00696db5: mov eax, dword ptr [esp + 0x78] */ r_eax = R32((u32)(r_esp+0x78u));
    /* 00696db9: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00696dbd: lea edx, [eax + ebp*4] */ r_edx = (u32)(r_eax+r_ebp*4);
    /* 00696dc0: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696dc3: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00696dc7: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00696dcb: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00696dcf: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 00696dd2: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
L_00696dd6:; BB(0x00696dd6);
    /* 00696dd6: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00696dda: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00696ddc: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00696dde: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00696de0: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00696de4: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00696de8: lea eax, [ebp*4] */ r_eax = (u32)(r_ebp*4);
    /* 00696def: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00696df1: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696df3: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00696df5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696df7: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00696dfb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696dfd: fmul dword ptr [esp + 0x74] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x74u));
    /* 00696e01: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00696e03: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00696e05: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00696e09: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00696e0d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00696e0f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00696e13: jle 0x696e4c */ if ((fZ||fS!=fO)) goto L_00696e4c;
L_00696e15:; BB(0x00696e15);
    /* 00696e15: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 00696e1c: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00696e20: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00696e24: mov edi, ebp */ r_edi = r_ebp;
L_00696e26:; BB(0x00696e26);
    /* 00696e26: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00696e2a: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00696e2c: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696e2f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696e32: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00696e35: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696e38: fadd dword ptr [eax - 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xfffffffcu));
    /* 00696e3b: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00696e3c: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00696e3f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00696e41: fmul dword ptr [esi - 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xfffffffcu));
    /* 00696e44: fadd dword ptr [ecx - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xfffffffcu));
    /* 00696e47: fstp dword ptr [ecx - 4] */ W_F32((u32)(r_ecx+0xfffffffcu), ST(0)); FPOP();
    /* 00696e4a: jne 0x696e26 */ if (!fZ) goto L_00696e26;
L_00696e4c:; BB(0x00696e4c);
    /* 00696e4c: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00696e50: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696e51: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00696e55: jne 0x696dd6 */ if (!fZ) goto L_00696dd6;
L_00696e5b:; BB(0x00696e5b);
    /* 00696e5b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00696e5d:; BB(0x00696e5d);
    /* 00696e5d: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00696e61: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696e62: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00696e64: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00696e68: jne 0x696d0d */ if (!fZ) goto L_00696d0d;
L_00696e6e:; BB(0x00696e6e);
    /* 00696e6e: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00696e72: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00696e76: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00696e78:; BB(0x00696e78);
    /* 00696e78: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696e7b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00696e7d: jle 0x696ed4 */ if ((fZ||fS!=fO)) goto L_00696ed4;
L_00696e7f:; BB(0x00696e7f);
    /* 00696e7f: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00696e83: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00696e87: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 00696e8b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00696e8c: lea edx, [ecx*4] */ r_edx = (u32)(r_ecx*4);
    /* 00696e93: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00696e97: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 00696e9e: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00696ea5: mov esi, ecx */ r_esi = r_ecx;
L_00696ea7:; BB(0x00696ea7);
    /* 00696ea7: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00696eae: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00696eb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00696eb2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696eb4: jle 0x696ec9 */ if ((fZ||fS!=fO)) goto L_00696ec9;
L_00696eb6:; BB(0x00696eb6);
    /* 00696eb6: mov ecx, edi */ r_ecx = r_edi;
L_00696eb8:; BB(0x00696eb8);
    /* 00696eb8: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 00696ebb: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00696ebd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696ebe: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696ec1: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696ec3: fstp dword ptr [edx + eax*4 - 4] */ W_F32((u32)(r_edx+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 00696ec7: jl 0x696eb8 */ if ((fS!=fO)) goto L_00696eb8;
L_00696ec9:; BB(0x00696ec9);
    /* 00696ec9: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00696ecd: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696ece: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00696ed2: jne 0x696ea7 */ if (!fZ) goto L_00696ea7;
L_00696ed4:; BB(0x00696ed4);
    /* 00696ed4: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00696ed8: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696eda: jge 0x696f3b */ if ((fS==fO)) goto L_00696f3b;
L_00696edc:; BB(0x00696edc);
    /* 00696edc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696ede: jle 0x696f95 */ if ((fZ||fS!=fO)) goto L_00696f95;
L_00696ee4:; BB(0x00696ee4);
    /* 00696ee4: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 00696ee8: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 00696eec: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00696eee: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 00696ef2: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
L_00696ef6:; BB(0x00696ef6);
    /* 00696ef6: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00696efa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696efc: jle 0x696f2b */ if ((fZ||fS!=fO)) goto L_00696f2b;
L_00696efe:; BB(0x00696efe);
    /* 00696efe: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00696f02: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 00696f06: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f08: lea edi, [eax*4] */ r_edi = (u32)(r_eax*4);
    /* 00696f0f: mov eax, edx */ r_eax = r_edx;
L_00696f11:; BB(0x00696f11);
    /* 00696f11: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00696f13: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 00696f15: lea ebp, [ebx*4] */ r_ebp = (u32)(r_ebx*4);
    /* 00696f1c: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696f1e: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f20: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00696f21: jne 0x696f11 */ if (!fZ) goto L_00696f11;
L_00696f23:; BB(0x00696f23);
    /* 00696f23: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00696f27: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_00696f2b:; BB(0x00696f2b);
    /* 00696f2b: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00696f2f: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00696f32: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696f33: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00696f37: jne 0x696ef6 */ if (!fZ) goto L_00696ef6;
L_00696f39:; BB(0x00696f39);
    /* 00696f39: jmp 0x696f95 */ goto L_00696f95;
L_00696f3b:; BB(0x00696f3b);
    /* 00696f3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696f3d: jle 0x696f95 */ if ((fZ||fS!=fO)) goto L_00696f95;
L_00696f3f:; BB(0x00696f3f);
    /* 00696f3f: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00696f43: mov esi, dword ptr [esp + 0x7c] */ r_esi = R32((u32)(r_esp+0x7cu));
    /* 00696f47: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00696f4b: lea edx, [ecx*4] */ r_edx = (u32)(r_ecx*4);
    /* 00696f52: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 00696f56: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 00696f5a: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
L_00696f5e:; BB(0x00696f5e);
    /* 00696f5e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696f60: jle 0x696f73 */ if ((fZ||fS!=fO)) goto L_00696f73;
L_00696f62:; BB(0x00696f62);
    /* 00696f62: mov eax, esi */ r_eax = r_esi;
    /* 00696f64: mov edx, ebx */ r_edx = r_ebx;
L_00696f66:; BB(0x00696f66);
    /* 00696f66: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00696f68: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696f6b: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 00696f6d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f70: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00696f71: jne 0x696f66 */ if (!fZ) goto L_00696f66;
L_00696f73:; BB(0x00696f73);
    /* 00696f73: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00696f77: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 00696f7b: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 00696f82: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696f84: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00696f86: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00696f8a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00696f8b: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00696f8f: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00696f93: jne 0x696f5e */ if (!fZ) goto L_00696f5e;
L_00696f95:; BB(0x00696f95);
    /* 00696f95: mov esi, ebp */ r_esi = r_ebp;
    /* 00696f97: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00696f9b: imul esi, dword ptr [esp + 0x64] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_esp+0x64u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00696fa0: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00696fa3: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00696fa6: mov dword ptr [esp + 0x84], esi */ W32((u32)(r_esp+0x84u), r_esi);
    /* 00696fad: jle 0x69703b */ if ((fZ||fS!=fO)) goto L_0069703b;
L_00696fb3:; BB(0x00696fb3);
    /* 00696fb3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00696fb7: mov ecx, dword ptr [esp + 0x7c] */ r_ecx = R32((u32)(r_esp+0x7cu));
    /* 00696fbb: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00696fbe: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00696fbf: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00696fc3: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00696fc7: lea edx, [ecx + esi*4] */ r_edx = (u32)(r_ecx+r_esi*4);
    /* 00696fca: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
L_00696fce:; BB(0x00696fce);
    /* 00696fce: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00696fd2: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00696fd4: lea edi, [ebp*4] */ r_edi = (u32)(r_ebp*4);
    /* 00696fdb: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00696fdd: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00696fdf: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 00696fe3: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00696fe7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00696fe9: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 00696fed: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 00696ff4: jle 0x697030 */ if ((fZ||fS!=fO)) goto L_00697030;
L_00696ff6:; BB(0x00696ff6);
    /* 00696ff6: lea esi, [ebx*4] */ r_esi = (u32)(r_ebx*4);
L_00696ffd:; BB(0x00696ffd);
    /* 00696ffd: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00696fff: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00697001: mov dword ptr [eax - 4], ebp */ W32((u32)(r_eax+0xfffffffcu), r_ebp);
    /* 00697004: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 00697006: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 00697008: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0069700c: shl ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0069700f: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697011: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00697013: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00697014: jne 0x696ffd */ if (!fZ) goto L_00696ffd;
L_00697016:; BB(0x00697016);
    /* 00697016: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0069701a: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 0069701e: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 00697022: mov edx, dword ptr [esp + 0x80] */ r_edx = R32((u32)(r_esp+0x80u));
    /* 00697029: mov esi, dword ptr [esp + 0x84] */ r_esi = R32((u32)(r_esp+0x84u));
L_00697030:; BB(0x00697030);
    /* 00697030: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 00697034: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00697035: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 00697039: jne 0x696fce */ if (!fZ) goto L_00696fce;
L_0069703b:; BB(0x0069703b);
    /* 0069703b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069703e: je 0x69736b */ if (fZ) goto L_0069736b;
L_00697044:; BB(0x00697044);
    /* 00697044: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00697048: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0069704c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069704e: jge 0x697207 */ if ((fS==fO)) goto L_00697207;
L_00697054:; BB(0x00697054);
    /* 00697054: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00697058: mov eax, ebx */ r_eax = r_ebx;
    /* 0069705a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069705c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069705f: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00697067: jle 0x69736b */ if ((fZ||fS!=fO)) goto L_0069736b;
L_0069706d:; BB(0x0069706d);
    /* 0069706d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00697070: mov edi, ecx */ r_edi = r_ecx;
    /* 00697072: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00697075: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 00697079: mov ecx, dword ptr [esp + 0x7c] */ r_ecx = R32((u32)(r_esp+0x7cu));
    /* 0069707d: shl ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00697080: lea esi, [ecx + esi*4 + 8] */ r_esi = (u32)(r_ecx+r_esi*4+0x8u);
    /* 00697084: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00697087: mov dword ptr [esp + 0x7c], ecx */ W32((u32)(r_esp+0x7cu), r_ecx);
    /* 0069708b: mov ecx, 4 */ r_ecx = 0x4u;
    /* 00697090: mov dword ptr [esp + 0x54], ebp */ W32((u32)(r_esp+0x54u), r_ebp);
    /* 00697094: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00697096: lea ebp, [eax + ebx - 2] */ r_ebp = (u32)(r_eax+r_ebx+0xfffffffeu);
    /* 0069709a: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 0069709e: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006970a0: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006970a2: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006970a3: mov dword ptr [esp + 0x74], esi */ W32((u32)(r_esp+0x74u), r_esi);
    /* 006970a7: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 006970ab: lea esi, [eax + ebp*4] */ r_esi = (u32)(r_eax+r_ebp*4);
    /* 006970ae: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
L_006970b2:; BB(0x006970b2);
    /* 006970b2: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 006970b6: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 006970b9: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006970bb: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006970bf: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006970c1: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006970c3: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 006970c7: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006970cb: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 006970cf: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006970d1: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006970d3: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 006970d7: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 006970db: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 006970df: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006970e1: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006970e4: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 006970e8: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 006970ec: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 006970f0: jle 0x6971f0 */ if ((fZ||fS!=fO)) goto L_006971f0;
L_006970f6:; BB(0x006970f6);
    /* 006970f6: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 006970fa: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 006970fe: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00697102: lea eax, [ebx - 3] */ r_eax = (u32)(r_ebx+0xfffffffdu);
    /* 00697105: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00697107: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697108: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 0069710f: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00697113: mov dword ptr [esp + 0x78], ebp */ W32((u32)(r_esp+0x78u), r_ebp);
    /* 00697117: mov dword ptr [esp + 0x84], esi */ W32((u32)(r_esp+0x84u), r_esi);
    /* 0069711e: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
L_00697122:; BB(0x00697122);
    /* 00697122: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00697126: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00697128: jle 0x697194 */ if ((fZ||fS!=fO)) goto L_00697194;
L_0069712a:; BB(0x0069712a);
    /* 0069712a: mov edx, dword ptr [esp + 0x78] */ r_edx = R32((u32)(r_esp+0x78u));
    /* 0069712e: mov ebp, dword ptr [esp + 0x80] */ r_ebp = R32((u32)(r_esp+0x80u));
    /* 00697135: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00697139: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 0069713d: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069713f: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00697143: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00697146: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00697148: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
    /* 0069714c: lea edi, [ecx*4] */ r_edi = (u32)(r_ecx*4);
    /* 00697153: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 00697157: lea edx, [ebp + edx*4] */ r_edx = (u32)(r_ebp+r_edx*4);
    /* 0069715b: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
L_0069715f:; BB(0x0069715f);
    /* 0069715f: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00697162: fadd dword ptr [ecx - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xfffffffcu));
    /* 00697165: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 00697168: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 0069716b: fsub dword ptr [eax - 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xfffffffcu));
    /* 0069716e: fstp dword ptr [esi - 4] */ W_F32((u32)(r_esi+0xfffffffcu), ST(0)); FPOP();
    /* 00697171: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00697173: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00697175: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 00697177: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00697179: fsub dword ptr [ecx] */ ST(0) = ST(0) - R_F32((u32)(r_ecx));
    /* 0069717b: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069717d: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069717f: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00697181: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00697183: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00697185: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00697186: jne 0x69715f */ if (!fZ) goto L_0069715f;
L_00697188:; BB(0x00697188);
    /* 00697188: mov ebx, dword ptr [esp + 0x60] */ r_ebx = R32((u32)(r_esp+0x60u));
    /* 0069718c: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00697190: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
L_00697194:; BB(0x00697194);
    /* 00697194: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 00697198: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
    /* 0069719c: mov edi, dword ptr [esp + 0x80] */ r_edi = R32((u32)(r_esp+0x80u));
    /* 006971a3: mov edx, 8 */ r_edx = 0x8u;
    /* 006971a8: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006971aa: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006971ac: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 006971b0: mov esi, dword ptr [esp + 0x84] */ r_esi = R32((u32)(r_esp+0x84u));
    /* 006971b7: mov dword ptr [esp + 0x6c], ebp */ W32((u32)(r_esp+0x6cu), r_ebp);
    /* 006971bb: mov ebp, dword ptr [esp + 0x78] */ r_ebp = R32((u32)(r_esp+0x78u));
    /* 006971bf: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006971c1: sub ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 006971c4: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006971c7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006971c8: mov dword ptr [esp + 0x84], esi */ W32((u32)(r_esp+0x84u), r_esi);
    /* 006971cf: mov dword ptr [esp + 0x78], ebp */ W32((u32)(r_esp+0x78u), r_ebp);
    /* 006971d3: mov dword ptr [esp + 0x80], edi */ W32((u32)(r_esp+0x80u), r_edi);
    /* 006971da: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006971de: jne 0x697122 */ if (!fZ) goto L_00697122;
L_006971e4:; BB(0x006971e4);
    /* 006971e4: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 006971e8: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 006971ec: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_006971f0:; BB(0x006971f0);
    /* 006971f0: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006971f4: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006971f5: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006971f9: jne 0x6970b2 */ if (!fZ) goto L_006970b2;
L_006971ff:; BB(0x006971ff);
    /* 006971ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00697200: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00697201: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697202: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697203: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697206: ret  */ FN_RET(0x00696660); r_esp += 4; return;
L_00697207:; BB(0x00697207);
    /* 00697207: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069720b: mov edi, ebx */ r_edi = r_ebx;
    /* 0069720d: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069720f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00697212: jle 0x69736b */ if ((fZ||fS!=fO)) goto L_0069736b;
L_00697218:; BB(0x00697218);
    /* 00697218: lea eax, [ebp*4] */ r_eax = (u32)(r_ebp*4);
    /* 0069721f: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 00697223: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00697225: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00697228: lea edx, [ebp + esi*4 + 8] */ r_edx = (u32)(r_ebp+r_esi*4+0x8u);
    /* 0069722c: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069722f: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00697233: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00697237: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0069723a: lea esi, [edx + 8] */ r_esi = (u32)(r_edx+0x8u);
    /* 0069723d: lea edx, [edx + edi*4 - 8] */ r_edx = (u32)(r_edx+r_edi*4+0xfffffff8u);
    /* 00697241: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00697245: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00697249: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069724a: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0069724e: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 00697252: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 00697256: mov dword ptr [esp + 0x7c], ebp */ W32((u32)(r_esp+0x7cu), r_ebp);
    /* 0069725a: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0069725e: jmp 0x697268 */ goto L_00697268;
L_00697260:; BB(0x00697260);
    /* 00697260: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00697264: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
L_00697268:; BB(0x00697268);
    /* 00697268: mov edi, dword ptr [esp + 0x74] */ r_edi = R32((u32)(r_esp+0x74u));
    /* 0069726c: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 00697270: mov edx, dword ptr [esp + 0x7c] */ r_edx = R32((u32)(r_esp+0x7cu));
    /* 00697274: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00697276: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00697278: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 0069727c: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069727e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00697280: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00697284: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 00697288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069728a: mov dword ptr [esp + 0x64], esi */ W32((u32)(r_esp+0x64u), r_esi);
    /* 0069728e: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 00697292: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 00697296: jle 0x69735c */ if ((fZ||fS!=fO)) goto L_0069735c;
L_0069729c:; BB(0x0069729c);
    /* 0069729c: mov eax, edx */ r_eax = r_edx;
    /* 0069729e: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 006972a2: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 006972a6: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 006972aa: mov ecx, edi */ r_ecx = r_edi;
    /* 006972ac: mov ebp, esi */ r_ebp = r_esi;
    /* 006972ae: mov dword ptr [esp + 0x78], ecx */ W32((u32)(r_esp+0x78u), r_ecx);
    /* 006972b2: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 006972b9: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
L_006972c0:; BB(0x006972c0);
    /* 006972c0: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006972c3: jle 0x69730f */ if ((fZ||fS!=fO)) goto L_0069730f;
L_006972c5:; BB(0x006972c5);
    /* 006972c5: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 006972c9: mov eax, dword ptr [esp + 0x80] */ r_eax = R32((u32)(r_esp+0x80u));
    /* 006972d0: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 006972d4: lea edx, [ebx - 3] */ r_edx = (u32)(r_ebx+0xfffffffdu);
    /* 006972d7: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006972d9: mov esi, ebp */ r_esi = r_ebp;
    /* 006972db: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_006972dc:; BB(0x006972dc);
    /* 006972dc: fld dword ptr [ecx - 4] */ FPUSH(R_F32((u32)(r_ecx+0xfffffffcu)));
    /* 006972df: fadd dword ptr [eax - 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xfffffffcu));
    /* 006972e2: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006972e5: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006972e8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006972eb: sub edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006972ee: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006972ef: fstp dword ptr [esi - 0xc] */ W_F32((u32)(r_esi+0xfffffff4u), ST(0)); FPOP();
    /* 006972f2: fld dword ptr [ecx - 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff4u)));
    /* 006972f5: fsub dword ptr [eax - 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xfffffff4u));
    /* 006972f8: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 006972fb: fld dword ptr [ecx - 8] */ FPUSH(R_F32((u32)(r_ecx+0xfffffff8u)));
    /* 006972fe: fadd dword ptr [eax - 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xfffffff8u));
    /* 00697301: fstp dword ptr [esi - 8] */ W_F32((u32)(r_esi+0xfffffff8u), ST(0)); FPOP();
    /* 00697304: fld dword ptr [eax - 8] */ FPUSH(R_F32((u32)(r_eax+0xfffffff8u)));
    /* 00697307: fsub dword ptr [ecx - 8] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0xfffffff8u));
    /* 0069730a: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0069730d: jne 0x6972dc */ if (!fZ) goto L_006972dc;
L_0069730f:; BB(0x0069730f);
    /* 0069730f: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00697313: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 00697317: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 0069731b: lea eax, [ecx*4] */ r_eax = (u32)(r_ecx*4);
    /* 00697322: mov ecx, dword ptr [esp + 0x80] */ r_ecx = R32((u32)(r_esp+0x80u));
    /* 00697329: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0069732b: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0069732d: lea eax, [ebx*4] */ r_eax = (u32)(r_ebx*4);
    /* 00697334: mov dword ptr [esp + 0x78], esi */ W32((u32)(r_esp+0x78u), r_esi);
    /* 00697338: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069733a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069733c: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00697343: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 00697347: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00697348: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 0069734f: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 00697356: jne 0x6972c0 */ if (!fZ) goto L_006972c0;
L_0069735c:; BB(0x0069735c);
    /* 0069735c: mov eax, dword ptr [esp + 0x60] */ r_eax = R32((u32)(r_esp+0x60u));
    /* 00697360: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00697361: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00697365: jne 0x697260 */ if (!fZ) goto L_00697260;
L_0069736b:; BB(0x0069736b);
    /* 0069736b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069736c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069736d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069736e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069736f: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697372: ret  */ FN_RET(0x00696660); r_esp += 4; return;
}

