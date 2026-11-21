#include "protos.h"

void f_00623400(void) /* sub_623400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00623400);
    /* 00623400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623401: mov ebp, esp */ r_ebp = r_esp;
    /* 00623403: sub esp, 0x444 */ {  u32 a = r_esp; u32 b = 0x444u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623409: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 0062340f: mov dword ptr [ebp - 0x444], eax */ W32((u32)(r_ebp+0xfffffbbcu), r_eax);
    /* 00623415: mov dword ptr [ebp - 0xc], 0xff */ W32((u32)(r_ebp+0xfffffff4u), 0xffu);
    /* 0062341c: jmp 0x623427 */ goto L_00623427;
L_0062341e:; BB(0x0062341e);
    /* 0062341e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623421: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00623424: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00623427:; BB(0x00623427);
    /* 00623427: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062342b: jl 0x62344a */ if ((fS!=fO)) goto L_0062344a;
L_0062342d:; BB(0x0062342d);
    /* 0062342d: mov edx, dword ptr [ebp - 0x444] */ r_edx = R32((u32)(r_ebp+0xfffffbbcu));
    /* 00623433: mov dword ptr [edx], 0x7fffffff */ W32((u32)(r_edx), 0x7fffffffu);
    /* 00623439: mov eax, dword ptr [ebp - 0x444] */ r_eax = R32((u32)(r_ebp+0xfffffbbcu));
    /* 0062343f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623442: mov dword ptr [ebp - 0x444], eax */ W32((u32)(r_ebp+0xfffffbbcu), r_eax);
    /* 00623448: jmp 0x62341e */ goto L_0062341e;
L_0062344a:; BB(0x0062344a);
    /* 0062344a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00623451: jmp 0x62345c */ goto L_0062345c;
L_00623453:; BB(0x00623453);
    /* 00623453: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623456: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00623459: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0062345c:; BB(0x0062345c);
    /* 0062345c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062345f: cmp edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623462: jge 0x6236c3 */ if ((fS==fO)) goto L_006236c3;
L_00623468:; BB(0x00623468);
    /* 00623468: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062346b: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0062346e: mov edx, dword ptr [ecx + eax*4] */ r_edx = R32((u32)(r_ecx+r_eax*4));
    /* 00623471: mov dword ptr [ebp - 0x430], edx */ W32((u32)(r_ebp+0xfffffbd0u), r_edx);
    /* 00623477: mov eax, dword ptr [ebp - 0x430] */ r_eax = R32((u32)(r_ebp+0xfffffbd0u));
    /* 0062347d: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623480: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00623483: movzx edx, byte ptr [ecx + eax] */ r_edx = (u32)R8((u32)(r_ecx+r_eax));
    /* 00623487: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062348a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062348c: imul eax, eax, 0x1e */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1eu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062348f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00623492: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623495: imul ecx, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623499: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062349c: mov edx, dword ptr [ebp - 0x430] */ r_edx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 006234a2: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006234a5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006234a8: movzx ecx, byte ptr [eax + edx + 1] */ r_ecx = (u32)R8((u32)(r_eax+r_edx+0x1u));
    /* 006234ad: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006234b0: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006234b2: imul edx, edx, 0x3b */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3bu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006234b5: mov dword ptr [ebp - 0x41c], edx */ W32((u32)(r_ebp+0xfffffbe4u), r_edx);
    /* 006234bb: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 006234c1: imul eax, dword ptr [ebp - 0x41c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffbe4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006234c8: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006234cb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006234ce: mov ecx, dword ptr [ebp - 0x430] */ r_ecx = R32((u32)(r_ebp+0xfffffbd0u));
    /* 006234d4: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006234d7: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006234da: movzx eax, byte ptr [edx + ecx + 2] */ r_eax = (u32)R8((u32)(r_edx+r_ecx+0x2u));
    /* 006234df: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006234e2: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006234e4: imul ecx, ecx, 0xb */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xbu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006234e7: mov dword ptr [ebp - 0x440], ecx */ W32((u32)(r_ebp+0xfffffbc0u), r_ecx);
    /* 006234ed: mov edx, dword ptr [ebp - 0x440] */ r_edx = R32((u32)(r_ebp+0xfffffbc0u));
    /* 006234f3: imul edx, dword ptr [ebp - 0x440] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffbc0u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006234fa: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006234fd: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00623500: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623503: imul eax, eax, 0xf0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xf0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623509: add eax, 0x3840 */ {  u32 a = r_eax; u32 b = 0x3840u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062350e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00623511: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00623517: imul ecx, ecx, 0x1d8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1d8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062351d: add ecx, 0xd990 */ {  u32 a = r_ecx; u32 b = 0xd990u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00623523: mov dword ptr [ebp - 0x41c], ecx */ W32((u32)(r_ebp+0xfffffbe4u), r_ecx);
    /* 00623529: mov edx, dword ptr [ebp - 0x440] */ r_edx = R32((u32)(r_ebp+0xfffffbc0u));
    /* 0062352f: imul edx, edx, 0xb0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xb0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623535: add edx, 0x1e40 */ {  u32 a = r_edx; u32 b = 0x1e40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062353b: mov dword ptr [ebp - 0x440], edx */ W32((u32)(r_ebp+0xfffffbc0u), r_edx);
    /* 00623541: lea eax, [ebp - 0x410] */ r_eax = (u32)(r_ebp+0xfffffbf0u);
    /* 00623547: mov dword ptr [ebp - 0x444], eax */ W32((u32)(r_ebp+0xfffffbbcu), r_eax);
    /* 0062354d: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00623550: mov dword ptr [ebp - 0x420], ecx */ W32((u32)(r_ebp+0xfffffbe0u), r_ecx);
    /* 00623556: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623559: mov dword ptr [ebp - 0x42c], edx */ W32((u32)(r_ebp+0xfffffbd4u), r_edx);
    /* 0062355f: mov dword ptr [ebp - 0x428], 7 */ W32((u32)(r_ebp+0xfffffbd8u), 0x7u);
    /* 00623569: jmp 0x62357a */ goto L_0062357a;
L_0062356b:; BB(0x0062356b);
    /* 0062356b: mov eax, dword ptr [ebp - 0x428] */ r_eax = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00623571: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623574: mov dword ptr [ebp - 0x428], eax */ W32((u32)(r_ebp+0xfffffbd8u), r_eax);
L_0062357a:; BB(0x0062357a);
    /* 0062357a: cmp dword ptr [ebp - 0x428], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623581: jl 0x6236be */ if ((fS!=fO)) goto L_006236be;
L_00623587:; BB(0x00623587);
    /* 00623587: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062358a: mov dword ptr [ebp - 0x438], ecx */ W32((u32)(r_ebp+0xfffffbc8u), r_ecx);
    /* 00623590: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00623596: mov dword ptr [ebp - 0x414], edx */ W32((u32)(r_ebp+0xfffffbecu), r_edx);
    /* 0062359c: mov dword ptr [ebp - 0x434], 7 */ W32((u32)(r_ebp+0xfffffbccu), 0x7u);
    /* 006235a6: jmp 0x6235b7 */ goto L_006235b7;
L_006235a8:; BB(0x006235a8);
    /* 006235a8: mov eax, dword ptr [ebp - 0x434] */ r_eax = R32((u32)(r_ebp+0xfffffbccu));
    /* 006235ae: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006235b1: mov dword ptr [ebp - 0x434], eax */ W32((u32)(r_ebp+0xfffffbccu), r_eax);
L_006235b7:; BB(0x006235b7);
    /* 006235b7: cmp dword ptr [ebp - 0x434], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006235be: jl 0x62369b */ if ((fS!=fO)) goto L_0062369b;
L_006235c4:; BB(0x006235c4);
    /* 006235c4: mov ecx, dword ptr [ebp - 0x438] */ r_ecx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 006235ca: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
    /* 006235d0: mov edx, dword ptr [ebp - 0x440] */ r_edx = R32((u32)(r_ebp+0xfffffbc0u));
    /* 006235d6: mov dword ptr [ebp - 0x43c], edx */ W32((u32)(r_ebp+0xfffffbc4u), r_edx);
    /* 006235dc: mov dword ptr [ebp - 0x424], 3 */ W32((u32)(r_ebp+0xfffffbdcu), 0x3u);
    /* 006235e6: jmp 0x6235f7 */ goto L_006235f7;
L_006235e8:; BB(0x006235e8);
    /* 006235e8: mov eax, dword ptr [ebp - 0x424] */ r_eax = R32((u32)(r_ebp+0xfffffbdcu));
    /* 006235ee: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006235f1: mov dword ptr [ebp - 0x424], eax */ W32((u32)(r_ebp+0xfffffbdcu), r_eax);
L_006235f7:; BB(0x006235f7);
    /* 006235f7: cmp dword ptr [ebp - 0x424], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006235fe: jl 0x623673 */ if ((fS!=fO)) goto L_00623673;
L_00623600:; BB(0x00623600);
    /* 00623600: mov ecx, dword ptr [ebp - 0x444] */ r_ecx = R32((u32)(r_ebp+0xfffffbbcu));
    /* 00623606: mov edx, dword ptr [ebp - 0x418] */ r_edx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0062360c: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062360e: jge 0x62362c */ if ((fS==fO)) goto L_0062362c;
L_00623610:; BB(0x00623610);
    /* 00623610: mov eax, dword ptr [ebp - 0x444] */ r_eax = R32((u32)(r_ebp+0xfffffbbcu));
    /* 00623616: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 0062361c: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0062361e: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00623624: mov eax, dword ptr [ebp - 0x430] */ r_eax = R32((u32)(r_ebp+0xfffffbd0u));
    /* 0062362a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0062362c:; BB(0x0062362c);
    /* 0062362c: mov ecx, dword ptr [ebp - 0x418] */ r_ecx = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00623632: add ecx, dword ptr [ebp - 0x43c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbc4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00623638: mov dword ptr [ebp - 0x418], ecx */ W32((u32)(r_ebp+0xfffffbe8u), r_ecx);
    /* 0062363e: mov edx, dword ptr [ebp - 0x43c] */ r_edx = R32((u32)(r_ebp+0xfffffbc4u));
    /* 00623644: add edx, 0x3c80 */ {  u32 a = r_edx; u32 b = 0x3c80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062364a: mov dword ptr [ebp - 0x43c], edx */ W32((u32)(r_ebp+0xfffffbc4u), r_edx);
    /* 00623650: mov eax, dword ptr [ebp - 0x444] */ r_eax = R32((u32)(r_ebp+0xfffffbbcu));
    /* 00623656: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623659: mov dword ptr [ebp - 0x444], eax */ W32((u32)(r_ebp+0xfffffbbcu), r_eax);
    /* 0062365f: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00623665: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00623668: mov dword ptr [ebp - 0x420], ecx */ W32((u32)(r_ebp+0xfffffbe0u), r_ecx);
    /* 0062366e: jmp 0x6235e8 */ goto L_006235e8;
L_00623673:; BB(0x00623673);
    /* 00623673: mov edx, dword ptr [ebp - 0x438] */ r_edx = R32((u32)(r_ebp+0xfffffbc8u));
    /* 00623679: add edx, dword ptr [ebp - 0x414] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffbecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062367f: mov dword ptr [ebp - 0x438], edx */ W32((u32)(r_ebp+0xfffffbc8u), r_edx);
    /* 00623685: mov eax, dword ptr [ebp - 0x414] */ r_eax = R32((u32)(r_ebp+0xfffffbecu));
    /* 0062368b: add eax, 0x1b320 */ {  u32 a = r_eax; u32 b = 0x1b320u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623690: mov dword ptr [ebp - 0x414], eax */ W32((u32)(r_ebp+0xfffffbecu), r_eax);
    /* 00623696: jmp 0x6235a8 */ goto L_006235a8;
L_0062369b:; BB(0x0062369b);
    /* 0062369b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062369e: add ecx, dword ptr [ebp - 0x42c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006236a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006236a7: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 006236ad: add edx, 0x7080 */ {  u32 a = r_edx; u32 b = 0x7080u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006236b3: mov dword ptr [ebp - 0x42c], edx */ W32((u32)(r_ebp+0xfffffbd4u), r_edx);
    /* 006236b9: jmp 0x62356b */ goto L_0062356b;
L_006236be:; BB(0x006236be);
    /* 006236be: jmp 0x623453 */ goto L_00623453;
L_006236c3:; BB(0x006236c3);
    /* 006236c3: mov esp, ebp */ r_esp = r_ebp;
    /* 006236c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006236c6: ret  */ FN_RET(0x00623400); r_esp += 4; return;
}

void f_006238d0(void) /* sub_6238D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006238d0);
    /* 006238d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006238d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006238d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006238d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006238d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006238da: call 0x6238b0 */ r_esp -= 4; W32(r_esp, 0x6238dfu); f_006238b0();
    /* 006238df: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006238e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006238e6: add eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006238e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006238eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006238ec: ret 4 */ FN_RET(0x006238d0); r_esp += 8; return;
}

void f_00623950(void) /* sub_623950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00623950);
    /* 00623950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623951: mov ebp, esp */ r_ebp = r_esp;
    /* 00623953: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623956: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00623957: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062395a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062395d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00623960: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00623963: jmp 0x62396e */ goto L_0062396e;
L_00623965:; BB(0x00623965);
    /* 00623965: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623968: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062396b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_0062396e:; BB(0x0062396e);
    /* 0062396e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00623971: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623974: cmp ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623977: jge 0x623a04 */ if ((fS==fO)) goto L_00623a04;
L_0062397d:; BB(0x0062397d);
    /* 0062397d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623980: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00623981: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00623984: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x623989u); f_006238d0();
    /* 00623989: mov esi, eax */ r_esi = r_eax;
    /* 0062398b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062398e: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x623993u); f_00623930();
    /* 00623993: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00623996: imul eax, dword ptr [ecx] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623999: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062399b: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0062399e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006239a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006239a2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006239a5: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x6239aau); f_006238d0();
    /* 006239aa: mov esi, eax */ r_esi = r_eax;
    /* 006239ac: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006239af: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x6239b4u); f_00623930();
    /* 006239b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006239b7: imul eax, dword ptr [ecx + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006239bb: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006239bd: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
L_006239c0:; BB(0x006239c0);
    /* 006239c0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006239c3: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006239c6: jae 0x6239ff */ if (!fC) goto L_006239ff;
L_006239c8:; BB(0x006239c8);
    /* 006239c8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006239cb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006239cd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006239ce: call 0x617a70 */ r_esp -= 4; W32(r_esp, 0x6239d3u); f_00617a70();
    /* 006239d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006239d6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006239d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006239dc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006239df: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 006239e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006239e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006239e7: call 0x617b30 */ r_esp -= 4; W32(r_esp, 0x6239ecu); f_00617b30();
    /* 006239ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006239ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006239f2: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006239f4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006239f7: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006239fa: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006239fd: jmp 0x6239c0 */ goto L_006239c0;
L_006239ff:; BB(0x006239ff);
    /* 006239ff: jmp 0x623965 */ goto L_00623965;
L_00623a04:; BB(0x00623a04);
    /* 00623a04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623a05: mov esp, ebp */ r_esp = r_ebp;
    /* 00623a07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00623a08: ret 4 */ FN_RET(0x00623950); r_esp += 8; return;
}

void f_00623ab0(void) /* sub_623AB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00623ab0);
    /* 00623ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00623ab3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623ab6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00623ab7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00623ab8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00623ab9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00623abc: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623ac0: jl 0x623ae2 */ if ((fS!=fO)) goto L_00623ae2;
L_00623ac2:; BB(0x00623ac2);
    /* 00623ac2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00623ac5: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x623acau); f_006238f0();
    /* 00623aca: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623acd: jge 0x623ae2 */ if ((fS==fO)) goto L_00623ae2;
L_00623acf:; BB(0x00623acf);
    /* 00623acf: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623ad3: jl 0x623ae2 */ if ((fS!=fO)) goto L_00623ae2;
L_00623ad5:; BB(0x00623ad5);
    /* 00623ad5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00623ad8: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x623addu); f_00623910();
    /* 00623add: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623ae0: jl 0x623ae7 */ if ((fS!=fO)) goto L_00623ae7;
L_00623ae2:; BB(0x00623ae2);
    /* 00623ae2: jmp 0x623c1f */ goto L_00623c1f;
L_00623ae7:; BB(0x00623ae7);
    /* 00623ae7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00623aea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623aeb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00623aee: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x623af3u); f_006238d0();
    /* 00623af3: mov esi, eax */ r_esi = r_eax;
    /* 00623af5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00623af8: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x623afdu); f_00623930();
    /* 00623afd: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623b01: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00623b03: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00623b06: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00623b09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00623b0a: call 0x617b30 */ r_esp -= 4; W32(r_esp, 0x623b0fu); f_00617b30();
    /* 00623b0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00623b12: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00623b15: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00623b18: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00623b1b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623b1e: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623b21: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00623b24: cmp dword ptr [ebp - 0x2c], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00623b28: ja 0x623c1f */ if ((!fC&&!fZ)) goto L_00623c1f;
L_00623b2e:; BB(0x00623b2e);
    /* 00623b2e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623b31: movzx edx, byte ptr [ecx + 0x623c3c] */ r_edx = (u32)R8((u32)(r_ecx+0x623c3cu));
    /* 00623b38: jmp dword ptr [edx*4 + 0x623c28] */ { u32 t = R32((u32)(r_edx*4+0x623c28u)); switch (t) { case 0x623b3fu: goto L_00623b3f; case 0x623b43u: goto L_00623b43; case 0x623bf3u: goto L_00623bf3; case 0x623c0au: goto L_00623c0a; case 0x623c1fu: goto L_00623c1f; default: UNSUP(0x00623b38, "jump table entry is not a known target"); } }
L_00623b3f:; BB(0x00623b3f);
    /* 00623b3f: mov byte ptr [ebp + 0x13], 0xff */ W8((u32)(r_ebp+0x13u), 0xffu);
L_00623b43:; BB(0x00623b43);
    /* 00623b43: mov al, byte ptr [ebp + 0x13] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x13u))) & 0xffu);
    /* 00623b46: mov byte ptr [ebp - 0x30], al */ W8((u32)(r_ebp+0xffffffd0u), (u8)r_eax);
    /* 00623b49: cmp byte ptr [ebp - 0x30], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00623b4d: je 0x623b57 */ if (fZ) goto L_00623b57;
L_00623b4f:; BB(0x00623b4f);
    /* 00623b4f: cmp byte ptr [ebp - 0x30], 0xff */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0xffu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00623b53: je 0x623b5c */ if (fZ) goto L_00623b5c;
L_00623b55:; BB(0x00623b55);
    /* 00623b55: jmp 0x623b69 */ goto L_00623b69;
L_00623b57:; BB(0x00623b57);
    /* 00623b57: jmp 0x623bf1 */ goto L_00623bf1;
L_00623b5c:; BB(0x00623b5c);
    /* 00623b5c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00623b5f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623b62: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00623b64: jmp 0x623bf1 */ goto L_00623bf1;
L_00623b69:; BB(0x00623b69);
    /* 00623b69: movzx eax, byte ptr [ebp + 0x13] */ r_eax = (u32)R8((u32)(r_ebp+0x13u));
    /* 00623b6d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00623b70: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00623b73: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623b76: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00623b78: mov ebx, edi */ r_ebx = r_edi;
    /* 00623b7a: mov edx, edi */ r_edx = r_edi;
    /* 00623b7c: mov eax, esi */ r_eax = r_esi;
    /* 00623b7e: mov ecx, esi */ r_ecx = r_esi;
    /* 00623b80: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00623b86: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00623b8c: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00623b8f: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00623b92: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00623b97: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00623b9d: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00623ba0: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00623ba3: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623ba5: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00623ba7: imul eax, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623bab: imul ecx, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623baf: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00623bb2: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00623bb5: mov ebx, esi */ r_ebx = r_esi;
    /* 00623bb7: mov edx, esi */ r_edx = r_esi;
    /* 00623bb9: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00623bbf: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00623bc2: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00623bc5: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00623bc7: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00623bc9: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00623bcf: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00623bd5: mov eax, esi */ r_eax = r_esi;
    /* 00623bd7: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00623bda: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00623bdc: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00623bdf: imul esi, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623be3: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00623be5: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00623be8: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00623beb: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623bed: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00623bef: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
L_00623bf1:; BB(0x00623bf1);
    /* 00623bf1: jmp 0x623c1f */ goto L_00623c1f;
L_00623bf3:; BB(0x00623bf3);
    /* 00623bf3: movzx ecx, byte ptr [ebp + 0x13] */ r_ecx = (u32)R8((u32)(r_ebp+0x13u));
    /* 00623bf7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00623bf8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623bfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00623bfc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00623bff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623c00: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x623c05u); f_0061d520();
    /* 00623c05: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00623c08: jmp 0x623c1f */ goto L_00623c1f;
L_00623c0a:; BB(0x00623c0a);
    /* 00623c0a: movzx ecx, byte ptr [ebp + 0x13] */ r_ecx = (u32)R8((u32)(r_ebp+0x13u));
    /* 00623c0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00623c0f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623c12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00623c13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00623c16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623c17: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x623c1cu); f_0061d6a0();
    /* 00623c1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00623c1f:; BB(0x00623c1f);
    /* 00623c1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00623c20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623c21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00623c22: mov esp, ebp */ r_esp = r_ebp;
    /* 00623c24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00623c25: ret 0x10 */ FN_RET(0x00623ab0); r_esp += 20; return;
}

void f_00623c60(void) /* sub_623C60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00623c60);
    /* 00623c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00623c63: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623c66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00623c67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00623c68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00623c69: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00623c6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00623c6e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623c72: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00623c75: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623c78: and eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00623c7b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00623c7e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623c81: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x623c86u); f_006238f0();
    /* 00623c86: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623c89: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623c8c: jge 0x623c9e */ if ((fS==fO)) goto L_00623c9e;
L_00623c8e:; BB(0x00623c8e);
    /* 00623c8e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623c91: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x623c96u); f_006238f0();
    /* 00623c96: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623c99: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00623c9c: jmp 0x623ca4 */ goto L_00623ca4;
L_00623c9e:; BB(0x00623c9e);
    /* 00623c9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00623ca1: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_00623ca4:; BB(0x00623ca4);
    /* 00623ca4: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00623ca7: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00623caa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00623cac: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623cb0: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00623cb3: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623cb6: and eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00623cb9: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00623cbc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623cbf: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x623cc4u); f_006238f0();
    /* 00623cc4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623cc7: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623cca: jge 0x623cdc */ if ((fS==fO)) goto L_00623cdc;
L_00623ccc:; BB(0x00623ccc);
    /* 00623ccc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623ccf: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x623cd4u); f_006238f0();
    /* 00623cd4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623cd7: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00623cda: jmp 0x623ce2 */ goto L_00623ce2;
L_00623cdc:; BB(0x00623cdc);
    /* 00623cdc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00623cdf: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00623ce2:; BB(0x00623ce2);
    /* 00623ce2: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00623ce5: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00623ce8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00623ceb: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623cee: jle 0x623d0b */ if ((fZ||fS!=fO)) goto L_00623d0b;
L_00623cf0:; BB(0x00623cf0);
    /* 00623cf0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00623cf3: xor ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00623cf6: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00623cf9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00623cfc: xor edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00623cff: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00623d02: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00623d05: xor eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00623d08: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00623d0b:; BB(0x00623d0b);
    /* 00623d0b: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623d0f: jl 0x623d1e */ if ((fS!=fO)) goto L_00623d1e;
L_00623d11:; BB(0x00623d11);
    /* 00623d11: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623d14: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x623d19u); f_00623910();
    /* 00623d19: cmp dword ptr [ebp + 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623d1c: jl 0x623d23 */ if ((fS!=fO)) goto L_00623d23;
L_00623d1e:; BB(0x00623d1e);
    /* 00623d1e: jmp 0x623ebf */ goto L_00623ebf;
L_00623d23:; BB(0x00623d23);
    /* 00623d23: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00623d26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00623d27: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623d2a: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x623d2fu); f_006238d0();
    /* 00623d2f: mov esi, eax */ r_esi = r_eax;
    /* 00623d31: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623d34: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x623d39u); f_00623930();
    /* 00623d39: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623d3d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00623d3f: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 00623d42: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00623d45: sub edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00623d48: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623d4b: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 00623d4e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00623d51: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00623d54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00623d55: call 0x617b30 */ r_esp -= 4; W32(r_esp, 0x623d5au); f_00617b30();
    /* 00623d5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00623d5d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00623d60: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00623d63: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00623d66: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00623d69: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00623d6c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00623d6f: cmp dword ptr [ebp - 0x38], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00623d73: ja 0x623ebf */ if ((!fC&&!fZ)) goto L_00623ebf;
L_00623d79:; BB(0x00623d79);
    /* 00623d79: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00623d7c: movzx eax, byte ptr [edx + 0x623edc] */ r_eax = (u32)R8((u32)(r_edx+0x623edcu));
    /* 00623d83: jmp dword ptr [eax*4 + 0x623ec8] */ { u32 t = R32((u32)(r_eax*4+0x623ec8u)); switch (t) { case 0x623d8au: goto L_00623d8a; case 0x623d8eu: goto L_00623d8e; case 0x623e6du: goto L_00623e6d; case 0x623e97u: goto L_00623e97; case 0x623ebfu: goto L_00623ebf; default: UNSUP(0x00623d83, "jump table entry is not a known target"); } }
L_00623d8a:; BB(0x00623d8a);
    /* 00623d8a: mov byte ptr [ebp + 0x17], 0xff */ W8((u32)(r_ebp+0x17u), 0xffu);
L_00623d8e:; BB(0x00623d8e);
    /* 00623d8e: mov cl, byte ptr [ebp + 0x17] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x17u))) & 0xffu);
    /* 00623d91: mov byte ptr [ebp - 0x3c], cl */ W8((u32)(r_ebp+0xffffffc4u), (u8)r_ecx);
    /* 00623d94: cmp byte ptr [ebp - 0x3c], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00623d98: je 0x623da2 */ if (fZ) goto L_00623da2;
L_00623d9a:; BB(0x00623d9a);
    /* 00623d9a: cmp byte ptr [ebp - 0x3c], 0xff */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0xffu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00623d9e: je 0x623da7 */ if (fZ) goto L_00623da7;
L_00623da0:; BB(0x00623da0);
    /* 00623da0: jmp 0x623dc7 */ goto L_00623dc7;
L_00623da2:; BB(0x00623da2);
    /* 00623da2: jmp 0x623ebf */ goto L_00623ebf;
L_00623da7:; BB(0x00623da7);
    /* 00623da7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623daa: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00623dad: ja 0x623dc2 */ if ((!fC&&!fZ)) goto L_00623dc2;
L_00623daf:; BB(0x00623daf);
    /* 00623daf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623db2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623db5: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00623db7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623dba: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00623dbd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00623dc0: jmp 0x623da7 */ goto L_00623da7;
L_00623dc2:; BB(0x00623dc2);
    /* 00623dc2: jmp 0x623ebf */ goto L_00623ebf;
L_00623dc7:; BB(0x00623dc7);
    /* 00623dc7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623dca: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00623dcd: ja 0x623e69 */ if ((!fC&&!fZ)) goto L_00623e69;
L_00623dd3:; BB(0x00623dd3);
    /* 00623dd3: movzx ecx, byte ptr [ebp + 0x17] */ r_ecx = (u32)R8((u32)(r_ebp+0x17u));
    /* 00623dd7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00623dda: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623ddd: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623de0: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00623de2: mov ebx, edi */ r_ebx = r_edi;
    /* 00623de4: mov edx, edi */ r_edx = r_edi;
    /* 00623de6: mov eax, esi */ r_eax = r_esi;
    /* 00623de8: mov ecx, esi */ r_ecx = r_esi;
    /* 00623dea: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00623df0: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00623df6: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00623df9: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00623dfc: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00623e01: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00623e07: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00623e0a: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00623e0d: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623e0f: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00623e11: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623e15: imul ecx, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623e19: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00623e1c: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00623e1f: mov ebx, esi */ r_ebx = r_esi;
    /* 00623e21: mov edx, esi */ r_edx = r_esi;
    /* 00623e23: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00623e29: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00623e2c: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00623e2f: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00623e31: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00623e33: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00623e39: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00623e3f: mov eax, esi */ r_eax = r_esi;
    /* 00623e41: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00623e44: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00623e46: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00623e49: imul esi, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623e4d: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00623e4f: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00623e52: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623e55: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623e57: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00623e59: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00623e5b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623e5e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00623e61: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00623e64: jmp 0x623dc7 */ goto L_00623dc7;
L_00623e69:; BB(0x00623e69);
    /* 00623e69: jmp 0x623ebf */ goto L_00623ebf;
L_00623e6d:; BB(0x00623e6d);
    /* 00623e6d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623e70: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00623e73: ja 0x623e95 */ if ((!fC&&!fZ)) goto L_00623e95;
L_00623e75:; BB(0x00623e75);
    /* 00623e75: movzx ecx, byte ptr [ebp + 0x17] */ r_ecx = (u32)R8((u32)(r_ebp+0x17u));
    /* 00623e79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00623e7a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623e7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00623e7e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623e81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623e82: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x623e87u); f_0061d520();
    /* 00623e87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00623e8a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623e8d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00623e90: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00623e93: jmp 0x623e6d */ goto L_00623e6d;
L_00623e95:; BB(0x00623e95);
    /* 00623e95: jmp 0x623ebf */ goto L_00623ebf;
L_00623e97:; BB(0x00623e97);
    /* 00623e97: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623e9a: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00623e9d: ja 0x623ebf */ if ((!fC&&!fZ)) goto L_00623ebf;
L_00623e9f:; BB(0x00623e9f);
    /* 00623e9f: movzx eax, byte ptr [ebp + 0x17] */ r_eax = (u32)R8((u32)(r_ebp+0x17u));
    /* 00623ea3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623ea4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00623ea7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00623ea8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623eab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00623eac: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x623eb1u); f_0061d6a0();
    /* 00623eb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00623eb4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00623eb7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623eba: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00623ebd: jmp 0x623e97 */ goto L_00623e97;
L_00623ebf:; BB(0x00623ebf);
    /* 00623ebf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00623ec0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00623ec1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00623ec2: mov esp, ebp */ r_esp = r_ebp;
    /* 00623ec4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00623ec5: ret 0x14 */ FN_RET(0x00623c60); r_esp += 24; return;
}

void f_00623f00(void) /* sub_623F00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00623f00);
    /* 00623f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00623f03: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623f06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00623f07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00623f08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00623f09: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00623f0c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623f0f: call 0x6238b0 */ r_esp -= 4; W32(r_esp, 0x623f14u); f_006238b0();
    /* 00623f14: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00623f17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00623f19: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623f1d: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00623f20: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623f23: and eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00623f26: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00623f29: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623f2c: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x623f31u); f_00623910();
    /* 00623f31: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623f34: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623f37: jge 0x623f49 */ if ((fS==fO)) goto L_00623f49;
L_00623f39:; BB(0x00623f39);
    /* 00623f39: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623f3c: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x623f41u); f_00623910();
    /* 00623f41: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623f44: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00623f47: jmp 0x623f4f */ goto L_00623f4f;
L_00623f49:; BB(0x00623f49);
    /* 00623f49: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00623f4c: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_00623f4f:; BB(0x00623f4f);
    /* 00623f4f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00623f52: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00623f55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00623f57: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623f5b: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00623f5e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623f61: and eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00623f64: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00623f67: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623f6a: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x623f6fu); f_00623910();
    /* 00623f6f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623f72: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623f75: jge 0x623f87 */ if ((fS==fO)) goto L_00623f87;
L_00623f77:; BB(0x00623f77);
    /* 00623f77: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623f7a: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x623f7fu); f_00623910();
    /* 00623f7f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00623f82: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00623f85: jmp 0x623f8d */ goto L_00623f8d;
L_00623f87:; BB(0x00623f87);
    /* 00623f87: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00623f8a: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00623f8d:; BB(0x00623f8d);
    /* 00623f8d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00623f90: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00623f93: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00623f96: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623f99: jle 0x623fb6 */ if ((fZ||fS!=fO)) goto L_00623fb6;
L_00623f9b:; BB(0x00623f9b);
    /* 00623f9b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00623f9e: xor ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00623fa1: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00623fa4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00623fa7: xor edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00623faa: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00623fad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00623fb0: xor eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00623fb3: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_00623fb6:; BB(0x00623fb6);
    /* 00623fb6: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623fba: jl 0x623fc9 */ if ((fS!=fO)) goto L_00623fc9;
L_00623fbc:; BB(0x00623fbc);
    /* 00623fbc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623fbf: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x623fc4u); f_006238f0();
    /* 00623fc4: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00623fc7: jl 0x623fce */ if ((fS!=fO)) goto L_00623fce;
L_00623fc9:; BB(0x00623fc9);
    /* 00623fc9: jmp 0x62417f */ goto L_0062417f;
L_00623fce:; BB(0x00623fce);
    /* 00623fce: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00623fd1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00623fd2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623fd5: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x623fdau); f_006238d0();
    /* 00623fda: mov esi, eax */ r_esi = r_eax;
    /* 00623fdc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00623fdf: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x623fe4u); f_00623930();
    /* 00623fe4: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623fe8: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00623fea: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 00623fed: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00623ff0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00623ff1: call 0x617b30 */ r_esp -= 4; W32(r_esp, 0x623ff6u); f_00617b30();
    /* 00623ff6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00623ff9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00623ffc: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00623fff: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00624002: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00624005: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00624008: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0062400b: cmp dword ptr [ebp - 0x38], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062400f: ja 0x62417f */ if ((!fC&&!fZ)) goto L_0062417f;
L_00624015:; BB(0x00624015);
    /* 00624015: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00624018: movzx eax, byte ptr [edx + 0x62419c] */ r_eax = (u32)R8((u32)(r_edx+0x62419cu));
    /* 0062401f: jmp dword ptr [eax*4 + 0x624188] */ { u32 t = R32((u32)(r_eax*4+0x624188u)); switch (t) { case 0x624026u: goto L_00624026; case 0x62402au: goto L_0062402a; case 0x62411bu: goto L_0062411b; case 0x62414eu: goto L_0062414e; case 0x62417fu: goto L_0062417f; default: UNSUP(0x0062401f, "jump table entry is not a known target"); } }
L_00624026:; BB(0x00624026);
    /* 00624026: mov byte ptr [ebp + 0x17], 0xff */ W8((u32)(r_ebp+0x17u), 0xffu);
L_0062402a:; BB(0x0062402a);
    /* 0062402a: mov cl, byte ptr [ebp + 0x17] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x17u))) & 0xffu);
    /* 0062402d: mov byte ptr [ebp - 0x3c], cl */ W8((u32)(r_ebp+0xffffffc4u), (u8)r_ecx);
    /* 00624030: cmp byte ptr [ebp - 0x3c], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00624034: je 0x62403e */ if (fZ) goto L_0062403e;
L_00624036:; BB(0x00624036);
    /* 00624036: cmp byte ptr [ebp - 0x3c], 0xff */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0xffu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0062403a: je 0x624043 */ if (fZ) goto L_00624043;
L_0062403c:; BB(0x0062403c);
    /* 0062403c: jmp 0x62406c */ goto L_0062406c;
L_0062403e:; BB(0x0062403e);
    /* 0062403e: jmp 0x62417f */ goto L_0062417f;
L_00624043:; BB(0x00624043);
    /* 00624043: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00624046: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624049: jg 0x624067 */ if ((!fZ&&fS==fO)) goto L_00624067;
L_0062404b:; BB(0x0062404b);
    /* 0062404b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062404e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624051: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00624053: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00624056: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00624059: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0062405c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062405f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624062: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00624065: jmp 0x624043 */ goto L_00624043;
L_00624067:; BB(0x00624067);
    /* 00624067: jmp 0x62417f */ goto L_0062417f;
L_0062406c:; BB(0x0062406c);
    /* 0062406c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062406f: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624072: jg 0x624117 */ if ((!fZ&&fS==fO)) goto L_00624117;
L_00624078:; BB(0x00624078);
    /* 00624078: movzx edx, byte ptr [ebp + 0x17] */ r_edx = (u32)R8((u32)(r_ebp+0x17u));
    /* 0062407c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0062407f: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00624082: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00624085: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00624087: mov ebx, edi */ r_ebx = r_edi;
    /* 00624089: mov edx, edi */ r_edx = r_edi;
    /* 0062408b: mov eax, esi */ r_eax = r_esi;
    /* 0062408d: mov ecx, esi */ r_ecx = r_esi;
    /* 0062408f: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00624095: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0062409b: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0062409e: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006240a1: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006240a6: and ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006240ac: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006240af: sar ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006240b2: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006240b4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006240b6: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006240ba: imul ecx, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006240be: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006240c1: sar ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006240c4: mov ebx, esi */ r_ebx = r_esi;
    /* 006240c6: mov edx, esi */ r_edx = r_esi;
    /* 006240c8: and ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 006240ce: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006240d1: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 006240d4: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006240d6: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006240d8: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 006240de: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006240e4: mov eax, esi */ r_eax = r_esi;
    /* 006240e6: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006240e9: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006240eb: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006240ee: imul esi, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006240f2: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 006240f4: sar esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 006240f7: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 006240fa: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006240fc: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 006240fe: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00624100: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00624103: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624106: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00624109: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062410c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062410f: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00624112: jmp 0x62406c */ goto L_0062406c;
L_00624117:; BB(0x00624117);
    /* 00624117: jmp 0x62417f */ goto L_0062417f;
L_0062411b:; BB(0x0062411b);
    /* 0062411b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062411e: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624121: jg 0x62414c */ if ((!fZ&&fS==fO)) goto L_0062414c;
L_00624123:; BB(0x00624123);
    /* 00624123: movzx eax, byte ptr [ebp + 0x17] */ r_eax = (u32)R8((u32)(r_ebp+0x17u));
    /* 00624127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00624128: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062412b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062412c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062412f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624130: call 0x61d520 */ r_esp -= 4; W32(r_esp, 0x624135u); f_0061d520();
    /* 00624135: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00624138: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062413b: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062413e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00624141: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00624144: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00624147: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0062414a: jmp 0x62411b */ goto L_0062411b;
L_0062414c:; BB(0x0062414c);
    /* 0062414c: jmp 0x62417f */ goto L_0062417f;
L_0062414e:; BB(0x0062414e);
    /* 0062414e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00624151: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00624154: jg 0x62417f */ if ((!fZ&&fS==fO)) goto L_0062417f;
L_00624156:; BB(0x00624156);
    /* 00624156: movzx eax, byte ptr [ebp + 0x17] */ r_eax = (u32)R8((u32)(r_ebp+0x17u));
    /* 0062415a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062415b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062415e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062415f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00624162: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00624163: call 0x61d6a0 */ r_esp -= 4; W32(r_esp, 0x624168u); f_0061d6a0();
    /* 00624168: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062416b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062416e: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00624171: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00624174: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00624177: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062417a: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0062417d: jmp 0x62414e */ goto L_0062414e;
L_0062417f:; BB(0x0062417f);
    /* 0062417f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00624180: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00624181: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00624182: mov esp, ebp */ r_esp = r_ebp;
    /* 00624184: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00624185: ret 0x14 */ FN_RET(0x00623f00); r_esp += 24; return;
}

