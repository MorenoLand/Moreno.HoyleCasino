#include "protos.h"

void f_005cd360(void) /* BetTag::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd360);
    /* 005cd360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd361: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd363: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd364: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd36a: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5cd36fu); f_005ec5a0();
    /* 005cd36f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd372: mov dword ptr [eax], 0x6d2974 */ W32((u32)(r_eax), 0x6d2974u);
    /* 005cd378: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd37b: mov dword ptr [ecx + 0x1d0], 0 */ W32((u32)(r_ecx+0x1d0u), 0x0u);
    /* 005cd385: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd388: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd38a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd38b: ret  */ FN_RET(0x005cd360); r_esp += 4; return;
}

void f_005cd390(void) /* BetTag::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd390);
    /* 005cd390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd391: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd393: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd395: push 0x6a8b9a */ { u32 v = 0x6a8b9au; r_esp -= 4; W32(r_esp, v); }
    /* 005cd39a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd3a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd3a1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd3a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cd3a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cd3ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd3ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cd3af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cd3b5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005cd3b8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd3bb: mov dword ptr [eax], 0x6d2974 */ W32((u32)(r_eax), 0x6d2974u);
    /* 005cd3c1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd3c8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd3cb: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 005cd3d1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005cd3d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd3d7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005cd3da: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd3de: je 0x5cd3f3 */ if (fZ) goto L_005cd3f3;
L_005cd3e0:; BB(0x005cd3e0);
    /* 005cd3e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd3e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd3e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd3e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005cd3ea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005cd3ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd3eeu); call_ind(t); }
    /* 005cd3ee: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005cd3f1: jmp 0x5cd3fa */ goto L_005cd3fa;
L_005cd3f3:; BB(0x005cd3f3);
    /* 005cd3f3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005cd3fa:; BB(0x005cd3fa);
    /* 005cd3fa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cd401: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd404: call 0x5ec760 */ r_esp -= 4; W32(r_esp, 0x5cd409u); f_005ec760();
    /* 005cd409: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd40c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd413: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd414: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd416: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd417: ret  */ FN_RET(0x005cd390); r_esp += 4; return;
}

void f_005cd420(void) /* BetTag::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd420);
    /* 005cd420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd421: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd423: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd425: push 0x6a8bc0 */ { u32 v = 0x6a8bc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd42a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cd430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd431: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cd434: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005cd439: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005cd43b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd43c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005cd43f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005cd445: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005cd448: mov byte ptr [ebp - 0x10], 0 */ W8((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005cd44c: mov byte ptr [ebp - 0xf], 0 */ W8((u32)(r_ebp+0xfffffff1u), 0x0u);
    /* 005cd450: mov byte ptr [ebp - 0xe], 0 */ W8((u32)(r_ebp+0xfffffff2u), 0x0u);
    /* 005cd454: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 005cd458: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd45b: call 0x5f6270 */ r_esp -= 4; W32(r_esp, 0x5cd460u); f_005f6270();
    /* 005cd460: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd463: cmp dword ptr [eax + 0x1d0], 0 */ {  u32 a = R32((u32)(r_eax+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd46a: jne 0x5cd4b3 */ if (!fZ) goto L_005cd4b3;
L_005cd46c:; BB(0x005cd46c);
    /* 005cd46c: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd46e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5cd473u); f_00686d82();
    /* 005cd473: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cd476: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005cd479: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cd480: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd484: je 0x5cd493 */ if (fZ) goto L_005cd493;
L_005cd486:; BB(0x005cd486);
    /* 005cd486: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cd489: call 0x5f6130 */ r_esp -= 4; W32(r_esp, 0x5cd48eu); f_005f6130();
    /* 005cd48e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005cd491: jmp 0x5cd49a */ goto L_005cd49a;
L_005cd493:; BB(0x005cd493);
    /* 005cd493: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005cd49a:; BB(0x005cd49a);
    /* 005cd49a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cd49d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cd4a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cd4a7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd4aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cd4ad: mov dword ptr [edx + 0x1d0], eax */ W32((u32)(r_edx+0x1d0u), r_eax);
L_005cd4b3:; BB(0x005cd4b3);
    /* 005cd4b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd4b5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd4b8: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5cd4bdu); f_005f53c0();
    /* 005cd4bd: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005cd4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd4c1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd4c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd4c6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd4c9: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005cd4cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd4ceu); call_ind(t); }
    /* 005cd4ce: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd4d2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd4d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd4d7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd4da: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005cd4dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd4dfu); call_ind(t); }
    /* 005cd4df: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd4e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd4e3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd4e6: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5cd4ebu); f_005f5590();
    /* 005cd4eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd4ec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd4ef: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5cd4f4u); f_005f5550();
    /* 005cd4f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd4f5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd4f8: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 005cd4fe: call 0x5f61d0 */ r_esp -= 4; W32(r_esp, 0x5cd503u); f_005f61d0();
    /* 005cd503: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd505: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd507: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd509: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd50c: mov ecx, dword ptr [edx + 0x1d0] */ r_ecx = R32((u32)(r_edx+0x1d0u));
    /* 005cd512: call 0x5f6580 */ r_esp -= 4; W32(r_esp, 0x5cd517u); f_005f6580();
    /* 005cd517: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd519: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd51b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cd51d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd520: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 005cd526: call 0x5f6490 */ r_esp -= 4; W32(r_esp, 0x5cd52bu); f_005f6490();
    /* 005cd52b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd52e: movzx edx, byte ptr [ecx + 0x9c] */ r_edx = (u32)R8((u32)(r_ecx+0x9cu));
    /* 005cd535: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd53b: jne 0x5cd558 */ if (!fZ) goto L_005cd558;
L_005cd53d:; BB(0x005cd53d);
    /* 005cd53d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd540: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 005cd546: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cd549: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 005cd54f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005cd551: mov ecx, eax */ r_ecx = r_eax;
    /* 005cd553: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005cd556: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd558u); call_ind(t); }
L_005cd558:; BB(0x005cd558);
    /* 005cd558: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cd55b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cd562: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cd563: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd565: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd566: ret  */ FN_RET(0x005cd420); r_esp += 4; return;
}

void f_005cd570(void) /* BetTag::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd570);
    /* 005cd570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd571: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd574: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd577: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd57c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd57f: call 0x5cd620 */ r_esp -= 4; W32(r_esp, 0x5cd584u); f_005cd620();
    /* 005cd584: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd587: call 0x5f62b0 */ r_esp -= 4; W32(r_esp, 0x5cd58cu); f_005f62b0();
    /* 005cd58c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd58f: cmp dword ptr [eax + 0x1d0], 0 */ {  u32 a = R32((u32)(r_eax+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd596: je 0x5cd5be */ if (fZ) goto L_005cd5be;
L_005cd598:; BB(0x005cd598);
    /* 005cd598: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cd59d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd5a0: call 0x5cd620 */ r_esp -= 4; W32(r_esp, 0x5cd5a5u); f_005cd620();
    /* 005cd5a5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd5a8: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 005cd5ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd5b1: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 005cd5b7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005cd5b9: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005cd5bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd5beu); call_ind(t); }
L_005cd5be:; BB(0x005cd5be);
    /* 005cd5be: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd5c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd5c1: ret  */ FN_RET(0x005cd570); r_esp += 4; return;
}

void f_005cd5d0(void) /* BetTag::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005cd5d0);
    /* 005cd5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cd5d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005cd5d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cd5da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cd5de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd5e2: call 0x5f6210 */ r_esp -= 4; W32(r_esp, 0x5cd5e7u); f_005f6210();
    /* 005cd5e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd5ea: cmp dword ptr [edx + 0x1d0], 0 */ {  u32 a = R32((u32)(r_edx+0x1d0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cd5f1: je 0x5cd61a */ if (fZ) goto L_005cd61a;
L_005cd5f3:; BB(0x005cd5f3);
    /* 005cd5f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cd5f6: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cd5f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cd5fa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005cd5fd: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005cd600: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005cd601: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd604: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 005cd60a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005cd60d: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 005cd613: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005cd615: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005cd618: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5cd61au); call_ind(t); }
L_005cd61a:; BB(0x005cd61a);
    /* 005cd61a: mov esp, ebp */ r_esp = r_ebp;
    /* 005cd61c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cd61d: ret 8 */ FN_RET(0x005cd5d0); r_esp += 12; return;
}

