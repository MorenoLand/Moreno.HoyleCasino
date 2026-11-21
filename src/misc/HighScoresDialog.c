#include "protos.h"

void f_0066d310(void) /* HighScoresDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d310);
    /* 0066d310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d311: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d313: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d316: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0066d319: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d31c: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x66d321u); f_005eaaf0();
    /* 0066d321: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d324: mov dword ptr [eax], 0x6e0cfc */ W32((u32)(r_eax), 0x6e0cfcu);
    /* 0066d32a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d331: jmp 0x66d33c */ goto L_0066d33c;
L_0066d333:; BB(0x0066d333);
    /* 0066d333: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d336: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066d339: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0066d33c:; BB(0x0066d33c);
    /* 0066d33c: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066d340: jge 0x66d377 */ if ((fS==fO)) goto L_0066d377;
L_0066d342:; BB(0x0066d342);
    /* 0066d342: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d345: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d348: mov dword ptr [eax + edx*4 + 0x178], 0 */ W32((u32)(r_eax+r_edx*4+0x178u), 0x0u);
    /* 0066d353: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d356: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d359: mov dword ptr [edx + ecx*4 + 0x1a0], 0 */ W32((u32)(r_edx+r_ecx*4+0x1a0u), 0x0u);
    /* 0066d364: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066d367: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d36a: mov dword ptr [ecx + eax*4 + 0x1c8], 0 */ W32((u32)(r_ecx+r_eax*4+0x1c8u), 0x0u);
    /* 0066d375: jmp 0x66d333 */ goto L_0066d333;
L_0066d377:; BB(0x0066d377);
    /* 0066d377: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d37a: mov dword ptr [edx + 0x20c], 0 */ W32((u32)(r_edx+0x20cu), 0x0u);
    /* 0066d384: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d387: mov dword ptr [eax + 0x1f4], 0 */ W32((u32)(r_eax+0x1f4u), 0x0u);
    /* 0066d391: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d394: mov dword ptr [ecx + 0x1f8], 0 */ W32((u32)(r_ecx+0x1f8u), 0x0u);
    /* 0066d39e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d3a1: mov dword ptr [edx + 0x200], 0 */ W32((u32)(r_edx+0x200u), 0x0u);
    /* 0066d3ab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d3ae: mov dword ptr [eax + 0x1fc], 0 */ W32((u32)(r_eax+0x1fcu), 0x0u);
    /* 0066d3b8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d3bb: mov dword ptr [ecx + 0x1f0], 0 */ W32((u32)(r_ecx+0x1f0u), 0x0u);
    /* 0066d3c5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d3c8: mov dword ptr [edx + 0x204], 0 */ W32((u32)(r_edx+0x204u), 0x0u);
    /* 0066d3d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d3d5: mov dword ptr [eax + 0x208], 0 */ W32((u32)(r_eax+0x208u), 0x0u);
    /* 0066d3df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0066d3e2: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d3e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d3e5: ret  */ FN_RET(0x0066d310); r_esp += 4; return;
}

void f_0066d3f0(void) /* HighScoresDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0066d3f0);
    /* 0066d3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d3f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d3f5: push 0x6acf48 */ { u32 v = 0x6acf48u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d3fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066d400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d401: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d407: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066d40c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d40e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d40f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0066d412: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0066d418: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0066d41b: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d41e: mov dword ptr [eax], 0x6e0cfc */ W32((u32)(r_eax), 0x6e0cfcu);
    /* 0066d424: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d42b: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d42e: cmp dword ptr [ecx + 0x20c], 0 */ {  u32 a = R32((u32)(r_ecx+0x20cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d435: je 0x66d476 */ if (fZ) goto L_0066d476;
L_0066d437:; BB(0x0066d437);
    /* 0066d437: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d43a: mov eax, dword ptr [edx + 0x20c] */ r_eax = R32((u32)(r_edx+0x20cu));
    /* 0066d440: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0066d443: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066d446: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0066d449: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d44d: je 0x66d462 */ if (fZ) goto L_0066d462;
L_0066d44f:; BB(0x0066d44f);
    /* 0066d44f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d451: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066d454: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d456: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066d459: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d45b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66d45du); call_ind(t); }
    /* 0066d45d: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0066d460: jmp 0x66d469 */ goto L_0066d469;
L_0066d462:; BB(0x0066d462);
    /* 0066d462: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0066d469:; BB(0x0066d469);
    /* 0066d469: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d46c: mov dword ptr [eax + 0x20c], 0 */ W32((u32)(r_eax+0x20cu), 0x0u);
L_0066d476:; BB(0x0066d476);
    /* 0066d476: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d479: cmp dword ptr [ecx + 0x1f4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d480: je 0x66d4c1 */ if (fZ) goto L_0066d4c1;
L_0066d482:; BB(0x0066d482);
    /* 0066d482: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d485: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 0066d48b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066d48e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d491: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0066d494: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d498: je 0x66d4ad */ if (fZ) goto L_0066d4ad;
L_0066d49a:; BB(0x0066d49a);
    /* 0066d49a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d49c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066d49f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d4a1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066d4a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d4a6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66d4a8u); call_ind(t); }
    /* 0066d4a8: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0066d4ab: jmp 0x66d4b4 */ goto L_0066d4b4;
L_0066d4ad:; BB(0x0066d4ad);
    /* 0066d4ad: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0066d4b4:; BB(0x0066d4b4);
    /* 0066d4b4: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d4b7: mov dword ptr [eax + 0x1f4], 0 */ W32((u32)(r_eax+0x1f4u), 0x0u);
L_0066d4c1:; BB(0x0066d4c1);
    /* 0066d4c1: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d4c4: cmp dword ptr [ecx + 0x1fc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d4cb: je 0x66d50c */ if (fZ) goto L_0066d50c;
L_0066d4cd:; BB(0x0066d4cd);
    /* 0066d4cd: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d4d0: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 0066d4d6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066d4d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066d4dc: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0066d4df: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d4e3: je 0x66d4f8 */ if (fZ) goto L_0066d4f8;
L_0066d4e5:; BB(0x0066d4e5);
    /* 0066d4e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d4e7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066d4ea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d4ec: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066d4ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d4f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66d4f3u); call_ind(t); }
    /* 0066d4f3: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0066d4f6: jmp 0x66d4ff */ goto L_0066d4ff;
L_0066d4f8:; BB(0x0066d4f8);
    /* 0066d4f8: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_0066d4ff:; BB(0x0066d4ff);
    /* 0066d4ff: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d502: mov dword ptr [eax + 0x1fc], 0 */ W32((u32)(r_eax+0x1fcu), 0x0u);
L_0066d50c:; BB(0x0066d50c);
    /* 0066d50c: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d50f: cmp dword ptr [ecx + 0x200], 0 */ {  u32 a = R32((u32)(r_ecx+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d516: je 0x66d557 */ if (fZ) goto L_0066d557;
L_0066d518:; BB(0x0066d518);
    /* 0066d518: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d51b: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 0066d521: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066d524: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0066d527: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0066d52a: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d52e: je 0x66d543 */ if (fZ) goto L_0066d543;
L_0066d530:; BB(0x0066d530);
    /* 0066d530: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d532: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066d535: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d537: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0066d53a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d53c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66d53eu); call_ind(t); }
    /* 0066d53e: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0066d541: jmp 0x66d54a */ goto L_0066d54a;
L_0066d543:; BB(0x0066d543);
    /* 0066d543: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_0066d54a:; BB(0x0066d54a);
    /* 0066d54a: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d54d: mov dword ptr [eax + 0x200], 0 */ W32((u32)(r_eax+0x200u), 0x0u);
L_0066d557:; BB(0x0066d557);
    /* 0066d557: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0066d55e: jmp 0x66d569 */ goto L_0066d569;
L_0066d560:; BB(0x0066d560);
    /* 0066d560: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d563: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0066d566: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0066d569:; BB(0x0066d569);
    /* 0066d569: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066d56d: jge 0x66d689 */ if ((fS==fO)) goto L_0066d689;
L_0066d573:; BB(0x0066d573);
    /* 0066d573: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d576: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d579: cmp dword ptr [eax + edx*4 + 0x178], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x178u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d581: je 0x66d5ca */ if (fZ) goto L_0066d5ca;
L_0066d583:; BB(0x0066d583);
    /* 0066d583: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d586: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d589: mov eax, dword ptr [edx + ecx*4 + 0x178] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x178u));
    /* 0066d590: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0066d593: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0066d596: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0066d599: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d59d: je 0x66d5b2 */ if (fZ) goto L_0066d5b2;
L_0066d59f:; BB(0x0066d59f);
    /* 0066d59f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d5a1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066d5a4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d5a6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0066d5a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d5ab: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66d5adu); call_ind(t); }
    /* 0066d5ad: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0066d5b0: jmp 0x66d5b9 */ goto L_0066d5b9;
L_0066d5b2:; BB(0x0066d5b2);
    /* 0066d5b2: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_0066d5b9:; BB(0x0066d5b9);
    /* 0066d5b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d5bc: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d5bf: mov dword ptr [ecx + eax*4 + 0x178], 0 */ W32((u32)(r_ecx+r_eax*4+0x178u), 0x0u);
L_0066d5ca:; BB(0x0066d5ca);
    /* 0066d5ca: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d5cd: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d5d0: cmp dword ptr [eax + edx*4 + 0x1a0], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d5d8: je 0x66d627 */ if (fZ) goto L_0066d627;
L_0066d5da:; BB(0x0066d5da);
    /* 0066d5da: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d5dd: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d5e0: mov eax, dword ptr [edx + ecx*4 + 0x1a0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1a0u));
    /* 0066d5e7: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0066d5ea: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0066d5ed: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0066d5f0: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d5f4: je 0x66d60c */ if (fZ) goto L_0066d60c;
L_0066d5f6:; BB(0x0066d5f6);
    /* 0066d5f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d5f8: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066d5fb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d5fd: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0066d600: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d602: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66d604u); call_ind(t); }
    /* 0066d604: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0066d60a: jmp 0x66d616 */ goto L_0066d616;
L_0066d60c:; BB(0x0066d60c);
    /* 0066d60c: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_0066d616:; BB(0x0066d616);
    /* 0066d616: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d619: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d61c: mov dword ptr [ecx + eax*4 + 0x1a0], 0 */ W32((u32)(r_ecx+r_eax*4+0x1a0u), 0x0u);
L_0066d627:; BB(0x0066d627);
    /* 0066d627: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d62a: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d62d: cmp dword ptr [eax + edx*4 + 0x1c8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d635: je 0x66d684 */ if (fZ) goto L_0066d684;
L_0066d637:; BB(0x0066d637);
    /* 0066d637: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d63a: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d63d: mov eax, dword ptr [edx + ecx*4 + 0x1c8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0066d644: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0066d647: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0066d64a: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0066d64d: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d651: je 0x66d669 */ if (fZ) goto L_0066d669;
L_0066d653:; BB(0x0066d653);
    /* 0066d653: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d655: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d658: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d65a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d65d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d65f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x66d661u); call_ind(t); }
    /* 0066d661: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0066d667: jmp 0x66d673 */ goto L_0066d673;
L_0066d669:; BB(0x0066d669);
    /* 0066d669: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_0066d673:; BB(0x0066d673);
    /* 0066d673: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0066d676: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d679: mov dword ptr [ecx + eax*4 + 0x1c8], 0 */ W32((u32)(r_ecx+r_eax*4+0x1c8u), 0x0u);
L_0066d684:; BB(0x0066d684);
    /* 0066d684: jmp 0x66d560 */ goto L_0066d560;
L_0066d689:; BB(0x0066d689);
    /* 0066d689: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d68c: cmp dword ptr [edx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_edx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d693: je 0x66d6da */ if (fZ) goto L_0066d6da;
L_0066d695:; BB(0x0066d695);
    /* 0066d695: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d698: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0066d69e: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0066d6a1: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0066d6a4: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0066d6a7: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d6ab: je 0x66d6c3 */ if (fZ) goto L_0066d6c3;
L_0066d6ad:; BB(0x0066d6ad);
    /* 0066d6ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d6af: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066d6b2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d6b4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0066d6b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d6b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d6bbu); call_ind(t); }
    /* 0066d6bb: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0066d6c1: jmp 0x66d6cd */ goto L_0066d6cd;
L_0066d6c3:; BB(0x0066d6c3);
    /* 0066d6c3: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0066d6cd:; BB(0x0066d6cd);
    /* 0066d6cd: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d6d0: mov dword ptr [ecx + 0x1f0], 0 */ W32((u32)(r_ecx+0x1f0u), 0x0u);
L_0066d6da:; BB(0x0066d6da);
    /* 0066d6da: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d6dd: cmp dword ptr [edx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_edx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d6e4: je 0x66d72b */ if (fZ) goto L_0066d72b;
L_0066d6e6:; BB(0x0066d6e6);
    /* 0066d6e6: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d6e9: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0066d6ef: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0066d6f2: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0066d6f5: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0066d6f8: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d6fc: je 0x66d714 */ if (fZ) goto L_0066d714;
L_0066d6fe:; BB(0x0066d6fe);
    /* 0066d6fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d700: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0066d703: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d705: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0066d708: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d70a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d70cu); call_ind(t); }
    /* 0066d70c: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0066d712: jmp 0x66d71e */ goto L_0066d71e;
L_0066d714:; BB(0x0066d714);
    /* 0066d714: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_0066d71e:; BB(0x0066d71e);
    /* 0066d71e: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d721: mov dword ptr [ecx + 0x1f8], 0 */ W32((u32)(r_ecx+0x1f8u), 0x0u);
L_0066d72b:; BB(0x0066d72b);
    /* 0066d72b: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d72e: cmp dword ptr [edx + 0x204], 0 */ {  u32 a = R32((u32)(r_edx+0x204u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d735: je 0x66d77c */ if (fZ) goto L_0066d77c;
L_0066d737:; BB(0x0066d737);
    /* 0066d737: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d73a: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 0066d740: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0066d743: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0066d746: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0066d749: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d74d: je 0x66d765 */ if (fZ) goto L_0066d765;
L_0066d74f:; BB(0x0066d74f);
    /* 0066d74f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d751: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0066d754: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d756: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0066d759: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d75b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d75du); call_ind(t); }
    /* 0066d75d: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0066d763: jmp 0x66d76f */ goto L_0066d76f;
L_0066d765:; BB(0x0066d765);
    /* 0066d765: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_0066d76f:; BB(0x0066d76f);
    /* 0066d76f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d772: mov dword ptr [ecx + 0x204], 0 */ W32((u32)(r_ecx+0x204u), 0x0u);
L_0066d77c:; BB(0x0066d77c);
    /* 0066d77c: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d77f: cmp dword ptr [edx + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d786: je 0x66d7cd */ if (fZ) goto L_0066d7cd;
L_0066d788:; BB(0x0066d788);
    /* 0066d788: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d78b: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 0066d791: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0066d794: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 0066d797: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0066d79a: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d79e: je 0x66d7b6 */ if (fZ) goto L_0066d7b6;
L_0066d7a0:; BB(0x0066d7a0);
    /* 0066d7a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d7a2: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0066d7a5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066d7a7: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0066d7aa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0066d7ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66d7aeu); call_ind(t); }
    /* 0066d7ae: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0066d7b4: jmp 0x66d7c0 */ goto L_0066d7c0;
L_0066d7b6:; BB(0x0066d7b6);
    /* 0066d7b6: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_0066d7c0:; BB(0x0066d7c0);
    /* 0066d7c0: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d7c3: mov dword ptr [ecx + 0x208], 0 */ W32((u32)(r_ecx+0x208u), 0x0u);
L_0066d7cd:; BB(0x0066d7cd);
    /* 0066d7cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066d7d4: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0066d7d7: call 0x5eac00 */ r_esp -= 4; W32(r_esp, 0x66d7dcu); f_005eac00();
    /* 0066d7dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d7df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d7e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d7e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d7e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d7ea: ret  */ FN_RET(0x0066d3f0); r_esp += 4; return;
}

