#include "protos.h"

void f_005be320(void) /* sub_5BE320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be320);
    /* 005be320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be321: mov ebp, esp */ r_ebp = r_esp;
    /* 005be323: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be326: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005be329: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be32c: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5be331u); f_005be450();
    /* 005be331: mov esp, ebp */ r_esp = r_ebp;
    /* 005be333: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be334: ret  */ FN_RET(0x005be320); r_esp += 4; return;
}

void f_005be340(void) /* sub_5BE340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be340);
    /* 005be340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be341: mov ebp, esp */ r_ebp = r_esp;
    /* 005be343: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be346: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005be349: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be34c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005be34f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005be352: imul edx, edx, 0x7c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005be355: lea eax, [ecx + edx + 0x20] */ r_eax = (u32)(r_ecx+r_edx+0x20u);
    /* 005be359: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005be35c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005be35f: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005be362: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be365: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005be368: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005be36b: imul ecx, ecx, 0x7c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x7cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005be36e: lea edx, [eax + ecx + 0x20] */ r_edx = (u32)(r_eax+r_ecx+0x20u);
    /* 005be372: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005be375:; BB(0x005be375);
    /* 005be375: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be379: jge 0x5be388 */ if ((fS==fO)) goto L_005be388;
L_005be37b:; BB(0x005be37b);
    /* 005be37b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be37e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be381: add ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005be383: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005be386: jmp 0x5be375 */ goto L_005be375;
L_005be388:; BB(0x005be388);
    /* 005be388: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be38b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be38e: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be390: jl 0x5be39f */ if ((fS!=fO)) goto L_005be39f;
L_005be392:; BB(0x005be392);
    /* 005be392: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be395: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be398: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005be39a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005be39d: jmp 0x5be388 */ goto L_005be388;
L_005be39f:; BB(0x005be39f);
    /* 005be39f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be3a2: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005be3a5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005be3a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be3ab: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 005be3af: mov esp, ebp */ r_esp = r_ebp;
    /* 005be3b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be3b2: ret 8 */ FN_RET(0x005be340); r_esp += 12; return;
}

void f_005be3f0(void) /* sub_5BE3F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be3f0);
    /* 005be3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005be3f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be3f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005be3f9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005be400: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be403: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5be408u); f_005c9140();
    /* 005be408: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005be40f: jmp 0x5be41a */ goto L_005be41a;
L_005be411:; BB(0x005be411);
    /* 005be411: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be414: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be417: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005be41a:; BB(0x005be41a);
    /* 005be41a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be41d: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005be420: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be423: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005be426: jge 0x5be441 */ if ((fS==fO)) goto L_005be441;
L_005be428:; BB(0x005be428);
    /* 005be428: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be42b: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005be42e: movzx edx, byte ptr [ecx + 0x34] */ r_edx = (u32)R8((u32)(r_ecx+0x34u));
    /* 005be432: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be434: je 0x5be43f */ if (fZ) goto L_005be43f;
L_005be436:; BB(0x005be436);
    /* 005be436: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be439: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be43c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005be43f:; BB(0x005be43f);
    /* 005be43f: jmp 0x5be411 */ goto L_005be411;
L_005be441:; BB(0x005be441);
    /* 005be441: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be444: mov esp, ebp */ r_esp = r_ebp;
    /* 005be446: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be447: ret  */ FN_RET(0x005be3f0); r_esp += 4; return;
}

void f_005be450(void) /* sub_5BE450 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be450);
    /* 005be450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be451: mov ebp, esp */ r_ebp = r_esp;
    /* 005be453: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be456: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005be459: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be45c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be460: je 0x5be4ad */ if (fZ) goto L_005be4ad;
L_005be462:; BB(0x005be462);
    /* 005be462: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be465: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005be468: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005be46b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be46e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005be471: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005be474: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005be477: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005be47a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be47d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005be480: mov cl, byte ptr [ebp - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005be483: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005be486: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be489: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be48c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005be48f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005be492: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005be495: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005be498: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be49b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005be49e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005be4a1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be4a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be4a5: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5be4aau); f_00686cae();
    /* 005be4aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005be4ad:; BB(0x005be4ad);
    /* 005be4ad: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be4b0: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005be4b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be4ba: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005be4c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be4c4: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005be4cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005be4cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be4ce: ret  */ FN_RET(0x005be450); r_esp += 4; return;
}

void f_005be4d0(void) /* sub_5BE4D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be4d0);
    /* 005be4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005be4d3: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be4d9: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005be4dc: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be4df: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be4e3: jne 0x5be4ee */ if (!fZ) goto L_005be4ee;
L_005be4e5:; BB(0x005be4e5);
    /* 005be4e5: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005be4ec: jmp 0x5be500 */ goto L_005be500;
L_005be4ee:; BB(0x005be4ee);
    /* 005be4ee: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be4f1: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be4f4: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005be4f7: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005be4fa: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005be4fd: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
L_005be500:; BB(0x005be500);
    /* 005be500: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005be503: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be506: jae 0x5be58e */ if (!fC) goto L_005be58e;
L_005be50c:; BB(0x005be50c);
    /* 005be50c: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be50f: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be513: jne 0x5be51e */ if (!fZ) goto L_005be51e;
L_005be515:; BB(0x005be515);
    /* 005be515: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 005be51c: jmp 0x5be530 */ goto L_005be530;
L_005be51e:; BB(0x005be51e);
    /* 005be51e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be521: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be524: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005be527: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005be52a: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005be52d: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
L_005be530:; BB(0x005be530);
    /* 005be530: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be533: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005be536: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005be539: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005be540: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be544: je 0x5be55c */ if (fZ) goto L_005be55c;
L_005be546:; BB(0x005be546);
    /* 005be546: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be549: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005be54c: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be54f: ja 0x5be55c */ if ((!fC&&!fZ)) goto L_005be55c;
L_005be551:; BB(0x005be551);
    /* 005be551: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be554: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005be557: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be55a: jbe 0x5be562 */ if ((fC||fZ)) goto L_005be562;
L_005be55c:; BB(0x005be55c);
    /* 005be55c: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5be562u); call_ind(t); }
L_005be562:; BB(0x005be562);
    /* 005be562: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be565: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005be568: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005be56b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005be56e: lea edx, [ebp + 0xc] */ r_edx = (u32)(r_ebp+0xcu);
    /* 005be571: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be572: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005be575: sub eax, dword ptr [ebp - 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005be578: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be579: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005be57c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be57d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005be580: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be581: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be584: call 0x5be680 */ r_esp -= 4; W32(r_esp, 0x5be589u); f_005be680();
    /* 005be589: jmp 0x5be67a */ goto L_005be67a;
L_005be58e:; BB(0x005be58e);
    /* 005be58e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be591: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be595: jne 0x5be5a0 */ if (!fZ) goto L_005be5a0;
L_005be597:; BB(0x005be597);
    /* 005be597: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 005be59e: jmp 0x5be5b2 */ goto L_005be5b2;
L_005be5a0:; BB(0x005be5a0);
    /* 005be5a0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be5a3: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be5a6: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005be5a9: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005be5ac: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005be5af: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
L_005be5b2:; BB(0x005be5b2);
    /* 005be5b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005be5b5: cmp ecx, dword ptr [ebp - 0x80] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff80u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be5b8: jae 0x5be67a */ if (!fC) goto L_005be67a;
L_005be5be:; BB(0x005be5be);
    /* 005be5be: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be5c1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005be5c4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005be5c7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005be5ce: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be5d2: je 0x5be5ea */ if (fZ) goto L_005be5ea;
L_005be5d4:; BB(0x005be5d4);
    /* 005be5d4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be5d7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005be5da: cmp edx, dword ptr [ebp - 0x30] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be5dd: ja 0x5be5ea */ if ((!fC&&!fZ)) goto L_005be5ea;
L_005be5df:; BB(0x005be5df);
    /* 005be5df: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be5e2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005be5e5: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be5e8: jbe 0x5be5f0 */ if ((fC||fZ)) goto L_005be5f0;
L_005be5ea:; BB(0x005be5ea);
    /* 005be5ea: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5be5f0u); call_ind(t); }
L_005be5f0:; BB(0x005be5f0);
    /* 005be5f0: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be5f3: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005be5f6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005be5f9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005be5fc: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be5ff: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005be602: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005be605: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 005be60c: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be610: je 0x5be628 */ if (fZ) goto L_005be628;
L_005be612:; BB(0x005be612);
    /* 005be612: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be615: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005be618: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be61b: ja 0x5be628 */ if ((!fC&&!fZ)) goto L_005be628;
L_005be61d:; BB(0x005be61d);
    /* 005be61d: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be620: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005be623: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be626: jbe 0x5be62e */ if ((fC||fZ)) goto L_005be62e;
L_005be628:; BB(0x005be628);
    /* 005be628: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5be62eu); call_ind(t); }
L_005be62e:; BB(0x005be62e);
    /* 005be62e: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be631: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005be634: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005be637: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005be63a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be63d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005be640: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005be643: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005be646: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005be649: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be64a: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 005be64d: call 0x5beeb0 */ r_esp -= 4; W32(r_esp, 0x5be652u); f_005beeb0();
    /* 005be652: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005be655: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005be658: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005be65b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005be65e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005be661: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be662: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005be665: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be666: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005be669: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be66a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be66d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be66e: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 005be671: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be672: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005be675: call 0x5bc490 */ r_esp -= 4; W32(r_esp, 0x5be67au); f_005bc490();
L_005be67a:; BB(0x005be67a);
    /* 005be67a: mov esp, ebp */ r_esp = r_ebp;
    /* 005be67c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005be67d: ret 8 */ FN_RET(0x005be4d0); r_esp += 12; return;
}

void f_005be680(void) /* sub_5BE680 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005be680);
    /* 005be680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005be681: mov ebp, esp */ r_ebp = r_esp;
    /* 005be683: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005be685: push 0x6a8250 */ { u32 v = 0x6a8250u; r_esp -= 4; W32(r_esp, v); }
    /* 005be68a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005be690: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be691: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be692: sub esp, 0x220 */ {  u32 a = r_esp; u32 b = 0x220u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005be698: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005be699: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005be69a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005be69b: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005be6a0: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005be6a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be6a3: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005be6a6: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005be6ac: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005be6af: mov dword ptr [ebp - 0x208], ecx */ W32((u32)(r_ebp+0xfffffdf8u), r_ecx);
    /* 005be6b5: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005be6b8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005be6ba: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005be6bd: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be6c3: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be6c7: jne 0x5be6d5 */ if (!fZ) goto L_005be6d5;
L_005be6c9:; BB(0x005be6c9);
    /* 005be6c9: mov dword ptr [ebp - 0x20c], 0 */ W32((u32)(r_ebp+0xfffffdf4u), 0x0u);
    /* 005be6d3: jmp 0x5be6f0 */ goto L_005be6f0;
L_005be6d5:; BB(0x005be6d5);
    /* 005be6d5: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be6db: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be6e1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005be6e4: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005be6e7: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005be6ea: mov dword ptr [ebp - 0x20c], edx */ W32((u32)(r_ebp+0xfffffdf4u), r_edx);
L_005be6f0:; BB(0x005be6f0);
    /* 005be6f0: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 005be6f6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005be6f9: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be6fd: jne 0x5be704 */ if (!fZ) goto L_005be704;
L_005be6ff:; BB(0x005be6ff);
    /* 005be6ff: jmp 0x5bedf1 */ goto L_005bedf1;
L_005be704:; BB(0x005be704);
    /* 005be704: mov dword ptr [ebp - 0x28], 0x3fffffff */ W32((u32)(r_ebp+0xffffffd8u), 0x3fffffffu);
    /* 005be70b: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be70f: jbe 0x5be71c */ if ((fC||fZ)) goto L_005be71c;
L_005be711:; BB(0x005be711);
    /* 005be711: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005be714: mov dword ptr [ebp - 0x210], ecx */ W32((u32)(r_ebp+0xfffffdf0u), r_ecx);
    /* 005be71a: jmp 0x5be726 */ goto L_005be726;
L_005be71c:; BB(0x005be71c);
    /* 005be71c: mov dword ptr [ebp - 0x210], 1 */ W32((u32)(r_ebp+0xfffffdf0u), 0x1u);
L_005be726:; BB(0x005be726);
    /* 005be726: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be72c: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be730: jne 0x5be73e */ if (!fZ) goto L_005be73e;
L_005be732:; BB(0x005be732);
    /* 005be732: mov dword ptr [ebp - 0x214], 0 */ W32((u32)(r_ebp+0xfffffdecu), 0x0u);
    /* 005be73c: jmp 0x5be759 */ goto L_005be759;
L_005be73e:; BB(0x005be73e);
    /* 005be73e: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be744: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be74a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005be74d: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005be750: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005be753: mov dword ptr [ebp - 0x214], edx */ W32((u32)(r_ebp+0xfffffdecu), r_edx);
L_005be759:; BB(0x005be759);
    /* 005be759: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 005be75f: sub eax, dword ptr [ebp - 0x214] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffdecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005be765: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be768: jae 0x5be774 */ if (!fC) goto L_005be774;
L_005be76a:; BB(0x005be76a);
    /* 005be76a: call 0x5bee10 */ r_esp -= 4; W32(r_esp, 0x5be76fu); f_005bee10();
    /* 005be76f: jmp 0x5bedf1 */ goto L_005bedf1;
L_005be774:; BB(0x005be774);
    /* 005be774: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be77a: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be77e: jne 0x5be78c */ if (!fZ) goto L_005be78c;
L_005be780:; BB(0x005be780);
    /* 005be780: mov dword ptr [ebp - 0x218], 0 */ W32((u32)(r_ebp+0xfffffde8u), 0x0u);
    /* 005be78a: jmp 0x5be7a7 */ goto L_005be7a7;
L_005be78c:; BB(0x005be78c);
    /* 005be78c: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be792: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be798: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005be79b: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005be79e: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005be7a1: mov dword ptr [ebp - 0x218], ecx */ W32((u32)(r_ebp+0xfffffde8u), r_ecx);
L_005be7a7:; BB(0x005be7a7);
    /* 005be7a7: mov edx, dword ptr [ebp - 0x218] */ r_edx = R32((u32)(r_ebp+0xfffffde8u));
    /* 005be7ad: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be7b0: cmp dword ptr [ebp - 0x18], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be7b3: jae 0x5beb6b */ if (!fC) goto L_005beb6b;
L_005be7b9:; BB(0x005be7b9);
    /* 005be7b9: mov dword ptr [ebp - 0x70], 0x3fffffff */ W32((u32)(r_ebp+0xffffff90u), 0x3fffffffu);
    /* 005be7c0: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005be7c4: jbe 0x5be7d1 */ if ((fC||fZ)) goto L_005be7d1;
L_005be7c6:; BB(0x005be7c6);
    /* 005be7c6: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005be7c9: mov dword ptr [ebp - 0x21c], eax */ W32((u32)(r_ebp+0xfffffde4u), r_eax);
    /* 005be7cf: jmp 0x5be7db */ goto L_005be7db;
L_005be7d1:; BB(0x005be7d1);
    /* 005be7d1: mov dword ptr [ebp - 0x21c], 1 */ W32((u32)(r_ebp+0xfffffde4u), 0x1u);
L_005be7db:; BB(0x005be7db);
    /* 005be7db: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be7de: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 005be7e0: mov edx, dword ptr [ebp - 0x21c] */ r_edx = R32((u32)(r_ebp+0xfffffde4u));
    /* 005be7e6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005be7e8: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be7eb: jae 0x5be7f9 */ if (!fC) goto L_005be7f9;
L_005be7ed:; BB(0x005be7ed);
    /* 005be7ed: mov dword ptr [ebp - 0x220], 0 */ W32((u32)(r_ebp+0xfffffde0u), 0x0u);
    /* 005be7f7: jmp 0x5be807 */ goto L_005be807;
L_005be7f9:; BB(0x005be7f9);
    /* 005be7f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be7fc: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005be7fe: add eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be801: mov dword ptr [ebp - 0x220], eax */ W32((u32)(r_ebp+0xfffffde0u), r_eax);
L_005be807:; BB(0x005be807);
    /* 005be807: mov ecx, dword ptr [ebp - 0x220] */ r_ecx = R32((u32)(r_ebp+0xfffffde0u));
    /* 005be80d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005be810: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be816: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be81a: jne 0x5be828 */ if (!fZ) goto L_005be828;
L_005be81c:; BB(0x005be81c);
    /* 005be81c: mov dword ptr [ebp - 0x224], 0 */ W32((u32)(r_ebp+0xfffffddcu), 0x0u);
    /* 005be826: jmp 0x5be843 */ goto L_005be843;
L_005be828:; BB(0x005be828);
    /* 005be828: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be82e: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be834: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005be837: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005be83a: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005be83d: mov dword ptr [ebp - 0x224], edx */ W32((u32)(r_ebp+0xfffffddcu), r_edx);
L_005be843:; BB(0x005be843);
    /* 005be843: mov eax, dword ptr [ebp - 0x224] */ r_eax = R32((u32)(r_ebp+0xfffffddcu));
    /* 005be849: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005be84c: cmp dword ptr [ebp - 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005be84f: jae 0x5be890 */ if (!fC) goto L_005be890;
L_005be851:; BB(0x005be851);
    /* 005be851: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be857: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005be85b: jne 0x5be869 */ if (!fZ) goto L_005be869;
L_005be85d:; BB(0x005be85d);
    /* 005be85d: mov dword ptr [ebp - 0x228], 0 */ W32((u32)(r_ebp+0xfffffdd8u), 0x0u);
    /* 005be867: jmp 0x5be884 */ goto L_005be884;
L_005be869:; BB(0x005be869);
    /* 005be869: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be86f: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be875: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005be878: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005be87b: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005be87e: mov dword ptr [ebp - 0x228], ecx */ W32((u32)(r_ebp+0xfffffdd8u), r_ecx);
L_005be884:; BB(0x005be884);
    /* 005be884: mov edx, dword ptr [ebp - 0x228] */ r_edx = R32((u32)(r_ebp+0xfffffdd8u));
    /* 005be88a: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005be88d: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_005be890:; BB(0x005be890);
    /* 005be890: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005be892: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005be895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be896: call 0x5c6310 */ r_esp -= 4; W32(r_esp, 0x5be89bu); f_005c6310();
    /* 005be89b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be89e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005be8a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be8a4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005be8a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005be8ae: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be8b4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005be8b7: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005be8bd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005be8c0: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 005be8c6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005be8c9: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 005be8cf: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 005be8d5: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005be8db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005be8dd: mov byte ptr [ebp - 0x71], cl */ W8((u32)(r_ebp+0xffffff8fu), (u8)r_ecx);
    /* 005be8e0: mov dl, byte ptr [ebp - 0x73] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff8du))) & 0xffu);
    /* 005be8e3: mov byte ptr [ebp - 0x72], dl */ W8((u32)(r_ebp+0xffffff8eu), (u8)r_edx);
    /* 005be8e6: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005be8ec: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005be8ef: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005be8f5: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005be8f8: mov dl, byte ptr [ebp - 0x71] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff8fu))) & 0xffu);
    /* 005be8fb: mov byte ptr [ebp - 0x85], dl */ W8((u32)(r_ebp+0xffffff7bu), (u8)r_edx);
    /* 005be901: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 005be907: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005be90d: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be914: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005be91a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be91b: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005be91e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be91f: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 005be922: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be923: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5be928u); f_005bf010();
    /* 005be928: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be92b: mov dword ptr [ebp - 0x22c], eax */ W32((u32)(r_ebp+0xfffffdd4u), r_eax);
    /* 005be931: mov edx, dword ptr [ebp - 0x22c] */ r_edx = R32((u32)(r_ebp+0xfffffdd4u));
    /* 005be937: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005be93a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005be93d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005be943: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005be945: mov byte ptr [ebp - 0x99], cl */ W8((u32)(r_ebp+0xffffff67u), (u8)r_ecx);
    /* 005be94b: mov dl, byte ptr [ebp - 0x9b] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff65u))) & 0xffu);
    /* 005be951: mov byte ptr [ebp - 0x9a], dl */ W8((u32)(r_ebp+0xffffff66u), (u8)r_edx);
    /* 005be957: mov al, byte ptr [ebp - 0x99] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff67u))) & 0xffu);
    /* 005be95d: mov byte ptr [ebp - 0xa1], al */ W8((u32)(r_ebp+0xffffff5fu), (u8)r_eax);
    /* 005be963: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005be969: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 005be96f: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 005be972: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005be973: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005be976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005be977: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005be97d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005be97e: call 0x5c0910 */ r_esp -= 4; W32(r_esp, 0x5be983u); f_005c0910();
    /* 005be983: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005be986: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005be989: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005be98c: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 005be98f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005be992: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005be998: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005be99b: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 005be9a1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005be9a4: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 005be9aa: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 005be9b0: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 005be9b6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005be9b9: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005be9bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005be9c1: mov byte ptr [ebp - 0xa9], cl */ W8((u32)(r_ebp+0xffffff57u), (u8)r_ecx);
    /* 005be9c7: mov dl, byte ptr [ebp - 0xab] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff55u))) & 0xffu);
    /* 005be9cd: mov byte ptr [ebp - 0xaa], dl */ W8((u32)(r_ebp+0xffffff56u), (u8)r_edx);
    /* 005be9d3: mov eax, dword ptr [ebp - 0xc8] */ r_eax = R32((u32)(r_ebp+0xffffff38u));
    /* 005be9d9: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005be9df: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 005be9e5: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 005be9eb: mov dl, byte ptr [ebp - 0xa9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff57u))) & 0xffu);
    /* 005be9f1: mov byte ptr [ebp - 0xbd], dl */ W8((u32)(r_ebp+0xffffff43u), (u8)r_edx);
    /* 005be9f7: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 005be9fd: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005bea03: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bea09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bea0a: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005bea10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bea11: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005bea17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bea18: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005bea1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bea1f: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5bea24u); f_005bf010();
    /* 005bea24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bea27: jmp 0x5bea69 */ goto L_005bea69;
L_005bea69:; BB(0x005bea69);
    /* 005bea69: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bea70: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bea76: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bea7a: jne 0x5bea88 */ if (!fZ) goto L_005bea88;
L_005bea7c:; BB(0x005bea7c);
    /* 005bea7c: mov dword ptr [ebp - 0x230], 0 */ W32((u32)(r_ebp+0xfffffdd0u), 0x0u);
    /* 005bea86: jmp 0x5beaa3 */ goto L_005beaa3;
L_005bea88:; BB(0x005bea88);
    /* 005bea88: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bea8e: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bea94: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005bea97: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bea9a: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005bea9d: mov dword ptr [ebp - 0x230], eax */ W32((u32)(r_ebp+0xfffffdd0u), r_eax);
L_005beaa3:; BB(0x005beaa3);
    /* 005beaa3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005beaa6: add ecx, dword ptr [ebp - 0x230] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffdd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005beaac: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 005beaaf: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beab5: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005beab9: je 0x5beb36 */ if (fZ) goto L_005beb36;
L_005beabb:; BB(0x005beabb);
    /* 005beabb: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beac1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005beac4: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 005beaca: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bead0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005bead3: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 005bead9: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 005beadf: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 005beae5: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 005beaeb: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 005beaf1: mov al, byte ptr [ebp - 0xde] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff22u))) & 0xffu);
    /* 005beaf7: mov byte ptr [ebp - 0xdd], al */ W8((u32)(r_ebp+0xffffff23u), (u8)r_eax);
    /* 005beafd: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beb03: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beb09: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005beb0c: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005beb0f: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005beb12: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 005beb18: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beb1e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005beb21: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 005beb27: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 005beb2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005beb2e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5beb33u); f_00686cae();
    /* 005beb33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005beb36:; BB(0x005beb36);
    /* 005beb36: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005beb39: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005beb3c: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005beb3f: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beb45: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005beb48: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005beb4b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005beb4e: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 005beb51: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beb57: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005beb5a: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beb60: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005beb63: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005beb66: jmp 0x5bedf1 */ goto L_005bedf1;
L_005beb6b:; BB(0x005beb6b);
    /* 005beb6b: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beb71: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005beb74: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005beb77: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005beb7a: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005beb7d: jae 0x5becc7 */ if (!fC) goto L_005becc7;
L_005beb83:; BB(0x005beb83);
    /* 005beb83: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beb89: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005beb8c: mov dword ptr [ebp - 0x130], edx */ W32((u32)(r_ebp+0xfffffed0u), r_edx);
    /* 005beb92: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beb98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005beb99: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005beb9c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005beb9f: lea eax, [edx + ecx*4] */ r_eax = (u32)(r_edx+r_ecx*4);
    /* 005beba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005beba3: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 005beba9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bebaa: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bebad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bebae: call 0x5befc0 */ r_esp -= 4; W32(r_esp, 0x5bebb3u); f_005befc0();
    /* 005bebb3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bebb6: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005bebbd: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005bebc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bebc1: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bebc7: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bebca: sub edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005bebcd: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005bebd0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bebd3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005bebd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bebd6: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bebdc: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005bebdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bebe0: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bebe6: call 0x5c5fd0 */ r_esp -= 4; W32(r_esp, 0x5bebebu); f_005c5fd0();
    /* 005bebeb: jmp 0x5bec3f */ goto L_005bec3f;
L_005bec3f:; BB(0x005bec3f);
    /* 005bec3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005bec46: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bec4c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bec4f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bec52: lea eax, [ecx + edx*4] */ r_eax = (u32)(r_ecx+r_edx*4);
    /* 005bec55: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bec5b: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005bec5e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005bec61: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005bec64: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bec6a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005bec6d: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bec6f: mov dword ptr [ebp - 0x170], ecx */ W32((u32)(r_ebp+0xfffffe90u), r_ecx);
    /* 005bec75: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bec78: mov dword ptr [ebp - 0x16c], edx */ W32((u32)(r_ebp+0xfffffe94u), r_edx);
    /* 005bec7e: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 005bec84: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 005bec8a: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 005bec90: mov dword ptr [ebp - 0x168], ecx */ W32((u32)(r_ebp+0xfffffe98u), r_ecx);
    /* 005bec96: jmp 0x5beca7 */ goto L_005beca7;
L_005bec98:; BB(0x005bec98);
    /* 005bec98: mov edx, dword ptr [ebp - 0x168] */ r_edx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005bec9e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005beca1: mov dword ptr [ebp - 0x168], edx */ W32((u32)(r_ebp+0xfffffe98u), r_edx);
L_005beca7:; BB(0x005beca7);
    /* 005beca7: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 005becad: cmp eax, dword ptr [ebp - 0x160] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffea0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005becb3: je 0x5becc2 */ if (fZ) goto L_005becc2;
L_005becb5:; BB(0x005becb5);
    /* 005becb5: mov ecx, dword ptr [ebp - 0x168] */ r_ecx = R32((u32)(r_ebp+0xfffffe98u));
    /* 005becbb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005becbe: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005becc0: jmp 0x5bec98 */ goto L_005bec98;
L_005becc2:; BB(0x005becc2);
    /* 005becc2: jmp 0x5bedf1 */ goto L_005bedf1;
L_005becc7:; BB(0x005becc7);
    /* 005becc7: mov eax, dword ptr [ebp - 0x208] */ r_eax = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005beccd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005becd0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005becd3: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005becd9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005becdc: mov dword ptr [ebp - 0x1b8], eax */ W32((u32)(r_ebp+0xfffffe48u), r_eax);
    /* 005bece2: mov ecx, dword ptr [ebp - 0x1b8] */ r_ecx = R32((u32)(r_ebp+0xfffffe48u));
    /* 005bece8: mov dword ptr [ebp - 0x1b4], ecx */ W32((u32)(r_ebp+0xfffffe4cu), r_ecx);
    /* 005becee: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005becf1: mov dword ptr [ebp - 0x1b0], edx */ W32((u32)(r_ebp+0xfffffe50u), r_edx);
    /* 005becf7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005becfa: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005becfd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bed00: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bed02: mov dword ptr [ebp - 0x1ac], ecx */ W32((u32)(r_ebp+0xfffffe54u), r_ecx);
    /* 005bed08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bed0a: mov byte ptr [ebp - 0x171], dl */ W8((u32)(r_ebp+0xfffffe8fu), (u8)r_edx);
    /* 005bed10: mov al, byte ptr [ebp - 0x173] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe8du))) & 0xffu);
    /* 005bed16: mov byte ptr [ebp - 0x172], al */ W8((u32)(r_ebp+0xfffffe8eu), (u8)r_eax);
    /* 005bed1c: mov ecx, dword ptr [ebp - 0x1b0] */ r_ecx = R32((u32)(r_ebp+0xfffffe50u));
    /* 005bed22: mov dword ptr [ebp - 0x178], ecx */ W32((u32)(r_ebp+0xfffffe88u), r_ecx);
    /* 005bed28: mov edx, dword ptr [ebp - 0x1ac] */ r_edx = R32((u32)(r_ebp+0xfffffe54u));
    /* 005bed2e: mov dword ptr [ebp - 0x180], edx */ W32((u32)(r_ebp+0xfffffe80u), r_edx);
    /* 005bed34: mov al, byte ptr [ebp - 0x171] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffe8fu))) & 0xffu);
    /* 005bed3a: mov byte ptr [ebp - 0x1a5], al */ W8((u32)(r_ebp+0xfffffe5bu), (u8)r_eax);
    /* 005bed40: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 005bed46: mov dword ptr [ebp - 0x1a4], ecx */ W32((u32)(r_ebp+0xfffffe5cu), r_ecx);
    /* 005bed4c: mov edx, dword ptr [ebp - 0x208] */ r_edx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bed52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bed53: mov eax, dword ptr [ebp - 0x1a4] */ r_eax = R32((u32)(r_ebp+0xfffffe5cu));
    /* 005bed59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bed5a: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 005bed60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bed61: mov edx, dword ptr [ebp - 0x180] */ r_edx = R32((u32)(r_ebp+0xfffffe80u));
    /* 005bed67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bed68: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5bed6du); f_005bf010();
    /* 005bed6d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bed70: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 005bed76: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005bed79: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bed7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bed7d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bed80: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005bed83: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005bed86: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bed88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005bed89: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005bed8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bed8d: call 0x5c61d0 */ r_esp -= 4; W32(r_esp, 0x5bed92u); f_005c61d0();
    /* 005bed92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bed95: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005bed98: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005bed9b: lea edx, [ecx + eax*4] */ r_edx = (u32)(r_ecx+r_eax*4);
    /* 005bed9e: mov dword ptr [ebp - 0x204], edx */ W32((u32)(r_ebp+0xfffffdfcu), r_edx);
    /* 005beda4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005beda7: mov dword ptr [ebp - 0x200], eax */ W32((u32)(r_ebp+0xfffffe00u), r_eax);
    /* 005bedad: mov ecx, dword ptr [ebp - 0x204] */ r_ecx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 005bedb3: mov dword ptr [ebp - 0x1f4], ecx */ W32((u32)(r_ebp+0xfffffe0cu), r_ecx);
    /* 005bedb9: mov edx, dword ptr [ebp - 0x200] */ r_edx = R32((u32)(r_ebp+0xfffffe00u));
    /* 005bedbf: mov dword ptr [ebp - 0x1fc], edx */ W32((u32)(r_ebp+0xfffffe04u), r_edx);
    /* 005bedc5: jmp 0x5bedd6 */ goto L_005bedd6;
L_005bedc7:; BB(0x005bedc7);
    /* 005bedc7: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 005bedcd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bedd0: mov dword ptr [ebp - 0x1fc], eax */ W32((u32)(r_ebp+0xfffffe04u), r_eax);
L_005bedd6:; BB(0x005bedd6);
    /* 005bedd6: mov ecx, dword ptr [ebp - 0x1fc] */ r_ecx = R32((u32)(r_ebp+0xfffffe04u));
    /* 005beddc: cmp ecx, dword ptr [ebp - 0x1f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffe0cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bede2: je 0x5bedf1 */ if (fZ) goto L_005bedf1;
L_005bede4:; BB(0x005bede4);
    /* 005bede4: mov edx, dword ptr [ebp - 0x1fc] */ r_edx = R32((u32)(r_ebp+0xfffffe04u));
    /* 005bedea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005beded: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005bedef: jmp 0x5bedc7 */ goto L_005bedc7;
L_005bedf1:; BB(0x005bedf1);
    /* 005bedf1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005bedf4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005bedfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005bedfc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bedfd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bedfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bedff: mov esp, ebp */ r_esp = r_ebp;
    /* 005bee01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bee02: ret 0x10 */ FN_RET(0x005be680); r_esp += 20; return;
}

void f_005beeb0(void) /* sub_5BEEB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005beeb0);
    /* 005beeb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005beeb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005beeb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005beeb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005beeb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beeba: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005beebd: jne 0x5beec5 */ if (!fZ) goto L_005beec5;
L_005beebf:; BB(0x005beebf);
    /* 005beebf: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5beec5u); call_ind(t); }
L_005beec5:; BB(0x005beec5);
    /* 005beec5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beec8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005beecb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005beece: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 005beed1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beed4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005beed6: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005beed9: ja 0x5beef1 */ if ((!fC&&!fZ)) goto L_005beef1;
L_005beedb:; BB(0x005beedb);
    /* 005beedb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beede: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005beee1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005beee4: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 005beee7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beeea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005beeec: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005beeef: jae 0x5beef7 */ if (!fC) goto L_005beef7;
L_005beef1:; BB(0x005beef1);
    /* 005beef1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5beef7u); call_ind(t); }
L_005beef7:; BB(0x005beef7);
    /* 005beef7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005beefa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005beefd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005bef00: lea ecx, [edx + eax*4] */ r_ecx = (u32)(r_edx+r_eax*4);
    /* 005bef03: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bef06: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005bef09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bef0c: mov esp, ebp */ r_esp = r_ebp;
    /* 005bef0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bef0f: ret 4 */ FN_RET(0x005beeb0); r_esp += 8; return;
}

void f_005bef20(void) /* sub_5BEF20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005bef20);
    /* 005bef20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bef21: mov ebp, esp */ r_ebp = r_esp;
    /* 005bef23: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bef26: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005bef29: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bef2c: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005bef33: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bef36: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005bef3d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bef40: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005bef47: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bef4b: jne 0x5bef53 */ if (!fZ) goto L_005bef53;
L_005bef4d:; BB(0x005bef4d);
    /* 005bef4d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005bef4f: jmp 0x5befb2 */ goto L_005befb2;
L_005bef53:; BB(0x005bef53);
    /* 005bef53: mov dword ptr [ebp - 4], 0x3fffffff */ W32((u32)(r_ebp+0xfffffffcu), 0x3fffffffu);
    /* 005bef5a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bef5e: jbe 0x5bef68 */ if ((fC||fZ)) goto L_005bef68;
L_005bef60:; BB(0x005bef60);
    /* 005bef60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005bef63: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005bef66: jmp 0x5bef6f */ goto L_005bef6f;
L_005bef68:; BB(0x005bef68);
    /* 005bef68: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_005bef6f:; BB(0x005bef6f);
    /* 005bef6f: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005bef72: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bef75: jae 0x5bef7e */ if (!fC) goto L_005bef7e;
L_005bef77:; BB(0x005bef77);
    /* 005bef77: call 0x5bee10 */ r_esp -= 4; W32(r_esp, 0x5bef7cu); f_005bee10();
    /* 005bef7c: jmp 0x5befb0 */ goto L_005befb0;
L_005bef7e:; BB(0x005bef7e);
    /* 005bef7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005bef80: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005bef83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bef84: call 0x5c6310 */ r_esp -= 4; W32(r_esp, 0x5bef89u); f_005c6310();
    /* 005bef89: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bef8c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bef8f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005bef92: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bef95: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005bef98: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005bef9b: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005bef9e: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005befa1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005befa4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005befa7: lea edx, [eax + ecx*4] */ r_edx = (u32)(r_eax+r_ecx*4);
    /* 005befaa: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005befad: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
L_005befb0:; BB(0x005befb0);
    /* 005befb0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005befb2:; BB(0x005befb2);
    /* 005befb2: mov esp, ebp */ r_esp = r_ebp;
    /* 005befb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005befb5: ret 4 */ FN_RET(0x005bef20); r_esp += 8; return;
}

void f_005befc0(void) /* sub_5BEFC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005befc0);
    /* 005befc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005befc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005befc3: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005befc6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005befc8: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005befcb: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 005befce: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 005befd1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005befd4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005befd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005befda: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005befdd: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005befe0: mov byte ptr [ebp - 0x35], cl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_ecx);
    /* 005befe3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005befe6: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005befe9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005befec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005befed: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005beff0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005beff1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005beff4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005beff5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005beff8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005beff9: call 0x5bf010 */ r_esp -= 4; W32(r_esp, 0x5beffeu); f_005bf010();
    /* 005beffe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005bf001: mov esp, ebp */ r_esp = r_ebp;
    /* 005bf003: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf004: ret  */ FN_RET(0x005befc0); r_esp += 4; return;
}

