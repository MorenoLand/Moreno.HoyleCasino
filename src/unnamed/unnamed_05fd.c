#include "protos.h"

void f_005fd330(void) /* sub_5FD330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd330);
    /* 005fd330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd331: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd333: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd336: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fd337: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005fd33a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd33d: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 005fd343: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 005fd349: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005fd34c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd34f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd350: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fd356: call 0x5f28c0 */ r_esp -= 4; W32(r_esp, 0x5fd35bu); f_005f28c0();
    /* 005fd35b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd35e: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005fd361: call 0x5f84f0 */ r_esp -= 4; W32(r_esp, 0x5fd366u); f_005f84f0();
    /* 005fd366: mov esi, eax */ r_esi = r_eax;
    /* 005fd368: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd36b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fd36d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd370: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005fd373: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fd375u); call_ind(t); }
    /* 005fd375: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fd377: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 005fd37a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd37d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005fd380: call 0x5f84d0 */ r_esp -= 4; W32(r_esp, 0x5fd385u); f_005f84d0();
    /* 005fd385: mov esi, eax */ r_esi = r_eax;
    /* 005fd387: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd38a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fd38c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd38f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005fd392: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd394u); call_ind(t); }
    /* 005fd394: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fd396: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 005fd399: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd39b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd39e: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 005fd3a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3a5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3a7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd3aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd3ae: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fd3b3u); f_005f5550();
    /* 005fd3b3: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd3b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3b7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd3ba: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 005fd3c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3c1: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fd3c7: call 0x5f2670 */ r_esp -= 4; W32(r_esp, 0x5fd3ccu); f_005f2670();
    /* 005fd3cc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3ce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd3d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd3d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd3d6: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 005fd3dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd3deu); call_ind(t); }
    /* 005fd3de: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd3e1: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fd3e6u); f_005f5400();
    /* 005fd3e6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd3e9: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 005fd3ef: mov dword ptr [edx + 0x1b8], eax */ W32((u32)(r_edx+0x1b8u), r_eax);
    /* 005fd3f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd3f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd3fa: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5fd3ffu); f_005f5df0();
    /* 005fd3ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fd400: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd403: ret  */ FN_RET(0x005fd330); r_esp += 4; return;
}

void f_005fd410(void) /* sub_5FD410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd410);
    /* 005fd410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd411: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd414: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fd417: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd41a: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 005fd420: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd421: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fd427: call 0x5f2840 */ r_esp -= 4; W32(r_esp, 0x5fd42cu); f_005f2840();
    /* 005fd42c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd42e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd431: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5fd436u); f_005f5df0();
    /* 005fd436: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd438: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd439: ret  */ FN_RET(0x005fd410); r_esp += 4; return;
}

void f_005fd440(void) /* sub_5FD440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd440);
    /* 005fd440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd441: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd445: push 0x6aa63a */ { u32 v = 0x6aa63au; r_esp -= 4; W32(r_esp, v); }
    /* 005fd44a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fd450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd451: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd454: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fd459: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fd45b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd45c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fd45f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fd465: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fd468: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd46b: cmp dword ptr [eax + 0x1f8], 0 */ {  u32 a = R32((u32)(r_eax+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd472: jne 0x5fd526 */ if (!fZ) goto L_005fd526;
L_005fd478:; BB(0x005fd478);
    /* 005fd478: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd47d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fd482u); f_00686d82();
    /* 005fd482: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd485: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fd488: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fd48f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd493: je 0x5fd4a2 */ if (fZ) goto L_005fd4a2;
L_005fd495:; BB(0x005fd495);
    /* 005fd495: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd498: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5fd49du); f_005eaaf0();
    /* 005fd49d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fd4a0: jmp 0x5fd4a9 */ goto L_005fd4a9;
L_005fd4a2:; BB(0x005fd4a2);
    /* 005fd4a2: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fd4a9:; BB(0x005fd4a9);
    /* 005fd4a9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fd4ac: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005fd4af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fd4b6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd4b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd4bc: mov dword ptr [edx + 0x1f8], eax */ W32((u32)(r_edx+0x1f8u), r_eax);
    /* 005fd4c2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd4c5: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 005fd4cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd4ce: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005fd4d1: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005fd4d4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd4d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd4d9: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5fd4deu); f_005f53c0();
    /* 005fd4de: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd4e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd4e2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd4e5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fd4e7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd4ea: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005fd4ed: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fd4efu); call_ind(t); }
    /* 005fd4ef: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd4f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd4f3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd4f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd4f8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd4fb: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005fd4fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd500u); call_ind(t); }
    /* 005fd500: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd504: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fd50a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fd50c: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fd512: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005fd515: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd517u); call_ind(t); }
    /* 005fd517: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd518: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd51b: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 005fd521: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5fd526u); f_005eae80();
L_005fd526:; BB(0x005fd526);
    /* 005fd526: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd529: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5fd52eu); f_005f54a0();
    /* 005fd52e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005fd531: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd533: je 0x5fd550 */ if (fZ) goto L_005fd550;
L_005fd535:; BB(0x005fd535);
    /* 005fd535: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd538: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 005fd53e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd541: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 005fd547: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fd549: mov ecx, eax */ r_ecx = r_eax;
    /* 005fd54b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fd54e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd550u); call_ind(t); }
L_005fd550:; BB(0x005fd550);
    /* 005fd550: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd553: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd55a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fd55b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd55d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd55e: ret  */ FN_RET(0x005fd440); r_esp += 4; return;
}

void f_005fd560(void) /* sub_5FD560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd560);
    /* 005fd560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd561: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd563: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd566: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fd569: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd56c: cmp dword ptr [eax + 0x1f8], 0 */ {  u32 a = R32((u32)(r_eax+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd573: je 0x5fd5cd */ if (fZ) goto L_005fd5cd;
L_005fd575:; BB(0x005fd575);
    /* 005fd575: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd578: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 005fd57e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd581: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 005fd587: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005fd589: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005fd58c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd58eu); call_ind(t); }
    /* 005fd58e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd591: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 005fd597: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005fd59a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fd59d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005fd5a0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd5a4: je 0x5fd5b9 */ if (fZ) goto L_005fd5b9;
L_005fd5a6:; BB(0x005fd5a6);
    /* 005fd5a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd5a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5ab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fd5ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fd5b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fd5b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd5b4u); call_ind(t); }
    /* 005fd5b4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fd5b7: jmp 0x5fd5c0 */ goto L_005fd5c0;
L_005fd5b9:; BB(0x005fd5b9);
    /* 005fd5b9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005fd5c0:; BB(0x005fd5c0);
    /* 005fd5c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd5c3: mov dword ptr [ecx + 0x1f8], 0 */ W32((u32)(r_ecx+0x1f8u), 0x0u);
L_005fd5cd:; BB(0x005fd5cd);
    /* 005fd5cd: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd5cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd5d0: ret  */ FN_RET(0x005fd560); r_esp += 4; return;
}

void f_005fd730(void) /* sub_5FD730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fd730);
    /* 005fd730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fd731: mov ebp, esp */ r_ebp = r_esp;
    /* 005fd733: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd735: push 0x6aa660 */ { u32 v = 0x6aa660u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd73a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fd740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd741: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fd744: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fd749: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fd74b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd74c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fd74f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fd755: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fd758: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd75b: cmp dword ptr [eax + 0x200], 0 */ {  u32 a = R32((u32)(r_eax+0x200u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd762: jne 0x5fd7ae */ if (!fZ) goto L_005fd7ae;
L_005fd764:; BB(0x005fd764);
    /* 005fd764: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd769: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fd76eu); f_00686d82();
    /* 005fd76e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fd771: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fd774: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fd77b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fd77f: je 0x5fd78e */ if (fZ) goto L_005fd78e;
L_005fd781:; BB(0x005fd781);
    /* 005fd781: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fd784: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x5fd789u); f_005ec5a0();
    /* 005fd789: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fd78c: jmp 0x5fd795 */ goto L_005fd795;
L_005fd78e:; BB(0x005fd78e);
    /* 005fd78e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005fd795:; BB(0x005fd795);
    /* 005fd795: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fd798: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005fd79b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fd7a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd7a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fd7a8: mov dword ptr [edx + 0x200], eax */ W32((u32)(r_edx+0x200u), r_eax);
L_005fd7ae:; BB(0x005fd7ae);
    /* 005fd7ae: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd7b1: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 005fd7b7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd7ba: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005fd7bd: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005fd7c0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fd7c2: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005fd7c4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd7c7: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 005fd7cd: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5fd7d2u); f_005f53c0();
    /* 005fd7d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fd7d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd7d6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd7d9: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 005fd7df: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd7e2: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 005fd7e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fd7ea: mov ecx, eax */ r_ecx = r_eax;
    /* 005fd7ec: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005fd7ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd7f1u); call_ind(t); }
    /* 005fd7f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd7f2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd7f5: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 005fd7fb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd7fe: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 005fd804: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005fd806: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005fd809: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd80bu); call_ind(t); }
    /* 005fd80b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd80c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd80f: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 005fd815: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5fd81au); f_005f5590();
    /* 005fd81a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd81b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd81e: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 005fd824: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5fd829u); f_005f5550();
    /* 005fd829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd82a: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005fd82f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fd831: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fd837: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005fd83a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fd83cu); call_ind(t); }
    /* 005fd83c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fd83d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fd840: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fd841: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fd844: mov ecx, dword ptr [edx + 0x200] */ r_ecx = R32((u32)(r_edx+0x200u));
    /* 005fd84a: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5fd84fu); f_005ec8f0();
    /* 005fd84f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fd852: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fd859: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fd85a: mov esp, ebp */ r_esp = r_ebp;
    /* 005fd85c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fd85d: ret 4 */ FN_RET(0x005fd730); r_esp += 8; return;
}

void f_005fddf0(void) /* sub_5FDDF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fddf0);
    /* 005fddf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fddf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fddf3: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fddf6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fddf7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005fddfa: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005fde01: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fde04: cmp dword ptr [eax + 0x1bc], 0 */ {  u32 a = R32((u32)(r_eax+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fde0b: je 0x5fde1f */ if (fZ) goto L_005fde1f;
L_005fde0d:; BB(0x005fde0d);
    /* 005fde0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fde10: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005fde13: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 005fde16: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fde19: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fde1c: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_005fde1f:; BB(0x005fde1f);
    /* 005fde1f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005fde22: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fde25: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fde29: je 0x5fde2d */ if (fZ) goto L_005fde2d;
L_005fde2b:; BB(0x005fde2b);
    /* 005fde2b: jmp 0x5fde3d */ goto L_005fde3d;
L_005fde2d:; BB(0x005fde2d);
    /* 005fde2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fde30: call 0x5fed00 */ r_esp -= 4; W32(r_esp, 0x5fde35u); f_005fed00();
    /* 005fde35: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fde38: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005fde3a: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_005fde3d:; BB(0x005fde3d);
    /* 005fde3d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fde40: call 0x5fed00 */ r_esp -= 4; W32(r_esp, 0x5fde45u); f_005fed00();
    /* 005fde45: mov esi, eax */ r_esi = r_eax;
    /* 005fde47: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005fde4a: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005fde50: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005fde53: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5fde58u); f_005f8570();
    /* 005fde58: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fde5a: jle 0x5fde80 */ if ((fZ||fS!=fO)) goto L_005fde80;
L_005fde5c:; BB(0x005fde5c);
    /* 005fde5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fde5f: call 0x5fed00 */ r_esp -= 4; W32(r_esp, 0x5fde64u); f_005fed00();
    /* 005fde64: mov esi, eax */ r_esi = r_eax;
    /* 005fde66: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005fde6b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005fde6e: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5fde73u); f_005f8570();
    /* 005fde73: sub eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fde76: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005fde78: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fde7b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005fde7d: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_005fde80:; BB(0x005fde80);
    /* 005fde80: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fde83: sub edx, dword ptr [0x6d6eb8] */ {  u32 a = r_edx; u32 b = R32((u32)(0x6d6eb8u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fde89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fde8a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fde8d: sub eax, dword ptr [0x6d6eb4] */ {  u32 a = r_eax; u32 b = R32((u32)(0x6d6eb4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005fde93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fde94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fde97: call 0x5f8420 */ r_esp -= 4; W32(r_esp, 0x5fde9cu); f_005f8420();
    /* 005fde9c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fde9f: add ecx, dword ptr [0x6d6eb8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x6d6eb8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdea5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005fdea8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdeaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdead: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fdeb2u); f_005fb2b0();
    /* 005fdeb2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fdeb5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fdeb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdeb9: mov eax, dword ptr [0x6d6eb4] */ r_eax = R32((u32)(0x6d6eb4u));
    /* 005fdebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdebf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdec2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fdec4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fdec7: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005fdeca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fdeccu); call_ind(t); }
    /* 005fdecc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdece: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fded1: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fded6u); f_005fb2b0();
    /* 005fded6: mov ecx, eax */ r_ecx = r_eax;
    /* 005fded8: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5fdeddu); f_005f5590();
    /* 005fdedd: mov esi, eax */ r_esi = r_eax;
    /* 005fdedf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdee1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdee4: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fdee9u); f_005fb2b0();
    /* 005fdee9: mov ecx, eax */ r_ecx = r_eax;
    /* 005fdeeb: call 0x5eb4b0 */ r_esp -= 4; W32(r_esp, 0x5fdef0u); f_005eb4b0();
    /* 005fdef0: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fdef3: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fdef5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fdef8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fdeff: jmp 0x5fdf0a */ goto L_005fdf0a;
L_005fdf01:; BB(0x005fdf01);
    /* 005fdf01: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdf04: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fdf07: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005fdf0a:; BB(0x005fdf0a);
    /* 005fdf0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdf0d: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5fdf12u); f_005feda0();
    /* 005fdf12: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fdf15: jge 0x5fdf59 */ if ((fS==fO)) goto L_005fdf59;
L_005fdf17:; BB(0x005fdf17);
    /* 005fdf17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdf1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdf1e: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fdf23u); f_005ff080();
    /* 005fdf23: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fdf26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fdf29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf2a: mov ecx, dword ptr [0x6d6eb4] */ r_ecx = R32((u32)(0x6d6eb4u));
    /* 005fdf30: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf31: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fdf34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fdf36: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fdf39: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005fdf3c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fdf3eu); call_ind(t); }
    /* 005fdf3e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fdf41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf42: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdf45: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5fdf4au); f_005ff080();
    /* 005fdf4a: mov ecx, eax */ r_ecx = r_eax;
    /* 005fdf4c: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5fdf51u); f_005f5590();
    /* 005fdf51: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fdf54: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005fdf57: jmp 0x5fdf01 */ goto L_005fdf01;
L_005fdf59:; BB(0x005fdf59);
    /* 005fdf59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdf5e: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5fdf63u); f_005fb2b0();
    /* 005fdf63: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fdf66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005fdf69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf6a: mov edx, dword ptr [0x6d6eb4] */ r_edx = R32((u32)(0x6d6eb4u));
    /* 005fdf70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf71: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fdf74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fdf76: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fdf79: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005fdf7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fdf7eu); call_ind(t); }
    /* 005fdf7e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf80: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdf83: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x5fdf88u); f_005fb630();
    /* 005fdf88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fdf8a: je 0x5fdfde */ if (fZ) goto L_005fdfde;
L_005fdf8c:; BB(0x005fdf8c);
    /* 005fdf8c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdf91: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x5fdf96u); f_005fb630();
    /* 005fdf96: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fdf99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdf9d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fdfa0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fdfa2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fdfa5: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005fdfa8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fdfaau); call_ind(t); }
    /* 005fdfaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdfad: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x5fdfb2u); f_005f8550();
    /* 005fdfb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfb3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdfb8: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x5fdfbdu); f_005fb630();
    /* 005fdfbd: mov ecx, eax */ r_ecx = r_eax;
    /* 005fdfbf: call 0x5f5530 */ r_esp -= 4; W32(r_esp, 0x5fdfc4u); f_005f5530();
    /* 005fdfc4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdfc7: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x5fdfccu); f_005f8570();
    /* 005fdfcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfcd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fdfcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fdfd2: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x5fdfd7u); f_005fb630();
    /* 005fdfd7: mov ecx, eax */ r_ecx = r_eax;
    /* 005fdfd9: call 0x5f5570 */ r_esp -= 4; W32(r_esp, 0x5fdfdeu); f_005f5570();
L_005fdfde:; BB(0x005fdfde);
    /* 005fdfde: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fdfdf: mov esp, ebp */ r_esp = r_ebp;
    /* 005fdfe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fdfe2: ret 0xc */ FN_RET(0x005fddf0); r_esp += 16; return;
}

void f_005fdff0(void) /* sub_5FDFF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fdff0);
    /* 005fdff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fdff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fdff3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fdff5: push 0x6aa6cc */ { u32 v = 0x6aa6ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005fdffa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fe000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe001: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe004: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fe009: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe00b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005fe00e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe00f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fe012: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fe018: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005fe01b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fe01e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe01f: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005fe022: call 0x5ff060 */ r_esp -= 4; W32(r_esp, 0x5fe027u); f_005ff060();
    /* 005fe027: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005fe02a: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe02e: jne 0x5fe035 */ if (!fZ) goto L_005fe035;
L_005fe030:; BB(0x005fe030);
    /* 005fe030: jmp 0x5fe1a1 */ goto L_005fe1a1;
L_005fe035:; BB(0x005fe035);
    /* 005fe035: lea ecx, [ebp - 0x54] */ r_ecx = (u32)(r_ebp+0xffffffacu);
    /* 005fe038: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe039: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fe03c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe03d: mov eax, dword ptr [0x15e55e4] */ r_eax = R32((u32)(0x15e55e4u));
    /* 005fe042: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe044: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005fe04a: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005fe04d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe04fu); call_ind(t); }
    /* 005fe04f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005fe052: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe053: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe056: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5fe05bu); f_005f53e0();
    /* 005fe05b: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005fe05e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe05f: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005fe064: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005fe066: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe06c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005fe06f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe071u); call_ind(t); }
    /* 005fe071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe072: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe075: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fe077: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe07a: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005fe080: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe082u); call_ind(t); }
    /* 005fe082: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe085: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005fe088: mov dword ptr [ecx + 0x1ec], edx */ W32((u32)(r_ecx+0x1ecu), r_edx);
    /* 005fe08e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe091: cmp dword ptr [eax + 0x1f4], 0 */ {  u32 a = R32((u32)(r_eax+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe098: je 0x5fe0d9 */ if (fZ) goto L_005fe0d9;
L_005fe09a:; BB(0x005fe09a);
    /* 005fe09a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe09d: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 005fe0a3: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 005fe0a6: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005fe0a9: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005fe0ac: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe0b0: je 0x5fe0c5 */ if (fZ) goto L_005fe0c5;
L_005fe0b2:; BB(0x005fe0b2);
    /* 005fe0b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0b4: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005fe0b7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fe0b9: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005fe0bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe0be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fe0c0u); call_ind(t); }
    /* 005fe0c0: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005fe0c3: jmp 0x5fe0cc */ goto L_005fe0cc;
L_005fe0c5:; BB(0x005fe0c5);
    /* 005fe0c5: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_005fe0cc:; BB(0x005fe0cc);
    /* 005fe0cc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe0cf: mov dword ptr [ecx + 0x1f4], 0 */ W32((u32)(r_ecx+0x1f4u), 0x0u);
L_005fe0d9:; BB(0x005fe0d9);
    /* 005fe0d9: cmp dword ptr [ebp - 0x4c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe0dd: je 0x5fe166 */ if (fZ) goto L_005fe166;
L_005fe0e3:; BB(0x005fe0e3);
    /* 005fe0e3: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0e8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fe0edu); f_00686d82();
    /* 005fe0ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe0f0: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005fe0f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fe0fa: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe0fe: je 0x5fe10d */ if (fZ) goto L_005fe10d;
L_005fe100:; BB(0x005fe100);
    /* 005fe100: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005fe103: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5fe108u); f_005eaaf0();
    /* 005fe108: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005fe10b: jmp 0x5fe114 */ goto L_005fe114;
L_005fe10d:; BB(0x005fe10d);
    /* 005fe10d: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005fe114:; BB(0x005fe114);
    /* 005fe114: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005fe117: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005fe11a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fe121: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe124: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005fe127: mov dword ptr [eax + 0x1f4], ecx */ W32((u32)(r_eax+0x1f4u), r_ecx);
    /* 005fe12d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe130: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 005fe136: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005fe139: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005fe13c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe13e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe140: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe144: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005fe14a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fe14c: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005fe152: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005fe155: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fe157u); call_ind(t); }
    /* 005fe157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe158: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe15b: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 005fe161: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5fe166u); f_005eae80();
L_005fe166:; BB(0x005fe166);
    /* 005fe166: movsx ecx, byte ptr [ebp - 0x48] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffb8u));
    /* 005fe16a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe16c: je 0x5fe18c */ if (fZ) goto L_005fe18c;
L_005fe16e:; BB(0x005fe16e);
    /* 005fe16e: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 005fe171: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe172: mov al, byte ptr [ebp - 0x48] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffb8u))) & 0xffu);
    /* 005fe175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe176: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005fe179: call 0x5fe770 */ r_esp -= 4; W32(r_esp, 0x5fe17eu); f_005fe770();
    /* 005fe17e: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 005fe181: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe182: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe185: call 0x5fd730 */ r_esp -= 4; W32(r_esp, 0x5fe18au); f_005fd730();
    /* 005fe18a: jmp 0x5fe199 */ goto L_005fe199;
L_005fe18c:; BB(0x005fe18c);
    /* 005fe18c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe191: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005fe194: call 0x5fd730 */ r_esp -= 4; W32(r_esp, 0x5fe199u); f_005fd730();
L_005fe199:; BB(0x005fe199);
    /* 005fe199: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005fe19c: call 0x5fdd10 */ r_esp -= 4; W32(r_esp, 0x5fe1a1u); f_005fdd10();
L_005fe1a1:; BB(0x005fe1a1);
    /* 005fe1a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe1a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fe1ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fe1ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fe1af: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe1b1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5fe1b6u); f_00686d72();
    /* 005fe1b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe1b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe1b9: ret 8 */ FN_RET(0x005fdff0); r_esp += 12; return;
}

