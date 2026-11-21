#include "protos.h"

void f_00557040(void) /* sub_557040 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557040);
    /* 00557040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557041: mov ebp, esp */ r_ebp = r_esp;
    /* 00557043: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557046: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00557049: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0055704c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055704f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557052: sub ecx, 0x30f357 */ {  u32 a = r_ecx; u32 b = 0x30f357u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00557058: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055705b: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0055705f: ja 0x557087 */ if ((!fC&&!fZ)) goto L_00557087;
L_00557061:; BB(0x00557061);
    /* 00557061: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557064: jmp dword ptr [edx*4 + 0x557090] */ { u32 t = R32((u32)(r_edx*4+0x557090u)); switch (t) { case 0x55706bu: goto L_0055706b; case 0x557072u: goto L_00557072; case 0x557079u: goto L_00557079; case 0x557080u: goto L_00557080; default: UNSUP(0x00557064, "jump table entry is not a known target"); } }
L_0055706b:; BB(0x0055706b);
    /* 0055706b: mov eax, 3 */ r_eax = 0x3u;
    /* 00557070: jmp 0x55708a */ goto L_0055708a;
L_00557072:; BB(0x00557072);
    /* 00557072: mov eax, 4 */ r_eax = 0x4u;
    /* 00557077: jmp 0x55708a */ goto L_0055708a;
L_00557079:; BB(0x00557079);
    /* 00557079: mov eax, 6 */ r_eax = 0x6u;
    /* 0055707e: jmp 0x55708a */ goto L_0055708a;
L_00557080:; BB(0x00557080);
    /* 00557080: mov eax, 8 */ r_eax = 0x8u;
    /* 00557085: jmp 0x55708a */ goto L_0055708a;
L_00557087:; BB(0x00557087);
    /* 00557087: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0055708a:; BB(0x0055708a);
    /* 0055708a: mov esp, ebp */ r_esp = r_ebp;
    /* 0055708c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055708d: ret 4 */ FN_RET(0x00557040); r_esp += 8; return;
}

void f_005571a0(void) /* sub_5571A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005571a0);
    /* 005571a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005571a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005571a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005571a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005571a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005571a9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005571af: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5571b4u); f_006375b0();
    /* 005571b4: mov ecx, eax */ r_ecx = r_eax;
    /* 005571b6: call 0x63aae0 */ r_esp -= 4; W32(r_esp, 0x5571bbu); f_0063aae0();
    /* 005571bb: mov esp, ebp */ r_esp = r_ebp;
    /* 005571bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005571be: ret  */ FN_RET(0x005571a0); r_esp += 4; return;
}

void f_005571c0(void) /* sub_5571C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005571c0);
    /* 005571c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005571c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005571c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005571c5: push 0x6a577e */ { u32 v = 0x6a577eu; r_esp -= 4; W32(r_esp, v); }
    /* 005571ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005571d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005571d1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005571d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005571d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005571db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005571dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005571df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005571e5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005571e8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005571eb: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005571ef: jne 0x557238 */ if (!fZ) goto L_00557238;
L_005571f1:; BB(0x005571f1);
    /* 005571f1: push 0x810 */ { u32 v = 0x810u; r_esp -= 4; W32(r_esp, v); }
    /* 005571f6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5571fbu); f_00686d82();
    /* 005571fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005571fe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00557201: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557208: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055720c: je 0x55721b */ if (fZ) goto L_0055721b;
L_0055720e:; BB(0x0055720e);
    /* 0055720e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00557211: call 0x642e10 */ r_esp -= 4; W32(r_esp, 0x557216u); f_00642e10();
    /* 00557216: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00557219: jmp 0x557222 */ goto L_00557222;
L_0055721b:; BB(0x0055721b);
    /* 0055721b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00557222:; BB(0x00557222);
    /* 00557222: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00557225: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00557228: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055722f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00557232: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00557235: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
L_00557238:; BB(0x00557238);
    /* 00557238: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055723b: call 0x557340 */ r_esp -= 4; W32(r_esp, 0x557240u); f_00557340();
    /* 00557240: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00557243: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00557245: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00557247: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0055724a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055724b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055724e: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 00557251: call 0x642e70 */ r_esp -= 4; W32(r_esp, 0x557256u); f_00642e70();
    /* 00557256: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00557259: call 0x557310 */ r_esp -= 4; W32(r_esp, 0x55725eu); f_00557310();
    /* 0055725e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00557261: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 00557268: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0055726f: jmp 0x55727a */ goto L_0055727a;
L_00557271:; BB(0x00557271);
    /* 00557271: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00557274: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00557277: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0055727a:; BB(0x0055727a);
    /* 0055727a: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055727e: jge 0x55729c */ if ((fS==fO)) goto L_0055729c;
L_00557280:; BB(0x00557280);
    /* 00557280: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00557283: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00557286: mov word ptr [eax + edx*2 + 0x18], 0 */ W16((u32)(r_eax+r_edx*2+0x18u), 0x0u);
    /* 0055728d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00557290: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00557293: mov word ptr [edx + ecx*2 + 0x22], 0 */ W16((u32)(r_edx+r_ecx*2+0x22u), 0x0u);
    /* 0055729a: jmp 0x557271 */ goto L_00557271;
L_0055729c:; BB(0x0055729c);
    /* 0055729c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055729f: mov byte ptr [eax + 0x2e], 1 */ W8((u32)(r_eax+0x2eu), 0x1u);
    /* 005572a3: push 0x740a90 */ { u32 v = 0x740a90u; r_esp -= 4; W32(r_esp, v); }
    /* 005572a8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005572aa: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005572b0: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x5572b5u); f_0057ab80();
    /* 005572b5: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005572ba: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005572c0: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5572c5u); f_005f2ba0();
    /* 005572c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005572c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005572cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005572d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005572d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005572d3: ret  */ FN_RET(0x005571c0); r_esp += 4; return;
}

void f_005572e0(void) /* sub_5572E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005572e0);
    /* 005572e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005572e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005572e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005572e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005572e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005572ec: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005572ef: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005572f2: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005572f6: je 0x5572fc */ if (fZ) goto L_005572fc;
L_005572f8:; BB(0x005572f8);
    /* 005572f8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005572fa: jmp 0x5572fe */ goto L_005572fe;
L_005572fc:; BB(0x005572fc);
    /* 005572fc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005572fe:; BB(0x005572fe);
    /* 005572fe: mov esp, ebp */ r_esp = r_ebp;
    /* 00557300: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557301: ret  */ FN_RET(0x005572e0); r_esp += 4; return;
}

void f_00557310(void) /* sub_557310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557310);
    /* 00557310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557311: mov ebp, esp */ r_ebp = r_esp;
    /* 00557313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00557317: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557319: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055731b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055731e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00557321: call 0x6437d0 */ r_esp -= 4; W32(r_esp, 0x557326u); f_006437d0();
    /* 00557326: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557328: push 0x6c8e30 */ { u32 v = 0x6c8e30u; r_esp -= 4; W32(r_esp, v); }
    /* 0055732d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055732f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557331: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557334: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00557337: call 0x643930 */ r_esp -= 4; W32(r_esp, 0x55733cu); f_00643930();
    /* 0055733c: mov esp, ebp */ r_esp = r_ebp;
    /* 0055733e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055733f: ret  */ FN_RET(0x00557310); r_esp += 4; return;
}

void f_00557340(void) /* sub_557340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557340);
    /* 00557340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557341: mov ebp, esp */ r_ebp = r_esp;
    /* 00557343: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557346: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00557349: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0055734e: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 00557354: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00557357: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055735b: je 0x557390 */ if (fZ) goto L_00557390;
L_0055735d:; BB(0x0055735d);
    /* 0055735d: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 00557363: mov eax, dword ptr [edx + 0x4f14] */ r_eax = R32((u32)(r_edx+0x4f14u));
    /* 00557369: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0055736c: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557370: je 0x557390 */ if (fZ) goto L_00557390;
L_00557372:; BB(0x00557372);
    /* 00557372: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00557378: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0055737e: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00557381: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557385: je 0x557390 */ if (fZ) goto L_00557390;
L_00557387:; BB(0x00557387);
    /* 00557387: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0055738e: jmp 0x557397 */ goto L_00557397;
L_00557390:; BB(0x00557390);
    /* 00557390: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_00557397:; BB(0x00557397);
    /* 00557397: mov al, byte ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffecu))) & 0xffu);
    /* 0055739a: mov esp, ebp */ r_esp = r_ebp;
    /* 0055739c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055739d: ret  */ FN_RET(0x00557340); r_esp += 4; return;
}

void f_005573a0(void) /* sub_5573A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005573a0);
    /* 005573a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005573a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005573a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005573a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005573a9: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005573ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005573af: jne 0x5573b5 */ if (!fZ) goto L_005573b5;
L_005573b1:; BB(0x005573b1);
    /* 005573b1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005573b3: jmp 0x5573e8 */ goto L_005573e8;
L_005573b5:; BB(0x005573b5);
    /* 005573b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005573bc: jmp 0x5573c7 */ goto L_005573c7;
L_005573be:; BB(0x005573be);
    /* 005573be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005573c1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005573c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005573c7:; BB(0x005573c7);
    /* 005573c7: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005573cb: jge 0x5573e6 */ if ((fS==fO)) goto L_005573e6;
L_005573cd:; BB(0x005573cd);
    /* 005573cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005573d0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005573d3: movzx ecx, word ptr [eax + edx*2 + 0x18] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x18u));
    /* 005573d8: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 005573dc: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005573de: jne 0x5573e4 */ if (!fZ) goto L_005573e4;
L_005573e0:; BB(0x005573e0);
    /* 005573e0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005573e2: jmp 0x5573e8 */ goto L_005573e8;
L_005573e4:; BB(0x005573e4);
    /* 005573e4: jmp 0x5573be */ goto L_005573be;
L_005573e6:; BB(0x005573e6);
    /* 005573e6: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005573e8:; BB(0x005573e8);
    /* 005573e8: mov esp, ebp */ r_esp = r_ebp;
    /* 005573ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005573eb: ret 4 */ FN_RET(0x005573a0); r_esp += 8; return;
}

void f_005573f0(void) /* sub_5573F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005573f0);
    /* 005573f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005573f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005573f3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005573f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005573f7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005573fa: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00557400: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00557406: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055740d: jmp 0x557418 */ goto L_00557418;
L_0055740f:; BB(0x0055740f);
    /* 0055740f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557412: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557415: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00557418:; BB(0x00557418);
    /* 00557418: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055741c: jge 0x557465 */ if ((fS==fO)) goto L_00557465;
L_0055741e:; BB(0x0055741e);
    /* 0055741e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557421: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00557424: movzx eax, word ptr [edx + ecx*2 + 0x18] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x18u));
    /* 00557429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055742b: je 0x557463 */ if (fZ) goto L_00557463;
L_0055742d:; BB(0x0055742d);
    /* 0055742d: movzx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff4u));
    /* 00557431: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557433: jne 0x557446 */ if (!fZ) goto L_00557446;
L_00557435:; BB(0x00557435);
    /* 00557435: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557438: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055743b: mov cx, word ptr [eax + edx*2 + 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x18u))) & 0xffffu);
    /* 00557440: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
    /* 00557444: jmp 0x557463 */ goto L_00557463;
L_00557446:; BB(0x00557446);
    /* 00557446: movzx edx, word ptr [ebp - 8] */ r_edx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 0055744a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055744c: jne 0x55745f */ if (!fZ) goto L_0055745f;
L_0055744e:; BB(0x0055744e);
    /* 0055744e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557451: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00557454: mov dx, word ptr [ecx + eax*2 + 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x18u))) & 0xffffu);
    /* 00557459: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
    /* 0055745d: jmp 0x557463 */ goto L_00557463;
L_0055745f:; BB(0x0055745f);
    /* 0055745f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557461: jmp 0x55749f */ goto L_0055749f;
L_00557463:; BB(0x00557463);
    /* 00557463: jmp 0x55740f */ goto L_0055740f;
L_00557465:; BB(0x00557465);
    /* 00557465: movzx eax, word ptr [ebp - 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xfffffff4u));
    /* 00557469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055746b: je 0x557475 */ if (fZ) goto L_00557475;
L_0055746d:; BB(0x0055746d);
    /* 0055746d: movzx ecx, word ptr [ebp - 8] */ r_ecx = (u32)R16((u32)(r_ebp+0xfffffff8u));
    /* 00557471: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557473: jne 0x557479 */ if (!fZ) goto L_00557479;
L_00557475:; BB(0x00557475);
    /* 00557475: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557477: jmp 0x55749f */ goto L_0055749f;
L_00557479:; BB(0x00557479);
    /* 00557479: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0055747d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055747e: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557483u); f_00641280();
    /* 00557483: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557486: mov esi, eax */ r_esi = r_eax;
    /* 00557488: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 0055748c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055748d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557492u); f_00641280();
    /* 00557492: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557495: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557497: je 0x55749d */ if (fZ) goto L_0055749d;
L_00557499:; BB(0x00557499);
    /* 00557499: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055749b: jmp 0x55749f */ goto L_0055749f;
L_0055749d:; BB(0x0055749d);
    /* 0055749d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0055749f:; BB(0x0055749f);
    /* 0055749f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005574a0: mov esp, ebp */ r_esp = r_ebp;
    /* 005574a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005574a3: ret  */ FN_RET(0x005573f0); r_esp += 4; return;
}

void f_005574b0(void) /* sub_5574B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005574b0);
    /* 005574b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005574b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005574b3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005574b6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005574bb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005574bd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005574c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005574c1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005574c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005574cb: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005574d2: jmp 0x5574dd */ goto L_005574dd;
L_005574d4:; BB(0x005574d4);
    /* 005574d4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005574d7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005574da: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005574dd:; BB(0x005574dd);
    /* 005574dd: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005574e1: jge 0x5574ef */ if ((fS==fO)) goto L_005574ef;
L_005574e3:; BB(0x005574e3);
    /* 005574e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005574e6: mov word ptr [ebp + ecx*2 - 0x18], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffe8u), 0x0u);
    /* 005574ed: jmp 0x5574d4 */ goto L_005574d4;
L_005574ef:; BB(0x005574ef);
    /* 005574ef: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 005574f6: mov dword ptr [ebp - 0x20], 0xf */ W32((u32)(r_ebp+0xffffffe0u), 0xfu);
    /* 005574fd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00557504: jmp 0x55750f */ goto L_0055750f;
L_00557506:; BB(0x00557506);
    /* 00557506: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557509: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055750c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0055750f:; BB(0x0055750f);
    /* 0055750f: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557513: jge 0x5575d2 */ if ((fS==fO)) goto L_005575d2;
L_00557519:; BB(0x00557519);
    /* 00557519: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055751c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055751f: movzx edx, word ptr [ecx + eax*2 + 0x18] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x18u));
    /* 00557524: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557526: je 0x5575cd */ if (fZ) goto L_005575cd;
L_0055752c:; BB(0x0055752c);
    /* 0055752c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055752f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00557532: mov dx, word ptr [ecx + eax*2 + 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x18u))) & 0xffffu);
    /* 00557537: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557538: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 0055753e: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x557543u); f_0054c590();
    /* 00557543: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557546: jne 0x557551 */ if (!fZ) goto L_00557551;
L_00557548:; BB(0x00557548);
    /* 00557548: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055754a: jmp 0x5577c7 */ goto L_005577c7;
L_00557551:; BB(0x00557551);
    /* 00557551: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557554: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557557: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055755a: mov cx, word ptr [edx + ecx*2 + 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x18u))) & 0xffffu);
    /* 0055755f: mov word ptr [ebp + eax*2 - 0x18], cx */ W16((u32)(r_ebp+r_eax*2+0xffffffe8u), (u16)r_ecx);
    /* 00557564: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557567: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055756a: mov cx, word ptr [eax + edx*2 + 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x18u))) & 0xffffu);
    /* 0055756f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557570: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557575u); f_00641280();
    /* 00557575: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557578: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055757b: jle 0x557594 */ if ((fZ||fS!=fO)) goto L_00557594;
L_0055757d:; BB(0x0055757d);
    /* 0055757d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557580: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00557583: mov cx, word ptr [eax + edx*2 + 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x18u))) & 0xffffu);
    /* 00557588: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557589: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55758eu); f_00641280();
    /* 0055758e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557591: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_00557594:; BB(0x00557594);
    /* 00557594: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557597: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055759a: mov cx, word ptr [eax + edx*2 + 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x18u))) & 0xffffu);
    /* 0055759f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005575a0: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5575a5u); f_00641280();
    /* 005575a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005575a8: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005575ab: jge 0x5575c4 */ if ((fS==fO)) goto L_005575c4;
L_005575ad:; BB(0x005575ad);
    /* 005575ad: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005575b0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005575b3: mov cx, word ptr [eax + edx*2 + 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x18u))) & 0xffffu);
    /* 005575b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005575b9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5575beu); f_00641280();
    /* 005575be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005575c1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005575c4:; BB(0x005575c4);
    /* 005575c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005575c7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005575ca: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005575cd:; BB(0x005575cd);
    /* 005575cd: jmp 0x557506 */ goto L_00557506;
L_005575d2:; BB(0x005575d2);
    /* 005575d2: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005575d6: je 0x5575df */ if (fZ) goto L_005575df;
L_005575d8:; BB(0x005575d8);
    /* 005575d8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005575da: jmp 0x5577c7 */ goto L_005577c7;
L_005575df:; BB(0x005575df);
    /* 005575df: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 005575e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005575e4: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5575e9u); f_00641280();
    /* 005575e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005575ec: mov esi, eax */ r_esi = r_eax;
    /* 005575ee: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 005575f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005575f3: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5575f8u); f_00641280();
    /* 005575f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005575fb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005575fd: jne 0x557606 */ if (!fZ) goto L_00557606;
L_005575ff:; BB(0x005575ff);
    /* 005575ff: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557601: jmp 0x5577c7 */ goto L_005577c7;
L_00557606:; BB(0x00557606);
    /* 00557606: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 0055760a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055760b: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557610u); f_00641280();
    /* 00557610: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557613: mov esi, eax */ r_esi = r_eax;
    /* 00557615: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00557619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055761a: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55761fu); f_00641280();
    /* 0055761f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557622: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557624: jne 0x55762d */ if (!fZ) goto L_0055762d;
L_00557626:; BB(0x00557626);
    /* 00557626: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557628: jmp 0x5577c7 */ goto L_005577c7;
L_0055762d:; BB(0x0055762d);
    /* 0055762d: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00557631: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557632: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557637u); f_00641280();
    /* 00557637: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055763a: mov esi, eax */ r_esi = r_eax;
    /* 0055763c: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00557640: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557641: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557646u); f_00641280();
    /* 00557646: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557649: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055764b: jne 0x557654 */ if (!fZ) goto L_00557654;
L_0055764d:; BB(0x0055764d);
    /* 0055764d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055764f: jmp 0x5577c7 */ goto L_005577c7;
L_00557654:; BB(0x00557654);
    /* 00557654: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00557658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557659: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55765eu); f_00641280();
    /* 0055765e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557661: mov esi, eax */ r_esi = r_eax;
    /* 00557663: mov cx, word ptr [ebp - 0x12] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 00557667: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557668: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55766du); f_00641280();
    /* 0055766d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557670: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557672: jne 0x55767b */ if (!fZ) goto L_0055767b;
L_00557674:; BB(0x00557674);
    /* 00557674: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557676: jmp 0x5577c7 */ goto L_005577c7;
L_0055767b:; BB(0x0055767b);
    /* 0055767b: mov dx, word ptr [ebp - 0x16] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 0055767f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557680: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557685u); f_00641280();
    /* 00557685: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557688: mov esi, eax */ r_esi = r_eax;
    /* 0055768a: mov ax, word ptr [ebp - 0x12] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 0055768e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055768f: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557694u); f_00641280();
    /* 00557694: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557697: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557699: jne 0x5576a2 */ if (!fZ) goto L_005576a2;
L_0055769b:; BB(0x0055769b);
    /* 0055769b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055769d: jmp 0x5577c7 */ goto L_005577c7;
L_005576a2:; BB(0x005576a2);
    /* 005576a2: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 005576a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005576a7: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5576acu); f_00641280();
    /* 005576ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005576af: mov esi, eax */ r_esi = r_eax;
    /* 005576b1: mov dx, word ptr [ebp - 0x12] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 005576b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005576b6: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5576bbu); f_00641280();
    /* 005576bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005576be: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005576c0: jne 0x5576c9 */ if (!fZ) goto L_005576c9;
L_005576c2:; BB(0x005576c2);
    /* 005576c2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005576c4: jmp 0x5577c7 */ goto L_005577c7;
L_005576c9:; BB(0x005576c9);
    /* 005576c9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005576cc: sub eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005576cf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005576d2: jle 0x5576db */ if ((fZ||fS!=fO)) goto L_005576db;
L_005576d4:; BB(0x005576d4);
    /* 005576d4: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005576d6: jmp 0x5577c7 */ goto L_005577c7;
L_005576db:; BB(0x005576db);
    /* 005576db: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005576df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005576e1: je 0x5577c5 */ if (fZ) goto L_005577c5;
L_005576e7:; BB(0x005576e7);
    /* 005576e7: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 005576eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005576ec: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5576f1u); f_00641290();
    /* 005576f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005576f4: mov esi, eax */ r_esi = r_eax;
    /* 005576f6: mov ax, word ptr [ebp - 0x16] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 005576fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005576fb: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x557700u); f_00641290();
    /* 00557700: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557703: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557705: je 0x55770e */ if (fZ) goto L_0055770e;
L_00557707:; BB(0x00557707);
    /* 00557707: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557709: jmp 0x5577c7 */ goto L_005577c7;
L_0055770e:; BB(0x0055770e);
    /* 0055770e: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00557712: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557713: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x557718u); f_00641290();
    /* 00557718: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055771b: mov esi, eax */ r_esi = r_eax;
    /* 0055771d: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00557721: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557722: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x557727u); f_00641290();
    /* 00557727: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055772a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055772c: je 0x557735 */ if (fZ) goto L_00557735;
L_0055772e:; BB(0x0055772e);
    /* 0055772e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557730: jmp 0x5577c7 */ goto L_005577c7;
L_00557735:; BB(0x00557735);
    /* 00557735: mov ax, word ptr [ebp - 0x16] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00557739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055773a: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55773fu); f_00641290();
    /* 0055773f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557742: mov esi, eax */ r_esi = r_eax;
    /* 00557744: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00557748: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557749: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x55774eu); f_00641290();
    /* 0055774e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557751: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557753: je 0x557759 */ if (fZ) goto L_00557759;
L_00557755:; BB(0x00557755);
    /* 00557755: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557757: jmp 0x5577c7 */ goto L_005577c7;
L_00557759:; BB(0x00557759);
    /* 00557759: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 0055775d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055775e: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x557763u); f_00641290();
    /* 00557763: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557766: mov esi, eax */ r_esi = r_eax;
    /* 00557768: mov ax, word ptr [ebp - 0x12] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 0055776c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055776d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x557772u); f_00641290();
    /* 00557772: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557775: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557777: je 0x55777d */ if (fZ) goto L_0055777d;
L_00557779:; BB(0x00557779);
    /* 00557779: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055777b: jmp 0x5577c7 */ goto L_005577c7;
L_0055777d:; BB(0x0055777d);
    /* 0055777d: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00557781: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557782: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x557787u); f_00641290();
    /* 00557787: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055778a: mov esi, eax */ r_esi = r_eax;
    /* 0055778c: mov dx, word ptr [ebp - 0x12] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 00557790: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557791: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x557796u); f_00641290();
    /* 00557796: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557799: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055779b: je 0x5577a1 */ if (fZ) goto L_005577a1;
L_0055779d:; BB(0x0055779d);
    /* 0055779d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055779f: jmp 0x5577c7 */ goto L_005577c7;
L_005577a1:; BB(0x005577a1);
    /* 005577a1: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 005577a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005577a6: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5577abu); f_00641290();
    /* 005577ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005577ae: mov esi, eax */ r_esi = r_eax;
    /* 005577b0: mov cx, word ptr [ebp - 0x12] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeeu))) & 0xffffu);
    /* 005577b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005577b5: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5577bau); f_00641290();
    /* 005577ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005577bd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005577bf: je 0x5577c5 */ if (fZ) goto L_005577c5;
L_005577c1:; BB(0x005577c1);
    /* 005577c1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005577c3: jmp 0x5577c7 */ goto L_005577c7;
L_005577c5:; BB(0x005577c5);
    /* 005577c5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005577c7:; BB(0x005577c7);
    /* 005577c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005577c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005577cb: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005577cd: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5577d2u); f_00686d72();
    /* 005577d2: mov esp, ebp */ r_esp = r_ebp;
    /* 005577d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005577d5: ret 4 */ FN_RET(0x005574b0); r_esp += 8; return;
}

void f_005577e0(void) /* sub_5577E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005577e0);
    /* 005577e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005577e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005577e3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005577e6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005577eb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005577ed: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005577f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005577f1: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005577f4: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005577fb: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00557802: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557809: jmp 0x557814 */ goto L_00557814;
L_0055780b:; BB(0x0055780b);
    /* 0055780b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055780e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557811: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00557814:; BB(0x00557814);
    /* 00557814: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557818: jge 0x557826 */ if ((fS==fO)) goto L_00557826;
L_0055781a:; BB(0x0055781a);
    /* 0055781a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055781d: mov word ptr [ebp + ecx*2 - 0x18], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffe8u), 0x0u);
    /* 00557824: jmp 0x55780b */ goto L_0055780b;
L_00557826:; BB(0x00557826);
    /* 00557826: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0055782d: mov dword ptr [ebp - 0x20], 0xf */ W32((u32)(r_ebp+0xffffffe0u), 0xfu);
    /* 00557834: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055783b: jmp 0x557846 */ goto L_00557846;
L_0055783d:; BB(0x0055783d);
    /* 0055783d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557840: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00557843: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00557846:; BB(0x00557846);
    /* 00557846: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055784a: jge 0x55790b */ if ((fS==fO)) goto L_0055790b;
L_00557850:; BB(0x00557850);
    /* 00557850: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557853: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00557856: movzx edx, word ptr [ecx + eax*2 + 0x18] */ r_edx = (u32)R16((u32)(r_ecx+r_eax*2+0x18u));
    /* 0055785b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055785d: je 0x557906 */ if (fZ) goto L_00557906;
L_00557863:; BB(0x00557863);
    /* 00557863: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557866: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00557869: mov dx, word ptr [ecx + eax*2 + 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x18u))) & 0xffffu);
    /* 0055786e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055786f: mov ecx, dword ptr [0x793428] */ r_ecx = R32((u32)(0x793428u));
    /* 00557875: call 0x54c590 */ r_esp -= 4; W32(r_esp, 0x55787au); f_0054c590();
    /* 0055787a: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055787d: jne 0x55788a */ if (!fZ) goto L_0055788a;
L_0055787f:; BB(0x0055787f);
    /* 0055787f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00557882: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557885: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00557888: jmp 0x557906 */ goto L_00557906;
L_0055788a:; BB(0x0055788a);
    /* 0055788a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055788d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557890: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00557893: mov dx, word ptr [eax + edx*2 + 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x18u))) & 0xffffu);
    /* 00557898: mov word ptr [ebp + ecx*2 - 0x18], dx */ W16((u32)(r_ebp+r_ecx*2+0xffffffe8u), (u16)r_edx);
    /* 0055789d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005578a0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005578a3: mov dx, word ptr [ecx + eax*2 + 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x18u))) & 0xffffu);
    /* 005578a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005578a9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5578aeu); f_00641280();
    /* 005578ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005578b1: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005578b4: jle 0x5578cd */ if ((fZ||fS!=fO)) goto L_005578cd;
L_005578b6:; BB(0x005578b6);
    /* 005578b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005578b9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005578bc: mov dx, word ptr [ecx + eax*2 + 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x18u))) & 0xffffu);
    /* 005578c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005578c2: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5578c7u); f_00641280();
    /* 005578c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005578ca: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005578cd:; BB(0x005578cd);
    /* 005578cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005578d0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005578d3: mov dx, word ptr [ecx + eax*2 + 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x18u))) & 0xffffu);
    /* 005578d8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005578d9: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5578deu); f_00641280();
    /* 005578de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005578e1: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005578e4: jge 0x5578fd */ if ((fS==fO)) goto L_005578fd;
L_005578e6:; BB(0x005578e6);
    /* 005578e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005578e9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005578ec: mov dx, word ptr [ecx + eax*2 + 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x18u))) & 0xffffu);
    /* 005578f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005578f2: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x5578f7u); f_00641280();
    /* 005578f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005578fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005578fd:; BB(0x005578fd);
    /* 005578fd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557900: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557903: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00557906:; BB(0x00557906);
    /* 00557906: jmp 0x55783d */ goto L_0055783d;
L_0055790b:; BB(0x0055790b);
    /* 0055790b: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055790f: je 0x557918 */ if (fZ) goto L_00557918;
L_00557911:; BB(0x00557911);
    /* 00557911: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557913: jmp 0x557a1f */ goto L_00557a1f;
L_00557918:; BB(0x00557918);
    /* 00557918: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055791c: je 0x557925 */ if (fZ) goto L_00557925;
L_0055791e:; BB(0x0055791e);
    /* 0055791e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557920: jmp 0x557a1f */ goto L_00557a1f;
L_00557925:; BB(0x00557925);
    /* 00557925: mov cx, word ptr [ebp - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00557929: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055792a: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55792fu); f_00641280();
    /* 0055792f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557932: mov esi, eax */ r_esi = r_eax;
    /* 00557934: mov dx, word ptr [ebp - 0x16] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00557938: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557939: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55793eu); f_00641280();
    /* 0055793e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557941: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557943: jne 0x55794c */ if (!fZ) goto L_0055794c;
L_00557945:; BB(0x00557945);
    /* 00557945: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557947: jmp 0x557a1f */ goto L_00557a1f;
L_0055794c:; BB(0x0055794c);
    /* 0055794c: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00557950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557951: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557956u); f_00641280();
    /* 00557956: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557959: mov esi, eax */ r_esi = r_eax;
    /* 0055795b: mov cx, word ptr [ebp - 0x14] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 0055795f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557960: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557965u); f_00641280();
    /* 00557965: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557968: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055796a: jne 0x557973 */ if (!fZ) goto L_00557973;
L_0055796c:; BB(0x0055796c);
    /* 0055796c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0055796e: jmp 0x557a1f */ goto L_00557a1f;
L_00557973:; BB(0x00557973);
    /* 00557973: mov dx, word ptr [ebp - 0x16] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 00557977: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557978: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55797du); f_00641280();
    /* 0055797d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557980: mov esi, eax */ r_esi = r_eax;
    /* 00557982: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00557986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557987: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x55798cu); f_00641280();
    /* 0055798c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055798f: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557991: jne 0x55799a */ if (!fZ) goto L_0055799a;
L_00557993:; BB(0x00557993);
    /* 00557993: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557995: jmp 0x557a1f */ goto L_00557a1f;
L_0055799a:; BB(0x0055799a);
    /* 0055799a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055799d: sub ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005579a0: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005579a3: jle 0x5579a9 */ if ((fZ||fS!=fO)) goto L_005579a9;
L_005579a5:; BB(0x005579a5);
    /* 005579a5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005579a7: jmp 0x557a1f */ goto L_00557a1f;
L_005579a9:; BB(0x005579a9);
    /* 005579a9: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 005579ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005579af: je 0x557a1d */ if (fZ) goto L_00557a1d;
L_005579b1:; BB(0x005579b1);
    /* 005579b1: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 005579b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005579b6: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5579bbu); f_00641290();
    /* 005579bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005579be: mov esi, eax */ r_esi = r_eax;
    /* 005579c0: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 005579c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005579c5: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5579cau); f_00641290();
    /* 005579ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005579cd: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005579cf: je 0x5579d5 */ if (fZ) goto L_005579d5;
L_005579d1:; BB(0x005579d1);
    /* 005579d1: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005579d3: jmp 0x557a1f */ goto L_00557a1f;
L_005579d5:; BB(0x005579d5);
    /* 005579d5: mov dx, word ptr [ebp - 0x18] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 005579d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005579da: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5579dfu); f_00641290();
    /* 005579df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005579e2: mov esi, eax */ r_esi = r_eax;
    /* 005579e4: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 005579e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005579e9: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x5579eeu); f_00641290();
    /* 005579ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005579f1: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005579f3: je 0x5579f9 */ if (fZ) goto L_005579f9;
L_005579f5:; BB(0x005579f5);
    /* 005579f5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005579f7: jmp 0x557a1f */ goto L_00557a1f;
L_005579f9:; BB(0x005579f9);
    /* 005579f9: mov cx, word ptr [ebp - 0x16] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffeau))) & 0xffffu);
    /* 005579fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005579fe: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x557a03u); f_00641290();
    /* 00557a03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557a06: mov esi, eax */ r_esi = r_eax;
    /* 00557a08: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00557a0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557a0d: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x557a12u); f_00641290();
    /* 00557a12: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557a15: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557a17: je 0x557a1d */ if (fZ) goto L_00557a1d;
L_00557a19:; BB(0x00557a19);
    /* 00557a19: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00557a1b: jmp 0x557a1f */ goto L_00557a1f;
L_00557a1d:; BB(0x00557a1d);
    /* 00557a1d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00557a1f:; BB(0x00557a1f);
    /* 00557a1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00557a20: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557a23: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00557a25: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x557a2au); f_00686d72();
    /* 00557a2a: mov esp, ebp */ r_esp = r_ebp;
    /* 00557a2c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557a2d: ret 4 */ FN_RET(0x005577e0); r_esp += 8; return;
}

void f_00557a30(void) /* sub_557A30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557a30);
    /* 00557a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557a31: mov ebp, esp */ r_ebp = r_esp;
    /* 00557a33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557a36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00557a39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557a40: jmp 0x557a4b */ goto L_00557a4b;
L_00557a42:; BB(0x00557a42);
    /* 00557a42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557a45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557a48: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00557a4b:; BB(0x00557a4b);
    /* 00557a4b: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557a4f: jge 0x557a73 */ if ((fS==fO)) goto L_00557a73;
L_00557a51:; BB(0x00557a51);
    /* 00557a51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557a54: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557a57: movzx eax, word ptr [edx + ecx*2 + 0x18] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x18u));
    /* 00557a5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557a5e: jne 0x557a71 */ if (!fZ) goto L_00557a71;
L_00557a60:; BB(0x00557a60);
    /* 00557a60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557a63: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557a66: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00557a6a: mov word ptr [edx + ecx*2 + 0x18], ax */ W16((u32)(r_edx+r_ecx*2+0x18u), (u16)r_eax);
    /* 00557a6f: jmp 0x557a73 */ goto L_00557a73;
L_00557a71:; BB(0x00557a71);
    /* 00557a71: jmp 0x557a42 */ goto L_00557a42;
L_00557a73:; BB(0x00557a73);
    /* 00557a73: mov esp, ebp */ r_esp = r_ebp;
    /* 00557a75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557a76: ret 4 */ FN_RET(0x00557a30); r_esp += 8; return;
}

void f_00557a80(void) /* sub_557A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557a80);
    /* 00557a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00557a83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557a86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00557a89: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00557a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557a8f: jne 0x557a96 */ if (!fZ) goto L_00557a96;
L_00557a91:; BB(0x00557a91);
    /* 00557a91: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00557a94: jmp 0x557acb */ goto L_00557acb;
L_00557a96:; BB(0x00557a96);
    /* 00557a96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557a9d: jmp 0x557aa8 */ goto L_00557aa8;
L_00557a9f:; BB(0x00557a9f);
    /* 00557a9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557aa2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00557aa5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00557aa8:; BB(0x00557aa8);
    /* 00557aa8: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557aac: jge 0x557ac8 */ if ((fS==fO)) goto L_00557ac8;
L_00557aae:; BB(0x00557aae);
    /* 00557aae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557ab1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557ab4: movzx ecx, word ptr [eax + edx*2 + 0x18] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*2+0x18u));
    /* 00557ab9: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00557abd: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557abf: jne 0x557ac6 */ if (!fZ) goto L_00557ac6;
L_00557ac1:; BB(0x00557ac1);
    /* 00557ac1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557ac4: jmp 0x557acb */ goto L_00557acb;
L_00557ac6:; BB(0x00557ac6);
    /* 00557ac6: jmp 0x557a9f */ goto L_00557a9f;
L_00557ac8:; BB(0x00557ac8);
    /* 00557ac8: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00557acb:; BB(0x00557acb);
    /* 00557acb: mov esp, ebp */ r_esp = r_ebp;
    /* 00557acd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557ace: ret 4 */ FN_RET(0x00557a80); r_esp += 8; return;
}

void f_00557ae0(void) /* sub_557AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557ae0);
    /* 00557ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00557ae3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557ae6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00557ae7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00557aea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00557aed: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00557af0: cmp dword ptr [ebp - 0x18], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00557af4: ja 0x557d92 */ if ((!fC&&!fZ)) goto L_00557d92;
L_00557afa:; BB(0x00557afa);
    /* 00557afa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00557afd: jmp dword ptr [ecx*4 + 0x557d9c] */ { u32 t = R32((u32)(r_ecx*4+0x557d9cu)); switch (t) { case 0x557b04u: goto L_00557b04; case 0x557b68u: goto L_00557b68; case 0x557bd8u: goto L_00557bd8; case 0x557c24u: goto L_00557c24; case 0x557c71u: goto L_00557c71; case 0x557cb3u: goto L_00557cb3; case 0x557d32u: goto L_00557d32; default: UNSUP(0x00557afd, "jump table entry is not a known target"); } }
L_00557b04:; BB(0x00557b04);
    /* 00557b04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557b07: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00557b0d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557b10: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557b11: fld1  */ FPUSH(1.0);
    /* 00557b13: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557b16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b18: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b1e: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b23: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00557b29: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00557b2b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557b31: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00557b37: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x557b39u); call_ind(t); }
    /* 00557b39: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557b3c: call 0x5d1210 */ r_esp -= 4; W32(r_esp, 0x557b41u); f_005d1210();
    /* 00557b41: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00557b47: call 0x554670 */ r_esp -= 4; W32(r_esp, 0x557b4cu); f_00554670();
    /* 00557b4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00557b4f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00557b52: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00557b55: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557b59: je 0x557b63 */ if (fZ) goto L_00557b63;
L_00557b5b:; BB(0x00557b5b);
    /* 00557b5b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557b5e: call 0x558ca0 */ r_esp -= 4; W32(r_esp, 0x557b63u); f_00558ca0();
L_00557b63:; BB(0x00557b63);
    /* 00557b63: jmp 0x557d92 */ goto L_00557d92;
L_00557b68:; BB(0x00557b68);
    /* 00557b68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557b6b: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00557b71: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557b74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557b75: fld1  */ FPUSH(1.0);
    /* 00557b77: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557b7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b7c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b82: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 00557b87: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00557b8d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00557b8f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557b95: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00557b9b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x557b9du); call_ind(t); }
    /* 00557b9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557ba0: call 0x5d0f00 */ r_esp -= 4; W32(r_esp, 0x557ba5u); f_005d0f00();
    /* 00557ba5: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00557bab: call 0x554670 */ r_esp -= 4; W32(r_esp, 0x557bb0u); f_00554670();
    /* 00557bb0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00557bb3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00557bb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00557bb9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557bbc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00557bbe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557bc1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00557bc4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x557bc6u); call_ind(t); }
    /* 00557bc6: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557bc9: jne 0x557bd3 */ if (!fZ) goto L_00557bd3;
L_00557bcb:; BB(0x00557bcb);
    /* 00557bcb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557bce: call 0x558ca0 */ r_esp -= 4; W32(r_esp, 0x557bd3u); f_00558ca0();
L_00557bd3:; BB(0x00557bd3);
    /* 00557bd3: jmp 0x557d92 */ goto L_00557d92;
L_00557bd8:; BB(0x00557bd8);
    /* 00557bd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557bda: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557bdb: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00557be1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557be4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557be5: fld1  */ FPUSH(1.0);
    /* 00557be7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557bea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557bec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00557bee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557bf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557bf2: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 00557bf7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00557bfc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00557bfe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557c04: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00557c0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x557c0cu); call_ind(t); }
    /* 00557c0c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557c0f: call 0x557dc0 */ r_esp -= 4; W32(r_esp, 0x557c14u); f_00557dc0();
    /* 00557c14: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00557c1a: call 0x554950 */ r_esp -= 4; W32(r_esp, 0x557c1fu); f_00554950();
    /* 00557c1f: jmp 0x557d92 */ goto L_00557d92;
L_00557c24:; BB(0x00557c24);
    /* 00557c24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c26: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557c27: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00557c2d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557c30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557c31: fld1  */ FPUSH(1.0);
    /* 00557c33: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557c36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c38: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c3e: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c43: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557c49: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00557c4b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557c51: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00557c57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x557c59u); call_ind(t); }
    /* 00557c59: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557c5c: call 0x557e00 */ r_esp -= 4; W32(r_esp, 0x557c61u); f_00557e00();
    /* 00557c61: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00557c67: call 0x554950 */ r_esp -= 4; W32(r_esp, 0x557c6cu); f_00554950();
    /* 00557c6c: jmp 0x557d92 */ goto L_00557d92;
L_00557c71:; BB(0x00557c71);
    /* 00557c71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557c74: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00557c7a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557c7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557c7e: fld1  */ FPUSH(1.0);
    /* 00557c80: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557c83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c85: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c8b: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 00557c90: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557c96: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00557c98: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557c9e: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00557ca4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x557ca6u); call_ind(t); }
    /* 00557ca6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557ca9: call 0x558ca0 */ r_esp -= 4; W32(r_esp, 0x557caeu); f_00558ca0();
    /* 00557cae: jmp 0x557d92 */ goto L_00557d92;
L_00557cb3:; BB(0x00557cb3);
    /* 00557cb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557cb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557cb6: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00557cbc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557cbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557cc0: fld1  */ FPUSH(1.0);
    /* 00557cc2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557cc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557cc7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00557cc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557ccb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557ccd: push 0x30f342 */ { u32 v = 0x30f342u; r_esp -= 4; W32(r_esp, v); }
    /* 00557cd2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557cd8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00557cda: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557ce0: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00557ce6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x557ce8u); call_ind(t); }
    /* 00557ce8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557ceb: call 0x5d13e0 */ r_esp -= 4; W32(r_esp, 0x557cf0u); f_005d13e0();
    /* 00557cf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557cf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557cf3: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 00557cf9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557cfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557cfd: fld1  */ FPUSH(1.0);
    /* 00557cff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00557d02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00557d04: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00557d06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557d08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557d0a: push 0x18a88 */ { u32 v = 0x18a88u; r_esp -= 4; W32(r_esp, v); }
    /* 00557d0f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557d15: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00557d17: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00557d1d: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 00557d23: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x557d25u); call_ind(t); }
    /* 00557d25: mov ecx, dword ptr [0x793424] */ r_ecx = R32((u32)(0x793424u));
    /* 00557d2b: call 0x5542c0 */ r_esp -= 4; W32(r_esp, 0x557d30u); f_005542c0();
    /* 00557d30: jmp 0x557d92 */ goto L_00557d92;
L_00557d32:; BB(0x00557d32);
    /* 00557d32: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557d35: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00557d38: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00557d3b: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557d3f: jne 0x557d87 */ if (!fZ) goto L_00557d87;
L_00557d41:; BB(0x00557d41);
    /* 00557d41: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00557d44: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00557d47: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00557d4a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557d4e: jne 0x557d87 */ if (!fZ) goto L_00557d87;
L_00557d50:; BB(0x00557d50);
    /* 00557d50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557d52: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x557d57u); f_005dcb00();
    /* 00557d57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557d5a: mov ecx, eax */ r_ecx = r_eax;
    /* 00557d5c: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x557d61u); f_005d5a50();
    /* 00557d61: mov esi, eax */ r_esi = r_eax;
    /* 00557d63: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00557d66: call 0x5d0aa0 */ r_esp -= 4; W32(r_esp, 0x557d6bu); f_005d0aa0();
    /* 00557d6b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557d6d: jge 0x557d87 */ if ((fS==fO)) goto L_00557d87;
L_00557d6f:; BB(0x00557d6f);
    /* 00557d6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00557d71: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x557d76u); f_005dcb00();
    /* 00557d76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557d79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557d7a: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 00557d80: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x557d85u); f_005dbb70();
    /* 00557d85: jmp 0x557d92 */ goto L_00557d92;
L_00557d87:; BB(0x00557d87);
    /* 00557d87: mov ecx, dword ptr [0x79341c] */ r_ecx = R32((u32)(0x79341cu));
    /* 00557d8d: call 0x5dc2e0 */ r_esp -= 4; W32(r_esp, 0x557d92u); f_005dc2e0();
L_00557d92:; BB(0x00557d92);
    /* 00557d92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00557d93: mov esp, ebp */ r_esp = r_ebp;
    /* 00557d95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557d96: ret 4 */ FN_RET(0x00557ae0); r_esp += 8; return;
}

void f_00557dc0(void) /* sub_557DC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557dc0);
    /* 00557dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00557dc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557dc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00557dc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557dd0: jmp 0x557ddb */ goto L_00557ddb;
L_00557dd2:; BB(0x00557dd2);
    /* 00557dd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557dd5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557dd8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00557ddb:; BB(0x00557ddb);
    /* 00557ddb: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557ddf: jge 0x557df0 */ if ((fS==fO)) goto L_00557df0;
L_00557de1:; BB(0x00557de1);
    /* 00557de1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557de4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557de7: mov word ptr [edx + ecx*2 + 0x18], 0 */ W16((u32)(r_edx+r_ecx*2+0x18u), 0x0u);
    /* 00557dee: jmp 0x557dd2 */ goto L_00557dd2;
L_00557df0:; BB(0x00557df0);
    /* 00557df0: mov esp, ebp */ r_esp = r_ebp;
    /* 00557df2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557df3: ret  */ FN_RET(0x00557dc0); r_esp += 4; return;
}

void f_00557e00(void) /* sub_557E00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557e00);
    /* 00557e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00557e03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557e06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00557e07: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00557e0a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557e11: jmp 0x557e1c */ goto L_00557e1c;
L_00557e13:; BB(0x00557e13);
    /* 00557e13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557e16: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557e19: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00557e1c:; BB(0x00557e1c);
    /* 00557e1c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557e20: jge 0x557e3a */ if ((fS==fO)) goto L_00557e3a;
L_00557e22:; BB(0x00557e22);
    /* 00557e22: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557e25: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557e28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557e2b: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557e2e: mov ax, word ptr [esi + eax*2 + 0x22] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+r_eax*2+0x22u))) & 0xffffu);
    /* 00557e33: mov word ptr [edx + ecx*2 + 0x18], ax */ W16((u32)(r_edx+r_ecx*2+0x18u), (u16)r_eax);
    /* 00557e38: jmp 0x557e13 */ goto L_00557e13;
L_00557e3a:; BB(0x00557e3a);
    /* 00557e3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00557e3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00557e3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557e3e: ret  */ FN_RET(0x00557e00); r_esp += 4; return;
}

void f_00557e40(void) /* sub_557E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557e40);
    /* 00557e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00557e43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557e46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00557e49: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00557e50: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00557e57: jmp 0x557e62 */ goto L_00557e62;
L_00557e59:; BB(0x00557e59);
    /* 00557e59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557e5c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557e5f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00557e62:; BB(0x00557e62);
    /* 00557e62: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557e66: jge 0x557e82 */ if ((fS==fO)) goto L_00557e82;
L_00557e68:; BB(0x00557e68);
    /* 00557e68: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557e6b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557e6e: movzx eax, word ptr [edx + ecx*2 + 0x22] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x22u));
    /* 00557e73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557e75: je 0x557e80 */ if (fZ) goto L_00557e80;
L_00557e77:; BB(0x00557e77);
    /* 00557e77: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557e7a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00557e7d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00557e80:; BB(0x00557e80);
    /* 00557e80: jmp 0x557e59 */ goto L_00557e59;
L_00557e82:; BB(0x00557e82);
    /* 00557e82: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557e85: mov esp, ebp */ r_esp = r_ebp;
    /* 00557e87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557e88: ret  */ FN_RET(0x00557e40); r_esp += 4; return;
}

void f_00557e90(void) /* sub_557E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557e90);
    /* 00557e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00557e93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557e96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00557e97: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00557e9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557e9d: call 0x557e40 */ r_esp -= 4; W32(r_esp, 0x557ea2u); f_00557e40();
    /* 00557ea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557ea4: jne 0x557eb6 */ if (!fZ) goto L_00557eb6;
L_00557ea6:; BB(0x00557ea6);
    /* 00557ea6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557ea9: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00557ead: mov word ptr [eax + 0x22], cx */ W16((u32)(r_eax+0x22u), (u16)r_ecx);
    /* 00557eb1: jmp 0x557fa7 */ goto L_00557fa7;
L_00557eb6:; BB(0x00557eb6);
    /* 00557eb6: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00557eba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00557ebb: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557ec0u); f_00641280();
    /* 00557ec0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557ec3: mov esi, eax */ r_esi = r_eax;
    /* 00557ec5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557ec8: mov cx, word ptr [eax + 0x22] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x22u))) & 0xffffu);
    /* 00557ecc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00557ecd: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557ed2u); f_00641280();
    /* 00557ed2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557ed5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557ed7: jg 0x557f19 */ if ((!fZ&&fS==fO)) goto L_00557f19;
L_00557ed9:; BB(0x00557ed9);
    /* 00557ed9: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00557ee0: jmp 0x557eeb */ goto L_00557eeb;
L_00557ee2:; BB(0x00557ee2);
    /* 00557ee2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557ee5: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00557ee8: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00557eeb:; BB(0x00557eeb);
    /* 00557eeb: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557eef: jle 0x557f09 */ if ((fZ||fS!=fO)) goto L_00557f09;
L_00557ef1:; BB(0x00557ef1);
    /* 00557ef1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557ef4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557ef7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557efa: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557efd: mov dx, word ptr [esi + edx*2 + 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+r_edx*2+0x20u))) & 0xffffu);
    /* 00557f02: mov word ptr [ecx + eax*2 + 0x22], dx */ W16((u32)(r_ecx+r_eax*2+0x22u), (u16)r_edx);
    /* 00557f07: jmp 0x557ee2 */ goto L_00557ee2;
L_00557f09:; BB(0x00557f09);
    /* 00557f09: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557f0c: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00557f10: mov word ptr [eax + 0x22], cx */ W16((u32)(r_eax+0x22u), (u16)r_ecx);
    /* 00557f14: jmp 0x557fa7 */ goto L_00557fa7;
L_00557f19:; BB(0x00557f19);
    /* 00557f19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557f1c: call 0x557e40 */ r_esp -= 4; W32(r_esp, 0x557f21u); f_00557e40();
    /* 00557f21: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00557f24: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00557f27: jmp 0x557f32 */ goto L_00557f32;
L_00557f29:; BB(0x00557f29);
    /* 00557f29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557f2c: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00557f2f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00557f32:; BB(0x00557f32);
    /* 00557f32: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557f36: jle 0x557fa7 */ if ((fZ||fS!=fO)) goto L_00557fa7;
L_00557f38:; BB(0x00557f38);
    /* 00557f38: mov ax, word ptr [ebp + 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00557f3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557f3d: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557f42u); f_00641280();
    /* 00557f42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557f45: mov esi, eax */ r_esi = r_eax;
    /* 00557f47: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557f4a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557f4d: mov ax, word ptr [edx + ecx*2 + 0x22] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x22u))) & 0xffffu);
    /* 00557f52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00557f53: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x557f58u); f_00641280();
    /* 00557f58: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00557f5b: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557f5d: jl 0x557fa5 */ if ((fS!=fO)) goto L_00557fa5;
L_00557f5f:; BB(0x00557f5f);
    /* 00557f5f: mov dword ptr [ebp - 8], 4 */ W32((u32)(r_ebp+0xfffffff8u), 0x4u);
    /* 00557f66: jmp 0x557f71 */ goto L_00557f71;
L_00557f68:; BB(0x00557f68);
    /* 00557f68: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557f6b: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00557f6e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00557f71:; BB(0x00557f71);
    /* 00557f71: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557f74: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00557f77: cmp dword ptr [ebp - 8], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557f7a: jle 0x557f94 */ if ((fZ||fS!=fO)) goto L_00557f94;
L_00557f7c:; BB(0x00557f7c);
    /* 00557f7c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557f7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557f82: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557f85: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557f88: mov dx, word ptr [esi + edx*2 + 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+r_edx*2+0x20u))) & 0xffffu);
    /* 00557f8d: mov word ptr [ecx + eax*2 + 0x22], dx */ W16((u32)(r_ecx+r_eax*2+0x22u), (u16)r_edx);
    /* 00557f92: jmp 0x557f68 */ goto L_00557f68;
L_00557f94:; BB(0x00557f94);
    /* 00557f94: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00557f97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557f9a: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 00557f9e: mov word ptr [ecx + eax*2 + 0x24], dx */ W16((u32)(r_ecx+r_eax*2+0x24u), (u16)r_edx);
    /* 00557fa3: jmp 0x557fa7 */ goto L_00557fa7;
L_00557fa5:; BB(0x00557fa5);
    /* 00557fa5: jmp 0x557f29 */ goto L_00557f29;
L_00557fa7:; BB(0x00557fa7);
    /* 00557fa7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00557fa8: mov esp, ebp */ r_esp = r_ebp;
    /* 00557faa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00557fab: ret 4 */ FN_RET(0x00557e90); r_esp += 8; return;
}

void f_00557fb0(void) /* sub_557FB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00557fb0);
    /* 00557fb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00557fb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00557fb3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00557fb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00557fb7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00557fba: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00557fc1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00557fc8: jmp 0x557fd3 */ goto L_00557fd3;
L_00557fca:; BB(0x00557fca);
    /* 00557fca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557fcd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557fd0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00557fd3:; BB(0x00557fd3);
    /* 00557fd3: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00557fd7: jge 0x55802e */ if ((fS==fO)) goto L_0055802e;
L_00557fd9:; BB(0x00557fd9);
    /* 00557fd9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557fdc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00557fdf: movzx eax, word ptr [edx + ecx*2 + 0x22] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2+0x22u));
    /* 00557fe4: movzx ecx, word ptr [ebp + 8] */ r_ecx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00557fe8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00557fea: jne 0x55802c */ if (!fZ) goto L_0055802c;
L_00557fec:; BB(0x00557fec);
    /* 00557fec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00557fef: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00557ff2: jmp 0x557ffd */ goto L_00557ffd;
L_00557ff4:; BB(0x00557ff4);
    /* 00557ff4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00557ff7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00557ffa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00557ffd:; BB(0x00557ffd);
    /* 00557ffd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00558000: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00558003: jge 0x55801d */ if ((fS==fO)) goto L_0055801d;
L_00558005:; BB(0x00558005);
    /* 00558005: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00558008: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055800b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055800e: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558011: mov cx, word ptr [esi + ecx*2 + 0x24] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+r_ecx*2+0x24u))) & 0xffffu);
    /* 00558016: mov word ptr [eax + edx*2 + 0x22], cx */ W16((u32)(r_eax+r_edx*2+0x22u), (u16)r_ecx);
    /* 0055801b: jmp 0x557ff4 */ goto L_00557ff4;
L_0055801d:; BB(0x0055801d);
    /* 0055801d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00558020: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00558023: mov word ptr [eax + edx*2 + 0x22], 0 */ W16((u32)(r_eax+r_edx*2+0x22u), 0x0u);
    /* 0055802a: jmp 0x55802e */ goto L_0055802e;
L_0055802c:; BB(0x0055802c);
    /* 0055802c: jmp 0x557fca */ goto L_00557fca;
L_0055802e:; BB(0x0055802e);
    /* 0055802e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055802f: mov esp, ebp */ r_esp = r_ebp;
    /* 00558031: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00558032: ret 4 */ FN_RET(0x00557fb0); r_esp += 8; return;
}

