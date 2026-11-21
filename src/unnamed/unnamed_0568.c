#include "protos.h"

void f_00568250(void) /* sub_568250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568250);
    /* 00568250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568251: mov ebp, esp */ r_ebp = r_esp;
    /* 00568253: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568256: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00568259: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056825c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056825f: cmp dword ptr [ebp - 8], 0x31222e */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x31222eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568266: je 0x56827c */ if (fZ) goto L_0056827c;
L_00568268:; BB(0x00568268);
    /* 00568268: cmp dword ptr [ebp - 8], 0x312233 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x312233u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056826f: je 0x568280 */ if (fZ) goto L_00568280;
L_00568271:; BB(0x00568271);
    /* 00568271: cmp dword ptr [ebp - 8], 0x312234 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x312234u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568278: je 0x568287 */ if (fZ) goto L_00568287;
L_0056827a:; BB(0x0056827a);
    /* 0056827a: jmp 0x56828e */ goto L_0056828e;
L_0056827c:; BB(0x0056827c);
    /* 0056827c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056827e: jmp 0x568291 */ goto L_00568291;
L_00568280:; BB(0x00568280);
    /* 00568280: mov eax, 5 */ r_eax = 0x5u;
    /* 00568285: jmp 0x568291 */ goto L_00568291;
L_00568287:; BB(0x00568287);
    /* 00568287: mov eax, 0xa */ r_eax = 0xau;
    /* 0056828c: jmp 0x568291 */ goto L_00568291;
L_0056828e:; BB(0x0056828e);
    /* 0056828e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00568291:; BB(0x00568291);
    /* 00568291: mov esp, ebp */ r_esp = r_ebp;
    /* 00568293: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568294: ret 4 */ FN_RET(0x00568250); r_esp += 8; return;
}

void f_005682a0(void) /* sub_5682A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005682a0);
    /* 005682a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005682a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005682a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005682a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005682a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005682ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005682af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005682b2: sub ecx, 0x312235 */ {  u32 a = r_ecx; u32 b = 0x312235u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005682b8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005682bb: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005682bf: ja 0x5682ee */ if ((!fC&&!fZ)) goto L_005682ee;
L_005682c1:; BB(0x005682c1);
    /* 005682c1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005682c4: jmp dword ptr [edx*4 + 0x5682f8] */ { u32 t = R32((u32)(r_edx*4+0x5682f8u)); switch (t) { case 0x5682cbu: goto L_005682cb; case 0x5682d2u: goto L_005682d2; case 0x5682d9u: goto L_005682d9; case 0x5682e0u: goto L_005682e0; case 0x5682e7u: goto L_005682e7; default: UNSUP(0x005682c4, "jump table entry is not a known target"); } }
L_005682cb:; BB(0x005682cb);
    /* 005682cb: mov eax, 2 */ r_eax = 0x2u;
    /* 005682d0: jmp 0x5682f1 */ goto L_005682f1;
L_005682d2:; BB(0x005682d2);
    /* 005682d2: mov eax, 3 */ r_eax = 0x3u;
    /* 005682d7: jmp 0x5682f1 */ goto L_005682f1;
L_005682d9:; BB(0x005682d9);
    /* 005682d9: mov eax, 4 */ r_eax = 0x4u;
    /* 005682de: jmp 0x5682f1 */ goto L_005682f1;
L_005682e0:; BB(0x005682e0);
    /* 005682e0: mov eax, 6 */ r_eax = 0x6u;
    /* 005682e5: jmp 0x5682f1 */ goto L_005682f1;
L_005682e7:; BB(0x005682e7);
    /* 005682e7: mov eax, 8 */ r_eax = 0x8u;
    /* 005682ec: jmp 0x5682f1 */ goto L_005682f1;
L_005682ee:; BB(0x005682ee);
    /* 005682ee: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005682f1:; BB(0x005682f1);
    /* 005682f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005682f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005682f4: ret 4 */ FN_RET(0x005682a0); r_esp += 8; return;
}

void f_00568430(void) /* sub_568430 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568430);
    /* 00568430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568431: mov ebp, esp */ r_ebp = r_esp;
    /* 00568433: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568434: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00568437: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00568439: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056843f: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x568444u); f_006375b0();
    /* 00568444: mov ecx, eax */ r_ecx = r_eax;
    /* 00568446: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x56844bu); f_0063aae0();
    /* 0056844b: mov esp, ebp */ r_esp = r_ebp;
    /* 0056844d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056844e: ret  */ FN_RET(0x00568430); r_esp += 4; return;
}

void f_005685c0(void) /* sub_5685C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005685c0);
    /* 005685c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005685c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005685c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005685c5: push 0x6a5c89 */ { u32 v = 0x6a5c89u; r_esp -= 4; W32(r_esp, v); }
    /* 005685ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005685d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005685d1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005685d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005685d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005685db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005685dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005685df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005685e5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005685e8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005685eb: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005685ef: jne 0x568638 */ if (!fZ) goto L_00568638;
L_005685f1:; BB(0x005685f1);
    /* 005685f1: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 005685f6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5685fbu); f_00686d82();
    /* 005685fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005685fe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00568601: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00568608: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056860c: je 0x56861b */ if (fZ) goto L_0056861b;
L_0056860e:; BB(0x0056860e);
    /* 0056860e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00568611: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x568616u); f_00642e10();
    /* 00568616: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00568619: jmp 0x568622 */ goto L_00568622;
L_0056861b:; BB(0x0056861b);
    /* 0056861b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00568622:; BB(0x00568622);
    /* 00568622: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00568625: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00568628: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056862f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568632: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00568635: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
L_00568638:; BB(0x00568638);
    /* 00568638: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056863b: call 0x5687e0 */ r_esp -= 4; W32(r_esp, 0x568640u); f_005687e0();
    /* 00568640: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00568643: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00568645: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00568647: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0056864a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056864b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056864e: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00568651: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x568656u); f_00642e70();
    /* 00568656: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568659: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056865d: jne 0x5686a6 */ if (!fZ) goto L_005686a6;
L_0056865f:; BB(0x0056865f);
    /* 0056865f: push 0x3b8 */ { u32 v = 0x3b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00568664: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x568669u); f_00686d82();
    /* 00568669: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056866c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0056866f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00568676: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056867a: je 0x568689 */ if (fZ) goto L_00568689;
L_0056867c:; BB(0x0056867c);
    /* 0056867c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056867f: call 0x56a6e0 */ r_esp -= 4; W32(r_esp, 0x568684u); f_0056a6e0();
    /* 00568684: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00568687: jmp 0x568690 */ goto L_00568690;
L_00568689:; BB(0x00568689);
    /* 00568689: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00568690:; BB(0x00568690);
    /* 00568690: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00568693: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00568696: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056869d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005686a0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005686a3: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
L_005686a6:; BB(0x005686a6);
    /* 005686a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005686a9: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 005686ac: call 0x56a800 */ r_esp -= 4; W32(r_esp, 0x5686b1u); f_0056a800();
    /* 005686b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005686b3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005686b6: call 0x568450 */ r_esp -= 4; W32(r_esp, 0x5686bbu); f_00568450();
    /* 005686bb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005686be: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005686c1: call 0x56a9c0 */ r_esp -= 4; W32(r_esp, 0x5686c6u); f_0056a9c0();
    /* 005686c6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005686c9: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 005686cc: call 0x56aa50 */ r_esp -= 4; W32(r_esp, 0x5686d1u); f_0056aa50();
    /* 005686d1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005686d4: call 0x5687b0 */ r_esp -= 4; W32(r_esp, 0x5686d9u); f_005687b0();
    /* 005686d9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005686dc: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 005686e3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005686e6: mov byte ptr [edx + 0x3c], 1 */ W8((u32)(r_edx+0x3cu), 0x1u);
    /* 005686ea: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005686f1: jmp 0x5686fc */ goto L_005686fc;
L_005686f3:; BB(0x005686f3);
    /* 005686f3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005686f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005686f9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005686fc:; BB(0x005686fc);
    /* 005686fc: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568700: jge 0x56871e */ if ((fS==fO)) goto L_0056871e;
L_00568702:; BB(0x00568702);
    /* 00568702: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00568705: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568708: mov word ptr [edx + ecx*2 + 0x1a], 0 */ W16((u32)(r_edx+r_ecx*2+0x1au), 0x0u);
    /* 0056870f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00568712: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568715: mov word ptr [ecx + eax*2 + 0x24], 0 */ W16((u32)(r_ecx+r_eax*2+0x24u), 0x0u);
    /* 0056871c: jmp 0x5686f3 */ goto L_005686f3;
L_0056871e:; BB(0x0056871e);
    /* 0056871e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568721: mov byte ptr [edx + 0x30], 1 */ W8((u32)(r_edx+0x30u), 0x1u);
    /* 00568725: push 0x745460 */ { u32 v = 0x745460u; r_esp -= 4; W32(r_esp, v); }
    /* 0056872a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0056872c: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00568732: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x568737u); f_0057ab80();
    /* 00568737: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0056873c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00568742: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x568747u); f_005f2ba0();
    /* 00568747: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056874a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00568751: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00568752: mov esp, ebp */ r_esp = r_ebp;
    /* 00568754: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568755: ret  */ FN_RET(0x005685c0); r_esp += 4; return;
}

void f_00568760(void) /* sub_568760 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568760);
    /* 00568760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568761: mov ebp, esp */ r_ebp = r_esp;
    /* 00568763: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568766: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00568769: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0056876c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0056876f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00568772: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568776: je 0x56877c */ if (fZ) goto L_0056877c;
L_00568778:; BB(0x00568778);
    /* 00568778: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0056877a: jmp 0x56877e */ goto L_0056877e;
L_0056877c:; BB(0x0056877c);
    /* 0056877c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0056877e:; BB(0x0056877e);
    /* 0056877e: mov esp, ebp */ r_esp = r_ebp;
    /* 00568780: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568781: ret  */ FN_RET(0x00568760); r_esp += 4; return;
}

void f_00568790(void) /* sub_568790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568790);
    /* 00568790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568791: mov ebp, esp */ r_ebp = r_esp;
    /* 00568793: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00568797: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0056879a: mov al, byte ptr [eax + 0x3c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x3cu))) & 0xffu);
    /* 0056879d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056879f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005687a0: ret  */ FN_RET(0x00568790); r_esp += 4; return;
}

void f_005687b0(void) /* sub_5687B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005687b0);
    /* 005687b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005687b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005687b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005687b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005687b7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005687b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005687bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005687be: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005687c1: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x5687c6u); f_006437d0();
    /* 005687c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005687c8: push 0x6c8e30 */ { u32 v = 0x6c8e30u; r_esp -= 4; W32(r_esp, v); }
    /* 005687cd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005687cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005687d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005687d4: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 005687d7: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x5687dcu); f_00643930();
    /* 005687dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005687de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005687df: ret  */ FN_RET(0x005687b0); r_esp += 4; return;
}

void f_005687e0(void) /* sub_5687E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005687e0);
    /* 005687e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005687e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005687e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005687e6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005687e9: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005687ee: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 005687f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005687f7: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005687fb: je 0x568830 */ if (fZ) goto L_00568830;
L_005687fd:; BB(0x005687fd);
    /* 005687fd: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00568803: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 00568809: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0056880c: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568810: je 0x568830 */ if (fZ) goto L_00568830;
L_00568812:; BB(0x00568812);
    /* 00568812: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00568818: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0056881e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00568821: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568825: je 0x568830 */ if (fZ) goto L_00568830;
L_00568827:; BB(0x00568827);
    /* 00568827: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0056882e: jmp 0x568837 */ goto L_00568837;
L_00568830:; BB(0x00568830);
    /* 00568830: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_00568837:; BB(0x00568837);
    /* 00568837: mov al, byte ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 0056883a: mov esp, ebp */ r_esp = r_ebp;
    /* 0056883c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056883d: ret  */ FN_RET(0x005687e0); r_esp += 4; return;
}

void f_00568840(void) /* sub_568840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568840);
    /* 00568840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568841: mov ebp, esp */ r_ebp = r_esp;
    /* 00568843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568846: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00568849: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0056884d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056884f: jne 0x568855 */ if (!fZ) goto L_00568855;
L_00568851:; BB(0x00568851);
    /* 00568851: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568853: jmp 0x568888 */ goto L_00568888;
L_00568855:; BB(0x00568855);
    /* 00568855: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056885c: jmp 0x568867 */ goto L_00568867;
L_0056885e:; BB(0x0056885e);
    /* 0056885e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568861: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00568864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00568867:; BB(0x00568867);
    /* 00568867: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056886b: jge 0x568886 */ if ((fS==fO)) goto L_00568886;
L_0056886d:; BB(0x0056886d);
    /* 0056886d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568870: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568873: movzx ecx, word ptr [eax + edx*2 + 0x1a] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x1au));
    /* 00568878: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 0056887c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056887e: jne 0x568884 */ if (!fZ) goto L_00568884;
L_00568880:; BB(0x00568880);
    /* 00568880: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00568882: jmp 0x568888 */ goto L_00568888;
L_00568884:; BB(0x00568884);
    /* 00568884: jmp 0x56885e */ goto L_0056885e;
L_00568886:; BB(0x00568886);
    /* 00568886: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00568888:; BB(0x00568888);
    /* 00568888: mov esp, ebp */ r_esp = r_ebp;
    /* 0056888a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056888b: ret 4 */ FN_RET(0x00568840); r_esp += 8; return;
}

void f_00568890(void) /* sub_568890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568890);
    /* 00568890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568891: mov ebp, esp */ r_ebp = r_esp;
    /* 00568893: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568896: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00568897: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0056889a: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005688a0: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005688a6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005688ad: jmp 0x5688b8 */ goto L_005688b8;
L_005688af:; BB(0x005688af);
    /* 005688af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005688b2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005688b5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005688b8:; BB(0x005688b8);
    /* 005688b8: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005688bc: jge 0x568905 */ if ((fS==fO)) goto L_00568905;
L_005688be:; BB(0x005688be);
    /* 005688be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005688c1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005688c4: movzx eax, word ptr [edx + ecx*2 + 0x1a] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x1au));
    /* 005688c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005688cb: je 0x568903 */ if (fZ) goto L_00568903;
L_005688cd:; BB(0x005688cd);
    /* 005688cd: movzx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff4u));
    /* 005688d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005688d3: jne 0x5688e6 */ if (!fZ) goto L_005688e6;
L_005688d5:; BB(0x005688d5);
    /* 005688d5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005688d8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005688db: mov cx, word ptr [eax + edx*2 + 0x1a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x1au))) & 0xffffu);
    /* 005688e0: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 005688e4: jmp 0x568903 */ goto L_00568903;
L_005688e6:; BB(0x005688e6);
    /* 005688e6: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 005688ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005688ec: jne 0x5688ff */ if (!fZ) goto L_005688ff;
L_005688ee:; BB(0x005688ee);
    /* 005688ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005688f1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005688f4: mov dx, word ptr [ecx + eax*2 + 0x1a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x1au))) & 0xffffu);
    /* 005688f9: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 005688fd: jmp 0x568903 */ goto L_00568903;
L_005688ff:; BB(0x005688ff);
    /* 005688ff: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568901: jmp 0x56893f */ goto L_0056893f;
L_00568903:; BB(0x00568903);
    /* 00568903: jmp 0x5688af */ goto L_005688af;
L_00568905:; BB(0x00568905);
    /* 00568905: movzx eax, word ptr [ebp - 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff4u));
    /* 00568909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056890b: je 0x568915 */ if (fZ) goto L_00568915;
L_0056890d:; BB(0x0056890d);
    /* 0056890d: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 00568911: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568913: jne 0x568919 */ if (!fZ) goto L_00568919;
L_00568915:; BB(0x00568915);
    /* 00568915: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568917: jmp 0x56893f */ goto L_0056893f;
L_00568919:; BB(0x00568919);
    /* 00568919: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0056891d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056891e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568923u); f_00641280();
    /* 00568923: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568926: mov esi, eax */ r_esi = r_eax;
    /* 00568928: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0056892c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056892d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568932u); f_00641280();
    /* 00568932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568935: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568937: je 0x56893d */ if (fZ) goto L_0056893d;
L_00568939:; BB(0x00568939);
    /* 00568939: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0056893b: jmp 0x56893f */ goto L_0056893f;
L_0056893d:; BB(0x0056893d);
    /* 0056893d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0056893f:; BB(0x0056893f);
    /* 0056893f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00568940: mov esp, ebp */ r_esp = r_ebp;
    /* 00568942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568943: ret  */ FN_RET(0x00568890); r_esp += 4; return;
}

void f_00568950(void) /* sub_568950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568950);
    /* 00568950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568951: mov ebp, esp */ r_ebp = r_esp;
    /* 00568953: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568956: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0056895b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056895d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00568960: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00568961: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00568964: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056896b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00568972: jmp 0x56897d */ goto L_0056897d;
L_00568974:; BB(0x00568974);
    /* 00568974: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568977: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056897a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0056897d:; BB(0x0056897d);
    /* 0056897d: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568981: jge 0x56898f */ if ((fS==fO)) goto L_0056898f;
L_00568983:; BB(0x00568983);
    /* 00568983: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568986: mov word ptr [ebp + ecx*2 - 0x18], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffe8u), 0x0u);
    /* 0056898d: jmp 0x568974 */ goto L_00568974;
L_0056898f:; BB(0x0056898f);
    /* 0056898f: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00568996: mov dword ptr [ebp - 0x20], 0xf */ W32((u32)(r_ebp+0xffffffe0u), 0xfu);
    /* 0056899d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005689a4: jmp 0x5689af */ goto L_005689af;
L_005689a6:; BB(0x005689a6);
    /* 005689a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005689a9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005689ac: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005689af:; BB(0x005689af);
    /* 005689af: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005689b3: jge 0x568a72 */ if ((fS==fO)) goto L_00568a72;
L_005689b9:; BB(0x005689b9);
    /* 005689b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005689bc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005689bf: movzx edx, word ptr [ecx + eax*2 + 0x1a] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x1au));
    /* 005689c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005689c6: je 0x568a6d */ if (fZ) goto L_00568a6d;
L_005689cc:; BB(0x005689cc);
    /* 005689cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005689cf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005689d2: mov dx, word ptr [ecx + eax*2 + 0x1a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x1au))) & 0xffffu);
    /* 005689d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005689d8: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 005689de: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x5689e3u); f_005593d0();
    /* 005689e3: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005689e6: jne 0x5689f1 */ if (!fZ) goto L_005689f1;
L_005689e8:; BB(0x005689e8);
    /* 005689e8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005689ea: jmp 0x568c67 */ goto L_00568c67;
L_005689f1:; BB(0x005689f1);
    /* 005689f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005689f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005689f7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005689fa: mov cx, word ptr [edx + ecx*2 + 0x1a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x1au))) & 0xffffu);
    /* 005689ff: mov word ptr [ebp + eax*2 - 0x18], cx */ W16((u32)(r_ebp+r_eax*2+0xffffffe8u), (u16)r_ecx);
    /* 00568a04: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568a07: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568a0a: mov cx, word ptr [eax + edx*2 + 0x1a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x1au))) & 0xffffu);
    /* 00568a0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568a10: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568a15u); f_00641280();
    /* 00568a15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568a18: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568a1b: jle 0x568a34 */ if ((fZ||fS!=fO)) goto L_00568a34;
L_00568a1d:; BB(0x00568a1d);
    /* 00568a1d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568a20: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568a23: mov cx, word ptr [eax + edx*2 + 0x1a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x1au))) & 0xffffu);
    /* 00568a28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568a29: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568a2eu); f_00641280();
    /* 00568a2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568a31: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00568a34:; BB(0x00568a34);
    /* 00568a34: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568a37: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568a3a: mov cx, word ptr [eax + edx*2 + 0x1a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x1au))) & 0xffffu);
    /* 00568a3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568a40: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568a45u); f_00641280();
    /* 00568a45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568a48: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568a4b: jge 0x568a64 */ if ((fS==fO)) goto L_00568a64;
L_00568a4d:; BB(0x00568a4d);
    /* 00568a4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568a50: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568a53: mov cx, word ptr [eax + edx*2 + 0x1a] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x1au))) & 0xffffu);
    /* 00568a58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568a59: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568a5eu); f_00641280();
    /* 00568a5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568a61: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00568a64:; BB(0x00568a64);
    /* 00568a64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568a67: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00568a6a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00568a6d:; BB(0x00568a6d);
    /* 00568a6d: jmp 0x5689a6 */ goto L_005689a6;
L_00568a72:; BB(0x00568a72);
    /* 00568a72: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568a76: je 0x568a7f */ if (fZ) goto L_00568a7f;
L_00568a78:; BB(0x00568a78);
    /* 00568a78: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568a7a: jmp 0x568c67 */ goto L_00568c67;
L_00568a7f:; BB(0x00568a7f);
    /* 00568a7f: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568a83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568a84: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568a89u); f_00641280();
    /* 00568a89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568a8c: mov esi, eax */ r_esi = r_eax;
    /* 00568a8e: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568a92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568a93: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568a98u); f_00641280();
    /* 00568a98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568a9b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568a9d: jne 0x568aa6 */ if (!fZ) goto L_00568aa6;
L_00568a9f:; BB(0x00568a9f);
    /* 00568a9f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568aa1: jmp 0x568c67 */ goto L_00568c67;
L_00568aa6:; BB(0x00568aa6);
    /* 00568aa6: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568aaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568aab: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568ab0u); f_00641280();
    /* 00568ab0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568ab3: mov esi, eax */ r_esi = r_eax;
    /* 00568ab5: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568ab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568aba: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568abfu); f_00641280();
    /* 00568abf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568ac2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568ac4: jne 0x568acd */ if (!fZ) goto L_00568acd;
L_00568ac6:; BB(0x00568ac6);
    /* 00568ac6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568ac8: jmp 0x568c67 */ goto L_00568c67;
L_00568acd:; BB(0x00568acd);
    /* 00568acd: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568ad1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568ad2: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568ad7u); f_00641280();
    /* 00568ad7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568ada: mov esi, eax */ r_esi = r_eax;
    /* 00568adc: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568ae0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568ae1: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568ae6u); f_00641280();
    /* 00568ae6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568ae9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568aeb: jne 0x568af4 */ if (!fZ) goto L_00568af4;
L_00568aed:; BB(0x00568aed);
    /* 00568aed: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568aef: jmp 0x568c67 */ goto L_00568c67;
L_00568af4:; BB(0x00568af4);
    /* 00568af4: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568af8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568af9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568afeu); f_00641280();
    /* 00568afe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568b01: mov esi, eax */ r_esi = r_eax;
    /* 00568b03: mov cx, word ptr [ebp - 0x12] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 00568b07: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568b08: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568b0du); f_00641280();
    /* 00568b0d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568b10: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568b12: jne 0x568b1b */ if (!fZ) goto L_00568b1b;
L_00568b14:; BB(0x00568b14);
    /* 00568b14: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568b16: jmp 0x568c67 */ goto L_00568c67;
L_00568b1b:; BB(0x00568b1b);
    /* 00568b1b: mov dx, word ptr [ebp - 0x16] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568b1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568b20: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568b25u); f_00641280();
    /* 00568b25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568b28: mov esi, eax */ r_esi = r_eax;
    /* 00568b2a: mov ax, word ptr [ebp - 0x12] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 00568b2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568b2f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568b34u); f_00641280();
    /* 00568b34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568b37: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568b39: jne 0x568b42 */ if (!fZ) goto L_00568b42;
L_00568b3b:; BB(0x00568b3b);
    /* 00568b3b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568b3d: jmp 0x568c67 */ goto L_00568c67;
L_00568b42:; BB(0x00568b42);
    /* 00568b42: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568b46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568b47: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568b4cu); f_00641280();
    /* 00568b4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568b4f: mov esi, eax */ r_esi = r_eax;
    /* 00568b51: mov dx, word ptr [ebp - 0x12] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 00568b55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568b56: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568b5bu); f_00641280();
    /* 00568b5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568b5e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568b60: jne 0x568b69 */ if (!fZ) goto L_00568b69;
L_00568b62:; BB(0x00568b62);
    /* 00568b62: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568b64: jmp 0x568c67 */ goto L_00568c67;
L_00568b69:; BB(0x00568b69);
    /* 00568b69: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00568b6c: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00568b6f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568b72: jle 0x568b7b */ if ((fZ||fS!=fO)) goto L_00568b7b;
L_00568b74:; BB(0x00568b74);
    /* 00568b74: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568b76: jmp 0x568c67 */ goto L_00568c67;
L_00568b7b:; BB(0x00568b7b);
    /* 00568b7b: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00568b7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568b81: je 0x568c65 */ if (fZ) goto L_00568c65;
L_00568b87:; BB(0x00568b87);
    /* 00568b87: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568b8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568b8c: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568b91u); f_00641290();
    /* 00568b91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568b94: mov esi, eax */ r_esi = r_eax;
    /* 00568b96: mov ax, word ptr [ebp - 0x16] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568b9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568b9b: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568ba0u); f_00641290();
    /* 00568ba0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568ba3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568ba5: je 0x568bae */ if (fZ) goto L_00568bae;
L_00568ba7:; BB(0x00568ba7);
    /* 00568ba7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568ba9: jmp 0x568c67 */ goto L_00568c67;
L_00568bae:; BB(0x00568bae);
    /* 00568bae: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568bb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568bb3: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568bb8u); f_00641290();
    /* 00568bb8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568bbb: mov esi, eax */ r_esi = r_eax;
    /* 00568bbd: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568bc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568bc2: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568bc7u); f_00641290();
    /* 00568bc7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568bca: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568bcc: je 0x568bd5 */ if (fZ) goto L_00568bd5;
L_00568bce:; BB(0x00568bce);
    /* 00568bce: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568bd0: jmp 0x568c67 */ goto L_00568c67;
L_00568bd5:; BB(0x00568bd5);
    /* 00568bd5: mov ax, word ptr [ebp - 0x16] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568bd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568bda: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568bdfu); f_00641290();
    /* 00568bdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568be2: mov esi, eax */ r_esi = r_eax;
    /* 00568be4: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568be8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568be9: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568beeu); f_00641290();
    /* 00568bee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568bf1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568bf3: je 0x568bf9 */ if (fZ) goto L_00568bf9;
L_00568bf5:; BB(0x00568bf5);
    /* 00568bf5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568bf7: jmp 0x568c67 */ goto L_00568c67;
L_00568bf9:; BB(0x00568bf9);
    /* 00568bf9: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568bfd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568bfe: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568c03u); f_00641290();
    /* 00568c03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568c06: mov esi, eax */ r_esi = r_eax;
    /* 00568c08: mov ax, word ptr [ebp - 0x12] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 00568c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568c0d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568c12u); f_00641290();
    /* 00568c12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568c15: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568c17: je 0x568c1d */ if (fZ) goto L_00568c1d;
L_00568c19:; BB(0x00568c19);
    /* 00568c19: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568c1b: jmp 0x568c67 */ goto L_00568c67;
L_00568c1d:; BB(0x00568c1d);
    /* 00568c1d: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568c21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568c22: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568c27u); f_00641290();
    /* 00568c27: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568c2a: mov esi, eax */ r_esi = r_eax;
    /* 00568c2c: mov dx, word ptr [ebp - 0x12] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 00568c30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568c31: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568c36u); f_00641290();
    /* 00568c36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568c39: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568c3b: je 0x568c41 */ if (fZ) goto L_00568c41;
L_00568c3d:; BB(0x00568c3d);
    /* 00568c3d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568c3f: jmp 0x568c67 */ goto L_00568c67;
L_00568c41:; BB(0x00568c41);
    /* 00568c41: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568c45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568c46: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568c4bu); f_00641290();
    /* 00568c4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568c4e: mov esi, eax */ r_esi = r_eax;
    /* 00568c50: mov cx, word ptr [ebp - 0x12] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 00568c54: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568c55: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568c5au); f_00641290();
    /* 00568c5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568c5d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568c5f: je 0x568c65 */ if (fZ) goto L_00568c65;
L_00568c61:; BB(0x00568c61);
    /* 00568c61: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568c63: jmp 0x568c67 */ goto L_00568c67;
L_00568c65:; BB(0x00568c65);
    /* 00568c65: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00568c67:; BB(0x00568c67);
    /* 00568c67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00568c68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00568c6b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568c6d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x568c72u); f_00686d72();
    /* 00568c72: mov esp, ebp */ r_esp = r_ebp;
    /* 00568c74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568c75: ret 4 */ FN_RET(0x00568950); r_esp += 8; return;
}

void f_00568c80(void) /* sub_568C80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568c80);
    /* 00568c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568c81: mov ebp, esp */ r_ebp = r_esp;
    /* 00568c83: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568c86: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00568c8b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00568c8d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00568c90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00568c91: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00568c94: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00568c9b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00568ca2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00568ca9: jmp 0x568cb4 */ goto L_00568cb4;
L_00568cab:; BB(0x00568cab);
    /* 00568cab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568cae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00568cb1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00568cb4:; BB(0x00568cb4);
    /* 00568cb4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568cb8: jge 0x568cc6 */ if ((fS==fO)) goto L_00568cc6;
L_00568cba:; BB(0x00568cba);
    /* 00568cba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568cbd: mov word ptr [ebp + ecx*2 - 0x18], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffe8u), 0x0u);
    /* 00568cc4: jmp 0x568cab */ goto L_00568cab;
L_00568cc6:; BB(0x00568cc6);
    /* 00568cc6: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00568ccd: mov dword ptr [ebp - 0x20], 0xf */ W32((u32)(r_ebp+0xffffffe0u), 0xfu);
    /* 00568cd4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00568cdb: jmp 0x568ce6 */ goto L_00568ce6;
L_00568cdd:; BB(0x00568cdd);
    /* 00568cdd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568ce0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00568ce3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00568ce6:; BB(0x00568ce6);
    /* 00568ce6: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568cea: jge 0x568dab */ if ((fS==fO)) goto L_00568dab;
L_00568cf0:; BB(0x00568cf0);
    /* 00568cf0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568cf3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00568cf6: movzx edx, word ptr [ecx + eax*2 + 0x1a] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x1au));
    /* 00568cfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568cfd: je 0x568da6 */ if (fZ) goto L_00568da6;
L_00568d03:; BB(0x00568d03);
    /* 00568d03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568d06: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00568d09: mov dx, word ptr [ecx + eax*2 + 0x1a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x1au))) & 0xffffu);
    /* 00568d0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568d0f: mov ecx, dword ptr [0x793444] */ r_ecx = R32((u32)(0x793444u));
    /* 00568d15: call 0x5593d0 */ r_esp -= 4; W32(r_esp, 0x568d1au); f_005593d0();
    /* 00568d1a: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568d1d: jne 0x568d2a */ if (!fZ) goto L_00568d2a;
L_00568d1f:; BB(0x00568d1f);
    /* 00568d1f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00568d22: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00568d25: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00568d28: jmp 0x568da6 */ goto L_00568da6;
L_00568d2a:; BB(0x00568d2a);
    /* 00568d2a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568d2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568d30: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00568d33: mov dx, word ptr [eax + edx*2 + 0x1a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x1au))) & 0xffffu);
    /* 00568d38: mov word ptr [ebp + ecx*2 - 0x18], dx */ W16((u32)(r_ebp+r_ecx*2+0xffffffe8u), (u16)r_edx);
    /* 00568d3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568d40: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00568d43: mov dx, word ptr [ecx + eax*2 + 0x1a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x1au))) & 0xffffu);
    /* 00568d48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568d49: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568d4eu); f_00641280();
    /* 00568d4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568d51: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568d54: jle 0x568d6d */ if ((fZ||fS!=fO)) goto L_00568d6d;
L_00568d56:; BB(0x00568d56);
    /* 00568d56: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568d59: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00568d5c: mov dx, word ptr [ecx + eax*2 + 0x1a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x1au))) & 0xffffu);
    /* 00568d61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568d62: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568d67u); f_00641280();
    /* 00568d67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568d6a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00568d6d:; BB(0x00568d6d);
    /* 00568d6d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568d70: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00568d73: mov dx, word ptr [ecx + eax*2 + 0x1a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x1au))) & 0xffffu);
    /* 00568d78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568d79: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568d7eu); f_00641280();
    /* 00568d7e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568d81: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568d84: jge 0x568d9d */ if ((fS==fO)) goto L_00568d9d;
L_00568d86:; BB(0x00568d86);
    /* 00568d86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568d89: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00568d8c: mov dx, word ptr [ecx + eax*2 + 0x1a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x1au))) & 0xffffu);
    /* 00568d91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568d92: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568d97u); f_00641280();
    /* 00568d97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568d9a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00568d9d:; BB(0x00568d9d);
    /* 00568d9d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568da0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00568da3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00568da6:; BB(0x00568da6);
    /* 00568da6: jmp 0x568cdd */ goto L_00568cdd;
L_00568dab:; BB(0x00568dab);
    /* 00568dab: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568daf: je 0x568db8 */ if (fZ) goto L_00568db8;
L_00568db1:; BB(0x00568db1);
    /* 00568db1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568db3: jmp 0x568ebf */ goto L_00568ebf;
L_00568db8:; BB(0x00568db8);
    /* 00568db8: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568dbc: je 0x568dc5 */ if (fZ) goto L_00568dc5;
L_00568dbe:; BB(0x00568dbe);
    /* 00568dbe: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568dc0: jmp 0x568ebf */ goto L_00568ebf;
L_00568dc5:; BB(0x00568dc5);
    /* 00568dc5: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568dc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568dca: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568dcfu); f_00641280();
    /* 00568dcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568dd2: mov esi, eax */ r_esi = r_eax;
    /* 00568dd4: mov dx, word ptr [ebp - 0x16] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568dd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568dd9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568ddeu); f_00641280();
    /* 00568dde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568de1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568de3: jne 0x568dec */ if (!fZ) goto L_00568dec;
L_00568de5:; BB(0x00568de5);
    /* 00568de5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568de7: jmp 0x568ebf */ goto L_00568ebf;
L_00568dec:; BB(0x00568dec);
    /* 00568dec: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568df0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568df1: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568df6u); f_00641280();
    /* 00568df6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568df9: mov esi, eax */ r_esi = r_eax;
    /* 00568dfb: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568dff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568e00: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568e05u); f_00641280();
    /* 00568e05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568e08: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568e0a: jne 0x568e13 */ if (!fZ) goto L_00568e13;
L_00568e0c:; BB(0x00568e0c);
    /* 00568e0c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568e0e: jmp 0x568ebf */ goto L_00568ebf;
L_00568e13:; BB(0x00568e13);
    /* 00568e13: mov dx, word ptr [ebp - 0x16] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568e17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568e18: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568e1du); f_00641280();
    /* 00568e1d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568e20: mov esi, eax */ r_esi = r_eax;
    /* 00568e22: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568e26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568e27: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x568e2cu); f_00641280();
    /* 00568e2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568e2f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568e31: jne 0x568e3a */ if (!fZ) goto L_00568e3a;
L_00568e33:; BB(0x00568e33);
    /* 00568e33: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568e35: jmp 0x568ebf */ goto L_00568ebf;
L_00568e3a:; BB(0x00568e3a);
    /* 00568e3a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00568e3d: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00568e40: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568e43: jle 0x568e49 */ if ((fZ||fS!=fO)) goto L_00568e49;
L_00568e45:; BB(0x00568e45);
    /* 00568e45: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568e47: jmp 0x568ebf */ goto L_00568ebf;
L_00568e49:; BB(0x00568e49);
    /* 00568e49: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00568e4d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568e4f: je 0x568ebd */ if (fZ) goto L_00568ebd;
L_00568e51:; BB(0x00568e51);
    /* 00568e51: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568e56: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568e5bu); f_00641290();
    /* 00568e5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568e5e: mov esi, eax */ r_esi = r_eax;
    /* 00568e60: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568e64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568e65: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568e6au); f_00641290();
    /* 00568e6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568e6d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568e6f: je 0x568e75 */ if (fZ) goto L_00568e75;
L_00568e71:; BB(0x00568e71);
    /* 00568e71: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568e73: jmp 0x568ebf */ goto L_00568ebf;
L_00568e75:; BB(0x00568e75);
    /* 00568e75: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00568e79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568e7a: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568e7fu); f_00641290();
    /* 00568e7f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568e82: mov esi, eax */ r_esi = r_eax;
    /* 00568e84: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00568e89: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568e8eu); f_00641290();
    /* 00568e8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568e91: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568e93: je 0x568e99 */ if (fZ) goto L_00568e99;
L_00568e95:; BB(0x00568e95);
    /* 00568e95: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568e97: jmp 0x568ebf */ goto L_00568ebf;
L_00568e99:; BB(0x00568e99);
    /* 00568e99: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00568e9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568e9e: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568ea3u); f_00641290();
    /* 00568ea3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568ea6: mov esi, eax */ r_esi = r_eax;
    /* 00568ea8: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00568eac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00568ead: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x568eb2u); f_00641290();
    /* 00568eb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00568eb5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568eb7: je 0x568ebd */ if (fZ) goto L_00568ebd;
L_00568eb9:; BB(0x00568eb9);
    /* 00568eb9: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00568ebb: jmp 0x568ebf */ goto L_00568ebf;
L_00568ebd:; BB(0x00568ebd);
    /* 00568ebd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00568ebf:; BB(0x00568ebf);
    /* 00568ebf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00568ec0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00568ec3: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00568ec5: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x568ecau); f_00686d72();
    /* 00568eca: mov esp, ebp */ r_esp = r_ebp;
    /* 00568ecc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568ecd: ret 4 */ FN_RET(0x00568c80); r_esp += 8; return;
}

void f_00568ed0(void) /* sub_568ED0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568ed0);
    /* 00568ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00568ed3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568ed6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00568ed9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00568ee0: jmp 0x568eeb */ goto L_00568eeb;
L_00568ee2:; BB(0x00568ee2);
    /* 00568ee2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568ee5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00568ee8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00568eeb:; BB(0x00568eeb);
    /* 00568eeb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568eef: jge 0x568f13 */ if ((fS==fO)) goto L_00568f13;
L_00568ef1:; BB(0x00568ef1);
    /* 00568ef1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568ef4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568ef7: movzx eax, word ptr [edx + ecx*2 + 0x1a] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x1au));
    /* 00568efc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568efe: jne 0x568f11 */ if (!fZ) goto L_00568f11;
L_00568f00:; BB(0x00568f00);
    /* 00568f00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568f03: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568f06: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00568f0a: mov word ptr [edx + ecx*2 + 0x1a], ax */ W16((u32)(r_edx+r_ecx*2+0x1au), (u16)r_eax);
    /* 00568f0f: jmp 0x568f13 */ goto L_00568f13;
L_00568f11:; BB(0x00568f11);
    /* 00568f11: jmp 0x568ee2 */ goto L_00568ee2;
L_00568f13:; BB(0x00568f13);
    /* 00568f13: mov esp, ebp */ r_esp = r_ebp;
    /* 00568f15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568f16: ret 4 */ FN_RET(0x00568ed0); r_esp += 8; return;
}

void f_00568f20(void) /* sub_568F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568f20);
    /* 00568f20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568f21: mov ebp, esp */ r_ebp = r_esp;
    /* 00568f23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568f26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00568f29: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00568f2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568f2f: jne 0x568f36 */ if (!fZ) goto L_00568f36;
L_00568f31:; BB(0x00568f31);
    /* 00568f31: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00568f34: jmp 0x568f6b */ goto L_00568f6b;
L_00568f36:; BB(0x00568f36);
    /* 00568f36: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00568f3d: jmp 0x568f48 */ goto L_00568f48;
L_00568f3f:; BB(0x00568f3f);
    /* 00568f3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568f42: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00568f45: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00568f48:; BB(0x00568f48);
    /* 00568f48: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00568f4c: jge 0x568f68 */ if ((fS==fO)) goto L_00568f68;
L_00568f4e:; BB(0x00568f4e);
    /* 00568f4e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568f51: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00568f54: movzx ecx, word ptr [eax + edx*2 + 0x1a] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x1au));
    /* 00568f59: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00568f5d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568f5f: jne 0x568f66 */ if (!fZ) goto L_00568f66;
L_00568f61:; BB(0x00568f61);
    /* 00568f61: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568f64: jmp 0x568f6b */ goto L_00568f6b;
L_00568f66:; BB(0x00568f66);
    /* 00568f66: jmp 0x568f3f */ goto L_00568f3f;
L_00568f68:; BB(0x00568f68);
    /* 00568f68: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00568f6b:; BB(0x00568f6b);
    /* 00568f6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00568f6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568f6e: ret 4 */ FN_RET(0x00568f20); r_esp += 8; return;
}

void f_00568f80(void) /* sub_568F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568f80);
    /* 00568f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00568f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00568f87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00568f8a: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00568f8d: call 0x56ace0 */ r_esp -= 4; W32(r_esp, 0x568f92u); f_0056ace0();
    /* 00568f92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568f94: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00568f9a: mov ecx, dword ptr [ecx + 0xb8] */ r_ecx = R32((u32)(r_ecx+0xb8u));
    /* 00568fa0: call 0x5645c0 */ r_esp -= 4; W32(r_esp, 0x568fa5u); f_005645c0();
    /* 00568fa5: mov esp, ebp */ r_esp = r_ebp;
    /* 00568fa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00568fa8: ret  */ FN_RET(0x00568f80); r_esp += 4; return;
}

void f_00568fb0(void) /* sub_568FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00568fb0);
    /* 00568fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00568fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00568fb3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00568fb6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00568fb9: mov eax, dword ptr [0x79343c] */ r_eax = R32((u32)(0x79343cu));
    /* 00568fbe: movzx ecx, byte ptr [eax + 0x18] */ r_ecx = (u32)R8((u32)(r_eax+0x18u));
    /* 00568fc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00568fc4: je 0x568fcb */ if (fZ) goto L_00568fcb;
L_00568fc6:; BB(0x00568fc6);
    /* 00568fc6: jmp 0x569247 */ goto L_00569247;
L_00568fcb:; BB(0x00568fcb);
    /* 00568fcb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00568fce: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00568fd1: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00568fd5: ja 0x569247 */ if ((!fC&&!fZ)) goto L_00569247;
L_00568fdb:; BB(0x00568fdb);
    /* 00568fdb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00568fde: jmp dword ptr [eax*4 + 0x569250] */ { u32 t = R32((u32)(r_eax*4+0x569250u)); switch (t) { case 0x568fe5u: goto L_00568fe5; case 0x569049u: goto L_00569049; case 0x569247u: goto L_00569247; case 0x5690b8u: goto L_005690b8; case 0x56910du: goto L_0056910d; case 0x56914fu: goto L_0056914f; case 0x5691d9u: goto L_005691d9; default: UNSUP(0x00568fde, "jump table entry is not a known target"); } }
L_00568fe5:; BB(0x00568fe5);
    /* 00568fe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568fe7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568fe8: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00568fee: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00568ff1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00568ff2: fld1  */ FPUSH(1.0);
    /* 00568ff4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00568ff7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00568ff9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00568ffb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568ffd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00568fff: push 0x31225d */ { u32 v = 0x31225du; r_esp -= 4; W32(r_esp, v); }
    /* 00569004: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056900a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0056900c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00569012: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00569018: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56901au); call_ind(t); }
    /* 0056901a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056901d: call 0x5d11b0 */ r_esp -= 4; W32(r_esp, 0x569022u); f_005d11b0();
    /* 00569022: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 00569028: call 0x561b50 */ r_esp -= 4; W32(r_esp, 0x56902du); f_00561b50();
    /* 0056902d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00569030: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00569033: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00569036: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056903a: je 0x569044 */ if (fZ) goto L_00569044;
L_0056903c:; BB(0x0056903c);
    /* 0056903c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056903f: call 0x56a070 */ r_esp -= 4; W32(r_esp, 0x569044u); f_0056a070();
L_00569044:; BB(0x00569044);
    /* 00569044: jmp 0x569247 */ goto L_00569247;
L_00569049:; BB(0x00569049);
    /* 00569049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056904b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056904c: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00569052: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00569055: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00569056: fld1  */ FPUSH(1.0);
    /* 00569058: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056905b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056905d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056905f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569063: push 0x31225d */ { u32 v = 0x31225du; r_esp -= 4; W32(r_esp, v); }
    /* 00569068: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0056906d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056906f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00569075: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0056907b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56907du); call_ind(t); }
    /* 0056907d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00569080: call 0x5d0ff0 */ r_esp -= 4; W32(r_esp, 0x569085u); f_005d0ff0();
    /* 00569085: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 0056908b: call 0x561b50 */ r_esp -= 4; W32(r_esp, 0x569090u); f_00561b50();
    /* 00569090: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00569093: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00569096: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00569099: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056909c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056909e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005690a1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005690a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5690a6u); call_ind(t); }
    /* 005690a6: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005690a9: jne 0x5690b3 */ if (!fZ) goto L_005690b3;
L_005690ab:; BB(0x005690ab);
    /* 005690ab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005690ae: call 0x56a070 */ r_esp -= 4; W32(r_esp, 0x5690b3u); f_0056a070();
L_005690b3:; BB(0x005690b3);
    /* 005690b3: jmp 0x569247 */ goto L_00569247;
L_005690b8:; BB(0x005690b8);
    /* 005690b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005690ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005690bb: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005690c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005690c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005690c5: fld1  */ FPUSH(1.0);
    /* 005690c7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005690ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005690cc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005690ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005690d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005690d2: push 0x31225d */ { u32 v = 0x31225du; r_esp -= 4; W32(r_esp, v); }
    /* 005690d7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005690dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005690df: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005690e5: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005690eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5690edu); call_ind(t); }
    /* 005690ed: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005690f0: call 0x5692b0 */ r_esp -= 4; W32(r_esp, 0x5690f5u); f_005692b0();
    /* 005690f5: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005690fb: call 0x561e20 */ r_esp -= 4; W32(r_esp, 0x569100u); f_00561e20();
    /* 00569100: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00569103: call 0x568f80 */ r_esp -= 4; W32(r_esp, 0x569108u); f_00568f80();
    /* 00569108: jmp 0x569247 */ goto L_00569247;
L_0056910d:; BB(0x0056910d);
    /* 0056910d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056910f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00569110: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00569116: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00569119: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056911a: fld1  */ FPUSH(1.0);
    /* 0056911c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056911f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00569121: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00569123: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569125: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569127: push 0x31225d */ { u32 v = 0x31225du; r_esp -= 4; W32(r_esp, v); }
    /* 0056912c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00569132: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00569134: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056913a: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00569140: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x569142u); call_ind(t); }
    /* 00569142: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00569145: call 0x56a070 */ r_esp -= 4; W32(r_esp, 0x56914au); f_0056a070();
    /* 0056914a: jmp 0x569247 */ goto L_00569247;
L_0056914f:; BB(0x0056914f);
    /* 0056914f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569151: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00569152: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00569158: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056915b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056915c: fld1  */ FPUSH(1.0);
    /* 0056915e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00569161: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00569163: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00569165: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569167: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569169: push 0x31225d */ { u32 v = 0x31225du; r_esp -= 4; W32(r_esp, v); }
    /* 0056916e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00569174: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00569176: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0056917c: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00569182: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x569184u); call_ind(t); }
    /* 00569184: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00569187: call 0x5d13e0 */ r_esp -= 4; W32(r_esp, 0x56918cu); f_005d13e0();
    /* 0056918c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056918e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056918f: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00569195: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00569198: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00569199: fld1  */ FPUSH(1.0);
    /* 0056919b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056919e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005691a0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005691a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005691a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005691a6: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 005691ab: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005691b1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005691b3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005691b9: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005691bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5691c1u); call_ind(t); }
    /* 005691c1: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005691c7: call 0x561950 */ r_esp -= 4; W32(r_esp, 0x5691ccu); f_00561950();
    /* 005691cc: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005691d2: call 0x562730 */ r_esp -= 4; W32(r_esp, 0x5691d7u); f_00562730();
    /* 005691d7: jmp 0x569247 */ goto L_00569247;
L_005691d9:; BB(0x005691d9);
    /* 005691d9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005691db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005691dd: mov ecx, dword ptr [0x793440] */ r_ecx = R32((u32)(0x793440u));
    /* 005691e3: call 0x5627c0 */ r_esp -= 4; W32(r_esp, 0x5691e8u); f_005627c0();
    /* 005691e8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005691eb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005691ee: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005691f1: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005691f5: jne 0x56923c */ if (!fZ) goto L_0056923c;
L_005691f7:; BB(0x005691f7);
    /* 005691f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005691fa: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005691fd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00569200: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569204: jne 0x56923c */ if (!fZ) goto L_0056923c;
L_00569206:; BB(0x00569206);
    /* 00569206: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00569209: call 0x56a560 */ r_esp -= 4; W32(r_esp, 0x56920eu); f_0056a560();
    /* 0056920e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00569211: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569213: jne 0x56923c */ if (!fZ) goto L_0056923c;
L_00569215:; BB(0x00569215);
    /* 00569215: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00569218: call 0x56a510 */ r_esp -= 4; W32(r_esp, 0x56921du); f_0056a510();
    /* 0056921d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00569220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00569222: jne 0x56923c */ if (!fZ) goto L_0056923c;
L_00569224:; BB(0x00569224);
    /* 00569224: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00569226: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x56922bu); f_005dcb00();
    /* 0056922b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056922e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056922f: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 00569235: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x56923au); f_005dbb70();
    /* 0056923a: jmp 0x569247 */ goto L_00569247;
L_0056923c:; BB(0x0056923c);
    /* 0056923c: mov ecx, dword ptr [0x793438] */ r_ecx = R32((u32)(0x793438u));
    /* 00569242: call 0x5dc2e0 */ r_esp -= 4; W32(r_esp, 0x569247u); f_005dc2e0();
L_00569247:; BB(0x00569247);
    /* 00569247: mov esp, ebp */ r_esp = r_ebp;
    /* 00569249: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056924a: ret 4 */ FN_RET(0x00568fb0); r_esp += 8; return;
}

