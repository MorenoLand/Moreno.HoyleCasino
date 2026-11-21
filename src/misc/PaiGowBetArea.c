#include "protos.h"

void f_0045a120(void) /* PaiGowBetArea::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a120);
    /* 0045a120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a121: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a127: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a12a: call 0x5cc1d0 */ r_esp -= 4; W32(r_esp, 0x45a12fu); f_005cc1d0();
    /* 0045a12f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a132: mov dword ptr [eax], 0x6b98b4 */ W32((u32)(r_eax), 0x6b98b4u);
    /* 0045a138: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a13b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045a13e: mov dword ptr [ecx + 0xae0], edx */ W32((u32)(r_ecx+0xae0u), r_edx);
    /* 0045a144: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a147: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0045a14a: mov dword ptr [eax + 0xae4], ecx */ W32((u32)(r_eax+0xae4u), r_ecx);
    /* 0045a150: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a153: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a156: ret 8 */ FN_RET(0x0045a120); r_esp += 12; return;
}

void f_0045a180(void) /* PaiGowBetArea::vfunc51 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a180);
    /* 0045a180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a181: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a183: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a186: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045a189: mov dword ptr [ebp - 0x14], 0x1392 */ W32((u32)(r_ebp+0xffffffecu), 0x1392u);
    /* 0045a190: mov dword ptr [ebp - 0x10], 0x1393 */ W32((u32)(r_ebp+0xfffffff0u), 0x1393u);
    /* 0045a197: mov dword ptr [ebp - 0xc], 0x1391 */ W32((u32)(r_ebp+0xfffffff4u), 0x1391u);
    /* 0045a19e: mov dword ptr [ebp - 8], 0x1394 */ W32((u32)(r_ebp+0xfffffff8u), 0x1394u);
    /* 0045a1a5: mov dword ptr [ebp - 4], 0x1392 */ W32((u32)(r_ebp+0xfffffffcu), 0x1392u);
    /* 0045a1ac: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045a1af: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0045a1b5: mov eax, dword ptr [ebp + ecx*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0045a1b9: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a1bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a1bc: ret  */ FN_RET(0x0045a180); r_esp += 4; return;
}

void f_0045a1c0(void) /* PaiGowBetArea::vfunc53 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a1c0);
    /* 0045a1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a1c3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a1c6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045a1c9: mov dword ptr [ebp - 0x18], 0x167 */ W32((u32)(r_ebp+0xffffffe8u), 0x167u);
    /* 0045a1d0: mov dword ptr [ebp - 0x14], 0xd3 */ W32((u32)(r_ebp+0xffffffecu), 0xd3u);
    /* 0045a1d7: mov dword ptr [ebp - 0x10], 0x19a */ W32((u32)(r_ebp+0xfffffff0u), 0x19au);
    /* 0045a1de: mov dword ptr [ebp - 0xc], 0xa0 */ W32((u32)(r_ebp+0xfffffff4u), 0xa0u);
    /* 0045a1e5: mov dword ptr [ebp - 8], 0x110 */ W32((u32)(r_ebp+0xfffffff8u), 0x110u);
    /* 0045a1ec: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045a1f2: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45a1f7u); f_0045e8e0();
    /* 0045a1f7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a1fa: jne 0x45a242 */ if (!fZ) goto L_0045a242;
L_0045a1fc:; BB(0x0045a1fc);
    /* 0045a1fc: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a200: jne 0x45a220 */ if (!fZ) goto L_0045a220;
L_0045a202:; BB(0x0045a202);
    /* 0045a202: mov dword ptr [ebp - 0x18], 0x14b */ W32((u32)(r_ebp+0xffffffe8u), 0x14bu);
    /* 0045a209: mov dword ptr [ebp - 0x14], 0xce */ W32((u32)(r_ebp+0xffffffecu), 0xceu);
    /* 0045a210: mov dword ptr [ebp - 0x10], 0x18c */ W32((u32)(r_ebp+0xfffffff0u), 0x18cu);
    /* 0045a217: mov dword ptr [ebp - 0xc], 0x8a */ W32((u32)(r_ebp+0xfffffff4u), 0x8au);
    /* 0045a21e: jmp 0x45a242 */ goto L_0045a242;
L_0045a220:; BB(0x0045a220);
    /* 0045a220: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a224: jne 0x45a242 */ if (!fZ) goto L_0045a242;
L_0045a226:; BB(0x0045a226);
    /* 0045a226: mov dword ptr [ebp - 0x18], 0x16f */ W32((u32)(r_ebp+0xffffffe8u), 0x16fu);
    /* 0045a22d: mov dword ptr [ebp - 0x14], 0xf5 */ W32((u32)(r_ebp+0xffffffecu), 0xf5u);
    /* 0045a234: mov dword ptr [ebp - 0x10], 0x1a3 */ W32((u32)(r_ebp+0xfffffff0u), 0x1a3u);
    /* 0045a23b: mov dword ptr [ebp - 0xc], 0xb0 */ W32((u32)(r_ebp+0xfffffff4u), 0xb0u);
L_0045a242:; BB(0x0045a242);
    /* 0045a242: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a244: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x45a249u); f_0062fbf0();
    /* 0045a249: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a24c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a24e: je 0x45a268 */ if (fZ) goto L_0045a268;
L_0045a250:; BB(0x0045a250);
    /* 0045a250: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a252: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x45a257u); f_0062fbf0();
    /* 0045a257: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a25a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a25d: mov edx, dword ptr [ebp + ecx*4 - 0x18] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u));
    /* 0045a261: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0045a263: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0045a266: jmp 0x45a27c */ goto L_0045a27c;
L_0045a268:; BB(0x0045a268);
    /* 0045a268: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a26a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x45a26fu); f_0062fbf0();
    /* 0045a26f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a272: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a275: add eax, dword ptr [ebp + ecx*4 - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045a279: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0045a27c:; BB(0x0045a27c);
    /* 0045a27c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045a27f: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a281: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a282: ret 8 */ FN_RET(0x0045a1c0); r_esp += 12; return;
}

void f_0045a290(void) /* PaiGowBetArea::vfunc54 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a290);
    /* 0045a290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a291: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a293: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a296: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0045a299: mov dword ptr [ebp - 0x14], 0xbe */ W32((u32)(r_ebp+0xffffffecu), 0xbeu);
    /* 0045a2a0: mov dword ptr [ebp - 0x10], 0xbe */ W32((u32)(r_ebp+0xfffffff0u), 0xbeu);
    /* 0045a2a7: mov dword ptr [ebp - 0xc], 0x6a */ W32((u32)(r_ebp+0xfffffff4u), 0x6au);
    /* 0045a2ae: mov dword ptr [ebp - 8], 0x6a */ W32((u32)(r_ebp+0xfffffff8u), 0x6au);
    /* 0045a2b5: mov dword ptr [ebp - 4], 0xcc */ W32((u32)(r_ebp+0xfffffffcu), 0xccu);
    /* 0045a2bc: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045a2c2: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45a2c7u); f_0045e8e0();
    /* 0045a2c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a2ca: jne 0x45a312 */ if (!fZ) goto L_0045a312;
L_0045a2cc:; BB(0x0045a2cc);
    /* 0045a2cc: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a2d0: jne 0x45a2f0 */ if (!fZ) goto L_0045a2f0;
L_0045a2d2:; BB(0x0045a2d2);
    /* 0045a2d2: mov dword ptr [ebp - 0x14], 0xc0 */ W32((u32)(r_ebp+0xffffffecu), 0xc0u);
    /* 0045a2d9: mov dword ptr [ebp - 0x10], 0xbf */ W32((u32)(r_ebp+0xfffffff0u), 0xbfu);
    /* 0045a2e0: mov dword ptr [ebp - 0xc], 0x87 */ W32((u32)(r_ebp+0xfffffff4u), 0x87u);
    /* 0045a2e7: mov dword ptr [ebp - 8], 0x81 */ W32((u32)(r_ebp+0xfffffff8u), 0x81u);
    /* 0045a2ee: jmp 0x45a312 */ goto L_0045a312;
L_0045a2f0:; BB(0x0045a2f0);
    /* 0045a2f0: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a2f4: jne 0x45a312 */ if (!fZ) goto L_0045a312;
L_0045a2f6:; BB(0x0045a2f6);
    /* 0045a2f6: mov dword ptr [ebp - 0x14], 0xae */ W32((u32)(r_ebp+0xffffffecu), 0xaeu);
    /* 0045a2fd: mov dword ptr [ebp - 0x10], 0xc0 */ W32((u32)(r_ebp+0xfffffff0u), 0xc0u);
    /* 0045a304: mov dword ptr [ebp - 0xc], 0x6d */ W32((u32)(r_ebp+0xfffffff4u), 0x6du);
    /* 0045a30b: mov dword ptr [ebp - 8], 0x8b */ W32((u32)(r_ebp+0xfffffff8u), 0x8bu);
L_0045a312:; BB(0x0045a312);
    /* 0045a312: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a314: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x45a319u); f_0062fbf0();
    /* 0045a319: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a31c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a31e: je 0x45a338 */ if (fZ) goto L_0045a338;
L_0045a320:; BB(0x0045a320);
    /* 0045a320: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a322: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x45a327u); f_0062fbf0();
    /* 0045a327: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a32a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a32d: mov edx, dword ptr [ebp + ecx*4 - 0x14] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffecu));
    /* 0045a331: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0045a333: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0045a336: jmp 0x45a34c */ goto L_0045a34c;
L_0045a338:; BB(0x0045a338);
    /* 0045a338: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a33a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x45a33fu); f_0062fbf0();
    /* 0045a33f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a342: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a345: add eax, dword ptr [ebp + ecx*4 - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045a349: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0045a34c:; BB(0x0045a34c);
    /* 0045a34c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045a34f: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a352: ret 8 */ FN_RET(0x0045a290); r_esp += 12; return;
}

void f_0045a360(void) /* PaiGowBetArea::vfunc57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a360);
    /* 0045a360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a361: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a363: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a366: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045a369: mov dword ptr [ebp - 0x14], 0x167 */ W32((u32)(r_ebp+0xffffffecu), 0x167u);
    /* 0045a370: mov dword ptr [ebp - 0x10], 0xd3 */ W32((u32)(r_ebp+0xfffffff0u), 0xd3u);
    /* 0045a377: mov dword ptr [ebp - 0xc], 0x19a */ W32((u32)(r_ebp+0xfffffff4u), 0x19au);
    /* 0045a37e: mov dword ptr [ebp - 8], 0xa0 */ W32((u32)(r_ebp+0xfffffff8u), 0xa0u);
    /* 0045a385: mov dword ptr [ebp - 4], 0x110 */ W32((u32)(r_ebp+0xfffffffcu), 0x110u);
    /* 0045a38c: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045a392: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45a397u); f_0045e8e0();
    /* 0045a397: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a39a: jne 0x45a3e2 */ if (!fZ) goto L_0045a3e2;
L_0045a39c:; BB(0x0045a39c);
    /* 0045a39c: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a3a0: jne 0x45a3c0 */ if (!fZ) goto L_0045a3c0;
L_0045a3a2:; BB(0x0045a3a2);
    /* 0045a3a2: mov dword ptr [ebp - 0x14], 0x171 */ W32((u32)(r_ebp+0xffffffecu), 0x171u);
    /* 0045a3a9: mov dword ptr [ebp - 0x10], 0xc9 */ W32((u32)(r_ebp+0xfffffff0u), 0xc9u);
    /* 0045a3b0: mov dword ptr [ebp - 0xc], 0x187 */ W32((u32)(r_ebp+0xfffffff4u), 0x187u);
    /* 0045a3b7: mov dword ptr [ebp - 8], 0xb2 */ W32((u32)(r_ebp+0xfffffff8u), 0xb2u);
    /* 0045a3be: jmp 0x45a3e2 */ goto L_0045a3e2;
L_0045a3c0:; BB(0x0045a3c0);
    /* 0045a3c0: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a3c4: jne 0x45a3e2 */ if (!fZ) goto L_0045a3e2;
L_0045a3c6:; BB(0x0045a3c6);
    /* 0045a3c6: mov dword ptr [ebp - 0x14], 0x146 */ W32((u32)(r_ebp+0xffffffecu), 0x146u);
    /* 0045a3cd: mov dword ptr [ebp - 0x10], 0xf5 */ W32((u32)(r_ebp+0xfffffff0u), 0xf5u);
    /* 0045a3d4: mov dword ptr [ebp - 0xc], 0x19c */ W32((u32)(r_ebp+0xfffffff4u), 0x19cu);
    /* 0045a3db: mov dword ptr [ebp - 8], 0xa0 */ W32((u32)(r_ebp+0xfffffff8u), 0xa0u);
L_0045a3e2:; BB(0x0045a3e2);
    /* 0045a3e2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045a3e5: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0045a3e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a3eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a3ec: ret 8 */ FN_RET(0x0045a360); r_esp += 12; return;
}

void f_0045a3f0(void) /* PaiGowBetArea::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a3f0);
    /* 0045a3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a3f3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a3f6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0045a3f9: mov dword ptr [ebp - 0x14], 0xbe */ W32((u32)(r_ebp+0xffffffecu), 0xbeu);
    /* 0045a400: mov dword ptr [ebp - 0x10], 0xbe */ W32((u32)(r_ebp+0xfffffff0u), 0xbeu);
    /* 0045a407: mov dword ptr [ebp - 0xc], 0x6a */ W32((u32)(r_ebp+0xfffffff4u), 0x6au);
    /* 0045a40e: mov dword ptr [ebp - 8], 0x6a */ W32((u32)(r_ebp+0xfffffff8u), 0x6au);
    /* 0045a415: mov dword ptr [ebp - 4], 0xcc */ W32((u32)(r_ebp+0xfffffffcu), 0xccu);
    /* 0045a41c: mov ecx, dword ptr [0x790734] */ r_ecx = R32((u32)(0x790734u));
    /* 0045a422: call 0x45e8e0 */ r_esp -= 4; W32(r_esp, 0x45a427u); f_0045e8e0();
    /* 0045a427: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a42a: jne 0x45a472 */ if (!fZ) goto L_0045a472;
L_0045a42c:; BB(0x0045a42c);
    /* 0045a42c: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a430: jne 0x45a450 */ if (!fZ) goto L_0045a450;
L_0045a432:; BB(0x0045a432);
    /* 0045a432: mov dword ptr [ebp - 0x14], 0xbe */ W32((u32)(r_ebp+0xffffffecu), 0xbeu);
    /* 0045a439: mov dword ptr [ebp - 0x10], 0xbe */ W32((u32)(r_ebp+0xfffffff0u), 0xbeu);
    /* 0045a440: mov dword ptr [ebp - 0xc], 0x8a */ W32((u32)(r_ebp+0xfffffff4u), 0x8au);
    /* 0045a447: mov dword ptr [ebp - 8], 0x8a */ W32((u32)(r_ebp+0xfffffff8u), 0x8au);
    /* 0045a44e: jmp 0x45a472 */ goto L_0045a472;
L_0045a450:; BB(0x0045a450);
    /* 0045a450: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a454: jne 0x45a472 */ if (!fZ) goto L_0045a472;
L_0045a456:; BB(0x0045a456);
    /* 0045a456: mov dword ptr [ebp - 0x14], 0xbf */ W32((u32)(r_ebp+0xffffffecu), 0xbfu);
    /* 0045a45d: mov dword ptr [ebp - 0x10], 0xbf */ W32((u32)(r_ebp+0xfffffff0u), 0xbfu);
    /* 0045a464: mov dword ptr [ebp - 0xc], 0x6b */ W32((u32)(r_ebp+0xfffffff4u), 0x6bu);
    /* 0045a46b: mov dword ptr [ebp - 8], 0x6b */ W32((u32)(r_ebp+0xfffffff8u), 0x6bu);
L_0045a472:; BB(0x0045a472);
    /* 0045a472: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045a475: mov eax, dword ptr [ebp + eax*4 - 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 0045a479: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a47b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a47c: ret 8 */ FN_RET(0x0045a3f0); r_esp += 12; return;
}

void f_0045a480(void) /* PaiGowBetArea::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a480);
    /* 0045a480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a481: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a486: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045a489: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045a48e: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0045a494: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a497: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a49a: mov eax, dword ptr [edx + 0xae0] */ r_eax = R32((u32)(r_edx+0xae0u));
    /* 0045a4a0: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a4a3: jne 0x45a51e */ if (!fZ) goto L_0045a51e;
L_0045a4a5:; BB(0x0045a4a5);
    /* 0045a4a5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a4a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a4ac: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x45a4b1u); f_005f4f50();
    /* 0045a4b1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045a4b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a4b8: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x45a4bdu); f_005f56a0();
    /* 0045a4bd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045a4c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a4c2: je 0x45a51e */ if (fZ) goto L_0045a51e;
L_0045a4c4:; BB(0x0045a4c4);
    /* 0045a4c4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a4c7: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 0045a4cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4ce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a4d1: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0045a4d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4da: push 0x717440 */ { u32 v = 0x717440u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4df: push 0x707230 */ { u32 v = 0x707230u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a4e9: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0045a4ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4f0: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x45a4f5u); f_00686ede();
    /* 0045a4f5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a4f8: mov ecx, eax */ r_ecx = r_eax;
    /* 0045a4fa: call 0x462730 */ r_esp -= 4; W32(r_esp, 0x45a4ffu); f_00462730();
    /* 0045a4ff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045a502: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a504: je 0x45a51e */ if (fZ) goto L_0045a51e;
L_0045a506:; BB(0x0045a506);
    /* 0045a506: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045a509: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a50a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a50d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045a50f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a512: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0045a515: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a517u); call_ind(t); }
    /* 0045a517: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a51a: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0045a51e:; BB(0x0045a51e);
    /* 0045a51e: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a520: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a521: ret 4 */ FN_RET(0x0045a480); r_esp += 8; return;
}

void f_0045a530(void) /* PaiGowBetArea::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0045a530);
    /* 0045a530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a531: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a533: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a536: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0045a539: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 0045a53e: mov ecx, dword ptr [eax + 0x104] */ r_ecx = R32((u32)(r_eax+0x104u));
    /* 0045a544: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0045a547: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a54a: mov eax, dword ptr [edx + 0xae0] */ r_eax = R32((u32)(r_edx+0xae0u));
    /* 0045a550: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a553: jne 0x45a5ce */ if (!fZ) goto L_0045a5ce;
L_0045a555:; BB(0x0045a555);
    /* 0045a555: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a558: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a559: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a55c: call 0x5f4f50 */ r_esp -= 4; W32(r_esp, 0x45a561u); f_005f4f50();
    /* 0045a561: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045a564: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a565: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a568: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x45a56du); f_005f56a0();
    /* 0045a56d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045a570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a572: je 0x45a5ce */ if (fZ) goto L_0045a5ce;
L_0045a574:; BB(0x0045a574);
    /* 0045a574: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a577: mov edx, dword ptr [ecx + 0xae4] */ r_edx = R32((u32)(r_ecx+0xae4u));
    /* 0045a57d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a57e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a581: mov ecx, dword ptr [eax + 0xae0] */ r_ecx = R32((u32)(r_eax+0xae0u));
    /* 0045a587: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a588: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a58a: push 0x717440 */ { u32 v = 0x717440u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a58f: push 0x707230 */ { u32 v = 0x707230u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a594: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a596: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a599: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 0045a59f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5a0: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x45a5a5u); f_00686ede();
    /* 0045a5a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a5a8: mov ecx, eax */ r_ecx = r_eax;
    /* 0045a5aa: call 0x4627b0 */ r_esp -= 4; W32(r_esp, 0x45a5afu); f_004627b0();
    /* 0045a5af: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0045a5b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a5b4: je 0x45a5ce */ if (fZ) goto L_0045a5ce;
L_0045a5b6:; BB(0x0045a5b6);
    /* 0045a5b6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0045a5b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a5bd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0045a5bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045a5c2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0045a5c5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45a5c7u); call_ind(t); }
    /* 0045a5c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045a5ca: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_0045a5ce:; BB(0x0045a5ce);
    /* 0045a5ce: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a5d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a5d1: ret 4 */ FN_RET(0x0045a530); r_esp += 8; return;
}

