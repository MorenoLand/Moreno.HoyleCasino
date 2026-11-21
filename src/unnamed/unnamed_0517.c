#include "protos.h"

void f_005170a0(void) /* sub_5170A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005170a0);
    /* 005170a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005170a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005170a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005170a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005170a7: mov dword ptr [ebp - 0x10], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff0u), 0xffffff9du);
    /* 005170ae: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005170b5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005170bb: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5170c0u); f_0047e3b0();
    /* 005170c0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005170c3: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005170c8: movzx ecx, byte ptr [eax + 0x4f34] */ r_ecx = (u32)R8((u32)(r_eax+0x4f34u));
    /* 005170cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005170d1: je 0x51712a */ if (fZ) goto L_0051712a;
L_005170d3:; BB(0x005170d3);
    /* 005170d3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005170d9: call 0x4798c0 */ r_esp -= 4; W32(r_esp, 0x5170deu); f_004798c0();
    /* 005170de: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005170e1: jne 0x51712a */ if (!fZ) goto L_0051712a;
L_005170e3:; BB(0x005170e3);
    /* 005170e3: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 005170e9: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 005170ef: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 005170f5: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 005170fb: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00517101: mov edx, dword ptr [eax + 0x204] */ r_edx = R32((u32)(r_eax+0x204u));
    /* 00517107: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00517109: mov ecx, edx */ r_ecx = r_edx;
    /* 0051710b: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00517111: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x517113u); call_ind(t); }
    /* 00517113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517114: call 0x64cab0 */ r_esp -= 4; W32(r_esp, 0x517119u); f_0064cab0();
    /* 00517119: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051711c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0051711f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00517122: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00517125: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00517128: jmp 0x517162 */ goto L_00517162;
L_0051712a:; BB(0x0051712a);
    /* 0051712a: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051712e: jle 0x517138 */ if ((fZ||fS!=fO)) goto L_00517138;
L_00517130:; BB(0x00517130);
    /* 00517130: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00517133: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00517136: jmp 0x517162 */ goto L_00517162;
L_00517138:; BB(0x00517138);
    /* 00517138: call 0x516dd0 */ r_esp -= 4; W32(r_esp, 0x51713du); f_00516dd0();
    /* 0051713d: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00517140: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517142: je 0x517154 */ if (fZ) goto L_00517154;
L_00517144:; BB(0x00517144);
    /* 00517144: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051714a: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x51714fu); f_0047bd20();
    /* 0051714f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00517152: jmp 0x517162 */ goto L_00517162;
L_00517154:; BB(0x00517154);
    /* 00517154: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051715a: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x51715fu); f_0047bce0();
    /* 0051715f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00517162:; BB(0x00517162);
    /* 00517162: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00517167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051716a: cmp ecx, dword ptr [eax + 0x410] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x410u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00517170: jge 0x517183 */ if ((fS==fO)) goto L_00517183;
L_00517172:; BB(0x00517172);
    /* 00517172: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00517178: mov eax, dword ptr [edx + 0x410] */ r_eax = R32((u32)(r_edx+0x410u));
    /* 0051717e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00517181: jmp 0x5171a2 */ goto L_005171a2;
L_00517183:; BB(0x00517183);
    /* 00517183: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517189: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051718c: cmp edx, dword ptr [ecx + 0x410] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x410u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00517192: jle 0x5171a2 */ if ((fZ||fS!=fO)) goto L_005171a2;
L_00517194:; BB(0x00517194);
    /* 00517194: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00517199: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051719c: mov dword ptr [eax + 0x410], ecx */ W32((u32)(r_eax+0x410u), r_ecx);
L_005171a2:; BB(0x005171a2);
    /* 005171a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005171a5: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x5171aau); f_004c6a70();
    /* 005171aa: mov esi, eax */ r_esi = r_eax;
    /* 005171ac: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005171b2: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5171b7u); f_0047bc20();
    /* 005171b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005171b9: mov eax, esi */ r_eax = r_esi;
    /* 005171bb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005171bc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005171bc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005171bc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005171be: mov dword ptr [0x793104], eax */ W32((u32)(0x793104u), r_eax);
    /* 005171c3: mov edx, dword ptr [0x793104] */ r_edx = R32((u32)(0x793104u));
    /* 005171c9: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005171cc: jg 0x517252 */ if ((!fZ&&fS==fO)) goto L_00517252;
L_005171d2:; BB(0x005171d2);
    /* 005171d2: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005171d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005171d8: jne 0x517243 */ if (!fZ) goto L_00517243;
L_005171da:; BB(0x005171da);
    /* 005171da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005171e0: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5171e5u); f_0047bc20();
    /* 005171e5: imul eax, dword ptr [0x793104] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x793104u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005171ec: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005171ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005171f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005171f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005171f6: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x5171fbu); f_004c6c10();
    /* 005171fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005171fe: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x517203u); f_004da300();
    /* 00517203: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00517205: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00517207: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051720a: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x51720fu); f_004dc4d0();
    /* 0051720f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00517211: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517214: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x517219u); f_004c7030();
    /* 00517219: mov edx, dword ptr [0x793104] */ r_edx = R32((u32)(0x793104u));
    /* 0051721f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517220: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517226: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517229: call 0x4f5a80 */ r_esp -= 4; W32(r_esp, 0x51722eu); f_004f5a80();
    /* 0051722e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00517231: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00517234: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00517237: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517238: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051723e: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x517243u); f_0047ec90();
L_00517243:; BB(0x00517243);
    /* 00517243: mov dword ptr [0x793064], 6 */ W32((u32)(0x793064u), 0x6u);
    /* 0051724d: jmp 0x5172ff */ goto L_005172ff;
L_00517252:; BB(0x00517252);
    /* 00517252: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00517256: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517258: jne 0x5172f5 */ if (!fZ) goto L_005172f5;
L_0051725e:; BB(0x0051725e);
    /* 0051725e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517264: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x517269u); f_0047bc20();
    /* 00517269: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051726d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00517270: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00517273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517274: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517277: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x51727cu); f_004c6c10();
    /* 0051727c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051727f: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x517284u); f_004da300();
    /* 00517284: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051728a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x51728fu); f_0047e190();
    /* 0051728f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00517292: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00517294: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00517296: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00517299: cmp dword ptr [0x793078], eax */ {  u32 a = R32((u32)(0x793078u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051729f: jne 0x5172c0 */ if (!fZ) goto L_005172c0;
L_005172a1:; BB(0x005172a1);
    /* 005172a1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005172a7: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x5172acu); f_0047d6b0();
    /* 005172ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005172ae: jne 0x5172c0 */ if (!fZ) goto L_005172c0;
L_005172b0:; BB(0x005172b0);
    /* 005172b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005172b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005172b4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005172b6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005172b9: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x5172beu); f_004dc4d0();
    /* 005172be: jmp 0x5172ce */ goto L_005172ce;
L_005172c0:; BB(0x005172c0);
    /* 005172c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005172c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005172c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005172c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005172c9: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x5172ceu); f_004dc4d0();
L_005172ce:; BB(0x005172ce);
    /* 005172ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005172d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005172d2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005172d8: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005172db: call 0x4f58c0 */ r_esp -= 4; W32(r_esp, 0x5172e0u); f_004f58c0();
    /* 005172e0: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 005172e3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005172e6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005172e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005172ea: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005172f0: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x5172f5u); f_0047ec90();
L_005172f5:; BB(0x005172f5);
    /* 005172f5: mov dword ptr [0x793064], 4 */ W32((u32)(0x793064u), 0x4u);
L_005172ff:; BB(0x005172ff);
    /* 005172ff: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00517302: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517303: mov esp, ebp */ r_esp = r_ebp;
    /* 00517305: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517306: ret  */ FN_RET(0x005170a0); r_esp += 4; return;
}

void f_00517310(void) /* sub_517310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00517310);
    /* 00517310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517311: mov ebp, esp */ r_ebp = r_esp;
    /* 00517313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00517316: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00517317: call 0x516dd0 */ r_esp -= 4; W32(r_esp, 0x51731cu); f_00516dd0();
    /* 0051731c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0051731f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517321: je 0x51735d */ if (fZ) goto L_0051735d;
L_00517323:; BB(0x00517323);
    /* 00517323: movzx ecx, byte ptr [0x793032] */ r_ecx = (u32)R8((u32)(0x793032u));
    /* 0051732a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051732c: je 0x51734d */ if (fZ) goto L_0051734d;
L_0051732e:; BB(0x0051732e);
    /* 0051732e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517334: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x517339u); f_0047bd20();
    /* 00517339: mov esi, eax */ r_esi = r_eax;
    /* 0051733b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517341: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517346u); f_0047bca0();
    /* 00517346: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00517348: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0051734b: jmp 0x51735b */ goto L_0051735b;
L_0051734d:; BB(0x0051734d);
    /* 0051734d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517353: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x517358u); f_0047bd20();
    /* 00517358: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0051735b:; BB(0x0051735b);
    /* 0051735b: jmp 0x517395 */ goto L_00517395;
L_0051735d:; BB(0x0051735d);
    /* 0051735d: movzx edx, byte ptr [0x793032] */ r_edx = (u32)R8((u32)(0x793032u));
    /* 00517364: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517366: je 0x517387 */ if (fZ) goto L_00517387;
L_00517368:; BB(0x00517368);
    /* 00517368: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051736e: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x517373u); f_0047bce0();
    /* 00517373: mov esi, eax */ r_esi = r_eax;
    /* 00517375: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051737b: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517380u); f_0047bca0();
    /* 00517380: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00517382: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00517385: jmp 0x517395 */ goto L_00517395;
L_00517387:; BB(0x00517387);
    /* 00517387: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051738d: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x517392u); f_0047bce0();
    /* 00517392: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00517395:; BB(0x00517395);
    /* 00517395: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051739b: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5173a0u); f_0047e3b0();
    /* 005173a0: mov ecx, eax */ r_ecx = r_eax;
    /* 005173a2: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x5173a7u); f_004c6a70();
    /* 005173a7: mov esi, eax */ r_esi = r_eax;
    /* 005173a9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005173af: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5173b4u); f_0047bc20();
    /* 005173b4: mov ecx, eax */ r_ecx = r_eax;
    /* 005173b6: mov eax, esi */ r_eax = r_esi;
    /* 005173b8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005173b9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005173b9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005173b9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005173bb: mov dword ptr [0x793104], eax */ W32((u32)(0x793104u), r_eax);
    /* 005173c0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005173c6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005173c9: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x5173ceu); f_004f67d0();
    /* 005173ce: mov edx, dword ptr [0x793104] */ r_edx = R32((u32)(0x793104u));
    /* 005173d4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005173d6: mov dword ptr [0x793104], edx */ W32((u32)(0x793104u), r_edx);
    /* 005173dc: mov eax, dword ptr [0x793104] */ r_eax = R32((u32)(0x793104u));
    /* 005173e1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005173e4: jg 0x51740a */ if ((!fZ&&fS==fO)) goto L_0051740a;
L_005173e6:; BB(0x005173e6);
    /* 005173e6: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005173ec: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5173f1u); f_0047bc20();
    /* 005173f1: imul eax, dword ptr [0x793104] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x793104u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005173f8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005173fb: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005173ff: jge 0x517408 */ if ((fS==fO)) goto L_00517408;
L_00517401:; BB(0x00517401);
    /* 00517401: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_00517408:; BB(0x00517408);
    /* 00517408: jmp 0x51741c */ goto L_0051741c;
L_0051740a:; BB(0x0051740a);
    /* 0051740a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517410: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x517415u); f_0047bc20();
    /* 00517415: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00517419: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0051741c:; BB(0x0051741c);
    /* 0051741c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051741f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517420: mov esp, ebp */ r_esp = r_ebp;
    /* 00517422: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517423: ret  */ FN_RET(0x00517310); r_esp += 4; return;
}

void f_00517430(void) /* sub_517430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00517430);
    /* 00517430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517431: mov ebp, esp */ r_ebp = r_esp;
    /* 00517433: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00517436: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00517437: mov dword ptr [ebp - 0xc], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff4u), 0xffffff9du);
    /* 0051743e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517444: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x517449u); f_0047e3b0();
    /* 00517449: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051744c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00517453: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00517458: movzx ecx, byte ptr [eax + 0x4f34] */ r_ecx = (u32)R8((u32)(r_eax+0x4f34u));
    /* 0051745f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517461: je 0x5174bd */ if (fZ) goto L_005174bd;
L_00517463:; BB(0x00517463);
    /* 00517463: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517469: call 0x4798c0 */ r_esp -= 4; W32(r_esp, 0x51746eu); f_004798c0();
    /* 0051746e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517471: jne 0x5174bd */ if (!fZ) goto L_005174bd;
L_00517473:; BB(0x00517473);
    /* 00517473: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 00517479: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0051747f: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 00517485: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 0051748b: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 00517491: mov edx, dword ptr [eax + 0x204] */ r_edx = R32((u32)(r_eax+0x204u));
    /* 00517497: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00517499: mov ecx, edx */ r_ecx = r_edx;
    /* 0051749b: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 005174a1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5174a3u); call_ind(t); }
    /* 005174a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005174a4: call 0x64cab0 */ r_esp -= 4; W32(r_esp, 0x5174a9u); f_0064cab0();
    /* 005174a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005174ac: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005174af: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005174b2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005174b5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005174b8: jmp 0x51755a */ goto L_0051755a;
L_005174bd:; BB(0x005174bd);
    /* 005174bd: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005174c1: jle 0x5174ce */ if ((fZ||fS!=fO)) goto L_005174ce;
L_005174c3:; BB(0x005174c3);
    /* 005174c3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005174c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005174c9: jmp 0x51755a */ goto L_0051755a;
L_005174ce:; BB(0x005174ce);
    /* 005174ce: call 0x516dd0 */ r_esp -= 4; W32(r_esp, 0x5174d3u); f_00516dd0();
    /* 005174d3: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005174d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005174d8: je 0x51751b */ if (fZ) goto L_0051751b;
L_005174da:; BB(0x005174da);
    /* 005174da: movzx eax, byte ptr [0x793032] */ r_eax = (u32)R8((u32)(0x793032u));
    /* 005174e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005174e3: je 0x51750b */ if (fZ) goto L_0051750b;
L_005174e5:; BB(0x005174e5);
    /* 005174e5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005174eb: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x5174f0u); f_0047bd20();
    /* 005174f0: mov esi, eax */ r_esi = r_eax;
    /* 005174f2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005174f8: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x5174fdu); f_0047bca0();
    /* 005174fd: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005174ff: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 00517502: mov byte ptr [0x793032], 0 */ W8((u32)(0x793032u), 0x0u);
    /* 00517509: jmp 0x517519 */ goto L_00517519;
L_0051750b:; BB(0x0051750b);
    /* 0051750b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517511: call 0x47bd20 */ r_esp -= 4; W32(r_esp, 0x517516u); f_0047bd20();
    /* 00517516: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00517519:; BB(0x00517519);
    /* 00517519: jmp 0x51755a */ goto L_0051755a;
L_0051751b:; BB(0x0051751b);
    /* 0051751b: movzx ecx, byte ptr [0x793032] */ r_ecx = (u32)R8((u32)(0x793032u));
    /* 00517522: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517524: je 0x51754c */ if (fZ) goto L_0051754c;
L_00517526:; BB(0x00517526);
    /* 00517526: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051752c: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x517531u); f_0047bce0();
    /* 00517531: mov esi, eax */ r_esi = r_eax;
    /* 00517533: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517539: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x51753eu); f_0047bca0();
    /* 0051753e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00517540: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 00517543: mov byte ptr [0x793032], 0 */ W8((u32)(0x793032u), 0x0u);
    /* 0051754a: jmp 0x51755a */ goto L_0051755a;
L_0051754c:; BB(0x0051754c);
    /* 0051754c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517552: call 0x47bce0 */ r_esp -= 4; W32(r_esp, 0x517557u); f_0047bce0();
    /* 00517557: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0051755a:; BB(0x0051755a);
    /* 0051755a: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00517560: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00517563: cmp eax, dword ptr [edx + 0x410] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x410u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00517569: jge 0x51757c */ if ((fS==fO)) goto L_0051757c;
L_0051756b:; BB(0x0051756b);
    /* 0051756b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517571: mov edx, dword ptr [ecx + 0x410] */ r_edx = R32((u32)(r_ecx+0x410u));
    /* 00517577: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0051757a: jmp 0x51759b */ goto L_0051759b;
L_0051757c:; BB(0x0051757c);
    /* 0051757c: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00517581: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00517584: cmp ecx, dword ptr [eax + 0x410] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x410u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051758a: jle 0x51759b */ if ((fZ||fS!=fO)) goto L_0051759b;
L_0051758c:; BB(0x0051758c);
    /* 0051758c: mov edx, dword ptr [0x791364] */ r_edx = R32((u32)(0x791364u));
    /* 00517592: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00517595: mov dword ptr [edx + 0x410], eax */ W32((u32)(r_edx+0x410u), r_eax);
L_0051759b:; BB(0x0051759b);
    /* 0051759b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051759e: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x5175a3u); f_004c6a70();
    /* 005175a3: mov esi, eax */ r_esi = r_eax;
    /* 005175a5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005175ab: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5175b0u); f_0047bc20();
    /* 005175b0: mov ecx, eax */ r_ecx = r_eax;
    /* 005175b2: mov eax, esi */ r_eax = r_esi;
    /* 005175b4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005175b5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005175b5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005175b5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005175b7: mov dword ptr [0x793104], eax */ W32((u32)(0x793104u), r_eax);
    /* 005175bc: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005175c2: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005175c5: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x5175cau); f_004f67d0();
    /* 005175ca: cmp dword ptr [0x793104], eax */ {  u32 a = R32((u32)(0x793104u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005175d0: jg 0x5175e8 */ if ((!fZ&&fS==fO)) goto L_005175e8;
L_005175d2:; BB(0x005175d2);
    /* 005175d2: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005175d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005175d6: call 0x516f40 */ r_esp -= 4; W32(r_esp, 0x5175dbu); f_00516f40();
    /* 005175db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005175de: jmp 0x51775f */ goto L_0051775f;
L_005175e8:; BB(0x005175e8);
    /* 005175e8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005175ee: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005175f1: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x5175f6u); f_004f67d0();
    /* 005175f6: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005175f9: cmp dword ptr [0x793104], eax */ {  u32 a = R32((u32)(0x793104u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005175ff: jg 0x5176d1 */ if ((!fZ&&fS==fO)) goto L_005176d1;
L_00517605:; BB(0x00517605);
    /* 00517605: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00517609: jle 0x517641 */ if ((fZ||fS!=fO)) goto L_00517641;
L_0051760b:; BB(0x0051760b);
    /* 0051760b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517611: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517614: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x517619u); f_004f67d0();
    /* 00517619: mov esi, dword ptr [0x793104] */ r_esi = R32((u32)(0x793104u));
    /* 0051761f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00517621: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517627: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x51762cu); f_0047bd60();
    /* 0051762c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051762e: jge 0x517641 */ if ((fS==fO)) goto L_00517641;
L_00517630:; BB(0x00517630);
    /* 00517630: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00517633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517634: call 0x516f40 */ r_esp -= 4; W32(r_esp, 0x517639u); f_00516f40();
    /* 00517639: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051763c: jmp 0x51775f */ goto L_0051775f;
L_00517641:; BB(0x00517641);
    /* 00517641: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00517645: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00517647: jne 0x5176c2 */ if (!fZ) goto L_005176c2;
L_00517649:; BB(0x00517649);
    /* 00517649: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051764f: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x517654u); f_0047bc20();
    /* 00517654: imul eax, dword ptr [0x793104] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x793104u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0051765b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051765e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517661: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517662: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517665: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x51766au); f_004c6c10();
    /* 0051766a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051766d: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x517672u); f_004da300();
    /* 00517672: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00517674: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00517676: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517679: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x51767eu); f_004dc4d0();
    /* 0051767e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00517680: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517683: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x517688u); f_004c7030();
    /* 00517688: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051768e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517691: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x517696u); f_004f67d0();
    /* 00517696: mov ecx, dword ptr [0x793104] */ r_ecx = R32((u32)(0x793104u));
    /* 0051769c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051769e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051769f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005176a5: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005176a8: call 0x4f6210 */ r_esp -= 4; W32(r_esp, 0x5176adu); f_004f6210();
    /* 005176ad: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005176b0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005176b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005176b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005176b7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005176bd: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x5176c2u); f_0047ec90();
L_005176c2:; BB(0x005176c2);
    /* 005176c2: mov dword ptr [0x793064], 6 */ W32((u32)(0x793064u), 0x6u);
    /* 005176cc: jmp 0x51775c */ goto L_0051775c;
L_005176d1:; BB(0x005176d1);
    /* 005176d1: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005176d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005176d7: jne 0x517752 */ if (!fZ) goto L_00517752;
L_005176d9:; BB(0x005176d9);
    /* 005176d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005176df: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005176e2: call 0x4f67d0 */ r_esp -= 4; W32(r_esp, 0x5176e7u); f_004f67d0();
    /* 005176e7: mov esi, eax */ r_esi = r_eax;
    /* 005176e9: add esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005176ec: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005176f2: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5176f7u); f_0047bc20();
    /* 005176f7: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005176fa: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 005176fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517700: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517701: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517704: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x517709u); f_004c6c10();
    /* 00517709: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051770c: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x517711u); f_004da300();
    /* 00517711: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517717: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x51771cu); f_0047bc20();
    /* 0051771c: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00517720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517721: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00517723: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517726: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x51772bu); f_004dc4d0();
    /* 0051772b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0051772e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051772f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517735: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517738: call 0x4f6020 */ r_esp -= 4; W32(r_esp, 0x51773du); f_004f6020();
    /* 0051773d: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00517740: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00517743: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517746: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517747: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051774d: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x517752u); f_0047ec90();
L_00517752:; BB(0x00517752);
    /* 00517752: mov dword ptr [0x793064], 5 */ W32((u32)(0x793064u), 0x5u);
L_0051775c:; BB(0x0051775c);
    /* 0051775c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
L_0051775f:; BB(0x0051775f);
    /* 0051775f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517760: mov esp, ebp */ r_esp = r_ebp;
    /* 00517762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517763: ret  */ FN_RET(0x00517430); r_esp += 4; return;
}

void f_00517770(void) /* sub_517770 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00517770);
    /* 00517770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00517771: mov ebp, esp */ r_ebp = r_esp;
    /* 00517773: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00517776: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00517777: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051777d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x517782u); f_0047e3b0();
    /* 00517782: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00517785: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0051778c: mov byte ptr [0x793032], 1 */ W8((u32)(0x793032u), 0x1u);
    /* 00517793: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517796: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x51779bu); f_004c6a70();
    /* 0051779b: mov esi, eax */ r_esi = r_eax;
    /* 0051779d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005177a3: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5177a8u); f_0047bc20();
    /* 005177a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005177aa: mov eax, esi */ r_eax = r_esi;
    /* 005177ac: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005177ad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005177ad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005177ad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005177af: mov dword ptr [0x793104], eax */ W32((u32)(0x793104u), r_eax);
    /* 005177b4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005177ba: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x5177bfu); f_0047bca0();
    /* 005177bf: cmp dword ptr [0x793104], eax */ {  u32 a = R32((u32)(0x793104u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005177c5: jg 0x51783b */ if ((!fZ&&fS==fO)) goto L_0051783b;
L_005177c7:; BB(0x005177c7);
    /* 005177c7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005177cd: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5177d2u); f_0047bc20();
    /* 005177d2: imul eax, dword ptr [0x793104] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x793104u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005177d9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005177dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005177df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005177e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005177e3: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x5177e8u); f_004c6c10();
    /* 005177e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005177eb: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x5177f0u); f_004da300();
    /* 005177f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005177f2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005177f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005177f7: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x5177fcu); f_004dc4d0();
    /* 005177fc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005177fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517801: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x517806u); f_004c7030();
    /* 00517806: mov eax, dword ptr [0x793104] */ r_eax = R32((u32)(0x793104u));
    /* 0051780b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051780c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517812: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517815: call 0x4f5a80 */ r_esp -= 4; W32(r_esp, 0x51781au); f_004f5a80();
    /* 0051781a: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0051781d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00517820: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517823: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517824: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051782a: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x51782fu); f_0047ec90();
    /* 0051782f: mov dword ptr [0x793064], 6 */ W32((u32)(0x793064u), 0x6u);
    /* 00517839: jmp 0x5178b6 */ goto L_005178b6;
L_0051783b:; BB(0x0051783b);
    /* 0051783b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517841: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517846u); f_0047bca0();
    /* 00517846: mov esi, eax */ r_esi = r_eax;
    /* 00517848: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051784e: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x517853u); f_0047bc20();
    /* 00517853: imul esi, eax */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_eax; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00517856: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00517859: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051785c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051785d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517860: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x517865u); f_004c6c10();
    /* 00517865: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517868: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x51786du); f_004da300();
    /* 0051786d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517870: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517871: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00517873: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517876: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x51787bu); f_004dc4d0();
    /* 0051787b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051787d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517883: call 0x47bca0 */ r_esp -= 4; W32(r_esp, 0x517888u); f_0047bca0();
    /* 00517888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00517889: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051788f: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517892: call 0x4f5c40 */ r_esp -= 4; W32(r_esp, 0x517897u); f_004f5c40();
    /* 00517897: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0051789a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0051789d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005178a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005178a1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005178a7: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x5178acu); f_0047ec90();
    /* 005178ac: mov dword ptr [0x793064], 0 */ W32((u32)(0x793064u), 0x0u);
L_005178b6:; BB(0x005178b6);
    /* 005178b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005178b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005178ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005178bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005178bd: ret  */ FN_RET(0x00517770); r_esp += 4; return;
}

void f_005178c0(void) /* sub_5178C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005178c0);
    /* 005178c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005178c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005178c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005178c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005178c7: mov dword ptr [ebp - 0xc], 0xffffff9d */ W32((u32)(r_ebp+0xfffffff4u), 0xffffff9du);
    /* 005178ce: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005178d4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005178d7: call 0x4f6840 */ r_esp -= 4; W32(r_esp, 0x5178dcu); f_004f6840();
    /* 005178dc: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005178df: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005178e5: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x5178eau); f_0047e3b0();
    /* 005178ea: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005178ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005178f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005178f7: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x5178fcu); f_004c6a70();
    /* 005178fc: mov esi, eax */ r_esi = r_eax;
    /* 005178fe: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517904: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x517909u); f_0047bc20();
    /* 00517909: mov ecx, eax */ r_ecx = r_eax;
    /* 0051790b: mov eax, esi */ r_eax = r_esi;
    /* 0051790d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0051790e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0051790e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0051790e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00517910: mov dword ptr [0x793104], eax */ W32((u32)(0x793104u), r_eax);
    /* 00517915: mov edx, dword ptr [0x793104] */ r_edx = R32((u32)(0x793104u));
    /* 0051791b: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051791e: jg 0x5179bc */ if ((!fZ&&fS==fO)) goto L_005179bc;
L_00517924:; BB(0x00517924);
    /* 00517924: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00517928: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051792a: jne 0x5179b0 */ if (!fZ) goto L_005179b0;
L_00517930:; BB(0x00517930);
    /* 00517930: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517936: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x51793bu); f_0047bc20();
    /* 0051793b: imul eax, dword ptr [0x793104] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(0x793104u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00517942: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00517945: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517948: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00517949: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051794c: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x517951u); f_004c6c10();
    /* 00517951: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517954: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x517959u); f_004da300();
    /* 00517959: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051795b: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051795d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517960: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x517965u); f_004dc4d0();
    /* 00517965: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00517967: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051796a: call 0x4c7030 */ r_esp -= 4; W32(r_esp, 0x51796fu); f_004c7030();
    /* 0051796f: mov edx, dword ptr [0x793104] */ r_edx = R32((u32)(0x793104u));
    /* 00517975: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517976: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051797c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051797f: call 0x4f4e20 */ r_esp -= 4; W32(r_esp, 0x517984u); f_004f4e20();
    /* 00517984: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00517987: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x51798cu); f_004c7050();
    /* 0051798c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051798d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517993: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517996: call 0x4f4f80 */ r_esp -= 4; W32(r_esp, 0x51799bu); f_004f4f80();
    /* 0051799b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0051799e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005179a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005179a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005179a5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005179ab: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x5179b0u); f_0047ec90();
L_005179b0:; BB(0x005179b0);
    /* 005179b0: mov dword ptr [0x793064], 6 */ W32((u32)(0x793064u), 0x6u);
    /* 005179ba: jmp 0x517a28 */ goto L_00517a28;
L_005179bc:; BB(0x005179bc);
    /* 005179bc: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005179c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005179c2: jne 0x517a1e */ if (!fZ) goto L_00517a1e;
L_005179c4:; BB(0x005179c4);
    /* 005179c4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 005179ca: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x5179cfu); f_0047bc20();
    /* 005179cf: imul eax, dword ptr [ebp - 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff0u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005179d3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005179d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005179d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005179da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005179dd: call 0x4c6c10 */ r_esp -= 4; W32(r_esp, 0x5179e2u); f_004c6c10();
    /* 005179e2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005179e5: call 0x4da300 */ r_esp -= 4; W32(r_esp, 0x5179eau); f_004da300();
    /* 005179ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005179ec: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005179ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005179f1: call 0x4dc4d0 */ r_esp -= 4; W32(r_esp, 0x5179f6u); f_004dc4d0();
    /* 005179f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005179f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005179fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517a00: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00517a03: call 0x4f4e20 */ r_esp -= 4; W32(r_esp, 0x517a08u); f_004f4e20();
    /* 00517a08: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00517a0f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00517a12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00517a13: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00517a19: call 0x47ec90 */ r_esp -= 4; W32(r_esp, 0x517a1eu); f_0047ec90();
L_00517a1e:; BB(0x00517a1e);
    /* 00517a1e: mov dword ptr [0x793064], 0 */ W32((u32)(0x793064u), 0x0u);
L_00517a28:; BB(0x00517a28);
    /* 00517a28: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00517a2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00517a2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00517a2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00517a2f: ret  */ FN_RET(0x005178c0); r_esp += 4; return;
}

