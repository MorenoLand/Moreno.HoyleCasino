#include "protos.h"

void f_005ff310(void) /* sciTab::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff310);
    /* 005ff310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff311: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff313: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff314: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff31a: call 0x6060a0 */ r_esp -= 4; W32(r_esp, 0x5ff31fu); f_006060a0();
    /* 005ff31f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff322: mov dword ptr [eax], 0x6d7124 */ W32((u32)(r_eax), 0x6d7124u);
    /* 005ff328: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff32b: mov dword ptr [ecx + 0x1d8], 0x30 */ W32((u32)(r_ecx+0x1d8u), 0x30u);
    /* 005ff335: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff338: mov dword ptr [edx + 0x214], 0 */ W32((u32)(r_edx+0x214u), 0x0u);
    /* 005ff342: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff345: mov dword ptr [eax + 0x210], 0 */ W32((u32)(r_eax+0x210u), 0x0u);
    /* 005ff34f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff352: mov word ptr [ecx + 0x218], 0 */ W16((u32)(r_ecx+0x218u), 0x0u);
    /* 005ff35b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff35e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff360: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff361: ret  */ FN_RET(0x005ff310); r_esp += 4; return;
}

void f_005ff370(void) /* sciTab::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff370);
    /* 005ff370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff371: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff375: push 0x6aa798 */ { u32 v = 0x6aa798u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff37a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ff380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff381: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff384: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005ff389: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ff38b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff38c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005ff38f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005ff395: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ff398: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff39b: mov dword ptr [eax], 0x6d7124 */ W32((u32)(r_eax), 0x6d7124u);
    /* 005ff3a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff3a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff3ab: cmp dword ptr [ecx + 0x210], 0 */ {  u32 a = R32((u32)(r_ecx+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff3b2: je 0x5ff3f4 */ if (fZ) goto L_005ff3f4;
L_005ff3b4:; BB(0x005ff3b4);
    /* 005ff3b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff3b7: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 005ff3bd: call 0x60ca10 */ r_esp -= 4; W32(r_esp, 0x5ff3c2u); f_0060ca10();
    /* 005ff3c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff3c5: mov ecx, dword ptr [eax + 0x210] */ r_ecx = R32((u32)(r_eax+0x210u));
    /* 005ff3cb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005ff3ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ff3d1: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ff3d4: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff3d8: je 0x5ff3ed */ if (fZ) goto L_005ff3ed;
L_005ff3da:; BB(0x005ff3da);
    /* 005ff3da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff3dc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ff3df: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ff3e1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ff3e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ff3e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ff3e8u); call_ind(t); }
    /* 005ff3e8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005ff3eb: jmp 0x5ff3f4 */ goto L_005ff3f4;
L_005ff3ed:; BB(0x005ff3ed);
    /* 005ff3ed: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005ff3f4:; BB(0x005ff3f4);
    /* 005ff3f4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ff3fb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ff3fe: call 0x6060e0 */ r_esp -= 4; W32(r_esp, 0x5ff403u); f_006060e0();
    /* 005ff403: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff406: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ff40d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ff40e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff410: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff411: ret  */ FN_RET(0x005ff370); r_esp += 4; return;
}

void f_005ff420(void) /* sciTab::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff420);
    /* 005ff420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff421: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff427: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff42a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff42b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff42e: call 0x601ca0 */ r_esp -= 4; W32(r_esp, 0x5ff433u); f_00601ca0();
    /* 005ff433: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ff436: mov dword ptr [ecx + 0x18], 2 */ W32((u32)(r_ecx+0x18u), 0x2u);
    /* 005ff43d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ff440: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff441: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff444: call 0x5ffd60 */ r_esp -= 4; W32(r_esp, 0x5ff449u); f_005ffd60();
    /* 005ff449: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff44b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff44c: ret 4 */ FN_RET(0x005ff420); r_esp += 8; return;
}

void f_005ff450(void) /* sciTab::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff450);
    /* 005ff450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff451: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff453: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff454: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff457: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff45a: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x5ff45fu); f_005f5cc0();
    /* 005ff45f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff462: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff469: je 0x5ff499 */ if (fZ) goto L_005ff499;
L_005ff46b:; BB(0x005ff46b);
    /* 005ff46b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff46e: call 0x5fff30 */ r_esp -= 4; W32(r_esp, 0x5ff473u); f_005fff30();
    /* 005ff473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff474: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff477: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 005ff47d: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5ff482u); f_005ecc60();
    /* 005ff482: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff485: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5ff48au); f_005f5590();
    /* 005ff48a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff48b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff48e: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 005ff494: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5ff499u); f_005eccb0();
L_005ff499:; BB(0x005ff499);
    /* 005ff499: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff49b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff49d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff49f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff4ac: call 0x5fff90 */ r_esp -= 4; W32(r_esp, 0x5ff4b1u); f_005fff90();
    /* 005ff4b1: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff4b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff4b4: ret  */ FN_RET(0x005ff450); r_esp += 4; return;
}

void f_005ff4f0(void) /* sciTab::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff4f0);
    /* 005ff4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff4f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff4f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ff4fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff4fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff4fe: call 0x602390 */ r_esp -= 4; W32(r_esp, 0x5ff503u); f_00602390();
    /* 005ff503: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff505: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff506: ret 4 */ FN_RET(0x005ff4f0); r_esp += 8; return;
}

void f_005ff6a0(void) /* sciTab::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff6a0);
    /* 005ff6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff6a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff6a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ff6a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff6ac: call 0x606140 */ r_esp -= 4; W32(r_esp, 0x5ff6b1u); f_00606140();
    /* 005ff6b1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff6b4: cmp dword ptr [eax + 0x210], 0 */ {  u32 a = R32((u32)(r_eax+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff6bb: je 0x5ff706 */ if (fZ) goto L_005ff706;
L_005ff6bd:; BB(0x005ff6bd);
    /* 005ff6bd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff6c4: jmp 0x5ff6cf */ goto L_005ff6cf;
L_005ff6c6:; BB(0x005ff6c6);
    /* 005ff6c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff6c9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff6cc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ff6cf:; BB(0x005ff6cf);
    /* 005ff6cf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff6d2: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 005ff6d8: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5ff6ddu); f_0060c9a0();
    /* 005ff6dd: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff6e0: jge 0x5ff706 */ if ((fS==fO)) goto L_005ff706;
L_005ff6e2:; BB(0x005ff6e2);
    /* 005ff6e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff6e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff6e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff6e9: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 005ff6ef: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5ff6f4u); f_0060ca40();
    /* 005ff6f4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ff6f7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff6fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ff6fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff6ff: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005ff702: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ff704u); call_ind(t); }
    /* 005ff704: jmp 0x5ff6c6 */ goto L_005ff6c6;
L_005ff706:; BB(0x005ff706);
    /* 005ff706: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff709: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff70a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff70d: mov ecx, dword ptr [ecx + 0x214] */ r_ecx = R32((u32)(r_ecx+0x214u));
    /* 005ff713: call 0x5ff960 */ r_esp -= 4; W32(r_esp, 0x5ff718u); f_005ff960();
    /* 005ff718: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005ff71a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff71d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ff71f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff722: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005ff725: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ff727u); call_ind(t); }
    /* 005ff727: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff729: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff72a: ret  */ FN_RET(0x005ff6a0); r_esp += 4; return;
}

void f_005ff730(void) /* sciTab::vfunc62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff730);
    /* 005ff730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff731: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff733: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ff736: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005ff739: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff73c: call 0x6001b0 */ r_esp -= 4; W32(r_esp, 0x5ff741u); f_006001b0();
    /* 005ff741: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff744: cmp dword ptr [eax + 0x210], 0 */ {  u32 a = R32((u32)(r_eax+0x210u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff74b: je 0x5ff796 */ if (fZ) goto L_005ff796;
L_005ff74d:; BB(0x005ff74d);
    /* 005ff74d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ff754: jmp 0x5ff75f */ goto L_005ff75f;
L_005ff756:; BB(0x005ff756);
    /* 005ff756: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff759: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ff75c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005ff75f:; BB(0x005ff75f);
    /* 005ff75f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff762: mov ecx, dword ptr [edx + 0x210] */ r_ecx = R32((u32)(r_edx+0x210u));
    /* 005ff768: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5ff76du); f_0060c9a0();
    /* 005ff76d: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ff770: jge 0x5ff796 */ if ((fS==fO)) goto L_005ff796;
L_005ff772:; BB(0x005ff772);
    /* 005ff772: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff776: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ff779: mov ecx, dword ptr [ecx + 0x210] */ r_ecx = R32((u32)(r_ecx+0x210u));
    /* 005ff77f: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5ff784u); f_0060ca40();
    /* 005ff784: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ff787: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff78a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ff78c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ff78f: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005ff792: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ff794u); call_ind(t); }
    /* 005ff794: jmp 0x5ff756 */ goto L_005ff756;
L_005ff796:; BB(0x005ff796);
    /* 005ff796: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff798: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff799: ret  */ FN_RET(0x005ff730); r_esp += 4; return;
}

void f_005ff7c0(void) /* sciTab::vfunc59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ff7c0);
    /* 005ff7c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ff7c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff7c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ff7c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff7ca: call 0x600330 */ r_esp -= 4; W32(r_esp, 0x5ff7cfu); f_00600330();
    /* 005ff7cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff7d2: movzx ecx, byte ptr [eax + 0x1dc] */ r_ecx = (u32)R8((u32)(r_eax+0x1dcu));
    /* 005ff7d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff7db: je 0x5ff830 */ if (fZ) goto L_005ff830;
L_005ff7dd:; BB(0x005ff7dd);
    /* 005ff7dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff7e0: cmp dword ptr [edx + 0x190], 0 */ {  u32 a = R32((u32)(r_edx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff7e7: je 0x5ff830 */ if (fZ) goto L_005ff830;
L_005ff7e9:; BB(0x005ff7e9);
    /* 005ff7e9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff7ec: cmp dword ptr [eax + 0x194], 3 */ {  u32 a = R32((u32)(r_eax+0x194u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff7f3: je 0x5ff801 */ if (fZ) goto L_005ff801;
L_005ff7f5:; BB(0x005ff7f5);
    /* 005ff7f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff7f8: cmp dword ptr [ecx + 0x194], 1 */ {  u32 a = R32((u32)(r_ecx+0x194u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ff7ff: jne 0x5ff830 */ if (!fZ) goto L_005ff830;
L_005ff801:; BB(0x005ff801);
    /* 005ff801: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ff802: mov edx, esp */ r_edx = r_esp;
    /* 005ff804: mov ax, word ptr [0x75ee1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 005ff80a: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 005ff80d: mov cl, byte ptr [0x75ee1e] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 005ff813: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 005ff816: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ff818: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff81b: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 005ff821: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ff822: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ff825: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 005ff82b: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x5ff830u); f_005ecd00();
L_005ff830:; BB(0x005ff830);
    /* 005ff830: mov esp, ebp */ r_esp = r_ebp;
    /* 005ff832: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ff833: ret  */ FN_RET(0x005ff7c0); r_esp += 4; return;
}

void f_00606100(void) /* sciTab::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606100);
    /* 00606100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606101: mov ebp, esp */ r_ebp = r_esp;
    /* 00606103: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606106: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00606109: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060610c: mov cl, byte ptr [eax + 0x20c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x20cu))) & 0xffu);
    /* 00606112: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00606115: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00606119: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060611b: je 0x606127 */ if (fZ) goto L_00606127;
L_0060611d:; BB(0x0060611d);
    /* 0060611d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00606120: call 0x602550 */ r_esp -= 4; W32(r_esp, 0x606125u); f_00602550();
    /* 00606125: jmp 0x60612f */ goto L_0060612f;
L_00606127:; BB(0x00606127);
    /* 00606127: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060612a: call 0x602500 */ r_esp -= 4; W32(r_esp, 0x60612fu); f_00602500();
L_0060612f:; BB(0x0060612f);
    /* 0060612f: mov esp, ebp */ r_esp = r_ebp;
    /* 00606131: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606132: ret  */ FN_RET(0x00606100); r_esp += 4; return;
}

void f_00606180(void) /* sciTab::vfunc60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606180);
    /* 00606180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606181: mov ebp, esp */ r_ebp = r_esp;
    /* 00606183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00606184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00606187: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060618a: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x60618fu); f_00600230();
    /* 0060618f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00606192: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00606194: je 0x606198 */ if (fZ) goto L_00606198;
L_00606196:; BB(0x00606196);
    /* 00606196: jmp 0x6061af */ goto L_006061af;
L_00606198:; BB(0x00606198);
    /* 00606198: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060619b: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x6061a0u); f_005f5400();
    /* 006061a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006061a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006061a4: mov ecx, dword ptr [ecx + 0x208] */ r_ecx = R32((u32)(r_ecx+0x208u));
    /* 006061aa: call 0x6065d0 */ r_esp -= 4; W32(r_esp, 0x6061afu); f_006065d0();
L_006061af:; BB(0x006061af);
    /* 006061af: mov esp, ebp */ r_esp = r_ebp;
    /* 006061b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006061b2: ret  */ FN_RET(0x00606180); r_esp += 4; return;
}

