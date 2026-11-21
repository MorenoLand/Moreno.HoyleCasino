#include "protos.h"

void f_005c22d0(void) /* MLVSlotDisplay_Scroller::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c22d0);
    /* 005c22d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c22d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c22d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c22d5: push 0x6a85b3 */ { u32 v = 0x6a85b3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c22da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c22e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c22e1: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c22e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c22e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c22eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c22ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c22ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c22f5: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005c22f8: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c22fb: call 0x5c0a00 */ r_esp -= 4; W32(r_esp, 0x5c2300u); f_005c0a00();
    /* 005c2300: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c2307: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c230a: mov dword ptr [eax], 0x6d1d8c */ W32((u32)(r_eax), 0x6d1d8cu);
    /* 005c2310: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c2313: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2316: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005c2319: lea edx, [ebp - 0x15] */ r_edx = (u32)(r_ebp+0xffffffebu);
    /* 005c231c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c231f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2321: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c2324: call 0x5c68b0 */ r_esp -= 4; W32(r_esp, 0x5c2329u); f_005c68b0();
    /* 005c2329: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c232d: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c2330: mov dword ptr [eax + 0x50], 0x759948 */ W32((u32)(r_eax+0x50u), 0x759948u);
    /* 005c2337: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c233a: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 005c2341: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005c2347: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c234a: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005c2350: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 005c2353: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2355: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c2358: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c235au); call_ind(t); }
    /* 005c235a: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005c235d: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 005c2360: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c2367: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 005c236a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c236d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c2374: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2375: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2377: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2378: ret  */ FN_RET(0x005c22d0); r_esp += 4; return;
}

void f_005c2380(void) /* MLVSlotDisplay_Scroller::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c2380);
    /* 005c2380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2381: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2383: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2385: push 0x6a85e1 */ { u32 v = 0x6a85e1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c238a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2390: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2391: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2394: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c2399: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c239b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c239c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c239f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c23a5: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005c23a8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c23ab: mov dword ptr [eax], 0x6d1d8c */ W32((u32)(r_eax), 0x6d1d8cu);
    /* 005c23b1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c23b8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c23bb: cmp dword ptr [ecx + 0x50], 0 */ {  u32 a = R32((u32)(r_ecx+0x50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c23bf: je 0x5c23d7 */ if (fZ) goto L_005c23d7;
L_005c23c1:; BB(0x005c23c1);
    /* 005c23c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c23c3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c23c6: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c23c9: add eax, 0x88 */ {  u32 a = r_eax; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c23ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c23cf: call 0x6110a0 */ r_esp -= 4; W32(r_esp, 0x5c23d4u); f_006110a0();
    /* 005c23d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c23d7:; BB(0x005c23d7);
    /* 005c23d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c23d9: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c23df: call 0x5dd400 */ r_esp -= 4; W32(r_esp, 0x5c23e4u); f_005dd400();
    /* 005c23e4: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c23e8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c23eb: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c23ee: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005c23f1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c23f4: call 0x5c4920 */ r_esp -= 4; W32(r_esp, 0x5c23f9u); f_005c4920();
    /* 005c23f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c2400: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c2403: call 0x5c0b40 */ r_esp -= 4; W32(r_esp, 0x5c2408u); f_005c0b40();
    /* 005c2408: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c240b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c2412: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2413: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2415: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2416: ret  */ FN_RET(0x005c2380); r_esp += 4; return;
}

void f_005c2420(void) /* MLVSlotDisplay_Scroller::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c2420);
    /* 005c2420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2421: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2423: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2425: push 0x6a8628 */ { u32 v = 0x6a8628u; r_esp -= 4; W32(r_esp, v); }
    /* 005c242a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c2430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2431: sub esp, 0xdc */ {  u32 a = r_esp; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2437: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005c243c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c243e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c243f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005c2442: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005c2448: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 005c244e: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2454: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005c245a: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 005c245d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005c2460: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2466: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c246a: je 0x5c24a4 */ if (fZ) goto L_005c24a4;
L_005c246c:; BB(0x005c246c);
    /* 005c246c: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2472: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2475: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005c2478: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c247b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c247e: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2482: je 0x5c249a */ if (fZ) goto L_005c249a;
L_005c2484:; BB(0x005c2484);
    /* 005c2484: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2486: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2489: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c248b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c248e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2490: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c2492u); call_ind(t); }
    /* 005c2492: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 005c2498: jmp 0x5c24a4 */ goto L_005c24a4;
L_005c249a:; BB(0x005c249a);
    /* 005c249a: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_005c24a4:; BB(0x005c24a4);
    /* 005c24a4: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c24a9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c24aeu); f_00686d82();
    /* 005c24ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c24b1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c24b4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c24bb: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c24bf: je 0x5c24d1 */ if (fZ) goto L_005c24d1;
L_005c24c1:; BB(0x005c24c1);
    /* 005c24c1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c24c4: call 0x5c8bb0 */ r_esp -= 4; W32(r_esp, 0x5c24c9u); f_005c8bb0();
    /* 005c24c9: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005c24cf: jmp 0x5c24db */ goto L_005c24db;
L_005c24d1:; BB(0x005c24d1);
    /* 005c24d1: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_005c24db:; BB(0x005c24db);
    /* 005c24db: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 005c24e1: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005c24e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c24eb: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c24f1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c24f4: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005c24f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c24fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c24fb: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2501: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c2504: call 0x5c8c60 */ r_esp -= 4; W32(r_esp, 0x5c2509u); f_005c8c60();
    /* 005c2509: push 0x6d1c4c */ { u32 v = 0x6d1c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005c250e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5c2513u); f_00630f40();
    /* 005c2513: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2517: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005c251d: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x5c2522u); f_005f38b0();
    /* 005c2522: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2528: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c252b: mov dl, byte ptr [ecx + 6] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x6u))) & 0xffu);
    /* 005c252e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c252f: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2535: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c2538: mov dl, byte ptr [ecx + 5] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x5u))) & 0xffu);
    /* 005c253b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c253c: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2542: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c2545: mov dl, byte ptr [ecx + 4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4u))) & 0xffu);
    /* 005c2548: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2549: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005c254f: call 0x5f1b10 */ r_esp -= 4; W32(r_esp, 0x5c2554u); f_005f1b10();
    /* 005c2554: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c255a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c255d: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2563: mov eax, dword ptr [ecx + 0x108] */ r_eax = R32((u32)(r_ecx+0x108u));
    /* 005c2569: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005c256c: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2572: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2575: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c2578: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c257a: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005c257d: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2580: mov ecx, esp */ r_ecx = r_esp;
    /* 005c2582: mov dword ptr [ebp - 0x4c], esp */ W32((u32)(r_ebp+0xffffffb4u), r_esp);
    /* 005c2585: call 0x5c3870 */ r_esp -= 4; W32(r_esp, 0x5c258au); f_005c3870();
    /* 005c258a: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 005c2590: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c2593: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2594: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c259a: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c259d: call 0x5c4ba0 */ r_esp -= 4; W32(r_esp, 0x5c25a2u); f_005c4ba0();
    /* 005c25a2: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005c25a9: jmp 0x5c25b4 */ goto L_005c25b4;
L_005c25ab:; BB(0x005c25ab);
    /* 005c25ab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c25ae: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c25b1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005c25b4:; BB(0x005c25b4);
    /* 005c25b4: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c25ba: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c25bd: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c25c0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c25c2: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005c25c5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c25c8: cmp edx, dword ptr [ebp - 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c25cb: jge 0x5c2932 */ if ((fS==fO)) goto L_005c2932;
L_005c25d1:; BB(0x005c25d1);
    /* 005c25d1: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c25d7: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c25da: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005c25dd: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c25e0: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c25e4: jne 0x5c25f2 */ if (!fZ) goto L_005c25f2;
L_005c25e6:; BB(0x005c25e6);
    /* 005c25e6: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
    /* 005c25f0: jmp 0x5c260e */ goto L_005c260e;
L_005c25f2:; BB(0x005c25f2);
    /* 005c25f2: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c25f5: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005c25f8: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c25fb: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c25fe: mov eax, ecx */ r_eax = r_ecx;
    /* 005c2600: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2601: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2606: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2606, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2606, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2608: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
L_005c260e:; BB(0x005c260e);
    /* 005c260e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2611: cmp edx, dword ptr [ebp - 0xc8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff38u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2617: jb 0x5c261f */ if (fC) goto L_005c261f;
L_005c2619:; BB(0x005c2619);
    /* 005c2619: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c261fu); call_ind(t); }
L_005c261f:; BB(0x005c261f);
    /* 005c261f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2622: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2625: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005c2628: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c262b: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2631: mov dword ptr [eax + edx], ecx */ W32((u32)(r_eax+r_edx), r_ecx);
    /* 005c2634: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c263a: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c263d: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 005c2640: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c2643: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2647: jne 0x5c2655 */ if (!fZ) goto L_005c2655;
L_005c2649:; BB(0x005c2649);
    /* 005c2649: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 005c2653: jmp 0x5c266f */ goto L_005c266f;
L_005c2655:; BB(0x005c2655);
    /* 005c2655: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c2658: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c265b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c265e: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c2661: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2662: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2667: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2667, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2667, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2669: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
L_005c266f:; BB(0x005c266f);
    /* 005c266f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2672: cmp edx, dword ptr [ebp - 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff34u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2678: jb 0x5c2680 */ if (fC) goto L_005c2680;
L_005c267a:; BB(0x005c267a);
    /* 005c267a: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2680u); call_ind(t); }
L_005c2680:; BB(0x005c2680);
    /* 005c2680: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2683: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2686: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005c2689: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c268c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c268f: mov dword ptr [edx + eax + 4], ecx */ W32((u32)(r_edx+r_eax+0x4u), r_ecx);
    /* 005c2693: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2699: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c269c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005c269f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c26a2: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005c26a5: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c26ab: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c26ae: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005c26b1: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c26b4: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c26b8: jne 0x5c26c6 */ if (!fZ) goto L_005c26c6;
L_005c26ba:; BB(0x005c26ba);
    /* 005c26ba: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
    /* 005c26c4: jmp 0x5c26e2 */ goto L_005c26e2;
L_005c26c6:; BB(0x005c26c6);
    /* 005c26c6: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c26c9: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c26cc: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c26cf: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c26d2: mov eax, ecx */ r_eax = r_ecx;
    /* 005c26d4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c26d5: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c26da: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c26da, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c26da, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c26dc: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
L_005c26e2:; BB(0x005c26e2);
    /* 005c26e2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c26e5: cmp edx, dword ptr [ebp - 0xd0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff30u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c26eb: jb 0x5c26f3 */ if (fC) goto L_005c26f3;
L_005c26ed:; BB(0x005c26ed);
    /* 005c26ed: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c26f3u); call_ind(t); }
L_005c26f3:; BB(0x005c26f3);
    /* 005c26f3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c26f6: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c26f9: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005c26fc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c26ff: lea eax, [edx + eax + 0x20] */ r_eax = (u32)(r_edx+r_eax+0x20u);
    /* 005c2703: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005c2709: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c270b: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005c270e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2711: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2712: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005c2718: call 0x5be4d0 */ r_esp -= 4; W32(r_esp, 0x5c271du); f_005be4d0();
    /* 005c271d: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2723: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c2726: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005c272c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c272f: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005c2735: cmp dword ptr [edx + ecx*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c273a: jl 0x5c2751 */ if ((fS!=fO)) goto L_005c2751;
L_005c273c:; BB(0x005c273c);
    /* 005c273c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c273f: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005c2745: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005c2749: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 005c274f: jmp 0x5c2766 */ goto L_005c2766;
L_005c2751:; BB(0x005c2751);
    /* 005c2751: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2754: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005c275a: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 005c275e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005c2760: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
L_005c2766:; BB(0x005c2766);
    /* 005c2766: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c276c: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c276f: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005c2775: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c277b: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c277f: jne 0x5c278d */ if (!fZ) goto L_005c278d;
L_005c2781:; BB(0x005c2781);
    /* 005c2781: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 005c278b: jmp 0x5c27af */ goto L_005c27af;
L_005c278d:; BB(0x005c278d);
    /* 005c278d: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c2793: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 005c2799: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c279c: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c279f: mov eax, ecx */ r_eax = r_ecx;
    /* 005c27a1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c27a2: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c27a7: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c27a7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c27a7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c27a9: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
L_005c27af:; BB(0x005c27af);
    /* 005c27af: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c27b2: cmp edx, dword ptr [ebp - 0xd8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff28u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c27b8: jb 0x5c27c0 */ if (fC) goto L_005c27c0;
L_005c27ba:; BB(0x005c27ba);
    /* 005c27ba: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c27c0u); call_ind(t); }
L_005c27c0:; BB(0x005c27c0);
    /* 005c27c0: fild dword ptr [ebp - 0xd4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff2cu)));
    /* 005c27c6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c27c9: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c27cc: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 005c27d2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c27d5: fstp dword ptr [edx + eax + 8] */ W_F32((u32)(r_edx+r_eax+0x8u), ST(0)); FPOP();
    /* 005c27d9: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005c27de: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c27e3u); f_00686d82();
    /* 005c27e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c27e6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c27e9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005c27f0: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c27f4: je 0x5c2806 */ if (fZ) goto L_005c2806;
L_005c27f6:; BB(0x005c27f6);
    /* 005c27f6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c27f9: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5c27feu); f_00601a80();
    /* 005c27fe: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005c2804: jmp 0x5c2810 */ goto L_005c2810;
L_005c2806:; BB(0x005c2806);
    /* 005c2806: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_005c2810:; BB(0x005c2810);
    /* 005c2810: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 005c2816: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005c2819: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c2820: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c2823: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005c2826: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2829: add edx, 0x3158dc */ {  u32 a = r_edx; u32 b = 0x3158dcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c282f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2830: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2835: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c283b: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c283e: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c2841: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2842: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2848: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c284b: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2851: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c2854: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2857: imul edx, dword ptr [eax + 0x54] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_eax+0x54u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c285b: add edx, dword ptr [ecx + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c285e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c285f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2864: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2867: call 0x5eaec0 */ r_esp -= 4; W32(r_esp, 0x5c286cu); f_005eaec0();
    /* 005c286c: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2872: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c2875: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 005c2878: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2879: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c287c: call 0x5f5530 */ r_esp -= 4; W32(r_esp, 0x5c2881u); f_005f5530();
    /* 005c2881: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2887: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c288a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c288d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c2890: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005c2896: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c289c: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c289f: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005c28a2: imul eax, dword ptr [ebp - 0xac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xffffff54u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c28a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c28aa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c28ad: call 0x5f5570 */ r_esp -= 4; W32(r_esp, 0x5c28b2u); f_005f5570();
    /* 005c28b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c28b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c28b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c28ba: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c28bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c28bfu); call_ind(t); }
    /* 005c28bf: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c28c5: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c28c8: mov dword ptr [ebp - 0xb0], ecx */ W32((u32)(r_ebp+0xffffff50u), r_ecx);
    /* 005c28ce: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 005c28d4: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c28d8: jne 0x5c28e6 */ if (!fZ) goto L_005c28e6;
L_005c28da:; BB(0x005c28da);
    /* 005c28da: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
    /* 005c28e4: jmp 0x5c2906 */ goto L_005c2906;
L_005c28e6:; BB(0x005c28e6);
    /* 005c28e6: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005c28ec: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005c28f2: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005c28f5: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c28f8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c28f9: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c28fe: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c28fe, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c28fe, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2900: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
L_005c2906:; BB(0x005c2906);
    /* 005c2906: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c2909: cmp edx, dword ptr [ebp - 0xe0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff20u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c290f: jb 0x5c2917 */ if (fC) goto L_005c2917;
L_005c2911:; BB(0x005c2911);
    /* 005c2911: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2917u); call_ind(t); }
L_005c2917:; BB(0x005c2917);
    /* 005c2917: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c291a: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c291d: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 005c2923: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2926: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2929: mov dword ptr [edx + eax + 0x30], ecx */ W32((u32)(r_edx+r_eax+0x30u), r_ecx);
    /* 005c292d: jmp 0x5c25ab */ goto L_005c25ab;
L_005c2932:; BB(0x005c2932);
    /* 005c2932: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2938: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c293b: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c293f: je 0x5c29ee */ if (fZ) goto L_005c29ee;
L_005c2945:; BB(0x005c2945);
    /* 005c2945: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005c294a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c294fu); f_00686d82();
    /* 005c294f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2952: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c2955: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005c295c: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2960: je 0x5c2972 */ if (fZ) goto L_005c2972;
L_005c2962:; BB(0x005c2962);
    /* 005c2962: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c2965: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5c296au); f_005eaaf0();
    /* 005c296a: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 005c2970: jmp 0x5c297c */ goto L_005c297c;
L_005c2972:; BB(0x005c2972);
    /* 005c2972: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_005c297c:; BB(0x005c297c);
    /* 005c297c: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 005c2982: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005c2985: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c298c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c298f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005c2992: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2994: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2996: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2998: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c299a: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c29a0: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c29a3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005c29a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c29a7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c29aa: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c29afu); f_005eae80();
    /* 005c29af: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c29b5: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c29b8: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 005c29bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c29bc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c29bf: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5c29c4u); f_005eb000();
    /* 005c29c4: mov eax, dword ptr [ebp - 0xb8] */ r_eax = R32((u32)(r_ebp+0xffffff48u));
    /* 005c29ca: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c29cd: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c29d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c29d1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c29d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c29d6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c29d9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005c29df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c29e1u); call_ind(t); }
    /* 005c29e1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c29e4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c29e6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c29e9: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c29ec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c29eeu); call_ind(t); }
L_005c29ee:; BB(0x005c29ee);
    /* 005c29ee: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c29f4: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c29f7: cmp dword ptr [edx + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c29fb: je 0x5c2aaa */ if (fZ) goto L_005c2aaa;
L_005c2a01:; BB(0x005c2a01);
    /* 005c2a01: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a06: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5c2a0bu); f_00686d82();
    /* 005c2a0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2a0e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c2a11: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005c2a18: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2a1c: je 0x5c2a2e */ if (fZ) goto L_005c2a2e;
L_005c2a1e:; BB(0x005c2a1e);
    /* 005c2a1e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c2a21: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x5c2a26u); f_005eaaf0();
    /* 005c2a26: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 005c2a2c: jmp 0x5c2a38 */ goto L_005c2a38;
L_005c2a2e:; BB(0x005c2a2e);
    /* 005c2a2e: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_005c2a38:; BB(0x005c2a38);
    /* 005c2a38: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 005c2a3e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c2a41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c2a48: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c2a4b: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005c2a4e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a50: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a56: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2a5c: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c2a5f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005c2a62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a63: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2a66: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x5c2a6bu); f_005eae80();
    /* 005c2a6b: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2a71: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c2a74: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005c2a77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a78: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2a7b: call 0x5eb000 */ r_esp -= 4; W32(r_esp, 0x5c2a80u); f_005eb000();
    /* 005c2a80: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2a86: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c2a89: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005c2a8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2a8d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2a90: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2a92: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2a95: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005c2a9b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c2a9du); call_ind(t); }
    /* 005c2a9d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2aa0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2aa2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2aa5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c2aa8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c2aaau); call_ind(t); }
L_005c2aaa:; BB(0x005c2aaa);
    /* 005c2aaa: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2ab0: call 0x5c10b0 */ r_esp -= 4; W32(r_esp, 0x5c2ab5u); f_005c10b0();
    /* 005c2ab5: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2abb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2abe: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c2ac1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005c2ac4: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 005c2aca: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2acc: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2ad2: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c2ad5: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ad9: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005c2adf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2ae0: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2ae6: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c2ae9: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005c2aec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2aed: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2af3: call 0x5c0f40 */ r_esp -= 4; W32(r_esp, 0x5c2af8u); f_005c0f40();
    /* 005c2af8: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2afe: call 0x5c13e0 */ r_esp -= 4; W32(r_esp, 0x5c2b03u); f_005c13e0();
    /* 005c2b03: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2b09: call 0x5c1b60 */ r_esp -= 4; W32(r_esp, 0x5c2b0eu); f_005c1b60();
    /* 005c2b0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b10: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2b16: call 0x5c1d60 */ r_esp -= 4; W32(r_esp, 0x5c2b1bu); f_005c1d60();
    /* 005c2b1b: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005c2b21: call 0x5c1ed0 */ r_esp -= 4; W32(r_esp, 0x5c2b26u); f_005c1ed0();
    /* 005c2b26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2b29: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c2b30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c2b31: mov esp, ebp */ r_esp = r_ebp;
    /* 005c2b33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c2b34: ret 4 */ FN_RET(0x005c2420); r_esp += 8; return;
}

void f_005c2b40(void) /* MLVSlotDisplay_Scroller::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c2b40);
    /* 005c2b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b41: mov ebp, esp */ r_ebp = r_esp;
    /* 005c2b43: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c2b49: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005c2b4c: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 005c2b50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005c2b53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2b54: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2b57: call 0x5c15c0 */ r_esp -= 4; W32(r_esp, 0x5c2b5cu); f_005c15c0();
    /* 005c2b5c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c2b5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2b61: je 0x5c2b6a */ if (fZ) goto L_005c2b6a;
L_005c2b63:; BB(0x005c2b63);
    /* 005c2b63: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c2b65: jmp 0x5c3109 */ goto L_005c3109;
L_005c2b6a:; BB(0x005c2b6a);
    /* 005c2b6a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c2b6d: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 005c2b70: cmp dword ptr [ebp - 0x54], 0x5e */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x5eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2b74: je 0x5c2b7b */ if (fZ) goto L_005c2b7b;
L_005c2b76:; BB(0x005c2b76);
    /* 005c2b76: jmp 0x5c2e3b */ goto L_005c2e3b;
L_005c2b7b:; BB(0x005c2b7b);
    /* 005c2b7b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2b7e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c2b80: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2b83: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c2b86: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c2b88u); call_ind(t); }
    /* 005c2b88: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c2b8b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2b8d: je 0x5c2ba3 */ if (fZ) goto L_005c2ba3;
L_005c2b8f:; BB(0x005c2b8f);
    /* 005c2b8f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2b92: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c2b94: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2b97: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c2b9a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c2b9cu); call_ind(t); }
    /* 005c2b9c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c2b9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2ba1: je 0x5c2ba8 */ if (fZ) goto L_005c2ba8;
L_005c2ba3:; BB(0x005c2ba3);
    /* 005c2ba3: jmp 0x5c2e3f */ goto L_005c2e3f;
L_005c2ba8:; BB(0x005c2ba8);
    /* 005c2ba8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2bab: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2bae: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c2bb1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c2bb4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2bb7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2bba: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c2bbd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2bc0: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c2bc5u); f_005c9140();
    /* 005c2bc5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c2bc8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c2bcb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005c2bce: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c2bd1: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2bd4: jle 0x5c2bdb */ if ((fZ||fS!=fO)) goto L_005c2bdb;
L_005c2bd6:; BB(0x005c2bd6);
    /* 005c2bd6: jmp 0x5c2e3f */ goto L_005c2e3f;
L_005c2bdb:; BB(0x005c2bdb);
    /* 005c2bdb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c2be2: jmp 0x5c2bed */ goto L_005c2bed;
L_005c2be4:; BB(0x005c2be4);
    /* 005c2be4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2be7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2bea: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005c2bed:; BB(0x005c2bed);
    /* 005c2bed: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2bf0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2bf3: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005c2bf6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005c2bf8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c2bfb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2bfe: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2c01: jge 0x5c2e02 */ if ((fS==fO)) goto L_005c2e02;
L_005c2c07:; BB(0x005c2c07);
    /* 005c2c07: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2c0a: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2c0d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005c2c10: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2c13: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2c17: jne 0x5c2c22 */ if (!fZ) goto L_005c2c22;
L_005c2c19:; BB(0x005c2c19);
    /* 005c2c19: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005c2c20: jmp 0x5c2c3b */ goto L_005c2c3b;
L_005c2c22:; BB(0x005c2c22);
    /* 005c2c22: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2c25: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2c28: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c2c2b: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2c2e: mov eax, ecx */ r_eax = r_ecx;
    /* 005c2c30: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2c31: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2c36: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2c36, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2c36, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2c38: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_005c2c3b:; BB(0x005c2c3b);
    /* 005c2c3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2c3e: cmp edx, dword ptr [ebp - 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2c41: jb 0x5c2c49 */ if (fC) goto L_005c2c49;
L_005c2c43:; BB(0x005c2c43);
    /* 005c2c43: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2c49u); call_ind(t); }
L_005c2c49:; BB(0x005c2c49);
    /* 005c2c49: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2c4c: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c2c4f: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 005c2c52: fmul dword ptr [ecx + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x68u));
    /* 005c2c55: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2c58: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c2c5b: fadd dword ptr [eax + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x64u));
    /* 005c2c5e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2c61: imul ecx, ecx, 0x34 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x34u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2c64: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c2c67: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c2c6a: fstp dword ptr [eax + ecx + 0x14] */ W_F32((u32)(r_eax+r_ecx+0x14u), ST(0)); FPOP();
    /* 005c2c6e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2c71: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2c74: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005c2c77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2c7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2c7d: cmp dword ptr [ecx + eax*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2c82: jl 0x5c2c93 */ if ((fS!=fO)) goto L_005c2c93;
L_005c2c84:; BB(0x005c2c84);
    /* 005c2c84: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2c87: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2c8a: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c2c8e: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005c2c91: jmp 0x5c2ca2 */ goto L_005c2ca2;
L_005c2c93:; BB(0x005c2c93);
    /* 005c2c93: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2c96: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c2c99: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c2c9d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2c9f: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
L_005c2ca2:; BB(0x005c2ca2);
    /* 005c2ca2: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2ca5: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c2ca8: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005c2cab: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2cae: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2cb2: jne 0x5c2cbd */ if (!fZ) goto L_005c2cbd;
L_005c2cb4:; BB(0x005c2cb4);
    /* 005c2cb4: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005c2cbb: jmp 0x5c2cd4 */ goto L_005c2cd4;
L_005c2cbd:; BB(0x005c2cbd);
    /* 005c2cbd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2cc0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2cc3: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c2cc6: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c2cc9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2cca: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2ccf: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2ccf, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2ccf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2cd1: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_005c2cd4:; BB(0x005c2cd4);
    /* 005c2cd4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2cd7: cmp edx, dword ptr [ebp - 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2cda: jb 0x5c2ce2 */ if (fC) goto L_005c2ce2;
L_005c2cdc:; BB(0x005c2cdc);
    /* 005c2cdc: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2ce2u); call_ind(t); }
L_005c2ce2:; BB(0x005c2ce2);
    /* 005c2ce2: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 005c2ce5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2ce8: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2ceb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c2cee: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2cf1: fstp dword ptr [edx + eax + 8] */ W_F32((u32)(r_edx+r_eax+0x8u), ST(0)); FPOP();
    /* 005c2cf5: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2cf8: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2cfb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c2cfe: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2d01: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2d05: jne 0x5c2d10 */ if (!fZ) goto L_005c2d10;
L_005c2d07:; BB(0x005c2d07);
    /* 005c2d07: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005c2d0e: jmp 0x5c2d29 */ goto L_005c2d29;
L_005c2d10:; BB(0x005c2d10);
    /* 005c2d10: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2d13: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2d16: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c2d19: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2d1c: mov eax, ecx */ r_eax = r_ecx;
    /* 005c2d1e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2d1f: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2d24: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2d24, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2d24, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2d26: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
L_005c2d29:; BB(0x005c2d29);
    /* 005c2d29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d2c: cmp edx, dword ptr [ebp - 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2d2f: jb 0x5c2d37 */ if (fC) goto L_005c2d37;
L_005c2d31:; BB(0x005c2d31);
    /* 005c2d31: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2d37u); call_ind(t); }
L_005c2d37:; BB(0x005c2d37);
    /* 005c2d37: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2d3a: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c2d3d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d40: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d43: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c2d46: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c2d49: fld dword ptr [ecx + 0x6c] */ FPUSH(R_F32((u32)(r_ecx+0x6cu)));
    /* 005c2d4c: fstp dword ptr [eax + edx + 0xc] */ W_F32((u32)(r_eax+r_edx+0xcu), ST(0)); FPOP();
    /* 005c2d50: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2d53: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2d56: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005c2d59: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c2d5c: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2d60: jne 0x5c2d6b */ if (!fZ) goto L_005c2d6b;
L_005c2d62:; BB(0x005c2d62);
    /* 005c2d62: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005c2d69: jmp 0x5c2d82 */ goto L_005c2d82;
L_005c2d6b:; BB(0x005c2d6b);
    /* 005c2d6b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c2d6e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c2d71: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005c2d74: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c2d77: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2d78: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2d7d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2d7d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2d7d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2d7f: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
L_005c2d82:; BB(0x005c2d82);
    /* 005c2d82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d85: cmp edx, dword ptr [ebp - 0x68] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2d88: jb 0x5c2d90 */ if (fC) goto L_005c2d90;
L_005c2d8a:; BB(0x005c2d8a);
    /* 005c2d8a: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2d90u); call_ind(t); }
L_005c2d90:; BB(0x005c2d90);
    /* 005c2d90: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2d93: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c2d96: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2d99: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2d9c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c2d9f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c2da2: fld dword ptr [ecx + 0x70] */ FPUSH(R_F32((u32)(r_ecx+0x70u)));
    /* 005c2da5: fstp dword ptr [eax + edx + 0x10] */ W_F32((u32)(r_eax+r_edx+0x10u), ST(0)); FPOP();
    /* 005c2da9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2dac: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2daf: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005c2db2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c2db5: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2db9: jne 0x5c2dc4 */ if (!fZ) goto L_005c2dc4;
L_005c2dbb:; BB(0x005c2dbb);
    /* 005c2dbb: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005c2dc2: jmp 0x5c2ddb */ goto L_005c2ddb;
L_005c2dc4:; BB(0x005c2dc4);
    /* 005c2dc4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c2dc7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c2dca: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005c2dcd: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c2dd0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2dd1: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2dd6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2dd6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2dd6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2dd8: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
L_005c2ddb:; BB(0x005c2ddb);
    /* 005c2ddb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2dde: cmp edx, dword ptr [ebp - 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff94u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2de1: jb 0x5c2de9 */ if (fC) goto L_005c2de9;
L_005c2de3:; BB(0x005c2de3);
    /* 005c2de3: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2de9u); call_ind(t); }
L_005c2de9:; BB(0x005c2de9);
    /* 005c2de9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2dec: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2def: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c2df2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2df5: mov dword ptr [edx + eax + 0x1c], 2 */ W32((u32)(r_edx+r_eax+0x1cu), 0x2u);
    /* 005c2dfd: jmp 0x5c2be4 */ goto L_005c2be4;
L_005c2e02:; BB(0x005c2e02);
    /* 005c2e02: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2e05: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c2e08: call 0x5c8fc0 */ r_esp -= 4; W32(r_esp, 0x5c2e0du); f_005c8fc0();
    /* 005c2e0d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2e10: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c2e13: add edx, 0x88 */ {  u32 a = r_edx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c2e19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e1a: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5c2e1fu); f_00610980();
    /* 005c2e1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c2e22: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e24: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c2e2a: call 0x5dd400 */ r_esp -= 4; W32(r_esp, 0x5c2e2fu); f_005dd400();
    /* 005c2e2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c2e31: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2e34: call 0x5c3110 */ r_esp -= 4; W32(r_esp, 0x5c2e39u); f_005c3110();
    /* 005c2e39: jmp 0x5c2e3f */ goto L_005c2e3f;
L_005c2e3b:; BB(0x005c2e3b);
    /* 005c2e3b: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
L_005c2e3f:; BB(0x005c2e3f);
    /* 005c2e3f: cmp dword ptr [ebp + 8], 0x3158dc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3158dcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2e46: jl 0x5c3085 */ if ((fS!=fO)) goto L_005c3085;
L_005c2e4c:; BB(0x005c2e4c);
    /* 005c2e4c: cmp dword ptr [ebp + 8], 0x3158e2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3158e2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c2e53: jg 0x5c3085 */ if ((!fZ&&fS==fO)) goto L_005c3085;
L_005c2e59:; BB(0x005c2e59);
    /* 005c2e59: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2e5c: cmp dword ptr [eax + 0x54], 1 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2e60: jne 0x5c3085 */ if (!fZ) goto L_005c3085;
L_005c2e66:; BB(0x005c2e66);
    /* 005c2e66: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c2e69: sub ecx, 0x3158dc */ {  u32 a = r_ecx; u32 b = 0x3158dcu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2e6f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c2e72: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2e75: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c2e78: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005c2e7b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c2e7e: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2e82: jne 0x5c2e8d */ if (!fZ) goto L_005c2e8d;
L_005c2e84:; BB(0x005c2e84);
    /* 005c2e84: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 005c2e8b: jmp 0x5c2ea4 */ goto L_005c2ea4;
L_005c2e8d:; BB(0x005c2e8d);
    /* 005c2e8d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c2e90: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c2e93: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c2e96: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c2e99: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2e9a: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2e9f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2e9f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2e9f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2ea1: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
L_005c2ea4:; BB(0x005c2ea4);
    /* 005c2ea4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2ea7: cmp edx, dword ptr [ebp - 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2eaa: jb 0x5c2eb2 */ if (fC) goto L_005c2eb2;
L_005c2eac:; BB(0x005c2eac);
    /* 005c2eac: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2eb2u); call_ind(t); }
L_005c2eb2:; BB(0x005c2eb2);
    /* 005c2eb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2eb5: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2eb8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c2ebb: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2ebe: cmp dword ptr [edx + eax + 0x1c], 3 */ {  u32 a = R32((u32)(r_edx+r_eax+0x1cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2ec3: jne 0x5c3081 */ if (!fZ) goto L_005c3081;
L_005c2ec9:; BB(0x005c2ec9);
    /* 005c2ec9: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2ecc: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2ecf: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c2ed2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c2ed5: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2ed9: jne 0x5c2ee4 */ if (!fZ) goto L_005c2ee4;
L_005c2edb:; BB(0x005c2edb);
    /* 005c2edb: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 005c2ee2: jmp 0x5c2efd */ goto L_005c2efd;
L_005c2ee4:; BB(0x005c2ee4);
    /* 005c2ee4: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c2ee7: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c2eea: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c2eed: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2ef0: mov eax, ecx */ r_eax = r_ecx;
    /* 005c2ef2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2ef3: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2ef8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2ef8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2ef8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2efa: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
L_005c2efd:; BB(0x005c2efd);
    /* 005c2efd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2f00: cmp edx, dword ptr [ebp - 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2f03: jb 0x5c2f0b */ if (fC) goto L_005c2f0b;
L_005c2f05:; BB(0x005c2f05);
    /* 005c2f05: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2f0bu); call_ind(t); }
L_005c2f0b:; BB(0x005c2f0b);
    /* 005c2f0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2f0e: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2f11: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c2f14: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2f17: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c2f1a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c2f1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f1e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005c2f21: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c2f24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2f27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c2f28: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2f2b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005c2f2e: call 0x5c9030 */ r_esp -= 4; W32(r_esp, 0x5c2f33u); f_005c9030();
    /* 005c2f33: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005c2f36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2f38: je 0x5c3081 */ if (fZ) goto L_005c3081;
L_005c2f3e:; BB(0x005c2f3e);
    /* 005c2f3e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2f41: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2f44: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005c2f47: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c2f4a: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2f4e: jne 0x5c2f59 */ if (!fZ) goto L_005c2f59;
L_005c2f50:; BB(0x005c2f50);
    /* 005c2f50: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005c2f57: jmp 0x5c2f72 */ goto L_005c2f72;
L_005c2f59:; BB(0x005c2f59);
    /* 005c2f59: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c2f5c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c2f5f: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c2f62: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2f65: mov eax, ecx */ r_eax = r_ecx;
    /* 005c2f67: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2f68: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2f6d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2f6d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2f6d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2f6f: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
L_005c2f72:; BB(0x005c2f72);
    /* 005c2f72: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2f75: cmp edx, dword ptr [ebp - 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2f78: jb 0x5c2f80 */ if (fC) goto L_005c2f80;
L_005c2f7a:; BB(0x005c2f7a);
    /* 005c2f7a: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2f80u); call_ind(t); }
L_005c2f80:; BB(0x005c2f80);
    /* 005c2f80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2f83: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2f86: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c2f89: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2f8c: mov dword ptr [edx + eax + 0x1c], 5 */ W32((u32)(r_edx+r_eax+0x1cu), 0x5u);
    /* 005c2f94: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2f97: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c2f9a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c2f9d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c2fa0: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c2fa4: jne 0x5c2faf */ if (!fZ) goto L_005c2faf;
L_005c2fa6:; BB(0x005c2fa6);
    /* 005c2fa6: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 005c2fad: jmp 0x5c2fc8 */ goto L_005c2fc8;
L_005c2faf:; BB(0x005c2faf);
    /* 005c2faf: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c2fb2: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c2fb5: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c2fb8: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c2fbb: mov eax, ecx */ r_eax = r_ecx;
    /* 005c2fbd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c2fbe: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c2fc3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c2fc3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c2fc3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c2fc5: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
L_005c2fc8:; BB(0x005c2fc8);
    /* 005c2fc8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2fcb: cmp edx, dword ptr [ebp - 0x7c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c2fce: jb 0x5c2fd6 */ if (fC) goto L_005c2fd6;
L_005c2fd0:; BB(0x005c2fd0);
    /* 005c2fd0: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c2fd6u); call_ind(t); }
L_005c2fd6:; BB(0x005c2fd6);
    /* 005c2fd6: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2fd9: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c2fdc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2fdf: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c2fe2: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c2fe5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c2fe8: fld dword ptr [ecx + 0x7c] */ FPUSH(R_F32((u32)(r_ecx+0x7cu)));
    /* 005c2feb: fstp dword ptr [eax + edx + 0x10] */ W_F32((u32)(r_eax+r_edx+0x10u), ST(0)); FPOP();
    /* 005c2fef: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c2ff2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c2ff5: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005c2ff8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c2ffb: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c2ffe: cmp dword ptr [ecx + eax*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3003: jl 0x5c3014 */ if ((fS!=fO)) goto L_005c3014;
L_005c3005:; BB(0x005c3005);
    /* 005c3005: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3008: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c300b: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c300f: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005c3012: jmp 0x5c3023 */ goto L_005c3023;
L_005c3014:; BB(0x005c3014);
    /* 005c3014: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3017: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005c301a: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c301e: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3020: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
L_005c3023:; BB(0x005c3023);
    /* 005c3023: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3026: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3029: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005c302c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c302f: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3033: jne 0x5c3041 */ if (!fZ) goto L_005c3041;
L_005c3035:; BB(0x005c3035);
    /* 005c3035: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 005c303f: jmp 0x5c305b */ goto L_005c305b;
L_005c3041:; BB(0x005c3041);
    /* 005c3041: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c3044: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c3047: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c304a: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c304d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c304e: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c3053: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c3053, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c3053, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c3055: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
L_005c305b:; BB(0x005c305b);
    /* 005c305b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c305e: cmp edx, dword ptr [ebp - 0x84] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff7cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c3064: jb 0x5c306c */ if (fC) goto L_005c306c;
L_005c3066:; BB(0x005c3066);
    /* 005c3066: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c306cu); call_ind(t); }
L_005c306c:; BB(0x005c306c);
    /* 005c306c: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005c306f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3070: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3073: imul ecx, ecx, 0x34 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x34u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c3076: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005c3079: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c307c: call 0x5c42d0 */ r_esp -= 4; W32(r_esp, 0x5c3081u); f_005c42d0();
L_005c3081:; BB(0x005c3081);
    /* 005c3081: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_005c3085:; BB(0x005c3085);
    /* 005c3085: cmp dword ptr [ebp + 8], 0x3158e3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3158e3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c308c: jl 0x5c3106 */ if ((fS!=fO)) goto L_005c3106;
L_005c308e:; BB(0x005c308e);
    /* 005c308e: cmp dword ptr [ebp + 8], 0x315900 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x315900u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3095: jg 0x5c3106 */ if ((!fZ&&fS==fO)) goto L_005c3106;
L_005c3097:; BB(0x005c3097);
    /* 005c3097: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c309a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c309c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c309f: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005c30a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c30a4u); call_ind(t); }
    /* 005c30a4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c30a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c30a9: je 0x5c3106 */ if (fZ) goto L_005c3106;
L_005c30ab:; BB(0x005c30ab);
    /* 005c30ab: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c30ae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c30b0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c30b3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 005c30b6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c30b8u); call_ind(t); }
    /* 005c30b8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c30bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c30bd: jne 0x5c3106 */ if (!fZ) goto L_005c3106;
L_005c30bf:; BB(0x005c30bf);
    /* 005c30bf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005c30c2: sub ecx, 0x3158e2 */ {  u32 a = r_ecx; u32 b = 0x3158e2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c30c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c30cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c30cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c30d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c30d1: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c30d4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c30d7: call 0x5c8e20 */ r_esp -= 4; W32(r_esp, 0x5c30dcu); f_005c8e20();
    /* 005c30dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c30de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c30e1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c30e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c30e5: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c30e8: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c30eb: call 0x5c8e20 */ r_esp -= 4; W32(r_esp, 0x5c30f0u); f_005c8e20();
    /* 005c30f0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c30f2: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c30f5: call 0x5c3110 */ r_esp -= 4; W32(r_esp, 0x5c30fau); f_005c3110();
    /* 005c30fa: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c30fd: call 0x5c1b60 */ r_esp -= 4; W32(r_esp, 0x5c3102u); f_005c1b60();
    /* 005c3102: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_005c3106:; BB(0x005c3106);
    /* 005c3106: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
L_005c3109:; BB(0x005c3109);
    /* 005c3109: mov esp, ebp */ r_esp = r_ebp;
    /* 005c310b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c310c: ret 4 */ FN_RET(0x005c2b40); r_esp += 8; return;
}

void f_005c32b0(void) /* MLVSlotDisplay_Scroller::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c32b0);
    /* 005c32b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c32b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c32b3: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c32b6: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 005c32b9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c32bc: call 0x5c1550 */ r_esp -= 4; W32(r_esp, 0x5c32c1u); f_005c1550();
    /* 005c32c1: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005c32c6: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c32c9: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005c32cf: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c32d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c32d4: mov ecx, eax */ r_ecx = r_eax;
    /* 005c32d6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c32d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c32dbu); call_ind(t); }
    /* 005c32db: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005c32de: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 005c32e1: fisub dword ptr [0x79360c] */ ST(0) = ST(0) - (long double)(i32)R32((u32)(0x79360cu));
    /* 005c32e7: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 005c32ed: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 005c32f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c32f3: mov dword ptr [0x79360c], ecx */ W32((u32)(0x79360cu), r_ecx);
    /* 005c32f9: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 005c32fc: fcomp qword ptr [0x6d1dc8] */ fx_compare(ST(0), R_F64((u32)(0x6d1dc8u))); FPOP();
    /* 005c3302: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3304: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c3307: jne 0x5c3312 */ if (!fZ) goto L_005c3312;
L_005c3309:; BB(0x005c3309);
    /* 005c3309: fld dword ptr [0x6d1dc0] */ FPUSH(R_F32((u32)(0x6d1dc0u)));
    /* 005c330f: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
L_005c3312:; BB(0x005c3312);
    /* 005c3312: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3315: call 0x5c21c0 */ r_esp -= 4; W32(r_esp, 0x5c331au); f_005c21c0();
    /* 005c331a: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 005c331d: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 005c3320: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3323: cmp dword ptr [edx + 0x54], 3 */ {  u32 a = R32((u32)(r_edx+0x54u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3327: jne 0x5c3342 */ if (!fZ) goto L_005c3342;
L_005c3329:; BB(0x005c3329);
    /* 005c3329: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c332c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c332f: sub ecx, dword ptr [eax + 0x68] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x68u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3332: cmp ecx, 0xbb8 */ {  u32 a = r_ecx; u32 b = 0xbb8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3338: jle 0x5c3342 */ if ((fZ||fS!=fO)) goto L_005c3342;
L_005c333a:; BB(0x005c333a);
    /* 005c333a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c333d: call 0x5c1a80 */ r_esp -= 4; W32(r_esp, 0x5c3342u); f_005c1a80();
L_005c3342:; BB(0x005c3342);
    /* 005c3342: mov byte ptr [ebp - 0xe], 1 */ W8((u32)(r_ebp+0xfffffff2u), 0x1u);
    /* 005c3346: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 005c334a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c3351: jmp 0x5c335c */ goto L_005c335c;
L_005c3353:; BB(0x005c3353);
    /* 005c3353: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3356: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3359: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c335c:; BB(0x005c335c);
    /* 005c335c: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c335f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c3362: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c3365: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c3367: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c336a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c336d: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3370: jge 0x5c34d8 */ if ((fS==fO)) goto L_005c34d8;
L_005c3376:; BB(0x005c3376);
    /* 005c3376: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3379: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c337c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005c337f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c3382: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3386: jne 0x5c3391 */ if (!fZ) goto L_005c3391;
L_005c3388:; BB(0x005c3388);
    /* 005c3388: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005c338f: jmp 0x5c33a8 */ goto L_005c33a8;
L_005c3391:; BB(0x005c3391);
    /* 005c3391: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c3394: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c3397: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c339a: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c339d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c339e: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c33a3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c33a3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c33a3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c33a5: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
L_005c33a8:; BB(0x005c33a8);
    /* 005c33a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c33ab: cmp edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c33ae: jb 0x5c33b6 */ if (fC) goto L_005c33b6;
L_005c33b0:; BB(0x005c33b0);
    /* 005c33b0: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c33b6u); call_ind(t); }
L_005c33b6:; BB(0x005c33b6);
    /* 005c33b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c33b7: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 005c33ba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005c33bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c33c0: imul ecx, ecx, 0x34 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x34u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c33c3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c33c6: add ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c33c9: call 0x5c3b10 */ r_esp -= 4; W32(r_esp, 0x5c33ceu); f_005c3b10();
    /* 005c33ce: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c33d1: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c33d4: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005c33d7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33da: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c33de: jne 0x5c33e9 */ if (!fZ) goto L_005c33e9;
L_005c33e0:; BB(0x005c33e0);
    /* 005c33e0: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005c33e7: jmp 0x5c3400 */ goto L_005c3400;
L_005c33e9:; BB(0x005c33e9);
    /* 005c33e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c33ef: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005c33f2: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c33f5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c33f6: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c33fb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c33fb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c33fb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c33fd: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_005c3400:; BB(0x005c3400);
    /* 005c3400: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3403: cmp edx, dword ptr [ebp - 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c3406: jb 0x5c340e */ if (fC) goto L_005c340e;
L_005c3408:; BB(0x005c3408);
    /* 005c3408: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c340eu); call_ind(t); }
L_005c340e:; BB(0x005c340e);
    /* 005c340e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3411: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c3414: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3417: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c341a: cmp dword ptr [edx + eax + 0x1c], 4 */ {  u32 a = R32((u32)(r_edx+r_eax+0x1cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c341f: jge 0x5c347a */ if ((fS==fO)) goto L_005c347a;
L_005c3421:; BB(0x005c3421);
    /* 005c3421: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3424: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3427: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c342a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c342d: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3431: jne 0x5c343c */ if (!fZ) goto L_005c343c;
L_005c3433:; BB(0x005c3433);
    /* 005c3433: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005c343a: jmp 0x5c3455 */ goto L_005c3455;
L_005c343c:; BB(0x005c343c);
    /* 005c343c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c343f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c3442: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c3445: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3448: mov eax, ecx */ r_eax = r_ecx;
    /* 005c344a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c344b: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c3450: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c3450, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c3450, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c3452: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
L_005c3455:; BB(0x005c3455);
    /* 005c3455: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3458: cmp edx, dword ptr [ebp - 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c345b: jb 0x5c3463 */ if (fC) goto L_005c3463;
L_005c345d:; BB(0x005c345d);
    /* 005c345d: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c3463u); call_ind(t); }
L_005c3463:; BB(0x005c3463);
    /* 005c3463: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3466: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c3469: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c346c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c346f: cmp dword ptr [edx + eax + 0x1c], 1 */ {  u32 a = R32((u32)(r_edx+r_eax+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3474: je 0x5c347a */ if (fZ) goto L_005c347a;
L_005c3476:; BB(0x005c3476);
    /* 005c3476: mov byte ptr [ebp - 0xe], 0 */ W8((u32)(r_ebp+0xfffffff2u), 0x0u);
L_005c347a:; BB(0x005c347a);
    /* 005c347a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c347d: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3480: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c3483: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c3486: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c348a: jne 0x5c3495 */ if (!fZ) goto L_005c3495;
L_005c348c:; BB(0x005c348c);
    /* 005c348c: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005c3493: jmp 0x5c34ae */ goto L_005c34ae;
L_005c3495:; BB(0x005c3495);
    /* 005c3495: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c3498: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c349b: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c349e: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c34a1: mov eax, ecx */ r_eax = r_ecx;
    /* 005c34a3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c34a4: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c34a9: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c34a9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c34a9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c34ab: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_005c34ae:; BB(0x005c34ae);
    /* 005c34ae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c34b1: cmp edx, dword ptr [ebp - 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c34b4: jb 0x5c34bc */ if (fC) goto L_005c34bc;
L_005c34b6:; BB(0x005c34b6);
    /* 005c34b6: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c34bcu); call_ind(t); }
L_005c34bc:; BB(0x005c34bc);
    /* 005c34bc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c34bf: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c34c2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c34c5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c34c8: cmp dword ptr [edx + eax + 0x1c], 1 */ {  u32 a = R32((u32)(r_edx+r_eax+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c34cd: je 0x5c34d3 */ if (fZ) goto L_005c34d3;
L_005c34cf:; BB(0x005c34cf);
    /* 005c34cf: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
L_005c34d3:; BB(0x005c34d3);
    /* 005c34d3: jmp 0x5c3353 */ goto L_005c3353;
L_005c34d8:; BB(0x005c34d8);
    /* 005c34d8: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c34db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c34dd: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c34e0: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005c34e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c34e5u); call_ind(t); }
    /* 005c34e5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c34e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c34ea: je 0x5c3738 */ if (fZ) goto L_005c3738;
L_005c34f0:; BB(0x005c34f0);
    /* 005c34f0: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c34f3: cmp dword ptr [edx + 0x54], 2 */ {  u32 a = R32((u32)(r_edx+0x54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c34f7: je 0x5c3738 */ if (fZ) goto L_005c3738;
L_005c34fd:; BB(0x005c34fd);
    /* 005c34fd: movzx eax, byte ptr [ebp - 0xe] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff2u));
    /* 005c3501: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3503: je 0x5c3738 */ if (fZ) goto L_005c3738;
L_005c3509:; BB(0x005c3509);
    /* 005c3509: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005c350b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c350e: call 0x5c3110 */ r_esp -= 4; W32(r_esp, 0x5c3513u); f_005c3110();
    /* 005c3513: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3516: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005c3519: call 0x5c90c0 */ r_esp -= 4; W32(r_esp, 0x5c351eu); f_005c90c0();
    /* 005c351e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c3525: jmp 0x5c3530 */ goto L_005c3530;
L_005c3527:; BB(0x005c3527);
    /* 005c3527: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c352a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c352d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005c3530:; BB(0x005c3530);
    /* 005c3530: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3533: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c3536: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005c3539: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005c353b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005c353e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3541: cmp ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3544: jge 0x5c3738 */ if ((fS==fO)) goto L_005c3738;
L_005c354a:; BB(0x005c354a);
    /* 005c354a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c354d: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3550: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005c3553: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c3556: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c355a: jne 0x5c3565 */ if (!fZ) goto L_005c3565;
L_005c355c:; BB(0x005c355c);
    /* 005c355c: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005c3563: jmp 0x5c357c */ goto L_005c357c;
L_005c3565:; BB(0x005c3565);
    /* 005c3565: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c3568: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c356b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c356e: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c3571: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c3572: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c3577: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c3577, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c3577, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c3579: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
L_005c357c:; BB(0x005c357c);
    /* 005c357c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c357f: cmp edx, dword ptr [ebp - 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c3582: jb 0x5c358a */ if (fC) goto L_005c358a;
L_005c3584:; BB(0x005c3584);
    /* 005c3584: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c358au); call_ind(t); }
L_005c358a:; BB(0x005c358a);
    /* 005c358a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c358d: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c3590: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005c3593: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c3596: cmp dword ptr [edx + eax + 0x1c], 5 */ {  u32 a = R32((u32)(r_edx+r_eax+0x1cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c359b: jl 0x5c359f */ if ((fS!=fO)) goto L_005c359f;
L_005c359d:; BB(0x005c359d);
    /* 005c359d: jmp 0x5c3527 */ goto L_005c3527;
L_005c359f:; BB(0x005c359f);
    /* 005c359f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c35a2: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c35a5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005c35a8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c35ab: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c35af: jne 0x5c35ba */ if (!fZ) goto L_005c35ba;
L_005c35b1:; BB(0x005c35b1);
    /* 005c35b1: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005c35b8: jmp 0x5c35d3 */ goto L_005c35d3;
L_005c35ba:; BB(0x005c35ba);
    /* 005c35ba: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c35bd: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c35c0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c35c3: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c35c6: mov eax, ecx */ r_eax = r_ecx;
    /* 005c35c8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c35c9: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c35ce: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c35ce, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c35ce, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c35d0: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
L_005c35d3:; BB(0x005c35d3);
    /* 005c35d3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c35d6: cmp edx, dword ptr [ebp - 0x68] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c35d9: jb 0x5c35e1 */ if (fC) goto L_005c35e1;
L_005c35db:; BB(0x005c35db);
    /* 005c35db: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c35e1u); call_ind(t); }
L_005c35e1:; BB(0x005c35e1);
    /* 005c35e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c35e4: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c35e7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c35ea: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c35ed: cmp dword ptr [edx + eax + 0x1c], 1 */ {  u32 a = R32((u32)(r_edx+r_eax+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c35f2: jne 0x5c35f9 */ if (!fZ) goto L_005c35f9;
L_005c35f4:; BB(0x005c35f4);
    /* 005c35f4: jmp 0x5c3527 */ goto L_005c3527;
L_005c35f9:; BB(0x005c35f9);
    /* 005c35f9: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c35fc: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c35ff: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005c3602: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c3605: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3609: jne 0x5c3614 */ if (!fZ) goto L_005c3614;
L_005c360b:; BB(0x005c360b);
    /* 005c360b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005c3612: jmp 0x5c362d */ goto L_005c362d;
L_005c3614:; BB(0x005c3614);
    /* 005c3614: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c3617: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c361a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c361d: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3620: mov eax, ecx */ r_eax = r_ecx;
    /* 005c3622: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c3623: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c3628: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c3628, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c3628, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c362a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
L_005c362d:; BB(0x005c362d);
    /* 005c362d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3630: cmp edx, dword ptr [ebp - 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff94u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c3633: jb 0x5c363b */ if (fC) goto L_005c363b;
L_005c3635:; BB(0x005c3635);
    /* 005c3635: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c363bu); call_ind(t); }
L_005c363b:; BB(0x005c363b);
    /* 005c363b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c363e: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c3641: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c3644: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c3647: mov dword ptr [edx + eax + 0x1c], 5 */ W32((u32)(r_edx+r_eax+0x1cu), 0x5u);
    /* 005c364f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3652: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3655: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005c3658: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c365b: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c365f: jne 0x5c366a */ if (!fZ) goto L_005c366a;
L_005c3661:; BB(0x005c3661);
    /* 005c3661: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 005c3668: jmp 0x5c3683 */ goto L_005c3683;
L_005c366a:; BB(0x005c366a);
    /* 005c366a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c366d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c3670: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c3673: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3676: mov eax, ecx */ r_eax = r_ecx;
    /* 005c3678: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c3679: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c367e: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c367e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c367e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c3680: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
L_005c3683:; BB(0x005c3683);
    /* 005c3683: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3686: cmp edx, dword ptr [ebp - 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff90u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c3689: jb 0x5c3691 */ if (fC) goto L_005c3691;
L_005c368b:; BB(0x005c368b);
    /* 005c368b: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c3691u); call_ind(t); }
L_005c3691:; BB(0x005c3691);
    /* 005c3691: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3694: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c3697: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c369a: imul edx, edx, 0x34 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x34u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c369d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005c36a0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005c36a3: fld dword ptr [ecx + 0x7c] */ FPUSH(R_F32((u32)(r_ecx+0x7cu)));
    /* 005c36a6: fstp dword ptr [eax + edx + 0x10] */ W_F32((u32)(r_eax+r_edx+0x10u), ST(0)); FPOP();
    /* 005c36aa: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c36ad: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c36b0: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005c36b3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c36b6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c36b9: cmp dword ptr [ecx + eax*4 + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c36be: jl 0x5c36cf */ if ((fS!=fO)) goto L_005c36cf;
L_005c36c0:; BB(0x005c36c0);
    /* 005c36c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c36c3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c36c6: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c36ca: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 005c36cd: jmp 0x5c36de */ goto L_005c36de;
L_005c36cf:; BB(0x005c36cf);
    /* 005c36cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c36d2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005c36d5: mov ecx, dword ptr [eax + edx*4 + 0x18] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x18u));
    /* 005c36d9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c36db: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
L_005c36de:; BB(0x005c36de);
    /* 005c36de: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c36e1: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c36e4: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005c36e7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c36ea: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c36ee: jne 0x5c36f9 */ if (!fZ) goto L_005c36f9;
L_005c36f0:; BB(0x005c36f0);
    /* 005c36f0: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005c36f7: jmp 0x5c3710 */ goto L_005c3710;
L_005c36f9:; BB(0x005c36f9);
    /* 005c36f9: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c36fc: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c36ff: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c3702: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c3705: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c3706: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c370b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c370b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c370b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c370d: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
L_005c3710:; BB(0x005c3710);
    /* 005c3710: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3713: cmp edx, dword ptr [ebp - 0x78] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff88u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c3716: jb 0x5c371e */ if (fC) goto L_005c371e;
L_005c3718:; BB(0x005c3718);
    /* 005c3718: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c371eu); call_ind(t); }
L_005c371e:; BB(0x005c371e);
    /* 005c371e: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 005c3721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3722: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c3725: imul ecx, ecx, 0x34 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x34u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c3728: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c372b: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c372e: call 0x5c42d0 */ r_esp -= 4; W32(r_esp, 0x5c3733u); f_005c42d0();
    /* 005c3733: jmp 0x5c3527 */ goto L_005c3527;
L_005c3738:; BB(0x005c3738);
    /* 005c3738: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c373b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c373d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3740: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005c3743: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3745u); call_ind(t); }
    /* 005c3745: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c3748: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c374a: je 0x5c3850 */ if (fZ) goto L_005c3850;
L_005c3750:; BB(0x005c3750);
    /* 005c3750: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 005c3754: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3756: je 0x5c3850 */ if (fZ) goto L_005c3850;
L_005c375c:; BB(0x005c375c);
    /* 005c375c: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005c3761: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005c3764: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005c376a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005c376d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c376f: mov ecx, eax */ r_ecx = r_eax;
    /* 005c3771: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005c3774: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3776u); call_ind(t); }
    /* 005c3776: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3779: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 005c377c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c377e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3781: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c3784: add eax, 0x88 */ {  u32 a = r_eax; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c378a: call 0x610e70 */ r_esp -= 4; W32(r_esp, 0x5c378fu); f_00610e70();
    /* 005c378f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3792: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3794: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005c379a: call 0x5dd400 */ r_esp -= 4; W32(r_esp, 0x5c379fu); f_005dd400();
    /* 005c379f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c37a2: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005c37a5: call 0x5c9140 */ r_esp -= 4; W32(r_esp, 0x5c37aau); f_005c9140();
    /* 005c37aa: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c37ad: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c37b0: call 0x5c9740 */ r_esp -= 4; W32(r_esp, 0x5c37b5u); f_005c9740();
    /* 005c37b5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c37b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c37ba: je 0x5c37dd */ if (fZ) goto L_005c37dd;
L_005c37bc:; BB(0x005c37bc);
    /* 005c37bc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c37bf: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c37c2: add edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c37c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37c9: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5c37ceu); f_00610980();
    /* 005c37ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c37d1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c37d3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c37d6: call 0x5c3110 */ r_esp -= 4; W32(r_esp, 0x5c37dbu); f_005c3110();
    /* 005c37db: jmp 0x5c3850 */ goto L_005c3850;
L_005c37dd:; BB(0x005c37dd);
    /* 005c37dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c37df: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c37e2: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 005c37e5: add ecx, 0x88 */ {  u32 a = r_ecx; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c37eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37ec: call 0x610e70 */ r_esp -= 4; W32(r_esp, 0x5c37f1u); f_00610e70();
    /* 005c37f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c37f4: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c37f7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005c37fa: call 0x5be3f0 */ r_esp -= 4; W32(r_esp, 0x5c37ffu); f_005be3f0();
    /* 005c37ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c3801: jle 0x5c3846 */ if ((fZ||fS!=fO)) goto L_005c3846;
L_005c3803:; BB(0x005c3803);
    /* 005c3803: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3806: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005c3809: call 0x5c9940 */ r_esp -= 4; W32(r_esp, 0x5c380eu); f_005c9940();
    /* 005c380e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005c3811: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3813: je 0x5c3825 */ if (fZ) goto L_005c3825;
L_005c3815:; BB(0x005c3815);
    /* 005c3815: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3818: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 005c381b: add eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3820: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005c3823: jmp 0x5c3834 */ goto L_005c3834;
L_005c3825:; BB(0x005c3825);
    /* 005c3825: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3828: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 005c382b: add edx, 0xa8 */ {  u32 a = r_edx; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3831: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
L_005c3834:; BB(0x005c3834);
    /* 005c3834: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005c3837: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c383a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c383d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c383e: call 0x610980 */ r_esp -= 4; W32(r_esp, 0x5c3843u); f_00610980();
    /* 005c3843: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c3846:; BB(0x005c3846);
    /* 005c3846: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3848: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c384b: call 0x5c3110 */ r_esp -= 4; W32(r_esp, 0x5c3850u); f_005c3110();
L_005c3850:; BB(0x005c3850);
    /* 005c3850: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c3853: call 0x5c1b60 */ r_esp -= 4; W32(r_esp, 0x5c3858u); f_005c1b60();
    /* 005c3858: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c385a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005c385d: call 0x5c1d60 */ r_esp -= 4; W32(r_esp, 0x5c3862u); f_005c1d60();
    /* 005c3862: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3864: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3865: ret  */ FN_RET(0x005c32b0); r_esp += 4; return;
}

void f_005c43f0(void) /* MLVSlotDisplay_Scroller::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c43f0);
    /* 005c43f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c43f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c43f3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c43f6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005c43f9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c43fc: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c43ff: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c4402: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c4405: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4409: jne 0x5c4414 */ if (!fZ) goto L_005c4414;
L_005c440b:; BB(0x005c440b);
    /* 005c440b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005c4412: jmp 0x5c4426 */ goto L_005c4426;
L_005c4414:; BB(0x005c4414);
    /* 005c4414: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c4417: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c441a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c441d: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4420: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005c4423: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_005c4426:; BB(0x005c4426);
    /* 005c4426: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4429: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c442c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c4433: jmp 0x5c443e */ goto L_005c443e;
L_005c4435:; BB(0x005c4435);
    /* 005c4435: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4438: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c443b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005c443e:; BB(0x005c443e);
    /* 005c443e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4441: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4444: jge 0x5c44f0 */ if ((fS==fO)) goto L_005c44f0;
L_005c444a:; BB(0x005c444a);
    /* 005c444a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c444d: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c4450: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c4453: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4456: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c445a: jne 0x5c4465 */ if (!fZ) goto L_005c4465;
L_005c445c:; BB(0x005c445c);
    /* 005c445c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005c4463: jmp 0x5c4477 */ goto L_005c4477;
L_005c4465:; BB(0x005c4465);
    /* 005c4465: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4468: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c446b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c446e: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4471: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c4474: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005c4477:; BB(0x005c4477);
    /* 005c4477: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c447a: cmp ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c447d: jb 0x5c4485 */ if (fC) goto L_005c4485;
L_005c447f:; BB(0x005c447f);
    /* 005c447f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c4485u); call_ind(t); }
L_005c4485:; BB(0x005c4485);
    /* 005c4485: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4488: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c448b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c448e: cmp dword ptr [eax + ecx*4], 0 */ {  u32 a = R32((u32)(r_eax+r_ecx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4492: je 0x5c44eb */ if (fZ) goto L_005c44eb;
L_005c4494:; BB(0x005c4494);
    /* 005c4494: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c4497: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c449a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c449d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c44a0: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c44a4: jne 0x5c44af */ if (!fZ) goto L_005c44af;
L_005c44a6:; BB(0x005c44a6);
    /* 005c44a6: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005c44ad: jmp 0x5c44c1 */ goto L_005c44c1;
L_005c44af:; BB(0x005c44af);
    /* 005c44af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c44b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c44b5: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c44b8: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c44bb: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005c44be: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_005c44c1:; BB(0x005c44c1);
    /* 005c44c1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c44c4: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c44c7: jb 0x5c44cf */ if (fC) goto L_005c44cf;
L_005c44c9:; BB(0x005c44c9);
    /* 005c44c9: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c44cfu); call_ind(t); }
L_005c44cf:; BB(0x005c44cf);
    /* 005c44cf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c44d2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005c44d5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c44d8: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005c44db: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005c44de: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005c44e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005c44e3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005c44e6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c44e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c44ebu); call_ind(t); }
L_005c44eb:; BB(0x005c44eb);
    /* 005c44eb: jmp 0x5c4435 */ goto L_005c4435;
L_005c44f0:; BB(0x005c44f0);
    /* 005c44f0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c44f3: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c44f6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c44f9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c44fc: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4500: jne 0x5c450b */ if (!fZ) goto L_005c450b;
L_005c4502:; BB(0x005c4502);
    /* 005c4502: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005c4509: jmp 0x5c4522 */ goto L_005c4522;
L_005c450b:; BB(0x005c450b);
    /* 005c450b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c450e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c4511: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005c4514: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c4517: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c4518: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c451d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c451d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c451d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c451f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_005c4522:; BB(0x005c4522);
    /* 005c4522: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005c4525: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c4528: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c452f: jmp 0x5c453a */ goto L_005c453a;
L_005c4531:; BB(0x005c4531);
    /* 005c4531: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4534: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4537: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005c453a:; BB(0x005c453a);
    /* 005c453a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c453d: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4540: jge 0x5c4600 */ if ((fS==fO)) goto L_005c4600;
L_005c4546:; BB(0x005c4546);
    /* 005c4546: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c4549: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c454c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005c454f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4552: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4556: jne 0x5c4561 */ if (!fZ) goto L_005c4561;
L_005c4558:; BB(0x005c4558);
    /* 005c4558: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005c455f: jmp 0x5c4578 */ goto L_005c4578;
L_005c4561:; BB(0x005c4561);
    /* 005c4561: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4564: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4567: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c456a: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c456d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c456e: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c4573: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c4573, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c4573, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c4575: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_005c4578:; BB(0x005c4578);
    /* 005c4578: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c457b: cmp edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c457e: jb 0x5c4586 */ if (fC) goto L_005c4586;
L_005c4580:; BB(0x005c4580);
    /* 005c4580: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c4586u); call_ind(t); }
L_005c4586:; BB(0x005c4586);
    /* 005c4586: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4589: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c458c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c458f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c4592: cmp dword ptr [edx + eax + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4597: je 0x5c45fb */ if (fZ) goto L_005c45fb;
L_005c4599:; BB(0x005c4599);
    /* 005c4599: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c459c: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c459f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005c45a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c45a5: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c45a9: jne 0x5c45b4 */ if (!fZ) goto L_005c45b4;
L_005c45ab:; BB(0x005c45ab);
    /* 005c45ab: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005c45b2: jmp 0x5c45cd */ goto L_005c45cd;
L_005c45b4:; BB(0x005c45b4);
    /* 005c45b4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c45b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c45ba: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c45bd: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c45c0: mov eax, ecx */ r_eax = r_ecx;
    /* 005c45c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c45c3: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c45c8: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c45c8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c45c8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c45ca: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_005c45cd:; BB(0x005c45cd);
    /* 005c45cd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c45d0: cmp edx, dword ptr [ebp - 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c45d3: jb 0x5c45db */ if (fC) goto L_005c45db;
L_005c45d5:; BB(0x005c45d5);
    /* 005c45d5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c45dbu); call_ind(t); }
L_005c45db:; BB(0x005c45db);
    /* 005c45db: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c45de: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c45e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c45e4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c45e7: mov eax, dword ptr [edx + eax + 0x30] */ r_eax = R32((u32)(r_edx+r_eax+0x30u));
    /* 005c45eb: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005c45ee: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c45f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c45f3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005c45f6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005c45f9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c45fbu); call_ind(t); }
L_005c45fb:; BB(0x005c45fb);
    /* 005c45fb: jmp 0x5c4531 */ goto L_005c4531;
L_005c4600:; BB(0x005c4600);
    /* 005c4600: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4602: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c4605: call 0x5c3110 */ r_esp -= 4; W32(r_esp, 0x5c460au); f_005c3110();
    /* 005c460a: mov esp, ebp */ r_esp = r_ebp;
    /* 005c460c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c460d: ret  */ FN_RET(0x005c43f0); r_esp += 4; return;
}

void f_005c4610(void) /* MLVSlotDisplay_Scroller::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4610);
    /* 005c4610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4611: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4613: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4616: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005c4619: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c461c: call 0x5c1b10 */ r_esp -= 4; W32(r_esp, 0x5c4621u); f_005c1b10();
    /* 005c4621: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c4624: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c4627: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005c462a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c462d: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4631: jne 0x5c463c */ if (!fZ) goto L_005c463c;
L_005c4633:; BB(0x005c4633);
    /* 005c4633: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005c463a: jmp 0x5c4655 */ goto L_005c4655;
L_005c463c:; BB(0x005c463c);
    /* 005c463c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c463f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c4642: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c4645: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c4648: mov eax, ecx */ r_eax = r_ecx;
    /* 005c464a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c464b: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c4650: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c4650, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c4650, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c4652: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005c4655:; BB(0x005c4655);
    /* 005c4655: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c4658: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005c465b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c4662: jmp 0x5c466d */ goto L_005c466d;
L_005c4664:; BB(0x005c4664);
    /* 005c4664: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4667: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c466a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005c466d:; BB(0x005c466d);
    /* 005c466d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4670: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4673: jge 0x5c4733 */ if ((fS==fO)) goto L_005c4733;
L_005c4679:; BB(0x005c4679);
    /* 005c4679: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c467c: add edx, 0x58 */ {  u32 a = r_edx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c467f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005c4682: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4685: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4689: jne 0x5c4694 */ if (!fZ) goto L_005c4694;
L_005c468b:; BB(0x005c468b);
    /* 005c468b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 005c4692: jmp 0x5c46ab */ goto L_005c46ab;
L_005c4694:; BB(0x005c4694);
    /* 005c4694: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c4697: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c469a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005c469d: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c46a0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c46a1: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c46a6: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c46a6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c46a6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c46a8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_005c46ab:; BB(0x005c46ab);
    /* 005c46ab: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c46ae: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c46b1: jb 0x5c46b9 */ if (fC) goto L_005c46b9;
L_005c46b3:; BB(0x005c46b3);
    /* 005c46b3: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c46b9u); call_ind(t); }
L_005c46b9:; BB(0x005c46b9);
    /* 005c46b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c46bc: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c46bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005c46c2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c46c5: cmp dword ptr [edx + eax + 0x30], 0 */ {  u32 a = R32((u32)(r_edx+r_eax+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c46ca: je 0x5c472e */ if (fZ) goto L_005c472e;
L_005c46cc:; BB(0x005c46cc);
    /* 005c46cc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c46cf: add eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c46d2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c46d5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c46d8: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c46dc: jne 0x5c46e7 */ if (!fZ) goto L_005c46e7;
L_005c46de:; BB(0x005c46de);
    /* 005c46de: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005c46e5: jmp 0x5c4700 */ goto L_005c4700;
L_005c46e7:; BB(0x005c46e7);
    /* 005c46e7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c46ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c46ed: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005c46f0: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005c46f3: mov eax, ecx */ r_eax = r_ecx;
    /* 005c46f5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005c46f6: mov ecx, 0x34 */ r_ecx = 0x34u;
    /* 005c46fb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005c46fb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c46fb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c46fd: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_005c4700:; BB(0x005c4700);
    /* 005c4700: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4703: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c4706: jb 0x5c470e */ if (fC) goto L_005c470e;
L_005c4708:; BB(0x005c4708);
    /* 005c4708: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5c470eu); call_ind(t); }
L_005c470e:; BB(0x005c470e);
    /* 005c470e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005c4711: imul eax, eax, 0x34 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x34u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c4714: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c4717: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005c471a: mov eax, dword ptr [edx + eax + 0x30] */ r_eax = R32((u32)(r_edx+r_eax+0x30u));
    /* 005c471e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005c4721: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4724: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c4726: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c4729: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005c472c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c472eu); call_ind(t); }
L_005c472e:; BB(0x005c472e);
    /* 005c472e: jmp 0x5c4664 */ goto L_005c4664;
L_005c4733:; BB(0x005c4733);
    /* 005c4733: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c4735: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c4738: call 0x5c3110 */ r_esp -= 4; W32(r_esp, 0x5c473du); f_005c3110();
    /* 005c473d: mov esp, ebp */ r_esp = r_ebp;
    /* 005c473f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4740: ret  */ FN_RET(0x005c4610); r_esp += 4; return;
}

void f_005c4800(void) /* MLVSlotDisplay_Scroller::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4800);
    /* 005c4800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4801: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4803: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4806: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4809: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c480c: cmp dword ptr [eax + 0x54], 1 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4810: je 0x5c4824 */ if (fZ) goto L_005c4824;
L_005c4812:; BB(0x005c4812);
    /* 005c4812: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4815: cmp dword ptr [ecx + 0x54], 2 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4819: je 0x5c4824 */ if (fZ) goto L_005c4824;
L_005c481b:; BB(0x005c481b);
    /* 005c481b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c4822: jmp 0x5c482b */ goto L_005c482b;
L_005c4824:; BB(0x005c4824);
    /* 005c4824: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005c482b:; BB(0x005c482b);
    /* 005c482b: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005c482e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4830: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4831: ret  */ FN_RET(0x005c4800); r_esp += 4; return;
}

void f_005c4840(void) /* MLVSlotDisplay_Scroller::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4840);
    /* 005c4840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4841: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4846: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4849: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c484c: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 005c484f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005c4852: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c4856: jl 0x5c4864 */ if ((fS!=fO)) goto L_005c4864;
L_005c4858:; BB(0x005c4858);
    /* 005c4858: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c485c: jle 0x5c4860 */ if ((fZ||fS!=fO)) goto L_005c4860;
L_005c485e:; BB(0x005c485e);
    /* 005c485e: jmp 0x5c4864 */ goto L_005c4864;
L_005c4860:; BB(0x005c4860);
    /* 005c4860: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005c4862: jmp 0x5c4866 */ goto L_005c4866;
L_005c4864:; BB(0x005c4864);
    /* 005c4864: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005c4866:; BB(0x005c4866);
    /* 005c4866: mov esp, ebp */ r_esp = r_ebp;
    /* 005c4868: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c4869: ret  */ FN_RET(0x005c4840); r_esp += 4; return;
}

void f_005c4870(void) /* MLVSlotDisplay_Scroller::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c4870);
    /* 005c4870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c4871: mov ebp, esp */ r_ebp = r_esp;
    /* 005c4873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c4876: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c4879: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c487c: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4880: je 0x5c4894 */ if (fZ) goto L_005c4894;
L_005c4882:; BB(0x005c4882);
    /* 005c4882: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c4885: cmp dword ptr [ecx + 0x54], 3 */ {  u32 a = R32((u32)(r_ecx+0x54u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c4889: je 0x5c4894 */ if (fZ) goto L_005c4894;
L_005c488b:; BB(0x005c488b);
    /* 005c488b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005c4892: jmp 0x5c489b */ goto L_005c489b;
L_005c4894:; BB(0x005c4894);
    /* 005c4894: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_005c489b:; BB(0x005c489b);
    /* 005c489b: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005c489e: mov esp, ebp */ r_esp = r_ebp;
    /* 005c48a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c48a1: ret  */ FN_RET(0x005c4870); r_esp += 4; return;
}

void f_005c48b0(void) /* MLVSlotDisplay_Scroller::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005c48b0);
    /* 005c48b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c48b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005c48b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c48b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005c48b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005c48ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c48bc: cmp dword ptr [eax + 0x54], 4 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c48c0: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005c48c3: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005c48c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005c48c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c48c8: ret  */ FN_RET(0x005c48b0); r_esp += 4; return;
}

