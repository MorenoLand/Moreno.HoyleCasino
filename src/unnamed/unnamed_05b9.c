#include "protos.h"

void f_005b9320(void) /* sub_5B9320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9320);
    /* 005b9320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9321: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9327: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b932a: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b932e: jne 0x5b933f */ if (!fZ) goto L_005b933f;
L_005b9330:; BB(0x005b9330);
    /* 005b9330: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9333: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005b9339: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005b933c: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
L_005b933f:; BB(0x005b933f);
    /* 005b933f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9342: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 005b9345: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9347: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9348: ret 4 */ FN_RET(0x005b9320); r_esp += 8; return;
}

void f_005b9440(void) /* sub_5B9440 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9440);
    /* 005b9440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9441: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9443: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9449: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 005b944f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b9452: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9455: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9456: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005b945c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b945f: call 0x5b9ec0 */ r_esp -= 4; W32(r_esp, 0x5b9464u); f_005b9ec0();
    /* 005b9464: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 005b946a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b946d: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005b9470: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005b9473: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9477: jne 0x5b9485 */ if (!fZ) goto L_005b9485;
L_005b9479:; BB(0x005b9479);
    /* 005b9479: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 005b9483: jmp 0x5b949a */ goto L_005b949a;
L_005b9485:; BB(0x005b9485);
    /* 005b9485: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005b9488: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005b948b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005b948e: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b9491: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005b9494: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
L_005b949a:; BB(0x005b949a);
    /* 005b949a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b949d: cmp eax, dword ptr [ebp - 0xcc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff34u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b94a3: jb 0x5b94ab */ if (fC) goto L_005b94ab;
L_005b94a5:; BB(0x005b94a5);
    /* 005b94a5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5b94abu); call_ind(t); }
L_005b94ab:; BB(0x005b94ab);
    /* 005b94ab: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005b94ae: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005b94b1: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005b94b4: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b94b7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b94ba: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 005b94bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b94be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b94c1: call 0x5ba090 */ r_esp -= 4; W32(r_esp, 0x5b94c6u); f_005ba090();
    /* 005b94c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005b94c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b94c9: ret 8 */ FN_RET(0x005b9440); r_esp += 12; return;
}

void f_005b94d0(void) /* sub_5B94D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b94d0);
    /* 005b94d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b94d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b94d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b94d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b94d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b94da: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005b94dd: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 005b94e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b94e3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005b94e6: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005b94e9: mov esp, ebp */ r_esp = r_ebp;
    /* 005b94eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b94ec: ret 8 */ FN_RET(0x005b94d0); r_esp += 12; return;
}

void f_005b94f0(void) /* sub_5B94F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b94f0);
    /* 005b94f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b94f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b94f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b94f5: push 0x6a7f22 */ { u32 v = 0x6a7f22u; r_esp -= 4; W32(r_esp, v); }
    /* 005b94fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005b9500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9501: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9504: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005b9509: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b950b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b950c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005b950f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005b9515: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005b9518: push 0x315927 */ { u32 v = 0x315927u; r_esp -= 4; W32(r_esp, v); }
    /* 005b951d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b9520: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005b9523: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5b9528u); f_005fb300();
    /* 005b9528: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b952a: jne 0x5b959d */ if (!fZ) goto L_005b959d;
L_005b952c:; BB(0x005b952c);
    /* 005b952c: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9531: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b9536u); f_00686d82();
    /* 005b9536: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b9539: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b953c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005b9543: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9547: je 0x5b9556 */ if (fZ) goto L_005b9556;
L_005b9549:; BB(0x005b9549);
    /* 005b9549: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b954c: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5b9551u); f_00601a80();
    /* 005b9551: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005b9554: jmp 0x5b955d */ goto L_005b955d;
L_005b9556:; BB(0x005b9556);
    /* 005b9556: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005b955d:; BB(0x005b955d);
    /* 005b955d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b9560: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005b9563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b956a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b956c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b956e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9570: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9572: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9574: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9579: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b957c: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 005b957f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9580: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9582: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9584: push 0x315927 */ { u32 v = 0x315927u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9589: push 0x315927 */ { u32 v = 0x315927u; r_esp -= 4; W32(r_esp, v); }
    /* 005b958e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005b9591: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9592: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b9595: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005b9598: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5b959du); f_005f9de0();
L_005b959d:; BB(0x005b959d);
    /* 005b959d: push 0x315929 */ { u32 v = 0x315929u; r_esp -= 4; W32(r_esp, v); }
    /* 005b95a2: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b95a5: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005b95a8: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5b95adu); f_005fb300();
    /* 005b95ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b95af: jne 0x5b9659 */ if (!fZ) goto L_005b9659;
L_005b95b5:; BB(0x005b95b5);
    /* 005b95b5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b95b8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b95bb: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005b95be: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b95c1: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b95c5: jne 0x5b95d0 */ if (!fZ) goto L_005b95d0;
L_005b95c7:; BB(0x005b95c7);
    /* 005b95c7: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005b95ce: jmp 0x5b95e2 */ goto L_005b95e2;
L_005b95d0:; BB(0x005b95d0);
    /* 005b95d0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b95d3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b95d6: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005b95d9: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005b95dc: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005b95df: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
L_005b95e2:; BB(0x005b95e2);
    /* 005b95e2: cmp dword ptr [ebp - 0x40], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b95e6: jle 0x5b9659 */ if ((fZ||fS!=fO)) goto L_005b9659;
L_005b95e8:; BB(0x005b95e8);
    /* 005b95e8: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b95ed: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b95f2u); f_00686d82();
    /* 005b95f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b95f5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b95f8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005b95ff: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9603: je 0x5b9612 */ if (fZ) goto L_005b9612;
L_005b9605:; BB(0x005b9605);
    /* 005b9605: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9608: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5b960du); f_00601a80();
    /* 005b960d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005b9610: jmp 0x5b9619 */ goto L_005b9619;
L_005b9612:; BB(0x005b9612);
    /* 005b9612: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_005b9619:; BB(0x005b9619);
    /* 005b9619: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b961c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b961f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b9626: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9628: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b962a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b962c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b962e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b9630: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9635: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b9638: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005b963b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b963c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b963e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9640: push 0x315929 */ { u32 v = 0x315929u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9645: push 0x315929 */ { u32 v = 0x315929u; r_esp -= 4; W32(r_esp, v); }
    /* 005b964a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b964d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b964e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b9651: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005b9654: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5b9659u); f_005f9de0();
L_005b9659:; BB(0x005b9659);
    /* 005b9659: push 0x315928 */ { u32 v = 0x315928u; r_esp -= 4; W32(r_esp, v); }
    /* 005b965e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b9661: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005b9664: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5b9669u); f_005fb300();
    /* 005b9669: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b966b: jne 0x5b9715 */ if (!fZ) goto L_005b9715;
L_005b9671:; BB(0x005b9671);
    /* 005b9671: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b9674: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9677: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005b967a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b967d: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9681: jne 0x5b968c */ if (!fZ) goto L_005b968c;
L_005b9683:; BB(0x005b9683);
    /* 005b9683: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005b968a: jmp 0x5b969e */ goto L_005b969e;
L_005b968c:; BB(0x005b968c);
    /* 005b968c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b968f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b9692: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005b9695: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9698: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b969b: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
L_005b969e:; BB(0x005b969e);
    /* 005b969e: cmp dword ptr [ebp - 0x48], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b96a2: jle 0x5b9715 */ if ((fZ||fS!=fO)) goto L_005b9715;
L_005b96a4:; BB(0x005b96a4);
    /* 005b96a4: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 005b96a9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5b96aeu); f_00686d82();
    /* 005b96ae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b96b1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b96b4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005b96bb: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b96bf: je 0x5b96ce */ if (fZ) goto L_005b96ce;
L_005b96c1:; BB(0x005b96c1);
    /* 005b96c1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b96c4: call 0x601a80 */ r_esp -= 4; W32(r_esp, 0x5b96c9u); f_00601a80();
    /* 005b96c9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005b96cc: jmp 0x5b96d5 */ goto L_005b96d5;
L_005b96ce:; BB(0x005b96ce);
    /* 005b96ce: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005b96d5:; BB(0x005b96d5);
    /* 005b96d5: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b96d8: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005b96db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005b96e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b96e4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b96e6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b96e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b96ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b96ec: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005b96f1: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b96f4: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 005b96f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b96f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b96fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b96fc: push 0x315928 */ { u32 v = 0x315928u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9701: push 0x315928 */ { u32 v = 0x315928u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9706: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005b9709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b970a: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b970d: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005b9710: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5b9715u); f_005f9de0();
L_005b9715:; BB(0x005b9715);
    /* 005b9715: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005b971c: jmp 0x5b9727 */ goto L_005b9727;
L_005b971e:; BB(0x005b971e);
    /* 005b971e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9721: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9724: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_005b9727:; BB(0x005b9727);
    /* 005b9727: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b972a: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b972d: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005b9730: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005b9733: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9737: jne 0x5b9742 */ if (!fZ) goto L_005b9742;
L_005b9739:; BB(0x005b9739);
    /* 005b9739: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005b9740: jmp 0x5b9754 */ goto L_005b9754;
L_005b9742:; BB(0x005b9742);
    /* 005b9742: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b9745: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b9748: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005b974b: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b974e: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005b9751: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_005b9754:; BB(0x005b9754);
    /* 005b9754: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9757: cmp ecx, dword ptr [ebp - 0x50] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b975a: jge 0x5b9777 */ if ((fS==fO)) goto L_005b9777;
L_005b975c:; BB(0x005b975c);
    /* 005b975c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b975f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b9762: cmp eax, dword ptr [edx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9765: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005b9768: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9769: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005b976c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b976d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b9770: call 0x5b9900 */ r_esp -= 4; W32(r_esp, 0x5b9775u); f_005b9900();
    /* 005b9775: jmp 0x5b971e */ goto L_005b971e;
L_005b9777:; BB(0x005b9777);
    /* 005b9777: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b977a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005b9781: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b9782: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9784: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9785: ret  */ FN_RET(0x005b94f0); r_esp += 4; return;
}

void f_005b9900(void) /* sub_5B9900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9900);
    /* 005b9900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9901: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9903: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9906: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005b9909: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b990c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b990f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005b9912: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b9915: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9919: jne 0x5b9924 */ if (!fZ) goto L_005b9924;
L_005b991b:; BB(0x005b991b);
    /* 005b991b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005b9922: jmp 0x5b9936 */ goto L_005b9936;
L_005b9924:; BB(0x005b9924);
    /* 005b9924: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b9927: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b992a: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005b992d: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9930: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b9933: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
L_005b9936:; BB(0x005b9936);
    /* 005b9936: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9939: cmp edx, dword ptr [ebp - 0x50] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b993c: jl 0x5b9943 */ if ((fS!=fO)) goto L_005b9943;
L_005b993e:; BB(0x005b993e);
    /* 005b993e: jmp 0x5b9a9b */ goto L_005b9a9b;
L_005b9943:; BB(0x005b9943);
    /* 005b9943: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b9946: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b9949: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005b994c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b994f: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9953: jne 0x5b995e */ if (!fZ) goto L_005b995e;
L_005b9955:; BB(0x005b9955);
    /* 005b9955: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005b995c: jmp 0x5b9970 */ goto L_005b9970;
L_005b995e:; BB(0x005b995e);
    /* 005b995e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b9961: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b9964: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005b9967: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b996a: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b996d: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_005b9970:; BB(0x005b9970);
    /* 005b9970: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9973: cmp edx, dword ptr [ebp - 0x54] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9976: jb 0x5b997e */ if (fC) goto L_005b997e;
L_005b9978:; BB(0x005b9978);
    /* 005b9978: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5b997eu); call_ind(t); }
L_005b997e:; BB(0x005b997e);
    /* 005b997e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9981: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005b9984: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b9987: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b998a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005b998d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9990: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9991: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005b9994: call 0x5b9320 */ r_esp -= 4; W32(r_esp, 0x5b9999u); f_005b9320();
    /* 005b9999: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005b999c: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005b999f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b99a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b99a3: call 0x5b9fd0 */ r_esp -= 4; W32(r_esp, 0x5b99a8u); f_005b9fd0();
    /* 005b99a8: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 005b99ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b99ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005b99af: call 0x5ba030 */ r_esp -= 4; W32(r_esp, 0x5b99b4u); f_005ba030();
    /* 005b99b4: jmp 0x5b99d6 */ goto L_005b99d6;
L_005b99b6:; BB(0x005b99b6);
    /* 005b99b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b99b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b99bc: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005b99bf: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005b99c2: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005b99c5: call 0x5ba190 */ r_esp -= 4; W32(r_esp, 0x5b99cau); f_005ba190();
    /* 005b99ca: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b99cd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005b99d0: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005b99d3: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_005b99d6:; BB(0x005b99d6);
    /* 005b99d6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b99da: je 0x5b99e4 */ if (fZ) goto L_005b99e4;
L_005b99dc:; BB(0x005b99dc);
    /* 005b99dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b99df: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b99e2: je 0x5b99ea */ if (fZ) goto L_005b99ea;
L_005b99e4:; BB(0x005b99e4);
    /* 005b99e4: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5b99eau); call_ind(t); }
L_005b99ea:; BB(0x005b99ea);
    /* 005b99ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b99ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b99ef: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b99f2: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005b99f5: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005b99f8: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005b99fa: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005b99fc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b99ff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005b9a02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9a04: je 0x5b9a9b */ if (fZ) goto L_005b9a9b;
L_005b9a0a:; BB(0x005b9a0a);
    /* 005b9a0a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9a0e: jne 0x5b9a16 */ if (!fZ) goto L_005b9a16;
L_005b9a10:; BB(0x005b9a10);
    /* 005b9a10: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5b9a16u); call_ind(t); }
L_005b9a16:; BB(0x005b9a16);
    /* 005b9a16: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9a1c: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9a1f: jb 0x5b9a27 */ if (fC) goto L_005b9a27;
L_005b9a21:; BB(0x005b9a21);
    /* 005b9a21: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5b9a27u); call_ind(t); }
L_005b9a27:; BB(0x005b9a27);
    /* 005b9a27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9a2a: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005b9a2d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005b9a30: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b9a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9a33: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9a36: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5b9a3bu); f_005fb2b0();
    /* 005b9a3b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005b9a3e: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9a42: je 0x5b9a50 */ if (fZ) goto L_005b9a50;
L_005b9a44:; BB(0x005b9a44);
    /* 005b9a44: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005b9a47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9a48: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005b9a4b: call 0x5f5460 */ r_esp -= 4; W32(r_esp, 0x5b9a50u); f_005f5460();
L_005b9a50:; BB(0x005b9a50);
    /* 005b9a50: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9a54: jne 0x5b9a5c */ if (!fZ) goto L_005b9a5c;
L_005b9a56:; BB(0x005b9a56);
    /* 005b9a56: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5b9a5cu); call_ind(t); }
L_005b9a5c:; BB(0x005b9a5c);
    /* 005b9a5c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9a5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9a62: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005b9a65: jb 0x5b9a6d */ if (fC) goto L_005b9a6d;
L_005b9a67:; BB(0x005b9a67);
    /* 005b9a67: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5b9a6du); call_ind(t); }
L_005b9a6d:; BB(0x005b9a6d);
    /* 005b9a6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005b9a70: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005b9a73: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005b9a76: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005b9a78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9a79: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005b9a7c: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5b9a81u); f_005fb550();
    /* 005b9a81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b9a84: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9a88: je 0x5b9a96 */ if (fZ) goto L_005b9a96;
L_005b9a8a:; BB(0x005b9a8a);
    /* 005b9a8a: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005b9a8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9a8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9a91: call 0x5f5460 */ r_esp -= 4; W32(r_esp, 0x5b9a96u); f_005f5460();
L_005b9a96:; BB(0x005b9a96);
    /* 005b9a96: jmp 0x5b99b6 */ goto L_005b99b6;
L_005b9a9b:; BB(0x005b9a9b);
    /* 005b9a9b: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9a9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9a9e: ret 8 */ FN_RET(0x005b9900); r_esp += 12; return;
}

void f_005b9ea0(void) /* sub_5B9EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9ea0);
    /* 005b9ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9ea3: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9ea6: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005b9ea9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9eac: call 0x5b9f10 */ r_esp -= 4; W32(r_esp, 0x5b9eb1u); f_005b9f10();
    /* 005b9eb1: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9eb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9eb4: ret  */ FN_RET(0x005b9ea0); r_esp += 4; return;
}

void f_005b9ec0(void) /* sub_5B9EC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9ec0);
    /* 005b9ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9ec3: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9ec9: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 005b9ecf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9ed2: mov eax, esp */ r_eax = r_esp;
    /* 005b9ed4: mov dword ptr [ebp - 4], esp */ W32((u32)(r_ebp+0xfffffffcu), r_esp);
    /* 005b9ed7: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005b9eda: lea ecx, [ebp - 0xd] */ r_ecx = (u32)(r_ebp+0xfffffff3u);
    /* 005b9edd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005b9ee0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ee2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b9ee5: call 0x5bbd80 */ r_esp -= 4; W32(r_esp, 0x5b9eeau); f_005bbd80();
    /* 005b9eea: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005b9eed: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 005b9ef3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005b9ef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b9ef7: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 005b9efd: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x5b9f02u); f_005ba1e0();
    /* 005b9f02: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9f04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9f05: ret 4 */ FN_RET(0x005b9ec0); r_esp += 8; return;
}

void f_005b9f10(void) /* sub_5B9F10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9f10);
    /* 005b9f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f11: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9f13: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9f16: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 005b9f19: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9f1c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9f20: je 0x5b9fad */ if (fZ) goto L_005b9fad;
L_005b9f26:; BB(0x005b9f26);
    /* 005b9f26: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9f29: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005b9f2c: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005b9f2f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9f32: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b9f35: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005b9f38: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005b9f3b: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005b9f3e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005b9f41: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005b9f44: mov cl, byte ptr [ebp - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 005b9f47: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005b9f4a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005b9f4d: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005b9f50: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005b9f53: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005b9f56: jmp 0x5b9f61 */ goto L_005b9f61;
L_005b9f58:; BB(0x005b9f58);
    /* 005b9f58: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9f5b: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9f5e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_005b9f61:; BB(0x005b9f61);
    /* 005b9f61: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9f64: cmp edx, dword ptr [ebp - 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9f67: je 0x5b9f86 */ if (fZ) goto L_005b9f86;
L_005b9f69:; BB(0x005b9f69);
    /* 005b9f69: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9f6c: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x5b9f71u); f_005be450();
    /* 005b9f71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b9f73: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005b9f76: je 0x5b9f84 */ if (fZ) goto L_005b9f84;
L_005b9f78:; BB(0x005b9f78);
    /* 005b9f78: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005b9f7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9f7c: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5b9f81u); f_00686cae();
    /* 005b9f81: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b9f84:; BB(0x005b9f84);
    /* 005b9f84: jmp 0x5b9f58 */ goto L_005b9f58;
L_005b9f86:; BB(0x005b9f86);
    /* 005b9f86: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9f89: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9f8c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005b9f8f: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005b9f92: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b9f95: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005b9f98: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9f9b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005b9f9e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005b9fa1: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005b9fa4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b9fa5: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5b9faau); f_00686cae();
    /* 005b9faa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b9fad:; BB(0x005b9fad);
    /* 005b9fad: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9fb0: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005b9fb7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9fba: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005b9fc1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005b9fc4: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 005b9fcb: mov esp, ebp */ r_esp = r_ebp;
    /* 005b9fcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b9fce: ret  */ FN_RET(0x005b9f10); r_esp += 4; return;
}

void f_005b9fd0(void) /* sub_5B9FD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005b9fd0);
    /* 005b9fd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b9fd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005b9fd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b9fd6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005b9fd9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9fdc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b9fdf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005b9fe2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005b9fe5: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 005b9feb: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b9fef: je 0x5ba007 */ if (fZ) goto L_005ba007;
L_005b9ff1:; BB(0x005b9ff1);
    /* 005b9ff1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9ff4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005b9ff7: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005b9ffa: ja 0x5ba007 */ if ((!fC&&!fZ)) goto L_005ba007;
L_005b9ffc:; BB(0x005b9ffc);
    /* 005b9ffc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005b9fff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba002: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005ba005: jbe 0x5ba00d */ if ((fC||fZ)) goto L_005ba00d;
L_005ba007:; BB(0x005ba007);
    /* 005ba007: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x5ba00du); call_ind(t); }
L_005ba00d:; BB(0x005ba00d);
    /* 005ba00d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ba010: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ba013: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005ba015: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba018: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ba01b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005ba01e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ba021: mov esp, ebp */ r_esp = r_ebp;
    /* 005ba023: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ba024: ret 4 */ FN_RET(0x005b9fd0); r_esp += 8; return;
}

