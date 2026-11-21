#include "protos.h"

void f_006340d0(void) /* sub_6340D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006340d0);
    /* 006340d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006340d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006340d3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006340d6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006340d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006340dc: call 0x636760 */ r_esp -= 4; W32(r_esp, 0x6340e1u); f_00636760();
    /* 006340e1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006340e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006340e6: je 0x6340ed */ if (fZ) goto L_006340ed;
L_006340e8:; BB(0x006340e8);
    /* 006340e8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006340eb: jmp 0x634167 */ goto L_00634167;
L_006340ed:; BB(0x006340ed);
    /* 006340ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006340f0: call 0x636690 */ r_esp -= 4; W32(r_esp, 0x6340f5u); f_00636690();
    /* 006340f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006340f8: jne 0x63410a */ if (!fZ) goto L_0063410a;
L_006340fa:; BB(0x006340fa);
    /* 006340fa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006340fd: call 0x634170 */ r_esp -= 4; W32(r_esp, 0x634102u); f_00634170();
    /* 00634102: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00634105: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634108: jmp 0x634167 */ goto L_00634167;
L_0063410a:; BB(0x0063410a);
    /* 0063410a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00634110: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00634112: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00634118: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0063411e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x634120u); call_ind(t); }
    /* 00634120: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00634123: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634127: jne 0x634133 */ if (!fZ) goto L_00634133;
L_00634129:; BB(0x00634129);
    /* 00634129: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063412c: call 0x634170 */ r_esp -= 4; W32(r_esp, 0x634131u); f_00634170();
    /* 00634131: jmp 0x634167 */ goto L_00634167;
L_00634133:; BB(0x00634133);
    /* 00634133: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634136: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00634139: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0063413c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063413f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x634144u); f_0063aac0();
    /* 00634144: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00634146: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00634149: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063414b: cmp dword ptr [ebp - 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063414f: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00634152: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00634155: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00634157: je 0x63415e */ if (fZ) goto L_0063415e;
L_00634159:; BB(0x00634159);
    /* 00634159: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063415c: jmp 0x634167 */ goto L_00634167;
L_0063415e:; BB(0x0063415e);
    /* 0063415e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634161: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00634164: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
L_00634167:; BB(0x00634167);
    /* 00634167: mov esp, ebp */ r_esp = r_ebp;
    /* 00634169: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063416a: ret  */ FN_RET(0x006340d0); r_esp += 4; return;
}

void f_00634170(void) /* sub_634170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634170);
    /* 00634170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634171: mov ebp, esp */ r_ebp = r_esp;
    /* 00634173: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634176: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00634179: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00634180: jmp 0x63418b */ goto L_0063418b;
L_00634182:; BB(0x00634182);
    /* 00634182: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634185: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00634188: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063418b:; BB(0x0063418b);
    /* 0063418b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063418e: call 0x636610 */ r_esp -= 4; W32(r_esp, 0x634193u); f_00636610();
    /* 00634193: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634196: jge 0x63420f */ if ((fS==fO)) goto L_0063420f;
L_00634198:; BB(0x00634198);
    /* 00634198: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063419b: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0063419e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006341a1: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006341a4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006341a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006341aa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6341afu); f_0063aac0();
    /* 006341af: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006341b1: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006341b4: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006341b8: je 0x6341d6 */ if (fZ) goto L_006341d6;
L_006341ba:; BB(0x006341ba);
    /* 006341ba: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006341bd: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6341c2u); f_0063aac0();
    /* 006341c2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006341c4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006341c7: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006341cb: je 0x6341d6 */ if (fZ) goto L_006341d6;
L_006341cd:; BB(0x006341cd);
    /* 006341cd: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 006341d4: jmp 0x6341dd */ goto L_006341dd;
L_006341d6:; BB(0x006341d6);
    /* 006341d6: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_006341dd:; BB(0x006341dd);
    /* 006341dd: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 006341e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006341e3: je 0x63420a */ if (fZ) goto L_0063420a;
L_006341e5:; BB(0x006341e5);
    /* 006341e5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006341e8: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006341eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006341ee: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 006341f1: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006341f4: call 0x648ae0 */ r_esp -= 4; W32(r_esp, 0x6341f9u); f_00648ae0();
    /* 006341f9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006341fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006341fe: je 0x634205 */ if (fZ) goto L_00634205;
L_00634200:; BB(0x00634200);
    /* 00634200: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634203: jmp 0x634212 */ goto L_00634212;
L_00634205:; BB(0x00634205);
    /* 00634205: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00634208: jmp 0x634212 */ goto L_00634212;
L_0063420a:; BB(0x0063420a);
    /* 0063420a: jmp 0x634182 */ goto L_00634182;
L_0063420f:; BB(0x0063420f);
    /* 0063420f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00634212:; BB(0x00634212);
    /* 00634212: mov esp, ebp */ r_esp = r_ebp;
    /* 00634214: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634215: ret  */ FN_RET(0x00634170); r_esp += 4; return;
}

void f_00634420(void) /* sub_634420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634420);
    /* 00634420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634421: mov ebp, esp */ r_ebp = r_esp;
    /* 00634423: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00634426: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00634429: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063442c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063442d: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00634432: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00634432, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00634432, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00634434: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00634437: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063443b: jge 0x63444d */ if ((fS==fO)) goto L_0063444d;
L_0063443d:; BB(0x0063443d);
    /* 0063443d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00634444: mov dword ptr [ebp - 0xc], 0x3e8 */ W32((u32)(r_ebp+0xfffffff4u), 0x3e8u);
    /* 0063444b: jmp 0x634477 */ goto L_00634477;
L_0063444d:; BB(0x0063444d);
    /* 0063444d: mov dword ptr [ebp - 8], 0x3e8 */ W32((u32)(r_ebp+0xfffffff8u), 0x3e8u);
    /* 00634454: jmp 0x634467 */ goto L_00634467;
L_00634456:; BB(0x00634456);
    /* 00634456: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634459: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0063445c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0063445f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634462: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00634464: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00634467:; BB(0x00634467);
    /* 00634467: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063446b: jle 0x63446f */ if ((fZ||fS!=fO)) goto L_0063446f;
L_0063446d:; BB(0x0063446d);
    /* 0063446d: jmp 0x634456 */ goto L_00634456;
L_0063446f:; BB(0x0063446f);
    /* 0063446f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634472: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00634474: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00634477:; BB(0x00634477);
    /* 00634477: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063447a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0063447d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00634480: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00634481: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00634486: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00634486, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00634486, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00634488: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063448a: je 0x6344b2 */ if (fZ) goto L_006344b2;
L_0063448c:; BB(0x0063448c);
    /* 0063448c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063448f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00634490: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00634495: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00634495, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00634495, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00634497: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0063449a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063449d: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006344a0: imul eax, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006344a4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006344a5: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 006344aa: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006344aa, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006344aa, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006344ac: add eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006344af: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006344b2:; BB(0x006344b2);
    /* 006344b2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006344b5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006344b6: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 006344bb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006344bb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006344bb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006344bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006344bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006344c0: ret 4 */ FN_RET(0x00634420); r_esp += 8; return;
}

void f_006344d0(void) /* sub_6344D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006344d0);
    /* 006344d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006344d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006344d3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006344d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006344d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006344e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006344e3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006344e6: jmp 0x6344f1 */ goto L_006344f1;
L_006344e8:; BB(0x006344e8);
    /* 006344e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006344eb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006344ee: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_006344f1:; BB(0x006344f1);
    /* 006344f1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006344f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006344f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006344f9: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 006344ff: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x634501u); call_ind(t); }
    /* 00634501: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634504: jge 0x63454d */ if ((fS==fO)) goto L_0063454d;
L_00634506:; BB(0x00634506);
    /* 00634506: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634509: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063450a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063450d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063450f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634512: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00634518: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63451au); call_ind(t); }
    /* 0063451a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063451c: je 0x63454b */ if (fZ) goto L_0063454b;
L_0063451e:; BB(0x0063451e);
    /* 0063451e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00634521: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634522: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00634525: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00634527: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063452a: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00634530: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x634532u); call_ind(t); }
    /* 00634532: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00634535: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00634538: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063453a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063453d: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 00634543: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x634545u); call_ind(t); }
    /* 00634545: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00634548: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063454b:; BB(0x0063454b);
    /* 0063454b: jmp 0x6344e8 */ goto L_006344e8;
L_0063454d:; BB(0x0063454d);
    /* 0063454d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00634550: mov esp, ebp */ r_esp = r_ebp;
    /* 00634552: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634553: ret  */ FN_RET(0x006344d0); r_esp += 4; return;
}

void f_00634560(void) /* sub_634560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00634560);
    /* 00634560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00634561: mov ebp, esp */ r_ebp = r_esp;
    /* 00634563: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634564: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00634567: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00634569: cmp dword ptr [ebp + 8], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634570: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00634573: mov esp, ebp */ r_esp = r_ebp;
    /* 00634575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634576: ret 4 */ FN_RET(0x00634560); r_esp += 8; return;
}

void f_006347c0(void) /* sub_6347C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006347c0);
    /* 006347c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006347c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006347c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006347c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006347c7: cmp dword ptr [ebp + 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006347ce: jle 0x634812 */ if ((fZ||fS!=fO)) goto L_00634812;
L_006347d0:; BB(0x006347d0);
    /* 006347d0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006347d3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006347d4: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 006347d9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006347d9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006347d9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006347db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006347dc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006347df: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006347e0: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 006347e5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006347e5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006347e5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006347e7: mov eax, edx */ r_eax = r_edx;
    /* 006347e9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006347ea: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 006347ef: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006347ef, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006347ef, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006347f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006347f2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006347f5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006347f6: mov ecx, 0xf4240 */ r_ecx = 0xf4240u;
    /* 006347fb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006347fb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006347fb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006347fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006347fe: push 0x6da570 */ { u32 v = 0x6da570u; r_esp -= 4; W32(r_esp, v); }
    /* 00634803: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00634806: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634807: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x63480du); call_ind(t); }
    /* 0063480d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634810: jmp 0x63485d */ goto L_0063485d;
L_00634812:; BB(0x00634812);
    /* 00634812: cmp dword ptr [ebp + 0xc], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00634819: jle 0x634847 */ if ((fZ||fS!=fO)) goto L_00634847;
L_0063481b:; BB(0x0063481b);
    /* 0063481b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063481e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063481f: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00634824: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00634824, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00634824, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00634826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00634827: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063482a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063482b: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00634830: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00634830, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00634830, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00634832: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00634833: push 0x6da560 */ { u32 v = 0x6da560u; r_esp -= 4; W32(r_esp, v); }
    /* 00634838: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0063483b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063483c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x634842u); call_ind(t); }
    /* 00634842: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00634845: jmp 0x63485d */ goto L_0063485d;
L_00634847:; BB(0x00634847);
    /* 00634847: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063484a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063484b: push 0x6da554 */ { u32 v = 0x6da554u; r_esp -= 4; W32(r_esp, v); }
    /* 00634850: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00634853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00634854: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x63485au); call_ind(t); }
    /* 0063485a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063485d:; BB(0x0063485d);
    /* 0063485d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063485f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00634860: ret 8 */ FN_RET(0x006347c0); r_esp += 12; return;
}

