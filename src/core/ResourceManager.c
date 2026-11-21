#include "protos.h"

void f_006033f0(void) /* ResourceManager::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006033f0);
    /* 006033f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006033f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006033f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006033f5: push 0x6aa95e */ { u32 v = 0x6aa95eu; r_esp -= 4; W32(r_esp, v); }
    /* 006033fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00603400: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603401: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603404: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00603409: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060340b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060340c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060340f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00603415: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00603418: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060341b: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x603420u); f_0062aea0();
    /* 00603420: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603427: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060342a: mov dword ptr [eax], 0x6d780c */ W32((u32)(r_eax), 0x6d780cu);
    /* 00603430: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603433: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603436: call 0x62a870 */ r_esp -= 4; W32(r_esp, 0x60343bu); f_0062a870();
    /* 0060343b: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060343f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603442: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603445: call 0x62a870 */ r_esp -= 4; W32(r_esp, 0x60344au); f_0062a870();
    /* 0060344a: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0060344e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603452: jne 0x603468 */ if (!fZ) goto L_00603468;
L_00603454:; BB(0x00603454);
    /* 00603454: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603457: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0060345e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603461: call 0x603670 */ r_esp -= 4; W32(r_esp, 0x603466u); f_00603670();
    /* 00603466: jmp 0x6034ab */ goto L_006034ab;
L_00603468:; BB(0x00603468);
    /* 00603468: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060346b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060346c: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x603471u); f_00686ecc();
    /* 00603471: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603474: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603477: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603478: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60347du); f_00686d82();
    /* 0060347d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603480: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00603483: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00603486: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00603489: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 0060348c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0060348f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603490: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00603493: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00603496: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603497: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x60349cu); f_00686d8e();
    /* 0060349c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060349f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006034a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006034a3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006034a6: call 0x604500 */ r_esp -= 4; W32(r_esp, 0x6034abu); f_00604500();
L_006034ab:; BB(0x006034ab);
    /* 006034ab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006034ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006034af: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 006034b5: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 006034b8: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x6034bdu); f_0062aa20();
    /* 006034bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006034c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006034c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006034ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006034d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006034d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006034d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006034d5: ret 4 */ FN_RET(0x006033f0); r_esp += 8; return;
}

void f_006034e0(void) /* ResourceManager::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006034e0);
    /* 006034e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006034e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006034e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006034e5: push 0x6aa997 */ { u32 v = 0x6aa997u; r_esp -= 4; W32(r_esp, v); }
    /* 006034ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006034f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006034f1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006034f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006034f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006034fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006034fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006034ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00603505: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00603508: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0060350b: mov dword ptr [eax], 0x6d780c */ W32((u32)(r_eax), 0x6d780cu);
    /* 00603511: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00603518: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060351b: cmp dword ptr [ecx + 0x48], 0 */ {  u32 a = R32((u32)(r_ecx+0x48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060351f: je 0x603536 */ if (fZ) goto L_00603536;
L_00603521:; BB(0x00603521);
    /* 00603521: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00603524: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00603527: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060352a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060352d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060352e: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x603533u); f_00686cae();
    /* 00603533: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00603536:; BB(0x00603536);
    /* 00603536: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00603539: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060353a: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0060353f: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00603542: call 0x62ab60 */ r_esp -= 4; W32(r_esp, 0x603547u); f_0062ab60();
    /* 00603547: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060354a: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060354d: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x603552u); f_0062ac30();
    /* 00603552: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00603555:; BB(0x00603555);
    /* 00603555: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603559: je 0x6035d5 */ if (fZ) goto L_006035d5;
L_0060355b:; BB(0x0060355b);
    /* 0060355b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060355e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060355f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00603562: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603565: call 0x62ab60 */ r_esp -= 4; W32(r_esp, 0x60356au); f_0062ab60();
    /* 0060356a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060356d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00603570: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00603573: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00603576: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00603579: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060357d: je 0x603592 */ if (fZ) goto L_00603592;
L_0060357f:; BB(0x0060357f);
    /* 0060357f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00603581: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00603584: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00603586: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00603589: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0060358b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60358du); call_ind(t); }
    /* 0060358d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00603590: jmp 0x603599 */ goto L_00603599;
L_00603592:; BB(0x00603592);
    /* 00603592: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00603599:; BB(0x00603599);
    /* 00603599: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0060359c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0060359f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006035a2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006035a5: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006035a9: je 0x6035be */ if (fZ) goto L_006035be;
L_006035ab:; BB(0x006035ab);
    /* 006035ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006035ad: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006035b0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006035b2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006035b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006035b7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6035b9u); call_ind(t); }
    /* 006035b9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006035bc: jmp 0x6035c5 */ goto L_006035c5;
L_006035be:; BB(0x006035be);
    /* 006035be: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006035c5:; BB(0x006035c5);
    /* 006035c5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006035c8: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006035cb: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x6035d0u); f_0062ac30();
    /* 006035d0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006035d3: jmp 0x603555 */ goto L_00603555;
L_006035d5:; BB(0x006035d5);
    /* 006035d5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006035d8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006035db: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x6035e0u); f_0062ac30();
    /* 006035e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006035e3:; BB(0x006035e3);
    /* 006035e3: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006035e7: je 0x603634 */ if (fZ) goto L_00603634;
L_006035e9:; BB(0x006035e9);
    /* 006035e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006035ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006035ed: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006035f0: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006035f3: call 0x62ab60 */ r_esp -= 4; W32(r_esp, 0x6035f8u); f_0062ab60();
    /* 006035f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006035fb: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006035fe: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00603601: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00603604: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603608: je 0x60361d */ if (fZ) goto L_0060361d;
L_0060360a:; BB(0x0060360a);
    /* 0060360a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060360c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060360f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603611: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00603614: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00603616: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x603618u); call_ind(t); }
    /* 00603618: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0060361b: jmp 0x603624 */ goto L_00603624;
L_0060361d:; BB(0x0060361d);
    /* 0060361d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00603624:; BB(0x00603624);
    /* 00603624: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00603627: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060362a: call 0x62ac30 */ r_esp -= 4; W32(r_esp, 0x60362fu); f_0062ac30();
    /* 0060362f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00603632: jmp 0x6035e3 */ goto L_006035e3;
L_00603634:; BB(0x00603634);
    /* 00603634: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00603638: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060363b: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060363e: call 0x62a900 */ r_esp -= 4; W32(r_esp, 0x603643u); f_0062a900();
    /* 00603643: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603647: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060364a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060364d: call 0x62a900 */ r_esp -= 4; W32(r_esp, 0x603652u); f_0062a900();
    /* 00603652: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603659: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0060365c: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x603661u); f_0062aef0();
    /* 00603661: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603664: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060366b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060366c: mov esp, ebp */ r_esp = r_ebp;
    /* 0060366e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060366f: ret  */ FN_RET(0x006034e0); r_esp += 4; return;
}

void f_00603670(void) /* ResourceManager::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603670);
    /* 00603670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603671: mov ebp, esp */ r_ebp = r_esp;
    /* 00603673: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00603675: push 0x6aa9ce */ { u32 v = 0x6aa9ceu; r_esp -= 4; W32(r_esp, v); }
    /* 0060367a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00603680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603681: sub esp, 0x54c */ {  u32 a = r_esp; u32 b = 0x54cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603687: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060368c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060368e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00603691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603692: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00603695: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060369b: mov dword ptr [ebp - 0x550], ecx */ W32((u32)(r_ebp+0xfffffab0u), r_ecx);
    /* 006036a1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006036a8: jmp 0x6036b3 */ goto L_006036b3;
L_006036aa:; BB(0x006036aa);
    /* 006036aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006036ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006036b0: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006036b3:; BB(0x006036b3);
    /* 006036b3: cmp dword ptr [ebp - 0x10], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006036ba: jge 0x6038e4 */ if ((fS==fO)) goto L_006038e4;
L_006036c0:; BB(0x006036c0);
    /* 006036c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006036c3: cmp dword ptr [ecx*4 + 0x796720], 0 */ {  u32 a = R32((u32)(r_ecx*4+0x796720u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006036cb: je 0x6036e9 */ if (fZ) goto L_006036e9;
L_006036cd:; BB(0x006036cd);
    /* 006036cd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006036d0: mov eax, dword ptr [edx*4 + 0x796720] */ r_eax = R32((u32)(r_edx*4+0x796720u));
    /* 006036d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006036d8: lea ecx, [ebp - 0x12c] */ r_ecx = (u32)(r_ebp+0xfffffed4u);
    /* 006036de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006036df: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6036e4u); f_00686d8e();
    /* 006036e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006036e7: jmp 0x6036ee */ goto L_006036ee;
L_006036e9:; BB(0x006036e9);
    /* 006036e9: jmp 0x6038e4 */ goto L_006038e4;
L_006036ee:; BB(0x006036ee);
    /* 006036ee: lea edx, [ebp - 0x12c] */ r_edx = (u32)(r_ebp+0xfffffed4u);
    /* 006036f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006036f5: call 0x5ea540 */ r_esp -= 4; W32(r_esp, 0x6036fau); f_005ea540();
    /* 006036fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006036fd: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00603704:; BB(0x00603704);
    /* 00603704: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00603707: cmp dword ptr [eax*4 + 0x7960e0], 0 */ {  u32 a = R32((u32)(r_eax*4+0x7960e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060370f: je 0x6038df */ if (fZ) goto L_006038df;
L_00603715:; BB(0x00603715);
    /* 00603715: lea ecx, [ebp - 0x12c] */ r_ecx = (u32)(r_ebp+0xfffffed4u);
    /* 0060371b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060371c: lea edx, [ebp - 0x2bc] */ r_edx = (u32)(r_ebp+0xfffffd44u);
    /* 00603722: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603723: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x603728u); f_00686d8e();
    /* 00603728: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060372b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060372e: mov ecx, dword ptr [eax*4 + 0x7960e0] */ r_ecx = R32((u32)(r_eax*4+0x7960e0u));
    /* 00603735: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603736: lea edx, [ebp - 0x2bc] */ r_edx = (u32)(r_ebp+0xfffffd44u);
    /* 0060373c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060373d: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x603742u); f_00686ec6();
    /* 00603742: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603745: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0060374a: lea eax, [ebp - 0x2bc] */ r_eax = (u32)(r_ebp+0xfffffd44u);
    /* 00603750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603751: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x603756u); f_005ea9c0();
    /* 00603756: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603759: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060375c: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603760: je 0x6038d1 */ if (fZ) goto L_006038d1;
L_00603766:; BB(0x00603766);
    /* 00603766: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603769: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060376a: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x603770u); call_ind(t); }
    /* 00603770: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603773: mov ecx, dword ptr [ebp - 0x550] */ r_ecx = R32((u32)(r_ebp+0xfffffab0u));
    /* 00603779: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060377c: call 0x62ae50 */ r_esp -= 4; W32(r_esp, 0x603781u); f_0062ae50();
    /* 00603781: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00603784: mov dword ptr [ebp - 0x2c0], eax */ W32((u32)(r_ebp+0xfffffd40u), r_eax);
    /* 0060378a: jmp 0x60379b */ goto L_0060379b;
L_0060378c:; BB(0x0060378c);
    /* 0060378c: mov edx, dword ptr [ebp - 0x2c0] */ r_edx = R32((u32)(r_ebp+0xfffffd40u));
    /* 00603792: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00603795: mov dword ptr [ebp - 0x2c0], edx */ W32((u32)(r_ebp+0xfffffd40u), r_edx);
L_0060379b:; BB(0x0060379b);
    /* 0060379b: cmp dword ptr [ebp - 0x2c0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006037a2: jl 0x6037d4 */ if ((fS!=fO)) goto L_006037d4;
L_006037a4:; BB(0x006037a4);
    /* 006037a4: lea eax, [ebp - 0x2bc] */ r_eax = (u32)(r_ebp+0xfffffd44u);
    /* 006037aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006037ab: mov ecx, dword ptr [ebp - 0x2c0] */ r_ecx = R32((u32)(r_ebp+0xfffffd40u));
    /* 006037b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006037b2: mov ecx, dword ptr [ebp - 0x550] */ r_ecx = R32((u32)(r_ebp+0xfffffab0u));
    /* 006037b8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006037bb: call 0x62ade0 */ r_esp -= 4; W32(r_esp, 0x6037c0u); f_0062ade0();
    /* 006037c0: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006037c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006037c4: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x6037c9u); f_00686ec0();
    /* 006037c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006037cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006037ce: jne 0x6037d2 */ if (!fZ) goto L_006037d2;
L_006037d0:; BB(0x006037d0);
    /* 006037d0: jmp 0x6037d4 */ goto L_006037d4;
L_006037d2:; BB(0x006037d2);
    /* 006037d2: jmp 0x60378c */ goto L_0060378c;
L_006037d4:; BB(0x006037d4);
    /* 006037d4: cmp dword ptr [ebp - 0x2c0], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffd40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006037db: jl 0x6037eb */ if ((fS!=fO)) goto L_006037eb;
L_006037dd:; BB(0x006037dd);
    /* 006037dd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006037e0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006037e3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006037e6: jmp 0x603704 */ goto L_00603704;
L_006037eb:; BB(0x006037eb);
    /* 006037eb: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 006037f0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6037f5u); f_00686d82();
    /* 006037f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006037f8: mov dword ptr [ebp - 0x544], eax */ W32((u32)(r_ebp+0xfffffabcu), r_eax);
    /* 006037fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00603805: cmp dword ptr [ebp - 0x544], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffabcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060380c: je 0x603821 */ if (fZ) goto L_00603821;
L_0060380e:; BB(0x0060380e);
    /* 0060380e: mov ecx, dword ptr [ebp - 0x544] */ r_ecx = R32((u32)(r_ebp+0xfffffabcu));
    /* 00603814: call 0x62af50 */ r_esp -= 4; W32(r_esp, 0x603819u); f_0062af50();
    /* 00603819: mov dword ptr [ebp - 0x554], eax */ W32((u32)(r_ebp+0xfffffaacu), r_eax);
    /* 0060381f: jmp 0x60382b */ goto L_0060382b;
L_00603821:; BB(0x00603821);
    /* 00603821: mov dword ptr [ebp - 0x554], 0 */ W32((u32)(r_ebp+0xfffffaacu), 0x0u);
L_0060382b:; BB(0x0060382b);
    /* 0060382b: mov eax, dword ptr [ebp - 0x554] */ r_eax = R32((u32)(r_ebp+0xfffffaacu));
    /* 00603831: mov dword ptr [ebp - 0x540], eax */ W32((u32)(r_ebp+0xfffffac0u), r_eax);
    /* 00603837: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060383e: mov ecx, dword ptr [ebp - 0x540] */ r_ecx = R32((u32)(r_ebp+0xfffffac0u));
    /* 00603844: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00603847: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 0060384c: lea edx, [ebp - 0x2bc] */ r_edx = (u32)(r_ebp+0xfffffd44u);
    /* 00603852: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603853: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603856: call 0x62b0a0 */ r_esp -= 4; W32(r_esp, 0x60385bu); f_0062b0a0();
    /* 0060385b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060385e: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00603861: je 0x603889 */ if (fZ) goto L_00603889;
L_00603863:; BB(0x00603863);
    /* 00603863: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603866: movsx edx, byte ptr [ecx + 0x19] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x19u));
    /* 0060386a: movsx eax, byte ptr [0x795f6c] */ r_eax = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 00603871: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603873: jne 0x603889 */ if (!fZ) goto L_00603889;
L_00603875:; BB(0x00603875);
    /* 00603875: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603878: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603879: mov ecx, dword ptr [ebp - 0x550] */ r_ecx = R32((u32)(r_ebp+0xfffffab0u));
    /* 0060387f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603882: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x603887u); f_0062aa20();
    /* 00603887: jmp 0x60389b */ goto L_0060389b;
L_00603889:; BB(0x00603889);
    /* 00603889: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060388c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060388d: mov ecx, dword ptr [ebp - 0x550] */ r_ecx = R32((u32)(r_ebp+0xfffffab0u));
    /* 00603893: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603896: call 0x62aa70 */ r_esp -= 4; W32(r_esp, 0x60389bu); f_0062aa70();
L_0060389b:; BB(0x0060389b);
    /* 0060389b: movzx eax, byte ptr [0x795fb4] */ r_eax = (u32)R8((u32)(0x795fb4u));
    /* 006038a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006038a4: je 0x6038d1 */ if (fZ) goto L_006038d1;
L_006038a6:; BB(0x006038a6);
    /* 006038a6: lea ecx, [ebp - 0x2bc] */ r_ecx = (u32)(r_ebp+0xfffffd44u);
    /* 006038ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006038ad: push 0x6d7818 */ { u32 v = 0x6d7818u; r_esp -= 4; W32(r_esp, v); }
    /* 006038b2: lea edx, [ebp - 0x3fc] */ r_edx = (u32)(r_ebp+0xfffffc04u);
    /* 006038b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006038b9: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6038bfu); call_ind(t); }
    /* 006038bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006038c2: lea eax, [ebp - 0x3fc] */ r_eax = (u32)(r_ebp+0xfffffc04u);
    /* 006038c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006038c9: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x6038ceu); f_0062fde0();
    /* 006038ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006038d1:; BB(0x006038d1);
    /* 006038d1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006038d4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006038d7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006038da: jmp 0x603704 */ goto L_00603704;
L_006038df:; BB(0x006038df);
    /* 006038df: jmp 0x6036aa */ goto L_006036aa;
L_006038e4:; BB(0x006038e4);
    /* 006038e4: movsx edx, byte ptr [0x795f6c] */ r_edx = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 006038eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006038ed: je 0x603ab8 */ if (fZ) goto L_00603ab8;
L_006038f3:; BB(0x006038f3);
    /* 006038f3: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_006038fa:; BB(0x006038fa);
    /* 006038fa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006038fd: cmp dword ptr [eax*4 + 0x7960e0], 0 */ {  u32 a = R32((u32)(r_eax*4+0x7960e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603905: je 0x603ab8 */ if (fZ) goto L_00603ab8;
L_0060390b:; BB(0x0060390b);
    /* 0060390b: mov cl, byte ptr [0x795f6c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x795f6cu))) & 0xffu);
    /* 00603911: mov byte ptr [ebp - 0x2bc], cl */ W8((u32)(r_ebp+0xfffffd44u), (u8)r_ecx);
    /* 00603917: mov byte ptr [ebp - 0x2bb], 0 */ W8((u32)(r_ebp+0xfffffd45u), 0x0u);
    /* 0060391e: push 0x6d7814 */ { u32 v = 0x6d7814u; r_esp -= 4; W32(r_esp, v); }
    /* 00603923: lea edx, [ebp - 0x2bc] */ r_edx = (u32)(r_ebp+0xfffffd44u);
    /* 00603929: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060392a: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x60392fu); f_00686ec6();
    /* 0060392f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603932: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00603935: mov ecx, dword ptr [eax*4 + 0x7960e0] */ r_ecx = R32((u32)(r_eax*4+0x7960e0u));
    /* 0060393c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060393d: lea edx, [ebp - 0x2bc] */ r_edx = (u32)(r_ebp+0xfffffd44u);
    /* 00603943: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603944: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x603949u); f_00686ec6();
    /* 00603949: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060394c: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00603951: lea eax, [ebp - 0x2bc] */ r_eax = (u32)(r_ebp+0xfffffd44u);
    /* 00603957: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603958: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x60395du); f_005ea9c0();
    /* 0060395d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603960: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00603963: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603967: je 0x603aaa */ if (fZ) goto L_00603aaa;
L_0060396d:; BB(0x0060396d);
    /* 0060396d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603970: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603971: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x603977u); call_ind(t); }
    /* 00603977: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060397a: mov ecx, dword ptr [ebp - 0x550] */ r_ecx = R32((u32)(r_ebp+0xfffffab0u));
    /* 00603980: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603983: call 0x62ae50 */ r_esp -= 4; W32(r_esp, 0x603988u); f_0062ae50();
    /* 00603988: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060398b: mov dword ptr [ebp - 0x400], eax */ W32((u32)(r_ebp+0xfffffc00u), r_eax);
    /* 00603991: jmp 0x6039a2 */ goto L_006039a2;
L_00603993:; BB(0x00603993);
    /* 00603993: mov edx, dword ptr [ebp - 0x400] */ r_edx = R32((u32)(r_ebp+0xfffffc00u));
    /* 00603999: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0060399c: mov dword ptr [ebp - 0x400], edx */ W32((u32)(r_ebp+0xfffffc00u), r_edx);
L_006039a2:; BB(0x006039a2);
    /* 006039a2: cmp dword ptr [ebp - 0x400], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffc00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006039a9: jl 0x6039db */ if ((fS!=fO)) goto L_006039db;
L_006039ab:; BB(0x006039ab);
    /* 006039ab: lea eax, [ebp - 0x2bc] */ r_eax = (u32)(r_ebp+0xfffffd44u);
    /* 006039b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006039b2: mov ecx, dword ptr [ebp - 0x400] */ r_ecx = R32((u32)(r_ebp+0xfffffc00u));
    /* 006039b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006039b9: mov ecx, dword ptr [ebp - 0x550] */ r_ecx = R32((u32)(r_ebp+0xfffffab0u));
    /* 006039bf: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006039c2: call 0x62ade0 */ r_esp -= 4; W32(r_esp, 0x6039c7u); f_0062ade0();
    /* 006039c7: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006039ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006039cb: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x6039d0u); f_00686ec0();
    /* 006039d0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006039d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006039d5: jne 0x6039d9 */ if (!fZ) goto L_006039d9;
L_006039d7:; BB(0x006039d7);
    /* 006039d7: jmp 0x6039db */ goto L_006039db;
L_006039d9:; BB(0x006039d9);
    /* 006039d9: jmp 0x603993 */ goto L_00603993;
L_006039db:; BB(0x006039db);
    /* 006039db: cmp dword ptr [ebp - 0x400], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffc00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006039e2: jl 0x6039f2 */ if ((fS!=fO)) goto L_006039f2;
L_006039e4:; BB(0x006039e4);
    /* 006039e4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006039e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006039ea: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006039ed: jmp 0x6038fa */ goto L_006038fa;
L_006039f2:; BB(0x006039f2);
    /* 006039f2: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 006039f7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6039fcu); f_00686d82();
    /* 006039fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006039ff: mov dword ptr [ebp - 0x54c], eax */ W32((u32)(r_ebp+0xfffffab4u), r_eax);
    /* 00603a05: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00603a0c: cmp dword ptr [ebp - 0x54c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffab4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603a13: je 0x603a28 */ if (fZ) goto L_00603a28;
L_00603a15:; BB(0x00603a15);
    /* 00603a15: mov ecx, dword ptr [ebp - 0x54c] */ r_ecx = R32((u32)(r_ebp+0xfffffab4u));
    /* 00603a1b: call 0x62af50 */ r_esp -= 4; W32(r_esp, 0x603a20u); f_0062af50();
    /* 00603a20: mov dword ptr [ebp - 0x558], eax */ W32((u32)(r_ebp+0xfffffaa8u), r_eax);
    /* 00603a26: jmp 0x603a32 */ goto L_00603a32;
L_00603a28:; BB(0x00603a28);
    /* 00603a28: mov dword ptr [ebp - 0x558], 0 */ W32((u32)(r_ebp+0xfffffaa8u), 0x0u);
L_00603a32:; BB(0x00603a32);
    /* 00603a32: mov eax, dword ptr [ebp - 0x558] */ r_eax = R32((u32)(r_ebp+0xfffffaa8u));
    /* 00603a38: mov dword ptr [ebp - 0x548], eax */ W32((u32)(r_ebp+0xfffffab8u), r_eax);
    /* 00603a3e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603a45: mov ecx, dword ptr [ebp - 0x548] */ r_ecx = R32((u32)(r_ebp+0xfffffab8u));
    /* 00603a4b: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00603a4e: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 00603a53: lea edx, [ebp - 0x2bc] */ r_edx = (u32)(r_ebp+0xfffffd44u);
    /* 00603a59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603a5a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603a5d: call 0x62b0a0 */ r_esp -= 4; W32(r_esp, 0x603a62u); f_0062b0a0();
    /* 00603a62: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603a65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603a66: mov ecx, dword ptr [ebp - 0x550] */ r_ecx = R32((u32)(r_ebp+0xfffffab0u));
    /* 00603a6c: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603a6f: call 0x62aa20 */ r_esp -= 4; W32(r_esp, 0x603a74u); f_0062aa20();
    /* 00603a74: movzx ecx, byte ptr [0x795fb4] */ r_ecx = (u32)R8((u32)(0x795fb4u));
    /* 00603a7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603a7d: je 0x603aaa */ if (fZ) goto L_00603aaa;
L_00603a7f:; BB(0x00603a7f);
    /* 00603a7f: lea edx, [ebp - 0x2bc] */ r_edx = (u32)(r_ebp+0xfffffd44u);
    /* 00603a85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603a86: push 0x6d7818 */ { u32 v = 0x6d7818u; r_esp -= 4; W32(r_esp, v); }
    /* 00603a8b: lea eax, [ebp - 0x53c] */ r_eax = (u32)(r_ebp+0xfffffac4u);
    /* 00603a91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603a92: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x603a98u); call_ind(t); }
    /* 00603a98: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603a9b: lea ecx, [ebp - 0x53c] */ r_ecx = (u32)(r_ebp+0xfffffac4u);
    /* 00603aa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603aa2: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x603aa7u); f_0062fde0();
    /* 00603aa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00603aaa:; BB(0x00603aaa);
    /* 00603aaa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00603aad: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603ab0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00603ab3: jmp 0x6038fa */ goto L_006038fa;
L_00603ab8:; BB(0x00603ab8);
    /* 00603ab8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00603aba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00603abd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00603ac4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00603ac5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00603ac8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00603aca: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x603acfu); f_00686d72();
    /* 00603acf: mov esp, ebp */ r_esp = r_ebp;
    /* 00603ad1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603ad2: ret  */ FN_RET(0x00603670); r_esp += 4; return;
}

