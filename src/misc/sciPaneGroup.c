#include "protos.h"

void f_005fa3c0(void) /* sciPaneGroup::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fa3c0);
    /* 005fa3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fa3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fa3c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fa3c5: push 0x6aa39a */ { u32 v = 0x6aa39au; r_esp -= 4; W32(r_esp, v); }
    /* 005fa3ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa3d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa3d1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa3d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fa3d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fa3db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa3dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fa3df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fa3e5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fa3e8: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa3ec: jne 0x5fa441 */ if (!fZ) goto L_005fa441;
L_005fa3ee:; BB(0x005fa3ee);
    /* 005fa3ee: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005fa3f5: jmp 0x5fa400 */ goto L_005fa400;
L_005fa3f7:; BB(0x005fa3f7);
    /* 005fa3f7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa3fa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fa3fd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005fa400:; BB(0x005fa400);
    /* 005fa400: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa403: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa406: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5fa40bu); f_0060c9a0();
    /* 005fa40b: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fa40e: jge 0x5fa441 */ if ((fS==fO)) goto L_005fa441;
L_005fa410:; BB(0x005fa410);
    /* 005fa410: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa413: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa414: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa417: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa41a: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fa41fu); f_0060ca40();
    /* 005fa41f: mov ecx, eax */ r_ecx = r_eax;
    /* 005fa421: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x5fa426u); f_005f5400();
    /* 005fa426: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa429: jne 0x5fa43f */ if (!fZ) goto L_005fa43f;
L_005fa42b:; BB(0x005fa42b);
    /* 005fa42b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fa42e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa42f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa432: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa435: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5fa43au); f_0060ca40();
    /* 005fa43a: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005fa43d: jmp 0x5fa441 */ goto L_005fa441;
L_005fa43f:; BB(0x005fa43f);
    /* 005fa43f: jmp 0x5fa3f7 */ goto L_005fa3f7;
L_005fa441:; BB(0x005fa441);
    /* 005fa441: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fa444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa445: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa448: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa44b: call 0x60c9e0 */ r_esp -= 4; W32(r_esp, 0x5fa450u); f_0060c9e0();
    /* 005fa450: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005fa453: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa455: jne 0x5fa4f0 */ if (!fZ) goto L_005fa4f0;
L_005fa45b:; BB(0x005fa45b);
    /* 005fa45b: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa45f: jne 0x5fa4ae */ if (!fZ) goto L_005fa4ae;
L_005fa461:; BB(0x005fa461);
    /* 005fa461: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa463: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa468u); f_00686d82();
    /* 005fa468: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa46b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fa46e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fa475: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa479: je 0x5fa494 */ if (fZ) goto L_005fa494;
L_005fa47b:; BB(0x005fa47b);
    /* 005fa47b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa47e: call 0x5ff8b0 */ r_esp -= 4; W32(r_esp, 0x5fa483u); f_005ff8b0();
    /* 005fa483: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa486: mov dword ptr [edx], 0x6d6d54 */ W32((u32)(r_edx), 0x6d6d54u);
    /* 005fa48c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fa48f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fa492: jmp 0x5fa49b */ goto L_005fa49b;
L_005fa494:; BB(0x005fa494);
    /* 005fa494: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005fa49b:; BB(0x005fa49b);
    /* 005fa49b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fa49e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fa4a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa4a8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa4ab: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_005fa4ae:; BB(0x005fa4ae);
    /* 005fa4ae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fa4b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa4b2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa4b5: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fa4b8: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5fa4bdu); f_0060c840();
    /* 005fa4bd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa4c0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fa4c3: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005fa4c6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005fa4c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa4ca: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa4cd: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x5fa4d2u); f_005f53e0();
    /* 005fa4d2: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa4d5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fa4d7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa4da: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005fa4dd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fa4dfu); call_ind(t); }
    /* 005fa4df: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005fa4e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa4e3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005fa4e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005fa4e8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa4eb: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 005fa4ee: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5fa4f0u); call_ind(t); }
L_005fa4f0:; BB(0x005fa4f0);
    /* 005fa4f0: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa4f4: jne 0x5fa53a */ if (!fZ) goto L_005fa53a;
L_005fa4f6:; BB(0x005fa4f6);
    /* 005fa4f6: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 005fa4fb: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5fa500u); f_00686d82();
    /* 005fa500: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fa503: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fa506: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fa50d: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa511: je 0x5fa520 */ if (fZ) goto L_005fa520;
L_005fa513:; BB(0x005fa513);
    /* 005fa513: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fa516: call 0x625bf0 */ r_esp -= 4; W32(r_esp, 0x5fa51bu); f_00625bf0();
    /* 005fa51b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005fa51e: jmp 0x5fa527 */ goto L_005fa527;
L_005fa520:; BB(0x005fa520);
    /* 005fa520: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005fa527:; BB(0x005fa527);
    /* 005fa527: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005fa52a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fa52d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa534: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fa537: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_005fa53a:; BB(0x005fa53a);
    /* 005fa53a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fa53d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa53e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fa541: call 0x5ff8f0 */ r_esp -= 4; W32(r_esp, 0x5fa546u); f_005ff8f0();
    /* 005fa546: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005fa549: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa54a: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005fa54d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa54e: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005fa551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa552: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005fa555: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa556: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005fa559: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa55a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa55d: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5fa562u); f_005eae80();
    /* 005fa562: cmp dword ptr [ebp + 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fa566: je 0x5fa584 */ if (fZ) goto L_005fa584;
L_005fa568:; BB(0x005fa568);
    /* 005fa568: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 005fa56b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa56c: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 005fa56f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa570: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 005fa573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa574: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 005fa577: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fa578: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005fa57b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa57c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa57f: call 0x5ff4c0 */ r_esp -= 4; W32(r_esp, 0x5fa584u); f_005ff4c0();
L_005fa584:; BB(0x005fa584);
    /* 005fa584: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa587: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005fa589: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005fa58c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005fa58f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fa591u); call_ind(t); }
    /* 005fa591: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fa594: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa597: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa59e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa59f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa5a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa5a2: ret 0x34 */ FN_RET(0x005fa3c0); r_esp += 56; return;
}

void f_006068c0(void) /* sciPaneGroup::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006068c0);
    /* 006068c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006068c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006068c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006068c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006068c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006068cc: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x6068d1u); f_005f5440();
    /* 006068d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006068d8: jmp 0x6068e3 */ goto L_006068e3;
L_006068da:; BB(0x006068da);
    /* 006068da: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006068dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006068e0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006068e3:; BB(0x006068e3);
    /* 006068e3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006068e6: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x6068ebu); f_006063e0();
    /* 006068eb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006068ee: jge 0x60690e */ if ((fS==fO)) goto L_0060690e;
L_006068f0:; BB(0x006068f0);
    /* 006068f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006068f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006068f4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006068f7: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x6068fcu); f_00606350();
    /* 006068fc: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006068ff: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606902: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00606904: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00606907: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0060690a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60690cu); call_ind(t); }
    /* 0060690c: jmp 0x6068da */ goto L_006068da;
L_0060690e:; BB(0x0060690e);
    /* 0060690e: mov esp, ebp */ r_esp = r_ebp;
    /* 00606910: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606911: ret  */ FN_RET(0x006068c0); r_esp += 4; return;
}

void f_00606920(void) /* sciPaneGroup::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00606920);
    /* 00606920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00606921: mov ebp, esp */ r_ebp = r_esp;
    /* 00606923: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00606926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00606929: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00606930: jmp 0x60693b */ goto L_0060693b;
L_00606932:; BB(0x00606932);
    /* 00606932: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00606935: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00606938: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0060693b:; BB(0x0060693b);
    /* 0060693b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060693e: call 0x6063e0 */ r_esp -= 4; W32(r_esp, 0x606943u); f_006063e0();
    /* 00606943: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00606946: jge 0x606966 */ if ((fS==fO)) goto L_00606966;
L_00606948:; BB(0x00606948);
    /* 00606948: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060694b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060694c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0060694f: call 0x606350 */ r_esp -= 4; W32(r_esp, 0x606954u); f_00606350();
    /* 00606954: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00606957: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060695a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060695c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060695f: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00606962: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x606964u); call_ind(t); }
    /* 00606964: jmp 0x606932 */ goto L_00606932;
L_00606966:; BB(0x00606966);
    /* 00606966: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00606969: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x60696eu); f_005f5420();
    /* 0060696e: mov esp, ebp */ r_esp = r_ebp;
    /* 00606970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00606971: ret  */ FN_RET(0x00606920); r_esp += 4; return;
}

