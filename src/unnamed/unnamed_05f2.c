#include "protos.h"

void f_005f2300(void) /* sub_5F2300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2300);
    /* 005f2300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2301: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2303: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2306: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f2309: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2310: jmp 0x5f231b */ goto L_005f231b;
L_005f2312:; BB(0x005f2312);
    /* 005f2312: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2315: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2318: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f231b:; BB(0x005f231b);
    /* 005f231b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f231e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2321: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f2326u); f_0060c9a0();
    /* 005f2326: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f2329: jge 0x5f2364 */ if ((fS==fO)) goto L_005f2364;
L_005f232b:; BB(0x005f232b);
    /* 005f232b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f232e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f232f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2332: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2335: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f233au); f_0060ca40();
    /* 005f233a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f233d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2340: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 005f2346: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f2349: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f234c: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f234f: jne 0x5f2362 */ if (!fZ) goto L_005f2362;
L_005f2351:; BB(0x005f2351);
    /* 005f2351: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2354: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2355: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2358: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f235b: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f2360u); f_0060ca40();
    /* 005f2360: jmp 0x5f2366 */ goto L_005f2366;
L_005f2362:; BB(0x005f2362);
    /* 005f2362: jmp 0x5f2312 */ goto L_005f2312;
L_005f2364:; BB(0x005f2364);
    /* 005f2364: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f2366:; BB(0x005f2366);
    /* 005f2366: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2368: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2369: ret 4 */ FN_RET(0x005f2300); r_esp += 8; return;
}

void f_005f2370(void) /* sub_5F2370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2370);
    /* 005f2370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2371: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2373: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2375: push 0x6a9e12 */ { u32 v = 0x6a9e12u; r_esp -= 4; W32(r_esp, v); }
    /* 005f237a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2381: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2384: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f2389: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f238b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f238c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f238f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f2395: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005f2398: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f239b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f239c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f239f: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x5f23a4u); f_005f2300();
    /* 005f23a4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f23a7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f23ab: je 0x5f23e1 */ if (fZ) goto L_005f23e1;
L_005f23ad:; BB(0x005f23ad);
    /* 005f23ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f23b0: call 0x5f8970 */ r_esp -= 4; W32(r_esp, 0x5f23b5u); f_005f8970();
    /* 005f23b5: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f23b8: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005f23bc: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f23be: jne 0x5f23ce */ if (!fZ) goto L_005f23ce;
L_005f23c0:; BB(0x005f23c0);
    /* 005f23c0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f23c3: mov ecx, dword ptr [eax + 0x1b4] */ r_ecx = R32((u32)(r_eax+0x1b4u));
    /* 005f23c9: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f23cc: je 0x5f23dc */ if (fZ) goto L_005f23dc;
L_005f23ce:; BB(0x005f23ce);
    /* 005f23ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f23d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f23d2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f23d5: call 0x5f25d0 */ r_esp -= 4; W32(r_esp, 0x5f23dau); f_005f25d0();
    /* 005f23da: jmp 0x5f23e1 */ goto L_005f23e1;
L_005f23dc:; BB(0x005f23dc);
    /* 005f23dc: jmp 0x5f2480 */ goto L_005f2480;
L_005f23e1:; BB(0x005f23e1);
    /* 005f23e1: push 0x358 */ { u32 v = 0x358u; r_esp -= 4; W32(r_esp, v); }
    /* 005f23e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f23ebu); f_00686d82();
    /* 005f23eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f23ee: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f23f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f23f8: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f23fc: je 0x5f241c */ if (fZ) goto L_005f241c;
L_005f23fe:; BB(0x005f23fe);
    /* 005f23fe: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f2403: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f2406: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2407: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005f240a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f240b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f240e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f240f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f2412: call 0x5fd860 */ r_esp -= 4; W32(r_esp, 0x5f2417u); f_005fd860();
    /* 005f2417: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f241a: jmp 0x5f2423 */ goto L_005f2423;
L_005f241c:; BB(0x005f241c);
    /* 005f241c: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005f2423:; BB(0x005f2423);
    /* 005f2423: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2426: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f2429: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f2430: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2433: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f2436: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2439: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f243a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f243d: call 0x5fdc10 */ r_esp -= 4; W32(r_esp, 0x5f2442u); f_005fdc10();
    /* 005f2442: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2445: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2446: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f2449: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f244c: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5f2451u); f_0060c840();
    /* 005f2451: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f2454: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2455: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2459: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f245c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f245e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f2461: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005f2464: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2466u); call_ind(t); }
    /* 005f2466: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f2469: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f246a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f246d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f246e: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f2473: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f2475: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f247b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f247e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2480u); call_ind(t); }
L_005f2480:; BB(0x005f2480);
    /* 005f2480: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2483: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f248a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f248b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f248d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f248e: ret 0xc */ FN_RET(0x005f2370); r_esp += 16; return;
}

void f_005f24a0(void) /* sub_5F24A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f24a0);
    /* 005f24a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f24a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f24a3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f24a6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005f24a9:; BB(0x005f24a9);
    /* 005f24a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f24ac: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f24af: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f24b4u); f_0060c9a0();
    /* 005f24b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f24b6: je 0x5f2564 */ if (fZ) goto L_005f2564;
L_005f24bc:; BB(0x005f24bc);
    /* 005f24bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f24be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f24c1: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f24c4: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f24c9u); f_0060ca40();
    /* 005f24c9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f24cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f24d3: jmp 0x5f24de */ goto L_005f24de;
L_005f24d5:; BB(0x005f24d5);
    /* 005f24d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f24d8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f24db: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f24de:; BB(0x005f24de);
    /* 005f24de: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f24e4: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f24e7: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f24ea: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f24efu); f_0060c9a0();
    /* 005f24ef: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f24f2: jge 0x5f2524 */ if ((fS==fO)) goto L_005f2524;
L_005f24f4:; BB(0x005f24f4);
    /* 005f24f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f24f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f24f8: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f24fd: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f2500: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2503: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f2508u); f_0060ca40();
    /* 005f2508: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f250b: jne 0x5f2522 */ if (!fZ) goto L_005f2522;
L_005f250d:; BB(0x005f250d);
    /* 005f250d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2510: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2511: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f2517: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005f251a: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f251d: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f2522u); f_0060c890();
L_005f2522:; BB(0x005f2522);
    /* 005f2522: jmp 0x5f24d5 */ goto L_005f24d5;
L_005f2524:; BB(0x005f2524);
    /* 005f2524: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2528: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f252b: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f252e: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f2533u); f_0060c890();
    /* 005f2533: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2536: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f2539: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f253c: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f253f: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2543: je 0x5f2558 */ if (fZ) goto L_005f2558;
L_005f2545:; BB(0x005f2545);
    /* 005f2545: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2547: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f254a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f254c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f254f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f2551: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2553u); call_ind(t); }
    /* 005f2553: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f2556: jmp 0x5f255f */ goto L_005f255f;
L_005f2558:; BB(0x005f2558);
    /* 005f2558: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f255f:; BB(0x005f255f);
    /* 005f255f: jmp 0x5f24a9 */ goto L_005f24a9;
L_005f2564:; BB(0x005f2564);
    /* 005f2564: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2567: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f256a: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f256fu); f_0060c9a0();
    /* 005f256f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2571: je 0x5f25c0 */ if (fZ) goto L_005f25c0;
L_005f2573:; BB(0x005f2573);
    /* 005f2573: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2575: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f2578: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f257b: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f2580u); f_0060ca40();
    /* 005f2580: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f2583: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2586: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2587: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f258a: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f258d: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f2592u); f_0060c890();
    /* 005f2592: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2595: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005f2598: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f259b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f259e: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f25a2: je 0x5f25b7 */ if (fZ) goto L_005f25b7;
L_005f25a4:; BB(0x005f25a4);
    /* 005f25a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f25a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f25a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f25ab: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f25ae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f25b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f25b2u); call_ind(t); }
    /* 005f25b2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f25b5: jmp 0x5f25be */ goto L_005f25be;
L_005f25b7:; BB(0x005f25b7);
    /* 005f25b7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005f25be:; BB(0x005f25be);
    /* 005f25be: jmp 0x5f2564 */ goto L_005f2564;
L_005f25c0:; BB(0x005f25c0);
    /* 005f25c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005f25c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f25c3: ret  */ FN_RET(0x005f24a0); r_esp += 4; return;
}

void f_005f25d0(void) /* sub_5F25D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f25d0);
    /* 005f25d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f25d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f25d3: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f25d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f25d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f25e0: jmp 0x5f25eb */ goto L_005f25eb;
L_005f25e2:; BB(0x005f25e2);
    /* 005f25e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f25e5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f25e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f25eb:; BB(0x005f25eb);
    /* 005f25eb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f25ee: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f25f1: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f25f6u); f_0060c9a0();
    /* 005f25f6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f25f9: jge 0x5f2660 */ if ((fS==fO)) goto L_005f2660;
L_005f25fb:; BB(0x005f25fb);
    /* 005f25fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f25fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f25ff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f2602: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2605: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f260au); f_0060ca40();
    /* 005f260a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f260d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2610: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 005f2616: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f2619: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f261c: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f261f: jne 0x5f265e */ if (!fZ) goto L_005f265e;
L_005f2621:; BB(0x005f2621);
    /* 005f2621: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2624: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2625: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f2628: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f262b: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f2630u); f_0060c890();
    /* 005f2630: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2633: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f2636: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2639: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f263c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2640: je 0x5f2655 */ if (fZ) goto L_005f2655;
L_005f2642:; BB(0x005f2642);
    /* 005f2642: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2644: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2647: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f2649: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f264c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f264e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f2650u); call_ind(t); }
    /* 005f2650: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f2653: jmp 0x5f265c */ goto L_005f265c;
L_005f2655:; BB(0x005f2655);
    /* 005f2655: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005f265c:; BB(0x005f265c);
    /* 005f265c: jmp 0x5f2660 */ goto L_005f2660;
L_005f265e:; BB(0x005f265e);
    /* 005f265e: jmp 0x5f25e2 */ goto L_005f25e2;
L_005f2660:; BB(0x005f2660);
    /* 005f2660: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2662: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2663: ret 4 */ FN_RET(0x005f25d0); r_esp += 8; return;
}

void f_005f2670(void) /* sub_5F2670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2670);
    /* 005f2670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2671: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2673: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2675: push 0x6a9e38 */ { u32 v = 0x6a9e38u; r_esp -= 4; W32(r_esp, v); }
    /* 005f267a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f2680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2681: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2684: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f2689: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f268b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f268c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f268f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f2695: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005f2698: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005f269f: jmp 0x5f26aa */ goto L_005f26aa;
L_005f26a1:; BB(0x005f26a1);
    /* 005f26a1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f26a4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f26a7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005f26aa:; BB(0x005f26aa);
    /* 005f26aa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f26ad: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f26b0: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f26b5u); f_0060c9a0();
    /* 005f26b5: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f26b8: jge 0x5f2753 */ if ((fS==fO)) goto L_005f2753;
L_005f26be:; BB(0x005f26be);
    /* 005f26be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f26c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f26c2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f26c5: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f26c8: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f26cdu); f_0060ca40();
    /* 005f26cd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f26d0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f26d3: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 005f26d9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005f26dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f26df: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f26e2: jne 0x5f274e */ if (!fZ) goto L_005f274e;
L_005f26e4:; BB(0x005f26e4);
    /* 005f26e4: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f26e8: je 0x5f2702 */ if (fZ) goto L_005f2702;
L_005f26ea:; BB(0x005f26ea);
    /* 005f26ea: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f26ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f26ee: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f26f1: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f26f4: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f26f9u); f_0060ca40();
    /* 005f26f9: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f26fc: mov dword ptr [eax + 0x1bc], ecx */ W32((u32)(r_eax+0x1bcu), r_ecx);
L_005f2702:; BB(0x005f2702);
    /* 005f2702: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f2705: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2706: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f2709: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f270a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f270d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f270e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2711: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2712: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f2715: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2718: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f271du); f_0060ca40();
    /* 005f271d: mov ecx, eax */ r_ecx = r_eax;
    /* 005f271f: call 0x5fddf0 */ r_esp -= 4; W32(r_esp, 0x5f2724u); f_005fddf0();
    /* 005f2724: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f2727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2728: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f272b: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f272e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f2733u); f_0060ca40();
    /* 005f2733: mov ecx, eax */ r_ecx = r_eax;
    /* 005f2735: call 0x5fedc0 */ r_esp -= 4; W32(r_esp, 0x5f273au); f_005fedc0();
    /* 005f273a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f273d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f273e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f2741: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2744: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f2749u); f_0060ca40();
    /* 005f2749: jmp 0x5f2822 */ goto L_005f2822;
L_005f274e:; BB(0x005f274e);
    /* 005f274e: jmp 0x5f26a1 */ goto L_005f26a1;
L_005f2753:; BB(0x005f2753);
    /* 005f2753: push 0x358 */ { u32 v = 0x358u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2758: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f275du); f_00686d82();
    /* 005f275d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f2760: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f2763: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f276a: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f276e: je 0x5f278d */ if (fZ) goto L_005f278d;
L_005f2770:; BB(0x005f2770);
    /* 005f2770: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f2776: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f2779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f277a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f277c: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 005f277f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2780: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f2783: call 0x5fd860 */ r_esp -= 4; W32(r_esp, 0x5f2788u); f_005fd860();
    /* 005f2788: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005f278b: jmp 0x5f2794 */ goto L_005f2794;
L_005f278d:; BB(0x005f278d);
    /* 005f278d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005f2794:; BB(0x005f2794);
    /* 005f2794: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f2797: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f279a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f27a1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f27a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f27a7: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f27ab: je 0x5f27b9 */ if (fZ) goto L_005f27b9;
L_005f27ad:; BB(0x005f27ad);
    /* 005f27ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f27b0: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005f27b3: mov dword ptr [ecx + 0x1bc], edx */ W32((u32)(r_ecx+0x1bcu), r_edx);
L_005f27b9:; BB(0x005f27b9);
    /* 005f27b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f27bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f27bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f27c0: call 0x5fdc10 */ r_esp -= 4; W32(r_esp, 0x5f27c5u); f_005fdc10();
    /* 005f27c5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f27c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f27c9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f27cc: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f27cf: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5f27d4u); f_0060c840();
    /* 005f27d4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f27d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f27d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f27db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f27dc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f27df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f27e1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f27e4: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005f27e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f27e9u); call_ind(t); }
    /* 005f27e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f27ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f27ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f27f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f27f1: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f27f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f27f8: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f27fe: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f2801: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2803u); call_ind(t); }
    /* 005f2803: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 005f2806: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2807: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f280a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f280b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f280e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f280f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2812: call 0x5fddf0 */ r_esp -= 4; W32(r_esp, 0x5f2817u); f_005fddf0();
    /* 005f2817: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f281a: call 0x5fedc0 */ r_esp -= 4; W32(r_esp, 0x5f281fu); f_005fedc0();
    /* 005f281f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_005f2822:; BB(0x005f2822);
    /* 005f2822: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2825: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f282c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f282d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f282f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2830: ret 0x18 */ FN_RET(0x005f2670); r_esp += 28; return;
}

void f_005f2840(void) /* sub_5F2840 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2840);
    /* 005f2840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2841: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2843: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2846: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f2849: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f284c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f284d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2850: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x5f2855u); f_005f2300();
    /* 005f2855: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f2858: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f285c: je 0x5f2866 */ if (fZ) goto L_005f2866;
L_005f285e:; BB(0x005f285e);
    /* 005f285e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2861: call 0x5fef90 */ r_esp -= 4; W32(r_esp, 0x5f2866u); f_005fef90();
L_005f2866:; BB(0x005f2866);
    /* 005f2866: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2868: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2869: ret 4 */ FN_RET(0x005f2840); r_esp += 8; return;
}

void f_005f2870(void) /* sub_5F2870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2870);
    /* 005f2870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2871: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2876: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f2879: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2880: jmp 0x5f288b */ goto L_005f288b;
L_005f2882:; BB(0x005f2882);
    /* 005f2882: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2885: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2888: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f288b:; BB(0x005f288b);
    /* 005f288b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f288e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2891: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f2896u); f_0060c9a0();
    /* 005f2896: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f2899: jge 0x5f28b3 */ if ((fS==fO)) goto L_005f28b3;
L_005f289b:; BB(0x005f289b);
    /* 005f289b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f289e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f289f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f28a2: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f28a5: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f28aau); f_0060ca40();
    /* 005f28aa: mov ecx, eax */ r_ecx = r_eax;
    /* 005f28ac: call 0x5fef90 */ r_esp -= 4; W32(r_esp, 0x5f28b1u); f_005fef90();
    /* 005f28b1: jmp 0x5f2882 */ goto L_005f2882;
L_005f28b3:; BB(0x005f28b3);
    /* 005f28b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f28b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f28b6: ret  */ FN_RET(0x005f2870); r_esp += 4; return;
}

void f_005f28c0(void) /* sub_5F28C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f28c0);
    /* 005f28c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f28c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f28c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f28c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f28c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f28cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f28cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f28d0: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x5f28d5u); f_005f2300();
    /* 005f28d5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f28d8: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f28dc: je 0x5f2912 */ if (fZ) goto L_005f2912;
L_005f28de:; BB(0x005f28de);
    /* 005f28de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f28e5: jmp 0x5f28f0 */ goto L_005f28f0;
L_005f28e7:; BB(0x005f28e7);
    /* 005f28e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f28ea: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f28ed: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f28f0:; BB(0x005f28f0);
    /* 005f28f0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f28f3: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5f28f8u); f_005feda0();
    /* 005f28f8: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f28fb: jge 0x5f2912 */ if ((fS==fO)) goto L_005f2912;
L_005f28fd:; BB(0x005f28fd);
    /* 005f28fd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2901: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2904: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5f2909u); f_005ff080();
    /* 005f2909: mov ecx, eax */ r_ecx = r_eax;
    /* 005f290b: call 0x5fd410 */ r_esp -= 4; W32(r_esp, 0x5f2910u); f_005fd410();
    /* 005f2910: jmp 0x5f28e7 */ goto L_005f28e7;
L_005f2912:; BB(0x005f2912);
    /* 005f2912: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2915: ret 4 */ FN_RET(0x005f28c0); r_esp += 8; return;
}

void f_005f2920(void) /* sub_5F2920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2920);
    /* 005f2920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2921: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2923: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f2929: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f292c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f292d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2930: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x5f2935u); f_005f2300();
    /* 005f2935: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f2938: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f293c: je 0x5f294b */ if (fZ) goto L_005f294b;
L_005f293e:; BB(0x005f293e);
    /* 005f293e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2941: call 0x5f8910 */ r_esp -= 4; W32(r_esp, 0x5f2946u); f_005f8910();
    /* 005f2946: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 005f2949: jmp 0x5f294f */ goto L_005f294f;
L_005f294b:; BB(0x005f294b);
    /* 005f294b: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
L_005f294f:; BB(0x005f294f);
    /* 005f294f: mov al, byte ptr [ebp - 9] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 005f2952: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2954: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2955: ret 4 */ FN_RET(0x005f2920); r_esp += 8; return;
}

void f_005f2a60(void) /* sub_5F2A60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2a60);
    /* 005f2a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a61: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2a63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2a66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f2a69: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2a70: jmp 0x5f2a7b */ goto L_005f2a7b;
L_005f2a72:; BB(0x005f2a72);
    /* 005f2a72: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2a75: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2a78: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f2a7b:; BB(0x005f2a7b);
    /* 005f2a7b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2a7e: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2a81: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f2a86u); f_0060c9a0();
    /* 005f2a86: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f2a89: jge 0x5f2ad6 */ if ((fS==fO)) goto L_005f2ad6;
L_005f2a8b:; BB(0x005f2a8b);
    /* 005f2a8b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f2a8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2a92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2a96: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2a99: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f2a9eu); f_0060ca40();
    /* 005f2a9e: mov ecx, eax */ r_ecx = r_eax;
    /* 005f2aa0: call 0x5ff060 */ r_esp -= 4; W32(r_esp, 0x5f2aa5u); f_005ff060();
    /* 005f2aa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2aa7: je 0x5f2ad4 */ if (fZ) goto L_005f2ad4;
L_005f2aa9:; BB(0x005f2aa9);
    /* 005f2aa9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2aad: jne 0x5f2acb */ if (!fZ) goto L_005f2acb;
L_005f2aaf:; BB(0x005f2aaf);
    /* 005f2aaf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2ab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ab3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2ab6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ab7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2aba: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2abd: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f2ac2u); f_0060ca40();
    /* 005f2ac2: mov ecx, eax */ r_ecx = r_eax;
    /* 005f2ac4: call 0x5ff060 */ r_esp -= 4; W32(r_esp, 0x5f2ac9u); f_005ff060();
    /* 005f2ac9: jmp 0x5f2ad8 */ goto L_005f2ad8;
L_005f2acb:; BB(0x005f2acb);
    /* 005f2acb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f2ace: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f2ad1: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_005f2ad4:; BB(0x005f2ad4);
    /* 005f2ad4: jmp 0x5f2a72 */ goto L_005f2a72;
L_005f2ad6:; BB(0x005f2ad6);
    /* 005f2ad6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f2ad8:; BB(0x005f2ad8);
    /* 005f2ad8: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2ada: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2adb: ret 8 */ FN_RET(0x005f2a60); r_esp += 12; return;
}

void f_005f2ae0(void) /* sub_5F2AE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2ae0);
    /* 005f2ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2ae3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2ae6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f2ae9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2aeb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f2aee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2aef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2af2: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5f2af7u); f_005f2a60();
    /* 005f2af7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f2afa: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2afe: je 0x5f2b16 */ if (fZ) goto L_005f2b16;
L_005f2b00:; BB(0x005f2b00);
    /* 005f2b00: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f2b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b04: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f2b07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b08: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2b0b: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 005f2b11: call 0x5fdff0 */ r_esp -= 4; W32(r_esp, 0x5f2b16u); f_005fdff0();
L_005f2b16:; BB(0x005f2b16);
    /* 005f2b16: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2b18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2b19: ret 8 */ FN_RET(0x005f2ae0); r_esp += 12; return;
}

void f_005f2b20(void) /* sub_5F2B20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2b20);
    /* 005f2b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b21: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2b23: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2b26: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f2b29: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2b30: jmp 0x5f2b3b */ goto L_005f2b3b;
L_005f2b32:; BB(0x005f2b32);
    /* 005f2b32: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2b35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2b38: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f2b3b:; BB(0x005f2b3b);
    /* 005f2b3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2b3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b3f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f2b42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2b46: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5f2b4bu); f_005f2a60();
    /* 005f2b4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2b4d: je 0x5f2b8e */ if (fZ) goto L_005f2b8e;
L_005f2b4f:; BB(0x005f2b4f);
    /* 005f2b4f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2b52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b53: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f2b56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2b57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2b5a: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5f2b5fu); f_005f2a60();
    /* 005f2b5f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f2b62: movzx edx, byte ptr [ebp + 0xc] */ r_edx = (u32)R8((u32)(r_ebp+0xcu));
    /* 005f2b66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2b68: je 0x5f2b7c */ if (fZ) goto L_005f2b7c;
L_005f2b6a:; BB(0x005f2b6a);
    /* 005f2b6a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2b6d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f2b6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2b72: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005f2b78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2b7au); call_ind(t); }
    /* 005f2b7a: jmp 0x5f2b8c */ goto L_005f2b8c;
L_005f2b7c:; BB(0x005f2b7c);
    /* 005f2b7c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2b7f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f2b81: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2b84: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005f2b8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2b8cu); call_ind(t); }
L_005f2b8c:; BB(0x005f2b8c);
    /* 005f2b8c: jmp 0x5f2b32 */ goto L_005f2b32;
L_005f2b8e:; BB(0x005f2b8e);
    /* 005f2b8e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2b90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2b91: ret 8 */ FN_RET(0x005f2b20); r_esp += 12; return;
}

void f_005f2ba0(void) /* sub_5F2BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2ba0);
    /* 005f2ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2ba3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2ba6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f2ba9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2bb0: jmp 0x5f2bbb */ goto L_005f2bbb;
L_005f2bb2:; BB(0x005f2bb2);
    /* 005f2bb2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2bb5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2bb8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f2bbb:; BB(0x005f2bbb);
    /* 005f2bbb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2bbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2bbf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f2bc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2bc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2bc6: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5f2bcbu); f_005f2a60();
    /* 005f2bcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2bcd: je 0x5f2bf4 */ if (fZ) goto L_005f2bf4;
L_005f2bcf:; BB(0x005f2bcf);
    /* 005f2bcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2bd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2bd3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f2bd6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2bd7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2bda: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5f2bdfu); f_005f2a60();
    /* 005f2bdf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f2be2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2be5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f2be7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2bea: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 005f2bf0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f2bf2u); call_ind(t); }
    /* 005f2bf2: jmp 0x5f2bb2 */ goto L_005f2bb2;
L_005f2bf4:; BB(0x005f2bf4);
    /* 005f2bf4: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2bf6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2bf7: ret 4 */ FN_RET(0x005f2ba0); r_esp += 8; return;
}

void f_005f2c40(void) /* sub_5F2C40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2c40);
    /* 005f2c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2c43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2c46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f2c49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2c4d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2c50: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x5f2c55u); f_005f2300();
    /* 005f2c55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2c57: jne 0x5f2c5b */ if (!fZ) goto L_005f2c5b;
L_005f2c59:; BB(0x005f2c59);
    /* 005f2c59: jmp 0x5f2ca5 */ goto L_005f2ca5;
L_005f2c5b:; BB(0x005f2c5b);
    /* 005f2c5b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2c62: jmp 0x5f2c6d */ goto L_005f2c6d;
L_005f2c64:; BB(0x005f2c64);
    /* 005f2c64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2c67: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2c6a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005f2c6d:; BB(0x005f2c6d);
    /* 005f2c6d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f2c70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2c71: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2c74: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x5f2c79u); f_005f2300();
    /* 005f2c79: mov ecx, eax */ r_ecx = r_eax;
    /* 005f2c7b: call 0x5feda0 */ r_esp -= 4; W32(r_esp, 0x5f2c80u); f_005feda0();
    /* 005f2c80: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f2c83: jge 0x5f2ca5 */ if ((fS==fO)) goto L_005f2ca5;
L_005f2c85:; BB(0x005f2c85);
    /* 005f2c85: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2c88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2c89: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f2c8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2c8d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2c90: call 0x5f2300 */ r_esp -= 4; W32(r_esp, 0x5f2c95u); f_005f2300();
    /* 005f2c95: mov ecx, eax */ r_ecx = r_eax;
    /* 005f2c97: call 0x5ff080 */ r_esp -= 4; W32(r_esp, 0x5f2c9cu); f_005ff080();
    /* 005f2c9c: mov ecx, eax */ r_ecx = r_eax;
    /* 005f2c9e: call 0x5fd560 */ r_esp -= 4; W32(r_esp, 0x5f2ca3u); f_005fd560();
    /* 005f2ca3: jmp 0x5f2c64 */ goto L_005f2c64;
L_005f2ca5:; BB(0x005f2ca5);
    /* 005f2ca5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2ca7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2ca8: ret 4 */ FN_RET(0x005f2c40); r_esp += 8; return;
}

void f_005f2cb0(void) /* sub_5F2CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2cb0);
    /* 005f2cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2cb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2cb6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f2cb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cbb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2cbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cbf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2cc2: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5f2cc7u); f_005f2a60();
    /* 005f2cc7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f2cca: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2cce: je 0x5f2cd8 */ if (fZ) goto L_005f2cd8;
L_005f2cd0:; BB(0x005f2cd0);
    /* 005f2cd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2cd3: call 0x5fd440 */ r_esp -= 4; W32(r_esp, 0x5f2cd8u); f_005fd440();
L_005f2cd8:; BB(0x005f2cd8);
    /* 005f2cd8: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2cda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2cdb: ret 4 */ FN_RET(0x005f2cb0); r_esp += 8; return;
}

void f_005f2ce0(void) /* sub_5F2CE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2ce0);
    /* 005f2ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2ce3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2ce6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f2ce9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2ceb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2cee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2cef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2cf2: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5f2cf7u); f_005f2a60();
    /* 005f2cf7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f2cfa: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2cfe: je 0x5f2d08 */ if (fZ) goto L_005f2d08;
L_005f2d00:; BB(0x005f2d00);
    /* 005f2d00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2d03: call 0x5fd560 */ r_esp -= 4; W32(r_esp, 0x5f2d08u); f_005fd560();
L_005f2d08:; BB(0x005f2d08);
    /* 005f2d08: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2d0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2d0b: ret 4 */ FN_RET(0x005f2ce0); r_esp += 8; return;
}

void f_005f2d10(void) /* sub_5F2D10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2d10);
    /* 005f2d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d11: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2d13: cmp dword ptr [0x15e55e4], 0 */ {  u32 a = R32((u32)(0x15e55e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f2d1a: je 0x5f2d35 */ if (fZ) goto L_005f2d35;
L_005f2d1c:; BB(0x005f2d1c);
    /* 005f2d1c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d1e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f2d21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f2d22: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005f2d28: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f2d2a: mov ecx, dword ptr [0x15e55e4] */ r_ecx = R32((u32)(0x15e55e4u));
    /* 005f2d30: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f2d33: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2d35u); call_ind(t); }
L_005f2d35:; BB(0x005f2d35);
    /* 005f2d35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2d36: ret  */ FN_RET(0x005f2d10); r_esp += 4; return;
}

