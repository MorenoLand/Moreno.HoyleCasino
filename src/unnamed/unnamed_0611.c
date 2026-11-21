#include "protos.h"

void f_006112f0(void) /* sub_6112F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006112f0);
    /* 006112f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006112f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006112f3: sub esp, 0xd8 */ {  u32 a = r_esp; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006112f9: mov eax, dword ptr [0x15e55f4] */ r_eax = R32((u32)(0x15e55f4u));
    /* 006112fe: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00611301: push 0x15e55f0 */ { u32 v = 0x15e55f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611306: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00611309: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061130a: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061130d: call 0x612690 */ r_esp -= 4; W32(r_esp, 0x611312u); f_00612690();
    /* 00611312: mov edx, dword ptr [0x15e55f8] */ r_edx = R32((u32)(0x15e55f8u));
    /* 00611318: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0061131b: push 0x15e55f0 */ { u32 v = 0x15e55f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611320: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00611323: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611324: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00611327: call 0x612690 */ r_esp -= 4; W32(r_esp, 0x61132cu); f_00612690();
L_0061132c:; BB(0x0061132c);
    /* 0061132c: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 0061132f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611330: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00611333: call 0x6118f0 */ r_esp -= 4; W32(r_esp, 0x611338u); f_006118f0();
    /* 00611338: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0061133b: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0061133d: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0061133f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00611342: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00611345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611347: je 0x6117bb */ if (fZ) goto L_006117bb;
L_0061134d:; BB(0x0061134d);
    /* 0061134d: mov byte ptr [ebp - 0x11], 0 */ W8((u32)(r_ebp+0xffffffefu), 0x0u);
    /* 00611351: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00611354: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x611359u); f_00611c10();
    /* 00611359: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0061135c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0061135f: cmp dword ptr [ecx + 0x30], 0 */ {  u32 a = R32((u32)(r_ecx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00611363: jge 0x611387 */ if ((fS==fO)) goto L_00611387;
L_00611365:; BB(0x00611365);
    /* 00611365: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00611368: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061136b: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0061136e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00611371: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00611374: call 0x611c50 */ r_esp -= 4; W32(r_esp, 0x611379u); f_00611c50();
    /* 00611379: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0061137c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061137f: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00611382: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00611385: jmp 0x61132c */ goto L_0061132c;
L_00611387:; BB(0x00611387);
    /* 00611387: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061138a: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x61138fu); f_00611c10();
    /* 0061138f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00611392: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00611395: movzx ecx, byte ptr [eax + 0xc] */ r_ecx = (u32)R8((u32)(r_eax+0xcu));
    /* 00611399: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061139b: jne 0x6113c8 */ if (!fZ) goto L_006113c8;
L_0061139d:; BB(0x0061139d);
    /* 0061139d: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 006113a0: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x6113a5u); f_00611c10();
    /* 006113a5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006113a8: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 006113ab: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 006113ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006113af: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006113b5: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006113b8: call 0x609650 */ r_esp -= 4; W32(r_esp, 0x6113bdu); f_00609650();
    /* 006113bd: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006113c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006113c2: je 0x6113c8 */ if (fZ) goto L_006113c8;
L_006113c4:; BB(0x006113c4);
    /* 006113c4: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
L_006113c8:; BB(0x006113c8);
    /* 006113c8: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 006113cb: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x6113d0u); f_00611c10();
    /* 006113d0: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006113d3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 006113d6: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006113da: je 0x611677 */ if (fZ) goto L_00611677;
L_006113e0:; BB(0x006113e0);
    /* 006113e0: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 006113e3: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x6113e8u); f_00611c10();
    /* 006113e8: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006113eb: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 006113ee: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x6113f3u); f_00611c10();
    /* 006113f3: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 006113f6: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 006113f9: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x6113feu); f_00611c10();
    /* 006113fe: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00611401: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 00611407: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x61140cu); f_005f3e50();
    /* 0061140c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0061140f: sub eax, dword ptr [ecx + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x34u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611412: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00611418: fild dword ptr [ebp - 0xd4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff2cu)));
    /* 0061141e: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00611421: fmul dword ptr [edx + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x38u));
    /* 00611424: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00611427: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 0061142a: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0061142d: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00611430: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x611435u); f_00611c10();
    /* 00611435: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00611438: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0061143b: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0061143e: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 00611444: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00611446: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00611449: jne 0x61148a */ if (!fZ) goto L_0061148a;
L_0061144b:; BB(0x0061144b);
    /* 0061144b: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061144e: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x611453u); f_00611c10();
    /* 00611453: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00611456: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00611459: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0061145c: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 0061145f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00611461: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00611463: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00611466: jp 0x61148a */ if (fP) goto L_0061148a;
L_00611468:; BB(0x00611468);
    /* 00611468: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061146b: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x611470u); f_00611c10();
    /* 00611470: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00611473: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00611476: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00611479: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x61147eu); f_00611c10();
    /* 0061147e: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 00611485: jmp 0x61151e */ goto L_0061151e;
L_0061148a:; BB(0x0061148a);
    /* 0061148a: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061148d: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x611492u); f_00611c10();
    /* 00611492: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00611495: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00611498: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 0061149b: fcomp qword ptr [0x6b2c50] */ fx_compare(ST(0), R_F64((u32)(0x6b2c50u))); FPOP();
    /* 006114a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006114a3: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 006114a6: jp 0x61151e */ if (fP) goto L_0061151e;
L_006114a8:; BB(0x006114a8);
    /* 006114a8: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 006114ab: call 0x611c10 */ r_esp -= 4; W32(r_esp, 0x6114b0u); f_00611c10();
    /* 006114b0: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 006114b3: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 006114b6: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006114b9: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 006114bc: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006114be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006114c0: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006114c3: jne 0x61151e */ if (!fZ) goto L_0061151e;
L_006114c5:; BB(0x006114c5);
    /* 006114c5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006114c9: jne 0x6114d1 */ if (!fZ) goto L_006114d1;
L_006114cb:; BB(0x006114cb);
    /* 006114cb: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6114d1u); call_ind(t); }
L_006114d1:; BB(0x006114d1);
    /* 006114d1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006114d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006114d7: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006114da: jb 0x6114e2 */ if (fC) goto L_006114e2;
L_006114dc:; BB(0x006114dc);
    /* 006114dc: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6114e2u); call_ind(t); }
L_006114e2:; BB(0x006114e2);
    /* 006114e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006114e5: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 006114e8: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 006114eb: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 006114ee: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 006114f1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006114f5: jne 0x6114fd */ if (!fZ) goto L_006114fd;
L_006114f7:; BB(0x006114f7);
    /* 006114f7: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6114fdu); call_ind(t); }
L_006114fd:; BB(0x006114fd);
    /* 006114fd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00611500: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611503: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611506: jb 0x61150e */ if (fC) goto L_0061150e;
L_00611508:; BB(0x00611508);
    /* 00611508: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61150eu); call_ind(t); }
L_0061150e:; BB(0x0061150e);
    /* 0061150e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611511: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00611514: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00611517: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0061151e:; BB(0x0061151e);
    /* 0061151e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611522: jne 0x61152a */ if (!fZ) goto L_0061152a;
L_00611524:; BB(0x00611524);
    /* 00611524: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61152au); call_ind(t); }
L_0061152a:; BB(0x0061152a);
    /* 0061152a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061152d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611530: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611533: jb 0x61153b */ if (fC) goto L_0061153b;
L_00611535:; BB(0x00611535);
    /* 00611535: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61153bu); call_ind(t); }
L_0061153b:; BB(0x0061153b);
    /* 0061153b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061153e: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00611541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611542: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00611545: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00611548: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0061154b: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0061154e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061154f: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00611554: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00611557: call 0x608550 */ r_esp -= 4; W32(r_esp, 0x61155cu); f_00608550();
    /* 0061155c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611560: jne 0x611568 */ if (!fZ) goto L_00611568;
L_00611562:; BB(0x00611562);
    /* 00611562: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611568u); call_ind(t); }
L_00611568:; BB(0x00611568);
    /* 00611568: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061156b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061156e: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611571: jb 0x611579 */ if (fC) goto L_00611579;
L_00611573:; BB(0x00611573);
    /* 00611573: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611579u); call_ind(t); }
L_00611579:; BB(0x00611579);
    /* 00611579: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061157c: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00611582: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00611588: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061158c: jne 0x611677 */ if (!fZ) goto L_00611677;
L_00611592:; BB(0x00611592);
    /* 00611592: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611596: jne 0x61159e */ if (!fZ) goto L_0061159e;
L_00611598:; BB(0x00611598);
    /* 00611598: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61159eu); call_ind(t); }
L_0061159e:; BB(0x0061159e);
    /* 0061159e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006115a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006115a4: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006115a7: jb 0x6115af */ if (fC) goto L_006115af;
L_006115a9:; BB(0x006115a9);
    /* 006115a9: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6115afu); call_ind(t); }
L_006115af:; BB(0x006115af);
    /* 006115af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006115b2: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 006115b8: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 006115be: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 006115c1: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 006115c7: cmp dword ptr [ebp - 0xd8], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006115ce: je 0x6115db */ if (fZ) goto L_006115db;
L_006115d0:; BB(0x006115d0);
    /* 006115d0: cmp dword ptr [ebp - 0xd8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006115d7: je 0x6115e1 */ if (fZ) goto L_006115e1;
L_006115d9:; BB(0x006115d9);
    /* 006115d9: jmp 0x61161e */ goto L_0061161e;
L_006115db:; BB(0x006115db);
    /* 006115db: mov byte ptr [ebp - 0x11], 1 */ W8((u32)(r_ebp+0xffffffefu), 0x1u);
    /* 006115df: jmp 0x61161e */ goto L_0061161e;
L_006115e1:; BB(0x006115e1);
    /* 006115e1: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006115e5: jne 0x6115ed */ if (!fZ) goto L_006115ed;
L_006115e7:; BB(0x006115e7);
    /* 006115e7: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6115edu); call_ind(t); }
L_006115ed:; BB(0x006115ed);
    /* 006115ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006115f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006115f3: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006115f6: jb 0x6115fe */ if (fC) goto L_006115fe;
L_006115f8:; BB(0x006115f8);
    /* 006115f8: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6115feu); call_ind(t); }
L_006115fe:; BB(0x006115fe);
    /* 006115fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611601: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00611607: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061160d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00611610: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611611: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00611616: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00611619: call 0x609980 */ r_esp -= 4; W32(r_esp, 0x61161eu); f_00609980();
L_0061161e:; BB(0x0061161e);
    /* 0061161e: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611622: jne 0x61162a */ if (!fZ) goto L_0061162a;
L_00611624:; BB(0x00611624);
    /* 00611624: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61162au); call_ind(t); }
L_0061162a:; BB(0x0061162a);
    /* 0061162a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061162d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611630: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611633: jb 0x61163b */ if (fC) goto L_0061163b;
L_00611635:; BB(0x00611635);
    /* 00611635: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61163bu); call_ind(t); }
L_0061163b:; BB(0x0061163b);
    /* 0061163b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061163e: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00611644: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611648: jne 0x611650 */ if (!fZ) goto L_00611650;
L_0061164a:; BB(0x0061164a);
    /* 0061164a: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611650u); call_ind(t); }
L_00611650:; BB(0x00611650);
    /* 00611650: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00611653: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611656: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611659: jb 0x611661 */ if (fC) goto L_00611661;
L_0061165b:; BB(0x0061165b);
    /* 0061165b: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611661u); call_ind(t); }
L_00611661:; BB(0x00611661);
    /* 00611661: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611664: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0061166a: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00611670: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_00611677:; BB(0x00611677);
    /* 00611677: movzx edx, byte ptr [ebp - 0x11] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 0061167b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061167d: je 0x61178a */ if (fZ) goto L_0061178a;
L_00611683:; BB(0x00611683);
    /* 00611683: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611687: jne 0x61168f */ if (!fZ) goto L_0061168f;
L_00611689:; BB(0x00611689);
    /* 00611689: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61168fu); call_ind(t); }
L_0061168f:; BB(0x0061168f);
    /* 0061168f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00611692: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611695: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611698: jb 0x6116a0 */ if (fC) goto L_006116a0;
L_0061169a:; BB(0x0061169a);
    /* 0061169a: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6116a0u); call_ind(t); }
L_006116a0:; BB(0x006116a0);
    /* 006116a0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006116a3: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 006116a9: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 006116af: cmp dword ptr [eax + 0x30], 0 */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006116b3: jl 0x6116f4 */ if ((fS!=fO)) goto L_006116f4;
L_006116b5:; BB(0x006116b5);
    /* 006116b5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006116b9: jne 0x6116c1 */ if (!fZ) goto L_006116c1;
L_006116bb:; BB(0x006116bb);
    /* 006116bb: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6116c1u); call_ind(t); }
L_006116c1:; BB(0x006116c1);
    /* 006116c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006116c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006116c7: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006116ca: jb 0x6116d2 */ if (fC) goto L_006116d2;
L_006116cc:; BB(0x006116cc);
    /* 006116cc: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6116d2u); call_ind(t); }
L_006116d2:; BB(0x006116d2);
    /* 006116d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006116d5: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 006116db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006116dd: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006116e3: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006116e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006116e7: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 006116ec: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006116ef: call 0x609720 */ r_esp -= 4; W32(r_esp, 0x6116f4u); f_00609720();
L_006116f4:; BB(0x006116f4);
    /* 006116f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006116f7: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 006116fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611700: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 00611706: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 0061170c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061170d: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00611713: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611714: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 00611717: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611718: mov ecx, 0x15e55f0 */ r_ecx = 0x15e55f0u;
    /* 0061171d: call 0x6128b0 */ r_esp -= 4; W32(r_esp, 0x611722u); f_006128b0();
    /* 00611722: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611725: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611728: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0061172b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061172e: mov edx, dword ptr [0x15e55f8] */ r_edx = R32((u32)(0x15e55f8u));
    /* 00611734: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 0061173a: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00611741: mov eax, 0x15e55f0 */ r_eax = 0x15e55f0u;
    /* 00611746: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611748: je 0x611766 */ if (fZ) goto L_00611766;
L_0061174a:; BB(0x0061174a);
    /* 0061174a: mov ecx, dword ptr [0x15e55f4] */ r_ecx = R32((u32)(0x15e55f4u));
    /* 00611750: cmp ecx, dword ptr [ebp - 0xc8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff38u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611756: ja 0x611766 */ if ((!fC&&!fZ)) goto L_00611766;
L_00611758:; BB(0x00611758);
    /* 00611758: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 0061175e: cmp edx, dword ptr [0x15e55f8] */ {  u32 a = r_edx; u32 b = R32((u32)(0x15e55f8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611764: jbe 0x61176c */ if ((fC||fZ)) goto L_0061176c;
L_00611766:; BB(0x00611766);
    /* 00611766: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61176cu); call_ind(t); }
L_0061176c:; BB(0x0061176c);
    /* 0061176c: mov dword ptr [ebp - 0x30], 0x15e55f0 */ W32((u32)(r_ebp+0xffffffd0u), 0x15e55f0u);
    /* 00611773: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 00611779: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0061177c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061177f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00611782: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00611785: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00611788: jmp 0x6117b6 */ goto L_006117b6;
L_0061178a:; BB(0x0061178a);
    /* 0061178a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061178d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611790: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00611796: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 0061179c: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0061179f: call 0x611c50 */ r_esp -= 4; W32(r_esp, 0x6117a4u); f_00611c50();
    /* 006117a4: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 006117aa: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006117ad: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 006117b3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_006117b6:; BB(0x006117b6);
    /* 006117b6: jmp 0x61132c */ goto L_0061132c;
L_006117bb:; BB(0x006117bb);
    /* 006117bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006117bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006117be: ret  */ FN_RET(0x006112f0); r_esp += 4; return;
}

void f_006117c0(void) /* sub_6117C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006117c0);
    /* 006117c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006117c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006117c3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006117c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006117c9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006117cc: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006117cf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006117d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006117d5: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x6117dau); f_005be450();
    /* 006117da: mov esp, ebp */ r_esp = r_ebp;
    /* 006117dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006117dd: ret  */ FN_RET(0x006117c0); r_esp += 4; return;
}

void f_006117e0(void) /* sub_6117E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006117e0);
    /* 006117e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006117e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006117e3: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006117e6: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006117e9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006117ec: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006117f0: jne 0x6117fb */ if (!fZ) goto L_006117fb;
L_006117f2:; BB(0x006117f2);
    /* 006117f2: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006117f9: jmp 0x611812 */ goto L_00611812;
L_006117fb:; BB(0x006117fb);
    /* 006117fb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006117fe: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00611801: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00611804: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611807: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611808: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 0061180d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0061180d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0061180d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0061180f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_00611812:; BB(0x00611812);
    /* 00611812: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00611815: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611819: jne 0x611824 */ if (!fZ) goto L_00611824;
L_0061181b:; BB(0x0061181b);
    /* 0061181b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00611822: jmp 0x61183b */ goto L_0061183b;
L_00611824:; BB(0x00611824);
    /* 00611824: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00611827: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0061182a: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0061182d: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611830: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611831: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00611836: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00611836, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00611836, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00611838: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_0061183b:; BB(0x0061183b);
    /* 0061183b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0061183e: cmp edx, dword ptr [ebp - 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611841: jae 0x61188e */ if (!fC) goto L_0061188e;
L_00611843:; BB(0x00611843);
    /* 00611843: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00611846: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00611849: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0061184c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061184f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00611852: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611854: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 00611857: mov cl, byte ptr [ebp - 0x13] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffedu))) & 0xffu);
    /* 0061185a: mov byte ptr [ebp - 0x12], cl */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_ecx);
    /* 0061185d: mov dl, byte ptr [ebp - 0x11] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
    /* 00611860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611861: mov al, byte ptr [ebp - 0x12] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffeeu))) & 0xffu);
    /* 00611864: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611865: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00611868: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611869: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061186c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061186d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061186f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00611872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611873: call 0x612970 */ r_esp -= 4; W32(r_esp, 0x611878u); f_00612970();
    /* 00611878: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061187b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00611880: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00611883: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00611886: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00611889: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0061188c: jmp 0x6118e4 */ goto L_006118e4;
L_0061188e:; BB(0x0061188e);
    /* 0061188e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00611891: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00611894: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00611897: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061189e: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006118a2: je 0x6118ba */ if (fZ) goto L_006118ba;
L_006118a4:; BB(0x006118a4);
    /* 006118a4: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006118a7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006118aa: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006118ad: ja 0x6118ba */ if ((!fC&&!fZ)) goto L_006118ba;
L_006118af:; BB(0x006118af);
    /* 006118af: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006118b2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006118b5: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006118b8: jbe 0x6118c0 */ if ((fC||fZ)) goto L_006118c0;
L_006118ba:; BB(0x006118ba);
    /* 006118ba: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6118c0u); call_ind(t); }
L_006118c0:; BB(0x006118c0);
    /* 006118c0: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006118c3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006118c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006118c9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006118cc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006118cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006118d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006118d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006118d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006118d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006118d8: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 006118db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006118dc: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006118df: call 0x611ae0 */ r_esp -= 4; W32(r_esp, 0x6118e4u); f_00611ae0();
L_006118e4:; BB(0x006118e4);
    /* 006118e4: mov esp, ebp */ r_esp = r_ebp;
    /* 006118e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006118e7: ret 4 */ FN_RET(0x006117e0); r_esp += 8; return;
}

void f_006118f0(void) /* sub_6118F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006118f0);
    /* 006118f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006118f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006118f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006118f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006118f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006118fa: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006118fd: je 0x61190b */ if (fZ) goto L_0061190b;
L_006118ff:; BB(0x006118ff);
    /* 006118ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611902: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00611905: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00611907: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611909: je 0x611911 */ if (fZ) goto L_00611911;
L_0061190b:; BB(0x0061190b);
    /* 0061190b: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611911u); call_ind(t); }
L_00611911:; BB(0x00611911);
    /* 00611911: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611914: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00611917: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0061191a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061191c: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061191f: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00611922: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 00611924: mov esp, ebp */ r_esp = r_ebp;
    /* 00611926: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611927: ret 4 */ FN_RET(0x006118f0); r_esp += 8; return;
}

void f_00611930(void) /* sub_611930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00611930);
    /* 00611930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611931: mov ebp, esp */ r_ebp = r_esp;
    /* 00611933: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00611939: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0061193c: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0061193f: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611943: jne 0x61194e */ if (!fZ) goto L_0061194e;
L_00611945:; BB(0x00611945);
    /* 00611945: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0061194c: jmp 0x611960 */ goto L_00611960;
L_0061194e:; BB(0x0061194e);
    /* 0061194e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611951: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611954: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00611957: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061195a: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0061195d: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
L_00611960:; BB(0x00611960);
    /* 00611960: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00611963: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611966: jae 0x6119ee */ if (!fC) goto L_006119ee;
L_0061196c:; BB(0x0061196c);
    /* 0061196c: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0061196f: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611973: jne 0x61197e */ if (!fZ) goto L_0061197e;
L_00611975:; BB(0x00611975);
    /* 00611975: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0061197c: jmp 0x611990 */ goto L_00611990;
L_0061197e:; BB(0x0061197e);
    /* 0061197e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611981: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611984: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00611987: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061198a: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0061198d: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
L_00611990:; BB(0x00611990);
    /* 00611990: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611993: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00611996: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00611999: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006119a0: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006119a4: je 0x6119bc */ if (fZ) goto L_006119bc;
L_006119a6:; BB(0x006119a6);
    /* 006119a6: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006119a9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006119ac: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006119af: ja 0x6119bc */ if ((!fC&&!fZ)) goto L_006119bc;
L_006119b1:; BB(0x006119b1);
    /* 006119b1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006119b4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006119b7: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006119ba: jbe 0x6119c2 */ if ((fC||fZ)) goto L_006119c2;
L_006119bc:; BB(0x006119bc);
    /* 006119bc: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6119c2u); call_ind(t); }
L_006119c2:; BB(0x006119c2);
    /* 006119c2: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 006119c5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006119c8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006119cb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006119ce: lea edx, [ebp + 0xc] */ r_edx = (u32)(r_ebp+0xcu);
    /* 006119d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006119d2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006119d5: sub eax, dword ptr [ebp - 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006119d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006119d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006119dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006119dd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006119e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006119e1: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006119e4: call 0x5bafc0 */ r_esp -= 4; W32(r_esp, 0x6119e9u); f_005bafc0();
    /* 006119e9: jmp 0x611ada */ goto L_00611ada;
L_006119ee:; BB(0x006119ee);
    /* 006119ee: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 006119f1: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006119f5: jne 0x611a00 */ if (!fZ) goto L_00611a00;
L_006119f7:; BB(0x006119f7);
    /* 006119f7: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006119fe: jmp 0x611a12 */ goto L_00611a12;
L_00611a00:; BB(0x00611a00);
    /* 00611a00: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a03: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a06: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00611a09: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611a0c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00611a0f: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
L_00611a12:; BB(0x00611a12);
    /* 00611a12: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00611a15: cmp ecx, dword ptr [ebp - 0x80] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff80u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611a18: jae 0x611ada */ if (!fC) goto L_00611ada;
L_00611a1e:; BB(0x00611a1e);
    /* 00611a1e: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a21: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00611a24: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00611a27: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00611a2e: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611a32: je 0x611a4a */ if (fZ) goto L_00611a4a;
L_00611a34:; BB(0x00611a34);
    /* 00611a34: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a37: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00611a3a: cmp edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611a3d: ja 0x611a4a */ if ((!fC&&!fZ)) goto L_00611a4a;
L_00611a3f:; BB(0x00611a3f);
    /* 00611a3f: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a42: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00611a45: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611a48: jbe 0x611a50 */ if ((fC||fZ)) goto L_00611a50;
L_00611a4a:; BB(0x00611a4a);
    /* 00611a4a: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611a50u); call_ind(t); }
L_00611a50:; BB(0x00611a50);
    /* 00611a50: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a53: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00611a56: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00611a59: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00611a5c: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a5f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00611a62: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00611a65: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00611a6c: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611a70: je 0x611a88 */ if (fZ) goto L_00611a88;
L_00611a72:; BB(0x00611a72);
    /* 00611a72: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a75: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00611a78: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611a7b: ja 0x611a88 */ if ((!fC&&!fZ)) goto L_00611a88;
L_00611a7d:; BB(0x00611a7d);
    /* 00611a7d: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a80: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00611a83: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611a86: jbe 0x611a8e */ if ((fC||fZ)) goto L_00611a8e;
L_00611a88:; BB(0x00611a88);
    /* 00611a88: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611a8eu); call_ind(t); }
L_00611a8e:; BB(0x00611a8e);
    /* 00611a8e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611a91: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00611a94: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00611a97: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00611a9a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00611a9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00611aa0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00611aa3: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00611aa6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00611aa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611aaa: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 00611aad: call 0x5beeb0 */ r_esp -= 4; W32(r_esp, 0x611ab2u); f_005beeb0();
    /* 00611ab2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00611ab5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00611ab8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00611abb: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00611abe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00611ac1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611ac2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00611ac5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611ac6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00611ac9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611aca: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611acd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611ace: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00611ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611ad2: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00611ad5: call 0x5bc490 */ r_esp -= 4; W32(r_esp, 0x611adau); f_005bc490();
L_00611ada:; BB(0x00611ada);
    /* 00611ada: mov esp, ebp */ r_esp = r_ebp;
    /* 00611adc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611add: ret 8 */ FN_RET(0x00611930); r_esp += 12; return;
}

void f_00611ae0(void) /* sub_611AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00611ae0);
    /* 00611ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00611ae3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00611ae6: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00611ae9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611aec: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611af0: jne 0x611afb */ if (!fZ) goto L_00611afb;
L_00611af2:; BB(0x00611af2);
    /* 00611af2: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00611af9: jmp 0x611b12 */ goto L_00611b12;
L_00611afb:; BB(0x00611afb);
    /* 00611afb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611afe: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611b01: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00611b04: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611b07: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611b08: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00611b0d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00611b0d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00611b0d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00611b0f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00611b12:; BB(0x00611b12);
    /* 00611b12: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611b16: jne 0x611b21 */ if (!fZ) goto L_00611b21;
L_00611b18:; BB(0x00611b18);
    /* 00611b18: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00611b1f: jmp 0x611b84 */ goto L_00611b84;
L_00611b21:; BB(0x00611b21);
    /* 00611b21: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611b24: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00611b27: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00611b2a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00611b31: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611b35: je 0x611b4d */ if (fZ) goto L_00611b4d;
L_00611b37:; BB(0x00611b37);
    /* 00611b37: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611b3a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00611b3d: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611b40: ja 0x611b4d */ if ((!fC&&!fZ)) goto L_00611b4d;
L_00611b42:; BB(0x00611b42);
    /* 00611b42: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611b45: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00611b48: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611b4b: jbe 0x611b53 */ if ((fC||fZ)) goto L_00611b53;
L_00611b4d:; BB(0x00611b4d);
    /* 00611b4d: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611b53u); call_ind(t); }
L_00611b53:; BB(0x00611b53);
    /* 00611b53: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611b56: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00611b59: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00611b5c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00611b5f: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611b63: je 0x611b6d */ if (fZ) goto L_00611b6d;
L_00611b65:; BB(0x00611b65);
    /* 00611b65: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00611b68: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611b6b: je 0x611b73 */ if (fZ) goto L_00611b73;
L_00611b6d:; BB(0x00611b6d);
    /* 00611b6d: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611b73u); call_ind(t); }
L_00611b73:; BB(0x00611b73);
    /* 00611b73: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00611b76: sub eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611b79: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611b7a: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00611b7f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00611b7f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00611b7f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00611b81: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00611b84:; BB(0x00611b84);
    /* 00611b84: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00611b87: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00611b8a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00611b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611b8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00611b90: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00611b93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611b94: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00611b97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611b98: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611b9b: call 0x611ca0 */ r_esp -= 4; W32(r_esp, 0x611ba0u); f_00611ca0();
    /* 00611ba0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611ba3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00611ba6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00611ba9: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00611bb0: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611bb4: je 0x611bcc */ if (fZ) goto L_00611bcc;
L_00611bb6:; BB(0x00611bb6);
    /* 00611bb6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611bb9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00611bbc: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611bbf: ja 0x611bcc */ if ((!fC&&!fZ)) goto L_00611bcc;
L_00611bc1:; BB(0x00611bc1);
    /* 00611bc1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611bc4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00611bc7: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611bca: jbe 0x611bd2 */ if ((fC||fZ)) goto L_00611bd2;
L_00611bcc:; BB(0x00611bcc);
    /* 00611bcc: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611bd2u); call_ind(t); }
L_00611bd2:; BB(0x00611bd2);
    /* 00611bd2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00611bd5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00611bd8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00611bdb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00611bde: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00611be1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00611be4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00611be7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00611bea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611bed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611bee: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00611bf1: call 0x612780 */ r_esp -= 4; W32(r_esp, 0x611bf6u); f_00612780();
    /* 00611bf6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00611bf9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00611bfc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00611bff: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00611c01: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00611c04: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00611c07: mov esp, ebp */ r_esp = r_ebp;
    /* 00611c09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611c0a: ret 0x10 */ FN_RET(0x00611ae0); r_esp += 20; return;
}

void f_00611c10(void) /* sub_611C10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00611c10);
    /* 00611c10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611c11: mov ebp, esp */ r_ebp = r_esp;
    /* 00611c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611c14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00611c17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c1a: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611c1d: jne 0x611c25 */ if (!fZ) goto L_00611c25;
L_00611c1f:; BB(0x00611c1f);
    /* 00611c1f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611c25u); call_ind(t); }
L_00611c25:; BB(0x00611c25);
    /* 00611c25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c28: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00611c2a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c2d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00611c30: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611c33: jb 0x611c3b */ if (fC) goto L_00611c3b;
L_00611c35:; BB(0x00611c35);
    /* 00611c35: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611c3bu); call_ind(t); }
L_00611c3b:; BB(0x00611c3b);
    /* 00611c3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c3e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00611c41: mov esp, ebp */ r_esp = r_ebp;
    /* 00611c43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611c44: ret  */ FN_RET(0x00611c10); r_esp += 4; return;
}

void f_00611c50(void) /* sub_611C50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00611c50);
    /* 00611c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611c51: mov ebp, esp */ r_ebp = r_esp;
    /* 00611c53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611c54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00611c57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c5a: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611c5d: jne 0x611c65 */ if (!fZ) goto L_00611c65;
L_00611c5f:; BB(0x00611c5f);
    /* 00611c5f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611c65u); call_ind(t); }
L_00611c65:; BB(0x00611c65);
    /* 00611c65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c68: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00611c6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c6d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00611c70: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611c73: jb 0x611c7b */ if (fC) goto L_00611c7b;
L_00611c75:; BB(0x00611c75);
    /* 00611c75: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x611c7bu); call_ind(t); }
L_00611c7b:; BB(0x00611c7b);
    /* 00611c7b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c7e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00611c81: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611c84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c87: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00611c8a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00611c8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00611c8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00611c90: ret  */ FN_RET(0x00611c50); r_esp += 4; return;
}

void f_00611ca0(void) /* sub_611CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00611ca0);
    /* 00611ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00611ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00611ca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00611ca5: push 0x6aaf88 */ { u32 v = 0x6aaf88u; r_esp -= 4; W32(r_esp, v); }
    /* 00611caa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00611cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611cb1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611cb2: sub esp, 0x2ac */ {  u32 a = r_esp; u32 b = 0x2acu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00611cb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00611cb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00611cba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00611cbb: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00611cc0: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00611cc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611cc3: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00611cc6: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00611ccc: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00611ccf: mov dword ptr [ebp - 0x294], ecx */ W32((u32)(r_ebp+0xfffffd6cu), r_ecx);
    /* 00611cd5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00611cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611cd9: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00611cdc: call 0x610570 */ r_esp -= 4; W32(r_esp, 0x611ce1u); f_00610570();
    /* 00611ce1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00611ce8: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611cee: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611cf2: jne 0x611d00 */ if (!fZ) goto L_00611d00;
L_00611cf4:; BB(0x00611cf4);
    /* 00611cf4: mov dword ptr [ebp - 0x298], 0 */ W32((u32)(r_ebp+0xfffffd68u), 0x0u);
    /* 00611cfe: jmp 0x611d22 */ goto L_00611d22;
L_00611d00:; BB(0x00611d00);
    /* 00611d00: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611d06: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611d0c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00611d0f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00611d12: mov eax, ecx */ r_eax = r_ecx;
    /* 00611d14: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611d15: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00611d1a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00611d1a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00611d1a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00611d1c: mov dword ptr [ebp - 0x298], eax */ W32((u32)(r_ebp+0xfffffd68u), r_eax);
L_00611d22:; BB(0x00611d22);
    /* 00611d22: mov edx, dword ptr [ebp - 0x298] */ r_edx = R32((u32)(r_ebp+0xfffffd68u));
    /* 00611d28: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00611d2b: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611d2f: jne 0x611d36 */ if (!fZ) goto L_00611d36;
L_00611d31:; BB(0x00611d31);
    /* 00611d31: jmp 0x612661 */ goto L_00612661;
L_00611d36:; BB(0x00611d36);
    /* 00611d36: mov dword ptr [ebp - 0x6c], 0x38e38e3 */ W32((u32)(r_ebp+0xffffff94u), 0x38e38e3u);
    /* 00611d3d: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611d41: jbe 0x611d4e */ if ((fC||fZ)) goto L_00611d4e;
L_00611d43:; BB(0x00611d43);
    /* 00611d43: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00611d46: mov dword ptr [ebp - 0x29c], eax */ W32((u32)(r_ebp+0xfffffd64u), r_eax);
    /* 00611d4c: jmp 0x611d58 */ goto L_00611d58;
L_00611d4e:; BB(0x00611d4e);
    /* 00611d4e: mov dword ptr [ebp - 0x29c], 1 */ W32((u32)(r_ebp+0xfffffd64u), 0x1u);
L_00611d58:; BB(0x00611d58);
    /* 00611d58: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611d5e: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611d62: jne 0x611d70 */ if (!fZ) goto L_00611d70;
L_00611d64:; BB(0x00611d64);
    /* 00611d64: mov dword ptr [ebp - 0x2a0], 0 */ W32((u32)(r_ebp+0xfffffd60u), 0x0u);
    /* 00611d6e: jmp 0x611d92 */ goto L_00611d92;
L_00611d70:; BB(0x00611d70);
    /* 00611d70: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611d76: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611d7c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00611d7f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00611d82: mov eax, ecx */ r_eax = r_ecx;
    /* 00611d84: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611d85: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00611d8a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00611d8a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00611d8a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00611d8c: mov dword ptr [ebp - 0x2a0], eax */ W32((u32)(r_ebp+0xfffffd60u), r_eax);
L_00611d92:; BB(0x00611d92);
    /* 00611d92: mov edx, dword ptr [ebp - 0x29c] */ r_edx = R32((u32)(r_ebp+0xfffffd64u));
    /* 00611d98: sub edx, dword ptr [ebp - 0x2a0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd60u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00611d9e: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611da1: jae 0x611dad */ if (!fC) goto L_00611dad;
L_00611da3:; BB(0x00611da3);
    /* 00611da3: call 0x6126e0 */ r_esp -= 4; W32(r_esp, 0x611da8u); f_006126e0();
    /* 00611da8: jmp 0x612661 */ goto L_00612661;
L_00611dad:; BB(0x00611dad);
    /* 00611dad: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611db3: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611db7: jne 0x611dc5 */ if (!fZ) goto L_00611dc5;
L_00611db9:; BB(0x00611db9);
    /* 00611db9: mov dword ptr [ebp - 0x2a4], 0 */ W32((u32)(r_ebp+0xfffffd5cu), 0x0u);
    /* 00611dc3: jmp 0x611de5 */ goto L_00611de5;
L_00611dc5:; BB(0x00611dc5);
    /* 00611dc5: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611dcb: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611dd1: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00611dd4: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611dd7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611dd8: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00611ddd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00611ddd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00611ddd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00611ddf: mov dword ptr [ebp - 0x2a4], eax */ W32((u32)(r_ebp+0xfffffd5cu), r_eax);
L_00611de5:; BB(0x00611de5);
    /* 00611de5: mov edx, dword ptr [ebp - 0x2a4] */ r_edx = R32((u32)(r_ebp+0xfffffd5cu));
    /* 00611deb: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00611dee: cmp dword ptr [ebp - 0x5c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611df1: jae 0x6122b1 */ if (!fC) goto L_006122b1;
L_00611df7:; BB(0x00611df7);
    /* 00611df7: mov dword ptr [ebp - 0xb4], 0x38e38e3 */ W32((u32)(r_ebp+0xffffff4cu), 0x38e38e3u);
    /* 00611e01: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00611e08: jbe 0x611e18 */ if ((fC||fZ)) goto L_00611e18;
L_00611e0a:; BB(0x00611e0a);
    /* 00611e0a: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 00611e10: mov dword ptr [ebp - 0x2a8], eax */ W32((u32)(r_ebp+0xfffffd58u), r_eax);
    /* 00611e16: jmp 0x611e22 */ goto L_00611e22;
L_00611e18:; BB(0x00611e18);
    /* 00611e18: mov dword ptr [ebp - 0x2a8], 1 */ W32((u32)(r_ebp+0xfffffd58u), 0x1u);
L_00611e22:; BB(0x00611e22);
    /* 00611e22: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00611e25: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00611e27: mov edx, dword ptr [ebp - 0x2a8] */ r_edx = R32((u32)(r_ebp+0xfffffd58u));
    /* 00611e2d: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00611e2f: cmp edx, dword ptr [ebp - 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611e32: jae 0x611e40 */ if (!fC) goto L_00611e40;
L_00611e34:; BB(0x00611e34);
    /* 00611e34: mov dword ptr [ebp - 0x2ac], 0 */ W32((u32)(r_ebp+0xfffffd54u), 0x0u);
    /* 00611e3e: jmp 0x611e4e */ goto L_00611e4e;
L_00611e40:; BB(0x00611e40);
    /* 00611e40: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00611e43: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00611e45: add eax, dword ptr [ebp - 0x5c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611e48: mov dword ptr [ebp - 0x2ac], eax */ W32((u32)(r_ebp+0xfffffd54u), r_eax);
L_00611e4e:; BB(0x00611e4e);
    /* 00611e4e: mov ecx, dword ptr [ebp - 0x2ac] */ r_ecx = R32((u32)(r_ebp+0xfffffd54u));
    /* 00611e54: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00611e57: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611e5d: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611e61: jne 0x611e6f */ if (!fZ) goto L_00611e6f;
L_00611e63:; BB(0x00611e63);
    /* 00611e63: mov dword ptr [ebp - 0x2b0], 0 */ W32((u32)(r_ebp+0xfffffd50u), 0x0u);
    /* 00611e6d: jmp 0x611e8f */ goto L_00611e8f;
L_00611e6f:; BB(0x00611e6f);
    /* 00611e6f: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611e75: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611e7b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00611e7e: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611e81: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611e82: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00611e87: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00611e87, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00611e87, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00611e89: mov dword ptr [ebp - 0x2b0], eax */ W32((u32)(r_ebp+0xfffffd50u), r_eax);
L_00611e8f:; BB(0x00611e8f);
    /* 00611e8f: mov edx, dword ptr [ebp - 0x2b0] */ r_edx = R32((u32)(r_ebp+0xfffffd50u));
    /* 00611e95: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00611e98: cmp dword ptr [ebp - 0x5c], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00611e9b: jae 0x611ee1 */ if (!fC) goto L_00611ee1;
L_00611e9d:; BB(0x00611e9d);
    /* 00611e9d: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611ea3: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00611ea7: jne 0x611eb5 */ if (!fZ) goto L_00611eb5;
L_00611ea9:; BB(0x00611ea9);
    /* 00611ea9: mov dword ptr [ebp - 0x2b4], 0 */ W32((u32)(r_ebp+0xfffffd4cu), 0x0u);
    /* 00611eb3: jmp 0x611ed5 */ goto L_00611ed5;
L_00611eb5:; BB(0x00611eb5);
    /* 00611eb5: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611ebb: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611ec1: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00611ec4: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00611ec7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00611ec8: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00611ecd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00611ecd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00611ecd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00611ecf: mov dword ptr [ebp - 0x2b4], eax */ W32((u32)(r_ebp+0xfffffd4cu), r_eax);
L_00611ed5:; BB(0x00611ed5);
    /* 00611ed5: mov edx, dword ptr [ebp - 0x2b4] */ r_edx = R32((u32)(r_ebp+0xfffffd4cu));
    /* 00611edb: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00611ede: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
L_00611ee1:; BB(0x00611ee1);
    /* 00611ee1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00611ee3: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00611ee6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611ee7: call 0x68fa30 */ r_esp -= 4; W32(r_esp, 0x611eecu); f_0068fa30();
    /* 00611eec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00611eef: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00611ef2: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00611ef5: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00611ef8: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00611efc: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611f02: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00611f05: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00611f0b: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00611f0e: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 00611f14: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00611f17: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 00611f1d: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 00611f23: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00611f29: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00611f2b: mov byte ptr [ebp - 0xb5], cl */ W8((u32)(r_ebp+0xffffff4bu), (u8)r_ecx);
    /* 00611f31: mov dl, byte ptr [ebp - 0xb7] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff49u))) & 0xffu);
    /* 00611f37: mov byte ptr [ebp - 0xb6], dl */ W8((u32)(r_ebp+0xffffff4au), (u8)r_edx);
    /* 00611f3d: mov eax, dword ptr [ebp - 0xd4] */ r_eax = R32((u32)(r_ebp+0xffffff2cu));
    /* 00611f43: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00611f49: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00611f4f: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 00611f55: mov dl, byte ptr [ebp - 0xb5] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff4bu))) & 0xffu);
    /* 00611f5b: mov byte ptr [ebp - 0xc9], dl */ W8((u32)(r_ebp+0xffffff37u), (u8)r_edx);
    /* 00611f61: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00611f67: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 00611f6d: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611f74: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00611f7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611f7b: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 00611f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611f82: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00611f88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611f89: call 0x612c20 */ r_esp -= 4; W32(r_esp, 0x611f8eu); f_00612c20();
    /* 00611f8e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00611f91: mov dword ptr [ebp - 0x2b8], eax */ W32((u32)(r_ebp+0xfffffd48u), r_eax);
    /* 00611f97: mov edx, dword ptr [ebp - 0x2b8] */ r_edx = R32((u32)(r_ebp+0xfffffd48u));
    /* 00611f9d: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00611fa0: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00611fa3: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00611fa9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00611fab: mov byte ptr [ebp - 0xdd], cl */ W8((u32)(r_ebp+0xffffff23u), (u8)r_ecx);
    /* 00611fb1: mov dl, byte ptr [ebp - 0xdf] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff21u))) & 0xffu);
    /* 00611fb7: mov byte ptr [ebp - 0xde], dl */ W8((u32)(r_ebp+0xffffff22u), (u8)r_edx);
    /* 00611fbd: mov al, byte ptr [ebp - 0xdd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff23u))) & 0xffu);
    /* 00611fc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611fc4: mov cl, byte ptr [ebp - 0xde] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff22u))) & 0xffu);
    /* 00611fca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611fcb: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611fd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611fd2: lea eax, [ebp - 0x58] */ r_eax = (u32)(r_ebp+0xffffffa8u);
    /* 00611fd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00611fd6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00611fd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00611fda: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00611fe0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00611fe1: call 0x612970 */ r_esp -= 4; W32(r_esp, 0x611fe6u); f_00612970();
    /* 00611fe6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00611fe9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00611fec: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00611fef: add eax, dword ptr [ebp - 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffa0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00611ff2: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00611ff5: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00611ffb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00611ffe: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
    /* 00612004: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00612007: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0061200d: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00612013: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 00612019: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0061201c: mov dword ptr [ebp - 0x100], edx */ W32((u32)(r_ebp+0xffffff00u), r_edx);
    /* 00612022: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612024: mov byte ptr [ebp - 0xe5], al */ W8((u32)(r_ebp+0xffffff1bu), (u8)r_eax);
    /* 0061202a: mov cl, byte ptr [ebp - 0xe7] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff19u))) & 0xffu);
    /* 00612030: mov byte ptr [ebp - 0xe6], cl */ W8((u32)(r_ebp+0xffffff1au), (u8)r_ecx);
    /* 00612036: mov edx, dword ptr [ebp - 0x104] */ r_edx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0061203c: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 00612042: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 00612048: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0061204e: mov cl, byte ptr [ebp - 0xe5] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff1bu))) & 0xffu);
    /* 00612054: mov byte ptr [ebp - 0xf9], cl */ W8((u32)(r_ebp+0xffffff07u), (u8)r_ecx);
    /* 0061205a: mov edx, dword ptr [ebp - 0x108] */ r_edx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00612060: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 00612066: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0061206c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061206d: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 00612073: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612074: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 0061207a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061207b: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 00612081: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612082: call 0x612c20 */ r_esp -= 4; W32(r_esp, 0x612087u); f_00612c20();
    /* 00612087: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061208a: jmp 0x612138 */ goto L_00612138;
L_00612138:; BB(0x00612138);
    /* 00612138: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061213f: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612145: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612149: jne 0x612157 */ if (!fZ) goto L_00612157;
L_0061214b:; BB(0x0061214b);
    /* 0061214b: mov dword ptr [ebp - 0x2bc], 0 */ W32((u32)(r_ebp+0xfffffd44u), 0x0u);
    /* 00612155: jmp 0x612177 */ goto L_00612177;
L_00612157:; BB(0x00612157);
    /* 00612157: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0061215d: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612163: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00612166: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00612169: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061216a: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 0061216f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0061216f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0061216f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00612171: mov dword ptr [ebp - 0x2bc], eax */ W32((u32)(r_ebp+0xfffffd44u), r_eax);
L_00612177:; BB(0x00612177);
    /* 00612177: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0061217a: add edx, dword ptr [ebp - 0x2bc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffd44u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00612180: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 00612183: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612189: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061218d: je 0x61227c */ if (fZ) goto L_0061227c;
L_00612193:; BB(0x00612193);
    /* 00612193: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612199: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0061219c: mov dword ptr [ebp - 0x15c], edx */ W32((u32)(r_ebp+0xfffffea4u), r_edx);
    /* 006121a2: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 006121a8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006121ab: mov dword ptr [ebp - 0x158], ecx */ W32((u32)(r_ebp+0xfffffea8u), r_ecx);
    /* 006121b1: mov edx, dword ptr [ebp - 0x15c] */ r_edx = R32((u32)(r_ebp+0xfffffea4u));
    /* 006121b7: mov dword ptr [ebp - 0x154], edx */ W32((u32)(r_ebp+0xfffffeacu), r_edx);
    /* 006121bd: mov eax, dword ptr [ebp - 0x158] */ r_eax = R32((u32)(r_ebp+0xfffffea8u));
    /* 006121c3: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 006121c9: mov cl, byte ptr [ebp - 0x126] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffedau))) & 0xffu);
    /* 006121cf: mov byte ptr [ebp - 0x125], cl */ W8((u32)(r_ebp+0xfffffedbu), (u8)r_ecx);
    /* 006121d5: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 006121db: mov dword ptr [ebp - 0x14c], edx */ W32((u32)(r_ebp+0xfffffeb4u), r_edx);
    /* 006121e1: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 006121e7: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 006121ed: jmp 0x6121fe */ goto L_006121fe;
L_006121ef:; BB(0x006121ef);
    /* 006121ef: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 006121f5: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006121f8: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
L_006121fe:; BB(0x006121fe);
    /* 006121fe: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00612204: cmp edx, dword ptr [ebp - 0x14c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffeb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061220a: je 0x61223e */ if (fZ) goto L_0061223e;
L_0061220c:; BB(0x0061220c);
    /* 0061220c: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00612212: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00612215: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 0061221b: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 00612221: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x612226u); f_005be450();
    /* 00612226: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00612228: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0061222b: je 0x61223c */ if (fZ) goto L_0061223c;
L_0061222d:; BB(0x0061222d);
    /* 0061222d: mov edx, dword ptr [ebp - 0x148] */ r_edx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 00612233: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612234: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x612239u); f_00686cae();
    /* 00612239: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061223c:; BB(0x0061223c);
    /* 0061223c: jmp 0x6121ef */ goto L_006121ef;
L_0061223e:; BB(0x0061223e);
    /* 0061223e: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612244: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0061224a: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0061224d: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00612250: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00612251: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00612256: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00612256, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00612256, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00612258: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 0061225e: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612264: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00612267: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 0061226d: mov ecx, dword ptr [ebp - 0x160] */ r_ecx = R32((u32)(r_ebp+0xfffffea0u));
    /* 00612273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612274: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x612279u); f_00686cae();
    /* 00612279: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061227c:; BB(0x0061227c);
    /* 0061227c: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0061227f: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00612282: add edx, dword ptr [ebp - 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00612285: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0061228b: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0061228e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00612291: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00612294: add ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00612297: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0061229d: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 006122a0: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 006122a6: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006122a9: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 006122ac: jmp 0x612661 */ goto L_00612661;
L_006122b1:; BB(0x006122b1);
    /* 006122b1: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 006122b7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006122ba: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006122bd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006122be: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 006122c3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x006122c3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006122c3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006122c5: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006122c8: jae 0x612536 */ if (!fC) goto L_00612536;
L_006122ce:; BB(0x006122ce);
    /* 006122ce: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 006122d4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006122d7: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 006122dd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006122e0: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006122e3: add ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006122e6: mov dword ptr [ebp - 0x188], ecx */ W32((u32)(r_ebp+0xfffffe78u), r_ecx);
    /* 006122ec: mov edx, dword ptr [ebp - 0x18c] */ r_edx = R32((u32)(r_ebp+0xfffffe74u));
    /* 006122f2: mov dword ptr [ebp - 0x184], edx */ W32((u32)(r_ebp+0xfffffe7cu), r_edx);
    /* 006122f8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006122fb: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 00612301: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00612303: mov byte ptr [ebp - 0x165], cl */ W8((u32)(r_ebp+0xfffffe9bu), (u8)r_ecx);
    /* 00612309: mov dl, byte ptr [ebp - 0x167] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe99u))) & 0xffu);
    /* 0061230f: mov byte ptr [ebp - 0x166], dl */ W8((u32)(r_ebp+0xfffffe9au), (u8)r_edx);
    /* 00612315: mov eax, dword ptr [ebp - 0x184] */ r_eax = R32((u32)(r_ebp+0xfffffe7cu));
    /* 0061231b: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 00612321: mov ecx, dword ptr [ebp - 0x180] */ r_ecx = R32((u32)(r_ebp+0xfffffe80u));
    /* 00612327: mov dword ptr [ebp - 0x174], ecx */ W32((u32)(r_ebp+0xfffffe8cu), r_ecx);
    /* 0061232d: mov dl, byte ptr [ebp - 0x165] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe9bu))) & 0xffu);
    /* 00612333: mov byte ptr [ebp - 0x179], dl */ W8((u32)(r_ebp+0xfffffe87u), (u8)r_edx);
    /* 00612339: mov eax, dword ptr [ebp - 0x188] */ r_eax = R32((u32)(r_ebp+0xfffffe78u));
    /* 0061233f: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 00612345: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0061234b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061234c: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 00612352: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612353: mov eax, dword ptr [ebp - 0x16c] */ r_eax = R32((u32)(r_ebp+0xfffffe94u));
    /* 00612359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061235a: mov ecx, dword ptr [ebp - 0x174] */ r_ecx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 00612360: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612361: call 0x612c20 */ r_esp -= 4; W32(r_esp, 0x612366u); f_00612c20();
    /* 00612366: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612369: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0061236d: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612373: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00612376: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00612379: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0061237a: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 0061237f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0061237f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0061237f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00612381: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00612384: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00612386: mov dword ptr [ebp - 0x19c], edx */ W32((u32)(r_ebp+0xfffffe64u), r_edx);
    /* 0061238c: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612392: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00612395: mov dword ptr [ebp - 0x198], ecx */ W32((u32)(r_ebp+0xfffffe68u), r_ecx);
    /* 0061239b: mov edx, dword ptr [ebp - 0x198] */ r_edx = R32((u32)(r_ebp+0xfffffe68u));
    /* 006123a1: mov dword ptr [ebp - 0x194], edx */ W32((u32)(r_ebp+0xfffffe6cu), r_edx);
    /* 006123a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006123a9: mov byte ptr [ebp - 0x18d], al */ W8((u32)(r_ebp+0xfffffe73u), (u8)r_eax);
    /* 006123af: mov cl, byte ptr [ebp - 0x18f] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe71u))) & 0xffu);
    /* 006123b5: mov byte ptr [ebp - 0x18e], cl */ W8((u32)(r_ebp+0xfffffe72u), (u8)r_ecx);
    /* 006123bb: mov dl, byte ptr [ebp - 0x18d] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe73u))) & 0xffu);
    /* 006123c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006123c2: mov al, byte ptr [ebp - 0x18e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe72u))) & 0xffu);
    /* 006123c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006123c9: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 006123cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006123d0: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 006123d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006123d4: mov eax, dword ptr [ebp - 0x19c] */ r_eax = R32((u32)(r_ebp+0xfffffe64u));
    /* 006123da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006123db: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 006123e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006123e2: call 0x612970 */ r_esp -= 4; W32(r_esp, 0x6123e7u); f_00612970();
    /* 006123e7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006123ea: jmp 0x6124aa */ goto L_006124aa;
L_006124aa:; BB(0x006124aa);
    /* 006124aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006124b1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006124b4: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006124b7: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 006124bd: add edx, dword ptr [eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006124c0: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 006124c6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006124c9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006124cc: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006124cf: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 006124d5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006124d8: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006124da: mov dword ptr [ebp - 0x1e8], ecx */ W32((u32)(r_ebp+0xfffffe18u), r_ecx);
    /* 006124e0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006124e3: mov dword ptr [ebp - 0x1e4], edx */ W32((u32)(r_ebp+0xfffffe1cu), r_edx);
    /* 006124e9: mov eax, dword ptr [ebp - 0x1e8] */ r_eax = R32((u32)(r_ebp+0xfffffe18u));
    /* 006124ef: mov dword ptr [ebp - 0x1d8], eax */ W32((u32)(r_ebp+0xfffffe28u), r_eax);
    /* 006124f5: mov ecx, dword ptr [ebp - 0x1e4] */ r_ecx = R32((u32)(r_ebp+0xfffffe1cu));
    /* 006124fb: mov dword ptr [ebp - 0x1e0], ecx */ W32((u32)(r_ebp+0xfffffe20u), r_ecx);
    /* 00612501: jmp 0x612512 */ goto L_00612512;
L_00612503:; BB(0x00612503);
    /* 00612503: mov edx, dword ptr [ebp - 0x1e0] */ r_edx = R32((u32)(r_ebp+0xfffffe20u));
    /* 00612509: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061250c: mov dword ptr [ebp - 0x1e0], edx */ W32((u32)(r_ebp+0xfffffe20u), r_edx);
L_00612512:; BB(0x00612512);
    /* 00612512: mov eax, dword ptr [ebp - 0x1e0] */ r_eax = R32((u32)(r_ebp+0xfffffe20u));
    /* 00612518: cmp eax, dword ptr [ebp - 0x1d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffe28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061251e: je 0x612531 */ if (fZ) goto L_00612531;
L_00612520:; BB(0x00612520);
    /* 00612520: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 00612523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612524: mov ecx, dword ptr [ebp - 0x1e0] */ r_ecx = R32((u32)(r_ebp+0xfffffe20u));
    /* 0061252a: call 0x610650 */ r_esp -= 4; W32(r_esp, 0x61252fu); f_00610650();
    /* 0061252f: jmp 0x612503 */ goto L_00612503;
L_00612531:; BB(0x00612531);
    /* 00612531: jmp 0x612661 */ goto L_00612661;
L_00612536:; BB(0x00612536);
    /* 00612536: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0061253c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0061253f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00612542: mov ecx, dword ptr [ebp - 0x294] */ r_ecx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612548: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0061254b: mov dword ptr [ebp - 0x220], edx */ W32((u32)(r_ebp+0xfffffde0u), r_edx);
    /* 00612551: mov eax, dword ptr [ebp - 0x294] */ r_eax = R32((u32)(r_ebp+0xfffffd6cu));
    /* 00612557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612558: mov ecx, dword ptr [ebp - 0x220] */ r_ecx = R32((u32)(r_ebp+0xfffffde0u));
    /* 0061255e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061255f: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00612562: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612563: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00612566: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00612569: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0061256c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061256e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061256f: call 0x612a70 */ r_esp -= 4; W32(r_esp, 0x612574u); f_00612a70();
    /* 00612574: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612577: mov edx, dword ptr [ebp - 0x294] */ r_edx = R32((u32)(r_ebp+0xfffffd6cu));
    /* 0061257d: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00612580: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 00612583: mov dword ptr [ebp - 0x258], eax */ W32((u32)(r_ebp+0xfffffda8u), r_eax);
    /* 00612589: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061258c: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061258f: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00612592: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00612594: mov dword ptr [ebp - 0x254], edx */ W32((u32)(r_ebp+0xfffffdacu), r_edx);
    /* 0061259a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061259d: mov dword ptr [ebp - 0x250], eax */ W32((u32)(r_ebp+0xfffffdb0u), r_eax);
    /* 006125a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006125a5: mov byte ptr [ebp - 0x221], cl */ W8((u32)(r_ebp+0xfffffddfu), (u8)r_ecx);
    /* 006125ab: mov dl, byte ptr [ebp - 0x224] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffddcu))) & 0xffu);
    /* 006125b1: mov byte ptr [ebp - 0x222], dl */ W8((u32)(r_ebp+0xfffffddeu), (u8)r_edx);
    /* 006125b7: mov eax, dword ptr [ebp - 0x254] */ r_eax = R32((u32)(r_ebp+0xfffffdacu));
    /* 006125bd: mov dword ptr [ebp - 0x22c], eax */ W32((u32)(r_ebp+0xfffffdd4u), r_eax);
    /* 006125c3: mov ecx, dword ptr [ebp - 0x250] */ r_ecx = R32((u32)(r_ebp+0xfffffdb0u));
    /* 006125c9: mov dword ptr [ebp - 0x234], ecx */ W32((u32)(r_ebp+0xfffffdccu), r_ecx);
    /* 006125cf: mov dl, byte ptr [ebp - 0x221] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffddfu))) & 0xffu);
    /* 006125d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006125d6: mov al, byte ptr [ebp - 0x222] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffddeu))) & 0xffu);
    /* 006125dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006125dd: mov cl, byte ptr [ebp - 0x223] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffdddu))) & 0xffu);
    /* 006125e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006125e4: mov edx, dword ptr [ebp - 0x258] */ r_edx = R32((u32)(r_ebp+0xfffffda8u));
    /* 006125ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006125eb: mov eax, dword ptr [ebp - 0x22c] */ r_eax = R32((u32)(r_ebp+0xfffffdd4u));
    /* 006125f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006125f2: mov ecx, dword ptr [ebp - 0x234] */ r_ecx = R32((u32)(r_ebp+0xfffffdccu));
    /* 006125f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006125f9: call 0x612af0 */ r_esp -= 4; W32(r_esp, 0x6125feu); f_00612af0();
    /* 006125fe: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612601: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00612604: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00612607: add edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061260a: mov dword ptr [ebp - 0x270], edx */ W32((u32)(r_ebp+0xfffffd90u), r_edx);
    /* 00612610: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00612613: mov dword ptr [ebp - 0x26c], eax */ W32((u32)(r_ebp+0xfffffd94u), r_eax);
    /* 00612619: mov ecx, dword ptr [ebp - 0x270] */ r_ecx = R32((u32)(r_ebp+0xfffffd90u));
    /* 0061261f: mov dword ptr [ebp - 0x260], ecx */ W32((u32)(r_ebp+0xfffffda0u), r_ecx);
    /* 00612625: mov edx, dword ptr [ebp - 0x26c] */ r_edx = R32((u32)(r_ebp+0xfffffd94u));
    /* 0061262b: mov dword ptr [ebp - 0x268], edx */ W32((u32)(r_ebp+0xfffffd98u), r_edx);
    /* 00612631: jmp 0x612642 */ goto L_00612642;
L_00612633:; BB(0x00612633);
    /* 00612633: mov eax, dword ptr [ebp - 0x268] */ r_eax = R32((u32)(r_ebp+0xfffffd98u));
    /* 00612639: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061263c: mov dword ptr [ebp - 0x268], eax */ W32((u32)(r_ebp+0xfffffd98u), r_eax);
L_00612642:; BB(0x00612642);
    /* 00612642: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 00612648: cmp ecx, dword ptr [ebp - 0x260] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffda0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061264e: je 0x612661 */ if (fZ) goto L_00612661;
L_00612650:; BB(0x00612650);
    /* 00612650: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 00612653: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612654: mov ecx, dword ptr [ebp - 0x268] */ r_ecx = R32((u32)(r_ebp+0xfffffd98u));
    /* 0061265a: call 0x610650 */ r_esp -= 4; W32(r_esp, 0x61265fu); f_00610650();
    /* 0061265f: jmp 0x612633 */ goto L_00612633;
L_00612661:; BB(0x00612661);
    /* 00612661: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00612668: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0061266b: mov dword ptr [ebp - 0x290], eax */ W32((u32)(r_ebp+0xfffffd70u), r_eax);
    /* 00612671: mov ecx, dword ptr [ebp - 0x290] */ r_ecx = R32((u32)(r_ebp+0xfffffd70u));
    /* 00612677: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x61267cu); f_005be450();
    /* 0061267c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061267f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00612686: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612687: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00612688: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00612689: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061268a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061268c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061268d: ret 0x10 */ FN_RET(0x00611ca0); r_esp += 20; return;
}

